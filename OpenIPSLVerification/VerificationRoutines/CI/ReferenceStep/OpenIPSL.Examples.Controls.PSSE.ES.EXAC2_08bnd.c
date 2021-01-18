/* update bound parameters and variable attributes (start, nominal, min, max) */
#include "OpenIPSL.Examples.Controls.PSSE.ES.EXAC2_model.h"
#if defined(__cplusplus)
extern "C" {
#endif


/*
equation index: 553
type: SIMPLE_ASSIGN
$START.eXAC2.XADIFD = gENROE.efd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_553(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,553};
  data->modelData->realVarsData[66].attribute /* eXAC2.XADIFD variable */.start = data->simulationInfo->realParameter[295] /* gENROE.efd0 PARAM */;
    data->localData[0]->realVars[66] /* eXAC2.XADIFD variable */ = data->modelData->realVarsData[66].attribute /* eXAC2.XADIFD variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[66].info /* eXAC2.XADIFD */.name, (modelica_real) data->localData[0]->realVars[66] /* eXAC2.XADIFD variable */);
  TRACE_POP
}

/*
equation index: 554
type: SIMPLE_ASSIGN
$START.eXAC2.ECOMP = GEN1.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_554(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,554};
  data->modelData->realVarsData[62].attribute /* eXAC2.ECOMP variable */.start = data->simulationInfo->realParameter[15] /* GEN1.v_0 PARAM */;
    data->localData[0]->realVars[62] /* eXAC2.ECOMP variable */ = data->modelData->realVarsData[62].attribute /* eXAC2.ECOMP variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[62].info /* eXAC2.ECOMP */.name, (modelica_real) data->localData[0]->realVars[62] /* eXAC2.ECOMP variable */);
  TRACE_POP
}

/*
equation index: 555
type: SIMPLE_ASSIGN
$START.eXAC2.EFD = gENROE.efd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_555(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,555};
  data->modelData->realVarsData[63].attribute /* eXAC2.EFD variable */.start = data->simulationInfo->realParameter[295] /* gENROE.efd0 PARAM */;
    data->localData[0]->realVars[63] /* eXAC2.EFD variable */ = data->modelData->realVarsData[63].attribute /* eXAC2.EFD variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[63].info /* eXAC2.EFD */.name, (modelica_real) data->localData[0]->realVars[63] /* eXAC2.EFD variable */);
  TRACE_POP
}

/*
equation index: 556
type: SIMPLE_ASSIGN
$START.gENROE.PSIppq = gENROE.PSIppq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_556(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,556};
  data->modelData->realVarsData[104].attribute /* gENROE.PSIppq variable */.start = data->simulationInfo->realParameter[258] /* gENROE.PSIppq0 PARAM */;
    data->localData[0]->realVars[104] /* gENROE.PSIppq variable */ = data->modelData->realVarsData[104].attribute /* gENROE.PSIppq variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[104].info /* gENROE.PSIppq */.name, (modelica_real) data->localData[0]->realVars[104] /* gENROE.PSIppq variable */);
  TRACE_POP
}

/*
equation index: 557
type: SIMPLE_ASSIGN
$START.gENROE.PSIppd = gENROE.PSIppd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_557(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,557};
  data->modelData->realVarsData[103].attribute /* gENROE.PSIppd variable */.start = data->simulationInfo->realParameter[257] /* gENROE.PSIppd0 PARAM */;
    data->localData[0]->realVars[103] /* gENROE.PSIppd variable */ = data->modelData->realVarsData[103].attribute /* gENROE.PSIppd variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[103].info /* gENROE.PSIppd */.name, (modelica_real) data->localData[0]->realVars[103] /* gENROE.PSIppd variable */);
  TRACE_POP
}

/*
equation index: 558
type: SIMPLE_ASSIGN
$START.gENROE.PSIq = gENROE.PSIq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_558(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,558};
  data->modelData->realVarsData[105].attribute /* gENROE.PSIq variable */.start = data->simulationInfo->realParameter[259] /* gENROE.PSIq0 PARAM */;
    data->localData[0]->realVars[105] /* gENROE.PSIq variable */ = data->modelData->realVarsData[105].attribute /* gENROE.PSIq variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[105].info /* gENROE.PSIq */.name, (modelica_real) data->localData[0]->realVars[105] /* gENROE.PSIq variable */);
  TRACE_POP
}

/*
equation index: 559
type: SIMPLE_ASSIGN
$START.gENROE.PSId = gENROE.PSId0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_559(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,559};
  data->modelData->realVarsData[101].attribute /* gENROE.PSId variable */.start = data->simulationInfo->realParameter[250] /* gENROE.PSId0 PARAM */;
    data->localData[0]->realVars[101] /* gENROE.PSId variable */ = data->modelData->realVarsData[101].attribute /* gENROE.PSId variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[101].info /* gENROE.PSId */.name, (modelica_real) data->localData[0]->realVars[101] /* gENROE.PSId variable */);
  TRACE_POP
}

/*
equation index: 560
type: SIMPLE_ASSIGN
$START.gENROE.PSIkq = gENROE.PSIkq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_560(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,560};
  data->modelData->realVarsData[10].attribute /* gENROE.PSIkq STATE(1) */.start = data->simulationInfo->realParameter[252] /* gENROE.PSIkq0 PARAM */;
    data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */ = data->modelData->realVarsData[10].attribute /* gENROE.PSIkq STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[10].info /* gENROE.PSIkq */.name, (modelica_real) data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */);
  TRACE_POP
}

/*
equation index: 561
type: SIMPLE_ASSIGN
$START.gENROE.PSIkd = gENROE.PSIkd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_561(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,561};
  data->modelData->realVarsData[9].attribute /* gENROE.PSIkd STATE(1) */.start = data->simulationInfo->realParameter[251] /* gENROE.PSIkd0 PARAM */;
    data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */ = data->modelData->realVarsData[9].attribute /* gENROE.PSIkd STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[9].info /* gENROE.PSIkd */.name, (modelica_real) data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */);
  TRACE_POP
}

/*
equation index: 562
type: SIMPLE_ASSIGN
$START.gENROE.Epq = gENROE.Epq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_562(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,562};
  data->modelData->realVarsData[8].attribute /* gENROE.Epq STATE(1) */.start = data->simulationInfo->realParameter[231] /* gENROE.Epq0 PARAM */;
    data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ = data->modelData->realVarsData[8].attribute /* gENROE.Epq STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[8].info /* gENROE.Epq */.name, (modelica_real) data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */);
  TRACE_POP
}

/*
equation index: 563
type: SIMPLE_ASSIGN
$START.gENROE.Epd = gENROE.Epd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_563(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,563};
  data->modelData->realVarsData[7].attribute /* gENROE.Epd STATE(1) */.start = data->simulationInfo->realParameter[230] /* gENROE.Epd0 PARAM */;
    data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */ = data->modelData->realVarsData[7].attribute /* gENROE.Epd STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[7].info /* gENROE.Epd */.name, (modelica_real) data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */);
  TRACE_POP
}

/*
equation index: 564
type: SIMPLE_ASSIGN
$START.gENROE.uq = gENROE.uq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_564(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,564};
  data->modelData->realVarsData[114].attribute /* gENROE.uq variable */.start = data->simulationInfo->realParameter[305] /* gENROE.uq0 PARAM */;
    data->localData[0]->realVars[114] /* gENROE.uq variable */ = data->modelData->realVarsData[114].attribute /* gENROE.uq variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[114].info /* gENROE.uq */.name, (modelica_real) data->localData[0]->realVars[114] /* gENROE.uq variable */);
  TRACE_POP
}

/*
equation index: 565
type: SIMPLE_ASSIGN
$START.gENROE.ud = gENROE.ud0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_565(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,565};
  data->modelData->realVarsData[113].attribute /* gENROE.ud variable */.start = data->simulationInfo->realParameter[304] /* gENROE.ud0 PARAM */;
    data->localData[0]->realVars[113] /* gENROE.ud variable */ = data->modelData->realVarsData[113].attribute /* gENROE.ud variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[113].info /* gENROE.ud */.name, (modelica_real) data->localData[0]->realVars[113] /* gENROE.ud variable */);
  TRACE_POP
}

/*
equation index: 566
type: SIMPLE_ASSIGN
$START.gENROE.iq = gENROE.iq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_566(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,566};
  data->modelData->realVarsData[112].attribute /* gENROE.iq variable */.start = data->simulationInfo->realParameter[299] /* gENROE.iq0 PARAM */;
    data->localData[0]->realVars[112] /* gENROE.iq variable */ = data->modelData->realVarsData[112].attribute /* gENROE.iq variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[112].info /* gENROE.iq */.name, (modelica_real) data->localData[0]->realVars[112] /* gENROE.iq variable */);
  TRACE_POP
}

/*
equation index: 567
type: SIMPLE_ASSIGN
$START.gENROE.id = gENROE.id0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_567(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,567};
  data->modelData->realVarsData[111].attribute /* gENROE.id variable */.start = data->simulationInfo->realParameter[297] /* gENROE.id0 PARAM */;
    data->localData[0]->realVars[111] /* gENROE.id variable */ = data->modelData->realVarsData[111].attribute /* gENROE.id variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[111].info /* gENROE.id */.name, (modelica_real) data->localData[0]->realVars[111] /* gENROE.id variable */);
  TRACE_POP
}

/*
equation index: 568
type: SIMPLE_ASSIGN
$START.gENROE.Te = gENROE.pm0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_568(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,568};
  data->modelData->realVarsData[107].attribute /* gENROE.Te variable */.start = data->simulationInfo->realParameter[302] /* gENROE.pm0 PARAM */;
    data->localData[0]->realVars[107] /* gENROE.Te variable */ = data->modelData->realVarsData[107].attribute /* gENROE.Te variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[107].info /* gENROE.Te */.name, (modelica_real) data->localData[0]->realVars[107] /* gENROE.Te variable */);
  TRACE_POP
}

/*
equation index: 569
type: SIMPLE_ASSIGN
$START.gENROE.Q = gENROE.Q_0 / gENROE.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_569(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,569};
  data->modelData->realVarsData[106].attribute /* gENROE.Q variable */.start = DIVISION(data->simulationInfo->realParameter[261] /* gENROE.Q_0 PARAM */,data->simulationInfo->realParameter[267] /* gENROE.S_b PARAM */,"gENROE.S_b");
    data->localData[0]->realVars[106] /* gENROE.Q variable */ = data->modelData->realVarsData[106].attribute /* gENROE.Q variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[106].info /* gENROE.Q */.name, (modelica_real) data->localData[0]->realVars[106] /* gENROE.Q variable */);
  TRACE_POP
}

/*
equation index: 570
type: SIMPLE_ASSIGN
$START.gENROE.P = gENROE.P_0 / gENROE.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_570(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,570};
  data->modelData->realVarsData[99].attribute /* gENROE.P variable */.start = DIVISION(data->simulationInfo->realParameter[260] /* gENROE.P_0 PARAM */,data->simulationInfo->realParameter[267] /* gENROE.S_b PARAM */,"gENROE.S_b");
    data->localData[0]->realVars[99] /* gENROE.P variable */ = data->modelData->realVarsData[99].attribute /* gENROE.P variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[99].info /* gENROE.P */.name, (modelica_real) data->localData[0]->realVars[99] /* gENROE.P variable */);
  TRACE_POP
}

/*
equation index: 571
type: SIMPLE_ASSIGN
$START.gENROE.anglei = atan2(gENROE.ii0, gENROE.ir0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_571(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,571};
  data->modelData->realVarsData[109].attribute /* gENROE.anglei variable */.start = atan2(data->simulationInfo->realParameter[298] /* gENROE.ii0 PARAM */, data->simulationInfo->realParameter[300] /* gENROE.ir0 PARAM */);
    data->localData[0]->realVars[109] /* gENROE.anglei variable */ = data->modelData->realVarsData[109].attribute /* gENROE.anglei variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[109].info /* gENROE.anglei */.name, (modelica_real) data->localData[0]->realVars[109] /* gENROE.anglei variable */);
  TRACE_POP
}

/*
equation index: 572
type: SIMPLE_ASSIGN
$START.gENROE.I = sqrt(gENROE.ir0 ^ 2.0 + gENROE.ii0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_572(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,572};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->simulationInfo->realParameter[300] /* gENROE.ir0 PARAM */;
  tmp1 = data->simulationInfo->realParameter[298] /* gENROE.ii0 PARAM */;
  data->modelData->realVarsData[98].attribute /* gENROE.I variable */.start = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
    data->localData[0]->realVars[98] /* gENROE.I variable */ = data->modelData->realVarsData[98].attribute /* gENROE.I variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[98].info /* gENROE.I */.name, (modelica_real) data->localData[0]->realVars[98] /* gENROE.I variable */);
  TRACE_POP
}

/*
equation index: 573
type: SIMPLE_ASSIGN
$START.gENROE.anglev = gENROE.angle_0rad
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_573(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,573};
  data->modelData->realVarsData[110].attribute /* gENROE.anglev variable */.start = data->simulationInfo->realParameter[291] /* gENROE.angle_0rad PARAM */;
    data->localData[0]->realVars[110] /* gENROE.anglev variable */ = data->modelData->realVarsData[110].attribute /* gENROE.anglev variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[110].info /* gENROE.anglev */.name, (modelica_real) data->localData[0]->realVars[110] /* gENROE.anglev variable */);
  TRACE_POP
}

/*
equation index: 574
type: SIMPLE_ASSIGN
$START.gENROE.delta = gENROE.delta0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_574(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,574};
  data->modelData->realVarsData[11].attribute /* gENROE.delta STATE(1) */.start = data->simulationInfo->realParameter[293] /* gENROE.delta0 PARAM */;
    data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */ = data->modelData->realVarsData[11].attribute /* gENROE.delta STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[11].info /* gENROE.delta */.name, (modelica_real) data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */);
  TRACE_POP
}

/*
equation index: 575
type: SIMPLE_ASSIGN
$START.gENROE.PELEC = gENROE.p0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_575(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,575};
  data->modelData->realVarsData[100].attribute /* gENROE.PELEC variable */.start = data->simulationInfo->realParameter[301] /* gENROE.p0 PARAM */;
    data->localData[0]->realVars[100] /* gENROE.PELEC variable */ = data->modelData->realVarsData[100].attribute /* gENROE.PELEC variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[100].info /* gENROE.PELEC */.name, (modelica_real) data->localData[0]->realVars[100] /* gENROE.PELEC variable */);
  TRACE_POP
}

/*
equation index: 576
type: SIMPLE_ASSIGN
$START.FAULT.angle = FAULT.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_576(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,576};
  data->modelData->realVarsData[33].attribute /* FAULT.angle variable */.start = data->simulationInfo->realParameter[4] /* FAULT.angle_0 PARAM */;
    data->localData[0]->realVars[33] /* FAULT.angle variable */ = data->modelData->realVarsData[33].attribute /* FAULT.angle variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[33].info /* FAULT.angle */.name, (modelica_real) data->localData[0]->realVars[33] /* FAULT.angle variable */);
  TRACE_POP
}

/*
equation index: 577
type: SIMPLE_ASSIGN
$START.FAULT.V = FAULT.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_577(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,577};
  data->modelData->realVarsData[32].attribute /* FAULT.V variable */.start = data->simulationInfo->realParameter[7] /* FAULT.v_0 PARAM */;
    data->localData[0]->realVars[32] /* FAULT.V variable */ = data->modelData->realVarsData[32].attribute /* FAULT.V variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[32].info /* FAULT.V */.name, (modelica_real) data->localData[0]->realVars[32] /* FAULT.V variable */);
  TRACE_POP
}

/*
equation index: 578
type: SIMPLE_ASSIGN
$START.GEN2.angle = GEN2.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_578(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,578};
  data->modelData->realVarsData[41].attribute /* GEN2.angle variable */.start = data->simulationInfo->realParameter[20] /* GEN2.angle_0 PARAM */;
    data->localData[0]->realVars[41] /* GEN2.angle variable */ = data->modelData->realVarsData[41].attribute /* GEN2.angle variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[41].info /* GEN2.angle */.name, (modelica_real) data->localData[0]->realVars[41] /* GEN2.angle variable */);
  TRACE_POP
}

/*
equation index: 579
type: SIMPLE_ASSIGN
$START.GEN2.V = gENCLS.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_579(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,579};
  data->modelData->realVarsData[40].attribute /* GEN2.V variable */.start = data->simulationInfo->realParameter[219] /* gENCLS.v_0 PARAM */;
    data->localData[0]->realVars[40] /* GEN2.V variable */ = data->modelData->realVarsData[40].attribute /* GEN2.V variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[40].info /* GEN2.V */.name, (modelica_real) data->localData[0]->realVars[40] /* GEN2.V variable */);
  TRACE_POP
}

