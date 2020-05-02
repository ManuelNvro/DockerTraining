#!/usr/bin/env python
# coding: utf-8

# In[1]:


from OMPython import OMCSessionZMQ
omc = OMCSessionZMQ()
from modelicares import SimRes
import pandas as pd
import numpy as np
import os
import shutil
import git


# In[2]:


#By default, the code runs in manuelnvro OM 16. To change the computer change the following folders.
#OpenIPSL Location
OpenIPSL = "/home/manuelnvro/dev/Gitted/DockerTraining/OpenIPSL/"
#GitHub Location
GitHubOpenIPSL = "https://github.com/marcelofcastro/OpenIPSL.git"
OpenIPSLPackage = "/home/manuelnvro/dev/Gitted/DockerTraining/OpenIPSL/OpenIPSL/package.mo"
#Working Directory
WorkingDir = "/home/manuelnvro/dev/Gitted/DockerTraining/SampleModel/WorkingDir/"


# In[3]:


print(omc.sendExpression("getVersion()"))
print("Open Modelica Docker Trial Simulation Start...")


# In[4]:


#Delete old results
shutil.rmtree(''+WorkingDir+'')
#Create Exciters folder
os.makedirs(''+WorkingDir+'/GENROU/')


# In[5]:


machines = { 'names' : ["GENROU","GENSAL", "GENCLS", "GENROE", "GENSAE", "CSVGN1"],
            'path' : ["OpenIPSL.Examples.Machines.PSSE.GENROU", "OpenIPSL.Examples.Machines.PSSE.GENSAL",
                      "OpenIPSL.Examples.Machines.PSSE.GENCLS", "OpenIPSL.Examples.Machines.PSSE.GENROE", 
                      "OpenIPSL.Examples.Machines.PSSE.GENSAE", "OpenIPSL.Examples.Machines.PSSE.CSVGN1"],
            'delta' : ['gENROU.delta', 'gENSAL.delta', 'gENCLS2.delta', 'gENROE.delta', 'gENSAE.delta', 'cSVGN1.delta'],
           'pelec' : ['gENROU.PELEC', 'gENSAL.PELEC', 'gENCLS2.P', 'gENROE.PELEC', 'gENSAE.PELEC', 'cSVGN1.PELEC'],
           'speed' : ['gENROU.SPEED', 'gENSAL.SPEED', 'gENCLS2.omega', 'gENROE.SPEED', 'gENSAE.SPEED', 'cSVGN1.SPEED'],
           'pmech' : ['gENROU.PMECH', 'gENSAL.PMECH', 'gENCLS2.P', 'gENROE.PMECH', 'gENSAE.PMECH', 'cSVGN1.PMECH']}


# In[6]:


machineName = 'GENROU'
machineNumber = 0


# In[7]:


print(f"Fault {machineName} Simulation Start...")
try:
    omc.sendExpression(f"cd(\"{WorkingDir}" + machineName +"\")")
    omc.sendExpression(f"loadFile(\"{OpenIPSLPackage}\")")
    omc.sendExpression("instantiateModel(OpenIPSL)")
    omc.sendExpression(f"simulate(OpenIPSL.Examples.Machines.PSSE.{machineName}, stopTime=10.0,method=\"rungekutta\",numberOfIntervals=5000,tolerance=1e-06)")
    sim = SimRes(""+WorkingDir+f"{machineName}/OpenIPSL.Examples.Machines.PSSE.{machineName}_res.mat")
    print(f"{machineName} Simulation Finished...")
except:
    print(f"{machineName} simulation error or model not found...")


# In[10]:


try:
    print(".csv Writing Start...")
    variables = ['Time', machines['delta'][machineNumber], machines['pelec'][machineNumber], machines['pmech'][machineNumber], machines['speed'][machineNumber], 'GEN1.V', 'LOAD.V', 'GEN2.V', 'FAULT.V' ]
    df_variables = pd.DataFrame([], columns = variables)
    for var in variables:
        df_variables.drop(var, axis = 1, inplace = True)
        #Change from Radians to Degrees
        if var == machines['delta'][machineNumber]:
            df_variables[var] = np.array(sim[var].values()*(180/np.pi))    
        else:
            #check if a variable does not change during the simulation and then and make a ones array and multiply by the value
            try:
                df_variables[var] = np.array(sim[var].values())
            except:
                first = np.array(sim[var].values())
                df_variables[var] = first[0] * np.ones(df_variables['Time'].size)
    print(f"{machineName} Variables OK...")
    #Changing current directory
    os.chdir(f""+WorkingDir+"")
    df_variables.to_csv(f'{machineName}.csv', index = False)          
    print(f"{machineName} Write OK...")
except:
    print(f"{machineName} variable error... \n")       
try:
    shutil.rmtree(""+WorkingDir+f"{machineName}/")
    print("Delete OK...\n")
except:
    print("Error...\n")          


# In[ ]:


try:
    print("Closing Open Modelica...")
    omc.sendExpression("quit()")
    print("OpenModelica Close OK...")
except:
    print("Open Modelica closing error...")

