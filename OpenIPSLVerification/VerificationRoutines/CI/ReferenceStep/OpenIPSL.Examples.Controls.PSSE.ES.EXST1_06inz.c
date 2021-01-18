/* Initialization */
#include "OpenIPSL.Examples.Controls.PSSE.ES.EXST1_model.h"
#include "OpenIPSL.Examples.Controls.PSSE.ES.EXST1_11mix.h"
#include "OpenIPSL.Examples.Controls.PSSE.ES.EXST1_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_functionInitialEquations_0(DATA *data, threadData_t *threadData);

/*
equation index: 1
type: SIMPLE_ASSIGN
gENCLS.omega = $START.gENCLS.omega
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_1(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1};
  data->localData[0]->realVars[78] /* gENCLS.omega variable */ = data->modelData->realVarsData[78].attribute /* gENCLS.omega variable */.start;
  TRACE_POP
}

/*
equation index: 2
type: SIMPLE_ASSIGN
eXST1.Limiters.y = zero.k * (eXST1.Limiters.k1 + eXST1.Limiters.k2)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_2(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2};
  data->localData[0]->realVars[62] /* eXST1.Limiters.y variable */ = (data->simulationInfo->realParameter[308] /* zero.k PARAM */) * (data->simulationInfo->realParameter[84] /* eXST1.Limiters.k1 PARAM */ + data->simulationInfo->realParameter[85] /* eXST1.Limiters.k2 PARAM */);
  TRACE_POP
}

/*
equation index: 3
type: SIMPLE_ASSIGN
gENCLS.delta = gENCLS.delta0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_3(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3};
  data->localData[0]->realVars[4] /* gENCLS.delta STATE(1) */ = data->simulationInfo->realParameter[161] /* gENCLS.delta0 PARAM */;
  TRACE_POP
}

/*
equation index: 4
type: SIMPLE_ASSIGN
gENCLS.eq = gENCLS.vf0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_4(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4};
  data->localData[0]->realVars[5] /* gENCLS.eq STATE(1) */ = data->simulationInfo->realParameter[171] /* gENCLS.vf0 PARAM */;
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_313(DATA *data, threadData_t *threadData);


/*
equation index: 6
type: SIMPLE_ASSIGN
eXST1.Efd0 = eXST1.EFD0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_6(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6};
  data->simulationInfo->realParameter[79] /* eXST1.Efd0 PARAM */ = data->localData[0]->realVars[59] /* eXST1.EFD0 variable */;
  TRACE_POP
}

/*
equation index: 7
type: SIMPLE_ASSIGN
eXST1.Vm1.y_start = eXST1.Efd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_7(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7};
  data->simulationInfo->realParameter[110] /* eXST1.Vm1.y_start PARAM */ = data->simulationInfo->realParameter[79] /* eXST1.Efd0 PARAM */;
  TRACE_POP
}

/*
equation index: 8
type: SIMPLE_ASSIGN
$START.eXST1.Vm1.state = eXST1.Vm1.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_8(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,8};
  data->modelData->realVarsData[1].attribute /* eXST1.Vm1.state STATE(1) */.start = data->simulationInfo->realParameter[110] /* eXST1.Vm1.y_start PARAM */;
    data->localData[0]->realVars[1] /* eXST1.Vm1.state STATE(1) */ = data->modelData->realVarsData[1].attribute /* eXST1.Vm1.state STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[1].info /* eXST1.Vm1.state */.name, (modelica_real) data->localData[0]->realVars[1] /* eXST1.Vm1.state STATE(1) */);
  TRACE_POP
}

/*
equation index: 9
type: SIMPLE_ASSIGN
$START.eXST1.Vm1.y = eXST1.Vm1.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_9(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,9};
  data->modelData->realVarsData[63].attribute /* eXST1.Vm1.y variable */.start = data->simulationInfo->realParameter[110] /* eXST1.Vm1.y_start PARAM */;
    data->localData[0]->realVars[63] /* eXST1.Vm1.y variable */ = data->modelData->realVarsData[63].attribute /* eXST1.Vm1.y variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[63].info /* eXST1.Vm1.y */.name, (modelica_real) data->localData[0]->realVars[63] /* eXST1.Vm1.y variable */);
  TRACE_POP
}