/*
equation index: 580
type: SIMPLE_ASSIGN
$START.LOAD.angle = LOAD.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_580(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,580};
  data->modelData->realVarsData[45].attribute /* LOAD.angle variable */.start = data->simulationInfo->realParameter[28] /* LOAD.angle_0 PARAM */;
    data->localData[0]->realVars[45] /* LOAD.angle variable */ = data->modelData->realVarsData[45].attribute /* LOAD.angle variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[45].info /* LOAD.angle */.name, (modelica_real) data->localData[0]->realVars[45] /* LOAD.angle variable */);
  TRACE_POP
}

/*
equation index: 581
type: SIMPLE_ASSIGN
$START.GEN1.angle = GEN1.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_581(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,581};
  data->modelData->realVarsData[37].attribute /* GEN1.angle variable */.start = data->simulationInfo->realParameter[12] /* GEN1.angle_0 PARAM */;
    data->localData[0]->realVars[37] /* GEN1.angle variable */ = data->modelData->realVarsData[37].attribute /* GEN1.angle variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[37].info /* GEN1.angle */.name, (modelica_real) data->localData[0]->realVars[37] /* GEN1.angle variable */);
  TRACE_POP
}

/*
equation index: 582
type: SIMPLE_ASSIGN
$START.constantLoad.v = constantLoad.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_582(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,582};
  data->modelData->realVarsData[55].attribute /* constantLoad.v variable */.start = data->simulationInfo->realParameter[72] /* constantLoad.v_0 PARAM */;
    data->localData[0]->realVars[55] /* constantLoad.v variable */ = data->modelData->realVarsData[55].attribute /* constantLoad.v variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[55].info /* constantLoad.v */.name, (modelica_real) data->localData[0]->realVars[55] /* constantLoad.v variable */);
  TRACE_POP
}

/*
equation index: 583
type: SIMPLE_ASSIGN
$START.constantLoad.angle = constantLoad.angle_0rad
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_583(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,583};
  data->modelData->realVarsData[50].attribute /* constantLoad.angle variable */.start = data->simulationInfo->realParameter[58] /* constantLoad.angle_0rad PARAM */;
    data->localData[0]->realVars[50] /* constantLoad.angle variable */ = data->modelData->realVarsData[50].attribute /* constantLoad.angle variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[50].info /* constantLoad.angle */.name, (modelica_real) data->localData[0]->realVars[50] /* constantLoad.angle variable */);
  TRACE_POP
}

/*
equation index: 584
type: SIMPLE_ASSIGN
$START.constantLoad.p.ii = constantLoad.ii0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_584(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,584};
  data->modelData->realVarsData[53].attribute /* constantLoad.p.ii variable */.start = data->simulationInfo->realParameter[67] /* constantLoad.ii0 PARAM */;
    data->localData[0]->realVars[53] /* constantLoad.p.ii variable */ = data->modelData->realVarsData[53].attribute /* constantLoad.p.ii variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[53].info /* constantLoad.p.ii */.name, (modelica_real) data->localData[0]->realVars[53] /* constantLoad.p.ii variable */);
  TRACE_POP
}

/*
equation index: 585
type: SIMPLE_ASSIGN
$START.constantLoad.p.ir = constantLoad.ir0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_585(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,585};
  data->modelData->realVarsData[54].attribute /* constantLoad.p.ir variable */.start = data->simulationInfo->realParameter[68] /* constantLoad.ir0 PARAM */;
    data->localData[0]->realVars[54] /* constantLoad.p.ir variable */ = data->modelData->realVarsData[54].attribute /* constantLoad.p.ir variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[54].info /* constantLoad.p.ir */.name, (modelica_real) data->localData[0]->realVars[54] /* constantLoad.p.ir variable */);
  TRACE_POP
}

/*
equation index: 586
type: SIMPLE_ASSIGN
$START.gENCLS.Q = gENCLS.Q_0 / gENCLS.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_586(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,586};
  data->modelData->realVarsData[88].attribute /* gENCLS.Q variable */.start = DIVISION(data->simulationInfo->realParameter[204] /* gENCLS.Q_0 PARAM */,data->simulationInfo->realParameter[206] /* gENCLS.S_b PARAM */,"gENCLS.S_b");
    data->localData[0]->realVars[88] /* gENCLS.Q variable */ = data->modelData->realVarsData[88].attribute /* gENCLS.Q variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[88].info /* gENCLS.Q */.name, (modelica_real) data->localData[0]->realVars[88] /* gENCLS.Q variable */);
  TRACE_POP
}

/*
equation index: 587
type: SIMPLE_ASSIGN
$START.gENCLS.P = gENCLS.P_0 / gENCLS.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_587(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,587};
  data->modelData->realVarsData[87].attribute /* gENCLS.P variable */.start = DIVISION(data->simulationInfo->realParameter[203] /* gENCLS.P_0 PARAM */,data->simulationInfo->realParameter[206] /* gENCLS.S_b PARAM */,"gENCLS.S_b");
    data->localData[0]->realVars[87] /* gENCLS.P variable */ = data->modelData->realVarsData[87].attribute /* gENCLS.P variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[87].info /* gENCLS.P */.name, (modelica_real) data->localData[0]->realVars[87] /* gENCLS.P variable */);
  TRACE_POP
}

/*
equation index: 588
type: SIMPLE_ASSIGN
$START.gENCLS.iq = gENCLS.iq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_588(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,588};
  data->modelData->realVarsData[92].attribute /* gENCLS.iq variable */.start = data->simulationInfo->realParameter[215] /* gENCLS.iq0 PARAM */;
    data->localData[0]->realVars[92] /* gENCLS.iq variable */ = data->modelData->realVarsData[92].attribute /* gENCLS.iq variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[92].info /* gENCLS.iq */.name, (modelica_real) data->localData[0]->realVars[92] /* gENCLS.iq variable */);
  TRACE_POP
}

/*
equation index: 589
type: SIMPLE_ASSIGN
$START.gENCLS.id = gENCLS.id0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_589(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,589};
  data->modelData->realVarsData[91].attribute /* gENCLS.id variable */.start = data->simulationInfo->realParameter[213] /* gENCLS.id0 PARAM */;
    data->localData[0]->realVars[91] /* gENCLS.id variable */ = data->modelData->realVarsData[91].attribute /* gENCLS.id variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[91].info /* gENCLS.id */.name, (modelica_real) data->localData[0]->realVars[91] /* gENCLS.id variable */);
  TRACE_POP
}

/*
equation index: 590
type: SIMPLE_ASSIGN
$START.gENCLS.vq = gENCLS.vq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_590(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,590};
  data->modelData->realVarsData[97].attribute /* gENCLS.vq variable */.start = data->simulationInfo->realParameter[223] /* gENCLS.vq0 PARAM */;
    data->localData[0]->realVars[97] /* gENCLS.vq variable */ = data->modelData->realVarsData[97].attribute /* gENCLS.vq variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[97].info /* gENCLS.vq */.name, (modelica_real) data->localData[0]->realVars[97] /* gENCLS.vq variable */);
  TRACE_POP
}

/*
equation index: 591
type: SIMPLE_ASSIGN
$START.gENCLS.vd = gENCLS.vd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_591(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,591};
  data->modelData->realVarsData[96].attribute /* gENCLS.vd variable */.start = data->simulationInfo->realParameter[220] /* gENCLS.vd0 PARAM */;
    data->localData[0]->realVars[96] /* gENCLS.vd variable */ = data->modelData->realVarsData[96].attribute /* gENCLS.vd variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[96].info /* gENCLS.vd */.name, (modelica_real) data->localData[0]->realVars[96] /* gENCLS.vd variable */);
  TRACE_POP
}

/*
equation index: 592
type: SIMPLE_ASSIGN
$START.gENCLS.eq = gENCLS.vf0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_592(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,592};
  data->modelData->realVarsData[6].attribute /* gENCLS.eq STATE(1) */.start = data->simulationInfo->realParameter[221] /* gENCLS.vf0 PARAM */;
    data->localData[0]->realVars[6] /* gENCLS.eq STATE(1) */ = data->modelData->realVarsData[6].attribute /* gENCLS.eq STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[6].info /* gENCLS.eq */.name, (modelica_real) data->localData[0]->realVars[6] /* gENCLS.eq STATE(1) */);
  TRACE_POP
}

/*
equation index: 593
type: SIMPLE_ASSIGN
$START.gENCLS.anglev = gENCLS.angle_0rad
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_593(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,593};
  data->modelData->realVarsData[90].attribute /* gENCLS.anglev variable */.start = data->simulationInfo->realParameter[210] /* gENCLS.angle_0rad PARAM */;
    data->localData[0]->realVars[90] /* gENCLS.anglev variable */ = data->modelData->realVarsData[90].attribute /* gENCLS.anglev variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[90].info /* gENCLS.anglev */.name, (modelica_real) data->localData[0]->realVars[90] /* gENCLS.anglev variable */);
  TRACE_POP
}

/*
equation index: 594
type: SIMPLE_ASSIGN
$START.gENCLS.delta = gENCLS.delta0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_594(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,594};
  data->modelData->realVarsData[5].attribute /* gENCLS.delta STATE(1) */.start = data->simulationInfo->realParameter[211] /* gENCLS.delta0 PARAM */;
    data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */ = data->modelData->realVarsData[5].attribute /* gENCLS.delta STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[5].info /* gENCLS.delta */.name, (modelica_real) data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */);
  TRACE_POP
}

/*
equation index: 595
type: SIMPLE_ASSIGN
$START.gENCLS.p.ii = gENCLS.ii0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_595(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,595};
  data->modelData->realVarsData[94].attribute /* gENCLS.p.ii variable */.start = data->simulationInfo->realParameter[214] /* gENCLS.ii0 PARAM */;
    data->localData[0]->realVars[94] /* gENCLS.p.ii variable */ = data->modelData->realVarsData[94].attribute /* gENCLS.p.ii variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[94].info /* gENCLS.p.ii */.name, (modelica_real) data->localData[0]->realVars[94] /* gENCLS.p.ii variable */);
  TRACE_POP
}

/*
equation index: 596
type: SIMPLE_ASSIGN
$START.gENCLS.p.ir = gENCLS.ir0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_596(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,596};
  data->modelData->realVarsData[95].attribute /* gENCLS.p.ir variable */.start = data->simulationInfo->realParameter[216] /* gENCLS.ir0 PARAM */;
    data->localData[0]->realVars[95] /* gENCLS.p.ir variable */ = data->modelData->realVarsData[95].attribute /* gENCLS.p.ir variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[95].info /* gENCLS.p.ir */.name, (modelica_real) data->localData[0]->realVars[95] /* gENCLS.p.ir variable */);
  TRACE_POP
}

/*
equation index: 597
type: SIMPLE_ASSIGN
$START.pwLine3.vr.im = FAULT.v_0 * sin(FAULT.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_597(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,597};
  data->modelData->realVarsData[147].attribute /* pwLine3.vr.im variable */.start = (data->simulationInfo->realParameter[7] /* FAULT.v_0 PARAM */) * (sin(data->simulationInfo->realParameter[5] /* FAULT.angle_0rad PARAM */));
    data->localData[0]->realVars[147] /* pwLine3.vr.im variable */ = data->modelData->realVarsData[147].attribute /* pwLine3.vr.im variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[147].info /* pwLine3.vr.im */.name, (modelica_real) data->localData[0]->realVars[147] /* pwLine3.vr.im variable */);
  TRACE_POP
}

/*
equation index: 598
type: SIMPLE_ASSIGN
$START.pwLine3.vr.re = FAULT.v_0 * cos(FAULT.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_598(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,598};
  data->modelData->realVarsData[148].attribute /* pwLine3.vr.re variable */.start = (data->simulationInfo->realParameter[7] /* FAULT.v_0 PARAM */) * (cos(data->simulationInfo->realParameter[5] /* FAULT.angle_0rad PARAM */));
    data->localData[0]->realVars[148] /* pwLine3.vr.re variable */ = data->modelData->realVarsData[148].attribute /* pwLine3.vr.re variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[148].info /* pwLine3.vr.re */.name, (modelica_real) data->localData[0]->realVars[148] /* pwLine3.vr.re variable */);
  TRACE_POP
}

/*
equation index: 599
type: SIMPLE_ASSIGN
$START.pwLine1.vr.im = gENCLS.vi0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_599(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,599};
  data->modelData->realVarsData[135].attribute /* pwLine1.vr.im variable */.start = data->simulationInfo->realParameter[222] /* gENCLS.vi0 PARAM */;
    data->localData[0]->realVars[135] /* pwLine1.vr.im variable */ = data->modelData->realVarsData[135].attribute /* pwLine1.vr.im variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[135].info /* pwLine1.vr.im */.name, (modelica_real) data->localData[0]->realVars[135] /* pwLine1.vr.im variable */);
  TRACE_POP
}

/*
equation index: 600
type: SIMPLE_ASSIGN
$START.pwLine1.vr.re = gENCLS.vr0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_600(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,600};
  data->modelData->realVarsData[136].attribute /* pwLine1.vr.re variable */.start = data->simulationInfo->realParameter[224] /* gENCLS.vr0 PARAM */;
    data->localData[0]->realVars[136] /* pwLine1.vr.re variable */ = data->modelData->realVarsData[136].attribute /* pwLine1.vr.re variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[136].info /* pwLine1.vr.re */.name, (modelica_real) data->localData[0]->realVars[136] /* pwLine1.vr.re variable */);
  TRACE_POP
}

/*
equation index: 601
type: SIMPLE_ASSIGN
$START.pwLine1.vs.im = constantLoad.vi0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_601(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,601};
  data->modelData->realVarsData[137].attribute /* pwLine1.vs.im variable */.start = data->simulationInfo->realParameter[73] /* constantLoad.vi0 PARAM */;
    data->localData[0]->realVars[137] /* pwLine1.vs.im variable */ = data->modelData->realVarsData[137].attribute /* pwLine1.vs.im variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[137].info /* pwLine1.vs.im */.name, (modelica_real) data->localData[0]->realVars[137] /* pwLine1.vs.im variable */);
  TRACE_POP
}

/*
equation index: 602
type: SIMPLE_ASSIGN
$START.pwLine1.vs.re = constantLoad.vr0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_602(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,602};
  data->modelData->realVarsData[138].attribute /* pwLine1.vs.re variable */.start = data->simulationInfo->realParameter[74] /* constantLoad.vr0 PARAM */;
    data->localData[0]->realVars[138] /* pwLine1.vs.re variable */ = data->modelData->realVarsData[138].attribute /* pwLine1.vs.re variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[138].info /* pwLine1.vs.re */.name, (modelica_real) data->localData[0]->realVars[138] /* pwLine1.vs.re variable */);
  TRACE_POP
}

/*
equation index: 603
type: SIMPLE_ASSIGN
$START.pwLine.is.im = -gENROE.ii0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_603(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,603};
  data->modelData->realVarsData[123].attribute /* pwLine.is.im variable */.start = (-data->simulationInfo->realParameter[298] /* gENROE.ii0 PARAM */);
    data->localData[0]->realVars[123] /* pwLine.is.im variable */ = data->modelData->realVarsData[123].attribute /* pwLine.is.im variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[123].info /* pwLine.is.im */.name, (modelica_real) data->localData[0]->realVars[123] /* pwLine.is.im variable */);
  TRACE_POP
}

/*
equation index: 604
type: SIMPLE_ASSIGN
$START.pwLine.is.re = -gENROE.ir0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_604(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,604};
  data->modelData->realVarsData[124].attribute /* pwLine.is.re variable */.start = (-data->simulationInfo->realParameter[300] /* gENROE.ir0 PARAM */);
    data->localData[0]->realVars[124] /* pwLine.is.re variable */ = data->modelData->realVarsData[124].attribute /* pwLine.is.re variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[124].info /* pwLine.is.re */.name, (modelica_real) data->localData[0]->realVars[124] /* pwLine.is.re variable */);
  TRACE_POP
}

/*
equation index: 605
type: SIMPLE_ASSIGN
$START.pwLine.vs.im = gENROE.vi0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_605(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,605};
  data->modelData->realVarsData[125].attribute /* pwLine.vs.im variable */.start = data->simulationInfo->realParameter[307] /* gENROE.vi0 PARAM */;
    data->localData[0]->realVars[125] /* pwLine.vs.im variable */ = data->modelData->realVarsData[125].attribute /* pwLine.vs.im variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[125].info /* pwLine.vs.im */.name, (modelica_real) data->localData[0]->realVars[125] /* pwLine.vs.im variable */);
  TRACE_POP
}

