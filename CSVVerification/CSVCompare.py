#!/usr/bin/env python
# coding: utf-8
import os
import shutil

ResultDir = "\"/home/manuelnvro/dev/Gitted/DockerTraining/CSVVerification/\""
DockerDir = "\"/home/manuelnvro/dev/Gitted/DockerTraining/CSVVerification/Docker/Fault/Exciters/ESAC2A.csv\""
PSSEDir = "\"/home/manuelnvro/dev/Gitted/DockerTraining/CSVVerification/PSSE/Fault/Exciters/ESAC1A.csv\""
comma = "\",\""

print("mono Compare.exe --mode CsvFileCompare --delimiter "+comma+ " --reportdir "+ ResultDir +" --tolerance 1e-2 "+ DockerDir + " "+ PSSEDir)

result = os.system("mono Compare.exe --mode CsvFileCompare --delimiter " +comma+ " --reportdir " +ResultDir+ " --tolerance 1e-2 " +DockerDir+ " " +PSSEDir)
print(result)