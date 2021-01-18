/* Initialization */
#include "OpenIPSL.Examples.Controls.PSSE.ES.SCRX_model.h"
#include "OpenIPSL.Examples.Controls.PSSE.ES.SCRX_11mix.h"
#include "OpenIPSL.Examples.Controls.PSSE.ES.SCRX_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_functionInitialEquations_0(DATA *data, threadData_t *threadData);

/*
equation index: 1
type: SIMPLE_ASSIGN
gENCLS.omega = $START.gENCLS.omega
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_1(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1};
  data->localData[0]->realVars[56] /* gENCLS.omega variable */ = data->modelData->realVarsData[56].attribute /* gENCLS.omega variable */.start;
  TRACE_POP
}

/*
equation index: 2
type: SIMPLE_ASSIGN
sCRX.DiffV1.y = zero.k * (sCRX.DiffV1.k1 + sCRX.DiffV1.k2)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_2(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2};
  data->localData[0]->realVars[124] /* sCRX.DiffV1.y variable */ = (data->simulationInfo->realParameter[298] /* zero.k PARAM */) * (data->simulationInfo->realParameter[239] /* sCRX.DiffV1.k1 PARAM */ + data->simulationInfo->realParameter[240] /* sCRX.DiffV1.k2 PARAM */);
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_150(DATA *data, threadData_t *threadData);


/*
equation index: 4
type: SIMPLE_ASSIGN
gENCLS.delta = gENCLS.delta0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_4(DATA *data, threadData_t *threadData)
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
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_5(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5};
  data->localData[0]->realVars[1] /* gENCLS.eq STATE(1) */ = data->simulationInfo->realParameter[100] /* gENCLS.vf0 PARAM */;
  TRACE_POP
}

/*
equation index: 6
type: SIMPLE_ASSIGN
sCRX.Efd0 = sCRX.EFD0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_6(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6};
  data->simulationInfo->realParameter[246] /* sCRX.Efd0 PARAM */ = data->localData[0]->realVars[126] /* sCRX.EFD0 variable */;
  TRACE_POP
}

/*
equation index: 7
type: SIMPLE_ASSIGN
sCRX.negCurLogic.nstartvalue = sCRX.Efd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_7(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7};
  data->simulationInfo->realParameter[288] /* sCRX.negCurLogic.nstartvalue PARAM */ = data->simulationInfo->realParameter[246] /* sCRX.Efd0 PARAM */;
  TRACE_POP
}

/*
equation index: 8
type: SIMPLE_ASSIGN
$START.sCRX.negCurLogic.Vd = sCRX.negCurLogic.nstartvalue
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_8(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,8};
  data->modelData->realVarsData[133].attribute /* sCRX.negCurLogic.Vd variable */.start = data->simulationInfo->realParameter[288] /* sCRX.negCurLogic.nstartvalue PARAM */;
    data->localData[0]->realVars[133] /* sCRX.negCurLogic.Vd variable */ = data->modelData->realVarsData[133].attribute /* sCRX.negCurLogic.Vd variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[133].info /* sCRX.negCurLogic.Vd */.name, (modelica_real) data->localData[0]->realVars[133] /* sCRX.negCurLogic.Vd variable */);
  TRACE_POP
}

/*
equation index: 9
type: SIMPLE_ASSIGN
$START.gENROU.EFD = sCRX.negCurLogic.nstartvalue
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_9(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,9};
  data->modelData->realVarsData[61].attribute /* gENROU.EFD variable */.start = data->simulationInfo->realParameter[288] /* sCRX.negCurLogic.nstartvalue PARAM */;
    data->localData[0]->realVars[61] /* gENROU.EFD variable */ = data->modelData->realVarsData[61].attribute /* gENROU.EFD variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[61].info /* gENROU.EFD */.name, (modelica_real) data->localData[0]->realVars[61] /* gENROU.EFD variable */);
  TRACE_POP
}

/*
equation index: 10
type: SIMPLE_ASSIGN
gENROU.w = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_10(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10};
  data->localData[0]->realVars[7] /* gENROU.w STATE(1) */ = 0.0;
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_157(DATA *data, threadData_t *threadData);