/*
equation index: 606
type: SIMPLE_ASSIGN
$START.pwLine.vs.re = gENROE.vr0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_606(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,606};
  data->modelData->realVarsData[126].attribute /* pwLine.vs.re variable */.start = data->simulationInfo->realParameter[308] /* gENROE.vr0 PARAM */;
    data->localData[0]->realVars[126] /* pwLine.vs.re variable */ = data->modelData->realVarsData[126].attribute /* pwLine.vs.re variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[126].info /* pwLine.vs.re */.name, (modelica_real) data->localData[0]->realVars[126] /* pwLine.vs.re variable */);
  TRACE_POP
}

/*
equation index: 607
type: SIMPLE_ASSIGN
$START.GEN1.V = GEN1.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_607(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,607};
  data->modelData->realVarsData[36].attribute /* GEN1.V variable */.start = data->simulationInfo->realParameter[15] /* GEN1.v_0 PARAM */;
    data->localData[0]->realVars[36] /* GEN1.V variable */ = data->modelData->realVarsData[36].attribute /* GEN1.V variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[36].info /* GEN1.V */.name, (modelica_real) data->localData[0]->realVars[36] /* GEN1.V variable */);
  TRACE_POP
}

/*
equation index: 608
type: SIMPLE_ASSIGN
$START.gENCLS.V = gENCLS.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_608(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,608};
  data->modelData->realVarsData[89].attribute /* gENCLS.V variable */.start = data->simulationInfo->realParameter[219] /* gENCLS.v_0 PARAM */;
    data->localData[0]->realVars[89] /* gENCLS.V variable */ = data->modelData->realVarsData[89].attribute /* gENCLS.V variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[89].info /* gENCLS.V */.name, (modelica_real) data->localData[0]->realVars[89] /* gENCLS.V variable */);
  TRACE_POP
}

/*
equation index: 609
type: SIMPLE_ASSIGN
$START.LOAD.V = LOAD.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_609(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,609};
  data->modelData->realVarsData[44].attribute /* LOAD.V variable */.start = data->simulationInfo->realParameter[31] /* LOAD.v_0 PARAM */;
    data->localData[0]->realVars[44] /* LOAD.V variable */ = data->modelData->realVarsData[44].attribute /* LOAD.V variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[44].info /* LOAD.V */.name, (modelica_real) data->localData[0]->realVars[44] /* LOAD.V variable */);
  TRACE_POP
}
OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_updateBoundVariableAttributes(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  /* min ******************************************************** */
  
  infoStreamPrint(LOG_INIT, 1, "updating min-values");
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  /* max ******************************************************** */
  
  infoStreamPrint(LOG_INIT, 1, "updating max-values");
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  /* nominal **************************************************** */
  
  infoStreamPrint(LOG_INIT, 1, "updating nominal-values");
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  /* start ****************************************************** */
  infoStreamPrint(LOG_INIT, 1, "updating primary start-values");
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_553(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_554(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_555(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_556(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_557(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_558(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_559(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_560(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_561(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_562(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_563(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_564(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_565(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_566(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_567(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_568(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_569(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_570(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_571(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_572(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_573(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_574(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_575(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_576(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_577(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_578(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_579(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_580(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_581(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_582(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_583(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_584(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_585(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_586(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_587(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_588(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_589(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_590(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_591(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_592(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_593(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_594(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_595(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_596(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_597(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_598(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_599(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_600(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_601(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_602(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_603(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_604(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_605(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_606(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_607(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_608(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_609(data, threadData);
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  TRACE_POP
  return 0;
}

void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_updateBoundParameters_0(DATA *data, threadData_t *threadData);

/*
equation index: 610
type: SIMPLE_ASSIGN
gENROE.Xpp = gENROE.Xppd
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_610(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,610};
  data->simulationInfo->realParameter[278] /* gENROE.Xpp PARAM */ = data->simulationInfo->realParameter[279] /* gENROE.Xppd PARAM */;
  TRACE_POP
}

/*
equation index: 613
type: SIMPLE_ASSIGN
gENROE.abs_PSIpp0 = (gENROE.PSIpp0.re ^ 2.0 + gENROE.PSIpp0.im ^ 2.0) ^ 0.5
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_613(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,613};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  tmp0 = data->simulationInfo->realParameter[254] /* gENROE.PSIpp0.re PARAM */;
  tmp1 = data->simulationInfo->realParameter[253] /* gENROE.PSIpp0.im PARAM */;
  tmp2 = (tmp0 * tmp0) + (tmp1 * tmp1);
  if(!(tmp2 >= 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of sqrt(gENROE.PSIpp0.re ^ 2.0 + gENROE.PSIpp0.im ^ 2.0) was %g should be >= 0", tmp2);
  }
  data->simulationInfo->realParameter[286] /* gENROE.abs_PSIpp0 PARAM */ = sqrt(tmp2);
  TRACE_POP
}

/*
equation index: 614
type: SIMPLE_ASSIGN
gENROE.dsat = OpenIPSL.NonElectrical.Functions.SE_exp(gENROE.abs_PSIpp0, gENROE.S10, gENROE.S12, 1.0, 1.2)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_614(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,614};
  data->simulationInfo->realParameter[294] /* gENROE.dsat PARAM */ = omc_OpenIPSL_NonElectrical_Functions_SE__exp(threadData, data->simulationInfo->realParameter[286] /* gENROE.abs_PSIpp0 PARAM */, data->simulationInfo->realParameter[265] /* gENROE.S10 PARAM */, data->simulationInfo->realParameter[266] /* gENROE.S12 PARAM */, 1.0, 1.2);
  TRACE_POP
}

/*
equation index: 616
type: SIMPLE_ASSIGN
gENROE.PSIppd0 = gENROE.PSIpp0_dq.re
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_616(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,616};
  data->simulationInfo->realParameter[257] /* gENROE.PSIppd0 PARAM */ = data->simulationInfo->realParameter[256] /* gENROE.PSIpp0_dq.re PARAM */;
  TRACE_POP
}

/*
equation index: 618
type: SIMPLE_ASSIGN
gENROE.id0 = gENROE.I_dq.im
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_618(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,618};
  data->simulationInfo->realParameter[297] /* gENROE.id0 PARAM */ = data->simulationInfo->realParameter[233] /* gENROE.I_dq.im PARAM */;
  TRACE_POP
}

/*
equation index: 619
type: SIMPLE_ASSIGN
gENROE.efd0 = gENROE.PSIppd0 * (1.0 + gENROE.dsat) + gENROE.id0 * (gENROE.Xd - gENROE.Xpp)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_619(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,619};
  data->simulationInfo->realParameter[295] /* gENROE.efd0 PARAM */ = (data->simulationInfo->realParameter[257] /* gENROE.PSIppd0 PARAM */) * (1.0 + data->simulationInfo->realParameter[294] /* gENROE.dsat PARAM */) + (data->simulationInfo->realParameter[297] /* gENROE.id0 PARAM */) * (data->simulationInfo->realParameter[275] /* gENROE.Xd PARAM */ - data->simulationInfo->realParameter[278] /* gENROE.Xpp PARAM */);
  TRACE_POP
}

/*
equation index: 620
type: SIMPLE_ASSIGN
gENROE.EFD0 = gENROE.efd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_620(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,620};
  data->simulationInfo->realParameter[229] /* gENROE.EFD0 PARAM */ = data->simulationInfo->realParameter[295] /* gENROE.efd0 PARAM */;
  TRACE_POP
}

/*
equation index: 621
type: SIMPLE_ASSIGN
eXAC2.imLimitedSimpleLag.T = eXAC2.T_A
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_621(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,621};
  data->simulationInfo->realParameter[150] /* eXAC2.imLimitedSimpleLag.T PARAM */ = data->simulationInfo->realParameter[95] /* eXAC2.T_A PARAM */;
  TRACE_POP
}

/*
equation index: 622
type: SIMPLE_ASSIGN
eXAC2.imLimitedSimpleLag.const.y = eXAC2.imLimitedSimpleLag.T
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_622(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,622};
  data->simulationInfo->realParameter[152] /* eXAC2.imLimitedSimpleLag.const.y PARAM */ = data->simulationInfo->realParameter[150] /* eXAC2.imLimitedSimpleLag.T PARAM */;
  TRACE_POP
}

/*
equation index: 623
type: SIMPLE_ASSIGN
eXAC2.leadLag.T1 = eXAC2.T_C
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_623(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,623};
  data->simulationInfo->realParameter[157] /* eXAC2.leadLag.T1 PARAM */ = data->simulationInfo->realParameter[97] /* eXAC2.T_C PARAM */;
  TRACE_POP
}

/*
equation index: 624
type: SIMPLE_ASSIGN
eXAC2.leadLag.par1.y = eXAC2.leadLag.T1
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_624(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,624};
  data->simulationInfo->realParameter[170] /* eXAC2.leadLag.par1.y PARAM */ = data->simulationInfo->realParameter[157] /* eXAC2.leadLag.T1 PARAM */;
  TRACE_POP
}

/*
equation index: 625
type: SIMPLE_ASSIGN
eXAC2.leadLag.T2 = eXAC2.T_B
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_625(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,625};
  data->simulationInfo->realParameter[158] /* eXAC2.leadLag.T2 PARAM */ = data->simulationInfo->realParameter[96] /* eXAC2.T_B PARAM */;
  TRACE_POP
}

/*
equation index: 626
type: SIMPLE_ASSIGN
eXAC2.leadLag.par2.y = eXAC2.leadLag.T2
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_626(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,626};
  data->simulationInfo->realParameter[171] /* eXAC2.leadLag.par2.y PARAM */ = data->simulationInfo->realParameter[158] /* eXAC2.leadLag.T2 PARAM */;
  TRACE_POP
}

/*
equation index: 627
type: SIMPLE_ASSIGN
eXAC2.TransducerDelay.T = eXAC2.T_R
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_627(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,627};
  data->simulationInfo->realParameter[102] /* eXAC2.TransducerDelay.T PARAM */ = data->simulationInfo->realParameter[100] /* eXAC2.T_R PARAM */;
  TRACE_POP
}

/*
equation index: 628
type: SIMPLE_ASSIGN
eXAC2.TransducerDelay.const.y = eXAC2.TransducerDelay.T
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_628(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,628};
  data->simulationInfo->realParameter[104] /* eXAC2.TransducerDelay.const.y PARAM */ = data->simulationInfo->realParameter[102] /* eXAC2.TransducerDelay.T PARAM */;
  TRACE_POP
}

/*
equation index: 629
type: SIMPLE_ASSIGN
eXAC2.Vref1.k = eXAC2.V_LR
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_629(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,629};
  data->simulationInfo->realParameter[121] /* eXAC2.Vref1.k PARAM */ = data->simulationInfo->realParameter[115] /* eXAC2.V_LR PARAM */;
  TRACE_POP
}

/*
equation index: 630
type: SIMPLE_ASSIGN
eXAC2.add3.u2 = eXAC2.Vref1.k
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_630(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,630};
  data->simulationInfo->realParameter[128] /* eXAC2.add3.u2 PARAM */ = data->simulationInfo->realParameter[121] /* eXAC2.Vref1.k PARAM */;
  TRACE_POP
}

/*
equation index: 631
type: SIMPLE_ASSIGN
eXAC2.Vref1.y = eXAC2.Vref1.k
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_631(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,631};
  data->simulationInfo->realParameter[122] /* eXAC2.Vref1.y PARAM */ = data->simulationInfo->realParameter[121] /* eXAC2.Vref1.k PARAM */;
  TRACE_POP
}

/*
equation index: 632
type: SIMPLE_ASSIGN
gENROE.p0 = gENROE.P_0 / gENROE.M_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_632(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,632};
  data->simulationInfo->realParameter[301] /* gENROE.p0 PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[260] /* gENROE.P_0 PARAM */,data->simulationInfo->realParameter[247] /* gENROE.M_b PARAM */,"gENROE.M_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 634
type: SIMPLE_ASSIGN
gENROE.iq0 = gENROE.I_dq.re
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_634(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,634};
  data->simulationInfo->realParameter[299] /* gENROE.iq0 PARAM */ = data->simulationInfo->realParameter[234] /* gENROE.I_dq.re PARAM */;
  TRACE_POP
}

/*
equation index: 635
type: SIMPLE_ASSIGN
gENROE.pm0 = gENROE.p0 + gENROE.R_a * (gENROE.iq0 ^ 2.0 + gENROE.id0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_635(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,635};
  modelica_real tmp3;
  modelica_real tmp4;
  tmp3 = data->simulationInfo->realParameter[299] /* gENROE.iq0 PARAM */;
  tmp4 = data->simulationInfo->realParameter[297] /* gENROE.id0 PARAM */;
  data->simulationInfo->realParameter[302] /* gENROE.pm0 PARAM */ = data->simulationInfo->realParameter[301] /* gENROE.p0 PARAM */ + (data->simulationInfo->realParameter[262] /* gENROE.R_a PARAM */) * ((tmp3 * tmp3) + (tmp4 * tmp4));
  TRACE_POP
}

/*
equation index: 636
type: SIMPLE_ASSIGN
gENROE.PMECH = gENROE.pm0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_636(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,636};
  data->simulationInfo->realParameter[248] /* gENROE.PMECH PARAM */ = data->simulationInfo->realParameter[302] /* gENROE.pm0 PARAM */;
  TRACE_POP
}

/*
equation index: 637
type: SIMPLE_ASSIGN
gENROE.PMECH0 = gENROE.pm0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_637(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,637};
  data->simulationInfo->realParameter[249] /* gENROE.PMECH0 PARAM */ = data->simulationInfo->realParameter[302] /* gENROE.pm0 PARAM */;
  TRACE_POP
}

/*
equation index: 638
type: SIMPLE_ASSIGN
eXAC2.add3_2.u3 = zero.k
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_638(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,638};
  data->simulationInfo->realParameter[137] /* eXAC2.add3_2.u3 PARAM */ = data->simulationInfo->realParameter[358] /* zero.k PARAM */;
  TRACE_POP
}

/*
equation index: 639
type: SIMPLE_ASSIGN
eXAC2.add3_2.u1 = zero.k
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_639(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,639};
  data->simulationInfo->realParameter[135] /* eXAC2.add3_2.u1 PARAM */ = data->simulationInfo->realParameter[358] /* zero.k PARAM */;
  TRACE_POP
}

/*
equation index: 640
type: SIMPLE_ASSIGN
eXAC2.VOTHSG = zero.k
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_640(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,640};
  data->simulationInfo->realParameter[110] /* eXAC2.VOTHSG PARAM */ = data->simulationInfo->realParameter[358] /* zero.k PARAM */;
  TRACE_POP
}

/*
equation index: 641
type: SIMPLE_ASSIGN
eXAC2.add3_2.u2 = zero.k
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_641(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,641};
  data->simulationInfo->realParameter[136] /* eXAC2.add3_2.u2 PARAM */ = data->simulationInfo->realParameter[358] /* zero.k PARAM */;
  TRACE_POP
}

/*
equation index: 642
type: SIMPLE_ASSIGN
eXAC2.VUEL = zero.k
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_642(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,642};
  data->simulationInfo->realParameter[112] /* eXAC2.VUEL PARAM */ = data->simulationInfo->realParameter[358] /* zero.k PARAM */;
  TRACE_POP
}

/*
equation index: 643
type: SIMPLE_ASSIGN
eXAC2.VOEL = zero.k
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_643(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,643};
  data->simulationInfo->realParameter[109] /* eXAC2.VOEL PARAM */ = data->simulationInfo->realParameter[358] /* zero.k PARAM */;
  TRACE_POP
}

/*
equation index: 644
type: SIMPLE_ASSIGN
zero.y = zero.k
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_644(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,644};
  data->simulationInfo->realParameter[359] /* zero.y PARAM */ = data->simulationInfo->realParameter[358] /* zero.k PARAM */;
  TRACE_POP
}

/*
equation index: 645
type: SIMPLE_ASSIGN
eXAC2.gain3.k = eXAC2.K_L
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_645(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,645};
  data->simulationInfo->realParameter[144] /* eXAC2.gain3.k PARAM */ = data->simulationInfo->realParameter[92] /* eXAC2.K_L PARAM */;
  TRACE_POP
}

/*
equation index: 649
type: SIMPLE_ASSIGN
eXAC2.limiter.uMin = eXAC2.V_RMIN
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_649(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,649};
  data->simulationInfo->realParameter[175] /* eXAC2.limiter.uMin PARAM */ = data->simulationInfo->realParameter[118] /* eXAC2.V_RMIN PARAM */;
  TRACE_POP
}

/*
equation index: 650
type: SIMPLE_ASSIGN
eXAC2.limiter.uMax = eXAC2.V_RMAX
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_650(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,650};
  data->simulationInfo->realParameter[174] /* eXAC2.limiter.uMax PARAM */ = data->simulationInfo->realParameter[117] /* eXAC2.V_RMAX PARAM */;
  TRACE_POP
}

/*
equation index: 651
type: SIMPLE_ASSIGN
eXAC2.gain1.k = eXAC2.K_B
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_651(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,651};
  data->simulationInfo->realParameter[143] /* eXAC2.gain1.k PARAM */ = data->simulationInfo->realParameter[86] /* eXAC2.K_B PARAM */;
  TRACE_POP
}

/*
equation index: 652
type: SIMPLE_ASSIGN
eXAC2.gain.k = eXAC2.K_H
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_652(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,652};
  data->simulationInfo->realParameter[142] /* eXAC2.gain.k PARAM */ = data->simulationInfo->realParameter[91] /* eXAC2.K_H PARAM */;
  TRACE_POP
}

/*
equation index: 653
type: SIMPLE_ASSIGN
eXAC2.TransducerDelay.T_mod = if eXAC2.TransducerDelay.T < 1e-15 then 1000.0 else eXAC2.TransducerDelay.T
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_653(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,653};
  modelica_boolean tmp5;
  tmp5 = Less(data->simulationInfo->realParameter[102] /* eXAC2.TransducerDelay.T PARAM */,1e-15);
  data->simulationInfo->realParameter[103] /* eXAC2.TransducerDelay.T_mod PARAM */ = (tmp5?1000.0:data->simulationInfo->realParameter[102] /* eXAC2.TransducerDelay.T PARAM */);
  TRACE_POP
}

/*
equation index: 654
type: SIMPLE_ASSIGN
eXAC2.rotatingExciterWithDemagnetizationLimited.K_D = eXAC2.K_D
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_654(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,654};
  data->simulationInfo->realParameter[181] /* eXAC2.rotatingExciterWithDemagnetizationLimited.K_D PARAM */ = data->simulationInfo->realParameter[88] /* eXAC2.K_D PARAM */;
  TRACE_POP
}

/*
equation index: 660
type: SIMPLE_ASSIGN
eXAC2.rotatingExciterWithDemagnetizationLimited.T_E = eXAC2.T_E
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_660(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,660};
  data->simulationInfo->realParameter[188] /* eXAC2.rotatingExciterWithDemagnetizationLimited.T_E PARAM */ = data->simulationInfo->realParameter[98] /* eXAC2.T_E PARAM */;
  TRACE_POP
}

/*
equation index: 661
type: SIMPLE_ASSIGN
eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.k = 1.0 / eXAC2.rotatingExciterWithDemagnetizationLimited.T_E
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_661(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,661};
  data->simulationInfo->realParameter[190] /* eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.k PARAM */ = DIVISION_SIM(1.0,data->simulationInfo->realParameter[188] /* eXAC2.rotatingExciterWithDemagnetizationLimited.T_E PARAM */,"eXAC2.rotatingExciterWithDemagnetizationLimited.T_E",equationIndexes);
  TRACE_POP
}

/*
equation index: 662
type: SIMPLE_ASSIGN
eXAC2.rotatingExciterWithDemagnetizationLimited.E_2 = eXAC2.E_2
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_662(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,662};
  data->simulationInfo->realParameter[179] /* eXAC2.rotatingExciterWithDemagnetizationLimited.E_2 PARAM */ = data->simulationInfo->realParameter[82] /* eXAC2.E_2 PARAM */;
  TRACE_POP
}

/*
equation index: 663
type: SIMPLE_ASSIGN
eXAC2.rotatingExciterWithDemagnetizationLimited.se1.E2 = eXAC2.rotatingExciterWithDemagnetizationLimited.E_2
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_663(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,663};
  data->simulationInfo->realParameter[195] /* eXAC2.rotatingExciterWithDemagnetizationLimited.se1.E2 PARAM */ = data->simulationInfo->realParameter[179] /* eXAC2.rotatingExciterWithDemagnetizationLimited.E_2 PARAM */;
  TRACE_POP
}

/*
equation index: 664
type: SIMPLE_ASSIGN
eXAC2.rotatingExciterWithDemagnetizationLimited.E_1 = eXAC2.E_1
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_664(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,664};
  data->simulationInfo->realParameter[178] /* eXAC2.rotatingExciterWithDemagnetizationLimited.E_1 PARAM */ = data->simulationInfo->realParameter[81] /* eXAC2.E_1 PARAM */;
  TRACE_POP
}

/*
equation index: 665
type: SIMPLE_ASSIGN
eXAC2.rotatingExciterWithDemagnetizationLimited.se1.E1 = eXAC2.rotatingExciterWithDemagnetizationLimited.E_1
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_665(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,665};
  data->simulationInfo->realParameter[194] /* eXAC2.rotatingExciterWithDemagnetizationLimited.se1.E1 PARAM */ = data->simulationInfo->realParameter[178] /* eXAC2.rotatingExciterWithDemagnetizationLimited.E_1 PARAM */;
  TRACE_POP
}

/*
equation index: 666
type: SIMPLE_ASSIGN
eXAC2.rotatingExciterWithDemagnetizationLimited.S_EE_2 = eXAC2.S_EE_2
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_666(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,666};
  data->simulationInfo->realParameter[184] /* eXAC2.rotatingExciterWithDemagnetizationLimited.S_EE_2 PARAM */ = data->simulationInfo->realParameter[94] /* eXAC2.S_EE_2 PARAM */;
  TRACE_POP
}

/*
equation index: 667
type: SIMPLE_ASSIGN
eXAC2.rotatingExciterWithDemagnetizationLimited.se1.SE2 = eXAC2.rotatingExciterWithDemagnetizationLimited.S_EE_2
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_667(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,667};
  data->simulationInfo->realParameter[197] /* eXAC2.rotatingExciterWithDemagnetizationLimited.se1.SE2 PARAM */ = data->simulationInfo->realParameter[184] /* eXAC2.rotatingExciterWithDemagnetizationLimited.S_EE_2 PARAM */;
  TRACE_POP
}

/*
equation index: 668
type: SIMPLE_ASSIGN
eXAC2.rotatingExciterWithDemagnetizationLimited.S_EE_1 = eXAC2.S_EE_1
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_668(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,668};
  data->simulationInfo->realParameter[183] /* eXAC2.rotatingExciterWithDemagnetizationLimited.S_EE_1 PARAM */ = data->simulationInfo->realParameter[93] /* eXAC2.S_EE_1 PARAM */;
  TRACE_POP
}

/*
equation index: 669
type: SIMPLE_ASSIGN
eXAC2.rotatingExciterWithDemagnetizationLimited.se1.SE1 = eXAC2.rotatingExciterWithDemagnetizationLimited.S_EE_1
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_669(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,669};
  data->simulationInfo->realParameter[196] /* eXAC2.rotatingExciterWithDemagnetizationLimited.se1.SE1 PARAM */ = data->simulationInfo->realParameter[183] /* eXAC2.rotatingExciterWithDemagnetizationLimited.S_EE_1 PARAM */;
  TRACE_POP
}

/*
equation index: 670
type: SIMPLE_ASSIGN
eXAC2.rotatingExciterWithDemagnetizationLimited.Sum.k3 = eXAC2.rotatingExciterWithDemagnetizationLimited.K_D
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_670(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,670};
  data->simulationInfo->realParameter[187] /* eXAC2.rotatingExciterWithDemagnetizationLimited.Sum.k3 PARAM */ = data->simulationInfo->realParameter[181] /* eXAC2.rotatingExciterWithDemagnetizationLimited.K_D PARAM */;
  TRACE_POP
}

/*
equation index: 671
type: SIMPLE_ASSIGN
eXAC2.rotatingExciterWithDemagnetizationLimited.K_E = eXAC2.K_E
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_671(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,671};
  data->simulationInfo->realParameter[182] /* eXAC2.rotatingExciterWithDemagnetizationLimited.K_E PARAM */ = data->simulationInfo->realParameter[89] /* eXAC2.K_E PARAM */;
  TRACE_POP
}

/*
equation index: 672
type: SIMPLE_ASSIGN
eXAC2.rotatingExciterWithDemagnetizationLimited.gain.k = eXAC2.rotatingExciterWithDemagnetizationLimited.K_E
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_672(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,672};
  data->simulationInfo->realParameter[189] /* eXAC2.rotatingExciterWithDemagnetizationLimited.gain.k PARAM */ = data->simulationInfo->realParameter[182] /* eXAC2.rotatingExciterWithDemagnetizationLimited.K_E PARAM */;
  TRACE_POP
}

/*
equation index: 673
type: SIMPLE_ASSIGN
eXAC2.rectifierCommutationVoltageDrop.K_C = eXAC2.K_C
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_673(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,673};
  data->simulationInfo->realParameter[176] /* eXAC2.rectifierCommutationVoltageDrop.K_C PARAM */ = data->simulationInfo->realParameter[87] /* eXAC2.K_C PARAM */;
  TRACE_POP
}

/*
equation index: 674
type: SIMPLE_ASSIGN
eXAC2.rectifierCommutationVoltageDrop.gain2.k = eXAC2.rectifierCommutationVoltageDrop.K_C
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_674(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,674};
  data->simulationInfo->realParameter[177] /* eXAC2.rectifierCommutationVoltageDrop.gain2.k PARAM */ = data->simulationInfo->realParameter[176] /* eXAC2.rectifierCommutationVoltageDrop.K_C PARAM */;
  TRACE_POP
}

/*
equation index: 675
type: SIMPLE_ASSIGN
eXAC2.leadLag.T2_dummy = if abs(eXAC2.leadLag.T1 - eXAC2.leadLag.T2) < 1e-15 then 1000.0 else eXAC2.leadLag.T2
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_675(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,675};
  modelica_boolean tmp6;
  tmp6 = Less(fabs(data->simulationInfo->realParameter[157] /* eXAC2.leadLag.T1 PARAM */ - data->simulationInfo->realParameter[158] /* eXAC2.leadLag.T2 PARAM */),1e-15);
  data->simulationInfo->realParameter[159] /* eXAC2.leadLag.T2_dummy PARAM */ = (tmp6?1000.0:data->simulationInfo->realParameter[158] /* eXAC2.leadLag.T2 PARAM */);
  TRACE_POP
}

/*
equation index: 676
type: SIMPLE_ASSIGN
eXAC2.leadLag.TF.a[1] = eXAC2.leadLag.T2_dummy
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_676(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,676};
  data->simulationInfo->realParameter[160] /* eXAC2.leadLag.TF.a[1] PARAM */ = data->simulationInfo->realParameter[159] /* eXAC2.leadLag.T2_dummy PARAM */;
  TRACE_POP
}

/*
equation index: 677
type: SIMPLE_ASSIGN
eXAC2.leadLag.TF.a_end = if eXAC2.leadLag.TF.a[2] > 1e-13 * sqrt(eXAC2.leadLag.TF.a[1] ^ 2.0 + eXAC2.leadLag.TF.a[2] ^ 2.0) then eXAC2.leadLag.TF.a[2] else 1.0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_677(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,677};
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_boolean tmp9;
  tmp7 = data->simulationInfo->realParameter[160] /* eXAC2.leadLag.TF.a[1] PARAM */;
  tmp8 = data->simulationInfo->realParameter[161] /* eXAC2.leadLag.TF.a[2] PARAM */;
  tmp9 = Greater(data->simulationInfo->realParameter[161] /* eXAC2.leadLag.TF.a[2] PARAM */,(1e-13) * (sqrt((tmp7 * tmp7) + (tmp8 * tmp8))));
  data->simulationInfo->realParameter[162] /* eXAC2.leadLag.TF.a_end PARAM */ = (tmp9?data->simulationInfo->realParameter[161] /* eXAC2.leadLag.TF.a[2] PARAM */:1.0);
  TRACE_POP
}

