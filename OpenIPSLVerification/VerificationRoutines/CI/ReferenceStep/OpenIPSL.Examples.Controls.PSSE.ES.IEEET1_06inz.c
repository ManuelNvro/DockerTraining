/* Initialization */
#include "OpenIPSL.Examples.Controls.PSSE.ES.IEEET1_model.h"
#include "OpenIPSL.Examples.Controls.PSSE.ES.IEEET1_11mix.h"
#include "OpenIPSL.Examples.Controls.PSSE.ES.IEEET1_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_functionInitialEquations_0(DATA *data, threadData_t *threadData);

/*
equation index: 1
type: SIMPLE_ASSIGN
gENCLS.omega = $START.gENCLS.omega
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_1(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1};
  data->localData[0]->realVars[60] /* gENCLS.omega variable */ = data->modelData->realVarsData[60].attribute /* gENCLS.omega variable */.start;
  TRACE_POP
}

/*
equation index: 2
type: SIMPLE_ASSIGN
iEEET1.rotatingExciter.sISO.local_reset = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_2(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2};
  data->localData[0]->booleanVars[2] /* iEEET1.rotatingExciter.sISO.local_reset DISCRETE */ = 0;
  TRACE_POP
}

/*
equation index: 3
type: SIMPLE_ASSIGN
iEEET1.rotatingExciter.sISO.local_set = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_3(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3};
  data->localData[0]->realVars[97] /* iEEET1.rotatingExciter.sISO.local_set variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 4
type: SIMPLE_ASSIGN
iEEET1.DiffV1.y = zero.k * (iEEET1.DiffV1.k1 + iEEET1.DiffV1.k2)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_4(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4};
  data->localData[0]->realVars[86] /* iEEET1.DiffV1.y variable */ = (data->simulationInfo->realParameter[313] /* zero.k PARAM */) * (data->simulationInfo->realParameter[189] /* iEEET1.DiffV1.k1 PARAM */ + data->simulationInfo->realParameter[190] /* iEEET1.DiffV1.k2 PARAM */);
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_163(DATA *data, threadData_t *threadData);


/*
equation index: 6
type: SIMPLE_ASSIGN
gENCLS.delta = gENCLS.delta0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_6(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6};
  data->localData[0]->realVars[0] /* gENCLS.delta STATE(1) */ = data->simulationInfo->realParameter[88] /* gENCLS.delta0 PARAM */;
  TRACE_POP
}

/*
equation index: 7
type: SIMPLE_ASSIGN
gENCLS.eq = gENCLS.vf0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_7(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7};
  data->localData[0]->realVars[1] /* gENCLS.eq STATE(1) */ = data->simulationInfo->realParameter[98] /* gENCLS.vf0 PARAM */;
  TRACE_POP
}

/*
equation index: 8
type: SIMPLE_ASSIGN
iEEET1.Efd0 = iEEET1.EFD0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_8(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,8};
  data->simulationInfo->realParameter[196] /* iEEET1.Efd0 PARAM */ = data->localData[0]->realVars[88] /* iEEET1.EFD0 variable */;
  TRACE_POP
}

/*
equation index: 9
type: SIMPLE_ASSIGN
iEEET1.rotatingExciter.Efd0 = iEEET1.Efd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_9(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,9};
  data->simulationInfo->realParameter[237] /* iEEET1.rotatingExciter.Efd0 PARAM */ = data->simulationInfo->realParameter[196] /* iEEET1.Efd0 PARAM */;
  TRACE_POP
}

/*
equation index: 10
type: SIMPLE_ASSIGN
iEEET1.rotatingExciter.sISO.y_start = iEEET1.rotatingExciter.Efd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_10(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10};
  data->simulationInfo->realParameter[246] /* iEEET1.rotatingExciter.sISO.y_start PARAM */ = data->simulationInfo->realParameter[237] /* iEEET1.rotatingExciter.Efd0 PARAM */;
  TRACE_POP
}

