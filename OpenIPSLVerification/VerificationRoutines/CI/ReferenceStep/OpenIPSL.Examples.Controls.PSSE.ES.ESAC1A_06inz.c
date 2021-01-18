/* Initialization */
#include "OpenIPSL.Examples.Controls.PSSE.ES.ESAC1A_model.h"
#include "OpenIPSL.Examples.Controls.PSSE.ES.ESAC1A_11mix.h"
#include "OpenIPSL.Examples.Controls.PSSE.ES.ESAC1A_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_functionInitialEquations_0(DATA *data, threadData_t *threadData);

/*
equation index: 1
type: SIMPLE_ASSIGN
gENCLS.omega = $START.gENCLS.omega
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_1(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1};
  data->localData[0]->realVars[88] /* gENCLS.omega variable */ = data->modelData->realVarsData[88].attribute /* gENCLS.omega variable */.start;
  TRACE_POP
}

/*
equation index: 2
type: SIMPLE_ASSIGN
eSAC1A.rotatingExciterWithDemagnetization.sISO.local_reset = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_2(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2};
  data->localData[0]->booleanVars[2] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.local_reset DISCRETE */ = 0;
  TRACE_POP
}

/*
equation index: 3
type: SIMPLE_ASSIGN
eSAC1A.rotatingExciterWithDemagnetization.sISO.local_set = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_3(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3};
  data->localData[0]->realVars[81] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.local_set variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 4
type: SIMPLE_ASSIGN
GEN1.p.ir = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_4(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4};
  data->localData[0]->realVars[39] /* GEN1.p.ir variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 5
type: SIMPLE_ASSIGN
GEN1.p.ii = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_5(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5};
  data->localData[0]->realVars[38] /* GEN1.p.ii variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 6
type: SIMPLE_ASSIGN
LOAD.p.ir = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_6(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6};
  data->localData[0]->realVars[47] /* LOAD.p.ir variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 7
type: SIMPLE_ASSIGN
LOAD.p.ii = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_7(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7};
  data->localData[0]->realVars[46] /* LOAD.p.ii variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 8
type: SIMPLE_ASSIGN
GEN2.p.ir = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_8(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,8};
  data->localData[0]->realVars[43] /* GEN2.p.ir variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 9
type: SIMPLE_ASSIGN
GEN2.p.ii = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_9(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,9};
  data->localData[0]->realVars[42] /* GEN2.p.ii variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 10
type: SIMPLE_ASSIGN
FAULT.p.ir = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_10(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10};
  data->localData[0]->realVars[35] /* FAULT.p.ir variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 11
type: SIMPLE_ASSIGN
FAULT.p.ii = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_11(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11};
  data->localData[0]->realVars[34] /* FAULT.p.ii variable */ = 0.0;
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_357(DATA *data, threadData_t *threadData);


/*
equation index: 13
type: SIMPLE_ASSIGN
gENCLS.delta = gENCLS.delta0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_13(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13};
  data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */ = data->simulationInfo->realParameter[193] /* gENCLS.delta0 PARAM */;
  TRACE_POP
}

/*
equation index: 14
type: SIMPLE_ASSIGN
gENCLS.eq = gENCLS.vf0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_14(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14};
  data->localData[0]->realVars[6] /* gENCLS.eq STATE(1) */ = data->simulationInfo->realParameter[203] /* gENCLS.vf0 PARAM */;
  TRACE_POP
}

/*
equation index: 15
type: SIMPLE_ASSIGN
eSAC1A.Efd0 = eSAC1A.EFD0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_15(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,15};
  data->simulationInfo->realParameter[81] /* eSAC1A.Efd0 PARAM */ = data->localData[0]->realVars[61] /* eSAC1A.EFD0 variable */;
  TRACE_POP
}

/*
equation index: 16
type: SIMPLE_ASSIGN
eSAC1A.derivative.y = eSAC1A.derivative.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_16(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,16};
  data->localData[0]->realVars[66] /* eSAC1A.derivative.y variable */ = data->simulationInfo->realParameter[123] /* eSAC1A.derivative.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 17
type: SIMPLE_ASSIGN
gENROE.w = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_17(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,17};
  data->localData[0]->realVars[12] /* gENROE.w STATE(1) */ = 0.0;
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_364(DATA *data, threadData_t *threadData);


/*
equation index: 19
type: SIMPLE_ASSIGN
gENROE.delta = gENROE.delta0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_19(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,19};
  data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */ = data->simulationInfo->realParameter[275] /* gENROE.delta0 PARAM */;
  TRACE_POP
}

/*
equation index: 20
type: SIMPLE_ASSIGN
$DER.gENROE.PSIkq = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_20(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,20};
  data->localData[0]->realVars[23] /* der(gENROE.PSIkq) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 21
type: SIMPLE_ASSIGN
$DER.gENROE.PSIkd = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_21(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,21};
  data->localData[0]->realVars[22] /* der(gENROE.PSIkd) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 22
type: SIMPLE_ASSIGN
$DER.gENROE.Epq = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_22(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,22};
  data->localData[0]->realVars[21] /* der(gENROE.Epq) STATE_DER */ = 0.0;
  TRACE_POP
}

