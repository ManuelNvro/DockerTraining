/* Initialization */
#include "OpenIPSL.Examples.Controls.PSSE.ES.EXAC1_model.h"
#include "OpenIPSL.Examples.Controls.PSSE.ES.EXAC1_11mix.h"
#include "OpenIPSL.Examples.Controls.PSSE.ES.EXAC1_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_functionInitialEquations_0(DATA *data, threadData_t *threadData);

/*
equation index: 1
type: SIMPLE_ASSIGN
gENCLS.omega = $START.gENCLS.omega
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_1(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1};
  data->localData[0]->realVars[86] /* gENCLS.omega variable */ = data->modelData->realVarsData[86].attribute /* gENCLS.omega variable */.start;
  TRACE_POP
}

/*
equation index: 2
type: SIMPLE_ASSIGN
eXAC1.rotatingExciterWithDemagnetizationLimited.sISO.local_reset = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_2(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2};
  data->localData[0]->booleanVars[2] /* eXAC1.rotatingExciterWithDemagnetizationLimited.sISO.local_reset DISCRETE */ = 0;
  TRACE_POP
}

/*
equation index: 3
type: SIMPLE_ASSIGN
eXAC1.rotatingExciterWithDemagnetizationLimited.sISO.local_set = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_3(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3};
  data->localData[0]->realVars[79] /* eXAC1.rotatingExciterWithDemagnetizationLimited.sISO.local_set variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 4
type: SIMPLE_ASSIGN
eXAC1.add3_1.u1 = zero.k * (eXAC1.add3_2.k1 + eXAC1.add3_2.k2 + eXAC1.add3_2.k3)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_4(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4};
  data->localData[0]->realVars[64] /* eXAC1.add3_1.u1 variable */ = (data->simulationInfo->realParameter[339] /* zero.k PARAM */) * (data->simulationInfo->realParameter[118] /* eXAC1.add3_2.k1 PARAM */ + data->simulationInfo->realParameter[119] /* eXAC1.add3_2.k2 PARAM */ + data->simulationInfo->realParameter[120] /* eXAC1.add3_2.k3 PARAM */);
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_177(DATA *data, threadData_t *threadData);


/*
equation index: 6
type: SIMPLE_ASSIGN
gENCLS.delta = gENCLS.delta0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_6(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6};
  data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */ = data->simulationInfo->realParameter[192] /* gENCLS.delta0 PARAM */;
  TRACE_POP
}

/*
equation index: 7
type: SIMPLE_ASSIGN
gENCLS.eq = gENCLS.vf0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_7(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7};
  data->localData[0]->realVars[6] /* gENCLS.eq STATE(1) */ = data->simulationInfo->realParameter[202] /* gENCLS.vf0 PARAM */;
  TRACE_POP
}

/*
equation index: 8
type: SIMPLE_ASSIGN
eXAC1.Efd0 = eXAC1.EFD0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_8(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,8};
  data->simulationInfo->realParameter[81] /* eXAC1.Efd0 PARAM */ = data->localData[0]->realVars[61] /* eXAC1.EFD0 variable */;
  TRACE_POP
}

/*
equation index: 9
type: SIMPLE_ASSIGN
eXAC1.imDerivativeLag.y = eXAC1.imDerivativeLag.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_9(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,9};
  data->localData[0]->realVars[67] /* eXAC1.imDerivativeLag.y variable */ = data->simulationInfo->realParameter[131] /* eXAC1.imDerivativeLag.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 10
type: SIMPLE_ASSIGN
gENROE.w = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_10(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10};
  data->localData[0]->realVars[12] /* gENROE.w STATE(1) */ = 0.0;
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_184(DATA *data, threadData_t *threadData);


/*
equation index: 12
type: SIMPLE_ASSIGN
gENROE.delta = gENROE.delta0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_12(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12};
  data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */ = data->simulationInfo->realParameter[274] /* gENROE.delta0 PARAM */;
  TRACE_POP
}

