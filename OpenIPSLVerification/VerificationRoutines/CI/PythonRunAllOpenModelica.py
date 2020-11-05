#!/usr/bin/env python
# coding: utf-8

from OMPython import OMCSessionZMQ
omc = OMCSessionZMQ()
from modelicares import SimRes
import pandas as pd
import numpy as np
import os
import shutil

RepoDir = os.getcwd() 
print(RepoDir)

#This is intended to be used in the manuelnvro Dell using Dymola 2020
Fault = RepoDir + "/Fault/"
LoadVariation = RepoDir + "/LoadVariation/"
ReferenceStep = RepoDir + "ReferenceStep/"

#Run Fault
print('---------------------------------------------------------- Open Modelica Fault Testing ----------------------------------------------------------')
try:
    os.chdir(f""+Fault+"")
    exec(open("FaultRunAllOpenModelica.py").read())
    print('Fault Testing OK...')
except:
    print('Error in Fault Testing...')

#Run Load Variation
print('---------------------------------------------------------- Open Modelica Load Variation Testing ----------------------------------------------------------')
try:
    os.chdir(f""+LoadVariation+"")
    exec(open("LoadVariationRunAllOpenModelica.py").read())
    print('Load Variation Testing OK...')
except:
    print('Error in Load Variation Testing...')

#Run Reference Step
print('---------------------------------------------------------- Open Modelica Reference Step Testing ----------------------------------------------------------')
try:
    os.chdir(f""+ReferenceStep+"")
    exec(open("ReferenceStepRunAllOpenModelica.py").read())
    print('Reference Step Testing OK...')
except:
    print('Error in Reference Step Testing...')

print('---------------------------------------------------------- End of All Open Modelica Simulations ----------------------------------------------------------')