void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_23(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_24(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_25(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_26(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_27(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_28(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_29(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_30(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_31(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_32(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_33(DATA*, threadData_t*);
/*
equation index: 34
indexNonlinear: 0
type: NONLINEAR

vars: {eSAC1A.XADIFD}
eqns: {23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33}
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_34(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,34};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 34 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[0] = data->localData[0]->realVars[63] /* eSAC1A.XADIFD variable */;
  retValue = solve_nonlinear_system(data, threadData, 0);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,34};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 34 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[63] /* eSAC1A.XADIFD variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[0];
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_369(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_370(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_368(DATA *data, threadData_t *threadData);


/*
equation index: 38
type: SIMPLE_ASSIGN
eSAC1A.VFE0 = eSAC1A.VE0 * (OpenIPSL.NonElectrical.Functions.SE(eSAC1A.VE0, eSAC1A.S_EE_1, eSAC1A.S_EE_2, eSAC1A.E_1, eSAC1A.E_2) + eSAC1A.K_E) + eSAC1A.Ifd0 * eSAC1A.K_D
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_38(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,38};
  data->simulationInfo->realParameter[97] /* eSAC1A.VFE0 PARAM */ = (data->simulationInfo->realParameter[96] /* eSAC1A.VE0 PARAM */) * (omc_OpenIPSL_NonElectrical_Functions_SE(threadData, data->simulationInfo->realParameter[96] /* eSAC1A.VE0 PARAM */, data->simulationInfo->realParameter[88] /* eSAC1A.S_EE_1 PARAM */, data->simulationInfo->realParameter[89] /* eSAC1A.S_EE_2 PARAM */, data->simulationInfo->realParameter[79] /* eSAC1A.E_1 PARAM */, data->simulationInfo->realParameter[80] /* eSAC1A.E_2 PARAM */) + data->simulationInfo->realParameter[86] /* eSAC1A.K_E PARAM */) + (data->simulationInfo->realParameter[82] /* eSAC1A.Ifd0 PARAM */) * (data->simulationInfo->realParameter[85] /* eSAC1A.K_D PARAM */);
  TRACE_POP
}

/*
equation index: 39
type: SIMPLE_ASSIGN
eSAC1A.VR0 = eSAC1A.VFE0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_39(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,39};
  data->simulationInfo->realParameter[100] /* eSAC1A.VR0 PARAM */ = data->simulationInfo->realParameter[97] /* eSAC1A.VFE0 PARAM */;
  TRACE_POP
}

/*
equation index: 40
type: SIMPLE_ASSIGN
eSAC1A.simpleLagLim.y_start = eSAC1A.VR0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_40(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,40};
  data->simulationInfo->realParameter[179] /* eSAC1A.simpleLagLim.y_start PARAM */ = data->simulationInfo->realParameter[100] /* eSAC1A.VR0 PARAM */;
  TRACE_POP
}

/*
equation index: 41
type: SIMPLE_ASSIGN
eSAC1A.simpleLagLim.state = eSAC1A.simpleLagLim.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_41(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,41};
  data->localData[0]->realVars[4] /* eSAC1A.simpleLagLim.state STATE(1) */ = data->simulationInfo->realParameter[179] /* eSAC1A.simpleLagLim.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 42
type: SIMPLE_ASSIGN
$START.eSAC1A.hV_GATE.n1 = eSAC1A.simpleLagLim.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_42(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,42};
  data->modelData->realVarsData[67].attribute /* eSAC1A.hV_GATE.n1 variable */.start = data->simulationInfo->realParameter[179] /* eSAC1A.simpleLagLim.y_start PARAM */;
    data->localData[0]->realVars[67] /* eSAC1A.hV_GATE.n1 variable */ = data->modelData->realVarsData[67].attribute /* eSAC1A.hV_GATE.n1 variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[67].info /* eSAC1A.hV_GATE.n1 */.name, (modelica_real) data->localData[0]->realVars[67] /* eSAC1A.hV_GATE.n1 variable */);
  TRACE_POP
}

/*
equation index: 43
type: SIMPLE_ASSIGN
eSAC1A.imLeadLag.y_start = eSAC1A.VR0 / eSAC1A.K_A
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_43(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,43};
  data->simulationInfo->realParameter[142] /* eSAC1A.imLeadLag.y_start PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[100] /* eSAC1A.VR0 PARAM */,data->simulationInfo->realParameter[83] /* eSAC1A.K_A PARAM */,"eSAC1A.K_A",equationIndexes);
  TRACE_POP
}

/*
equation index: 44
type: SIMPLE_ASSIGN
eSAC1A.imLeadLag.TF.y_start = eSAC1A.imLeadLag.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_44(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,44};
  data->simulationInfo->realParameter[138] /* eSAC1A.imLeadLag.TF.y_start PARAM */ = data->simulationInfo->realParameter[142] /* eSAC1A.imLeadLag.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 45
type: SIMPLE_ASSIGN
eSAC1A.imLeadLag.TF.y = eSAC1A.imLeadLag.TF.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_45(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,45};
  data->localData[0]->realVars[70] /* eSAC1A.imLeadLag.TF.y variable */ = data->simulationInfo->realParameter[138] /* eSAC1A.imLeadLag.TF.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 46
type: SIMPLE_ASSIGN
eSAC1A.imLeadLag.x_start = eSAC1A.VR0 / eSAC1A.K_A
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_46(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,46};
  data->simulationInfo->realParameter[141] /* eSAC1A.imLeadLag.x_start PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[100] /* eSAC1A.VR0 PARAM */,data->simulationInfo->realParameter[83] /* eSAC1A.K_A PARAM */,"eSAC1A.K_A",equationIndexes);
  TRACE_POP
}

