/* Initialization */
#include "OpenIPSL.Examples.Controls.PSSE.ES.SEXS_model.h"
#include "OpenIPSL.Examples.Controls.PSSE.ES.SEXS_11mix.h"
#include "OpenIPSL.Examples.Controls.PSSE.ES.SEXS_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_functionInitialEquations_0(DATA *data, threadData_t *threadData);

/*
equation index: 1
type: SIMPLE_ASSIGN
gENCLS.omega = $START.gENCLS.omega
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_1(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1};
  data->localData[0]->realVars[56] /* gENCLS.omega variable */ = data->modelData->realVarsData[56].attribute /* gENCLS.omega variable */.start;
  TRACE_POP
}

/*
equation index: 2
type: SIMPLE_ASSIGN
sEXS.DiffV1.y = zero.k * (sEXS.DiffV1.k1 + sEXS.DiffV1.k2)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_2(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2};
  data->localData[0]->realVars[124] /* sEXS.DiffV1.y variable */ = (data->simulationInfo->realParameter[294] /* zero.k PARAM */) * (data->simulationInfo->realParameter[239] /* sEXS.DiffV1.k1 PARAM */ + data->simulationInfo->realParameter[240] /* sEXS.DiffV1.k2 PARAM */);
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_145(DATA *data, threadData_t *threadData);


/*
equation index: 4
type: SIMPLE_ASSIGN
gENCLS.delta = gENCLS.delta0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_4(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4};
  data->localData[0]->realVars[0] /* gENCLS.delta STATE(1) */ = data->simulationInfo->realParameter[90] /* gENCLS.delta0 PARAM */;
  TRACE_POP
}

/*
equation index: 5
type: SIMPLE_ASSIGN
gENCLS.eq = gENCLS.vf0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_5(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5};
  data->localData[0]->realVars[1] /* gENCLS.eq STATE(1) */ = data->simulationInfo->realParameter[100] /* gENCLS.vf0 PARAM */;
  TRACE_POP
}

/*
equation index: 6
type: SIMPLE_ASSIGN
sEXS.Efd0 = sEXS.EFD0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_6(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6};
  data->simulationInfo->realParameter[246] /* sEXS.Efd0 PARAM */ = data->localData[0]->realVars[126] /* sEXS.EFD0 variable */;
  TRACE_POP
}

/*
equation index: 7
type: SIMPLE_ASSIGN
sEXS.leadLag.y_start = sEXS.Efd0 / sEXS.K
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_7(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7};
  data->simulationInfo->realParameter[285] /* sEXS.leadLag.y_start PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[246] /* sEXS.Efd0 PARAM */,data->simulationInfo->realParameter[247] /* sEXS.K PARAM */,"sEXS.K",equationIndexes);
  TRACE_POP
}

/*
equation index: 8
type: SIMPLE_ASSIGN
sEXS.leadLag.TF.y_start = sEXS.leadLag.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_8(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,8};
  data->simulationInfo->realParameter[281] /* sEXS.leadLag.TF.y_start PARAM */ = data->simulationInfo->realParameter[285] /* sEXS.leadLag.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 9
type: SIMPLE_ASSIGN
sEXS.leadLag.x_start = sEXS.Efd0 / sEXS.K
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_9(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,9};
  data->simulationInfo->realParameter[284] /* sEXS.leadLag.x_start PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[246] /* sEXS.Efd0 PARAM */,data->simulationInfo->realParameter[247] /* sEXS.K PARAM */,"sEXS.K",equationIndexes);
  TRACE_POP
}

/*
equation index: 10
type: SIMPLE_ASSIGN
sEXS.leadLag.TF.x_start[1] = sEXS.leadLag.x_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_10(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10};
  data->simulationInfo->realParameter[280] /* sEXS.leadLag.TF.x_start[1] PARAM */ = data->simulationInfo->realParameter[284] /* sEXS.leadLag.x_start PARAM */;
  TRACE_POP
}

/*
equation index: 11
type: SIMPLE_ASSIGN
$START.sEXS.leadLag.TF.x[1] = sEXS.leadLag.TF.x_start[1]
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_11(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11};
  data->modelData->realVarsData[129].attribute /* sEXS.leadLag.TF.x[1] variable */.start = data->simulationInfo->realParameter[280] /* sEXS.leadLag.TF.x_start[1] PARAM */;
    data->localData[0]->realVars[129] /* sEXS.leadLag.TF.x[1] variable */ = data->modelData->realVarsData[129].attribute /* sEXS.leadLag.TF.x[1] variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[129].info /* sEXS.leadLag.TF.x[1] */.name, (modelica_real) data->localData[0]->realVars[129] /* sEXS.leadLag.TF.x[1] variable */);
  TRACE_POP
}