/*
equation index: 678
type: SIMPLE_ASSIGN
eXAC2.leadLag.TF.b[1] = eXAC2.leadLag.K * eXAC2.leadLag.T1
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_678(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,678};
  data->simulationInfo->realParameter[163] /* eXAC2.leadLag.TF.b[1] PARAM */ = (data->simulationInfo->realParameter[156] /* eXAC2.leadLag.K PARAM */) * (data->simulationInfo->realParameter[157] /* eXAC2.leadLag.T1 PARAM */);
  TRACE_POP
}

/*
equation index: 679
type: SIMPLE_ASSIGN
eXAC2.leadLag.TF.bb[1] = eXAC2.leadLag.TF.b[1]
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_679(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,679};
  data->simulationInfo->realParameter[165] /* eXAC2.leadLag.TF.bb[1] PARAM */ = data->simulationInfo->realParameter[163] /* eXAC2.leadLag.TF.b[1] PARAM */;
  TRACE_POP
}

/*
equation index: 680
type: SIMPLE_ASSIGN
eXAC2.leadLag.TF.d = eXAC2.leadLag.TF.bb[1] / eXAC2.leadLag.TF.a[1]
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_680(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,680};
  data->simulationInfo->realParameter[167] /* eXAC2.leadLag.TF.d PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[165] /* eXAC2.leadLag.TF.bb[1] PARAM */,data->simulationInfo->realParameter[160] /* eXAC2.leadLag.TF.a[1] PARAM */,"eXAC2.leadLag.TF.a[1]",equationIndexes);
  TRACE_POP
}

/*
equation index: 681
type: SIMPLE_ASSIGN
eXAC2.leadLag.TF.b[2] = eXAC2.leadLag.K
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_681(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,681};
  data->simulationInfo->realParameter[164] /* eXAC2.leadLag.TF.b[2] PARAM */ = data->simulationInfo->realParameter[156] /* eXAC2.leadLag.K PARAM */;
  TRACE_POP
}

/*
equation index: 682
type: SIMPLE_ASSIGN
eXAC2.leadLag.TF.bb[2] = eXAC2.leadLag.TF.b[2]
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_682(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,682};
  data->simulationInfo->realParameter[166] /* eXAC2.leadLag.TF.bb[2] PARAM */ = data->simulationInfo->realParameter[164] /* eXAC2.leadLag.TF.b[2] PARAM */;
  TRACE_POP
}

/*
equation index: 689
type: SIMPLE_ASSIGN
eXAC2.imDerivativeLag.T = eXAC2.T_F
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_689(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,689};
  data->simulationInfo->realParameter[145] /* eXAC2.imDerivativeLag.T PARAM */ = data->simulationInfo->realParameter[99] /* eXAC2.T_F PARAM */;
  TRACE_POP
}

/*
equation index: 692
type: SIMPLE_ASSIGN
eXAC2.imLimitedSimpleLag.T_mod = if eXAC2.imLimitedSimpleLag.T < 1e-15 then 1000.0 else eXAC2.imLimitedSimpleLag.T
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_692(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,692};
  modelica_boolean tmp10;
  tmp10 = Less(data->simulationInfo->realParameter[150] /* eXAC2.imLimitedSimpleLag.T PARAM */,1e-15);
  data->simulationInfo->realParameter[151] /* eXAC2.imLimitedSimpleLag.T_mod PARAM */ = (tmp10?1000.0:data->simulationInfo->realParameter[150] /* eXAC2.imLimitedSimpleLag.T PARAM */);
  TRACE_POP
}

/*
equation index: 693
type: SIMPLE_ASSIGN
eXAC2.imLimitedSimpleLag.outMin = eXAC2.V_AMIN
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_693(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,693};
  data->simulationInfo->realParameter[154] /* eXAC2.imLimitedSimpleLag.outMin PARAM */ = data->simulationInfo->realParameter[114] /* eXAC2.V_AMIN PARAM */;
  TRACE_POP
}

/*
equation index: 694
type: SIMPLE_ASSIGN
eXAC2.imLimitedSimpleLag.outMax = eXAC2.V_AMAX
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_694(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,694};
  data->simulationInfo->realParameter[153] /* eXAC2.imLimitedSimpleLag.outMax PARAM */ = data->simulationInfo->realParameter[113] /* eXAC2.V_AMAX PARAM */;
  TRACE_POP
}

/*
equation index: 695
type: SIMPLE_ASSIGN
eXAC2.imLimitedSimpleLag.K = eXAC2.K_A
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_695(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,695};
  data->simulationInfo->realParameter[149] /* eXAC2.imLimitedSimpleLag.K PARAM */ = data->simulationInfo->realParameter[85] /* eXAC2.K_A PARAM */;
  TRACE_POP
}

/*
equation index: 696
type: SIMPLE_ASSIGN
eXAC2.Vref_step.startTime = eXAC2.t
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_696(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,696};
  data->simulationInfo->realParameter[125] /* eXAC2.Vref_step.startTime PARAM */ = data->simulationInfo->realParameter[198] /* eXAC2.t PARAM */;
  TRACE_POP
}