/*
equation index: 47
type: SIMPLE_ASSIGN
eSAC1A.imLeadLag.TF.x_start[1] = eSAC1A.imLeadLag.x_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_47(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,47};
  data->simulationInfo->realParameter[137] /* eSAC1A.imLeadLag.TF.x_start[1] PARAM */ = data->simulationInfo->realParameter[141] /* eSAC1A.imLeadLag.x_start PARAM */;
  TRACE_POP
}

/*
equation index: 48
type: SIMPLE_ASSIGN
$START.eSAC1A.imLeadLag.TF.x[1] = eSAC1A.imLeadLag.TF.x_start[1]
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_48(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,48};
  data->modelData->realVarsData[69].attribute /* eSAC1A.imLeadLag.TF.x[1] variable */.start = data->simulationInfo->realParameter[137] /* eSAC1A.imLeadLag.TF.x_start[1] PARAM */;
    data->localData[0]->realVars[69] /* eSAC1A.imLeadLag.TF.x[1] variable */ = data->modelData->realVarsData[69].attribute /* eSAC1A.imLeadLag.TF.x[1] variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[69].info /* eSAC1A.imLeadLag.TF.x[1] */.name, (modelica_real) data->localData[0]->realVars[69] /* eSAC1A.imLeadLag.TF.x[1] variable */);
  TRACE_POP
}

/*
equation index: 49
type: SIMPLE_ASSIGN
eSAC1A.derivative.x_start = eSAC1A.VFE0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_49(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,49};
  data->simulationInfo->realParameter[122] /* eSAC1A.derivative.x_start PARAM */ = data->simulationInfo->realParameter[97] /* eSAC1A.VFE0 PARAM */;
  TRACE_POP
}

/*
equation index: 50
type: SIMPLE_ASSIGN
$START.eSAC1A.derivative.x = eSAC1A.derivative.x_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_50(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,50};
  data->modelData->realVarsData[0].attribute /* eSAC1A.derivative.x STATE(1) */.start = data->simulationInfo->realParameter[122] /* eSAC1A.derivative.x_start PARAM */;
    data->localData[0]->realVars[0] /* eSAC1A.derivative.x STATE(1) */ = data->modelData->realVarsData[0].attribute /* eSAC1A.derivative.x STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[0].info /* eSAC1A.derivative.x */.name, (modelica_real) data->localData[0]->realVars[0] /* eSAC1A.derivative.x STATE(1) */);
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_486(DATA *data, threadData_t *threadData);


/*
equation index: 52
type: SIMPLE_ASSIGN
eSAC1A.derivative.x = (eSAC1A.derivative.u / eSAC1A.derivative.T * 0.03 - eSAC1A.derivative.y) * eSAC1A.derivative.T / 0.03
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_52(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,52};
  data->localData[0]->realVars[0] /* eSAC1A.derivative.x STATE(1) */ = DIVISION_SIM(((DIVISION_SIM(data->localData[0]->realVars[65] /* eSAC1A.derivative.u variable */,data->simulationInfo->realParameter[120] /* eSAC1A.derivative.T PARAM */,"eSAC1A.derivative.T",equationIndexes)) * (0.03) - data->localData[0]->realVars[66] /* eSAC1A.derivative.y variable */) * (data->simulationInfo->realParameter[120] /* eSAC1A.derivative.T PARAM */),0.03,"0.03",equationIndexes);
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_487(DATA *data, threadData_t *threadData);


/*
equation index: 54
type: SIMPLE_ASSIGN
$DER.gENROE.Epd = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_54(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,54};
  data->localData[0]->realVars[20] /* der(gENROE.Epd) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 55
type: SIMPLE_ASSIGN
gENROE.XaqIlq = (-$DER.gENROE.Epd) * gENROE.Tpq0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_55(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,55};
  data->localData[0]->realVars[103] /* gENROE.XaqIlq variable */ = ((-data->localData[0]->realVars[20] /* der(gENROE.Epd) STATE_DER */)) * (data->simulationInfo->realParameter[253] /* gENROE.Tpq0 PARAM */);
  TRACE_POP
}