/*
equation index: 13
type: SIMPLE_ASSIGN
$DER.gENROE.PSIkq = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_13(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13};
  data->localData[0]->realVars[23] /* der(gENROE.PSIkq) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 14
type: SIMPLE_ASSIGN
$DER.gENROE.PSIkd = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_14(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14};
  data->localData[0]->realVars[22] /* der(gENROE.PSIkd) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 15
type: SIMPLE_ASSIGN
$DER.gENROE.Epq = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_15(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,15};
  data->localData[0]->realVars[21] /* der(gENROE.Epq) STATE_DER */ = 0.0;
  TRACE_POP
}

void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_16(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_17(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_18(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_19(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_20(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_21(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_22(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_23(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_24(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_25(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_26(DATA*, threadData_t*);
/*
equation index: 27
indexNonlinear: 0
type: NONLINEAR

vars: {eXAC1.XADIFD}
eqns: {16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26}
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_27(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,27};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 27 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[0] = data->simulationInfo->realParameter[276] /* gENROE.efd0 PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 0);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,27};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 27 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[63] /* eXAC1.XADIFD variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[0];
  TRACE_POP
}

/*
equation index: 28
type: SIMPLE_ASSIGN
eXAC1.VFE0 = eXAC1.VE0 * (OpenIPSL.NonElectrical.Functions.SE(eXAC1.VE0, eXAC1.S_EE_1, eXAC1.S_EE_2, eXAC1.E_1, eXAC1.E_2) + eXAC1.K_E) + eXAC1.Ifd0 * eXAC1.K_D
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_28(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,28};
  data->simulationInfo->realParameter[102] /* eXAC1.VFE0 PARAM */ = (data->simulationInfo->realParameter[101] /* eXAC1.VE0 PARAM */) * (omc_OpenIPSL_NonElectrical_Functions_SE(threadData, data->simulationInfo->realParameter[101] /* eXAC1.VE0 PARAM */, data->simulationInfo->realParameter[88] /* eXAC1.S_EE_1 PARAM */, data->simulationInfo->realParameter[89] /* eXAC1.S_EE_2 PARAM */, data->simulationInfo->realParameter[79] /* eXAC1.E_1 PARAM */, data->simulationInfo->realParameter[80] /* eXAC1.E_2 PARAM */) + data->simulationInfo->realParameter[86] /* eXAC1.K_E PARAM */) + (data->simulationInfo->realParameter[82] /* eXAC1.Ifd0 PARAM */) * (data->simulationInfo->realParameter[85] /* eXAC1.K_D PARAM */);
  TRACE_POP
}

/*
equation index: 29
type: SIMPLE_ASSIGN
eXAC1.VR0 = eXAC1.VFE0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_29(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,29};
  data->simulationInfo->realParameter[105] /* eXAC1.VR0 PARAM */ = data->simulationInfo->realParameter[102] /* eXAC1.VFE0 PARAM */;
  TRACE_POP
}

/*
equation index: 30
type: SIMPLE_ASSIGN
eXAC1.leadLag.y_start = eXAC1.VR0 / eXAC1.K_A
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_30(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,30};
  data->simulationInfo->realParameter[156] /* eXAC1.leadLag.y_start PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[105] /* eXAC1.VR0 PARAM */,data->simulationInfo->realParameter[83] /* eXAC1.K_A PARAM */,"eXAC1.K_A",equationIndexes);
  TRACE_POP
}

/*
equation index: 31
type: SIMPLE_ASSIGN
eXAC1.leadLag.TF.y_start = eXAC1.leadLag.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_31(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,31};
  data->simulationInfo->realParameter[152] /* eXAC1.leadLag.TF.y_start PARAM */ = data->simulationInfo->realParameter[156] /* eXAC1.leadLag.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 32
type: SIMPLE_ASSIGN
eXAC1.leadLag.TF.y = eXAC1.leadLag.TF.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_32(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,32};
  data->localData[0]->realVars[71] /* eXAC1.leadLag.TF.y variable */ = data->simulationInfo->realParameter[152] /* eXAC1.leadLag.TF.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 33
type: SIMPLE_ASSIGN
eXAC1.leadLag.x_start = eXAC1.VR0 / eXAC1.K_A
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_33(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,33};
  data->simulationInfo->realParameter[155] /* eXAC1.leadLag.x_start PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[105] /* eXAC1.VR0 PARAM */,data->simulationInfo->realParameter[83] /* eXAC1.K_A PARAM */,"eXAC1.K_A",equationIndexes);
  TRACE_POP
}

/*
equation index: 34
type: SIMPLE_ASSIGN
eXAC1.leadLag.TF.x_start[1] = eXAC1.leadLag.x_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_34(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,34};
  data->simulationInfo->realParameter[151] /* eXAC1.leadLag.TF.x_start[1] PARAM */ = data->simulationInfo->realParameter[155] /* eXAC1.leadLag.x_start PARAM */;
  TRACE_POP
}

/*
equation index: 35
type: SIMPLE_ASSIGN
$START.eXAC1.leadLag.TF.x[1] = eXAC1.leadLag.TF.x_start[1]
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_35(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,35};
  data->modelData->realVarsData[70].attribute /* eXAC1.leadLag.TF.x[1] variable */.start = data->simulationInfo->realParameter[151] /* eXAC1.leadLag.TF.x_start[1] PARAM */;
    data->localData[0]->realVars[70] /* eXAC1.leadLag.TF.x[1] variable */ = data->modelData->realVarsData[70].attribute /* eXAC1.leadLag.TF.x[1] variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[70].info /* eXAC1.leadLag.TF.x[1] */.name, (modelica_real) data->localData[0]->realVars[70] /* eXAC1.leadLag.TF.x[1] variable */);
  TRACE_POP
}

/*
equation index: 36
type: SIMPLE_ASSIGN
eXAC1.imLimitedSimpleLag.y_start = eXAC1.VR0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_36(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,36};
  data->simulationInfo->realParameter[138] /* eXAC1.imLimitedSimpleLag.y_start PARAM */ = data->simulationInfo->realParameter[105] /* eXAC1.VR0 PARAM */;
  TRACE_POP
}