/*
equation index: 10
type: SIMPLE_ASSIGN
eXST1.imLeadLag.y_start = eXST1.Efd0 / eXST1.K_A
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_10(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10};
  data->simulationInfo->realParameter[145] /* eXST1.imLeadLag.y_start PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[79] /* eXST1.Efd0 PARAM */,data->simulationInfo->realParameter[80] /* eXST1.K_A PARAM */,"eXST1.K_A",equationIndexes);
  TRACE_POP
}

/*
equation index: 11
type: SIMPLE_ASSIGN
eXST1.imLeadLag.TF.y_start = eXST1.imLeadLag.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_11(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11};
  data->simulationInfo->realParameter[141] /* eXST1.imLeadLag.TF.y_start PARAM */ = data->simulationInfo->realParameter[145] /* eXST1.imLeadLag.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 12
type: SIMPLE_ASSIGN
eXST1.imLeadLag.x_start = eXST1.Efd0 / eXST1.K_A
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_12(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12};
  data->simulationInfo->realParameter[144] /* eXST1.imLeadLag.x_start PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[79] /* eXST1.Efd0 PARAM */,data->simulationInfo->realParameter[80] /* eXST1.K_A PARAM */,"eXST1.K_A",equationIndexes);
  TRACE_POP
}

/*
equation index: 13
type: SIMPLE_ASSIGN
eXST1.imLeadLag.TF.x_start[1] = eXST1.imLeadLag.x_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_13(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13};
  data->simulationInfo->realParameter[140] /* eXST1.imLeadLag.TF.x_start[1] PARAM */ = data->simulationInfo->realParameter[144] /* eXST1.imLeadLag.x_start PARAM */;
  TRACE_POP
}

/*
equation index: 14
type: SIMPLE_ASSIGN
$START.eXST1.imLeadLag.TF.x[1] = eXST1.imLeadLag.TF.x_start[1]
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_14(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14};
  data->modelData->realVarsData[69].attribute /* eXST1.imLeadLag.TF.x[1] variable */.start = data->simulationInfo->realParameter[140] /* eXST1.imLeadLag.TF.x_start[1] PARAM */;
    data->localData[0]->realVars[69] /* eXST1.imLeadLag.TF.x[1] variable */ = data->modelData->realVarsData[69].attribute /* eXST1.imLeadLag.TF.x[1] variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[69].info /* eXST1.imLeadLag.TF.x[1] */.name, (modelica_real) data->localData[0]->realVars[69] /* eXST1.imLeadLag.TF.x[1] variable */);
  TRACE_POP
}

/*
equation index: 15
type: SIMPLE_ASSIGN
eXST1.imDerivativeLag.y = eXST1.imDerivativeLag.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_15(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,15};
  data->localData[0]->realVars[68] /* eXST1.imDerivativeLag.y variable */ = data->simulationInfo->realParameter[127] /* eXST1.imDerivativeLag.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 16
type: SIMPLE_ASSIGN
eXST1.Vm1.state = eXST1.Vm1.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_16(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,16};
  data->localData[0]->realVars[1] /* eXST1.Vm1.state STATE(1) */ = data->simulationInfo->realParameter[110] /* eXST1.Vm1.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 17
type: SIMPLE_ASSIGN
eXST1.imLeadLag.TF.y = eXST1.imLeadLag.TF.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_17(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,17};
  data->localData[0]->realVars[70] /* eXST1.imLeadLag.TF.y variable */ = data->simulationInfo->realParameter[141] /* eXST1.imLeadLag.TF.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 18
type: SIMPLE_ASSIGN
gENROE.w = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_18(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,18};
  data->localData[0]->realVars[11] /* gENROE.w STATE(1) */ = 0.0;
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_320(DATA *data, threadData_t *threadData);


/*
equation index: 20
type: SIMPLE_ASSIGN
gENROE.delta = gENROE.delta0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_20(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,20};
  data->localData[0]->realVars[10] /* gENROE.delta STATE(1) */ = data->simulationInfo->realParameter[243] /* gENROE.delta0 PARAM */;
  TRACE_POP
}