/*
equation index: 12
type: SIMPLE_ASSIGN
gENROU.delta = gENROU.delta0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_12(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12};
  data->localData[0]->realVars[6] /* gENROU.delta STATE(1) */ = data->simulationInfo->realParameter[172] /* gENROU.delta0 PARAM */;
  TRACE_POP
}

/*
equation index: 13
type: SIMPLE_ASSIGN
$DER.gENROU.PSIkq = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_13(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13};
  data->localData[0]->realVars[15] /* der(gENROU.PSIkq) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 14
type: SIMPLE_ASSIGN
$DER.gENROU.PSIkd = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_14(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14};
  data->localData[0]->realVars[14] /* der(gENROU.PSIkd) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 15
type: SIMPLE_ASSIGN
$DER.gENROU.Epq = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_15(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,15};
  data->localData[0]->realVars[13] /* der(gENROU.Epq) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 16
type: SIMPLE_ASSIGN
$DER.gENROU.Epd = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_16(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,16};
  data->localData[0]->realVars[12] /* der(gENROU.Epd) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 17
type: SIMPLE_ASSIGN
gENROU.XaqIlq = (-$DER.gENROU.Epd) * gENROU.Tpq0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_17(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,17};
  data->localData[0]->realVars[73] /* gENROU.XaqIlq variable */ = ((-data->localData[0]->realVars[12] /* der(gENROU.Epd) STATE_DER */)) * (data->simulationInfo->realParameter[150] /* gENROU.Tpq0 PARAM */);
  TRACE_POP
}

