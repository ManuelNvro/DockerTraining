import sys
from unitTests import unitTests
import os


RepoDir = os.getcwd() 
RepoDir = os.path.abspath(os.path.join(RepoDir, os.pardir))
print(RepoDir)

unit = unitTests(RepoDir + "/OpenIPSL")
checkFail = 0

check = unit.runModelCheck("OpenIPSL", RepoDir + "/OpenIPSL/package.mo")
if not check:
	checkFail += 1
	#sys.exit(1)
else:
	print("Model Check Passed...")
	#sys.exit(0)
