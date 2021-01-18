/* Initialization */
#include "OpenIPSL.Examples.Controls.PSSE.ES.EXAC2_model.h"
#include "OpenIPSL.Examples.Controls.PSSE.ES.EXAC2_11mix.h"
#include "OpenIPSL.Examples.Controls.PSSE.ES.EXAC2_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_functionInitialEquations_0(DATA *data, threadData_t *threadData);

/*
equation index: 1
type: SIMPLE_ASSIGN
gENCLS.omega = $START.gENCLS.omega
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_1(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1};
  data->localData[0]->realVars[93] /* gENCLS.omega variable */ = data->modelData->realVarsData[93].attribute /* gENCLS.omega variable */.start;
  TRACE_POP
}

/*
equation index: 2
type: SIMPLE_ASSIGN
eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.local_reset = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_2(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2};
  data->localData[0]->booleanVars[2] /* eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.local_reset DISCRETE */ = 0;
  TRACE_POP
}

/*
equation index: 3
type: SIMPLE_ASSIGN
eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.local_set = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_3(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3};
  data->localData[0]->realVars[86] /* eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.local_set variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 4
type: SIMPLE_ASSIGN
eXAC2.add3_1.u1 = zero.k * (eXAC2.add3_2.k1 + eXAC2.add3_2.k2 + eXAC2.add3_2.k3)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_4(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4};
  data->localData[0]->realVars[69] /* eXAC2.add3_1.u1 variable */ = (data->simulationInfo->realParameter[358] /* zero.k PARAM */) * (data->simulationInfo->realParameter[132] /* eXAC2.add3_2.k1 PARAM */ + data->simulationInfo->realParameter[133] /* eXAC2.add3_2.k2 PARAM */ + data->simulationInfo->realParameter[134] /* eXAC2.add3_2.k3 PARAM */);
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_369(DATA *data, threadData_t *threadData);


/*
equation index: 6
type: SIMPLE_ASSIGN
gENCLS.delta = gENCLS.delta0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_6(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6};
  data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */ = data->simulationInfo->realParameter[211] /* gENCLS.delta0 PARAM */;
  TRACE_POP
}

/*
equation index: 7
type: SIMPLE_ASSIGN
gENCLS.eq = gENCLS.vf0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_7(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7};
  data->localData[0]->realVars[6] /* gENCLS.eq STATE(1) */ = data->simulationInfo->realParameter[221] /* gENCLS.vf0 PARAM */;
  TRACE_POP
}

/*
equation index: 8
type: SIMPLE_ASSIGN
eXAC2.Efd0 = eXAC2.EFD0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_8(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,8};
  data->simulationInfo->realParameter[83] /* eXAC2.Efd0 PARAM */ = data->localData[0]->realVars[64] /* eXAC2.EFD0 variable */;
  TRACE_POP
}

/*
equation index: 9
type: SIMPLE_ASSIGN
eXAC2.imDerivativeLag.y = eXAC2.imDerivativeLag.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_9(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,9};
  data->localData[0]->realVars[74] /* eXAC2.imDerivativeLag.y variable */ = data->simulationInfo->realParameter[148] /* eXAC2.imDerivativeLag.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 10
type: SIMPLE_ASSIGN
gENROE.w = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_10(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10};
  data->localData[0]->realVars[12] /* gENROE.w STATE(1) */ = 0.0;
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_376(DATA *data, threadData_t *threadData);


/*
equation index: 12
type: SIMPLE_ASSIGN
gENROE.delta = gENROE.delta0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_12(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12};
  data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */ = data->simulationInfo->realParameter[293] /* gENROE.delta0 PARAM */;
  TRACE_POP
}

/*
equation index: 13
type: SIMPLE_ASSIGN
$DER.gENROE.PSIkq = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_13(DATA *data, threadData_t *threadData)
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
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_14(DATA *data, threadData_t *threadData)
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
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_15(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,15};
  data->localData[0]->realVars[21] /* der(gENROE.Epq) STATE_DER */ = 0.0;
  TRACE_POP
}

