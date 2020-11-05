#!/usr/bin/env python
# coding: utf-8

from OMPython import OMCSessionZMQ
from modelicares import SimRes
import pandas as pd
import numpy as np
import os
import shutil

# get current directory and set it to the beginning of the repository 
RepoDir = os.getcwd()
RepoDir = os.path.abspath(os.path.join(RepoDir, os.pardir))
RepoDir = os.path.abspath(os.path.join(RepoDir, os.pardir))

#OpenIPSL Location
OpenIPSL = RepoDir + "/OpenIPSL/"
OpenIPSLPackage = RepoDir + "/OpenIPSL/OpenIPSL/package.mo"
#Working Directory
FExcitersWorkingDir = RepoDir + "/OpenModelica/WorkingDir/Fault/Exciters/"


libraryPath = RepoDir + "/OpenIPSL/OpenIPSL/package.mo"
libraryName = "OpenIPSL"


from OMPython import OMCSessionZMQ
omc = OMCSessionZMQ()
omc.sendExpression("getVersion()")
omc.sendExpression("cd()")
omc.sendExpression("loadModel(Modelica)")
omc.sendExpression("loadFile(getInstallationDirectoryPath() + \"/share/doc/omc/testmodels/BouncingBall.mo\")")
omc.sendExpression("instantiateModel(BouncingBall)")