/*
equation index: 21
type: SIMPLE_ASSIGN
$DER.gENROE.PSIkq = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_21(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,21};
  data->localData[0]->realVars[21] /* der(gENROE.PSIkq) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 22
type: SIMPLE_ASSIGN
$DER.gENROE.PSIkd = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_22(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,22};
  data->localData[0]->realVars[20] /* der(gENROE.PSIkd) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 23
type: SIMPLE_ASSIGN
$DER.gENROE.Epq = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_23(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,23};
  data->localData[0]->realVars[19] /* der(gENROE.Epq) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 24
type: SIMPLE_ASSIGN
$DER.gENROE.Epd = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_24(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,24};
  data->localData[0]->realVars[18] /* der(gENROE.Epd) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 25
type: SIMPLE_ASSIGN
gENROE.XaqIlq = (-$DER.gENROE.Epd) * gENROE.Tpq0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_25(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,25};
  data->localData[0]->realVars[93] /* gENROE.XaqIlq variable */ = ((-data->localData[0]->realVars[18] /* der(gENROE.Epd) STATE_DER */)) * (data->simulationInfo->realParameter[221] /* gENROE.Tpq0 PARAM */);
  TRACE_POP
}

void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_26(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_27(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_28(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_29(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_30(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_31(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_32(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_33(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_34(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_35(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_36(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_37(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_38(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_39(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_40(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_41(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_42(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_43(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_44(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_45(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_46(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_47(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_48(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_49(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_50(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_51(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_52(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_53(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_54(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_55(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_56(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_57(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_58(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_59(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_60(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_61(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_62(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_63(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_64(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_65(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_66(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_67(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_68(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_98(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_97(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_96(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_95(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_94(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_93(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_92(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_91(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_90(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_89(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_88(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_87(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_86(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_85(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_84(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_83(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_82(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_81(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_80(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_79(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_78(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_77(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_76(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_75(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_74(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_73(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_72(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_71(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_70(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_69(DATA*, threadData_t*);
/*
equation index: 99
indexNonlinear: 0
type: NONLINEAR

vars: {pwLine.ir.re, pwLine1.is.re, pwLine.ir.im, pwLine1.is.im, pwLine4.is.im, pwLine3.ir.im, pwLine4.is.re, pwLine3.ir.re, pwLine3.is.re, pwLine3.is.im, pwLine1.ir.im, pwLine1.ir.re, gENCLS.id, gENCLS.iq, gENROE.PSIkq, gENROE.PSIkd, gENROE.PSIppd, gENROE.PSIppq, gENROE.id, gENROE.iq, pwLine.vs.re, pwLine.vs.im, pwLine1.vr.re, pwLine1.vr.im, eXST1.XADIFD, eXST1.ECOMP, pwLine1.vs.im, pwLine3.vr.im, pwLine3.vr.re, pwLine1.vs.re}
eqns: {26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 98, 97, 96, 95, 94, 93, 92, 91, 90, 89, 88, 87, 86, 85, 84, 83, 82, 81, 80, 79, 78, 77, 76, 75, 74, 73, 72, 71, 70, 69}
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_99(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,99};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 99 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[0] = data->localData[0]->realVars[107] /* pwLine.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[1] = data->localData[0]->realVars[119] /* pwLine1.is.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[2] = data->localData[0]->realVars[106] /* pwLine.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[3] = data->localData[0]->realVars[118] /* pwLine1.is.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[4] = data->localData[0]->realVars[140] /* pwLine4.is.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[5] = data->localData[0]->realVars[128] /* pwLine3.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[6] = data->localData[0]->realVars[141] /* pwLine4.is.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[7] = data->localData[0]->realVars[129] /* pwLine3.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[8] = data->localData[0]->realVars[131] /* pwLine3.is.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[9] = data->localData[0]->realVars[130] /* pwLine3.is.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[10] = data->localData[0]->realVars[116] /* pwLine1.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[11] = data->localData[0]->realVars[117] /* pwLine1.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[12] = data->localData[0]->realVars[76] /* gENCLS.id variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[13] = data->localData[0]->realVars[77] /* gENCLS.iq variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[14] = data->localData[0]->realVars[9] /* gENROE.PSIkq STATE(1) */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[15] = data->localData[0]->realVars[8] /* gENROE.PSIkd STATE(1) */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[16] = data->localData[0]->realVars[88] /* gENROE.PSIppd variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[17] = data->localData[0]->realVars[89] /* gENROE.PSIppq variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[18] = data->localData[0]->realVars[96] /* gENROE.id variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[19] = data->localData[0]->realVars[97] /* gENROE.iq variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[20] = data->localData[0]->realVars[111] /* pwLine.vs.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[21] = data->localData[0]->realVars[110] /* pwLine.vs.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[22] = data->localData[0]->realVars[121] /* pwLine1.vr.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[23] = data->localData[0]->realVars[120] /* pwLine1.vr.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[24] = data->localData[0]->realVars[65] /* eXST1.XADIFD variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[25] = data->localData[0]->realVars[57] /* eXST1.ECOMP variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[26] = data->localData[0]->realVars[122] /* pwLine1.vs.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[27] = data->localData[0]->realVars[132] /* pwLine3.vr.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[28] = data->localData[0]->realVars[133] /* pwLine3.vr.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[29] = data->localData[0]->realVars[123] /* pwLine1.vs.re variable */;
  retValue = solve_nonlinear_system(data, threadData, 0);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,99};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 99 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[107] /* pwLine.ir.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[0];
  data->localData[0]->realVars[119] /* pwLine1.is.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[1];
  data->localData[0]->realVars[106] /* pwLine.ir.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[2];
  data->localData[0]->realVars[118] /* pwLine1.is.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[3];
  data->localData[0]->realVars[140] /* pwLine4.is.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[4];
  data->localData[0]->realVars[128] /* pwLine3.ir.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[5];
  data->localData[0]->realVars[141] /* pwLine4.is.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[6];
  data->localData[0]->realVars[129] /* pwLine3.ir.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[7];
  data->localData[0]->realVars[131] /* pwLine3.is.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[8];
  data->localData[0]->realVars[130] /* pwLine3.is.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[9];
  data->localData[0]->realVars[116] /* pwLine1.ir.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[10];
  data->localData[0]->realVars[117] /* pwLine1.ir.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[11];
  data->localData[0]->realVars[76] /* gENCLS.id variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[12];
  data->localData[0]->realVars[77] /* gENCLS.iq variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[13];
  data->localData[0]->realVars[9] /* gENROE.PSIkq STATE(1) */ = data->simulationInfo->nonlinearSystemData[0].nlsx[14];
  data->localData[0]->realVars[8] /* gENROE.PSIkd STATE(1) */ = data->simulationInfo->nonlinearSystemData[0].nlsx[15];
  data->localData[0]->realVars[88] /* gENROE.PSIppd variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[16];
  data->localData[0]->realVars[89] /* gENROE.PSIppq variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[17];
  data->localData[0]->realVars[96] /* gENROE.id variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[18];
  data->localData[0]->realVars[97] /* gENROE.iq variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[19];
  data->localData[0]->realVars[111] /* pwLine.vs.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[20];
  data->localData[0]->realVars[110] /* pwLine.vs.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[21];
  data->localData[0]->realVars[121] /* pwLine1.vr.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[22];
  data->localData[0]->realVars[120] /* pwLine1.vr.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[23];
  data->localData[0]->realVars[65] /* eXST1.XADIFD variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[24];
  data->localData[0]->realVars[57] /* eXST1.ECOMP variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[25];
  data->localData[0]->realVars[122] /* pwLine1.vs.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[26];
  data->localData[0]->realVars[132] /* pwLine3.vr.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[27];
  data->localData[0]->realVars[133] /* pwLine3.vr.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[28];
  data->localData[0]->realVars[123] /* pwLine1.vs.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[29];
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_462(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_461(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_468(DATA *data, threadData_t *threadData);


/*
equation index: 103
type: SIMPLE_ASSIGN
LOAD.angle = 57.29577951308232 * atan2(pwLine1.vs.im, pwLine1.vs.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_103(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,103};
  data->localData[0]->realVars[43] /* LOAD.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[122] /* pwLine1.vs.im variable */, data->localData[0]->realVars[123] /* pwLine1.vs.re variable */));
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_449(DATA *data, threadData_t *threadData);


/*
equation index: 105
type: SIMPLE_ASSIGN
eXST1.add7.u2 = eXST1.VoltageReference.k
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_105(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,105};
  data->simulationInfo->realParameter[122] /* eXST1.add7.u2 PARAM */ = data->simulationInfo->realParameter[111] /* eXST1.VoltageReference.k PARAM */;
  TRACE_POP
}

/*
equation index: 106
type: SIMPLE_ASSIGN
eXST1.VoltageReference.y = eXST1.VoltageReference.k
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_106(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,106};
  data->simulationInfo->realParameter[112] /* eXST1.VoltageReference.y PARAM */ = data->simulationInfo->realParameter[111] /* eXST1.VoltageReference.k PARAM */;
  TRACE_POP
}

/*
equation index: 107
type: SIMPLE_ASSIGN
eXST1.imDerivativeLag.x = 10.0 * (eXST1.Vm1.y / eXST1.imDerivativeLag.T * 0.1 - eXST1.imDerivativeLag.y) * eXST1.imDerivativeLag.T
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_107(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,107};
  data->localData[0]->realVars[2] /* eXST1.imDerivativeLag.x STATE(1) */ = (10.0) * (((DIVISION_SIM(data->localData[0]->realVars[63] /* eXST1.Vm1.y variable */,data->simulationInfo->realParameter[124] /* eXST1.imDerivativeLag.T PARAM */,"eXST1.imDerivativeLag.T",equationIndexes)) * (0.1) - data->localData[0]->realVars[68] /* eXST1.imDerivativeLag.y variable */) * (data->simulationInfo->realParameter[124] /* eXST1.imDerivativeLag.T PARAM */));
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_447(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_446(DATA *data, threadData_t *threadData);


/*
equation index: 110
type: SIMPLE_ASSIGN
eXST1.imLeadLag.TF.x[1] = (eXST1.imLeadLag.TF.d * eXST1.imLeadLag.u - eXST1.imLeadLag.TF.y) / (eXST1.imLeadLag.TF.a[2] * eXST1.imLeadLag.TF.d - eXST1.imLeadLag.TF.bb[2])
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_110(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,110};
  data->localData[0]->realVars[69] /* eXST1.imLeadLag.TF.x[1] variable */ = DIVISION_SIM((data->simulationInfo->realParameter[139] /* eXST1.imLeadLag.TF.d PARAM */) * (data->localData[0]->realVars[71] /* eXST1.imLeadLag.u variable */) - data->localData[0]->realVars[70] /* eXST1.imLeadLag.TF.y variable */,(data->simulationInfo->realParameter[133] /* eXST1.imLeadLag.TF.a[2] PARAM */) * (data->simulationInfo->realParameter[139] /* eXST1.imLeadLag.TF.d PARAM */) - data->simulationInfo->realParameter[138] /* eXST1.imLeadLag.TF.bb[2] PARAM */,"eXST1.imLeadLag.TF.a[2] * eXST1.imLeadLag.TF.d - eXST1.imLeadLag.TF.bb[2]",equationIndexes);
  TRACE_POP
}

/*
equation index: 111
type: SIMPLE_ASSIGN
eXST1.imLeadLag.TF.x_scaled[1] = eXST1.imLeadLag.TF.x[1] * eXST1.imLeadLag.TF.a_end
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_111(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,111};
  data->localData[0]->realVars[3] /* eXST1.imLeadLag.TF.x_scaled[1] STATE(1) */ = (data->localData[0]->realVars[69] /* eXST1.imLeadLag.TF.x[1] variable */) * (data->simulationInfo->realParameter[134] /* eXST1.imLeadLag.TF.a_end PARAM */);
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_445(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_427(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_448(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_465(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_463(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_464(DATA *data, threadData_t *threadData);


/*
equation index: 118
type: SIMPLE_ASSIGN
GEN1.angle = 57.29577951308232 * atan2(pwLine.vs.im, pwLine.vs.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_118(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,118};
  data->localData[0]->realVars[35] /* GEN1.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[110] /* pwLine.vs.im variable */, data->localData[0]->realVars[111] /* pwLine.vs.re variable */));
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_469(DATA *data, threadData_t *threadData);


/*
equation index: 120
type: SIMPLE_ASSIGN
GEN2.angle = 57.29577951308232 * atan2(pwLine1.vr.im, pwLine1.vr.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_120(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,120};
  data->localData[0]->realVars[39] /* GEN2.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[120] /* pwLine1.vr.im variable */, data->localData[0]->realVars[121] /* pwLine1.vr.re variable */));
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_481(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_482(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_483(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_486(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_485(DATA *data, threadData_t *threadData);


/*
equation index: 126
type: SIMPLE_ASSIGN
FAULT.angle = 57.29577951308232 * atan2(pwLine3.vr.im, pwLine3.vr.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_126(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,126};
  data->localData[0]->realVars[31] /* FAULT.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[132] /* pwLine3.vr.im variable */, data->localData[0]->realVars[133] /* pwLine3.vr.re variable */));
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_423(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_474(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_473(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_420(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_419(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_422(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_421(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_480(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_479(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_478(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_477(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_476(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_475(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_471(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_472(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_466(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_467(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_459(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_460(DATA *data, threadData_t *threadData);


/*
equation index: 146
type: SIMPLE_ASSIGN
GEN1.p.ir = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_146(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,146};
  data->localData[0]->realVars[37] /* GEN1.p.ir variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 147
type: SIMPLE_ASSIGN
GEN1.p.ii = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_147(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,147};
  data->localData[0]->realVars[36] /* GEN1.p.ii variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 148
type: SIMPLE_ASSIGN
LOAD.p.ir = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_148(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,148};
  data->localData[0]->realVars[45] /* LOAD.p.ir variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 149
type: SIMPLE_ASSIGN
LOAD.p.ii = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_149(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,149};
  data->localData[0]->realVars[44] /* LOAD.p.ii variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 150
type: SIMPLE_ASSIGN
GEN2.p.ir = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_150(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,150};
  data->localData[0]->realVars[41] /* GEN2.p.ir variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 151
type: SIMPLE_ASSIGN
GEN2.p.ii = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_151(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,151};
  data->localData[0]->realVars[40] /* GEN2.p.ii variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 152
type: SIMPLE_ASSIGN
FAULT.p.ir = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_152(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,152};
  data->localData[0]->realVars[33] /* FAULT.p.ir variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 153
type: SIMPLE_ASSIGN
FAULT.p.ii = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_153(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,153};
  data->localData[0]->realVars[32] /* FAULT.p.ii variable */ = 0.0;
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_314(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_315(DATA *data, threadData_t *threadData);


/*
equation index: 156
type: ALGORITHM

  assert(eXST1.limiter.uMax >= eXST1.limiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(eXST1.limiter.uMax, 6, 0, true) + ") < uMin (=" + String(eXST1.limiter.uMin, 6, 0, true) + ")");
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_156(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,156};
  modelica_boolean tmp0;
  static const MMC_DEFSTRINGLIT(tmp1,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp2;
  static const MMC_DEFSTRINGLIT(tmp3,11,") < uMin (=");
  modelica_string tmp4;
  static int tmp5 = 0;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  {
    tmp0 = GreaterEq(data->simulationInfo->realParameter[146] /* eXST1.limiter.uMax PARAM */,data->simulationInfo->realParameter[147] /* eXST1.limiter.uMin PARAM */);
    if(!tmp0)
    {
      tmp2 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[146] /* eXST1.limiter.uMax PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp1),tmp2);
      tmpMeta[1] = stringAppend(tmpMeta[0],MMC_REFSTRINGLIT(tmp3));
      tmp4 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[147] /* eXST1.limiter.uMin PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[2] = stringAppend(tmpMeta[1],tmp4);
      tmpMeta[3] = stringAppend(tmpMeta[2],(modelica_string) mmc_strings_len1[41]);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.3/Blocks/Nonlinear.mo",22,9,23,65,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\neXST1.limiter.uMax >= eXST1.limiter.uMin", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(tmpMeta[3]));
      }
    }
  }
  TRACE_POP
}
OMC_DISABLE_OPT
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_functionInitialEquations_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_1(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_2(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_3(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_4(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_313(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_6(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_7(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_8(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_9(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_10(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_11(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_12(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_13(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_14(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_15(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_16(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_17(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_18(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_320(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_20(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_21(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_22(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_23(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_24(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_25(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_99(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_462(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_461(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_468(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_103(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_449(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_105(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_106(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_107(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_447(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_446(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_110(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_111(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_445(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_427(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_448(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_465(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_463(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_464(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_118(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_469(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_120(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_481(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_482(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_483(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_486(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_485(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_126(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_423(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_474(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_473(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_420(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_419(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_422(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_421(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_480(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_479(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_478(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_477(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_476(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_475(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_471(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_472(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_466(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_467(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_459(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_460(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_146(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_147(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_148(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_149(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_150(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_151(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_152(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_153(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_314(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_315(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_156(data, threadData);
  TRACE_POP
}


int OpenIPSL_Examples_Controls_PSSE_ES_EXST1_functionInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_functionInitialEquations_0(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_1(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_2(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_3(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_4(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_313(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_6(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_7(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_8(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_9(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_10(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_11(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_12(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_13(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_14(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_15(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_16(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_17(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_18(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_320(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_20(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_21(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_22(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_23(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_24(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_25(DATA *data, threadData_t *threadData);


void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_182(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_183(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_184(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_185(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_186(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_187(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_188(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_189(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_190(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_191(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_192(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_193(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_194(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_195(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_196(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_197(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_198(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_199(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_200(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_201(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_202(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_203(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_204(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_205(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_206(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_207(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_208(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_209(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_210(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_211(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_212(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_213(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_214(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_215(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_216(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_217(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_218(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_219(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_220(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_221(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_222(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_223(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_224(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_254(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_253(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_252(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_251(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_250(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_249(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_248(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_247(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_246(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_245(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_244(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_243(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_242(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_241(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_240(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_239(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_238(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_237(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_236(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_235(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_234(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_233(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_232(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_231(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_230(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_229(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_228(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_227(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_226(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_225(DATA*, threadData_t*);
/*
equation index: 255
indexNonlinear: 1
type: NONLINEAR

vars: {pwLine.ir.re, pwLine1.is.re, pwLine.ir.im, pwLine1.is.im, pwLine4.is.im, pwLine3.ir.im, pwLine4.is.re, pwLine3.ir.re, pwLine3.is.re, pwLine3.is.im, pwLine1.ir.im, pwLine1.ir.re, gENCLS.id, gENCLS.iq, gENROE.PSIkq, gENROE.PSIkd, gENROE.PSIppd, gENROE.PSIppq, gENROE.id, gENROE.iq, pwLine.vs.re, pwLine.vs.im, pwLine1.vr.re, pwLine1.vr.im, eXST1.XADIFD, eXST1.ECOMP, pwLine1.vs.im, pwLine3.vr.im, pwLine3.vr.re, pwLine1.vs.re}
eqns: {182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 254, 253, 252, 251, 250, 249, 248, 247, 246, 245, 244, 243, 242, 241, 240, 239, 238, 237, 236, 235, 234, 233, 232, 231, 230, 229, 228, 227, 226, 225}
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_255(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,255};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 255 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[0] = data->localData[0]->realVars[107] /* pwLine.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[1] = data->localData[0]->realVars[119] /* pwLine1.is.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[2] = data->localData[0]->realVars[106] /* pwLine.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[3] = data->localData[0]->realVars[118] /* pwLine1.is.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[4] = data->localData[0]->realVars[140] /* pwLine4.is.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[5] = data->localData[0]->realVars[128] /* pwLine3.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[6] = data->localData[0]->realVars[141] /* pwLine4.is.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[7] = data->localData[0]->realVars[129] /* pwLine3.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[8] = data->localData[0]->realVars[131] /* pwLine3.is.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[9] = data->localData[0]->realVars[130] /* pwLine3.is.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[10] = data->localData[0]->realVars[116] /* pwLine1.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[11] = data->localData[0]->realVars[117] /* pwLine1.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[12] = data->simulationInfo->realParameter[163] /* gENCLS.id0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[13] = data->simulationInfo->realParameter[165] /* gENCLS.iq0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[14] = data->simulationInfo->realParameter[202] /* gENROE.PSIkq0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[15] = data->simulationInfo->realParameter[201] /* gENROE.PSIkd0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[16] = data->simulationInfo->realParameter[207] /* gENROE.PSIppd0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[17] = data->simulationInfo->realParameter[208] /* gENROE.PSIppq0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[18] = data->simulationInfo->realParameter[247] /* gENROE.id0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[19] = data->simulationInfo->realParameter[249] /* gENROE.iq0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[20] = data->simulationInfo->realParameter[258] /* gENROE.vr0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[21] = data->simulationInfo->realParameter[257] /* gENROE.vi0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[22] = data->simulationInfo->realParameter[174] /* gENCLS.vr0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[23] = data->simulationInfo->realParameter[172] /* gENCLS.vi0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[24] = data->simulationInfo->realParameter[245] /* gENROE.efd0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[25] = data->simulationInfo->realParameter[15] /* GEN1.v_0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[26] = data->simulationInfo->realParameter[73] /* constantLoad.vi0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[27] = (data->simulationInfo->realParameter[7] /* FAULT.v_0 PARAM */) * (sin(data->simulationInfo->realParameter[5] /* FAULT.angle_0rad PARAM */));
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[28] = (data->simulationInfo->realParameter[7] /* FAULT.v_0 PARAM */) * (cos(data->simulationInfo->realParameter[5] /* FAULT.angle_0rad PARAM */));
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[29] = data->simulationInfo->realParameter[74] /* constantLoad.vr0 PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 1);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,255};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 255 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[107] /* pwLine.ir.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[0];
  data->localData[0]->realVars[119] /* pwLine1.is.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[1];
  data->localData[0]->realVars[106] /* pwLine.ir.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[2];
  data->localData[0]->realVars[118] /* pwLine1.is.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[3];
  data->localData[0]->realVars[140] /* pwLine4.is.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[4];
  data->localData[0]->realVars[128] /* pwLine3.ir.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[5];
  data->localData[0]->realVars[141] /* pwLine4.is.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[6];
  data->localData[0]->realVars[129] /* pwLine3.ir.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[7];
  data->localData[0]->realVars[131] /* pwLine3.is.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[8];
  data->localData[0]->realVars[130] /* pwLine3.is.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[9];
  data->localData[0]->realVars[116] /* pwLine1.ir.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[10];
  data->localData[0]->realVars[117] /* pwLine1.ir.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[11];
  data->localData[0]->realVars[76] /* gENCLS.id variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[12];
  data->localData[0]->realVars[77] /* gENCLS.iq variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[13];
  data->localData[0]->realVars[9] /* gENROE.PSIkq STATE(1) */ = data->simulationInfo->nonlinearSystemData[1].nlsx[14];
  data->localData[0]->realVars[8] /* gENROE.PSIkd STATE(1) */ = data->simulationInfo->nonlinearSystemData[1].nlsx[15];
  data->localData[0]->realVars[88] /* gENROE.PSIppd variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[16];
  data->localData[0]->realVars[89] /* gENROE.PSIppq variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[17];
  data->localData[0]->realVars[96] /* gENROE.id variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[18];
  data->localData[0]->realVars[97] /* gENROE.iq variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[19];
  data->localData[0]->realVars[111] /* pwLine.vs.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[20];
  data->localData[0]->realVars[110] /* pwLine.vs.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[21];
  data->localData[0]->realVars[121] /* pwLine1.vr.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[22];
  data->localData[0]->realVars[120] /* pwLine1.vr.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[23];
  data->localData[0]->realVars[65] /* eXST1.XADIFD variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[24];
  data->localData[0]->realVars[57] /* eXST1.ECOMP variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[25];
  data->localData[0]->realVars[122] /* pwLine1.vs.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[26];
  data->localData[0]->realVars[132] /* pwLine3.vr.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[27];
  data->localData[0]->realVars[133] /* pwLine3.vr.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[28];
  data->localData[0]->realVars[123] /* pwLine1.vs.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[29];
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_462(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_461(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_468(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_103(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_449(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_105(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_106(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_107(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_447(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_446(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_110(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_111(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_445(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_427(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_448(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_465(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_463(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_464(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_118(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_469(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_120(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_481(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_482(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_483(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_486(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_485(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_126(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_423(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_474(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_473(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_420(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_419(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_422(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_421(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_480(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_479(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_478(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_477(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_476(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_475(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_471(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_472(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_466(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_467(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_459(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_460(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_146(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_147(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_148(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_149(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_150(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_151(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_152(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_153(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_314(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_315(DATA *data, threadData_t *threadData);


int OpenIPSL_Examples_Controls_PSSE_ES_EXST1_functionInitialEquations_lambda0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_1(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_2(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_3(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_4(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_313(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_6(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_7(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_8(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_9(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_10(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_11(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_12(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_13(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_14(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_15(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_16(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_17(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_18(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_320(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_20(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_21(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_22(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_23(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_24(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_25(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_255(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_462(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_461(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_468(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_103(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_449(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_105(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_106(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_107(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_447(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_446(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_110(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_111(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_445(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_427(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_448(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_465(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_463(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_464(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_118(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_469(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_120(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_481(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_482(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_483(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_486(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_485(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_126(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_423(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_474(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_473(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_420(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_419(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_422(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_421(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_480(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_479(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_478(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_477(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_476(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_475(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_471(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_472(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_466(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_467(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_459(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_460(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_146(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_147(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_148(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_149(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_150(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_151(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_152(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_153(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_314(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_315(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_ES_EXST1_functionRemovedInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int *equationIndexes = NULL;
  double res = 0.0;

  res = data->localData[0]->realVars[78] /* gENCLS.omega variable */;
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