void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_16(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_17(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_18(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_19(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_20(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_21(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_22(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_23(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_24(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_25(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_26(DATA*, threadData_t*);
/*
equation index: 27
indexNonlinear: 0
type: NONLINEAR

vars: {eXAC2.XADIFD}
eqns: {16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26}
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_27(DATA *data, threadData_t *threadData)
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
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[0] = data->localData[0]->realVars[66] /* eXAC2.XADIFD variable */;
  retValue = solve_nonlinear_system(data, threadData, 0);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,27};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 27 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[66] /* eXAC2.XADIFD variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[0];
  TRACE_POP
}

/*
equation index: 28
type: SIMPLE_ASSIGN
eXAC2.VFE0 = eXAC2.VE0 * (OpenIPSL.NonElectrical.Functions.SE(eXAC2.VE0, eXAC2.S_EE_1, eXAC2.S_EE_2, eXAC2.E_1, eXAC2.E_2) + eXAC2.K_E) + eXAC2.Ifd0 * eXAC2.K_D
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_28(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,28};
  data->simulationInfo->realParameter[108] /* eXAC2.VFE0 PARAM */ = (data->simulationInfo->realParameter[107] /* eXAC2.VE0 PARAM */) * (omc_OpenIPSL_NonElectrical_Functions_SE(threadData, data->simulationInfo->realParameter[107] /* eXAC2.VE0 PARAM */, data->simulationInfo->realParameter[93] /* eXAC2.S_EE_1 PARAM */, data->simulationInfo->realParameter[94] /* eXAC2.S_EE_2 PARAM */, data->simulationInfo->realParameter[81] /* eXAC2.E_1 PARAM */, data->simulationInfo->realParameter[82] /* eXAC2.E_2 PARAM */) + data->simulationInfo->realParameter[89] /* eXAC2.K_E PARAM */) + (data->simulationInfo->realParameter[84] /* eXAC2.Ifd0 PARAM */) * (data->simulationInfo->realParameter[88] /* eXAC2.K_D PARAM */);
  TRACE_POP
}

/*
equation index: 29
type: SIMPLE_ASSIGN
eXAC2.VR0 = eXAC2.VFE0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_29(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,29};
  data->simulationInfo->realParameter[111] /* eXAC2.VR0 PARAM */ = data->simulationInfo->realParameter[108] /* eXAC2.VFE0 PARAM */;
  TRACE_POP
}

/*
equation index: 30
type: SIMPLE_ASSIGN
eXAC2.VA0 = eXAC2.VR0 / eXAC2.K_B + eXAC2.VFE0 * eXAC2.K_H
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_30(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,30};
  data->simulationInfo->realParameter[106] /* eXAC2.VA0 PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[111] /* eXAC2.VR0 PARAM */,data->simulationInfo->realParameter[86] /* eXAC2.K_B PARAM */,"eXAC2.K_B",equationIndexes) + (data->simulationInfo->realParameter[108] /* eXAC2.VFE0 PARAM */) * (data->simulationInfo->realParameter[91] /* eXAC2.K_H PARAM */);
  TRACE_POP
}

/*
equation index: 31
type: SIMPLE_ASSIGN
eXAC2.leadLag.y_start = eXAC2.VA0 / eXAC2.K_A
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_31(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,31};
  data->simulationInfo->realParameter[173] /* eXAC2.leadLag.y_start PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[106] /* eXAC2.VA0 PARAM */,data->simulationInfo->realParameter[85] /* eXAC2.K_A PARAM */,"eXAC2.K_A",equationIndexes);
  TRACE_POP
}

/*
equation index: 32
type: SIMPLE_ASSIGN
eXAC2.leadLag.TF.y_start = eXAC2.leadLag.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_32(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,32};
  data->simulationInfo->realParameter[169] /* eXAC2.leadLag.TF.y_start PARAM */ = data->simulationInfo->realParameter[173] /* eXAC2.leadLag.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 33
type: SIMPLE_ASSIGN
eXAC2.leadLag.TF.y = eXAC2.leadLag.TF.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_33(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,33};
  data->localData[0]->realVars[77] /* eXAC2.leadLag.TF.y variable */ = data->simulationInfo->realParameter[169] /* eXAC2.leadLag.TF.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 34
type: SIMPLE_ASSIGN
eXAC2.leadLag.x_start = eXAC2.VA0 / eXAC2.K_A
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_34(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,34};
  data->simulationInfo->realParameter[172] /* eXAC2.leadLag.x_start PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[106] /* eXAC2.VA0 PARAM */,data->simulationInfo->realParameter[85] /* eXAC2.K_A PARAM */,"eXAC2.K_A",equationIndexes);
  TRACE_POP
}

/*
equation index: 35
type: SIMPLE_ASSIGN
eXAC2.leadLag.TF.x_start[1] = eXAC2.leadLag.x_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_35(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,35};
  data->simulationInfo->realParameter[168] /* eXAC2.leadLag.TF.x_start[1] PARAM */ = data->simulationInfo->realParameter[172] /* eXAC2.leadLag.x_start PARAM */;
  TRACE_POP
}

/*
equation index: 36
type: SIMPLE_ASSIGN
$START.eXAC2.leadLag.TF.x[1] = eXAC2.leadLag.TF.x_start[1]
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_36(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,36};
  data->modelData->realVarsData[76].attribute /* eXAC2.leadLag.TF.x[1] variable */.start = data->simulationInfo->realParameter[168] /* eXAC2.leadLag.TF.x_start[1] PARAM */;
    data->localData[0]->realVars[76] /* eXAC2.leadLag.TF.x[1] variable */ = data->modelData->realVarsData[76].attribute /* eXAC2.leadLag.TF.x[1] variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[76].info /* eXAC2.leadLag.TF.x[1] */.name, (modelica_real) data->localData[0]->realVars[76] /* eXAC2.leadLag.TF.x[1] variable */);
  TRACE_POP
}

/*
equation index: 37
type: SIMPLE_ASSIGN
eXAC2.imLimitedSimpleLag.y_start = eXAC2.VA0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_37(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,37};
  data->simulationInfo->realParameter[155] /* eXAC2.imLimitedSimpleLag.y_start PARAM */ = data->simulationInfo->realParameter[106] /* eXAC2.VA0 PARAM */;
  TRACE_POP
}

/*
equation index: 38
type: SIMPLE_ASSIGN
eXAC2.imLimitedSimpleLag.state = eXAC2.imLimitedSimpleLag.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_38(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,38};
  data->localData[0]->realVars[2] /* eXAC2.imLimitedSimpleLag.state STATE(1) */ = data->simulationInfo->realParameter[155] /* eXAC2.imLimitedSimpleLag.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 39
type: SIMPLE_ASSIGN
$START.eXAC2.DiffV1.u1 = eXAC2.imLimitedSimpleLag.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_39(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,39};
  data->modelData->realVarsData[59].attribute /* eXAC2.DiffV1.u1 variable */.start = data->simulationInfo->realParameter[155] /* eXAC2.imLimitedSimpleLag.y_start PARAM */;
    data->localData[0]->realVars[59] /* eXAC2.DiffV1.u1 variable */ = data->modelData->realVarsData[59].attribute /* eXAC2.DiffV1.u1 variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[59].info /* eXAC2.DiffV1.u1 */.name, (modelica_real) data->localData[0]->realVars[59] /* eXAC2.DiffV1.u1 variable */);
  TRACE_POP
}