/*
equation index: 697
type: SIMPLE_ASSIGN
gENROE.K4q = (gENROE.Xpq - gENROE.Xppq) / (gENROE.Xpq - gENROE.Xl)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_697(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,697};
  data->simulationInfo->realParameter[246] /* gENROE.K4q PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[281] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[280] /* gENROE.Xppq PARAM */,data->simulationInfo->realParameter[281] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[276] /* gENROE.Xl PARAM */,"gENROE.Xpq - gENROE.Xl",equationIndexes);
  TRACE_POP
}

/*
equation index: 698
type: SIMPLE_ASSIGN
gENROE.K3q = (gENROE.Xppq - gENROE.Xl) / (gENROE.Xpq - gENROE.Xl)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_698(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,698};
  data->simulationInfo->realParameter[244] /* gENROE.K3q PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[280] /* gENROE.Xppq PARAM */ - data->simulationInfo->realParameter[276] /* gENROE.Xl PARAM */,data->simulationInfo->realParameter[281] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[276] /* gENROE.Xl PARAM */,"gENROE.Xpq - gENROE.Xl",equationIndexes);
  TRACE_POP
}

/*
equation index: 699
type: SIMPLE_ASSIGN
gENROE.K4d = (gENROE.Xpd - gENROE.Xppd) / (gENROE.Xpd - gENROE.Xl)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_699(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,699};
  data->simulationInfo->realParameter[245] /* gENROE.K4d PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[277] /* gENROE.Xpd PARAM */ - data->simulationInfo->realParameter[279] /* gENROE.Xppd PARAM */,data->simulationInfo->realParameter[277] /* gENROE.Xpd PARAM */ - data->simulationInfo->realParameter[276] /* gENROE.Xl PARAM */,"gENROE.Xpd - gENROE.Xl",equationIndexes);
  TRACE_POP
}

/*
equation index: 700
type: SIMPLE_ASSIGN
gENROE.K3d = (gENROE.Xppd - gENROE.Xl) / (gENROE.Xpd - gENROE.Xl)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_700(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,700};
  data->simulationInfo->realParameter[243] /* gENROE.K3d PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[279] /* gENROE.Xppd PARAM */ - data->simulationInfo->realParameter[276] /* gENROE.Xl PARAM */,data->simulationInfo->realParameter[277] /* gENROE.Xpd PARAM */ - data->simulationInfo->realParameter[276] /* gENROE.Xl PARAM */,"gENROE.Xpd - gENROE.Xl",equationIndexes);
  TRACE_POP
}

/*
equation index: 701
type: SIMPLE_ASSIGN
gENROE.K2q = (gENROE.Xpq - gENROE.Xl) * (gENROE.Xppq - gENROE.Xl) / (gENROE.Xpq - gENROE.Xppq)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_701(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,701};
  data->simulationInfo->realParameter[242] /* gENROE.K2q PARAM */ = (data->simulationInfo->realParameter[281] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[276] /* gENROE.Xl PARAM */) * (DIVISION_SIM(data->simulationInfo->realParameter[280] /* gENROE.Xppq PARAM */ - data->simulationInfo->realParameter[276] /* gENROE.Xl PARAM */,data->simulationInfo->realParameter[281] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[280] /* gENROE.Xppq PARAM */,"gENROE.Xpq - gENROE.Xppq",equationIndexes));
  TRACE_POP
}

/*
equation index: 702
type: SIMPLE_ASSIGN
gENROE.K1q = (gENROE.Xpq - gENROE.Xppq) * (gENROE.Xq - gENROE.Xpq) / (gENROE.Xpq - gENROE.Xl) ^ 2.0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_702(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,702};
  modelica_real tmp11;
  tmp11 = data->simulationInfo->realParameter[281] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[276] /* gENROE.Xl PARAM */;
  data->simulationInfo->realParameter[240] /* gENROE.K1q PARAM */ = (data->simulationInfo->realParameter[281] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[280] /* gENROE.Xppq PARAM */) * (DIVISION_SIM(data->simulationInfo->realParameter[282] /* gENROE.Xq PARAM */ - data->simulationInfo->realParameter[281] /* gENROE.Xpq PARAM */,(tmp11 * tmp11),"(gENROE.Xpq - gENROE.Xl) ^ 2.0",equationIndexes));
  TRACE_POP
}

/*
equation index: 703
type: SIMPLE_ASSIGN
gENROE.K2d = (gENROE.Xpd - gENROE.Xl) * (gENROE.Xppd - gENROE.Xl) / (gENROE.Xpd - gENROE.Xppd)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_703(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,703};
  data->simulationInfo->realParameter[241] /* gENROE.K2d PARAM */ = (data->simulationInfo->realParameter[277] /* gENROE.Xpd PARAM */ - data->simulationInfo->realParameter[276] /* gENROE.Xl PARAM */) * (DIVISION_SIM(data->simulationInfo->realParameter[279] /* gENROE.Xppd PARAM */ - data->simulationInfo->realParameter[276] /* gENROE.Xl PARAM */,data->simulationInfo->realParameter[277] /* gENROE.Xpd PARAM */ - data->simulationInfo->realParameter[279] /* gENROE.Xppd PARAM */,"gENROE.Xpd - gENROE.Xppd",equationIndexes));
  TRACE_POP
}

/*
equation index: 704
type: SIMPLE_ASSIGN
gENROE.K1d = (gENROE.Xpd - gENROE.Xppd) * (gENROE.Xd - gENROE.Xpd) / (gENROE.Xpd - gENROE.Xl) ^ 2.0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_704(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,704};
  modelica_real tmp12;
  tmp12 = data->simulationInfo->realParameter[277] /* gENROE.Xpd PARAM */ - data->simulationInfo->realParameter[276] /* gENROE.Xl PARAM */;
  data->simulationInfo->realParameter[239] /* gENROE.K1d PARAM */ = (data->simulationInfo->realParameter[277] /* gENROE.Xpd PARAM */ - data->simulationInfo->realParameter[279] /* gENROE.Xppd PARAM */) * (DIVISION_SIM(data->simulationInfo->realParameter[275] /* gENROE.Xd PARAM */ - data->simulationInfo->realParameter[277] /* gENROE.Xpd PARAM */,(tmp12 * tmp12),"(gENROE.Xpd - gENROE.Xl) ^ 2.0",equationIndexes));
  TRACE_POP
}

/*
equation index: 706
type: SIMPLE_ASSIGN
gENROE.PSIppq0 = gENROE.PSIpp0_dq.im
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_706(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,706};
  data->simulationInfo->realParameter[258] /* gENROE.PSIppq0 PARAM */ = data->simulationInfo->realParameter[255] /* gENROE.PSIpp0_dq.im PARAM */;
  TRACE_POP
}

/*
equation index: 707
type: SIMPLE_ASSIGN
gENROE.PSIq0 = gENROE.PSIppq0 - gENROE.Xppq * gENROE.iq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_707(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,707};
  data->simulationInfo->realParameter[259] /* gENROE.PSIq0 PARAM */ = data->simulationInfo->realParameter[258] /* gENROE.PSIppq0 PARAM */ - ((data->simulationInfo->realParameter[280] /* gENROE.Xppq PARAM */) * (data->simulationInfo->realParameter[299] /* gENROE.iq0 PARAM */));
  TRACE_POP
}

/*
equation index: 708
type: SIMPLE_ASSIGN
gENROE.PSId0 = gENROE.PSIppd0 - gENROE.Xppd * gENROE.id0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_708(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,708};
  data->simulationInfo->realParameter[250] /* gENROE.PSId0 PARAM */ = data->simulationInfo->realParameter[257] /* gENROE.PSIppd0 PARAM */ - ((data->simulationInfo->realParameter[279] /* gENROE.Xppd PARAM */) * (data->simulationInfo->realParameter[297] /* gENROE.id0 PARAM */));
  TRACE_POP
}

/*
equation index: 709
type: SIMPLE_ASSIGN
gENROE.PSIkq0 = ((gENROE.Xpq - gENROE.Xl) * gENROE.K3q * gENROE.iq0 - gENROE.PSIppq0) / (gENROE.K3q + gENROE.K4q)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_709(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,709};
  data->simulationInfo->realParameter[252] /* gENROE.PSIkq0 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[281] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[276] /* gENROE.Xl PARAM */) * ((data->simulationInfo->realParameter[244] /* gENROE.K3q PARAM */) * (data->simulationInfo->realParameter[299] /* gENROE.iq0 PARAM */)) - data->simulationInfo->realParameter[258] /* gENROE.PSIppq0 PARAM */,data->simulationInfo->realParameter[244] /* gENROE.K3q PARAM */ + data->simulationInfo->realParameter[246] /* gENROE.K4q PARAM */,"gENROE.K3q + gENROE.K4q",equationIndexes);
  TRACE_POP
}

/*
equation index: 710
type: SIMPLE_ASSIGN
gENROE.PSIkd0 = (gENROE.PSIppd0 + (gENROE.Xl - gENROE.Xpd) * gENROE.K3d * gENROE.id0) / (gENROE.K3d + gENROE.K4d)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_710(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,710};
  data->simulationInfo->realParameter[251] /* gENROE.PSIkd0 PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[257] /* gENROE.PSIppd0 PARAM */ + (data->simulationInfo->realParameter[276] /* gENROE.Xl PARAM */ - data->simulationInfo->realParameter[277] /* gENROE.Xpd PARAM */) * ((data->simulationInfo->realParameter[243] /* gENROE.K3d PARAM */) * (data->simulationInfo->realParameter[297] /* gENROE.id0 PARAM */)),data->simulationInfo->realParameter[243] /* gENROE.K3d PARAM */ + data->simulationInfo->realParameter[245] /* gENROE.K4d PARAM */,"gENROE.K3d + gENROE.K4d",equationIndexes);
  TRACE_POP
}

/*
equation index: 711
type: SIMPLE_ASSIGN
gENROE.Epd0 = gENROE.PSIkq0 + (gENROE.Xl - gENROE.Xpq) * gENROE.iq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_711(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,711};
  data->simulationInfo->realParameter[230] /* gENROE.Epd0 PARAM */ = data->simulationInfo->realParameter[252] /* gENROE.PSIkq0 PARAM */ + (data->simulationInfo->realParameter[276] /* gENROE.Xl PARAM */ - data->simulationInfo->realParameter[281] /* gENROE.Xpq PARAM */) * (data->simulationInfo->realParameter[299] /* gENROE.iq0 PARAM */);
  TRACE_POP
}

/*
equation index: 712
type: SIMPLE_ASSIGN
gENROE.Epq0 = gENROE.PSIkd0 + (gENROE.Xpd - gENROE.Xl) * gENROE.id0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_712(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,712};
  data->simulationInfo->realParameter[231] /* gENROE.Epq0 PARAM */ = data->simulationInfo->realParameter[251] /* gENROE.PSIkd0 PARAM */ + (data->simulationInfo->realParameter[277] /* gENROE.Xpd PARAM */ - data->simulationInfo->realParameter[276] /* gENROE.Xl PARAM */) * (data->simulationInfo->realParameter[297] /* gENROE.id0 PARAM */);
  TRACE_POP
}

/*
equation index: 713
type: SIMPLE_ASSIGN
gENROE.uq0 = gENROE.PSIppd0 + (-gENROE.Xppd) * gENROE.id0 - gENROE.R_a * gENROE.iq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_713(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,713};
  data->simulationInfo->realParameter[305] /* gENROE.uq0 PARAM */ = data->simulationInfo->realParameter[257] /* gENROE.PSIppd0 PARAM */ + ((-data->simulationInfo->realParameter[279] /* gENROE.Xppd PARAM */)) * (data->simulationInfo->realParameter[297] /* gENROE.id0 PARAM */) - ((data->simulationInfo->realParameter[262] /* gENROE.R_a PARAM */) * (data->simulationInfo->realParameter[299] /* gENROE.iq0 PARAM */));
  TRACE_POP
}

/*
equation index: 714
type: SIMPLE_ASSIGN
gENROE.ud0 = gENROE.Xppq * gENROE.iq0 + (-gENROE.PSIppq0) - gENROE.R_a * gENROE.id0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_714(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,714};
  data->simulationInfo->realParameter[304] /* gENROE.ud0 PARAM */ = (data->simulationInfo->realParameter[280] /* gENROE.Xppq PARAM */) * (data->simulationInfo->realParameter[299] /* gENROE.iq0 PARAM */) + (-data->simulationInfo->realParameter[258] /* gENROE.PSIppq0 PARAM */) - ((data->simulationInfo->realParameter[262] /* gENROE.R_a PARAM */) * (data->simulationInfo->realParameter[297] /* gENROE.id0 PARAM */));
  TRACE_POP
}

/*
equation index: 717
type: SIMPLE_ASSIGN
gENROE.ang_PSIpp0 = Modelica.Math.atan3(gENROE.PSIpp0.im, gENROE.PSIpp0.re, 0.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_717(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,717};
  data->simulationInfo->realParameter[288] /* gENROE.ang_PSIpp0 PARAM */ = omc_Modelica_Math_atan3(threadData, data->simulationInfo->realParameter[253] /* gENROE.PSIpp0.im PARAM */, data->simulationInfo->realParameter[254] /* gENROE.PSIpp0.re PARAM */, 0.0);
  TRACE_POP
}

/*
equation index: 720
type: SIMPLE_ASSIGN
gENROE.ang_It = Modelica.Math.atan3(gENROE.It.im, gENROE.It.re, 0.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_720(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,720};
  data->simulationInfo->realParameter[287] /* gENROE.ang_It PARAM */ = omc_Modelica_Math_atan3(threadData, data->simulationInfo->realParameter[237] /* gENROE.It.im PARAM */, data->simulationInfo->realParameter[238] /* gENROE.It.re PARAM */, 0.0);
  TRACE_POP
}

/*
equation index: 721
type: SIMPLE_ASSIGN
gENROE.ang_PSIpp0andIt = gENROE.ang_PSIpp0 - gENROE.ang_It
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_721(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,721};
  data->simulationInfo->realParameter[289] /* gENROE.ang_PSIpp0andIt PARAM */ = data->simulationInfo->realParameter[288] /* gENROE.ang_PSIpp0 PARAM */ - data->simulationInfo->realParameter[287] /* gENROE.ang_It PARAM */;
  TRACE_POP
}

/*
equation index: 722
type: SIMPLE_ASSIGN
gENROE.a = gENROE.abs_PSIpp0 * (1.0 + gENROE.dsat * (gENROE.Xq - gENROE.Xl) / (gENROE.Xd - gENROE.Xl))
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_722(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,722};
  data->simulationInfo->realParameter[285] /* gENROE.a PARAM */ = (data->simulationInfo->realParameter[286] /* gENROE.abs_PSIpp0 PARAM */) * (1.0 + (data->simulationInfo->realParameter[294] /* gENROE.dsat PARAM */) * (DIVISION_SIM(data->simulationInfo->realParameter[282] /* gENROE.Xq PARAM */ - data->simulationInfo->realParameter[276] /* gENROE.Xl PARAM */,data->simulationInfo->realParameter[275] /* gENROE.Xd PARAM */ - data->simulationInfo->realParameter[276] /* gENROE.Xl PARAM */,"gENROE.Xd - gENROE.Xl",equationIndexes)));
  TRACE_POP
}

/*
equation index: 723
type: SIMPLE_ASSIGN
gENROE.b = (gENROE.It.re ^ 2.0 + gENROE.It.im ^ 2.0) ^ 0.5 * (gENROE.Xpp - gENROE.Xq)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_723(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,723};
  modelica_real tmp13;
  modelica_real tmp14;
  modelica_real tmp15;
  tmp13 = data->simulationInfo->realParameter[238] /* gENROE.It.re PARAM */;
  tmp14 = data->simulationInfo->realParameter[237] /* gENROE.It.im PARAM */;
  tmp15 = (tmp13 * tmp13) + (tmp14 * tmp14);
  if(!(tmp15 >= 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of sqrt(gENROE.It.re ^ 2.0 + gENROE.It.im ^ 2.0) was %g should be >= 0", tmp15);
  }
  data->simulationInfo->realParameter[292] /* gENROE.b PARAM */ = (sqrt(tmp15)) * (data->simulationInfo->realParameter[278] /* gENROE.Xpp PARAM */ - data->simulationInfo->realParameter[282] /* gENROE.Xq PARAM */);
  TRACE_POP
}

/*
equation index: 724
type: SIMPLE_ASSIGN
gENROE.delta0 = atan(gENROE.b * cos(gENROE.ang_PSIpp0andIt) / (gENROE.b * sin(gENROE.ang_PSIpp0andIt) - gENROE.a)) + gENROE.ang_PSIpp0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_724(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,724};
  data->simulationInfo->realParameter[293] /* gENROE.delta0 PARAM */ = atan((data->simulationInfo->realParameter[292] /* gENROE.b PARAM */) * (DIVISION_SIM(cos(data->simulationInfo->realParameter[289] /* gENROE.ang_PSIpp0andIt PARAM */),(data->simulationInfo->realParameter[292] /* gENROE.b PARAM */) * (sin(data->simulationInfo->realParameter[289] /* gENROE.ang_PSIpp0andIt PARAM */)) - data->simulationInfo->realParameter[285] /* gENROE.a PARAM */,"gENROE.b * sin(gENROE.ang_PSIpp0andIt) - gENROE.a",equationIndexes))) + data->simulationInfo->realParameter[288] /* gENROE.ang_PSIpp0 PARAM */;
  TRACE_POP
}