void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_18(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_19(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_20(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_21(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_22(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_23(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_24(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_25(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_26(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_27(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_28(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_29(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_30(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_31(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_32(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_33(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_34(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_35(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_36(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_37(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_38(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_39(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_40(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_41(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_42(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_43(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_44(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_45(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_46(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_47(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_48(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_49(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_50(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_51(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_52(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_53(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_54(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_55(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_56(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_57(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_58(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_59(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_60(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_61(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_91(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_90(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_89(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_88(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_87(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_86(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_85(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_84(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_83(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_82(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_81(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_80(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_79(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_78(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_77(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_76(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_75(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_74(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_73(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_72(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_71(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_70(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_69(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_68(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_67(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_66(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_65(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_64(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_63(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_62(DATA*, threadData_t*);
/*
equation index: 92
indexNonlinear: 0
type: NONLINEAR

vars: {pwLine4.is.im, pwLine3.ir.im, pwLine4.is.re, pwLine3.ir.re, pwLine.ir.im, pwLine3.is.im, pwLine.ir.re, constantLoad.p.ir, constantLoad.p.ii, pwLine1.is.re, pwLine4.ir.im, pwLine1.ir.re, gENCLS.id, gENCLS.iq, gENROU.PSIkd, gENROU.Epd, gENROU.PSIppd, gENROU.PSIppq, gENROU.iq, gENROU.id, pwLine.vs.re, pwLine.vs.im, pwLine1.vr.re, pwLine1.vr.im, sCRX.ECOMP, gENROU.XADIFD, pwLine1.vs.re, pwLine3.vr.re, pwLine3.vr.im, pwLine1.vs.im}
eqns: {18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 91, 90, 89, 88, 87, 86, 85, 84, 83, 82, 81, 80, 79, 78, 77, 76, 75, 74, 73, 72, 71, 70, 69, 68, 67, 66, 65, 64, 63, 62}
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_92(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,92};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 92 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[0] = data->localData[0]->realVars[120] /* pwLine4.is.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[1] = data->localData[0]->realVars[108] /* pwLine3.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[2] = data->localData[0]->realVars[121] /* pwLine4.is.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[3] = data->localData[0]->realVars[109] /* pwLine3.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[4] = data->localData[0]->realVars[86] /* pwLine.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[5] = data->localData[0]->realVars[110] /* pwLine3.is.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[6] = data->localData[0]->realVars[87] /* pwLine.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[7] = data->simulationInfo->realParameter[70] /* constantLoad.ir0 PARAM */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[8] = data->simulationInfo->realParameter[69] /* constantLoad.ii0 PARAM */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[9] = data->localData[0]->realVars[99] /* pwLine1.is.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[10] = data->localData[0]->realVars[118] /* pwLine4.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[11] = data->localData[0]->realVars[97] /* pwLine1.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[12] = data->simulationInfo->realParameter[92] /* gENCLS.id0 PARAM */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[13] = data->simulationInfo->realParameter[94] /* gENCLS.iq0 PARAM */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[14] = data->simulationInfo->realParameter[130] /* gENROU.PSIkd0 PARAM */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[15] = data->simulationInfo->realParameter[109] /* gENROU.Epd0 PARAM */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[16] = data->simulationInfo->realParameter[136] /* gENROU.PSIppd0 PARAM */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[17] = data->simulationInfo->realParameter[137] /* gENROU.PSIppq0 PARAM */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[18] = data->simulationInfo->realParameter[178] /* gENROU.iq0 PARAM */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[19] = data->simulationInfo->realParameter[176] /* gENROU.id0 PARAM */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[20] = data->simulationInfo->realParameter[187] /* gENROU.vr0 PARAM */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[21] = data->simulationInfo->realParameter[186] /* gENROU.vi0 PARAM */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[22] = data->simulationInfo->realParameter[103] /* gENCLS.vr0 PARAM */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[23] = data->simulationInfo->realParameter[101] /* gENCLS.vi0 PARAM */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[24] = data->simulationInfo->realParameter[15] /* GEN1.v_0 PARAM */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[25] = data->simulationInfo->realParameter[174] /* gENROU.efd0 PARAM */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[26] = data->simulationInfo->realParameter[76] /* constantLoad.vr0 PARAM */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[27] = (data->simulationInfo->realParameter[7] /* FAULT.v_0 PARAM */) * (cos(data->simulationInfo->realParameter[5] /* FAULT.angle_0rad PARAM */));
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[28] = (data->simulationInfo->realParameter[7] /* FAULT.v_0 PARAM */) * (sin(data->simulationInfo->realParameter[5] /* FAULT.angle_0rad PARAM */));
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[29] = data->simulationInfo->realParameter[75] /* constantLoad.vi0 PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 0);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,92};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 92 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[120] /* pwLine4.is.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[0];
  data->localData[0]->realVars[108] /* pwLine3.ir.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[1];
  data->localData[0]->realVars[121] /* pwLine4.is.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[2];
  data->localData[0]->realVars[109] /* pwLine3.ir.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[3];
  data->localData[0]->realVars[86] /* pwLine.ir.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[4];
  data->localData[0]->realVars[110] /* pwLine3.is.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[5];
  data->localData[0]->realVars[87] /* pwLine.ir.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[6];
  data->localData[0]->realVars[48] /* constantLoad.p.ir variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[7];
  data->localData[0]->realVars[47] /* constantLoad.p.ii variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[8];
  data->localData[0]->realVars[99] /* pwLine1.is.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[9];
  data->localData[0]->realVars[118] /* pwLine4.ir.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[10];
  data->localData[0]->realVars[97] /* pwLine1.ir.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[11];
  data->localData[0]->realVars[54] /* gENCLS.id variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[12];
  data->localData[0]->realVars[55] /* gENCLS.iq variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[13];
  data->localData[0]->realVars[4] /* gENROU.PSIkd STATE(1) */ = data->simulationInfo->nonlinearSystemData[0].nlsx[14];
  data->localData[0]->realVars[2] /* gENROU.Epd STATE(1) */ = data->simulationInfo->nonlinearSystemData[0].nlsx[15];
  data->localData[0]->realVars[67] /* gENROU.PSIppd variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[16];
  data->localData[0]->realVars[68] /* gENROU.PSIppq variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[17];
  data->localData[0]->realVars[77] /* gENROU.iq variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[18];
  data->localData[0]->realVars[76] /* gENROU.id variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[19];
  data->localData[0]->realVars[91] /* pwLine.vs.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[20];
  data->localData[0]->realVars[90] /* pwLine.vs.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[21];
  data->localData[0]->realVars[101] /* pwLine1.vr.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[22];
  data->localData[0]->realVars[100] /* pwLine1.vr.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[23];
  data->localData[0]->realVars[125] /* sCRX.ECOMP variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[24];
  data->localData[0]->realVars[72] /* gENROU.XADIFD variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[25];
  data->localData[0]->realVars[103] /* pwLine1.vs.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[26];
  data->localData[0]->realVars[113] /* pwLine3.vr.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[27];
  data->localData[0]->realVars[112] /* pwLine3.vr.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[28];
  data->localData[0]->realVars[102] /* pwLine1.vs.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[29];
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_285(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_284(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_282(DATA *data, threadData_t *threadData);


/*
equation index: 96
type: SIMPLE_ASSIGN
sCRX.imLeadLag.TF.x[1] = (sCRX.imLeadLag.TF.d * sCRX.V_erro.y - sCRX.imLeadLag.TF.y) / (sCRX.imLeadLag.TF.a[2] * sCRX.imLeadLag.TF.d - sCRX.imLeadLag.TF.bb[2])
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_96(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,96};
  data->localData[0]->realVars[129] /* sCRX.imLeadLag.TF.x[1] variable */ = DIVISION_SIM((data->simulationInfo->realParameter[280] /* sCRX.imLeadLag.TF.d PARAM */) * (data->localData[0]->realVars[127] /* sCRX.V_erro.y variable */) - data->localData[0]->realVars[130] /* sCRX.imLeadLag.TF.y variable */,(data->simulationInfo->realParameter[274] /* sCRX.imLeadLag.TF.a[2] PARAM */) * (data->simulationInfo->realParameter[280] /* sCRX.imLeadLag.TF.d PARAM */) - data->simulationInfo->realParameter[279] /* sCRX.imLeadLag.TF.bb[2] PARAM */,"sCRX.imLeadLag.TF.a[2] * sCRX.imLeadLag.TF.d - sCRX.imLeadLag.TF.bb[2]",equationIndexes);
  TRACE_POP
}

/*
equation index: 97
type: SIMPLE_ASSIGN
sCRX.imLeadLag.TF.x_scaled[1] = sCRX.imLeadLag.TF.x[1] * sCRX.imLeadLag.TF.a_end
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_97(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,97};
  data->localData[0]->realVars[8] /* sCRX.imLeadLag.TF.x_scaled[1] STATE(1) */ = (data->localData[0]->realVars[129] /* sCRX.imLeadLag.TF.x[1] variable */) * (data->simulationInfo->realParameter[275] /* sCRX.imLeadLag.TF.a_end PARAM */);
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_279(DATA *data, threadData_t *threadData);


/*
equation index: 99
type: SIMPLE_ASSIGN
GEN2.angle = 57.29577951308232 * atan2(pwLine1.vr.im, pwLine1.vr.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_99(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,99};
  data->localData[0]->realVars[35] /* GEN2.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[100] /* pwLine1.vr.im variable */, data->localData[0]->realVars[101] /* pwLine1.vr.re variable */));
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_305(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_306(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_307(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_312(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_311(DATA *data, threadData_t *threadData);


/*
equation index: 105
type: SIMPLE_ASSIGN
FAULT.angle = 57.29577951308232 * atan2(pwLine3.vr.im, pwLine3.vr.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_105(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,105};
  data->localData[0]->realVars[27] /* FAULT.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[112] /* pwLine3.vr.im variable */, data->localData[0]->realVars[113] /* pwLine3.vr.re variable */));
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_260(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_294(DATA *data, threadData_t *threadData);


/*
equation index: 108
type: SIMPLE_ASSIGN
LOAD.angle = 57.29577951308232 * atan2(pwLine1.vs.im, pwLine1.vs.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_108(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,108};
  data->localData[0]->realVars[39] /* LOAD.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[102] /* pwLine1.vs.im variable */, data->localData[0]->realVars[103] /* pwLine1.vs.re variable */));
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_297(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_296(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_295(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_259(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_258(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_257(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_256(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_310(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_309(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_304(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_303(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_290(DATA *data, threadData_t *threadData);


/*
equation index: 121
type: SIMPLE_ASSIGN
GEN1.angle = 57.29577951308232 * atan2(pwLine.vs.im, pwLine.vs.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_121(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,121};
  data->localData[0]->realVars[31] /* GEN1.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[90] /* pwLine.vs.im variable */, data->localData[0]->realVars[91] /* pwLine.vs.re variable */));
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_272(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_271(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_275(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_273(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_274(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_302(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_301(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_299(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_300(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_292(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_293(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_289(DATA *data, threadData_t *threadData);


/*
equation index: 134
type: SIMPLE_ASSIGN
sCRX.add7.u2 = sCRX.VoltageReference.k
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_134(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,134};
  data->simulationInfo->realParameter[267] /* sCRX.add7.u2 PARAM */ = data->simulationInfo->realParameter[260] /* sCRX.VoltageReference.k PARAM */;
  TRACE_POP
}

/*
equation index: 135
type: SIMPLE_ASSIGN
sCRX.VoltageReference.y = sCRX.VoltageReference.k
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_135(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,135};
  data->simulationInfo->realParameter[261] /* sCRX.VoltageReference.y PARAM */ = data->simulationInfo->realParameter[260] /* sCRX.VoltageReference.k PARAM */;
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_269(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_270(DATA *data, threadData_t *threadData);


/*
equation index: 138
type: SIMPLE_ASSIGN
GEN1.p.ir = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_138(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,138};
  data->localData[0]->realVars[33] /* GEN1.p.ir variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 139
type: SIMPLE_ASSIGN
GEN1.p.ii = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_139(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,139};
  data->localData[0]->realVars[32] /* GEN1.p.ii variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 140
type: SIMPLE_ASSIGN
LOAD.p.ir = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_140(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,140};
  data->localData[0]->realVars[41] /* LOAD.p.ir variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 141
type: SIMPLE_ASSIGN
LOAD.p.ii = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_141(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,141};
  data->localData[0]->realVars[40] /* LOAD.p.ii variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 142
type: SIMPLE_ASSIGN
GEN2.p.ir = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_142(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,142};
  data->localData[0]->realVars[37] /* GEN2.p.ir variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 143
type: SIMPLE_ASSIGN
GEN2.p.ii = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_143(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,143};
  data->localData[0]->realVars[36] /* GEN2.p.ii variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 144
type: SIMPLE_ASSIGN
FAULT.p.ir = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_144(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,144};
  data->localData[0]->realVars[29] /* FAULT.p.ir variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 145
type: SIMPLE_ASSIGN
FAULT.p.ii = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_145(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,145};
  data->localData[0]->realVars[28] /* FAULT.p.ii variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 146
type: SIMPLE_ASSIGN
sCRX.booleanConstant.y = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_146(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,146};
  data->localData[0]->booleanVars[2] /* sCRX.booleanConstant.y DISCRETE */ = 0;
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_151(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_152(DATA *data, threadData_t *threadData);

OMC_DISABLE_OPT
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_functionInitialEquations_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_1(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_2(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_150(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_4(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_5(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_6(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_7(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_8(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_9(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_10(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_157(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_12(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_13(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_14(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_15(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_16(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_17(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_92(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_285(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_284(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_282(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_96(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_97(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_279(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_99(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_305(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_306(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_307(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_312(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_311(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_105(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_260(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_294(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_108(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_297(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_296(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_295(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_259(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_258(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_257(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_256(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_310(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_309(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_304(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_303(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_290(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_121(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_272(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_271(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_275(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_273(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_274(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_302(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_301(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_299(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_300(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_292(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_293(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_289(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_134(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_135(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_269(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_270(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_138(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_139(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_140(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_141(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_142(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_143(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_144(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_145(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_146(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_151(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_152(data, threadData);
  TRACE_POP
}


int OpenIPSL_Examples_Controls_PSSE_ES_SCRX_functionInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_functionInitialEquations_0(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}


int OpenIPSL_Examples_Controls_PSSE_ES_SCRX_functionInitialEquations_lambda0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_ES_SCRX_functionRemovedInitialEquations(DATA *data, threadData_t *threadData)
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

