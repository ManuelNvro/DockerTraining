/* Simulation code for OpenIPSL.Examples.Controls.PSSE.ES.ESAC1A generated by the OpenModelica Compiler OpenModelica 1.16.0~dev-612-g65daa7a. */
#if !defined(OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A__MODEL_H)
#define OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A__MODEL_H

#include "openmodelica.h"
#include "openmodelica_func.h"
#include "simulation_data.h"
#include "simulation/simulation_info_json.h"
#include "simulation/simulation_runtime.h"
#include "util/omc_error.h"
#include "util/parallel_helper.h"
#include "simulation/solver/model_help.h"
#include "simulation/solver/delay.h"
#include "simulation/solver/linearSystem.h"
#include "simulation/solver/nonlinearSystem.h"
#include "simulation/solver/mixedSystem.h"

#if defined(__cplusplus)
extern "C" {
#endif

#include <string.h>

#include "OpenIPSL.Examples.Controls.PSSE.ES.ESAC1A_functions.h"

#define Complex_index 0
#define Modelica_Math_atan3_index 1
#define OpenIPSL_Electrical_SystemBase_index 2
#define OpenIPSL_Electrical__omcQSystemBase_24SysData_index 3
#define OpenIPSL_Electrical_Controls_PSSE_ES_BaseClasses_invFEX_index 4
#define OpenIPSL_NonElectrical_Functions_SE_index 5
#define OpenIPSL_NonElectrical_Functions_SE__exp_index 6
#define OpenIPSL_Types_ComplexPower_index 7

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_callExternalObjectDestructors(DATA *_data, threadData_t *threadData);
#if !defined(OMC_NUM_NONLINEAR_SYSTEMS) || OMC_NUM_NONLINEAR_SYSTEMS>0
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_initialNonLinearSystem(int nNonLinearSystems, NONLINEAR_SYSTEM_DATA *data);
#endif
#if !defined(OMC_NUM_LINEAR_SYSTEMS) || OMC_NUM_LINEAR_SYSTEMS>0
#endif
#if !defined(OMC_NUM_MIXED_SYSTEMS) || OMC_NUM_MIXED_SYSTEMS>0
#endif
#if !defined(OMC_NO_STATESELECTION)
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_initializeStateSets(int nStateSets, STATE_SET_DATA* statesetData, DATA *data);
#endif
extern int OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_functionAlgebraics(DATA *data, threadData_t *threadData);
extern int OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_function_storeDelayed(DATA *data, threadData_t *threadData);
extern int OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_updateBoundVariableAttributes(DATA *data, threadData_t *threadData);
extern int OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_functionInitialEquations(DATA *data, threadData_t *threadData);
extern int OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_functionInitialEquations_lambda0(DATA *data, threadData_t *threadData);
extern int OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_functionRemovedInitialEquations(DATA *data, threadData_t *threadData);
extern int OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_updateBoundParameters(DATA *data, threadData_t *threadData);
extern int OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_checkForAsserts(DATA *data, threadData_t *threadData);
extern int OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_function_ZeroCrossingsEquations(DATA *data, threadData_t *threadData);
extern int OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_function_ZeroCrossings(DATA *data, threadData_t *threadData, double* gout);
extern int OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_function_updateRelations(DATA *data, threadData_t *threadData, int evalZeroCross);
extern const char* OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_zeroCrossingDescription(int i, int **out_EquationIndexes);
extern const char* OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_relationDescription(int i);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_function_initSample(DATA *data, threadData_t *threadData);
extern int OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_initialAnalyticJacobianG(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);
extern int OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_initialAnalyticJacobianA(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);
extern int OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_initialAnalyticJacobianB(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);
extern int OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_initialAnalyticJacobianC(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);
extern int OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_initialAnalyticJacobianD(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);
extern int OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_initialAnalyticJacobianF(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);
extern int OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_functionJacG_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
extern int OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_functionJacA_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
extern int OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_functionJacB_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
extern int OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_functionJacC_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
extern int OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_functionJacD_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
extern int OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_functionJacF_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
extern const char* OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_linear_model_frame(void);
extern const char* OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_linear_model_datarecovery_frame(void);
extern int OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_mayer(DATA* data, modelica_real** res, short *);
extern int OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_lagrange(DATA* data, modelica_real** res, short *, short *);
extern int OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_pickUpBoundsForInputsInOptimization(DATA* data, modelica_real* min, modelica_real* max, modelica_real*nominal, modelica_boolean *useNominal, char ** name, modelica_real * start, modelica_real * startTimeOpt);
extern int OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_setInputData(DATA *data, const modelica_boolean file);
extern int OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_getTimeGrid(DATA *data, modelica_integer * nsi, modelica_real**t);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_function_initSynchronous(DATA * data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_function_updateSynchronous(DATA * data, threadData_t *threadData, long i);
extern int OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_function_equationsSynchronous(DATA * data, threadData_t *threadData, long i);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_read_input_fmu(MODEL_DATA* modelData, SIMULATION_INFO* simulationData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_function_savePreSynchronous(DATA *data, threadData_t *threadData);
extern int OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_inputNames(DATA* data, char ** names);
extern int OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_initializeDAEmodeData(DATA *data, DAEMODE_DATA*);
extern int OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_functionLocalKnownVars(DATA*, threadData_t*);
extern int OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_symbolicInlineSystem(DATA*, threadData_t*);

#include "OpenIPSL.Examples.Controls.PSSE.ES.ESAC1A_literals.h"




#if defined(HPCOM) && !defined(_OPENMP)
  #error "HPCOM requires OpenMP or the results are wrong"
#endif
#if defined(_OPENMP)
  #include <omp.h>
#else
  /* dummy omp defines */
  #define omp_get_max_threads() 1
#endif

#if defined(__cplusplus)
}
#endif

#endif /* !defined(OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A__MODEL_H) */