/*
equation index: 11
type: SIMPLE_ASSIGN
iEEET1.derivativeLag.x_start = iEEET1.Efd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_11(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11};
  data->simulationInfo->realParameter[233] /* iEEET1.derivativeLag.x_start PARAM */ = data->simulationInfo->realParameter[196] /* iEEET1.Efd0 PARAM */;
  TRACE_POP
}

/*
equation index: 12
type: SIMPLE_ASSIGN
$START.iEEET1.derivativeLag.x = iEEET1.derivativeLag.x_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_12(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12};
  data->modelData->realVarsData[9].attribute /* iEEET1.derivativeLag.x STATE(1) */.start = data->simulationInfo->realParameter[233] /* iEEET1.derivativeLag.x_start PARAM */;
    data->localData[0]->realVars[9] /* iEEET1.derivativeLag.x STATE(1) */ = data->modelData->realVarsData[9].attribute /* iEEET1.derivativeLag.x STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[9].info /* iEEET1.derivativeLag.x */.name, (modelica_real) data->localData[0]->realVars[9] /* iEEET1.derivativeLag.x STATE(1) */);
  TRACE_POP
}

/*
equation index: 13
type: SIMPLE_ASSIGN
iEEET1.SE_Efd0 = OpenIPSL.NonElectrical.Functions.SE(iEEET1.Efd0, iEEET1.S_EE_1, iEEET1.S_EE_2, iEEET1.E_1, iEEET1.E_2)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_13(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13};
  data->simulationInfo->realParameter[201] /* iEEET1.SE_Efd0 PARAM */ = omc_OpenIPSL_NonElectrical_Functions_SE(threadData, data->simulationInfo->realParameter[196] /* iEEET1.Efd0 PARAM */, data->simulationInfo->realParameter[202] /* iEEET1.S_EE_1 PARAM */, data->simulationInfo->realParameter[203] /* iEEET1.S_EE_2 PARAM */, data->simulationInfo->realParameter[194] /* iEEET1.E_1 PARAM */, data->simulationInfo->realParameter[195] /* iEEET1.E_2 PARAM */);
  TRACE_POP
}

/*
equation index: 14
type: ALGORITHM

  (iEEET1.VRMAX0, iEEET1.VRMIN0, iEEET1.KE0) := OpenIPSL.Electrical.Controls.PSSE.ES.BaseClasses.calculate_dc_exciter_params(iEEET1.V_RMAX, iEEET1.V_RMIN, iEEET1.K_E, iEEET1.E_2, iEEET1.S_EE_2, iEEET1.Efd0, iEEET1.SE_Efd0);
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_14(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14};
  data->simulationInfo->realParameter[216] /* iEEET1.VRMAX0 PARAM */ = omc_OpenIPSL_Electrical_Controls_PSSE_ES_BaseClasses_calculate__dc__exciter__params(threadData, data->simulationInfo->realParameter[220] /* iEEET1.V_RMAX PARAM */, data->simulationInfo->realParameter[221] /* iEEET1.V_RMIN PARAM */, data->simulationInfo->realParameter[199] /* iEEET1.K_E PARAM */, data->simulationInfo->realParameter[195] /* iEEET1.E_2 PARAM */, data->simulationInfo->realParameter[203] /* iEEET1.S_EE_2 PARAM */, data->simulationInfo->realParameter[196] /* iEEET1.Efd0 PARAM */, data->simulationInfo->realParameter[201] /* iEEET1.SE_Efd0 PARAM */ ,&data->simulationInfo->realParameter[217] /* iEEET1.VRMIN0 PARAM */ ,&data->simulationInfo->realParameter[197] /* iEEET1.KE0 PARAM */);
  TRACE_POP
}

