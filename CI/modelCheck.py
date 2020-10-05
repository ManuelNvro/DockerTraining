import sys
from unitTests import unitTests
import os


RepoDir = os.getcwd() 
RepoDir = os.path.abspath(os.path.join(RepoDir, os.pardir))
print(RepoDir)

unit = unitTests(RepoDir + "/OpenIPSL")
checkFail = 0

print("Running Model Check...")
check = unit.runModelCheck("OpenIPSL", RepoDir + "/OpenIPSL/package.mo")
if not check:
	checkFail += 1
	#sys.exit(1)
else:
	print("Running Model Check Passed...")
	#sys.exit(0)
print(checkFail)