/*
equation index: 733
type: SIMPLE_ASSIGN
gENROE.q0 = gENROE.Q_0 / gENROE.M_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_733(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,733};
  data->simulationInfo->realParameter[303] /* gENROE.q0 PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[261] /* gENROE.Q_0 PARAM */,data->simulationInfo->realParameter[247] /* gENROE.M_b PARAM */,"gENROE.M_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 734
type: SIMPLE_ASSIGN
gENROE.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_734(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,734};
  data->simulationInfo->realParameter[267] /* gENROE.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 735
type: SIMPLE_ASSIGN
gENROE.CoB = gENROE.M_b / gENROE.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_735(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,735};
  data->simulationInfo->realParameter[225] /* gENROE.CoB PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[247] /* gENROE.M_b PARAM */,data->simulationInfo->realParameter[267] /* gENROE.S_b PARAM */,"gENROE.S_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 736
type: SIMPLE_ASSIGN
gENROE.angle_0rad = 0.0174532925199433 * gENROE.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_736(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,736};
  data->simulationInfo->realParameter[291] /* gENROE.angle_0rad PARAM */ = (0.0174532925199433) * (data->simulationInfo->realParameter[290] /* gENROE.angle_0 PARAM */);
  TRACE_POP
}

/*
equation index: 737
type: SIMPLE_ASSIGN
gENROE.vr0 = gENROE.v_0 * cos(gENROE.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_737(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,737};
  data->simulationInfo->realParameter[308] /* gENROE.vr0 PARAM */ = (data->simulationInfo->realParameter[306] /* gENROE.v_0 PARAM */) * (cos(data->simulationInfo->realParameter[291] /* gENROE.angle_0rad PARAM */));
  TRACE_POP
}

/*
equation index: 738
type: SIMPLE_ASSIGN
gENROE.vi0 = gENROE.v_0 * sin(gENROE.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_738(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,738};
  data->simulationInfo->realParameter[307] /* gENROE.vi0 PARAM */ = (data->simulationInfo->realParameter[306] /* gENROE.v_0 PARAM */) * (sin(data->simulationInfo->realParameter[291] /* gENROE.angle_0rad PARAM */));
  TRACE_POP
}

/*
equation index: 739
type: SIMPLE_ASSIGN
gENROE.ii0 = gENROE.CoB * (gENROE.q0 * gENROE.vr0 - gENROE.p0 * gENROE.vi0) / (gENROE.vr0 ^ 2.0 + gENROE.vi0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_739(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,739};
  modelica_real tmp16;
  modelica_real tmp17;
  tmp16 = data->simulationInfo->realParameter[308] /* gENROE.vr0 PARAM */;
  tmp17 = data->simulationInfo->realParameter[307] /* gENROE.vi0 PARAM */;
  data->simulationInfo->realParameter[298] /* gENROE.ii0 PARAM */ = (data->simulationInfo->realParameter[225] /* gENROE.CoB PARAM */) * (DIVISION_SIM((data->simulationInfo->realParameter[303] /* gENROE.q0 PARAM */) * (data->simulationInfo->realParameter[308] /* gENROE.vr0 PARAM */) - ((data->simulationInfo->realParameter[301] /* gENROE.p0 PARAM */) * (data->simulationInfo->realParameter[307] /* gENROE.vi0 PARAM */)),(tmp16 * tmp16) + (tmp17 * tmp17),"gENROE.vr0 ^ 2.0 + gENROE.vi0 ^ 2.0",equationIndexes));
  TRACE_POP
}

/*
equation index: 740
type: SIMPLE_ASSIGN
gENROE.ir0 = (-gENROE.CoB) * (gENROE.p0 * gENROE.vr0 + gENROE.q0 * gENROE.vi0) / (gENROE.vr0 ^ 2.0 + gENROE.vi0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_740(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,740};
  modelica_real tmp18;
  modelica_real tmp19;
  tmp18 = data->simulationInfo->realParameter[308] /* gENROE.vr0 PARAM */;
  tmp19 = data->simulationInfo->realParameter[307] /* gENROE.vi0 PARAM */;
  data->simulationInfo->realParameter[300] /* gENROE.ir0 PARAM */ = ((-data->simulationInfo->realParameter[225] /* gENROE.CoB PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[301] /* gENROE.p0 PARAM */) * (data->simulationInfo->realParameter[308] /* gENROE.vr0 PARAM */) + (data->simulationInfo->realParameter[303] /* gENROE.q0 PARAM */) * (data->simulationInfo->realParameter[307] /* gENROE.vi0 PARAM */),(tmp18 * tmp18) + (tmp19 * tmp19),"gENROE.vr0 ^ 2.0 + gENROE.vi0 ^ 2.0",equationIndexes));
  TRACE_POP
}

/*
equation index: 741
type: SIMPLE_ASSIGN
gENROE.fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_741(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,741};
  data->simulationInfo->realParameter[296] /* gENROE.fn PARAM */ = data->simulationInfo->realParameter[33] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 742
type: SIMPLE_ASSIGN
gENROE.w_b = 6.283185307179586 * gENROE.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_742(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,742};
  data->simulationInfo->realParameter[309] /* gENROE.w_b PARAM */ = (6.283185307179586) * (data->simulationInfo->realParameter[296] /* gENROE.fn PARAM */);
  TRACE_POP
}

/*
equation index: 743
type: SIMPLE_ASSIGN
FAULT.angle_0rad = 0.0174532925199433 * FAULT.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_743(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,743};
  data->simulationInfo->realParameter[5] /* FAULT.angle_0rad PARAM */ = (0.0174532925199433) * (data->simulationInfo->realParameter[4] /* FAULT.angle_0 PARAM */);
  TRACE_POP
}

/*
equation index: 744
type: SIMPLE_ASSIGN
FAULT.fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_744(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,744};
  data->simulationInfo->realParameter[6] /* FAULT.fn PARAM */ = data->simulationInfo->realParameter[33] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 745
type: SIMPLE_ASSIGN
FAULT.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_745(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,745};
  data->simulationInfo->realParameter[2] /* FAULT.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 746
type: SIMPLE_ASSIGN
GEN2.angle_0rad = 0.0174532925199433 * GEN2.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_746(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,746};
  data->simulationInfo->realParameter[21] /* GEN2.angle_0rad PARAM */ = (0.0174532925199433) * (data->simulationInfo->realParameter[20] /* GEN2.angle_0 PARAM */);
  TRACE_POP
}

/*
equation index: 747
type: SIMPLE_ASSIGN
GEN2.fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_747(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,747};
  data->simulationInfo->realParameter[22] /* GEN2.fn PARAM */ = data->simulationInfo->realParameter[33] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 748
type: SIMPLE_ASSIGN
GEN2.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_748(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,748};
  data->simulationInfo->realParameter[18] /* GEN2.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 749
type: SIMPLE_ASSIGN
LOAD.angle_0rad = 0.0174532925199433 * LOAD.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_749(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,749};
  data->simulationInfo->realParameter[29] /* LOAD.angle_0rad PARAM */ = (0.0174532925199433) * (data->simulationInfo->realParameter[28] /* LOAD.angle_0 PARAM */);
  TRACE_POP
}

/*
equation index: 750
type: SIMPLE_ASSIGN
LOAD.fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_750(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,750};
  data->simulationInfo->realParameter[30] /* LOAD.fn PARAM */ = data->simulationInfo->realParameter[33] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 751
type: SIMPLE_ASSIGN
LOAD.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_751(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,751};
  data->simulationInfo->realParameter[26] /* LOAD.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 752
type: SIMPLE_ASSIGN
GEN1.angle_0rad = 0.0174532925199433 * GEN1.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_752(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,752};
  data->simulationInfo->realParameter[13] /* GEN1.angle_0rad PARAM */ = (0.0174532925199433) * (data->simulationInfo->realParameter[12] /* GEN1.angle_0 PARAM */);
  TRACE_POP
}

/*
equation index: 753
type: SIMPLE_ASSIGN
GEN1.fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_753(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,753};
  data->simulationInfo->realParameter[14] /* GEN1.fn PARAM */ = data->simulationInfo->realParameter[33] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 754
type: SIMPLE_ASSIGN
GEN1.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_754(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,754};
  data->simulationInfo->realParameter[10] /* GEN1.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 755
type: SIMPLE_ASSIGN
pwFault.ground = abs(pwFault.R) < 1e-15 and abs(pwFault.X) < 1e-15
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_755(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,755};
  modelica_boolean tmp20;
  modelica_boolean tmp21;
  tmp20 = Less(fabs(data->simulationInfo->realParameter[310] /* pwFault.R PARAM */),1e-15);
  tmp21 = Less(fabs(data->simulationInfo->realParameter[311] /* pwFault.X PARAM */),1e-15);
  data->simulationInfo->booleanParameter[70] /* pwFault.ground PARAM */ = (tmp20 && tmp21);
  TRACE_POP
}

/*
equation index: 756
type: SIMPLE_ASSIGN
constantLoad.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_756(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,756};
  data->simulationInfo->realParameter[44] /* constantLoad.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 757
type: SIMPLE_ASSIGN
constantLoad.p0 = (constantLoad.S_i.re * constantLoad.v_0 + constantLoad.S_y.re * constantLoad.v_0 ^ 2.0 + constantLoad.S_p.re) / constantLoad.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_757(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,757};
  modelica_real tmp22;
  tmp22 = data->simulationInfo->realParameter[72] /* constantLoad.v_0 PARAM */;
  data->simulationInfo->realParameter[69] /* constantLoad.p0 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[46] /* constantLoad.S_i.re PARAM */) * (data->simulationInfo->realParameter[72] /* constantLoad.v_0 PARAM */) + (data->simulationInfo->realParameter[50] /* constantLoad.S_y.re PARAM */) * ((tmp22 * tmp22)) + data->simulationInfo->realParameter[48] /* constantLoad.S_p.re PARAM */,data->simulationInfo->realParameter[44] /* constantLoad.S_b PARAM */,"constantLoad.S_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 758
type: SIMPLE_ASSIGN
constantLoad.q0 = (constantLoad.S_i.im * constantLoad.v_0 + constantLoad.S_y.im * constantLoad.v_0 ^ 2.0 + constantLoad.S_p.im) / constantLoad.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_758(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,758};
  modelica_real tmp23;
  tmp23 = data->simulationInfo->realParameter[72] /* constantLoad.v_0 PARAM */;
  data->simulationInfo->realParameter[70] /* constantLoad.q0 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[45] /* constantLoad.S_i.im PARAM */) * (data->simulationInfo->realParameter[72] /* constantLoad.v_0 PARAM */) + (data->simulationInfo->realParameter[49] /* constantLoad.S_y.im PARAM */) * ((tmp23 * tmp23)) + data->simulationInfo->realParameter[47] /* constantLoad.S_p.im PARAM */,data->simulationInfo->realParameter[44] /* constantLoad.S_b PARAM */,"constantLoad.S_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 759
type: SIMPLE_ASSIGN
constantLoad.PF = if constantLoad.q0 == 0.0 then 1.0 else constantLoad.p0 / constantLoad.q0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_759(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,759};
  data->simulationInfo->realParameter[34] /* constantLoad.PF PARAM */ = ((data->simulationInfo->realParameter[70] /* constantLoad.q0 PARAM */ == 0.0)?1.0:DIVISION_SIM(data->simulationInfo->realParameter[69] /* constantLoad.p0 PARAM */,data->simulationInfo->realParameter[70] /* constantLoad.q0 PARAM */,"constantLoad.q0",equationIndexes));
  TRACE_POP
}

/*
equation index: 760
type: SIMPLE_ASSIGN
constantLoad.d_Q = (constantLoad.p0 + constantLoad.d_P) / constantLoad.PF - constantLoad.q0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_760(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,760};
  data->simulationInfo->realParameter[64] /* constantLoad.d_Q PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[69] /* constantLoad.p0 PARAM */ + data->simulationInfo->realParameter[63] /* constantLoad.d_P PARAM */,data->simulationInfo->realParameter[34] /* constantLoad.PF PARAM */,"constantLoad.PF",equationIndexes) - data->simulationInfo->realParameter[70] /* constantLoad.q0 PARAM */;
  TRACE_POP
}

/*
equation index: 773
type: SIMPLE_ASSIGN
constantLoad.angle_0rad = 0.0174532925199433 * constantLoad.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_773(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,773};
  data->simulationInfo->realParameter[58] /* constantLoad.angle_0rad PARAM */ = (0.0174532925199433) * (data->simulationInfo->realParameter[57] /* constantLoad.angle_0 PARAM */);
  TRACE_POP
}

/*
equation index: 774
type: SIMPLE_ASSIGN
constantLoad.vr0 = constantLoad.v_0 * cos(constantLoad.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_774(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,774};
  data->simulationInfo->realParameter[74] /* constantLoad.vr0 PARAM */ = (data->simulationInfo->realParameter[72] /* constantLoad.v_0 PARAM */) * (cos(data->simulationInfo->realParameter[58] /* constantLoad.angle_0rad PARAM */));
  TRACE_POP
}

/*
equation index: 775
type: SIMPLE_ASSIGN
constantLoad.vi0 = constantLoad.v_0 * sin(constantLoad.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_775(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,775};
  data->simulationInfo->realParameter[73] /* constantLoad.vi0 PARAM */ = (data->simulationInfo->realParameter[72] /* constantLoad.v_0 PARAM */) * (sin(data->simulationInfo->realParameter[58] /* constantLoad.angle_0rad PARAM */));
  TRACE_POP
}

/*
equation index: 776
type: SIMPLE_ASSIGN
constantLoad.ii0 = (constantLoad.p0 * constantLoad.vi0 - constantLoad.q0 * constantLoad.vr0) / (constantLoad.vr0 ^ 2.0 + constantLoad.vi0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_776(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,776};
  modelica_real tmp25;
  modelica_real tmp26;
  tmp25 = data->simulationInfo->realParameter[74] /* constantLoad.vr0 PARAM */;
  tmp26 = data->simulationInfo->realParameter[73] /* constantLoad.vi0 PARAM */;
  data->simulationInfo->realParameter[67] /* constantLoad.ii0 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[69] /* constantLoad.p0 PARAM */) * (data->simulationInfo->realParameter[73] /* constantLoad.vi0 PARAM */) - ((data->simulationInfo->realParameter[70] /* constantLoad.q0 PARAM */) * (data->simulationInfo->realParameter[74] /* constantLoad.vr0 PARAM */)),(tmp25 * tmp25) + (tmp26 * tmp26),"constantLoad.vr0 ^ 2.0 + constantLoad.vi0 ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 777
type: SIMPLE_ASSIGN
constantLoad.ir0 = (constantLoad.p0 * constantLoad.vr0 + constantLoad.q0 * constantLoad.vi0) / (constantLoad.vr0 ^ 2.0 + constantLoad.vi0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_777(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,777};
  modelica_real tmp27;
  modelica_real tmp28;
  tmp27 = data->simulationInfo->realParameter[74] /* constantLoad.vr0 PARAM */;
  tmp28 = data->simulationInfo->realParameter[73] /* constantLoad.vi0 PARAM */;
  data->simulationInfo->realParameter[68] /* constantLoad.ir0 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[69] /* constantLoad.p0 PARAM */) * (data->simulationInfo->realParameter[74] /* constantLoad.vr0 PARAM */) + (data->simulationInfo->realParameter[70] /* constantLoad.q0 PARAM */) * (data->simulationInfo->realParameter[73] /* constantLoad.vi0 PARAM */),(tmp27 * tmp27) + (tmp28 * tmp28),"constantLoad.vr0 ^ 2.0 + constantLoad.vi0 ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 779
type: SIMPLE_ASSIGN
constantLoad.fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_779(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,779};
  data->simulationInfo->realParameter[66] /* constantLoad.fn PARAM */ = data->simulationInfo->realParameter[33] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 780
type: SIMPLE_ASSIGN
gENCLS.angle_0rad = 0.0174532925199433 * gENCLS.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_780(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,780};
  data->simulationInfo->realParameter[210] /* gENCLS.angle_0rad PARAM */ = (0.0174532925199433) * (data->simulationInfo->realParameter[209] /* gENCLS.angle_0 PARAM */);
  TRACE_POP
}