/*
equation index: 15
type: SIMPLE_ASSIGN
iEEET1.rotatingExciter.K_E = iEEET1.KE0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_15(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,15};
  data->simulationInfo->realParameter[238] /* iEEET1.rotatingExciter.K_E PARAM */ = data->simulationInfo->realParameter[197] /* iEEET1.KE0 PARAM */;
  TRACE_POP
}

/*
equation index: 16
type: SIMPLE_ASSIGN
iEEET1.rotatingExciter.gain.k = iEEET1.rotatingExciter.K_E
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_16(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,16};
  data->simulationInfo->realParameter[244] /* iEEET1.rotatingExciter.gain.k PARAM */ = data->simulationInfo->realParameter[238] /* iEEET1.rotatingExciter.K_E PARAM */;
  TRACE_POP
}

/*
equation index: 17
type: SIMPLE_ASSIGN
iEEET1.VR0 = iEEET1.Efd0 * (iEEET1.KE0 + iEEET1.SE_Efd0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_17(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,17};
  data->simulationInfo->realParameter[215] /* iEEET1.VR0 PARAM */ = (data->simulationInfo->realParameter[196] /* iEEET1.Efd0 PARAM */) * (data->simulationInfo->realParameter[197] /* iEEET1.KE0 PARAM */ + data->simulationInfo->realParameter[201] /* iEEET1.SE_Efd0 PARAM */);
  TRACE_POP
}

/*
equation index: 18
type: SIMPLE_ASSIGN
iEEET1.simpleLagLim.y_start = iEEET1.VR0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_18(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,18};
  data->simulationInfo->realParameter[257] /* iEEET1.simpleLagLim.y_start PARAM */ = data->simulationInfo->realParameter[215] /* iEEET1.VR0 PARAM */;
  TRACE_POP
}

/*
equation index: 19
type: SIMPLE_ASSIGN
$START.iEEET1.rotatingExciter.I_C = iEEET1.simpleLagLim.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_19(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,19};
  data->modelData->realVarsData[91].attribute /* iEEET1.rotatingExciter.I_C variable */.start = data->simulationInfo->realParameter[257] /* iEEET1.simpleLagLim.y_start PARAM */;
    data->localData[0]->realVars[91] /* iEEET1.rotatingExciter.I_C variable */ = data->modelData->realVarsData[91].attribute /* iEEET1.rotatingExciter.I_C variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[91].info /* iEEET1.rotatingExciter.I_C */.name, (modelica_real) data->localData[0]->realVars[91] /* iEEET1.rotatingExciter.I_C variable */);
  TRACE_POP
}