/*
equation index: 12
type: SIMPLE_ASSIGN
sEXS.simpleLagLim.y_start = sEXS.Efd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_12(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12};
  data->simulationInfo->realParameter[292] /* sEXS.simpleLagLim.y_start PARAM */ = data->simulationInfo->realParameter[246] /* sEXS.Efd0 PARAM */;
  TRACE_POP
}

/*
equation index: 13
type: SIMPLE_ASSIGN
$START.gENROU.EFD = sEXS.simpleLagLim.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_13(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13};
  data->modelData->realVarsData[61].attribute /* gENROU.EFD variable */.start = data->simulationInfo->realParameter[292] /* sEXS.simpleLagLim.y_start PARAM */;
    data->localData[0]->realVars[61] /* gENROU.EFD variable */ = data->modelData->realVarsData[61].attribute /* gENROU.EFD variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[61].info /* gENROU.EFD */.name, (modelica_real) data->localData[0]->realVars[61] /* gENROU.EFD variable */);
  TRACE_POP
}

/*
equation index: 14
type: SIMPLE_ASSIGN
sEXS.leadLag.TF.y = sEXS.leadLag.TF.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_14(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14};
  data->localData[0]->realVars[130] /* sEXS.leadLag.TF.y variable */ = data->simulationInfo->realParameter[281] /* sEXS.leadLag.TF.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 15
type: SIMPLE_ASSIGN
sEXS.simpleLagLim.state = sEXS.simpleLagLim.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_15(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,15};
  data->localData[0]->realVars[9] /* sEXS.simpleLagLim.state STATE(1) */ = data->simulationInfo->realParameter[292] /* sEXS.simpleLagLim.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 16
type: SIMPLE_ASSIGN
gENROU.w = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_16(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,16};
  data->localData[0]->realVars[7] /* gENROU.w STATE(1) */ = 0.0;
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_152(DATA *data, threadData_t *threadData);


/*
equation index: 18
type: SIMPLE_ASSIGN
gENROU.delta = gENROU.delta0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_18(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,18};
  data->localData[0]->realVars[6] /* gENROU.delta STATE(1) */ = data->simulationInfo->realParameter[172] /* gENROU.delta0 PARAM */;
  TRACE_POP
}

/*
equation index: 19
type: SIMPLE_ASSIGN
$DER.gENROU.PSIkq = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_19(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,19};
  data->localData[0]->realVars[15] /* der(gENROU.PSIkq) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 20
type: SIMPLE_ASSIGN
$DER.gENROU.PSIkd = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_20(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,20};
  data->localData[0]->realVars[14] /* der(gENROU.PSIkd) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 21
type: SIMPLE_ASSIGN
$DER.gENROU.Epq = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_21(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,21};
  data->localData[0]->realVars[13] /* der(gENROU.Epq) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 22
type: SIMPLE_ASSIGN
$DER.gENROU.Epd = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_22(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,22};
  data->localData[0]->realVars[12] /* der(gENROU.Epd) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 23
type: SIMPLE_ASSIGN
gENROU.XaqIlq = (-$DER.gENROU.Epd) * gENROU.Tpq0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_23(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,23};
  data->localData[0]->realVars[73] /* gENROU.XaqIlq variable */ = ((-data->localData[0]->realVars[12] /* der(gENROU.Epd) STATE_DER */)) * (data->simulationInfo->realParameter[150] /* gENROU.Tpq0 PARAM */);
  TRACE_POP
}

