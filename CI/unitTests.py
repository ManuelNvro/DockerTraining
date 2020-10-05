import os
from OMPython import OMCSessionZMQ

class unitTests():
    '''
    Python class used to run CI tests
    '''
    def __init__(self, rootPath):
        '''
        Constructor starts omc and loads MSL
        '''
        self.rootPath = rootPath
        self.omc = OMCSessionZMQ()
        os.chdir(self.rootPath)
        self.omc.sendExpression("loadModel(Modelica)")


    def loadLibrary(self, libraryName, libraryPath):
        # Attempt to load the library
        if self.omc.sendExpression('loadFile("%s")' % (libraryPath)):
            print("Load success: %s" % libraryName)
        else:
            errorMessage = libraryName + " was not loaded! Check the library path:\n" + libraryPath
            raise Exception(errorMessage)

    def runModelCheck(self, libraryName, libraryPath):
        # Load library
        self.loadLibrary(libraryName,libraryPath)
        print("Model Check Start...")
        testsFailed = 0
        testsPassed = 0
        #testList = self.omc.sendExpression('getClassNames(%s,recursive=true)' % libraryName)
        testList = {'exciters' : ["OpenIPSL.Examples.Controls.PSSE.ES.AC7B", "OpenIPSL.Examples.Controls.PSSE.ES.AC8B",
                     "OpenIPSL.Examples.Controls.PSSE.ES.ESAC1A", "OpenIPSL.Examples.Controls.PSSE.ES.ESAC2A",
                      "OpenIPSL.Examples.Controls.PSSE.ES.ESAC6A", "OpenIPSL.Examples.Controls.PSSE.ES.ESDC1A",
                      "OpenIPSL.Examples.Controls.PSSE.ES.ESST1A", "OpenIPSL.Examples.Controls.PSSE.ES.ESST3A",
                      "OpenIPSL.Examples.Controls.PSSE.ES.ESST4B", "OpenIPSL.Examples.Controls.PSSE.ES.EXAC1",
                      "OpenIPSL.Examples.Controls.PSSE.ES.EXAC2", "OpenIPSL.Examples.Controls.PSSE.ES.EXAC3",
                      "OpenIPSL.Examples.Controls.PSSE.ES.EXDC2", "OpenIPSL.Examples.Controls.PSSE.ES.EXPIC1",
                      "OpenIPSL.Examples.Controls.PSSE.ES.EXST1", "OpenIPSL.Examples.Controls.PSSE.ES.EXST3",
                      "OpenIPSL.Examples.Controls.PSSE.ES.IEEET1", "OpenIPSL.Examples.Controls.PSSE.ES.IEEET2",
                      "OpenIPSL.Examples.Controls.PSSE.ES.IEEET3", "OpenIPSL.Examples.Controls.PSSE.ES.IEEET5",
                      "OpenIPSL.Examples.Controls.PSSE.ES.REXSYS", "OpenIPSL.Examples.Controls.PSSE.ES.SCRX",
                      "OpenIPSL.Examples.Controls.PSSE.ES.SEXS", "OpenIPSL.Examples.Controls.PSSE.ES.ST6B"],
            		'machines' : ["OpenIPSL.Examples.Machines.PSSE.GENROU", "OpenIPSL.Examples.Machines.PSSE.GENSAL",
                      "OpenIPSL.Examples.Machines.PSSE.GENCLS", "OpenIPSL.Examples.Machines.PSSE.GENROE", 
                      "OpenIPSL.Examples.Machines.PSSE.GENSAE", "OpenIPSL.Examples.Banks.PSSE.CSVGN1"],
            		'turbinegovernors' : ["OpenIPSL.Examples.Controls.PSSE.TG.BBGOV1","OpenIPSL.Examples.Controls.PSSE.TG.GAST",
                      "OpenIPSL.Examples.Controls.PSSE.TG.GAST2A", "OpenIPSL.Examples.Controls.PSSE.TG.GGOV1", "OpenIPSL.Examples.Controls.PSSE.TG.HYGOV", 
                      "OpenIPSL.Examples.Controls.PSSE.TG.IEEEG1", "OpenIPSL.Examples.Controls.PSSE.TG.IEESGO",
                      "OpenIPSL.Examples.Controls.PSSE.TG.TGOV1", "OpenIPSL.Examples.Controls.PSSE.TG.WEHGOV", 
                      "OpenIPSL.Examples.Controls.PSSE.TG.WESGOV", "OpenIPSL.Examples.Controls.PSSE.TG.WSHYDD", 
                      "OpenIPSL.Examples.Controls.PSSE.TG.WSHYGP", "OpenIPSL.Examples.Controls.PSSE.TG.WSHYGP"],
            		'powersystemstabilizers' : ["OpenIPSL.Examples.Controls.PSSE.PSS.PSS2A","OpenIPSL.Examples.Controls.PSSE.PSS.PSS2B"],
            		'windturbines' : ["OpenIPSL.Examples.Wind.PSSE.WT4G.WT4G1","OpenIPSL.Examples.Wind.PSSE.WT4G.WT4E1"]}
        #print(testList['exciters'])
        #print(testList['machines'])
        #print(testList['turbinegovernors'])
        print("Exciter Model Check Start...")
        num = 0
        for test in testList['exciters']:
        	if self.omc.sendExpression("isModel(%s)" % (test)):
        		passMessage = self.omc.sendExpression("checkModel(%s)" % (test))
        		if "completed successfully." in passMessage:
        			testsPassed += 1
        return (testsFailed == 0)