/*
equation index: 20
type: SIMPLE_ASSIGN
iEEET1.rotatingExciter.sISO.y = iEEET1.rotatingExciter.sISO.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_20(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,20};
  data->localData[0]->realVars[10] /* iEEET1.rotatingExciter.sISO.y STATE(1) */ = data->simulationInfo->realParameter[246] /* iEEET1.rotatingExciter.sISO.y_start PARAM */;
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_176(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_177(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_175(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_178(DATA *data, threadData_t *threadData);


/*
equation index: 25
type: SIMPLE_ASSIGN
iEEET1.simpleLagLim.state = iEEET1.simpleLagLim.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_25(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,25};
  data->localData[0]->realVars[11] /* iEEET1.simpleLagLim.state STATE(1) */ = data->simulationInfo->realParameter[257] /* iEEET1.simpleLagLim.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 26
type: SIMPLE_ASSIGN
iEEET1.derivativeLag.y = iEEET1.derivativeLag.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_26(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,26};
  data->localData[0]->realVars[90] /* iEEET1.derivativeLag.y variable */ = data->simulationInfo->realParameter[234] /* iEEET1.derivativeLag.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 27
type: SIMPLE_ASSIGN
iEEET1.derivativeLag.x = (iEEET1.rotatingExciter.sISO.y / iEEET1.derivativeLag.T * 0.06 - iEEET1.derivativeLag.y) * iEEET1.derivativeLag.T / 0.06
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_27(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,27};
  data->localData[0]->realVars[9] /* iEEET1.derivativeLag.x STATE(1) */ = DIVISION_SIM(((DIVISION_SIM(data->localData[0]->realVars[10] /* iEEET1.rotatingExciter.sISO.y STATE(1) */,data->simulationInfo->realParameter[231] /* iEEET1.derivativeLag.T PARAM */,"iEEET1.derivativeLag.T",equationIndexes)) * (0.06) - data->localData[0]->realVars[90] /* iEEET1.derivativeLag.y variable */) * (data->simulationInfo->realParameter[231] /* iEEET1.derivativeLag.T PARAM */),0.06,"0.06",equationIndexes);
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_173(DATA *data, threadData_t *threadData);


/*
equation index: 29
type: SIMPLE_ASSIGN
gENROE.w = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_29(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,29};
  data->localData[0]->realVars[7] /* gENROE.w STATE(1) */ = 0.0;
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_170(DATA *data, threadData_t *threadData);


/*
equation index: 31
type: SIMPLE_ASSIGN
gENROE.delta = gENROE.delta0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_31(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,31};
  data->localData[0]->realVars[6] /* gENROE.delta STATE(1) */ = data->simulationInfo->realParameter[170] /* gENROE.delta0 PARAM */;
  TRACE_POP
}

/*
equation index: 32
type: SIMPLE_ASSIGN
$DER.gENROE.PSIkq = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_32(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,32};
  data->localData[0]->realVars[17] /* der(gENROE.PSIkq) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 33
type: SIMPLE_ASSIGN
$DER.gENROE.PSIkd = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_33(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,33};
  data->localData[0]->realVars[16] /* der(gENROE.PSIkd) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 34
type: SIMPLE_ASSIGN
$DER.gENROE.Epq = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_34(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,34};
  data->localData[0]->realVars[15] /* der(gENROE.Epq) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 35
type: SIMPLE_ASSIGN
gENROE.XADIFD = iEEET1.rotatingExciter.sISO.y - $DER.gENROE.Epq * gENROE.Tpd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_35(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,35};
  data->localData[0]->realVars[75] /* gENROE.XADIFD variable */ = data->localData[0]->realVars[10] /* iEEET1.rotatingExciter.sISO.y STATE(1) */ - ((data->localData[0]->realVars[15] /* der(gENROE.Epq) STATE_DER */) * (data->simulationInfo->realParameter[145] /* gENROE.Tpd0 PARAM */));
  TRACE_POP
}

/*
equation index: 36
type: SIMPLE_ASSIGN
$DER.gENROE.Epd = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_36(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,36};
  data->localData[0]->realVars[14] /* der(gENROE.Epd) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 37
type: SIMPLE_ASSIGN
gENROE.XaqIlq = (-$DER.gENROE.Epd) * gENROE.Tpq0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_37(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,37};
  data->localData[0]->realVars[76] /* gENROE.XaqIlq variable */ = ((-data->localData[0]->realVars[14] /* der(gENROE.Epd) STATE_DER */)) * (data->simulationInfo->realParameter[148] /* gENROE.Tpq0 PARAM */);
  TRACE_POP
}