/*
equation index: 37
type: SIMPLE_ASSIGN
eXAC1.imLimitedSimpleLag.state = eXAC1.imLimitedSimpleLag.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_37(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,37};
  data->localData[0]->realVars[2] /* eXAC1.imLimitedSimpleLag.state STATE(1) */ = data->simulationInfo->realParameter[138] /* eXAC1.imLimitedSimpleLag.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 38
type: SIMPLE_ASSIGN
$START.eXAC1.imLimitedSimpleLag.y = eXAC1.imLimitedSimpleLag.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_38(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,38};
  data->modelData->realVarsData[69].attribute /* eXAC1.imLimitedSimpleLag.y variable */.start = data->simulationInfo->realParameter[138] /* eXAC1.imLimitedSimpleLag.y_start PARAM */;
    data->localData[0]->realVars[69] /* eXAC1.imLimitedSimpleLag.y variable */ = data->modelData->realVarsData[69].attribute /* eXAC1.imLimitedSimpleLag.y variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[69].info /* eXAC1.imLimitedSimpleLag.y */.name, (modelica_real) data->localData[0]->realVars[69] /* eXAC1.imLimitedSimpleLag.y variable */);
  TRACE_POP
}

/*
equation index: 39
type: SIMPLE_ASSIGN
eXAC1.imDerivativeLag.x_start = eXAC1.VFE0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_39(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,39};
  data->simulationInfo->realParameter[130] /* eXAC1.imDerivativeLag.x_start PARAM */ = data->simulationInfo->realParameter[102] /* eXAC1.VFE0 PARAM */;
  TRACE_POP
}