/*
equation index: 781
type: SIMPLE_ASSIGN
gENCLS.vr0 = gENCLS.v_0 * cos(gENCLS.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_781(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,781};
  data->simulationInfo->realParameter[224] /* gENCLS.vr0 PARAM */ = (data->simulationInfo->realParameter[219] /* gENCLS.v_0 PARAM */) * (cos(data->simulationInfo->realParameter[210] /* gENCLS.angle_0rad PARAM */));
  TRACE_POP
}

/*
equation index: 782
type: SIMPLE_ASSIGN
gENCLS.vi0 = gENCLS.v_0 * sin(gENCLS.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_782(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,782};
  data->simulationInfo->realParameter[222] /* gENCLS.vi0 PARAM */ = (data->simulationInfo->realParameter[219] /* gENCLS.v_0 PARAM */) * (sin(data->simulationInfo->realParameter[210] /* gENCLS.angle_0rad PARAM */));
  TRACE_POP
}

/*
equation index: 783
type: SIMPLE_ASSIGN
gENCLS.p0 = gENCLS.P_0 / gENCLS.M_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_783(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,783};
  data->simulationInfo->realParameter[217] /* gENCLS.p0 PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[203] /* gENCLS.P_0 PARAM */,data->simulationInfo->realParameter[202] /* gENCLS.M_b PARAM */,"gENCLS.M_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 784
type: SIMPLE_ASSIGN
gENCLS.q0 = gENCLS.Q_0 / gENCLS.M_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_784(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,784};
  data->simulationInfo->realParameter[218] /* gENCLS.q0 PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[204] /* gENCLS.Q_0 PARAM */,data->simulationInfo->realParameter[202] /* gENCLS.M_b PARAM */,"gENCLS.M_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 785
type: SIMPLE_ASSIGN
gENCLS.ir0 = (gENCLS.p0 * gENCLS.vr0 + gENCLS.q0 * gENCLS.vi0) / (gENCLS.vr0 ^ 2.0 + gENCLS.vi0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_785(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,785};
  modelica_real tmp29;
  modelica_real tmp30;
  tmp29 = data->simulationInfo->realParameter[224] /* gENCLS.vr0 PARAM */;
  tmp30 = data->simulationInfo->realParameter[222] /* gENCLS.vi0 PARAM */;
  data->simulationInfo->realParameter[216] /* gENCLS.ir0 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[217] /* gENCLS.p0 PARAM */) * (data->simulationInfo->realParameter[224] /* gENCLS.vr0 PARAM */) + (data->simulationInfo->realParameter[218] /* gENCLS.q0 PARAM */) * (data->simulationInfo->realParameter[222] /* gENCLS.vi0 PARAM */),(tmp29 * tmp29) + (tmp30 * tmp30),"gENCLS.vr0 ^ 2.0 + gENCLS.vi0 ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 786
type: SIMPLE_ASSIGN
gENCLS.ii0 = (gENCLS.p0 * gENCLS.vi0 - gENCLS.q0 * gENCLS.vr0) / (gENCLS.vr0 ^ 2.0 + gENCLS.vi0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_786(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,786};
  modelica_real tmp31;
  modelica_real tmp32;
  tmp31 = data->simulationInfo->realParameter[224] /* gENCLS.vr0 PARAM */;
  tmp32 = data->simulationInfo->realParameter[222] /* gENCLS.vi0 PARAM */;
  data->simulationInfo->realParameter[214] /* gENCLS.ii0 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[217] /* gENCLS.p0 PARAM */) * (data->simulationInfo->realParameter[222] /* gENCLS.vi0 PARAM */) - ((data->simulationInfo->realParameter[218] /* gENCLS.q0 PARAM */) * (data->simulationInfo->realParameter[224] /* gENCLS.vr0 PARAM */)),(tmp31 * tmp31) + (tmp32 * tmp32),"gENCLS.vr0 ^ 2.0 + gENCLS.vi0 ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 787
type: SIMPLE_ASSIGN
gENCLS.delta0 = atan2(gENCLS.vi0 + gENCLS.R_a * gENCLS.ii0 + gENCLS.X_d * gENCLS.ir0, gENCLS.vr0 + gENCLS.R_a * gENCLS.ir0 - gENCLS.X_d * gENCLS.ii0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_787(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,787};
  data->simulationInfo->realParameter[211] /* gENCLS.delta0 PARAM */ = atan2(data->simulationInfo->realParameter[222] /* gENCLS.vi0 PARAM */ + (data->simulationInfo->realParameter[205] /* gENCLS.R_a PARAM */) * (data->simulationInfo->realParameter[214] /* gENCLS.ii0 PARAM */) + (data->simulationInfo->realParameter[208] /* gENCLS.X_d PARAM */) * (data->simulationInfo->realParameter[216] /* gENCLS.ir0 PARAM */), data->simulationInfo->realParameter[224] /* gENCLS.vr0 PARAM */ + (data->simulationInfo->realParameter[205] /* gENCLS.R_a PARAM */) * (data->simulationInfo->realParameter[216] /* gENCLS.ir0 PARAM */) - ((data->simulationInfo->realParameter[208] /* gENCLS.X_d PARAM */) * (data->simulationInfo->realParameter[214] /* gENCLS.ii0 PARAM */)));
  TRACE_POP
}

/*
equation index: 788
type: SIMPLE_ASSIGN
gENCLS.vq0 = gENCLS.vr0 * sin(1.570796326794897 - gENCLS.delta0) + gENCLS.vi0 * cos(1.570796326794897 - gENCLS.delta0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_788(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,788};
  data->simulationInfo->realParameter[223] /* gENCLS.vq0 PARAM */ = (data->simulationInfo->realParameter[224] /* gENCLS.vr0 PARAM */) * (sin(1.570796326794897 - data->simulationInfo->realParameter[211] /* gENCLS.delta0 PARAM */)) + (data->simulationInfo->realParameter[222] /* gENCLS.vi0 PARAM */) * (cos(1.570796326794897 - data->simulationInfo->realParameter[211] /* gENCLS.delta0 PARAM */));
  TRACE_POP
}

/*
equation index: 789
type: SIMPLE_ASSIGN
gENCLS.id0 = gENCLS.ir0 * cos(1.570796326794897 - gENCLS.delta0) - gENCLS.ii0 * sin(1.570796326794897 - gENCLS.delta0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_789(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,789};
  data->simulationInfo->realParameter[213] /* gENCLS.id0 PARAM */ = (data->simulationInfo->realParameter[216] /* gENCLS.ir0 PARAM */) * (cos(1.570796326794897 - data->simulationInfo->realParameter[211] /* gENCLS.delta0 PARAM */)) - ((data->simulationInfo->realParameter[214] /* gENCLS.ii0 PARAM */) * (sin(1.570796326794897 - data->simulationInfo->realParameter[211] /* gENCLS.delta0 PARAM */)));
  TRACE_POP
}

/*
equation index: 790
type: SIMPLE_ASSIGN
gENCLS.iq0 = gENCLS.ir0 * sin(1.570796326794897 - gENCLS.delta0) + gENCLS.ii0 * cos(1.570796326794897 - gENCLS.delta0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_790(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,790};
  data->simulationInfo->realParameter[215] /* gENCLS.iq0 PARAM */ = (data->simulationInfo->realParameter[216] /* gENCLS.ir0 PARAM */) * (sin(1.570796326794897 - data->simulationInfo->realParameter[211] /* gENCLS.delta0 PARAM */)) + (data->simulationInfo->realParameter[214] /* gENCLS.ii0 PARAM */) * (cos(1.570796326794897 - data->simulationInfo->realParameter[211] /* gENCLS.delta0 PARAM */));
  TRACE_POP
}

/*
equation index: 791
type: SIMPLE_ASSIGN
gENCLS.vf0 = gENCLS.vq0 + gENCLS.R_a * gENCLS.iq0 + gENCLS.X_d * gENCLS.id0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_791(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,791};
  data->simulationInfo->realParameter[221] /* gENCLS.vf0 PARAM */ = data->simulationInfo->realParameter[223] /* gENCLS.vq0 PARAM */ + (data->simulationInfo->realParameter[205] /* gENCLS.R_a PARAM */) * (data->simulationInfo->realParameter[215] /* gENCLS.iq0 PARAM */) + (data->simulationInfo->realParameter[208] /* gENCLS.X_d PARAM */) * (data->simulationInfo->realParameter[213] /* gENCLS.id0 PARAM */);
  TRACE_POP
}

/*
equation index: 792
type: SIMPLE_ASSIGN
gENCLS.vd0 = gENCLS.vr0 * cos(1.570796326794897 - gENCLS.delta0) - gENCLS.vi0 * sin(1.570796326794897 - gENCLS.delta0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_792(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,792};
  data->simulationInfo->realParameter[220] /* gENCLS.vd0 PARAM */ = (data->simulationInfo->realParameter[224] /* gENCLS.vr0 PARAM */) * (cos(1.570796326794897 - data->simulationInfo->realParameter[211] /* gENCLS.delta0 PARAM */)) - ((data->simulationInfo->realParameter[222] /* gENCLS.vi0 PARAM */) * (sin(1.570796326794897 - data->simulationInfo->realParameter[211] /* gENCLS.delta0 PARAM */)));
  TRACE_POP
}

/*
equation index: 793
type: SIMPLE_ASSIGN
gENCLS.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_793(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,793};
  data->simulationInfo->realParameter[206] /* gENCLS.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 794
type: SIMPLE_ASSIGN
gENCLS.CoB = gENCLS.M_b / gENCLS.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_794(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,794};
  data->simulationInfo->realParameter[199] /* gENCLS.CoB PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[202] /* gENCLS.M_b PARAM */,data->simulationInfo->realParameter[206] /* gENCLS.S_b PARAM */,"gENCLS.S_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 796
type: SIMPLE_ASSIGN
gENCLS.fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_796(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,796};
  data->simulationInfo->realParameter[212] /* gENCLS.fn PARAM */ = data->simulationInfo->realParameter[33] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 797
type: SIMPLE_ASSIGN
pwLine4.Z.im = pwLine4.X
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_797(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,797};
  data->simulationInfo->realParameter[354] /* pwLine4.Z.im PARAM */ = data->simulationInfo->realParameter[351] /* pwLine4.X PARAM */;
  TRACE_POP
}

/*
equation index: 798
type: SIMPLE_ASSIGN
pwLine4.Z.re = pwLine4.R
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_798(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,798};
  data->simulationInfo->realParameter[355] /* pwLine4.Z.re PARAM */ = data->simulationInfo->realParameter[349] /* pwLine4.R PARAM */;
  TRACE_POP
}

/*
equation index: 799
type: SIMPLE_ASSIGN
pwLine4.Y.im = pwLine4.B
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_799(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,799};
  data->simulationInfo->realParameter[352] /* pwLine4.Y.im PARAM */ = data->simulationInfo->realParameter[347] /* pwLine4.B PARAM */;
  TRACE_POP
}

/*
equation index: 800
type: SIMPLE_ASSIGN
pwLine4.Y.re = pwLine4.G
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_800(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,800};
  data->simulationInfo->realParameter[353] /* pwLine4.Y.re PARAM */ = data->simulationInfo->realParameter[348] /* pwLine4.G PARAM */;
  TRACE_POP
}

/*
equation index: 802
type: SIMPLE_ASSIGN
pwLine4.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_802(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,802};
  data->simulationInfo->realParameter[350] /* pwLine4.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 803
type: SIMPLE_ASSIGN
pwLine3.Z.im = pwLine3.X
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_803(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,803};
  data->simulationInfo->realParameter[343] /* pwLine3.Z.im PARAM */ = data->simulationInfo->realParameter[340] /* pwLine3.X PARAM */;
  TRACE_POP
}

/*
equation index: 804
type: SIMPLE_ASSIGN
pwLine3.Z.re = pwLine3.R
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_804(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,804};
  data->simulationInfo->realParameter[344] /* pwLine3.Z.re PARAM */ = data->simulationInfo->realParameter[338] /* pwLine3.R PARAM */;
  TRACE_POP
}

/*
equation index: 805
type: SIMPLE_ASSIGN
pwLine3.Y.im = pwLine3.B
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_805(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,805};
  data->simulationInfo->realParameter[341] /* pwLine3.Y.im PARAM */ = data->simulationInfo->realParameter[336] /* pwLine3.B PARAM */;
  TRACE_POP
}

/*
equation index: 806
type: SIMPLE_ASSIGN
pwLine3.Y.re = pwLine3.G
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_806(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,806};
  data->simulationInfo->realParameter[342] /* pwLine3.Y.re PARAM */ = data->simulationInfo->realParameter[337] /* pwLine3.G PARAM */;
  TRACE_POP
}

/*
equation index: 808
type: SIMPLE_ASSIGN
pwLine3.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_808(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,808};
  data->simulationInfo->realParameter[339] /* pwLine3.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 809
type: SIMPLE_ASSIGN
pwLine1.Z.im = pwLine1.X
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_809(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,809};
  data->simulationInfo->realParameter[332] /* pwLine1.Z.im PARAM */ = data->simulationInfo->realParameter[329] /* pwLine1.X PARAM */;
  TRACE_POP
}

/*
equation index: 810
type: SIMPLE_ASSIGN
pwLine1.Z.re = pwLine1.R
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_810(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,810};
  data->simulationInfo->realParameter[333] /* pwLine1.Z.re PARAM */ = data->simulationInfo->realParameter[327] /* pwLine1.R PARAM */;
  TRACE_POP
}

/*
equation index: 811
type: SIMPLE_ASSIGN
pwLine1.Y.im = pwLine1.B
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_811(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,811};
  data->simulationInfo->realParameter[330] /* pwLine1.Y.im PARAM */ = data->simulationInfo->realParameter[325] /* pwLine1.B PARAM */;
  TRACE_POP
}

/*
equation index: 812
type: SIMPLE_ASSIGN
pwLine1.Y.re = pwLine1.G
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_812(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,812};
  data->simulationInfo->realParameter[331] /* pwLine1.Y.re PARAM */ = data->simulationInfo->realParameter[326] /* pwLine1.G PARAM */;
  TRACE_POP
}

/*
equation index: 814
type: SIMPLE_ASSIGN
pwLine1.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_814(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,814};
  data->simulationInfo->realParameter[328] /* pwLine1.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 815
type: SIMPLE_ASSIGN
pwLine.Z.im = pwLine.X
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_815(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,815};
  data->simulationInfo->realParameter[321] /* pwLine.Z.im PARAM */ = data->simulationInfo->realParameter[318] /* pwLine.X PARAM */;
  TRACE_POP
}

/*
equation index: 816
type: SIMPLE_ASSIGN
pwLine.Z.re = pwLine.R
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_816(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,816};
  data->simulationInfo->realParameter[322] /* pwLine.Z.re PARAM */ = data->simulationInfo->realParameter[316] /* pwLine.R PARAM */;
  TRACE_POP
}

/*
equation index: 817
type: SIMPLE_ASSIGN
pwLine.Y.im = pwLine.B
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_817(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,817};
  data->simulationInfo->realParameter[319] /* pwLine.Y.im PARAM */ = data->simulationInfo->realParameter[314] /* pwLine.B PARAM */;
  TRACE_POP
}

/*
equation index: 818
type: SIMPLE_ASSIGN
pwLine.Y.re = pwLine.G
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_818(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,818};
  data->simulationInfo->realParameter[320] /* pwLine.Y.re PARAM */ = data->simulationInfo->realParameter[315] /* pwLine.G PARAM */;
  TRACE_POP
}