void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_56(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_57(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_58(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_59(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_60(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_61(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_62(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_63(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_64(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_65(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_66(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_67(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_68(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_69(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_70(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_71(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_72(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_73(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_74(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_75(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_76(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_77(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_78(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_79(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_80(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_81(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_107(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_106(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_105(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_104(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_103(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_102(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_101(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_100(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_99(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_98(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_97(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_96(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_95(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_94(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_93(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_92(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_91(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_90(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_89(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_88(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_87(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_86(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_85(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_84(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_83(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_82(DATA*, threadData_t*);
/*
equation index: 108
indexNonlinear: 1
type: NONLINEAR

vars: {pwLine.ir.re, pwLine1.is.re, constantLoad.p.ii, pwLine.ir.im, pwLine4.is.re, pwLine3.ir.re, pwLine4.is.im, pwLine3.ir.im, pwLine3.is.re, pwLine3.is.im, pwLine4.ir.im, pwLine1.ir.re, gENCLS.id, gENCLS.iq, gENROE.PSIkd, gENROE.PSIkq, gENROE.uq, gENROE.PSIppq, gENROE.id, gENROE.iq, pwLine1.vr.im, pwLine1.vr.re, pwLine1.vs.im, pwLine1.vs.re, pwLine3.vr.im, pwLine3.vr.re}
eqns: {56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 107, 106, 105, 104, 103, 102, 101, 100, 99, 98, 97, 96, 95, 94, 93, 92, 91, 90, 89, 88, 87, 86, 85, 84, 83, 82}
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_108(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,108};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 108 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[0] = data->localData[0]->realVars[117] /* pwLine.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[1] = data->localData[0]->realVars[129] /* pwLine1.is.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[2] = data->localData[0]->realVars[53] /* constantLoad.p.ii variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[3] = data->localData[0]->realVars[116] /* pwLine.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[4] = data->localData[0]->realVars[151] /* pwLine4.is.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[5] = data->localData[0]->realVars[139] /* pwLine3.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[6] = data->localData[0]->realVars[150] /* pwLine4.is.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[7] = data->localData[0]->realVars[138] /* pwLine3.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[8] = data->localData[0]->realVars[141] /* pwLine3.is.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[9] = data->localData[0]->realVars[140] /* pwLine3.is.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[10] = data->localData[0]->realVars[148] /* pwLine4.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[11] = data->localData[0]->realVars[127] /* pwLine1.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[12] = data->localData[0]->realVars[86] /* gENCLS.id variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[13] = data->localData[0]->realVars[87] /* gENCLS.iq variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[14] = data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[15] = data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[16] = data->localData[0]->realVars[109] /* gENROE.uq variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[17] = data->localData[0]->realVars[99] /* gENROE.PSIppq variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[18] = data->localData[0]->realVars[106] /* gENROE.id variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[19] = data->localData[0]->realVars[107] /* gENROE.iq variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[20] = data->localData[0]->realVars[130] /* pwLine1.vr.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[21] = data->localData[0]->realVars[131] /* pwLine1.vr.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[22] = data->localData[0]->realVars[132] /* pwLine1.vs.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[23] = data->localData[0]->realVars[133] /* pwLine1.vs.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[24] = data->localData[0]->realVars[142] /* pwLine3.vr.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[25] = data->localData[0]->realVars[143] /* pwLine3.vr.re variable */;
  retValue = solve_nonlinear_system(data, threadData, 1);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,108};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 108 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[117] /* pwLine.ir.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[0];
  data->localData[0]->realVars[129] /* pwLine1.is.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[1];
  data->localData[0]->realVars[53] /* constantLoad.p.ii variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[2];
  data->localData[0]->realVars[116] /* pwLine.ir.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[3];
  data->localData[0]->realVars[151] /* pwLine4.is.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[4];
  data->localData[0]->realVars[139] /* pwLine3.ir.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[5];
  data->localData[0]->realVars[150] /* pwLine4.is.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[6];
  data->localData[0]->realVars[138] /* pwLine3.ir.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[7];
  data->localData[0]->realVars[141] /* pwLine3.is.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[8];
  data->localData[0]->realVars[140] /* pwLine3.is.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[9];
  data->localData[0]->realVars[148] /* pwLine4.ir.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[10];
  data->localData[0]->realVars[127] /* pwLine1.ir.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[11];
  data->localData[0]->realVars[86] /* gENCLS.id variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[12];
  data->localData[0]->realVars[87] /* gENCLS.iq variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[13];
  data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */ = data->simulationInfo->nonlinearSystemData[1].nlsx[14];
  data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */ = data->simulationInfo->nonlinearSystemData[1].nlsx[15];
  data->localData[0]->realVars[109] /* gENROE.uq variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[16];
  data->localData[0]->realVars[99] /* gENROE.PSIppq variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[17];
  data->localData[0]->realVars[106] /* gENROE.id variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[18];
  data->localData[0]->realVars[107] /* gENROE.iq variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[19];
  data->localData[0]->realVars[130] /* pwLine1.vr.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[20];
  data->localData[0]->realVars[131] /* pwLine1.vr.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[21];
  data->localData[0]->realVars[132] /* pwLine1.vs.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[22];
  data->localData[0]->realVars[133] /* pwLine1.vs.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[23];
  data->localData[0]->realVars[142] /* pwLine3.vr.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[24];
  data->localData[0]->realVars[143] /* pwLine3.vr.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[25];
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_479(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_474(DATA *data, threadData_t *threadData);


/*
equation index: 111
type: SIMPLE_ASSIGN
eSAC1A.ECOMP0 = eSAC1A.ECOMP
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_111(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,111};
  data->simulationInfo->realParameter[78] /* eSAC1A.ECOMP0 PARAM */ = data->localData[0]->realVars[59] /* eSAC1A.ECOMP variable */;
  TRACE_POP
}

/*
equation index: 112
type: SIMPLE_ASSIGN
eSAC1A.V_REF = eSAC1A.VR0 / eSAC1A.K_A + eSAC1A.ECOMP0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_112(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,112};
  data->simulationInfo->realParameter[104] /* eSAC1A.V_REF PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[100] /* eSAC1A.VR0 PARAM */,data->simulationInfo->realParameter[83] /* eSAC1A.K_A PARAM */,"eSAC1A.K_A",equationIndexes) + data->simulationInfo->realParameter[78] /* eSAC1A.ECOMP0 PARAM */;
  TRACE_POP
}

/*
equation index: 113
type: SIMPLE_ASSIGN
eSAC1A.VoltageReference.k = eSAC1A.V_REF
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_113(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,113};
  data->simulationInfo->realParameter[107] /* eSAC1A.VoltageReference.k PARAM */ = data->simulationInfo->realParameter[104] /* eSAC1A.V_REF PARAM */;
  TRACE_POP
}

/*
equation index: 114
type: SIMPLE_ASSIGN
eSAC1A.add7.u2 = eSAC1A.VoltageReference.k
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_114(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,114};
  data->simulationInfo->realParameter[118] /* eSAC1A.add7.u2 PARAM */ = data->simulationInfo->realParameter[107] /* eSAC1A.VoltageReference.k PARAM */;
  TRACE_POP
}

/*
equation index: 115
type: SIMPLE_ASSIGN
eSAC1A.VoltageReference.y = eSAC1A.VoltageReference.k
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_115(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,115};
  data->simulationInfo->realParameter[108] /* eSAC1A.VoltageReference.y PARAM */ = data->simulationInfo->realParameter[107] /* eSAC1A.VoltageReference.k PARAM */;
  TRACE_POP
}

/*
equation index: 116
type: SIMPLE_ASSIGN
eSAC1A.Vref_step.height = eSAC1A.V_REF * eSAC1A.dV
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_116(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,116};
  data->simulationInfo->realParameter[109] /* eSAC1A.Vref_step.height PARAM */ = (data->simulationInfo->realParameter[104] /* eSAC1A.V_REF PARAM */) * (data->simulationInfo->realParameter[119] /* eSAC1A.dV PARAM */);
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_365(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_366(DATA *data, threadData_t *threadData);


/*
equation index: 119
type: SIMPLE_ASSIGN
eSAC1A.imSimpleLag.y_start = eSAC1A.ECOMP0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_119(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,119};
  data->simulationInfo->realParameter[147] /* eSAC1A.imSimpleLag.y_start PARAM */ = data->simulationInfo->realParameter[78] /* eSAC1A.ECOMP0 PARAM */;
  TRACE_POP
}

/*
equation index: 120
type: SIMPLE_ASSIGN
$START.eSAC1A.imSimpleLag.state = eSAC1A.imSimpleLag.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_120(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,120};
  data->modelData->realVarsData[2].attribute /* eSAC1A.imSimpleLag.state STATE(1) */.start = data->simulationInfo->realParameter[147] /* eSAC1A.imSimpleLag.y_start PARAM */;
    data->localData[0]->realVars[2] /* eSAC1A.imSimpleLag.state STATE(1) */ = data->modelData->realVarsData[2].attribute /* eSAC1A.imSimpleLag.state STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[2].info /* eSAC1A.imSimpleLag.state */.name, (modelica_real) data->localData[0]->realVars[2] /* eSAC1A.imSimpleLag.state STATE(1) */);
  TRACE_POP
}

/*
equation index: 121
type: SIMPLE_ASSIGN
eSAC1A.imSimpleLag.state = eSAC1A.imSimpleLag.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_121(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,121};
  data->localData[0]->realVars[2] /* eSAC1A.imSimpleLag.state STATE(1) */ = data->simulationInfo->realParameter[147] /* eSAC1A.imSimpleLag.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 122
type: SIMPLE_ASSIGN
$START.eSAC1A.DiffV.u2 = eSAC1A.imSimpleLag.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_122(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,122};
  data->modelData->realVarsData[57].attribute /* eSAC1A.DiffV.u2 variable */.start = data->simulationInfo->realParameter[147] /* eSAC1A.imSimpleLag.y_start PARAM */;
    data->localData[0]->realVars[57] /* eSAC1A.DiffV.u2 variable */ = data->modelData->realVarsData[57].attribute /* eSAC1A.DiffV.u2 variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[57].info /* eSAC1A.DiffV.u2 */.name, (modelica_real) data->localData[0]->realVars[57] /* eSAC1A.DiffV.u2 variable */);
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_476(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_477(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_489(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_492(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_499(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_498(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_494(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_495(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_496(DATA *data, threadData_t *threadData);


/*
equation index: 132
type: SIMPLE_ASSIGN
eSAC1A.limiter1.y = homotopy(smooth(0, if eSAC1A.lV_GATE.p > eSAC1A.limiter1.uMax then eSAC1A.limiter1.uMax else if eSAC1A.lV_GATE.p < eSAC1A.limiter1.uMin then eSAC1A.limiter1.uMin else eSAC1A.lV_GATE.p), eSAC1A.lV_GATE.p)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_132(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,132};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  tmp0 = Greater(data->localData[0]->realVars[72] /* eSAC1A.lV_GATE.p variable */,data->simulationInfo->realParameter[149] /* eSAC1A.limiter1.uMax PARAM */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = data->simulationInfo->realParameter[149] /* eSAC1A.limiter1.uMax PARAM */;
  }
  else
  {
    tmp1 = Less(data->localData[0]->realVars[72] /* eSAC1A.lV_GATE.p variable */,data->simulationInfo->realParameter[150] /* eSAC1A.limiter1.uMin PARAM */);
    tmp3 = (tmp1?data->simulationInfo->realParameter[150] /* eSAC1A.limiter1.uMin PARAM */:data->localData[0]->realVars[72] /* eSAC1A.lV_GATE.p variable */);
  }
  data->localData[0]->realVars[73] /* eSAC1A.limiter1.y variable */ = homotopy(tmp3, data->localData[0]->realVars[72] /* eSAC1A.lV_GATE.p variable */);
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_500(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_501(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_493(DATA *data, threadData_t *threadData);


/*
equation index: 136
type: SIMPLE_ASSIGN
eSAC1A.imLeadLag.TF.x[1] = (eSAC1A.imLeadLag.TF.d * eSAC1A.add3_1.y - eSAC1A.imLeadLag.TF.y) / (eSAC1A.imLeadLag.TF.a[2] * eSAC1A.imLeadLag.TF.d - eSAC1A.imLeadLag.TF.bb[2])
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_136(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,136};
  data->localData[0]->realVars[69] /* eSAC1A.imLeadLag.TF.x[1] variable */ = DIVISION_SIM((data->simulationInfo->realParameter[136] /* eSAC1A.imLeadLag.TF.d PARAM */) * (data->localData[0]->realVars[64] /* eSAC1A.add3_1.y variable */) - data->localData[0]->realVars[70] /* eSAC1A.imLeadLag.TF.y variable */,(data->simulationInfo->realParameter[130] /* eSAC1A.imLeadLag.TF.a[2] PARAM */) * (data->simulationInfo->realParameter[136] /* eSAC1A.imLeadLag.TF.d PARAM */) - data->simulationInfo->realParameter[135] /* eSAC1A.imLeadLag.TF.bb[2] PARAM */,"eSAC1A.imLeadLag.TF.a[2] * eSAC1A.imLeadLag.TF.d - eSAC1A.imLeadLag.TF.bb[2]",equationIndexes);
  TRACE_POP
}

/*
equation index: 137
type: SIMPLE_ASSIGN
eSAC1A.imLeadLag.TF.x_scaled[1] = eSAC1A.imLeadLag.TF.x[1] * eSAC1A.imLeadLag.TF.a_end
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_137(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,137};
  data->localData[0]->realVars[1] /* eSAC1A.imLeadLag.TF.x_scaled[1] STATE(1) */ = (data->localData[0]->realVars[69] /* eSAC1A.imLeadLag.TF.x[1] variable */) * (data->simulationInfo->realParameter[131] /* eSAC1A.imLeadLag.TF.a_end PARAM */);
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_490(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_475(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_478(DATA *data, threadData_t *threadData);


/*
equation index: 141
type: SIMPLE_ASSIGN
GEN1.angle = 57.29577951308232 * atan2(pwLine.vs.im, pwLine.vs.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_141(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,141};
  data->localData[0]->realVars[37] /* GEN1.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[120] /* pwLine.vs.im variable */, data->localData[0]->realVars[121] /* pwLine.vs.re variable */));
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_466(DATA *data, threadData_t *threadData);


/*
equation index: 143
type: SIMPLE_ASSIGN
LOAD.angle = 57.29577951308232 * atan2(pwLine1.vs.im, pwLine1.vs.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_143(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,143};
  data->localData[0]->realVars[45] /* LOAD.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[132] /* pwLine1.vs.im variable */, data->localData[0]->realVars[133] /* pwLine1.vs.re variable */));
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_520(DATA *data, threadData_t *threadData);


/*
equation index: 145
type: SIMPLE_ASSIGN
GEN2.angle = 57.29577951308232 * atan2(pwLine1.vr.im, pwLine1.vr.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_145(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,145};
  data->localData[0]->realVars[41] /* GEN2.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[130] /* pwLine1.vr.im variable */, data->localData[0]->realVars[131] /* pwLine1.vr.re variable */));
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_528(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_529(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_530(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_533(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_532(DATA *data, threadData_t *threadData);


/*
equation index: 151
type: SIMPLE_ASSIGN
FAULT.angle = 57.29577951308232 * atan2(pwLine3.vr.im, pwLine3.vr.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_151(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,151};
  data->localData[0]->realVars[33] /* FAULT.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[142] /* pwLine3.vr.im variable */, data->localData[0]->realVars[143] /* pwLine3.vr.re variable */));
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_467(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_517(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_516(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_473(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_472(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_471(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_470(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_527(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_526(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_525(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_524(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_519(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_518(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_510(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_509(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_513(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_511(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_512(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_522(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_523(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_514(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_515(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_507(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_508(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_358(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_359(DATA *data, threadData_t *threadData);


/*
equation index: 178
type: ALGORITHM

  assert(eSAC1A.limiter1.uMax >= eSAC1A.limiter1.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(eSAC1A.limiter1.uMax, 6, 0, true) + ") < uMin (=" + String(eSAC1A.limiter1.uMin, 6, 0, true) + ")");
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_178(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,178};
  modelica_boolean tmp4;
  static const MMC_DEFSTRINGLIT(tmp5,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp6;
  static const MMC_DEFSTRINGLIT(tmp7,11,") < uMin (=");
  modelica_string tmp8;
  static int tmp9 = 0;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  {
    tmp4 = GreaterEq(data->simulationInfo->realParameter[149] /* eSAC1A.limiter1.uMax PARAM */,data->simulationInfo->realParameter[150] /* eSAC1A.limiter1.uMin PARAM */);
    if(!tmp4)
    {
      tmp6 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[149] /* eSAC1A.limiter1.uMax PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp5),tmp6);
      tmpMeta[1] = stringAppend(tmpMeta[0],MMC_REFSTRINGLIT(tmp7));
      tmp8 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[150] /* eSAC1A.limiter1.uMin PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[2] = stringAppend(tmpMeta[1],tmp8);
      tmpMeta[3] = stringAppend(tmpMeta[2],(modelica_string) mmc_strings_len1[41]);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.3/Blocks/Nonlinear.mo",22,9,23,65,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\neSAC1A.limiter1.uMax >= eSAC1A.limiter1.uMin", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(tmpMeta[3]));
      }
    }
  }
  TRACE_POP
}
OMC_DISABLE_OPT
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_functionInitialEquations_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_1(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_2(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_3(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_4(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_5(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_6(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_7(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_8(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_9(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_10(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_11(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_357(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_13(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_14(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_15(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_16(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_17(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_364(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_19(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_20(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_21(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_22(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_34(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_369(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_370(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_368(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_38(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_39(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_40(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_41(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_42(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_43(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_44(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_45(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_46(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_47(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_48(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_49(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_50(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_486(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_52(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_487(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_54(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_55(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_108(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_479(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_474(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_111(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_112(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_113(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_114(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_115(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_116(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_365(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_366(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_119(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_120(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_121(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_122(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_476(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_477(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_489(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_492(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_499(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_498(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_494(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_495(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_496(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_132(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_500(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_501(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_493(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_136(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_137(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_490(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_475(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_478(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_141(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_466(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_143(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_520(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_145(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_528(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_529(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_530(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_533(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_532(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_151(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_467(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_517(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_516(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_473(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_472(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_471(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_470(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_527(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_526(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_525(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_524(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_519(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_518(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_510(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_509(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_513(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_511(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_512(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_522(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_523(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_514(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_515(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_507(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_508(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_358(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_359(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_178(data, threadData);
  TRACE_POP
}


int OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_functionInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_functionInitialEquations_0(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_1(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_2(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_3(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_4(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_5(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_6(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_7(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_8(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_9(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_10(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_11(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_357(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_13(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_14(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_15(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_16(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_17(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_364(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_19(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_20(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_21(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_22(DATA *data, threadData_t *threadData);


void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_201(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_202(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_203(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_204(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_205(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_206(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_207(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_208(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_209(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_210(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_211(DATA*, threadData_t*);
/*
equation index: 212
indexNonlinear: 2
type: NONLINEAR

vars: {eSAC1A.XADIFD}
eqns: {201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211}
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_212(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,212};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 212 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[0] = data->simulationInfo->realParameter[277] /* gENROE.efd0 PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 2);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,212};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 212 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[63] /* eSAC1A.XADIFD variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[0];
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_369(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_370(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_368(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_38(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_39(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_40(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_41(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_42(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_43(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_44(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_45(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_46(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_47(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_48(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_49(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_50(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_486(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_52(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_487(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_54(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_55(DATA *data, threadData_t *threadData);


void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_234(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_235(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_236(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_237(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_238(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_239(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_240(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_241(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_242(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_243(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_244(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_245(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_246(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_247(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_248(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_249(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_250(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_251(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_252(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_253(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_254(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_255(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_256(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_257(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_258(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_259(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_285(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_284(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_283(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_282(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_281(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_280(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_279(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_278(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_277(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_276(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_275(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_274(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_273(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_272(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_271(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_270(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_269(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_268(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_267(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_266(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_265(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_264(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_263(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_262(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_261(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_260(DATA*, threadData_t*);
/*
equation index: 286
indexNonlinear: 3
type: NONLINEAR

vars: {pwLine.ir.re, pwLine1.is.re, constantLoad.p.ii, pwLine.ir.im, pwLine4.is.re, pwLine3.ir.re, pwLine4.is.im, pwLine3.ir.im, pwLine3.is.re, pwLine3.is.im, pwLine4.ir.im, pwLine1.ir.re, gENCLS.id, gENCLS.iq, gENROE.PSIkd, gENROE.PSIkq, gENROE.uq, gENROE.PSIppq, gENROE.id, gENROE.iq, pwLine1.vr.im, pwLine1.vr.re, pwLine1.vs.im, pwLine1.vs.re, pwLine3.vr.im, pwLine3.vr.re}
eqns: {234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257, 258, 259, 285, 284, 283, 282, 281, 280, 279, 278, 277, 276, 275, 274, 273, 272, 271, 270, 269, 268, 267, 266, 265, 264, 263, 262, 261, 260}
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_286(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,286};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 286 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[0] = data->localData[0]->realVars[117] /* pwLine.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[1] = data->localData[0]->realVars[129] /* pwLine1.is.re variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[2] = data->simulationInfo->realParameter[67] /* constantLoad.ii0 PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[3] = data->localData[0]->realVars[116] /* pwLine.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[4] = data->localData[0]->realVars[151] /* pwLine4.is.re variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[5] = data->localData[0]->realVars[139] /* pwLine3.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[6] = data->localData[0]->realVars[150] /* pwLine4.is.im variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[7] = data->localData[0]->realVars[138] /* pwLine3.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[8] = data->localData[0]->realVars[141] /* pwLine3.is.re variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[9] = data->localData[0]->realVars[140] /* pwLine3.is.im variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[10] = data->localData[0]->realVars[148] /* pwLine4.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[11] = data->localData[0]->realVars[127] /* pwLine1.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[12] = data->simulationInfo->realParameter[195] /* gENCLS.id0 PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[13] = data->simulationInfo->realParameter[197] /* gENCLS.iq0 PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[14] = data->simulationInfo->realParameter[233] /* gENROE.PSIkd0 PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[15] = data->simulationInfo->realParameter[234] /* gENROE.PSIkq0 PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[16] = data->simulationInfo->realParameter[287] /* gENROE.uq0 PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[17] = data->simulationInfo->realParameter[240] /* gENROE.PSIppq0 PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[18] = data->simulationInfo->realParameter[279] /* gENROE.id0 PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[19] = data->simulationInfo->realParameter[281] /* gENROE.iq0 PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[20] = data->simulationInfo->realParameter[204] /* gENCLS.vi0 PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[21] = data->simulationInfo->realParameter[206] /* gENCLS.vr0 PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[22] = data->simulationInfo->realParameter[73] /* constantLoad.vi0 PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[23] = data->simulationInfo->realParameter[74] /* constantLoad.vr0 PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[24] = (data->simulationInfo->realParameter[7] /* FAULT.v_0 PARAM */) * (sin(data->simulationInfo->realParameter[5] /* FAULT.angle_0rad PARAM */));
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[25] = (data->simulationInfo->realParameter[7] /* FAULT.v_0 PARAM */) * (cos(data->simulationInfo->realParameter[5] /* FAULT.angle_0rad PARAM */));
  retValue = solve_nonlinear_system(data, threadData, 3);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,286};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 286 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[117] /* pwLine.ir.re variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[0];
  data->localData[0]->realVars[129] /* pwLine1.is.re variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[1];
  data->localData[0]->realVars[53] /* constantLoad.p.ii variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[2];
  data->localData[0]->realVars[116] /* pwLine.ir.im variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[3];
  data->localData[0]->realVars[151] /* pwLine4.is.re variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[4];
  data->localData[0]->realVars[139] /* pwLine3.ir.re variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[5];
  data->localData[0]->realVars[150] /* pwLine4.is.im variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[6];
  data->localData[0]->realVars[138] /* pwLine3.ir.im variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[7];
  data->localData[0]->realVars[141] /* pwLine3.is.re variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[8];
  data->localData[0]->realVars[140] /* pwLine3.is.im variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[9];
  data->localData[0]->realVars[148] /* pwLine4.ir.im variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[10];
  data->localData[0]->realVars[127] /* pwLine1.ir.re variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[11];
  data->localData[0]->realVars[86] /* gENCLS.id variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[12];
  data->localData[0]->realVars[87] /* gENCLS.iq variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[13];
  data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */ = data->simulationInfo->nonlinearSystemData[3].nlsx[14];
  data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */ = data->simulationInfo->nonlinearSystemData[3].nlsx[15];
  data->localData[0]->realVars[109] /* gENROE.uq variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[16];
  data->localData[0]->realVars[99] /* gENROE.PSIppq variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[17];
  data->localData[0]->realVars[106] /* gENROE.id variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[18];
  data->localData[0]->realVars[107] /* gENROE.iq variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[19];
  data->localData[0]->realVars[130] /* pwLine1.vr.im variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[20];
  data->localData[0]->realVars[131] /* pwLine1.vr.re variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[21];
  data->localData[0]->realVars[132] /* pwLine1.vs.im variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[22];
  data->localData[0]->realVars[133] /* pwLine1.vs.re variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[23];
  data->localData[0]->realVars[142] /* pwLine3.vr.im variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[24];
  data->localData[0]->realVars[143] /* pwLine3.vr.re variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[25];
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_479(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_474(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_111(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_112(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_113(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_114(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_115(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_116(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_365(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_366(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_119(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_120(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_121(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_122(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_476(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_477(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_489(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_492(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_499(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_498(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_494(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_495(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_496(DATA *data, threadData_t *threadData);


/*
equation index: 310
type: SIMPLE_ASSIGN
eSAC1A.limiter1.y = eSAC1A.lV_GATE.p
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_310(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,310};
  data->localData[0]->realVars[73] /* eSAC1A.limiter1.y variable */ = data->localData[0]->realVars[72] /* eSAC1A.lV_GATE.p variable */;
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_500(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_501(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_493(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_136(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_137(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_490(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_475(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_478(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_141(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_466(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_143(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_520(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_145(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_528(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_529(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_530(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_533(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_532(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_151(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_467(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_517(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_516(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_473(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_472(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_471(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_470(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_527(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_526(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_525(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_524(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_519(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_518(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_510(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_509(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_513(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_511(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_512(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_522(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_523(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_514(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_515(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_507(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_508(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_358(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_359(DATA *data, threadData_t *threadData);


int OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_functionInitialEquations_lambda0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_1(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_2(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_3(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_4(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_5(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_6(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_7(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_8(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_9(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_10(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_11(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_357(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_13(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_14(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_15(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_16(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_17(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_364(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_19(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_20(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_21(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_22(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_212(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_369(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_370(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_368(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_38(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_39(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_40(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_41(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_42(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_43(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_44(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_45(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_46(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_47(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_48(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_49(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_50(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_486(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_52(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_487(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_54(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_55(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_286(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_479(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_474(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_111(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_112(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_113(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_114(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_115(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_116(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_365(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_366(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_119(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_120(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_121(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_122(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_476(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_477(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_489(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_492(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_499(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_498(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_494(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_495(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_496(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_310(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_500(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_501(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_493(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_136(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_137(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_490(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_475(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_478(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_141(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_466(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_143(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_520(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_145(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_528(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_529(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_530(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_533(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_532(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_151(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_467(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_517(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_516(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_473(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_472(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_471(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_470(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_527(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_526(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_525(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_524(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_519(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_518(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_510(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_509(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_513(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_511(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_512(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_522(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_523(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_514(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_515(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_507(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_508(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_358(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_359(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_functionRemovedInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int *equationIndexes = NULL;
  double res = 0.0;

  res = data->localData[0]->realVars[88] /* gENCLS.omega variable */;
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