/*
equation index: 40
type: SIMPLE_ASSIGN
$START.eXAC1.imDerivativeLag.x = eXAC1.imDerivativeLag.x_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_40(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,40};
  data->modelData->realVarsData[1].attribute /* eXAC1.imDerivativeLag.x STATE(1) */.start = data->simulationInfo->realParameter[130] /* eXAC1.imDerivativeLag.x_start PARAM */;
    data->localData[0]->realVars[1] /* eXAC1.imDerivativeLag.x STATE(1) */ = data->modelData->realVarsData[1].attribute /* eXAC1.imDerivativeLag.x STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[1].info /* eXAC1.imDerivativeLag.x */.name, (modelica_real) data->localData[0]->realVars[1] /* eXAC1.imDerivativeLag.x STATE(1) */);
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_189(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_190(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_188(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_310(DATA *data, threadData_t *threadData);


/*
equation index: 45
type: SIMPLE_ASSIGN
eXAC1.imDerivativeLag.x = (eXAC1.imDerivativeLag.u / eXAC1.imDerivativeLag.T * 0.03 - eXAC1.imDerivativeLag.y) * eXAC1.imDerivativeLag.T / 0.03
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_45(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,45};
  data->localData[0]->realVars[1] /* eXAC1.imDerivativeLag.x STATE(1) */ = DIVISION_SIM(((DIVISION_SIM(data->localData[0]->realVars[66] /* eXAC1.imDerivativeLag.u variable */,data->simulationInfo->realParameter[128] /* eXAC1.imDerivativeLag.T PARAM */,"eXAC1.imDerivativeLag.T",equationIndexes)) * (0.03) - data->localData[0]->realVars[67] /* eXAC1.imDerivativeLag.y variable */) * (data->simulationInfo->realParameter[128] /* eXAC1.imDerivativeLag.T PARAM */),0.03,"0.03",equationIndexes);
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_311(DATA *data, threadData_t *threadData);


/*
equation index: 47
type: SIMPLE_ASSIGN
$DER.gENROE.Epd = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_47(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,47};
  data->localData[0]->realVars[20] /* der(gENROE.Epd) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 48
type: SIMPLE_ASSIGN
gENROE.XaqIlq = (-$DER.gENROE.Epd) * gENROE.Tpq0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_48(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,48};
  data->localData[0]->realVars[101] /* gENROE.XaqIlq variable */ = ((-data->localData[0]->realVars[20] /* der(gENROE.Epd) STATE_DER */)) * (data->simulationInfo->realParameter[252] /* gENROE.Tpq0 PARAM */);
  TRACE_POP
}

void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_49(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_50(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_51(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_52(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_53(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_54(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_55(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_56(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_57(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_58(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_59(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_60(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_61(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_62(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_63(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_64(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_65(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_66(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_67(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_68(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_69(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_70(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_71(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_72(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_73(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_74(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_100(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_99(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_98(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_97(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_96(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_95(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_94(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_93(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_92(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_91(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_90(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_89(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_88(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_87(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_86(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_85(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_84(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_83(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_82(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_81(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_80(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_79(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_78(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_77(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_76(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_75(DATA*, threadData_t*);
/*
equation index: 101
indexNonlinear: 1
type: NONLINEAR

vars: {pwLine.ir.re, pwLine1.is.re, pwLine.ir.im, pwLine1.is.im, pwLine4.is.re, pwLine3.ir.re, pwLine4.is.im, pwLine3.ir.im, pwLine3.is.re, pwLine3.is.im, pwLine4.ir.im, pwLine1.ir.re, gENCLS.id, gENCLS.iq, gENROE.Epq, gENROE.PSIkq, gENROE.uq, gENROE.PSIppq, gENROE.iq, gENROE.id, pwLine1.vr.im, pwLine1.vr.re, pwLine1.vs.re, pwLine3.vr.re, pwLine3.vr.im, pwLine1.vs.im}
eqns: {49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 100, 99, 98, 97, 96, 95, 94, 93, 92, 91, 90, 89, 88, 87, 86, 85, 84, 83, 82, 81, 80, 79, 78, 77, 76, 75}
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_101(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,101};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 101 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[0] = data->localData[0]->realVars[115] /* pwLine.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[1] = data->localData[0]->realVars[127] /* pwLine1.is.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[2] = data->localData[0]->realVars[114] /* pwLine.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[3] = data->localData[0]->realVars[126] /* pwLine1.is.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[4] = data->localData[0]->realVars[149] /* pwLine4.is.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[5] = data->localData[0]->realVars[137] /* pwLine3.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[6] = data->localData[0]->realVars[148] /* pwLine4.is.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[7] = data->localData[0]->realVars[136] /* pwLine3.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[8] = data->localData[0]->realVars[139] /* pwLine3.is.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[9] = data->localData[0]->realVars[138] /* pwLine3.is.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[10] = data->localData[0]->realVars[146] /* pwLine4.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[11] = data->localData[0]->realVars[125] /* pwLine1.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[12] = data->simulationInfo->realParameter[194] /* gENCLS.id0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[13] = data->simulationInfo->realParameter[196] /* gENCLS.iq0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[14] = data->simulationInfo->realParameter[212] /* gENROE.Epq0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[15] = data->simulationInfo->realParameter[233] /* gENROE.PSIkq0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[16] = data->simulationInfo->realParameter[286] /* gENROE.uq0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[17] = data->simulationInfo->realParameter[239] /* gENROE.PSIppq0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[18] = data->simulationInfo->realParameter[280] /* gENROE.iq0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[19] = data->simulationInfo->realParameter[278] /* gENROE.id0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[20] = data->simulationInfo->realParameter[203] /* gENCLS.vi0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[21] = data->simulationInfo->realParameter[205] /* gENCLS.vr0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[22] = data->simulationInfo->realParameter[74] /* constantLoad.vr0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[23] = (data->simulationInfo->realParameter[7] /* FAULT.v_0 PARAM */) * (cos(data->simulationInfo->realParameter[5] /* FAULT.angle_0rad PARAM */));
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[24] = (data->simulationInfo->realParameter[7] /* FAULT.v_0 PARAM */) * (sin(data->simulationInfo->realParameter[5] /* FAULT.angle_0rad PARAM */));
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[25] = data->simulationInfo->realParameter[73] /* constantLoad.vi0 PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 1);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,101};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 101 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[115] /* pwLine.ir.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[0];
  data->localData[0]->realVars[127] /* pwLine1.is.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[1];
  data->localData[0]->realVars[114] /* pwLine.ir.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[2];
  data->localData[0]->realVars[126] /* pwLine1.is.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[3];
  data->localData[0]->realVars[149] /* pwLine4.is.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[4];
  data->localData[0]->realVars[137] /* pwLine3.ir.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[5];
  data->localData[0]->realVars[148] /* pwLine4.is.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[6];
  data->localData[0]->realVars[136] /* pwLine3.ir.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[7];
  data->localData[0]->realVars[139] /* pwLine3.is.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[8];
  data->localData[0]->realVars[138] /* pwLine3.is.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[9];
  data->localData[0]->realVars[146] /* pwLine4.ir.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[10];
  data->localData[0]->realVars[125] /* pwLine1.ir.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[11];
  data->localData[0]->realVars[84] /* gENCLS.id variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[12];
  data->localData[0]->realVars[85] /* gENCLS.iq variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[13];
  data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ = data->simulationInfo->nonlinearSystemData[1].nlsx[14];
  data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */ = data->simulationInfo->nonlinearSystemData[1].nlsx[15];
  data->localData[0]->realVars[107] /* gENROE.uq variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[16];
  data->localData[0]->realVars[97] /* gENROE.PSIppq variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[17];
  data->localData[0]->realVars[105] /* gENROE.iq variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[18];
  data->localData[0]->realVars[104] /* gENROE.id variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[19];
  data->localData[0]->realVars[128] /* pwLine1.vr.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[20];
  data->localData[0]->realVars[129] /* pwLine1.vr.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[21];
  data->localData[0]->realVars[131] /* pwLine1.vs.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[22];
  data->localData[0]->realVars[141] /* pwLine3.vr.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[23];
  data->localData[0]->realVars[140] /* pwLine3.vr.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[24];
  data->localData[0]->realVars[130] /* pwLine1.vs.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[25];
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_290(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_289(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_291(DATA *data, threadData_t *threadData);


/*
equation index: 105
type: SIMPLE_ASSIGN
LOAD.angle = 57.29577951308232 * atan2(pwLine1.vs.im, pwLine1.vs.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_105(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,105};
  data->localData[0]->realVars[45] /* LOAD.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[130] /* pwLine1.vs.im variable */, data->localData[0]->realVars[131] /* pwLine1.vs.re variable */));
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_301(DATA *data, threadData_t *threadData);


/*
equation index: 107
type: SIMPLE_ASSIGN
GEN2.angle = 57.29577951308232 * atan2(pwLine1.vr.im, pwLine1.vr.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_107(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,107};
  data->localData[0]->realVars[41] /* GEN2.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[128] /* pwLine1.vr.im variable */, data->localData[0]->realVars[129] /* pwLine1.vr.re variable */));
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_343(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_344(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_345(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_350(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_349(DATA *data, threadData_t *threadData);


/*
equation index: 113
type: SIMPLE_ASSIGN
FAULT.angle = 57.29577951308232 * atan2(pwLine3.vr.im, pwLine3.vr.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_113(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,113};
  data->localData[0]->realVars[33] /* FAULT.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[140] /* pwLine3.vr.im variable */, data->localData[0]->realVars[141] /* pwLine3.vr.re variable */));
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_294(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_300(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_299(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_298(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_297(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_293(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_292(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_342(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_341(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_348(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_347(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_330(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_315(DATA *data, threadData_t *threadData);


/*
equation index: 127
type: SIMPLE_ASSIGN
eXAC1.ECOMP0 = eXAC1.ECOMP
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_127(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,127};
  data->simulationInfo->realParameter[78] /* eXAC1.ECOMP0 PARAM */ = data->localData[0]->realVars[59] /* eXAC1.ECOMP variable */;
  TRACE_POP
}

/*
equation index: 128
type: SIMPLE_ASSIGN
eXAC1.V_REF = eXAC1.VR0 / eXAC1.K_A + eXAC1.ECOMP0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_128(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,128};
  data->simulationInfo->realParameter[107] /* eXAC1.V_REF PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[105] /* eXAC1.VR0 PARAM */,data->simulationInfo->realParameter[83] /* eXAC1.K_A PARAM */,"eXAC1.K_A",equationIndexes) + data->simulationInfo->realParameter[78] /* eXAC1.ECOMP0 PARAM */;
  TRACE_POP
}

/*
equation index: 129
type: SIMPLE_ASSIGN
eXAC1.VoltageReference.k = eXAC1.V_REF
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_129(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,129};
  data->simulationInfo->realParameter[110] /* eXAC1.VoltageReference.k PARAM */ = data->simulationInfo->realParameter[107] /* eXAC1.V_REF PARAM */;
  TRACE_POP
}

/*
equation index: 130
type: SIMPLE_ASSIGN
eXAC1.add7.u2 = eXAC1.VoltageReference.k
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_130(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,130};
  data->simulationInfo->realParameter[126] /* eXAC1.add7.u2 PARAM */ = data->simulationInfo->realParameter[110] /* eXAC1.VoltageReference.k PARAM */;
  TRACE_POP
}

/*
equation index: 131
type: SIMPLE_ASSIGN
eXAC1.VoltageReference.y = eXAC1.VoltageReference.k
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_131(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,131};
  data->simulationInfo->realParameter[111] /* eXAC1.VoltageReference.y PARAM */ = data->simulationInfo->realParameter[110] /* eXAC1.VoltageReference.k PARAM */;
  TRACE_POP
}

/*
equation index: 132
type: SIMPLE_ASSIGN
eXAC1.Vref_step.height = eXAC1.V_REF * eXAC1.dV
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_132(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,132};
  data->simulationInfo->realParameter[112] /* eXAC1.Vref_step.height PARAM */ = (data->simulationInfo->realParameter[107] /* eXAC1.V_REF PARAM */) * (data->simulationInfo->realParameter[127] /* eXAC1.dV PARAM */);
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_185(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_186(DATA *data, threadData_t *threadData);


/*
equation index: 135
type: SIMPLE_ASSIGN
eXAC1.TransducerDelay.y_start = eXAC1.ECOMP0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_135(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,135};
  data->simulationInfo->realParameter[100] /* eXAC1.TransducerDelay.y_start PARAM */ = data->simulationInfo->realParameter[78] /* eXAC1.ECOMP0 PARAM */;
  TRACE_POP
}

/*
equation index: 136
type: SIMPLE_ASSIGN
$START.eXAC1.TransducerDelay.state = eXAC1.TransducerDelay.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_136(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,136};
  data->modelData->realVarsData[0].attribute /* eXAC1.TransducerDelay.state STATE(1) */.start = data->simulationInfo->realParameter[100] /* eXAC1.TransducerDelay.y_start PARAM */;
    data->localData[0]->realVars[0] /* eXAC1.TransducerDelay.state STATE(1) */ = data->modelData->realVarsData[0].attribute /* eXAC1.TransducerDelay.state STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[0].info /* eXAC1.TransducerDelay.state */.name, (modelica_real) data->localData[0]->realVars[0] /* eXAC1.TransducerDelay.state STATE(1) */);
  TRACE_POP
}

/*
equation index: 137
type: SIMPLE_ASSIGN
eXAC1.TransducerDelay.state = eXAC1.TransducerDelay.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_137(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,137};
  data->localData[0]->realVars[0] /* eXAC1.TransducerDelay.state STATE(1) */ = data->simulationInfo->realParameter[100] /* eXAC1.TransducerDelay.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 138
type: SIMPLE_ASSIGN
$START.eXAC1.DiffV.u2 = eXAC1.TransducerDelay.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_138(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,138};
  data->modelData->realVarsData[57].attribute /* eXAC1.DiffV.u2 variable */.start = data->simulationInfo->realParameter[100] /* eXAC1.TransducerDelay.y_start PARAM */;
    data->localData[0]->realVars[57] /* eXAC1.DiffV.u2 variable */ = data->modelData->realVarsData[57].attribute /* eXAC1.DiffV.u2 variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[57].info /* eXAC1.DiffV.u2 */.name, (modelica_real) data->localData[0]->realVars[57] /* eXAC1.DiffV.u2 variable */);
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_317(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_318(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_319(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_322(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_328(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_327(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_324(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_325(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_326(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_323(DATA *data, threadData_t *threadData);


/*
equation index: 149
type: SIMPLE_ASSIGN
eXAC1.leadLag.TF.x[1] = (eXAC1.leadLag.TF.d * eXAC1.add3_1.y - eXAC1.leadLag.TF.y) / (eXAC1.leadLag.TF.a[2] * eXAC1.leadLag.TF.d - eXAC1.leadLag.TF.bb[2])
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_149(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,149};
  data->localData[0]->realVars[70] /* eXAC1.leadLag.TF.x[1] variable */ = DIVISION_SIM((data->simulationInfo->realParameter[150] /* eXAC1.leadLag.TF.d PARAM */) * (data->localData[0]->realVars[65] /* eXAC1.add3_1.y variable */) - data->localData[0]->realVars[71] /* eXAC1.leadLag.TF.y variable */,(data->simulationInfo->realParameter[144] /* eXAC1.leadLag.TF.a[2] PARAM */) * (data->simulationInfo->realParameter[150] /* eXAC1.leadLag.TF.d PARAM */) - data->simulationInfo->realParameter[149] /* eXAC1.leadLag.TF.bb[2] PARAM */,"eXAC1.leadLag.TF.a[2] * eXAC1.leadLag.TF.d - eXAC1.leadLag.TF.bb[2]",equationIndexes);
  TRACE_POP
}

/*
equation index: 150
type: SIMPLE_ASSIGN
eXAC1.leadLag.TF.x_scaled[1] = eXAC1.leadLag.TF.x[1] * eXAC1.leadLag.TF.a_end
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_150(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,150};
  data->localData[0]->realVars[3] /* eXAC1.leadLag.TF.x_scaled[1] STATE(1) */ = (data->localData[0]->realVars[70] /* eXAC1.leadLag.TF.x[1] variable */) * (data->simulationInfo->realParameter[145] /* eXAC1.leadLag.TF.a_end PARAM */);
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_320(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_316(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_329(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_334(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_332(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_333(DATA *data, threadData_t *threadData);


/*
equation index: 157
type: SIMPLE_ASSIGN
GEN1.angle = 57.29577951308232 * atan2(pwLine.vs.im, pwLine.vs.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_157(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,157};
  data->localData[0]->realVars[37] /* GEN1.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[118] /* pwLine.vs.im variable */, data->localData[0]->realVars[119] /* pwLine.vs.re variable */));
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_340(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_339(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_337(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_338(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_335(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_336(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_313(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_314(DATA *data, threadData_t *threadData);


/*
equation index: 166
type: SIMPLE_ASSIGN
GEN1.p.ir = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_166(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,166};
  data->localData[0]->realVars[39] /* GEN1.p.ir variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 167
type: SIMPLE_ASSIGN
GEN1.p.ii = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_167(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,167};
  data->localData[0]->realVars[38] /* GEN1.p.ii variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 168
type: SIMPLE_ASSIGN
LOAD.p.ir = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_168(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,168};
  data->localData[0]->realVars[47] /* LOAD.p.ir variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 169
type: SIMPLE_ASSIGN
LOAD.p.ii = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_169(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,169};
  data->localData[0]->realVars[46] /* LOAD.p.ii variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 170
type: SIMPLE_ASSIGN
GEN2.p.ir = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_170(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,170};
  data->localData[0]->realVars[43] /* GEN2.p.ir variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 171
type: SIMPLE_ASSIGN
GEN2.p.ii = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_171(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,171};
  data->localData[0]->realVars[42] /* GEN2.p.ii variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 172
type: SIMPLE_ASSIGN
FAULT.p.ir = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_172(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,172};
  data->localData[0]->realVars[35] /* FAULT.p.ir variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 173
type: SIMPLE_ASSIGN
FAULT.p.ii = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_173(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,173};
  data->localData[0]->realVars[34] /* FAULT.p.ii variable */ = 0.0;
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_178(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_179(DATA *data, threadData_t *threadData);

OMC_DISABLE_OPT
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_functionInitialEquations_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_1(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_2(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_3(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_4(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_177(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_6(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_7(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_8(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_9(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_10(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_184(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_12(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_13(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_14(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_15(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_27(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_28(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_29(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_30(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_31(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_32(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_33(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_34(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_35(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_36(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_37(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_38(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_39(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_40(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_189(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_190(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_188(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_310(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_45(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_311(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_47(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_48(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_101(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_290(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_289(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_291(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_105(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_301(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_107(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_343(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_344(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_345(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_350(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_349(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_113(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_294(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_300(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_299(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_298(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_297(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_293(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_292(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_342(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_341(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_348(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_347(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_330(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_315(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_127(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_128(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_129(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_130(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_131(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_132(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_185(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_186(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_135(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_136(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_137(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_138(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_317(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_318(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_319(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_322(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_328(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_327(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_324(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_325(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_326(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_323(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_149(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_150(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_320(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_316(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_329(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_334(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_332(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_333(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_157(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_340(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_339(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_337(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_338(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_335(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_336(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_313(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_314(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_166(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_167(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_168(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_169(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_170(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_171(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_172(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_173(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_178(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_179(data, threadData);
  TRACE_POP
}


int OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_functionInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_functionInitialEquations_0(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}


int OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_functionInitialEquations_lambda0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_functionRemovedInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int *equationIndexes = NULL;
  double res = 0.0;

  res = data->localData[0]->realVars[86] /* gENCLS.omega variable */;
  if(fabs(res) > 1e-5)
  {
    errorStreamPrint(LOG_INIT, 0, "The initialization problem is inconsistent due to the following equation: 0 != %g = gENCLS.omega", res);
    return 1;
  }
  
  TRACE_POP
  return 0;
}


#if defined(__cplusplus)
}
#endif