void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_38(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_39(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_40(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_41(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_42(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_43(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_44(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_45(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_46(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_47(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_48(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_49(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_50(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_51(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_52(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_53(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_54(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_55(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_56(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_57(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_58(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_59(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_60(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_61(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_62(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_63(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_89(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_88(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_87(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_86(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_85(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_84(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_83(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_82(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_81(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_80(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_79(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_78(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_77(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_76(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_75(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_74(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_73(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_72(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_71(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_70(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_69(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_68(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_67(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_66(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_65(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_64(DATA*, threadData_t*);
/*
equation index: 90
indexNonlinear: 0
type: NONLINEAR

vars: {pwLine.ir.im, pwLine1.is.im, pwLine.ir.re, pwLine3.is.re, pwLine3.ir.re, pwLine4.is.re, pwLine3.ir.im, pwLine4.is.im, constantLoad.p.ir, constantLoad.p.ii, pwLine4.ir.im, pwLine4.ir.re, gENCLS.id, gENCLS.iq, gENROE.PSIkd, gENROE.PSIkq, gENROE.uq, gENROE.PSIppq, gENROE.iq, gENROE.id, pwLine1.vr.im, pwLine1.vr.re, pwLine1.vs.im, pwLine1.vs.re, pwLine3.vr.re, pwLine3.vr.im}
eqns: {38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 89, 88, 87, 86, 85, 84, 83, 82, 81, 80, 79, 78, 77, 76, 75, 74, 73, 72, 71, 70, 69, 68, 67, 66, 65, 64}
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_90(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,90};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 90 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[0] = data->localData[0]->realVars[106] /* pwLine.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[1] = data->localData[0]->realVars[118] /* pwLine1.is.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[2] = data->localData[0]->realVars[107] /* pwLine.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[3] = data->localData[0]->realVars[131] /* pwLine3.is.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[4] = data->localData[0]->realVars[129] /* pwLine3.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[5] = data->localData[0]->realVars[141] /* pwLine4.is.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[6] = data->localData[0]->realVars[128] /* pwLine3.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[7] = data->localData[0]->realVars[140] /* pwLine4.is.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[8] = data->simulationInfo->realParameter[68] /* constantLoad.ir0 PARAM */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[9] = data->simulationInfo->realParameter[67] /* constantLoad.ii0 PARAM */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[10] = data->localData[0]->realVars[138] /* pwLine4.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[11] = data->localData[0]->realVars[139] /* pwLine4.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[12] = data->simulationInfo->realParameter[90] /* gENCLS.id0 PARAM */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[13] = data->simulationInfo->realParameter[92] /* gENCLS.iq0 PARAM */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[14] = data->simulationInfo->realParameter[128] /* gENROE.PSIkd0 PARAM */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[15] = data->simulationInfo->realParameter[129] /* gENROE.PSIkq0 PARAM */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[16] = data->simulationInfo->realParameter[182] /* gENROE.uq0 PARAM */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[17] = data->simulationInfo->realParameter[135] /* gENROE.PSIppq0 PARAM */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[18] = data->simulationInfo->realParameter[176] /* gENROE.iq0 PARAM */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[19] = data->simulationInfo->realParameter[174] /* gENROE.id0 PARAM */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[20] = data->simulationInfo->realParameter[99] /* gENCLS.vi0 PARAM */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[21] = data->simulationInfo->realParameter[101] /* gENCLS.vr0 PARAM */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[22] = data->simulationInfo->realParameter[73] /* constantLoad.vi0 PARAM */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[23] = data->simulationInfo->realParameter[74] /* constantLoad.vr0 PARAM */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[24] = (data->simulationInfo->realParameter[7] /* FAULT.v_0 PARAM */) * (cos(data->simulationInfo->realParameter[5] /* FAULT.angle_0rad PARAM */));
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[25] = (data->simulationInfo->realParameter[7] /* FAULT.v_0 PARAM */) * (sin(data->simulationInfo->realParameter[5] /* FAULT.angle_0rad PARAM */));
  retValue = solve_nonlinear_system(data, threadData, 0);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,90};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 90 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[106] /* pwLine.ir.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[0];
  data->localData[0]->realVars[118] /* pwLine1.is.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[1];
  data->localData[0]->realVars[107] /* pwLine.ir.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[2];
  data->localData[0]->realVars[131] /* pwLine3.is.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[3];
  data->localData[0]->realVars[129] /* pwLine3.ir.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[4];
  data->localData[0]->realVars[141] /* pwLine4.is.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[5];
  data->localData[0]->realVars[128] /* pwLine3.ir.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[6];
  data->localData[0]->realVars[140] /* pwLine4.is.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[7];
  data->localData[0]->realVars[52] /* constantLoad.p.ir variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[8];
  data->localData[0]->realVars[51] /* constantLoad.p.ii variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[9];
  data->localData[0]->realVars[138] /* pwLine4.ir.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[10];
  data->localData[0]->realVars[139] /* pwLine4.ir.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[11];
  data->localData[0]->realVars[58] /* gENCLS.id variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[12];
  data->localData[0]->realVars[59] /* gENCLS.iq variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[13];
  data->localData[0]->realVars[4] /* gENROE.PSIkd STATE(1) */ = data->simulationInfo->nonlinearSystemData[0].nlsx[14];
  data->localData[0]->realVars[5] /* gENROE.PSIkq STATE(1) */ = data->simulationInfo->nonlinearSystemData[0].nlsx[15];
  data->localData[0]->realVars[82] /* gENROE.uq variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[16];
  data->localData[0]->realVars[71] /* gENROE.PSIppq variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[17];
  data->localData[0]->realVars[80] /* gENROE.iq variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[18];
  data->localData[0]->realVars[79] /* gENROE.id variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[19];
  data->localData[0]->realVars[120] /* pwLine1.vr.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[20];
  data->localData[0]->realVars[121] /* pwLine1.vr.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[21];
  data->localData[0]->realVars[122] /* pwLine1.vs.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[22];
  data->localData[0]->realVars[123] /* pwLine1.vs.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[23];
  data->localData[0]->realVars[133] /* pwLine3.vr.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[24];
  data->localData[0]->realVars[132] /* pwLine3.vr.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[25];
  TRACE_POP
}

/*
equation index: 91
type: SIMPLE_ASSIGN
LOAD.angle = 57.29577951308232 * atan2(pwLine1.vs.im, pwLine1.vs.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_91(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,91};
  data->localData[0]->realVars[43] /* LOAD.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[122] /* pwLine1.vs.im variable */, data->localData[0]->realVars[123] /* pwLine1.vs.re variable */));
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_310(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_306(DATA *data, threadData_t *threadData);


/*
equation index: 94
type: SIMPLE_ASSIGN
FAULT.angle = 57.29577951308232 * atan2(pwLine3.vr.im, pwLine3.vr.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_94(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,94};
  data->localData[0]->realVars[31] /* FAULT.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[132] /* pwLine3.vr.im variable */, data->localData[0]->realVars[133] /* pwLine3.vr.re variable */));
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_317(DATA *data, threadData_t *threadData);


/*
equation index: 96
type: SIMPLE_ASSIGN
GEN2.angle = 57.29577951308232 * atan2(pwLine1.vr.im, pwLine1.vr.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_96(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,96};
  data->localData[0]->realVars[39] /* GEN2.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[120] /* pwLine1.vr.im variable */, data->localData[0]->realVars[121] /* pwLine1.vr.re variable */));
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_326(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_327(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_328(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_325(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_324(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_323(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_322(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_316(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_315(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_314(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_313(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_321(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_320(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_312(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_311(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_278(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_277(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_297(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_284(DATA *data, threadData_t *threadData);


/*
equation index: 116
type: SIMPLE_ASSIGN
iEEET1.ECOMP0 = iEEET1.ECOMP
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_116(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,116};
  data->simulationInfo->realParameter[193] /* iEEET1.ECOMP0 PARAM */ = data->localData[0]->realVars[87] /* iEEET1.ECOMP variable */;
  TRACE_POP
}

/*
equation index: 117
type: SIMPLE_ASSIGN
iEEET1.V_REF = iEEET1.VR0 / iEEET1.K_A + iEEET1.ECOMP0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_117(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,117};
  data->simulationInfo->realParameter[219] /* iEEET1.V_REF PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[215] /* iEEET1.VR0 PARAM */,data->simulationInfo->realParameter[198] /* iEEET1.K_A PARAM */,"iEEET1.K_A",equationIndexes) + data->simulationInfo->realParameter[193] /* iEEET1.ECOMP0 PARAM */;
  TRACE_POP
}

/*
equation index: 118
type: SIMPLE_ASSIGN
iEEET1.VoltageReference.k = iEEET1.V_REF
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_118(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,118};
  data->simulationInfo->realParameter[222] /* iEEET1.VoltageReference.k PARAM */ = data->simulationInfo->realParameter[219] /* iEEET1.V_REF PARAM */;
  TRACE_POP
}

/*
equation index: 119
type: SIMPLE_ASSIGN
iEEET1.add7.u2 = iEEET1.VoltageReference.k
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_119(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,119};
  data->simulationInfo->realParameter[229] /* iEEET1.add7.u2 PARAM */ = data->simulationInfo->realParameter[222] /* iEEET1.VoltageReference.k PARAM */;
  TRACE_POP
}

/*
equation index: 120
type: SIMPLE_ASSIGN
iEEET1.VoltageReference.y = iEEET1.VoltageReference.k
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_120(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,120};
  data->simulationInfo->realParameter[223] /* iEEET1.VoltageReference.y PARAM */ = data->simulationInfo->realParameter[222] /* iEEET1.VoltageReference.k PARAM */;
  TRACE_POP
}

/*
equation index: 121
type: SIMPLE_ASSIGN
iEEET1.Vref_step.height = iEEET1.V_REF * iEEET1.dV
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_121(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,121};
  data->simulationInfo->realParameter[224] /* iEEET1.Vref_step.height PARAM */ = (data->simulationInfo->realParameter[219] /* iEEET1.V_REF PARAM */) * (data->simulationInfo->realParameter[230] /* iEEET1.dV PARAM */);
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_171(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_172(DATA *data, threadData_t *threadData);


/*
equation index: 124
type: SIMPLE_ASSIGN
iEEET1.TransducerDelay.y_start = iEEET1.ECOMP0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_124(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,124};
  data->simulationInfo->realParameter[212] /* iEEET1.TransducerDelay.y_start PARAM */ = data->simulationInfo->realParameter[193] /* iEEET1.ECOMP0 PARAM */;
  TRACE_POP
}

/*
equation index: 125
type: SIMPLE_ASSIGN
$START.iEEET1.TransducerDelay.state = iEEET1.TransducerDelay.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_125(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,125};
  data->modelData->realVarsData[8].attribute /* iEEET1.TransducerDelay.state STATE(1) */.start = data->simulationInfo->realParameter[212] /* iEEET1.TransducerDelay.y_start PARAM */;
    data->localData[0]->realVars[8] /* iEEET1.TransducerDelay.state STATE(1) */ = data->modelData->realVarsData[8].attribute /* iEEET1.TransducerDelay.state STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[8].info /* iEEET1.TransducerDelay.state */.name, (modelica_real) data->localData[0]->realVars[8] /* iEEET1.TransducerDelay.state STATE(1) */);
  TRACE_POP
}

/*
equation index: 126
type: SIMPLE_ASSIGN
iEEET1.TransducerDelay.state = iEEET1.TransducerDelay.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_126(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,126};
  data->localData[0]->realVars[8] /* iEEET1.TransducerDelay.state STATE(1) */ = data->simulationInfo->realParameter[212] /* iEEET1.TransducerDelay.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 127
type: SIMPLE_ASSIGN
$START.iEEET1.DiffV.u2 = iEEET1.TransducerDelay.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_127(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,127};
  data->modelData->realVarsData[84].attribute /* iEEET1.DiffV.u2 variable */.start = data->simulationInfo->realParameter[212] /* iEEET1.TransducerDelay.y_start PARAM */;
    data->localData[0]->realVars[84] /* iEEET1.DiffV.u2 variable */ = data->modelData->realVarsData[84].attribute /* iEEET1.DiffV.u2 variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[84].info /* iEEET1.DiffV.u2 */.name, (modelica_real) data->localData[0]->realVars[84] /* iEEET1.DiffV.u2 variable */);
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_286(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_287(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_288(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_289(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_295(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_294(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_291(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_292(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_293(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_290(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_285(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_296(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_301(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_299(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_300(DATA *data, threadData_t *threadData);


/*
equation index: 143
type: SIMPLE_ASSIGN
GEN1.angle = 57.29577951308232 * atan2(pwLine.vs.im, pwLine.vs.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_143(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,143};
  data->localData[0]->realVars[35] /* GEN1.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[110] /* pwLine.vs.im variable */, data->localData[0]->realVars[111] /* pwLine.vs.re variable */));
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_305(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_304(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_308(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_309(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_302(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_303(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_280(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_281(DATA *data, threadData_t *threadData);


/*
equation index: 152
type: SIMPLE_ASSIGN
GEN1.p.ir = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_152(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,152};
  data->localData[0]->realVars[37] /* GEN1.p.ir variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 153
type: SIMPLE_ASSIGN
GEN1.p.ii = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_153(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,153};
  data->localData[0]->realVars[36] /* GEN1.p.ii variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 154
type: SIMPLE_ASSIGN
LOAD.p.ir = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_154(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,154};
  data->localData[0]->realVars[45] /* LOAD.p.ir variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 155
type: SIMPLE_ASSIGN
LOAD.p.ii = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_155(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,155};
  data->localData[0]->realVars[44] /* LOAD.p.ii variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 156
type: SIMPLE_ASSIGN
GEN2.p.ir = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_156(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,156};
  data->localData[0]->realVars[41] /* GEN2.p.ir variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 157
type: SIMPLE_ASSIGN
GEN2.p.ii = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_157(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,157};
  data->localData[0]->realVars[40] /* GEN2.p.ii variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 158
type: SIMPLE_ASSIGN
FAULT.p.ir = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_158(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,158};
  data->localData[0]->realVars[33] /* FAULT.p.ir variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 159
type: SIMPLE_ASSIGN
FAULT.p.ii = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_159(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,159};
  data->localData[0]->realVars[32] /* FAULT.p.ii variable */ = 0.0;
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_164(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_165(DATA *data, threadData_t *threadData);

OMC_DISABLE_OPT
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_functionInitialEquations_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_1(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_2(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_3(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_4(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_163(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_6(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_7(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_8(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_9(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_10(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_11(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_12(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_13(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_14(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_15(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_16(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_17(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_18(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_19(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_20(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_176(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_177(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_175(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_178(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_25(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_26(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_27(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_173(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_29(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_170(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_31(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_32(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_33(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_34(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_35(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_36(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_37(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_90(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_91(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_310(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_306(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_94(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_317(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_96(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_326(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_327(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_328(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_325(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_324(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_323(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_322(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_316(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_315(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_314(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_313(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_321(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_320(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_312(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_311(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_278(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_277(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_297(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_284(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_116(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_117(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_118(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_119(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_120(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_121(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_171(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_172(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_124(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_125(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_126(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_127(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_286(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_287(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_288(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_289(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_295(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_294(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_291(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_292(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_293(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_290(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_285(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_296(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_301(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_299(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_300(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_143(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_305(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_304(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_308(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_309(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_302(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_303(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_280(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_281(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_152(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_153(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_154(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_155(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_156(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_157(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_158(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_159(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_164(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_165(data, threadData);
  TRACE_POP
}


int OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_functionInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_functionInitialEquations_0(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}


int OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_functionInitialEquations_lambda0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_functionRemovedInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int *equationIndexes = NULL;
  double res = 0.0;

  res = data->localData[0]->realVars[60] /* gENCLS.omega variable */;
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

