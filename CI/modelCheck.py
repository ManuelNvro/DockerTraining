import sys
from unitTests import unitTests
import os

RepoDir = os.getcwd() 

#RepoDir = os.path.abspath(os.path.join(RepoDir, os.pardir))

print("ReporDir is: " + RepoDir)
print("Unit test start...")
unit = unitTests(RepoDir + "/CI/OpenIPSL/package.mo")
print("Done with initialization")

totalFail = 0
print("Library Path is: " + RepoDir + "/CI/OpenIPSL/package.mo")
checkFail = unit.runModelCheck("OpenIPSL", RepoDir + "/CI/OpenIPSL/package.mo")

FaultFail = 0

LoadVariationFail = 0

ReferenceStepFail = 0

totalFail = checkFail + FaultFail + LoadVariationFail + ReferenceStepFail

if totalFail != 0:
	print("Error: some tests did not pass!\n")
	print("Model Check Errors: " + str(checkFail))
	print("Fault Unit Test Errors: " + str(FaultFail))
	print("Load Variation Check Errors: " + str(LoadVariationFail))
	print("Reference Step Check Errors: " + str(ReferenceStepFail))
	print("Total Erros: " + str(totalFail))
	sys.exit(1)
else:
	print("All tessts passed! ready to merge...")
	sys.exit(0)
