#!/usr/bin/env python
# coding: utf-8

# Libraries Import

from OMPython import OMCSessionZMQ
omc = OMCSessionZMQ()
from modelicares import SimRes
import pandas as pd
import numpy as np
import os
import shutil
import git



# Folder Definitions 

# get current directory and set it to the beginning of the repository 
RepoDir = os.getcwd() 
RepoDir = os.path.abspath(os.path.join(RepoDir, os.pardir))
print(RepoDir)
#OpenIPSL Location
OpenIPSL = RepoDir + "/OpenIPSL/"
#GitHub Location
GitHubOpenIPSL = "https://github.com/marcelofcastro/OpenIPSL.git"
OpenIPSLPackage = RepoDir + "/OpenIPSL/OpenIPSL/package.mo"
OpenModelica = RepoDir + "/OpenModelica/"

# Unit Test Funcitons Definitions

def excitersUnit():
	print("here are exciters unit fault tests")

def machinesUnit():
	print("here are machines unit fault tests")

def turbinegovernorsUnit():
	print("here are turbine governors unit fault tests")	

def powersystemstabilizersUnit():
	print("here are power systems stabilizers unit fault tests")

def windturbinesUnit():
	print("here are wind turbines unit fault tests")

#Main Code
#Deleting old OpenIPSL library version
try:
    shutil.rmtree(f""+OpenIPSL+"")
except:
   pass
#Pulling latest OpenIPSL library version
print('Pulling latest OpenIPSL library version...\n')
#git.Git(""+OpenModelica+"").clone(""+GitHubOpenIPSL+"")
print("Fault Open Modelica Exciters Simulation Start...\n")


excitersUnit()

machinesUnit()

turbinegovernorsUnit()

powersystemstabilizersUnit()

windturbinesUnit()