void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_24(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_25(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_26(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_27(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_28(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_29(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_30(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_31(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_32(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_33(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_34(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_35(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_36(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_37(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_38(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_39(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_40(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_41(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_42(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_43(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_44(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_45(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_46(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_47(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_48(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_49(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_50(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_51(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_52(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_53(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_54(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_55(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_56(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_57(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_58(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_87(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_86(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_85(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_84(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_83(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_82(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_81(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_80(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_79(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_78(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_77(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_76(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_75(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_74(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_73(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_72(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_71(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_70(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_69(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_68(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_67(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_66(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_65(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_64(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_63(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_62(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_61(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_60(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_59(DATA*, threadData_t*);
/*
equation index: 88
indexNonlinear: 0
type: NONLINEAR

vars: {pwLine.ir.im, pwLine1.is.im, pwLine.ir.re, pwLine1.is.re, pwLine3.is.re, pwLine3.is.im, pwLine4.is.im, pwLine3.ir.im, pwLine3.ir.re, pwLine4.is.re, pwLine4.ir.im, pwLine1.ir.re, gENCLS.iq, gENCLS.id, gENROU.Epq, gENROU.Epd, gENROU.PSIppd, gENROU.PSIppq, gENROU.iq, gENROU.id, pwLine.vs.re, pwLine.vs.im, pwLine1.vr.im, pwLine1.vr.re, sEXS.ECOMP, pwLine1.vs.re, pwLine3.vr.re, pwLine3.vr.im, pwLine1.vs.im}
eqns: {24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 87, 86, 85, 84, 83, 82, 81, 80, 79, 78, 77, 76, 75, 74, 73, 72, 71, 70, 69, 68, 67, 66, 65, 64, 63, 62, 61, 60, 59}
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_88(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,88};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 88 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[0] = data->localData[0]->realVars[86] /* pwLine.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[1] = data->localData[0]->realVars[98] /* pwLine1.is.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[2] = data->localData[0]->realVars[87] /* pwLine.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[3] = data->localData[0]->realVars[99] /* pwLine1.is.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[4] = data->localData[0]->realVars[111] /* pwLine3.is.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[5] = data->localData[0]->realVars[110] /* pwLine3.is.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[6] = data->localData[0]->realVars[120] /* pwLine4.is.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[7] = data->localData[0]->realVars[108] /* pwLine3.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[8] = data->localData[0]->realVars[109] /* pwLine3.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[9] = data->localData[0]->realVars[121] /* pwLine4.is.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[10] = data->localData[0]->realVars[118] /* pwLine4.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[11] = data->localData[0]->realVars[97] /* pwLine1.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[12] = data->simulationInfo->realParameter[94] /* gENCLS.iq0 PARAM */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[13] = data->simulationInfo->realParameter[92] /* gENCLS.id0 PARAM */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[14] = data->simulationInfo->realParameter[110] /* gENROU.Epq0 PARAM */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[15] = data->simulationInfo->realParameter[109] /* gENROU.Epd0 PARAM */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[16] = data->simulationInfo->realParameter[136] /* gENROU.PSIppd0 PARAM */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[17] = data->simulationInfo->realParameter[137] /* gENROU.PSIppq0 PARAM */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[18] = data->simulationInfo->realParameter[178] /* gENROU.iq0 PARAM */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[19] = data->simulationInfo->realParameter[176] /* gENROU.id0 PARAM */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[20] = data->simulationInfo->realParameter[187] /* gENROU.vr0 PARAM */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[21] = data->simulationInfo->realParameter[186] /* gENROU.vi0 PARAM */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[22] = data->simulationInfo->realParameter[101] /* gENCLS.vi0 PARAM */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[23] = data->simulationInfo->realParameter[103] /* gENCLS.vr0 PARAM */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[24] = data->simulationInfo->realParameter[15] /* GEN1.v_0 PARAM */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[25] = data->simulationInfo->realParameter[76] /* constantLoad.vr0 PARAM */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[26] = (data->simulationInfo->realParameter[7] /* FAULT.v_0 PARAM */) * (cos(data->simulationInfo->realParameter[5] /* FAULT.angle_0rad PARAM */));
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[27] = (data->simulationInfo->realParameter[7] /* FAULT.v_0 PARAM */) * (sin(data->simulationInfo->realParameter[5] /* FAULT.angle_0rad PARAM */));
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[28] = data->simulationInfo->realParameter[75] /* constantLoad.vi0 PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 0);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,88};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 88 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[86] /* pwLine.ir.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[0];
  data->localData[0]->realVars[98] /* pwLine1.is.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[1];
  data->localData[0]->realVars[87] /* pwLine.ir.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[2];
  data->localData[0]->realVars[99] /* pwLine1.is.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[3];
  data->localData[0]->realVars[111] /* pwLine3.is.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[4];
  data->localData[0]->realVars[110] /* pwLine3.is.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[5];
  data->localData[0]->realVars[120] /* pwLine4.is.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[6];
  data->localData[0]->realVars[108] /* pwLine3.ir.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[7];
  data->localData[0]->realVars[109] /* pwLine3.ir.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[8];
  data->localData[0]->realVars[121] /* pwLine4.is.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[9];
  data->localData[0]->realVars[118] /* pwLine4.ir.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[10];
  data->localData[0]->realVars[97] /* pwLine1.ir.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[11];
  data->localData[0]->realVars[55] /* gENCLS.iq variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[12];
  data->localData[0]->realVars[54] /* gENCLS.id variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[13];
  data->localData[0]->realVars[3] /* gENROU.Epq STATE(1) */ = data->simulationInfo->nonlinearSystemData[0].nlsx[14];
  data->localData[0]->realVars[2] /* gENROU.Epd STATE(1) */ = data->simulationInfo->nonlinearSystemData[0].nlsx[15];
  data->localData[0]->realVars[67] /* gENROU.PSIppd variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[16];
  data->localData[0]->realVars[68] /* gENROU.PSIppq variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[17];
  data->localData[0]->realVars[77] /* gENROU.iq variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[18];
  data->localData[0]->realVars[76] /* gENROU.id variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[19];
  data->localData[0]->realVars[91] /* pwLine.vs.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[20];
  data->localData[0]->realVars[90] /* pwLine.vs.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[21];
  data->localData[0]->realVars[100] /* pwLine1.vr.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[22];
  data->localData[0]->realVars[101] /* pwLine1.vr.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[23];
  data->localData[0]->realVars[125] /* sEXS.ECOMP variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[24];
  data->localData[0]->realVars[103] /* pwLine1.vs.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[25];
  data->localData[0]->realVars[113] /* pwLine3.vr.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[26];
  data->localData[0]->realVars[112] /* pwLine3.vr.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[27];
  data->localData[0]->realVars[102] /* pwLine1.vs.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[28];
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_260(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_259(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_253(DATA *data, threadData_t *threadData);


/*
equation index: 92
type: SIMPLE_ASSIGN
LOAD.angle = 57.29577951308232 * atan2(pwLine1.vs.im, pwLine1.vs.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_92(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,92};
  data->localData[0]->realVars[39] /* LOAD.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[102] /* pwLine1.vs.im variable */, data->localData[0]->realVars[103] /* pwLine1.vs.re variable */));
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_263(DATA *data, threadData_t *threadData);


/*
equation index: 94
type: SIMPLE_ASSIGN
GEN2.angle = 57.29577951308232 * atan2(pwLine1.vr.im, pwLine1.vr.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_94(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,94};
  data->localData[0]->realVars[35] /* GEN2.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[100] /* pwLine1.vr.im variable */, data->localData[0]->realVars[101] /* pwLine1.vr.re variable */));
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_297(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_298(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_299(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_304(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_303(DATA *data, threadData_t *threadData);


/*
equation index: 100
type: SIMPLE_ASSIGN
FAULT.angle = 57.29577951308232 * atan2(pwLine3.vr.im, pwLine3.vr.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_100(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,100};
  data->localData[0]->realVars[27] /* FAULT.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[112] /* pwLine3.vr.im variable */, data->localData[0]->realVars[113] /* pwLine3.vr.re variable */));
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_288(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_296(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_295(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_294(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_293(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_292(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_291(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_287(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_286(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_280(DATA *data, threadData_t *threadData);


/*
equation index: 111
type: SIMPLE_ASSIGN
sEXS.add7.u2 = sEXS.VoltageReference.k
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_111(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,111};
  data->simulationInfo->realParameter[266] /* sEXS.add7.u2 PARAM */ = data->simulationInfo->realParameter[259] /* sEXS.VoltageReference.k PARAM */;
  TRACE_POP
}

/*
equation index: 112
type: SIMPLE_ASSIGN
sEXS.VoltageReference.y = sEXS.VoltageReference.k
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_112(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,112};
  data->simulationInfo->realParameter[260] /* sEXS.VoltageReference.y PARAM */ = data->simulationInfo->realParameter[259] /* sEXS.VoltageReference.k PARAM */;
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_278(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_277(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_274(DATA *data, threadData_t *threadData);


/*
equation index: 116
type: SIMPLE_ASSIGN
sEXS.leadLag.TF.x[1] = (sEXS.leadLag.TF.d * sEXS.V_erro.y - sEXS.leadLag.TF.y) / (sEXS.leadLag.TF.a[2] * sEXS.leadLag.TF.d - sEXS.leadLag.TF.bb[2])
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_116(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,116};
  data->localData[0]->realVars[129] /* sEXS.leadLag.TF.x[1] variable */ = DIVISION_SIM((data->simulationInfo->realParameter[279] /* sEXS.leadLag.TF.d PARAM */) * (data->localData[0]->realVars[127] /* sEXS.V_erro.y variable */) - data->localData[0]->realVars[130] /* sEXS.leadLag.TF.y variable */,(data->simulationInfo->realParameter[273] /* sEXS.leadLag.TF.a[2] PARAM */) * (data->simulationInfo->realParameter[279] /* sEXS.leadLag.TF.d PARAM */) - data->simulationInfo->realParameter[278] /* sEXS.leadLag.TF.bb[2] PARAM */,"sEXS.leadLag.TF.a[2] * sEXS.leadLag.TF.d - sEXS.leadLag.TF.bb[2]",equationIndexes);
  TRACE_POP
}

/*
equation index: 117
type: SIMPLE_ASSIGN
sEXS.leadLag.TF.x_scaled[1] = sEXS.leadLag.TF.x[1] * sEXS.leadLag.TF.a_end
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_117(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,117};
  data->localData[0]->realVars[8] /* sEXS.leadLag.TF.x_scaled[1] STATE(1) */ = (data->localData[0]->realVars[129] /* sEXS.leadLag.TF.x[1] variable */) * (data->simulationInfo->realParameter[274] /* sEXS.leadLag.TF.a_end PARAM */);
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_271(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_279(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_267(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_265(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_266(DATA *data, threadData_t *threadData);


/*
equation index: 123
type: SIMPLE_ASSIGN
GEN1.angle = 57.29577951308232 * atan2(pwLine.vs.im, pwLine.vs.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_123(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,123};
  data->localData[0]->realVars[31] /* GEN1.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[90] /* pwLine.vs.im variable */, data->localData[0]->realVars[91] /* pwLine.vs.re variable */));
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_302(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_301(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_262(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_261(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_284(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_285(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_282(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_283(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_255(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_256(DATA *data, threadData_t *threadData);


/*
equation index: 134
type: SIMPLE_ASSIGN
GEN1.p.ir = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_134(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,134};
  data->localData[0]->realVars[33] /* GEN1.p.ir variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 135
type: SIMPLE_ASSIGN
GEN1.p.ii = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_135(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,135};
  data->localData[0]->realVars[32] /* GEN1.p.ii variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 136
type: SIMPLE_ASSIGN
LOAD.p.ir = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_136(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,136};
  data->localData[0]->realVars[41] /* LOAD.p.ir variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 137
type: SIMPLE_ASSIGN
LOAD.p.ii = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_137(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,137};
  data->localData[0]->realVars[40] /* LOAD.p.ii variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 138
type: SIMPLE_ASSIGN
GEN2.p.ir = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_138(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,138};
  data->localData[0]->realVars[37] /* GEN2.p.ir variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 139
type: SIMPLE_ASSIGN
GEN2.p.ii = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_139(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,139};
  data->localData[0]->realVars[36] /* GEN2.p.ii variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 140
type: SIMPLE_ASSIGN
FAULT.p.ir = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_140(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,140};
  data->localData[0]->realVars[29] /* FAULT.p.ir variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 141
type: SIMPLE_ASSIGN
FAULT.p.ii = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_141(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,141};
  data->localData[0]->realVars[28] /* FAULT.p.ii variable */ = 0.0;
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_146(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_147(DATA *data, threadData_t *threadData);

OMC_DISABLE_OPT
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_functionInitialEquations_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_1(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_2(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_145(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_4(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_5(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_6(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_7(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_8(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_9(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_10(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_11(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_12(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_13(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_14(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_15(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_16(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_152(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_18(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_19(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_20(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_21(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_22(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_23(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_88(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_260(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_259(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_253(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_92(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_263(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_94(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_297(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_298(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_299(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_304(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_303(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_100(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_288(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_296(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_295(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_294(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_293(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_292(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_291(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_287(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_286(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_280(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_111(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_112(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_278(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_277(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_274(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_116(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_117(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_271(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_279(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_267(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_265(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_266(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_123(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_302(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_301(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_262(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_261(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_284(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_285(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_282(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_283(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_255(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_256(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_134(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_135(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_136(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_137(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_138(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_139(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_140(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_141(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_146(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_147(data, threadData);
  TRACE_POP
}


int OpenIPSL_Examples_Controls_PSSE_ES_SEXS_functionInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_functionInitialEquations_0(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}


int OpenIPSL_Examples_Controls_PSSE_ES_SEXS_functionInitialEquations_lambda0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_ES_SEXS_functionRemovedInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int *equationIndexes = NULL;
  double res = 0.0;

  res = data->localData[0]->realVars[56] /* gENCLS.omega variable */;
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