/*
equation index: 820
type: SIMPLE_ASSIGN
pwLine.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_820(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,820};
  data->simulationInfo->realParameter[317] /* pwLine.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_181(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_180(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_179(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_178(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_177(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_176(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_175(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_174(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_4(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_3(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_2(DATA *data, threadData_t *threadData);


/*
equation index: 833
type: ALGORITHM

  assert(eXAC2.limiter.homotopyType >= Modelica.Blocks.Types.LimiterHomotopy.NoHomotopy and eXAC2.limiter.homotopyType <= Modelica.Blocks.Types.LimiterHomotopy.LowerLimit, "Variable violating min/max constraint: Modelica.Blocks.Types.LimiterHomotopy.NoHomotopy <= eXAC2.limiter.homotopyType <= Modelica.Blocks.Types.LimiterHomotopy.LowerLimit, has value: " + String(eXAC2.limiter.homotopyType, "d"));
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_833(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,833};
  modelica_boolean tmp33;
  modelica_boolean tmp34;
  static const MMC_DEFSTRINGLIT(tmp35,182,"Variable violating min/max constraint: Modelica.Blocks.Types.LimiterHomotopy.NoHomotopy <= eXAC2.limiter.homotopyType <= Modelica.Blocks.Types.LimiterHomotopy.LowerLimit, has value: ");
  modelica_string tmp36;
  static int tmp37 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp37)
  {
    tmp33 = GreaterEq(data->simulationInfo->integerParameter[6] /* eXAC2.limiter.homotopyType PARAM */,1);
    tmp34 = LessEq(data->simulationInfo->integerParameter[6] /* eXAC2.limiter.homotopyType PARAM */,4);
    if(!(tmp33 && tmp34))
    {
      tmp36 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[6] /* eXAC2.limiter.homotopyType PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp35),tmp36);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.3/Blocks/Nonlinear.mo",12,9,13,69,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\neXAC2.limiter.homotopyType >= Modelica.Blocks.Types.LimiterHomotopy.NoHomotopy and eXAC2.limiter.homotopyType <= Modelica.Blocks.Types.LimiterHomotopy.LowerLimit", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp37 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 834
type: ALGORITHM

  assert(eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.initType >= Modelica.Blocks.Types.Init.NoInit and eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.initType <= Modelica.Blocks.Types.Init.InitialOutput, "Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: " + String(eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.initType, "d"));
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_834(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,834};
  modelica_boolean tmp38;
  modelica_boolean tmp39;
  static const MMC_DEFSTRINGLIT(tmp40,194,"Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: ");
  modelica_string tmp41;
  static int tmp42 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp42)
  {
    tmp38 = GreaterEq(data->simulationInfo->integerParameter[7] /* eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.initType PARAM */,1);
    tmp39 = LessEq(data->simulationInfo->integerParameter[7] /* eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.initType PARAM */,4);
    if(!(tmp38 && tmp39))
    {
      tmp41 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[7] /* eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.initType PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp40),tmp41);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.3/Blocks/Continuous.mo",149,5,151,64,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\neXAC2.rotatingExciterWithDemagnetizationLimited.sISO.initType >= Modelica.Blocks.Types.Init.NoInit and eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.initType <= Modelica.Blocks.Types.Init.InitialOutput", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp42 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 835
type: ALGORITHM

  assert(eXAC2.leadLag.TF.initType >= Modelica.Blocks.Types.Init.NoInit and eXAC2.leadLag.TF.initType <= Modelica.Blocks.Types.Init.InitialOutput, "Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= eXAC2.leadLag.TF.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: " + String(eXAC2.leadLag.TF.initType, "d"));
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_835(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,835};
  modelica_boolean tmp43;
  modelica_boolean tmp44;
  static const MMC_DEFSTRINGLIT(tmp45,158,"Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= eXAC2.leadLag.TF.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: ");
  modelica_string tmp46;
  static int tmp47 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp47)
  {
    tmp43 = GreaterEq(data->simulationInfo->integerParameter[2] /* eXAC2.leadLag.TF.initType PARAM */,1);
    tmp44 = LessEq(data->simulationInfo->integerParameter[2] /* eXAC2.leadLag.TF.initType PARAM */,4);
    if(!(tmp43 && tmp44))
    {
      tmp46 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[2] /* eXAC2.leadLag.TF.initType PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp45),tmp46);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.3/Blocks/Continuous.mo",1279,5,1282,31,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\neXAC2.leadLag.TF.initType >= Modelica.Blocks.Types.Init.NoInit and eXAC2.leadLag.TF.initType <= Modelica.Blocks.Types.Init.InitialOutput", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp47 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 836
type: ALGORITHM

  assert(eXAC2.imDerivativeLag.initType >= Modelica.Blocks.Types.Init.NoInit and eXAC2.imDerivativeLag.initType <= Modelica.Blocks.Types.Init.InitialOutput, "Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= eXAC2.imDerivativeLag.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: " + String(eXAC2.imDerivativeLag.initType, "d"));
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_836(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,836};
  modelica_boolean tmp48;
  modelica_boolean tmp49;
  static const MMC_DEFSTRINGLIT(tmp50,163,"Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= eXAC2.imDerivativeLag.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: ");
  modelica_string tmp51;
  static int tmp52 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp52)
  {
    tmp48 = GreaterEq(data->simulationInfo->integerParameter[1] /* eXAC2.imDerivativeLag.initType PARAM */,1);
    tmp49 = LessEq(data->simulationInfo->integerParameter[1] /* eXAC2.imDerivativeLag.initType PARAM */,4);
    if(!(tmp48 && tmp49))
    {
      tmp51 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[1] /* eXAC2.imDerivativeLag.initType PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp50),tmp51);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.3/Blocks/Continuous.mo",300,5,303,40,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\neXAC2.imDerivativeLag.initType >= Modelica.Blocks.Types.Init.NoInit and eXAC2.imDerivativeLag.initType <= Modelica.Blocks.Types.Init.InitialOutput", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp52 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 837
type: ALGORITHM

  assert(eXAC2.imDerivativeLag.T >= 1e-60, "Variable violating min constraint: 1e-60 <= eXAC2.imDerivativeLag.T, has value: " + String(eXAC2.imDerivativeLag.T, "g"));
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_837(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,837};
  modelica_boolean tmp53;
  static const MMC_DEFSTRINGLIT(tmp54,80,"Variable violating min constraint: 1e-60 <= eXAC2.imDerivativeLag.T, has value: ");
  modelica_string tmp55;
  static int tmp56 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp56)
  {
    tmp53 = GreaterEq(data->simulationInfo->realParameter[145] /* eXAC2.imDerivativeLag.T PARAM */,1e-60);
    if(!tmp53)
    {
      tmp55 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[145] /* eXAC2.imDerivativeLag.T PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp54),tmp55);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.3/Blocks/Continuous.mo",298,5,299,69,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\neXAC2.imDerivativeLag.T >= 1e-60", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp56 = 1;
    }
  }
  TRACE_POP
}
OMC_DISABLE_OPT
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_updateBoundParameters_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_610(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_613(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_614(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_616(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_618(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_619(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_620(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_621(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_622(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_623(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_624(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_625(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_626(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_627(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_628(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_629(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_630(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_631(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_632(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_634(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_635(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_636(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_637(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_638(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_639(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_640(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_641(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_642(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_643(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_644(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_645(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_649(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_650(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_651(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_652(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_653(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_654(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_660(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_661(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_662(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_663(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_664(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_665(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_666(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_667(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_668(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_669(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_670(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_671(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_672(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_673(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_674(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_675(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_676(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_677(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_678(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_679(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_680(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_681(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_682(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_689(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_692(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_693(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_694(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_695(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_696(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_697(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_698(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_699(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_700(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_701(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_702(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_703(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_704(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_706(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_707(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_708(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_709(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_710(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_711(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_712(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_713(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_714(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_717(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_720(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_721(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_722(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_723(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_724(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_733(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_734(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_735(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_736(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_737(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_738(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_739(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_740(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_741(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_742(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_743(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_744(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_745(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_746(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_747(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_748(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_749(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_750(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_751(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_752(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_753(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_754(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_755(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_756(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_757(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_758(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_759(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_760(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_773(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_774(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_775(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_776(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_777(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_779(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_780(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_781(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_782(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_783(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_784(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_785(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_786(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_787(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_788(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_789(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_790(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_791(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_792(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_793(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_794(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_796(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_797(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_798(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_799(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_800(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_802(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_803(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_804(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_805(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_806(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_808(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_809(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_810(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_811(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_812(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_814(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_815(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_816(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_817(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_818(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_820(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_181(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_180(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_179(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_178(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_177(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_176(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_175(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_174(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_4(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_3(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_2(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_833(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_834(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_835(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_836(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_837(data, threadData);
  TRACE_POP
}
OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_updateBoundParameters(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  data->simulationInfo->integerParameter[0] /* constantLoad.characteristic PARAM */ = ((modelica_integer) 2);
  data->modelData->integerParameterData[0].time_unvarying = 1;
  data->simulationInfo->integerParameter[3] /* eXAC2.leadLag.TF.na PARAM */ = ((modelica_integer) 2);
  data->modelData->integerParameterData[3].time_unvarying = 1;
  data->simulationInfo->integerParameter[4] /* eXAC2.leadLag.TF.nb PARAM */ = ((modelica_integer) 2);
  data->modelData->integerParameterData[4].time_unvarying = 1;
  data->simulationInfo->integerParameter[5] /* eXAC2.leadLag.TF.nx PARAM */ = ((modelica_integer) 1);
  data->modelData->integerParameterData[5].time_unvarying = 1;
  data->simulationInfo->integerParameter[8] /* pwLine.opening PARAM */ = ((modelica_integer) 1);
  data->modelData->integerParameterData[8].time_unvarying = 1;
  data->simulationInfo->integerParameter[9] /* pwLine1.opening PARAM */ = ((modelica_integer) 1);
  data->modelData->integerParameterData[9].time_unvarying = 1;
  data->simulationInfo->integerParameter[10] /* pwLine3.opening PARAM */ = ((modelica_integer) 1);
  data->modelData->integerParameterData[10].time_unvarying = 1;
  data->simulationInfo->integerParameter[11] /* pwLine4.opening PARAM */ = ((modelica_integer) 1);
  data->modelData->integerParameterData[11].time_unvarying = 1;
  data->localData[0]->realVars[93] /* gENCLS.omega variable */ = 0.0;
  data->modelData->realVarsData[93].time_unvarying = 1;
  data->simulationInfo->realParameter[38] /* constantLoad.S_I.im PARAM */ = 0.0;
  data->modelData->realParameterData[38].time_unvarying = 1;
  data->simulationInfo->realParameter[39] /* constantLoad.S_I.re PARAM */ = 0.5040355607168797;
  data->modelData->realParameterData[39].time_unvarying = 1;
  data->simulationInfo->realParameter[40] /* constantLoad.S_P.im PARAM */ = 0.0;
  data->modelData->realParameterData[40].time_unvarying = 1;
  data->simulationInfo->realParameter[41] /* constantLoad.S_P.re PARAM */ = 0.0;
  data->modelData->realParameterData[41].time_unvarying = 1;
  data->simulationInfo->realParameter[42] /* constantLoad.S_Y.im PARAM */ = 0.1016207385868717;
  data->modelData->realParameterData[42].time_unvarying = 1;
  data->simulationInfo->realParameter[43] /* constantLoad.S_Y.re PARAM */ = 0.0;
  data->modelData->realParameterData[43].time_unvarying = 1;
  data->simulationInfo->realParameter[54] /* constantLoad.a0 PARAM */ = 0.4881;
  data->modelData->realParameterData[54].time_unvarying = 1;
  data->simulationInfo->realParameter[55] /* constantLoad.a1 PARAM */ = -0.4999;
  data->modelData->realParameterData[55].time_unvarying = 1;
  data->simulationInfo->realParameter[56] /* constantLoad.a2 PARAM */ = 1.502;
  data->modelData->realParameterData[56].time_unvarying = 1;
  data->simulationInfo->realParameter[61] /* constantLoad.b1 PARAM */ = 0.1389;
  data->modelData->realParameterData[61].time_unvarying = 1;
  data->simulationInfo->realParameter[62] /* constantLoad.b2 PARAM */ = 1.769;
  data->modelData->realParameterData[62].time_unvarying = 1;
  data->simulationInfo->realParameter[75] /* constantLoad.wp PARAM */ = 3.964;
  data->modelData->realParameterData[75].time_unvarying = 1;
  data->simulationInfo->realParameter[90] /* eXAC2.K_F PARAM */ = 0.03;
  data->modelData->realParameterData[90].time_unvarying = 1;
  data->simulationInfo->realParameter[146] /* eXAC2.imDerivativeLag.k PARAM */ = 0.03;
  data->modelData->realParameterData[146].time_unvarying = 1;
  data->simulationInfo->realParameter[201] /* gENCLS.H PARAM */ = 0.0;
  data->modelData->realParameterData[201].time_unvarying = 1;
  data->simulationInfo->realParameter[227] /* gENROE.DQ_dq.im PARAM */ = -0.5650202843208616;
  data->modelData->realParameterData[227].time_unvarying = 1;
  data->simulationInfo->realParameter[228] /* gENROE.DQ_dq.re PARAM */ = 0.825077013560536;
  data->modelData->realParameterData[228].time_unvarying = 1;
  data->simulationInfo->realParameter[233] /* gENROE.I_dq.im PARAM */ = 0.248896193836464;
  data->modelData->realParameterData[233].time_unvarying = 1;
  data->simulationInfo->realParameter[234] /* gENROE.I_dq.re PARAM */ = 0.3177807746702022;
  data->modelData->realParameterData[234].time_unvarying = 1;
  data->simulationInfo->realParameter[235] /* gENROE.Is.im PARAM */ = -5.013342868567351;
  data->modelData->realParameterData[235].time_unvarying = 1;
  data->simulationInfo->realParameter[236] /* gENROE.Is.re PARAM */ = 0.7556357708851228;
  data->modelData->realParameterData[236].time_unvarying = 1;
  data->simulationInfo->realParameter[237] /* gENROE.It.im PARAM */ = -0.02580594464131273;
  data->modelData->realParameterData[237].time_unvarying = 1;
  data->simulationInfo->realParameter[238] /* gENROE.It.re PARAM */ = 0.4028250107397031;
  data->modelData->realParameterData[238].time_unvarying = 1;
  data->simulationInfo->realParameter[253] /* gENROE.PSIpp0.im PARAM */ = 0.1511271541770246;
  data->modelData->realParameterData[253].time_unvarying = 1;
  data->simulationInfo->realParameter[254] /* gENROE.PSIpp0.re PARAM */ = 1.00266857371347;
  data->modelData->realParameterData[254].time_unvarying = 1;
  data->simulationInfo->realParameter[255] /* gENROE.PSIpp0_dq.im PARAM */ = -0.4418365415628956;
  data->modelData->realParameterData[255].time_unvarying = 1;
  data->simulationInfo->realParameter[256] /* gENROE.PSIpp0_dq.re PARAM */ = 0.9126687000122171;
  data->modelData->realParameterData[256].time_unvarying = 1;
  data->simulationInfo->realParameter[263] /* gENROE.S.im PARAM */ = 0.05416582;
  data->modelData->realParameterData[263].time_unvarying = 1;
  data->simulationInfo->realParameter[264] /* gENROE.S.re PARAM */ = 0.4;
  data->modelData->realParameterData[264].time_unvarying = 1;
  data->simulationInfo->realParameter[272] /* gENROE.VT.im PARAM */ = 0.07056215202908395;
  data->modelData->realParameterData[272].time_unvarying = 1;
  data->simulationInfo->realParameter[273] /* gENROE.VT.re PARAM */ = 0.9975073847852077;
  data->modelData->realParameterData[273].time_unvarying = 1;
  data->simulationInfo->realParameter[283] /* gENROE.Zs.im PARAM */ = 0.2;
  data->modelData->realParameterData[283].time_unvarying = 1;
  data->simulationInfo->realParameter[284] /* gENROE.Zs.re PARAM */ = 0.0;
  data->modelData->realParameterData[284].time_unvarying = 1;
  data->simulationInfo->booleanParameter[45] /* eXAC2.imDerivativeLag.zeroGain PARAM */ = 0;
  data->modelData->booleanParameterData[45].time_unvarying = 1;
  data->simulationInfo->booleanParameter[46] /* eXAC2.limiter.limitsAtInit PARAM */ = 1;
  data->modelData->booleanParameterData[46].time_unvarying = 1;
  data->simulationInfo->booleanParameter[47] /* eXAC2.limiter.strict PARAM */ = 0;
  data->modelData->booleanParameterData[47].time_unvarying = 1;
  data->simulationInfo->booleanParameter[48] /* eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.limitsAtInit PARAM */ = 1;
  data->modelData->booleanParameterData[48].time_unvarying = 1;
  data->simulationInfo->booleanParameter[49] /* eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.strict PARAM */ = 0;
  data->modelData->booleanParameterData[49].time_unvarying = 1;
  data->simulationInfo->booleanParameter[50] /* eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.use_reset PARAM */ = 0;
  data->modelData->booleanParameterData[50].time_unvarying = 1;
  data->simulationInfo->booleanParameter[51] /* eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.use_set PARAM */ = 0;
  data->modelData->booleanParameterData[51].time_unvarying = 1;
  data->simulationInfo->integerParameter[1] /* eXAC2.imDerivativeLag.initType PARAM */ = 4;
  data->modelData->integerParameterData[1].time_unvarying = 1;
  data->simulationInfo->integerParameter[2] /* eXAC2.leadLag.TF.initType PARAM */ = 4;
  data->modelData->integerParameterData[2].time_unvarying = 1;
  data->simulationInfo->integerParameter[6] /* eXAC2.limiter.homotopyType PARAM */ = 2;
  data->modelData->integerParameterData[6].time_unvarying = 1;
  data->simulationInfo->integerParameter[7] /* eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.initType PARAM */ = 4;
  data->modelData->integerParameterData[7].time_unvarying = 1;
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_updateBoundParameters_0(data, threadData);
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