/*
equation index: 40
type: SIMPLE_ASSIGN
eXAC2.imDerivativeLag.x_start = eXAC2.VFE0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_40(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,40};
  data->simulationInfo->realParameter[147] /* eXAC2.imDerivativeLag.x_start PARAM */ = data->simulationInfo->realParameter[108] /* eXAC2.VFE0 PARAM */;
  TRACE_POP
}

/*
equation index: 41
type: SIMPLE_ASSIGN
$START.eXAC2.imDerivativeLag.x = eXAC2.imDerivativeLag.x_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_41(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,41};
  data->modelData->realVarsData[1].attribute /* eXAC2.imDerivativeLag.x STATE(1) */.start = data->simulationInfo->realParameter[147] /* eXAC2.imDerivativeLag.x_start PARAM */;
    data->localData[0]->realVars[1] /* eXAC2.imDerivativeLag.x STATE(1) */ = data->modelData->realVarsData[1].attribute /* eXAC2.imDerivativeLag.x STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[1].info /* eXAC2.imDerivativeLag.x */.name, (modelica_real) data->localData[0]->realVars[1] /* eXAC2.imDerivativeLag.x STATE(1) */);
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_381(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_382(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_380(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_497(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_501(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_502(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_500(DATA *data, threadData_t *threadData);


/*
equation index: 49
type: SIMPLE_ASSIGN
eXAC2.imDerivativeLag.x = (eXAC2.add3.u1 / eXAC2.imDerivativeLag.T * 0.03 - eXAC2.imDerivativeLag.y) * eXAC2.imDerivativeLag.T / 0.03
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_49(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,49};
  data->localData[0]->realVars[1] /* eXAC2.imDerivativeLag.x STATE(1) */ = DIVISION_SIM(((DIVISION_SIM(data->localData[0]->realVars[67] /* eXAC2.add3.u1 variable */,data->simulationInfo->realParameter[145] /* eXAC2.imDerivativeLag.T PARAM */,"eXAC2.imDerivativeLag.T",equationIndexes)) * (0.03) - data->localData[0]->realVars[74] /* eXAC2.imDerivativeLag.y variable */) * (data->simulationInfo->realParameter[145] /* eXAC2.imDerivativeLag.T PARAM */),0.03,"0.03",equationIndexes);
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_498(DATA *data, threadData_t *threadData);


/*
equation index: 51
type: SIMPLE_ASSIGN
$DER.gENROE.Epd = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_51(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,51};
  data->localData[0]->realVars[20] /* der(gENROE.Epd) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 52
type: SIMPLE_ASSIGN
gENROE.XaqIlq = (-$DER.gENROE.Epd) * gENROE.Tpq0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_52(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,52};
  data->localData[0]->realVars[108] /* gENROE.XaqIlq variable */ = ((-data->localData[0]->realVars[20] /* der(gENROE.Epd) STATE_DER */)) * (data->simulationInfo->realParameter[271] /* gENROE.Tpq0 PARAM */);
  TRACE_POP
}

void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_53(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_54(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_55(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_56(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_57(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_58(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_59(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_60(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_61(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_62(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_63(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_64(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_65(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_66(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_67(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_68(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_69(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_70(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_71(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_72(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_73(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_74(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_75(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_76(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_77(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_78(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_104(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_103(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_102(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_101(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_100(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_99(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_98(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_97(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_96(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_95(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_94(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_93(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_92(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_91(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_90(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_89(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_88(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_87(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_86(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_85(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_84(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_83(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_82(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_81(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_80(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_79(DATA*, threadData_t*);
/*
equation index: 105
indexNonlinear: 1
type: NONLINEAR

vars: {pwLine.ir.im, pwLine3.is.im, pwLine.ir.re, pwLine3.is.re, pwLine1.is.re, pwLine1.is.im, pwLine4.is.re, pwLine3.ir.re, pwLine3.ir.im, pwLine4.is.im, pwLine4.ir.re, pwLine1.ir.im, gENCLS.iq, gENCLS.id, gENROE.Epq, gENROE.Epd, gENROE.uq, gENROE.PSIppq, gENROE.iq, gENROE.id, pwLine1.vr.im, pwLine1.vr.re, pwLine1.vs.re, pwLine3.vr.re, pwLine3.vr.im, pwLine1.vs.im}
eqns: {53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 104, 103, 102, 101, 100, 99, 98, 97, 96, 95, 94, 93, 92, 91, 90, 89, 88, 87, 86, 85, 84, 83, 82, 81, 80, 79}
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_105(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,105};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 105 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[0] = data->localData[0]->realVars[121] /* pwLine.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[1] = data->localData[0]->realVars[145] /* pwLine3.is.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[2] = data->localData[0]->realVars[122] /* pwLine.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[3] = data->localData[0]->realVars[146] /* pwLine3.is.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[4] = data->localData[0]->realVars[134] /* pwLine1.is.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[5] = data->localData[0]->realVars[133] /* pwLine1.is.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[6] = data->localData[0]->realVars[156] /* pwLine4.is.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[7] = data->localData[0]->realVars[144] /* pwLine3.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[8] = data->localData[0]->realVars[143] /* pwLine3.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[9] = data->localData[0]->realVars[155] /* pwLine4.is.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[10] = data->localData[0]->realVars[154] /* pwLine4.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[11] = data->localData[0]->realVars[131] /* pwLine1.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[12] = data->localData[0]->realVars[92] /* gENCLS.iq variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[13] = data->localData[0]->realVars[91] /* gENCLS.id variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[14] = data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[15] = data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[16] = data->localData[0]->realVars[114] /* gENROE.uq variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[17] = data->localData[0]->realVars[104] /* gENROE.PSIppq variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[18] = data->localData[0]->realVars[112] /* gENROE.iq variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[19] = data->localData[0]->realVars[111] /* gENROE.id variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[20] = data->localData[0]->realVars[135] /* pwLine1.vr.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[21] = data->localData[0]->realVars[136] /* pwLine1.vr.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[22] = data->localData[0]->realVars[138] /* pwLine1.vs.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[23] = data->localData[0]->realVars[148] /* pwLine3.vr.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[24] = data->localData[0]->realVars[147] /* pwLine3.vr.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[25] = data->localData[0]->realVars[137] /* pwLine1.vs.im variable */;
  retValue = solve_nonlinear_system(data, threadData, 1);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,105};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 105 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[121] /* pwLine.ir.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[0];
  data->localData[0]->realVars[145] /* pwLine3.is.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[1];
  data->localData[0]->realVars[122] /* pwLine.ir.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[2];
  data->localData[0]->realVars[146] /* pwLine3.is.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[3];
  data->localData[0]->realVars[134] /* pwLine1.is.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[4];
  data->localData[0]->realVars[133] /* pwLine1.is.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[5];
  data->localData[0]->realVars[156] /* pwLine4.is.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[6];
  data->localData[0]->realVars[144] /* pwLine3.ir.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[7];
  data->localData[0]->realVars[143] /* pwLine3.ir.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[8];
  data->localData[0]->realVars[155] /* pwLine4.is.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[9];
  data->localData[0]->realVars[154] /* pwLine4.ir.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[10];
  data->localData[0]->realVars[131] /* pwLine1.ir.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[11];
  data->localData[0]->realVars[92] /* gENCLS.iq variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[12];
  data->localData[0]->realVars[91] /* gENCLS.id variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[13];
  data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ = data->simulationInfo->nonlinearSystemData[1].nlsx[14];
  data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */ = data->simulationInfo->nonlinearSystemData[1].nlsx[15];
  data->localData[0]->realVars[114] /* gENROE.uq variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[16];
  data->localData[0]->realVars[104] /* gENROE.PSIppq variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[17];
  data->localData[0]->realVars[112] /* gENROE.iq variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[18];
  data->localData[0]->realVars[111] /* gENROE.id variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[19];
  data->localData[0]->realVars[135] /* pwLine1.vr.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[20];
  data->localData[0]->realVars[136] /* pwLine1.vr.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[21];
  data->localData[0]->realVars[138] /* pwLine1.vs.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[22];
  data->localData[0]->realVars[148] /* pwLine3.vr.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[23];
  data->localData[0]->realVars[147] /* pwLine3.vr.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[24];
  data->localData[0]->realVars[137] /* pwLine1.vs.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[25];
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_486(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_485(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_531(DATA *data, threadData_t *threadData);


/*
equation index: 109
type: SIMPLE_ASSIGN
LOAD.angle = 57.29577951308232 * atan2(pwLine1.vs.im, pwLine1.vs.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_109(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,109};
  data->localData[0]->realVars[45] /* LOAD.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[137] /* pwLine1.vs.im variable */, data->localData[0]->realVars[138] /* pwLine1.vs.re variable */));
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_536(DATA *data, threadData_t *threadData);


/*
equation index: 111
type: SIMPLE_ASSIGN
GEN2.angle = 57.29577951308232 * atan2(pwLine1.vr.im, pwLine1.vr.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_111(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,111};
  data->localData[0]->realVars[41] /* GEN2.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[135] /* pwLine1.vr.im variable */, data->localData[0]->realVars[136] /* pwLine1.vr.re variable */));
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_544(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_545(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_546(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_549(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_548(DATA *data, threadData_t *threadData);


/*
equation index: 117
type: SIMPLE_ASSIGN
FAULT.angle = 57.29577951308232 * atan2(pwLine3.vr.im, pwLine3.vr.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_117(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,117};
  data->localData[0]->realVars[33] /* FAULT.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[147] /* pwLine3.vr.im variable */, data->localData[0]->realVars[148] /* pwLine3.vr.re variable */));
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_482(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_479(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_478(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_481(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_480(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_543(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_542(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_541(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_540(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_535(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_534(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_524(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_505(DATA *data, threadData_t *threadData);


/*
equation index: 131
type: SIMPLE_ASSIGN
eXAC2.ECOMP0 = eXAC2.ECOMP
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_131(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,131};
  data->simulationInfo->realParameter[80] /* eXAC2.ECOMP0 PARAM */ = data->localData[0]->realVars[62] /* eXAC2.ECOMP variable */;
  TRACE_POP
}

/*
equation index: 132
type: SIMPLE_ASSIGN
eXAC2.V_REF = eXAC2.VA0 / eXAC2.K_A + eXAC2.ECOMP0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_132(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,132};
  data->simulationInfo->realParameter[116] /* eXAC2.V_REF PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[106] /* eXAC2.VA0 PARAM */,data->simulationInfo->realParameter[85] /* eXAC2.K_A PARAM */,"eXAC2.K_A",equationIndexes) + data->simulationInfo->realParameter[80] /* eXAC2.ECOMP0 PARAM */;
  TRACE_POP
}

/*
equation index: 133
type: SIMPLE_ASSIGN
eXAC2.VoltageReference.k = eXAC2.V_REF
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_133(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,133};
  data->simulationInfo->realParameter[119] /* eXAC2.VoltageReference.k PARAM */ = data->simulationInfo->realParameter[116] /* eXAC2.V_REF PARAM */;
  TRACE_POP
}

/*
equation index: 134
type: SIMPLE_ASSIGN
eXAC2.add7.u2 = eXAC2.VoltageReference.k
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_134(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,134};
  data->simulationInfo->realParameter[140] /* eXAC2.add7.u2 PARAM */ = data->simulationInfo->realParameter[119] /* eXAC2.VoltageReference.k PARAM */;
  TRACE_POP
}

/*
equation index: 135
type: SIMPLE_ASSIGN
eXAC2.VoltageReference.y = eXAC2.VoltageReference.k
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_135(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,135};
  data->simulationInfo->realParameter[120] /* eXAC2.VoltageReference.y PARAM */ = data->simulationInfo->realParameter[119] /* eXAC2.VoltageReference.k PARAM */;
  TRACE_POP
}

/*
equation index: 136
type: SIMPLE_ASSIGN
eXAC2.Vref_step.height = eXAC2.V_REF * eXAC2.dV
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_136(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,136};
  data->simulationInfo->realParameter[123] /* eXAC2.Vref_step.height PARAM */ = (data->simulationInfo->realParameter[116] /* eXAC2.V_REF PARAM */) * (data->simulationInfo->realParameter[141] /* eXAC2.dV PARAM */);
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_377(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_378(DATA *data, threadData_t *threadData);


/*
equation index: 139
type: SIMPLE_ASSIGN
eXAC2.TransducerDelay.y_start = eXAC2.ECOMP0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_139(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,139};
  data->simulationInfo->realParameter[105] /* eXAC2.TransducerDelay.y_start PARAM */ = data->simulationInfo->realParameter[80] /* eXAC2.ECOMP0 PARAM */;
  TRACE_POP
}

/*
equation index: 140
type: SIMPLE_ASSIGN
$START.eXAC2.TransducerDelay.state = eXAC2.TransducerDelay.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_140(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,140};
  data->modelData->realVarsData[0].attribute /* eXAC2.TransducerDelay.state STATE(1) */.start = data->simulationInfo->realParameter[105] /* eXAC2.TransducerDelay.y_start PARAM */;
    data->localData[0]->realVars[0] /* eXAC2.TransducerDelay.state STATE(1) */ = data->modelData->realVarsData[0].attribute /* eXAC2.TransducerDelay.state STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[0].info /* eXAC2.TransducerDelay.state */.name, (modelica_real) data->localData[0]->realVars[0] /* eXAC2.TransducerDelay.state STATE(1) */);
  TRACE_POP
}

/*
equation index: 141
type: SIMPLE_ASSIGN
eXAC2.TransducerDelay.state = eXAC2.TransducerDelay.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_141(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,141};
  data->localData[0]->realVars[0] /* eXAC2.TransducerDelay.state STATE(1) */ = data->simulationInfo->realParameter[105] /* eXAC2.TransducerDelay.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 142
type: SIMPLE_ASSIGN
$START.eXAC2.DiffV.u2 = eXAC2.TransducerDelay.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_142(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,142};
  data->modelData->realVarsData[57].attribute /* eXAC2.DiffV.u2 variable */.start = data->simulationInfo->realParameter[105] /* eXAC2.TransducerDelay.y_start PARAM */;
    data->localData[0]->realVars[57] /* eXAC2.DiffV.u2 variable */ = data->modelData->realVarsData[57].attribute /* eXAC2.DiffV.u2 variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[57].info /* eXAC2.DiffV.u2 */.name, (modelica_real) data->localData[0]->realVars[57] /* eXAC2.DiffV.u2 variable */);
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_507(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_508(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_509(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_512(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_522(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_521(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_514(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_515(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_516(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_517(DATA *data, threadData_t *threadData);


/*
equation index: 153
type: SIMPLE_ASSIGN
eXAC2.limiter.y = homotopy(smooth(0, if eXAC2.gain1.y > eXAC2.limiter.uMax then eXAC2.limiter.uMax else if eXAC2.gain1.y < eXAC2.limiter.uMin then eXAC2.limiter.uMin else eXAC2.gain1.y), eXAC2.gain1.y)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_153(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,153};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  tmp0 = Greater(data->localData[0]->realVars[72] /* eXAC2.gain1.y variable */,data->simulationInfo->realParameter[174] /* eXAC2.limiter.uMax PARAM */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = data->simulationInfo->realParameter[174] /* eXAC2.limiter.uMax PARAM */;
  }
  else
  {
    tmp1 = Less(data->localData[0]->realVars[72] /* eXAC2.gain1.y variable */,data->simulationInfo->realParameter[175] /* eXAC2.limiter.uMin PARAM */);
    tmp3 = (tmp1?data->simulationInfo->realParameter[175] /* eXAC2.limiter.uMin PARAM */:data->localData[0]->realVars[72] /* eXAC2.gain1.y variable */);
  }
  data->localData[0]->realVars[78] /* eXAC2.limiter.y variable */ = homotopy(tmp3, data->localData[0]->realVars[72] /* eXAC2.gain1.y variable */);
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_519(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_520(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_513(DATA *data, threadData_t *threadData);


/*
equation index: 157
type: SIMPLE_ASSIGN
eXAC2.leadLag.TF.x[1] = (eXAC2.leadLag.TF.d * eXAC2.add3_1.y - eXAC2.leadLag.TF.y) / (eXAC2.leadLag.TF.a[2] * eXAC2.leadLag.TF.d - eXAC2.leadLag.TF.bb[2])
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_157(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,157};
  data->localData[0]->realVars[76] /* eXAC2.leadLag.TF.x[1] variable */ = DIVISION_SIM((data->simulationInfo->realParameter[167] /* eXAC2.leadLag.TF.d PARAM */) * (data->localData[0]->realVars[70] /* eXAC2.add3_1.y variable */) - data->localData[0]->realVars[77] /* eXAC2.leadLag.TF.y variable */,(data->simulationInfo->realParameter[161] /* eXAC2.leadLag.TF.a[2] PARAM */) * (data->simulationInfo->realParameter[167] /* eXAC2.leadLag.TF.d PARAM */) - data->simulationInfo->realParameter[166] /* eXAC2.leadLag.TF.bb[2] PARAM */,"eXAC2.leadLag.TF.a[2] * eXAC2.leadLag.TF.d - eXAC2.leadLag.TF.bb[2]",equationIndexes);
  TRACE_POP
}

/*
equation index: 158
type: SIMPLE_ASSIGN
eXAC2.leadLag.TF.x_scaled[1] = eXAC2.leadLag.TF.x[1] * eXAC2.leadLag.TF.a_end
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_158(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,158};
  data->localData[0]->realVars[3] /* eXAC2.leadLag.TF.x_scaled[1] STATE(1) */ = (data->localData[0]->realVars[76] /* eXAC2.leadLag.TF.x[1] variable */) * (data->simulationInfo->realParameter[162] /* eXAC2.leadLag.TF.a_end PARAM */);
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_510(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_506(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_523(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_528(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_526(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_527(DATA *data, threadData_t *threadData);


/*
equation index: 165
type: SIMPLE_ASSIGN
GEN1.angle = 57.29577951308232 * atan2(pwLine.vs.im, pwLine.vs.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_165(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,165};
  data->localData[0]->realVars[37] /* GEN1.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[125] /* pwLine.vs.im variable */, data->localData[0]->realVars[126] /* pwLine.vs.re variable */));
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_533(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_532(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_538(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_539(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_529(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_530(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_503(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_504(DATA *data, threadData_t *threadData);


/*
equation index: 174
type: SIMPLE_ASSIGN
GEN1.p.ir = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_174(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,174};
  data->localData[0]->realVars[39] /* GEN1.p.ir variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 175
type: SIMPLE_ASSIGN
GEN1.p.ii = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_175(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,175};
  data->localData[0]->realVars[38] /* GEN1.p.ii variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 176
type: SIMPLE_ASSIGN
LOAD.p.ir = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_176(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,176};
  data->localData[0]->realVars[47] /* LOAD.p.ir variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 177
type: SIMPLE_ASSIGN
LOAD.p.ii = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_177(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,177};
  data->localData[0]->realVars[46] /* LOAD.p.ii variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 178
type: SIMPLE_ASSIGN
GEN2.p.ir = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_178(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,178};
  data->localData[0]->realVars[43] /* GEN2.p.ir variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 179
type: SIMPLE_ASSIGN
GEN2.p.ii = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_179(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,179};
  data->localData[0]->realVars[42] /* GEN2.p.ii variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 180
type: SIMPLE_ASSIGN
FAULT.p.ir = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_180(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,180};
  data->localData[0]->realVars[35] /* FAULT.p.ir variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 181
type: SIMPLE_ASSIGN
FAULT.p.ii = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_181(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,181};
  data->localData[0]->realVars[34] /* FAULT.p.ii variable */ = 0.0;
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_370(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_371(DATA *data, threadData_t *threadData);


/*
equation index: 184
type: ALGORITHM

  assert(eXAC2.limiter.uMax >= eXAC2.limiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(eXAC2.limiter.uMax, 6, 0, true) + ") < uMin (=" + String(eXAC2.limiter.uMin, 6, 0, true) + ")");
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_184(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,184};
  modelica_boolean tmp4;
  static const MMC_DEFSTRINGLIT(tmp5,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp6;
  static const MMC_DEFSTRINGLIT(tmp7,11,") < uMin (=");
  modelica_string tmp8;
  static int tmp9 = 0;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  {
    tmp4 = GreaterEq(data->simulationInfo->realParameter[174] /* eXAC2.limiter.uMax PARAM */,data->simulationInfo->realParameter[175] /* eXAC2.limiter.uMin PARAM */);
    if(!tmp4)
    {
      tmp6 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[174] /* eXAC2.limiter.uMax PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp5),tmp6);
      tmpMeta[1] = stringAppend(tmpMeta[0],MMC_REFSTRINGLIT(tmp7));
      tmp8 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[175] /* eXAC2.limiter.uMin PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[2] = stringAppend(tmpMeta[1],tmp8);
      tmpMeta[3] = stringAppend(tmpMeta[2],(modelica_string) mmc_strings_len1[41]);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.3/Blocks/Nonlinear.mo",22,9,23,65,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\neXAC2.limiter.uMax >= eXAC2.limiter.uMin", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(tmpMeta[3]));
      }
    }
  }
  TRACE_POP
}
OMC_DISABLE_OPT
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_functionInitialEquations_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_1(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_2(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_3(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_4(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_369(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_6(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_7(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_8(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_9(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_10(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_376(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_12(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_13(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_14(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_15(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_27(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_28(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_29(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_30(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_31(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_32(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_33(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_34(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_35(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_36(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_37(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_38(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_39(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_40(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_41(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_381(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_382(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_380(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_497(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_501(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_502(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_500(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_49(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_498(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_51(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_52(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_105(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_486(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_485(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_531(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_109(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_536(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_111(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_544(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_545(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_546(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_549(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_548(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_117(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_482(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_479(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_478(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_481(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_480(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_543(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_542(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_541(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_540(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_535(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_534(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_524(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_505(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_131(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_132(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_133(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_134(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_135(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_136(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_377(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_378(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_139(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_140(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_141(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_142(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_507(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_508(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_509(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_512(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_522(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_521(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_514(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_515(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_516(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_517(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_153(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_519(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_520(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_513(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_157(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_158(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_510(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_506(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_523(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_528(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_526(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_527(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_165(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_533(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_532(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_538(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_539(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_529(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_530(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_503(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_504(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_174(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_175(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_176(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_177(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_178(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_179(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_180(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_181(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_370(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_371(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_184(data, threadData);
  TRACE_POP
}


int OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_functionInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_functionInitialEquations_0(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_1(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_2(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_3(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_4(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_369(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_6(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_7(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_8(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_9(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_10(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_376(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_12(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_13(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_14(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_15(DATA *data, threadData_t *threadData);


void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_200(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_201(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_202(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_203(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_204(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_205(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_206(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_207(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_208(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_209(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_210(DATA*, threadData_t*);
/*
equation index: 211
indexNonlinear: 2
type: NONLINEAR

vars: {eXAC2.XADIFD}
eqns: {200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210}
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_211(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,211};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 211 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[0] = data->simulationInfo->realParameter[295] /* gENROE.efd0 PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 2);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,211};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 211 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[66] /* eXAC2.XADIFD variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[0];
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_28(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_29(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_30(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_31(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_32(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_33(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_34(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_35(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_36(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_37(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_38(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_39(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_40(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_41(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_381(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_382(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_380(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_497(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_501(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_502(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_500(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_49(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_498(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_51(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_52(DATA *data, threadData_t *threadData);


void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_237(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_238(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_239(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_240(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_241(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_242(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_243(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_244(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_245(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_246(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_247(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_248(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_249(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_250(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_251(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_252(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_253(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_254(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_255(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_256(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_257(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_258(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_259(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_260(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_261(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_262(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_288(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_287(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_286(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_285(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_284(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_283(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_282(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_281(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_280(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_279(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_278(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_277(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_276(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_275(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_274(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_273(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_272(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_271(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_270(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_269(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_268(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_267(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_266(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_265(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_264(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_263(DATA*, threadData_t*);
/*
equation index: 289
indexNonlinear: 3
type: NONLINEAR

vars: {pwLine.ir.im, pwLine3.is.im, pwLine.ir.re, pwLine3.is.re, pwLine1.is.re, pwLine1.is.im, pwLine4.is.re, pwLine3.ir.re, pwLine3.ir.im, pwLine4.is.im, pwLine4.ir.re, pwLine1.ir.im, gENCLS.iq, gENCLS.id, gENROE.Epq, gENROE.Epd, gENROE.uq, gENROE.PSIppq, gENROE.iq, gENROE.id, pwLine1.vr.im, pwLine1.vr.re, pwLine1.vs.re, pwLine3.vr.re, pwLine3.vr.im, pwLine1.vs.im}
eqns: {237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 288, 287, 286, 285, 284, 283, 282, 281, 280, 279, 278, 277, 276, 275, 274, 273, 272, 271, 270, 269, 268, 267, 266, 265, 264, 263}
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_289(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,289};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 289 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[0] = data->localData[0]->realVars[121] /* pwLine.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[1] = data->localData[0]->realVars[145] /* pwLine3.is.im variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[2] = data->localData[0]->realVars[122] /* pwLine.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[3] = data->localData[0]->realVars[146] /* pwLine3.is.re variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[4] = data->localData[0]->realVars[134] /* pwLine1.is.re variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[5] = data->localData[0]->realVars[133] /* pwLine1.is.im variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[6] = data->localData[0]->realVars[156] /* pwLine4.is.re variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[7] = data->localData[0]->realVars[144] /* pwLine3.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[8] = data->localData[0]->realVars[143] /* pwLine3.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[9] = data->localData[0]->realVars[155] /* pwLine4.is.im variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[10] = data->localData[0]->realVars[154] /* pwLine4.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[11] = data->localData[0]->realVars[131] /* pwLine1.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[12] = data->simulationInfo->realParameter[215] /* gENCLS.iq0 PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[13] = data->simulationInfo->realParameter[213] /* gENCLS.id0 PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[14] = data->simulationInfo->realParameter[231] /* gENROE.Epq0 PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[15] = data->simulationInfo->realParameter[230] /* gENROE.Epd0 PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[16] = data->simulationInfo->realParameter[305] /* gENROE.uq0 PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[17] = data->simulationInfo->realParameter[258] /* gENROE.PSIppq0 PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[18] = data->simulationInfo->realParameter[299] /* gENROE.iq0 PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[19] = data->simulationInfo->realParameter[297] /* gENROE.id0 PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[20] = data->simulationInfo->realParameter[222] /* gENCLS.vi0 PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[21] = data->simulationInfo->realParameter[224] /* gENCLS.vr0 PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[22] = data->simulationInfo->realParameter[74] /* constantLoad.vr0 PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[23] = (data->simulationInfo->realParameter[7] /* FAULT.v_0 PARAM */) * (cos(data->simulationInfo->realParameter[5] /* FAULT.angle_0rad PARAM */));
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[24] = (data->simulationInfo->realParameter[7] /* FAULT.v_0 PARAM */) * (sin(data->simulationInfo->realParameter[5] /* FAULT.angle_0rad PARAM */));
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[25] = data->simulationInfo->realParameter[73] /* constantLoad.vi0 PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 3);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,289};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 289 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[121] /* pwLine.ir.im variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[0];
  data->localData[0]->realVars[145] /* pwLine3.is.im variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[1];
  data->localData[0]->realVars[122] /* pwLine.ir.re variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[2];
  data->localData[0]->realVars[146] /* pwLine3.is.re variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[3];
  data->localData[0]->realVars[134] /* pwLine1.is.re variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[4];
  data->localData[0]->realVars[133] /* pwLine1.is.im variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[5];
  data->localData[0]->realVars[156] /* pwLine4.is.re variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[6];
  data->localData[0]->realVars[144] /* pwLine3.ir.re variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[7];
  data->localData[0]->realVars[143] /* pwLine3.ir.im variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[8];
  data->localData[0]->realVars[155] /* pwLine4.is.im variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[9];
  data->localData[0]->realVars[154] /* pwLine4.ir.re variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[10];
  data->localData[0]->realVars[131] /* pwLine1.ir.im variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[11];
  data->localData[0]->realVars[92] /* gENCLS.iq variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[12];
  data->localData[0]->realVars[91] /* gENCLS.id variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[13];
  data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ = data->simulationInfo->nonlinearSystemData[3].nlsx[14];
  data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */ = data->simulationInfo->nonlinearSystemData[3].nlsx[15];
  data->localData[0]->realVars[114] /* gENROE.uq variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[16];
  data->localData[0]->realVars[104] /* gENROE.PSIppq variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[17];
  data->localData[0]->realVars[112] /* gENROE.iq variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[18];
  data->localData[0]->realVars[111] /* gENROE.id variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[19];
  data->localData[0]->realVars[135] /* pwLine1.vr.im variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[20];
  data->localData[0]->realVars[136] /* pwLine1.vr.re variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[21];
  data->localData[0]->realVars[138] /* pwLine1.vs.re variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[22];
  data->localData[0]->realVars[148] /* pwLine3.vr.re variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[23];
  data->localData[0]->realVars[147] /* pwLine3.vr.im variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[24];
  data->localData[0]->realVars[137] /* pwLine1.vs.im variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[25];
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_486(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_485(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_531(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_109(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_536(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_111(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_544(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_545(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_546(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_549(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_548(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_117(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_482(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_479(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_478(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_481(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_480(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_543(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_542(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_541(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_540(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_535(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_534(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_524(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_505(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_131(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_132(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_133(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_134(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_135(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_136(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_377(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_378(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_139(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_140(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_141(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_142(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_507(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_508(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_509(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_512(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_522(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_521(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_514(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_515(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_516(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_517(DATA *data, threadData_t *threadData);


/*
equation index: 337
type: SIMPLE_ASSIGN
eXAC2.limiter.y = eXAC2.gain1.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_337(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,337};
  data->localData[0]->realVars[78] /* eXAC2.limiter.y variable */ = data->localData[0]->realVars[72] /* eXAC2.gain1.y variable */;
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_519(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_520(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_513(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_157(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_158(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_510(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_506(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_523(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_528(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_526(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_527(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_165(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_533(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_532(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_538(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_539(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_529(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_530(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_503(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_504(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_174(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_175(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_176(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_177(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_178(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_179(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_180(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_181(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_370(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_371(DATA *data, threadData_t *threadData);


int OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_functionInitialEquations_lambda0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_1(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_2(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_3(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_4(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_369(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_6(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_7(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_8(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_9(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_10(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_376(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_12(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_13(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_14(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_15(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_211(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_28(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_29(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_30(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_31(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_32(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_33(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_34(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_35(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_36(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_37(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_38(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_39(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_40(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_41(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_381(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_382(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_380(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_497(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_501(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_502(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_500(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_49(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_498(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_51(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_52(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_289(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_486(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_485(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_531(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_109(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_536(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_111(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_544(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_545(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_546(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_549(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_548(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_117(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_482(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_479(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_478(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_481(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_480(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_543(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_542(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_541(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_540(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_535(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_534(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_524(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_505(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_131(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_132(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_133(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_134(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_135(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_136(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_377(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_378(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_139(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_140(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_141(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_142(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_507(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_508(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_509(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_512(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_522(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_521(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_514(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_515(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_516(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_517(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_337(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_519(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_520(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_513(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_157(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_158(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_510(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_506(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_523(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_528(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_526(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_527(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_165(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_533(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_532(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_538(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_539(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_529(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_530(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_503(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_504(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_174(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_175(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_176(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_177(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_178(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_179(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_180(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_181(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_370(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_371(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_functionRemovedInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int *equationIndexes = NULL;
  double res = 0.0;

  res = data->localData[0]->realVars[93] /* gENCLS.omega variable */;
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

