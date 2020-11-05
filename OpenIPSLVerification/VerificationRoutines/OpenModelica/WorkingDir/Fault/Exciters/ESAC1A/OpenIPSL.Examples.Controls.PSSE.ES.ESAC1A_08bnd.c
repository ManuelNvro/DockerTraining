/* update bound parameters and variable attributes (start, nominal, min, max) */
#include "OpenIPSL.Examples.Controls.PSSE.ES.ESAC1A_model.h"
#if defined(__cplusplus)
extern "C" {
#endif


/*
equation index: 675
type: SIMPLE_ASSIGN
$START.gENROE.Q = gENROE.Q_0 / gENROE.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_675(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,675};
  data->modelData->realVarsData[98].attribute /* gENROE.Q variable */.start = DIVISION(data->simulationInfo->realParameter[242] /* gENROE.Q_0 PARAM */,data->simulationInfo->realParameter[248] /* gENROE.S_b PARAM */,"gENROE.S_b");
    data->localData[0]->realVars[98] /* gENROE.Q variable */ = data->modelData->realVarsData[98].attribute /* gENROE.Q variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[98].info /* gENROE.Q */.name, (modelica_real) data->localData[0]->realVars[98] /* gENROE.Q variable */);
  TRACE_POP
}

/*
equation index: 676
type: SIMPLE_ASSIGN
$START.gENROE.P = gENROE.P_0 / gENROE.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_676(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,676};
  data->modelData->realVarsData[91].attribute /* gENROE.P variable */.start = DIVISION(data->simulationInfo->realParameter[241] /* gENROE.P_0 PARAM */,data->simulationInfo->realParameter[248] /* gENROE.S_b PARAM */,"gENROE.S_b");
    data->localData[0]->realVars[91] /* gENROE.P variable */ = data->modelData->realVarsData[91].attribute /* gENROE.P variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[91].info /* gENROE.P */.name, (modelica_real) data->localData[0]->realVars[91] /* gENROE.P variable */);
  TRACE_POP
}

/*
equation index: 677
type: SIMPLE_ASSIGN
$START.gENROE.anglei = atan2(gENROE.ii0, gENROE.ir0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_677(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,677};
  data->modelData->realVarsData[101].attribute /* gENROE.anglei variable */.start = atan2(data->simulationInfo->realParameter[279] /* gENROE.ii0 PARAM */, data->simulationInfo->realParameter[281] /* gENROE.ir0 PARAM */);
    data->localData[0]->realVars[101] /* gENROE.anglei variable */ = data->modelData->realVarsData[101].attribute /* gENROE.anglei variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[101].info /* gENROE.anglei */.name, (modelica_real) data->localData[0]->realVars[101] /* gENROE.anglei variable */);
  TRACE_POP
}

/*
equation index: 678
type: SIMPLE_ASSIGN
$START.gENROE.I = sqrt(gENROE.ir0 ^ 2.0 + gENROE.ii0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_678(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,678};
  modelica_real tmp108;
  modelica_real tmp109;
  tmp108 = data->simulationInfo->realParameter[281] /* gENROE.ir0 PARAM */;
  tmp109 = data->simulationInfo->realParameter[279] /* gENROE.ii0 PARAM */;
  data->modelData->realVarsData[90].attribute /* gENROE.I variable */.start = sqrt((tmp108 * tmp108) + (tmp109 * tmp109));
    data->localData[0]->realVars[90] /* gENROE.I variable */ = data->modelData->realVarsData[90].attribute /* gENROE.I variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[90].info /* gENROE.I */.name, (modelica_real) data->localData[0]->realVars[90] /* gENROE.I variable */);
  TRACE_POP
}

/*
equation index: 679
type: SIMPLE_ASSIGN
$START.gENROE.anglev = gENROE.angle_0rad
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_679(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,679};
  data->modelData->realVarsData[102].attribute /* gENROE.anglev variable */.start = data->simulationInfo->realParameter[272] /* gENROE.angle_0rad PARAM */;
    data->localData[0]->realVars[102] /* gENROE.anglev variable */ = data->modelData->realVarsData[102].attribute /* gENROE.anglev variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[102].info /* gENROE.anglev */.name, (modelica_real) data->localData[0]->realVars[102] /* gENROE.anglev variable */);
  TRACE_POP
}

/*
equation index: 680
type: SIMPLE_ASSIGN
$START.gENROE.PELEC = gENROE.p0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_680(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,680};
  data->modelData->realVarsData[92].attribute /* gENROE.PELEC variable */.start = data->simulationInfo->realParameter[282] /* gENROE.p0 PARAM */;
    data->localData[0]->realVars[92] /* gENROE.PELEC variable */ = data->modelData->realVarsData[92].attribute /* gENROE.PELEC variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[92].info /* gENROE.PELEC */.name, (modelica_real) data->localData[0]->realVars[92] /* gENROE.PELEC variable */);
  TRACE_POP
}

/*
equation index: 681
type: SIMPLE_ASSIGN
$START.FAULT.angle = FAULT.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_681(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,681};
  data->modelData->realVarsData[33].attribute /* FAULT.angle variable */.start = data->simulationInfo->realParameter[4] /* FAULT.angle_0 PARAM */;
    data->localData[0]->realVars[33] /* FAULT.angle variable */ = data->modelData->realVarsData[33].attribute /* FAULT.angle variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[33].info /* FAULT.angle */.name, (modelica_real) data->localData[0]->realVars[33] /* FAULT.angle variable */);
  TRACE_POP
}

/*
equation index: 682
type: SIMPLE_ASSIGN
$START.FAULT.V = FAULT.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_682(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,682};
  data->modelData->realVarsData[32].attribute /* FAULT.V variable */.start = data->simulationInfo->realParameter[7] /* FAULT.v_0 PARAM */;
    data->localData[0]->realVars[32] /* FAULT.V variable */ = data->modelData->realVarsData[32].attribute /* FAULT.V variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[32].info /* FAULT.V */.name, (modelica_real) data->localData[0]->realVars[32] /* FAULT.V variable */);
  TRACE_POP
}

/*
equation index: 683
type: SIMPLE_ASSIGN
$START.GEN2.angle = GEN2.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_683(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,683};
  data->modelData->realVarsData[41].attribute /* GEN2.angle variable */.start = data->simulationInfo->realParameter[20] /* GEN2.angle_0 PARAM */;
    data->localData[0]->realVars[41] /* GEN2.angle variable */ = data->modelData->realVarsData[41].attribute /* GEN2.angle variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[41].info /* GEN2.angle */.name, (modelica_real) data->localData[0]->realVars[41] /* GEN2.angle variable */);
  TRACE_POP
}

/*
equation index: 684
type: SIMPLE_ASSIGN
$START.GEN2.V = gENCLS.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_684(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,684};
  data->modelData->realVarsData[40].attribute /* GEN2.V variable */.start = data->simulationInfo->realParameter[200] /* gENCLS.v_0 PARAM */;
    data->localData[0]->realVars[40] /* GEN2.V variable */ = data->modelData->realVarsData[40].attribute /* GEN2.V variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[40].info /* GEN2.V */.name, (modelica_real) data->localData[0]->realVars[40] /* GEN2.V variable */);
  TRACE_POP
}

/*
equation index: 685
type: SIMPLE_ASSIGN
$START.LOAD.angle = LOAD.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_685(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,685};
  data->modelData->realVarsData[45].attribute /* LOAD.angle variable */.start = data->simulationInfo->realParameter[28] /* LOAD.angle_0 PARAM */;
    data->localData[0]->realVars[45] /* LOAD.angle variable */ = data->modelData->realVarsData[45].attribute /* LOAD.angle variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[45].info /* LOAD.angle */.name, (modelica_real) data->localData[0]->realVars[45] /* LOAD.angle variable */);
  TRACE_POP
}

/*
equation index: 686
type: SIMPLE_ASSIGN
$START.GEN1.angle = GEN1.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_686(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,686};
  data->modelData->realVarsData[37].attribute /* GEN1.angle variable */.start = data->simulationInfo->realParameter[12] /* GEN1.angle_0 PARAM */;
    data->localData[0]->realVars[37] /* GEN1.angle variable */ = data->modelData->realVarsData[37].attribute /* GEN1.angle variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[37].info /* GEN1.angle */.name, (modelica_real) data->localData[0]->realVars[37] /* GEN1.angle variable */);
  TRACE_POP
}

/*
equation index: 687
type: SIMPLE_ASSIGN
$START.GEN1.V = gENROE.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_687(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,687};
  data->modelData->realVarsData[36].attribute /* GEN1.V variable */.start = data->simulationInfo->realParameter[287] /* gENROE.v_0 PARAM */;
    data->localData[0]->realVars[36] /* GEN1.V variable */ = data->modelData->realVarsData[36].attribute /* GEN1.V variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[36].info /* GEN1.V */.name, (modelica_real) data->localData[0]->realVars[36] /* GEN1.V variable */);
  TRACE_POP
}

/*
equation index: 688
type: SIMPLE_ASSIGN
$START.constantLoad.v = constantLoad.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_688(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,688};
  data->modelData->realVarsData[55].attribute /* constantLoad.v variable */.start = data->simulationInfo->realParameter[78] /* constantLoad.v_0 PARAM */;
    data->localData[0]->realVars[55] /* constantLoad.v variable */ = data->modelData->realVarsData[55].attribute /* constantLoad.v variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[55].info /* constantLoad.v */.name, (modelica_real) data->localData[0]->realVars[55] /* constantLoad.v variable */);
  TRACE_POP
}

/*
equation index: 689
type: SIMPLE_ASSIGN
$START.constantLoad.angle = constantLoad.angle_0rad
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_689(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,689};
  data->modelData->realVarsData[50].attribute /* constantLoad.angle variable */.start = data->simulationInfo->realParameter[64] /* constantLoad.angle_0rad PARAM */;
    data->localData[0]->realVars[50] /* constantLoad.angle variable */ = data->modelData->realVarsData[50].attribute /* constantLoad.angle variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[50].info /* constantLoad.angle */.name, (modelica_real) data->localData[0]->realVars[50] /* constantLoad.angle variable */);
  TRACE_POP
}

/*
equation index: 690
type: SIMPLE_ASSIGN
$START.gENCLS.Q = gENCLS.Q_0 / gENCLS.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_690(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,690};
  data->modelData->realVarsData[80].attribute /* gENCLS.Q variable */.start = DIVISION(data->simulationInfo->realParameter[185] /* gENCLS.Q_0 PARAM */,data->simulationInfo->realParameter[187] /* gENCLS.S_b PARAM */,"gENCLS.S_b");
    data->localData[0]->realVars[80] /* gENCLS.Q variable */ = data->modelData->realVarsData[80].attribute /* gENCLS.Q variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[80].info /* gENCLS.Q */.name, (modelica_real) data->localData[0]->realVars[80] /* gENCLS.Q variable */);
  TRACE_POP
}

/*
equation index: 691
type: SIMPLE_ASSIGN
$START.gENCLS.P = gENCLS.P_0 / gENCLS.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_691(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,691};
  data->modelData->realVarsData[79].attribute /* gENCLS.P variable */.start = DIVISION(data->simulationInfo->realParameter[184] /* gENCLS.P_0 PARAM */,data->simulationInfo->realParameter[187] /* gENCLS.S_b PARAM */,"gENCLS.S_b");
    data->localData[0]->realVars[79] /* gENCLS.P variable */ = data->modelData->realVarsData[79].attribute /* gENCLS.P variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[79].info /* gENCLS.P */.name, (modelica_real) data->localData[0]->realVars[79] /* gENCLS.P variable */);
  TRACE_POP
}

/*
equation index: 692
type: SIMPLE_ASSIGN
$START.gENCLS.iq = gENCLS.iq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_692(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,692};
  data->modelData->realVarsData[84].attribute /* gENCLS.iq variable */.start = data->simulationInfo->realParameter[196] /* gENCLS.iq0 PARAM */;
    data->localData[0]->realVars[84] /* gENCLS.iq variable */ = data->modelData->realVarsData[84].attribute /* gENCLS.iq variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[84].info /* gENCLS.iq */.name, (modelica_real) data->localData[0]->realVars[84] /* gENCLS.iq variable */);
  TRACE_POP
}

/*
equation index: 693
type: SIMPLE_ASSIGN
$START.gENCLS.id = gENCLS.id0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_693(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,693};
  data->modelData->realVarsData[83].attribute /* gENCLS.id variable */.start = data->simulationInfo->realParameter[194] /* gENCLS.id0 PARAM */;
    data->localData[0]->realVars[83] /* gENCLS.id variable */ = data->modelData->realVarsData[83].attribute /* gENCLS.id variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[83].info /* gENCLS.id */.name, (modelica_real) data->localData[0]->realVars[83] /* gENCLS.id variable */);
  TRACE_POP
}

/*
equation index: 694
type: SIMPLE_ASSIGN
$START.gENCLS.vq = gENCLS.vq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_694(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,694};
  data->modelData->realVarsData[89].attribute /* gENCLS.vq variable */.start = data->simulationInfo->realParameter[204] /* gENCLS.vq0 PARAM */;
    data->localData[0]->realVars[89] /* gENCLS.vq variable */ = data->modelData->realVarsData[89].attribute /* gENCLS.vq variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[89].info /* gENCLS.vq */.name, (modelica_real) data->localData[0]->realVars[89] /* gENCLS.vq variable */);
  TRACE_POP
}

/*
equation index: 695
type: SIMPLE_ASSIGN
$START.gENCLS.vd = gENCLS.vd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_695(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,695};
  data->modelData->realVarsData[88].attribute /* gENCLS.vd variable */.start = data->simulationInfo->realParameter[201] /* gENCLS.vd0 PARAM */;
    data->localData[0]->realVars[88] /* gENCLS.vd variable */ = data->modelData->realVarsData[88].attribute /* gENCLS.vd variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[88].info /* gENCLS.vd */.name, (modelica_real) data->localData[0]->realVars[88] /* gENCLS.vd variable */);
  TRACE_POP
}

/*
equation index: 696
type: SIMPLE_ASSIGN
$START.gENCLS.eq = gENCLS.vf0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_696(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,696};
  data->modelData->realVarsData[6].attribute /* gENCLS.eq STATE(1) */.start = data->simulationInfo->realParameter[202] /* gENCLS.vf0 PARAM */;
    data->localData[0]->realVars[6] /* gENCLS.eq STATE(1) */ = data->modelData->realVarsData[6].attribute /* gENCLS.eq STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[6].info /* gENCLS.eq */.name, (modelica_real) data->localData[0]->realVars[6] /* gENCLS.eq STATE(1) */);
  TRACE_POP
}

/*
equation index: 697
type: SIMPLE_ASSIGN
$START.gENCLS.anglev = gENCLS.angle_0rad
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_697(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,697};
  data->modelData->realVarsData[82].attribute /* gENCLS.anglev variable */.start = data->simulationInfo->realParameter[191] /* gENCLS.angle_0rad PARAM */;
    data->localData[0]->realVars[82] /* gENCLS.anglev variable */ = data->modelData->realVarsData[82].attribute /* gENCLS.anglev variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[82].info /* gENCLS.anglev */.name, (modelica_real) data->localData[0]->realVars[82] /* gENCLS.anglev variable */);
  TRACE_POP
}

/*
equation index: 698
type: SIMPLE_ASSIGN
$START.gENCLS.delta = gENCLS.delta0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_698(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,698};
  data->modelData->realVarsData[5].attribute /* gENCLS.delta STATE(1) */.start = data->simulationInfo->realParameter[192] /* gENCLS.delta0 PARAM */;
    data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */ = data->modelData->realVarsData[5].attribute /* gENCLS.delta STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[5].info /* gENCLS.delta */.name, (modelica_real) data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */);
  TRACE_POP
}

/*
equation index: 699
type: SIMPLE_ASSIGN
$START.gENCLS.p.ii = gENCLS.ii0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_699(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,699};
  data->modelData->realVarsData[86].attribute /* gENCLS.p.ii variable */.start = data->simulationInfo->realParameter[195] /* gENCLS.ii0 PARAM */;
    data->localData[0]->realVars[86] /* gENCLS.p.ii variable */ = data->modelData->realVarsData[86].attribute /* gENCLS.p.ii variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[86].info /* gENCLS.p.ii */.name, (modelica_real) data->localData[0]->realVars[86] /* gENCLS.p.ii variable */);
  TRACE_POP
}

/*
equation index: 700
type: SIMPLE_ASSIGN
$START.gENCLS.p.ir = gENCLS.ir0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_700(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,700};
  data->modelData->realVarsData[87].attribute /* gENCLS.p.ir variable */.start = data->simulationInfo->realParameter[197] /* gENCLS.ir0 PARAM */;
    data->localData[0]->realVars[87] /* gENCLS.p.ir variable */ = data->modelData->realVarsData[87].attribute /* gENCLS.p.ir variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[87].info /* gENCLS.p.ir */.name, (modelica_real) data->localData[0]->realVars[87] /* gENCLS.p.ir variable */);
  TRACE_POP
}

/*
equation index: 701
type: SIMPLE_ASSIGN
$START.pwLine4.vr.im = GEN2.v_0 * sin(GEN2.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_701(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,701};
  data->modelData->realVarsData[145].attribute /* pwLine4.vr.im variable */.start = (data->simulationInfo->realParameter[23] /* GEN2.v_0 PARAM */) * (sin(data->simulationInfo->realParameter[21] /* GEN2.angle_0rad PARAM */));
    data->localData[0]->realVars[145] /* pwLine4.vr.im variable */ = data->modelData->realVarsData[145].attribute /* pwLine4.vr.im variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[145].info /* pwLine4.vr.im */.name, (modelica_real) data->localData[0]->realVars[145] /* pwLine4.vr.im variable */);
  TRACE_POP
}

/*
equation index: 702
type: SIMPLE_ASSIGN
$START.pwLine4.vr.re = GEN2.v_0 * cos(GEN2.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_702(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,702};
  data->modelData->realVarsData[146].attribute /* pwLine4.vr.re variable */.start = (data->simulationInfo->realParameter[23] /* GEN2.v_0 PARAM */) * (cos(data->simulationInfo->realParameter[21] /* GEN2.angle_0rad PARAM */));
    data->localData[0]->realVars[146] /* pwLine4.vr.re variable */ = data->modelData->realVarsData[146].attribute /* pwLine4.vr.re variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[146].info /* pwLine4.vr.re */.name, (modelica_real) data->localData[0]->realVars[146] /* pwLine4.vr.re variable */);
  TRACE_POP
}

/*
equation index: 703
type: SIMPLE_ASSIGN
$START.pwLine4.vs.im = FAULT.v_0 * sin(FAULT.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_703(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,703};
  data->modelData->realVarsData[147].attribute /* pwLine4.vs.im variable */.start = (data->simulationInfo->realParameter[7] /* FAULT.v_0 PARAM */) * (sin(data->simulationInfo->realParameter[5] /* FAULT.angle_0rad PARAM */));
    data->localData[0]->realVars[147] /* pwLine4.vs.im variable */ = data->modelData->realVarsData[147].attribute /* pwLine4.vs.im variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[147].info /* pwLine4.vs.im */.name, (modelica_real) data->localData[0]->realVars[147] /* pwLine4.vs.im variable */);
  TRACE_POP
}

/*
equation index: 704
type: SIMPLE_ASSIGN
$START.pwLine4.vs.re = FAULT.v_0 * cos(FAULT.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_704(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,704};
  data->modelData->realVarsData[148].attribute /* pwLine4.vs.re variable */.start = (data->simulationInfo->realParameter[7] /* FAULT.v_0 PARAM */) * (cos(data->simulationInfo->realParameter[5] /* FAULT.angle_0rad PARAM */));
    data->localData[0]->realVars[148] /* pwLine4.vs.re variable */ = data->modelData->realVarsData[148].attribute /* pwLine4.vs.re variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[148].info /* pwLine4.vs.re */.name, (modelica_real) data->localData[0]->realVars[148] /* pwLine4.vs.re variable */);
  TRACE_POP
}

/*
equation index: 705
type: SIMPLE_ASSIGN
$START.pwLine3.vs.im = LOAD.v_0 * sin(LOAD.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_705(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,705};
  data->modelData->realVarsData[135].attribute /* pwLine3.vs.im variable */.start = (data->simulationInfo->realParameter[31] /* LOAD.v_0 PARAM */) * (sin(data->simulationInfo->realParameter[29] /* LOAD.angle_0rad PARAM */));
    data->localData[0]->realVars[135] /* pwLine3.vs.im variable */ = data->modelData->realVarsData[135].attribute /* pwLine3.vs.im variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[135].info /* pwLine3.vs.im */.name, (modelica_real) data->localData[0]->realVars[135] /* pwLine3.vs.im variable */);
  TRACE_POP
}

/*
equation index: 706
type: SIMPLE_ASSIGN
$START.pwLine3.vs.re = LOAD.v_0 * cos(LOAD.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_706(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,706};
  data->modelData->realVarsData[136].attribute /* pwLine3.vs.re variable */.start = (data->simulationInfo->realParameter[31] /* LOAD.v_0 PARAM */) * (cos(data->simulationInfo->realParameter[29] /* LOAD.angle_0rad PARAM */));
    data->localData[0]->realVars[136] /* pwLine3.vs.re variable */ = data->modelData->realVarsData[136].attribute /* pwLine3.vs.re variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[136].info /* pwLine3.vs.re */.name, (modelica_real) data->localData[0]->realVars[136] /* pwLine3.vs.re variable */);
  TRACE_POP
}

/*
equation index: 707
type: SIMPLE_ASSIGN
$START.pwLine.is.im = -gENROE.ii0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_707(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,707};
  data->modelData->realVarsData[115].attribute /* pwLine.is.im variable */.start = (-data->simulationInfo->realParameter[279] /* gENROE.ii0 PARAM */);
    data->localData[0]->realVars[115] /* pwLine.is.im variable */ = data->modelData->realVarsData[115].attribute /* pwLine.is.im variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[115].info /* pwLine.is.im */.name, (modelica_real) data->localData[0]->realVars[115] /* pwLine.is.im variable */);
  TRACE_POP
}

/*
equation index: 708
type: SIMPLE_ASSIGN
$START.pwLine.is.re = -gENROE.ir0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_708(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,708};
  data->modelData->realVarsData[116].attribute /* pwLine.is.re variable */.start = (-data->simulationInfo->realParameter[281] /* gENROE.ir0 PARAM */);
    data->localData[0]->realVars[116] /* pwLine.is.re variable */ = data->modelData->realVarsData[116].attribute /* pwLine.is.re variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[116].info /* pwLine.is.re */.name, (modelica_real) data->localData[0]->realVars[116] /* pwLine.is.re variable */);
  TRACE_POP
}

/*
equation index: 709
type: SIMPLE_ASSIGN
$START.pwLine.vs.im = gENROE.vi0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_709(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,709};
  data->modelData->realVarsData[117].attribute /* pwLine.vs.im variable */.start = data->simulationInfo->realParameter[288] /* gENROE.vi0 PARAM */;
    data->localData[0]->realVars[117] /* pwLine.vs.im variable */ = data->modelData->realVarsData[117].attribute /* pwLine.vs.im variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[117].info /* pwLine.vs.im */.name, (modelica_real) data->localData[0]->realVars[117] /* pwLine.vs.im variable */);
  TRACE_POP
}

/*
equation index: 710
type: SIMPLE_ASSIGN
$START.pwLine.vs.re = gENROE.vr0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_710(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,710};
  data->modelData->realVarsData[118].attribute /* pwLine.vs.re variable */.start = data->simulationInfo->realParameter[289] /* gENROE.vr0 PARAM */;
    data->localData[0]->realVars[118] /* pwLine.vs.re variable */ = data->modelData->realVarsData[118].attribute /* pwLine.vs.re variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[118].info /* pwLine.vs.re */.name, (modelica_real) data->localData[0]->realVars[118] /* pwLine.vs.re variable */);
  TRACE_POP
}

/*
equation index: 711
type: SIMPLE_ASSIGN
$START.eSAC1A.ECOMP = gENROE.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_711(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,711};
  data->modelData->realVarsData[57].attribute /* eSAC1A.ECOMP variable */.start = data->simulationInfo->realParameter[287] /* gENROE.v_0 PARAM */;
    data->localData[0]->realVars[57] /* eSAC1A.ECOMP variable */ = data->modelData->realVarsData[57].attribute /* eSAC1A.ECOMP variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[57].info /* eSAC1A.ECOMP */.name, (modelica_real) data->localData[0]->realVars[57] /* eSAC1A.ECOMP variable */);
  TRACE_POP
}

/*
equation index: 712
type: SIMPLE_ASSIGN
$START.gENCLS.V = gENCLS.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_712(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,712};
  data->modelData->realVarsData[81].attribute /* gENCLS.V variable */.start = data->simulationInfo->realParameter[200] /* gENCLS.v_0 PARAM */;
    data->localData[0]->realVars[81] /* gENCLS.V variable */ = data->modelData->realVarsData[81].attribute /* gENCLS.V variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[81].info /* gENCLS.V */.name, (modelica_real) data->localData[0]->realVars[81] /* gENCLS.V variable */);
  TRACE_POP
}

/*
equation index: 713
type: SIMPLE_ASSIGN
$START.LOAD.V = LOAD.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_713(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,713};
  data->modelData->realVarsData[44].attribute /* LOAD.V variable */.start = data->simulationInfo->realParameter[31] /* LOAD.v_0 PARAM */;
    data->localData[0]->realVars[44] /* LOAD.V variable */ = data->modelData->realVarsData[44].attribute /* LOAD.V variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[44].info /* LOAD.V */.name, (modelica_real) data->localData[0]->realVars[44] /* LOAD.V variable */);
  TRACE_POP
}
OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_updateBoundVariableAttributes(DATA *data, threadData_t *threadData)
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
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_675(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_676(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_677(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_678(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_679(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_680(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_681(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_682(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_683(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_684(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_685(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_686(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_687(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_688(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_689(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_690(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_691(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_692(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_693(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_694(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_695(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_696(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_697(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_698(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_699(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_700(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_701(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_702(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_703(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_704(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_705(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_706(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_707(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_708(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_709(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_710(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_711(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_712(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_713(data, threadData);
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  TRACE_POP
  return 0;
}

void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_updateBoundParameters_0(DATA *data, threadData_t *threadData);

/*
equation index: 714
type: SIMPLE_ASSIGN
gENROE.Xpp = gENROE.Xppd
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_714(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,714};
  data->simulationInfo->realParameter[259] /* gENROE.Xpp PARAM */ = data->simulationInfo->realParameter[260] /* gENROE.Xppd PARAM */;
  TRACE_POP
}

/*
equation index: 715
type: SIMPLE_ASSIGN
gENROE.p0 = gENROE.P_0 / gENROE.M_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_715(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,715};
  data->simulationInfo->realParameter[282] /* gENROE.p0 PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[241] /* gENROE.P_0 PARAM */,data->simulationInfo->realParameter[228] /* gENROE.M_b PARAM */,"gENROE.M_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 716
type: SIMPLE_ASSIGN
eSAC1A.add3_1.u1 = const.k
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_716(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,716};
  data->simulationInfo->realParameter[119] /* eSAC1A.add3_1.u1 PARAM */ = data->simulationInfo->realParameter[34] /* const.k PARAM */;
  TRACE_POP
}

/*
equation index: 717
type: SIMPLE_ASSIGN
eSAC1A.VOTHSG = const.k
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_717(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,717};
  data->simulationInfo->realParameter[106] /* eSAC1A.VOTHSG PARAM */ = data->simulationInfo->realParameter[34] /* const.k PARAM */;
  TRACE_POP
}

/*
equation index: 718
type: SIMPLE_ASSIGN
const.y = const.k
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_718(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,718};
  data->simulationInfo->realParameter[35] /* const.y PARAM */ = data->simulationInfo->realParameter[34] /* const.k PARAM */;
  TRACE_POP
}

/*
equation index: 719
type: SIMPLE_ASSIGN
eSAC1A.hV_GATE.n2 = const1.k
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_719(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,719};
  data->simulationInfo->realParameter[124] /* eSAC1A.hV_GATE.n2 PARAM */ = data->simulationInfo->realParameter[36] /* const1.k PARAM */;
  TRACE_POP
}

/*
equation index: 720
type: SIMPLE_ASSIGN
eSAC1A.VUEL = const1.k
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_720(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,720};
  data->simulationInfo->realParameter[108] /* eSAC1A.VUEL PARAM */ = data->simulationInfo->realParameter[36] /* const1.k PARAM */;
  TRACE_POP
}

/*
equation index: 721
type: SIMPLE_ASSIGN
const1.y = const1.k
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_721(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,721};
  data->simulationInfo->realParameter[37] /* const1.y PARAM */ = data->simulationInfo->realParameter[36] /* const1.k PARAM */;
  TRACE_POP
}

/*
equation index: 722
type: SIMPLE_ASSIGN
eSAC1A.lV_GATE.n1 = const2.k
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_722(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,722};
  data->simulationInfo->realParameter[148] /* eSAC1A.lV_GATE.n1 PARAM */ = data->simulationInfo->realParameter[38] /* const2.k PARAM */;
  TRACE_POP
}

/*
equation index: 723
type: SIMPLE_ASSIGN
eSAC1A.VOEL = const2.k
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_723(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,723};
  data->simulationInfo->realParameter[105] /* eSAC1A.VOEL PARAM */ = data->simulationInfo->realParameter[38] /* const2.k PARAM */;
  TRACE_POP
}

/*
equation index: 724
type: SIMPLE_ASSIGN
const2.y = const2.k
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_724(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,724};
  data->simulationInfo->realParameter[39] /* const2.y PARAM */ = data->simulationInfo->realParameter[38] /* const2.k PARAM */;
  TRACE_POP
}

/*
equation index: 725
type: SIMPLE_ASSIGN
eSAC1A.imLeadLag.T1 = eSAC1A.T_C
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_725(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,725};
  data->simulationInfo->realParameter[126] /* eSAC1A.imLeadLag.T1 PARAM */ = data->simulationInfo->realParameter[99] /* eSAC1A.T_C PARAM */;
  TRACE_POP
}

/*
equation index: 726
type: SIMPLE_ASSIGN
eSAC1A.imLeadLag.par1.y = eSAC1A.imLeadLag.T1
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_726(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,726};
  data->simulationInfo->realParameter[139] /* eSAC1A.imLeadLag.par1.y PARAM */ = data->simulationInfo->realParameter[126] /* eSAC1A.imLeadLag.T1 PARAM */;
  TRACE_POP
}

/*
equation index: 727
type: SIMPLE_ASSIGN
eSAC1A.imLeadLag.T2 = eSAC1A.T_B
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_727(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,727};
  data->simulationInfo->realParameter[127] /* eSAC1A.imLeadLag.T2 PARAM */ = data->simulationInfo->realParameter[98] /* eSAC1A.T_B PARAM */;
  TRACE_POP
}

/*
equation index: 728
type: SIMPLE_ASSIGN
eSAC1A.imLeadLag.par2.y = eSAC1A.imLeadLag.T2
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_728(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,728};
  data->simulationInfo->realParameter[140] /* eSAC1A.imLeadLag.par2.y PARAM */ = data->simulationInfo->realParameter[127] /* eSAC1A.imLeadLag.T2 PARAM */;
  TRACE_POP
}

/*
equation index: 729
type: SIMPLE_ASSIGN
eSAC1A.imSimpleLag.T = eSAC1A.T_R
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_729(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,729};
  data->simulationInfo->realParameter[144] /* eSAC1A.imSimpleLag.T PARAM */ = data->simulationInfo->realParameter[102] /* eSAC1A.T_R PARAM */;
  TRACE_POP
}

/*
equation index: 730
type: SIMPLE_ASSIGN
eSAC1A.imSimpleLag.const.y = eSAC1A.imSimpleLag.T
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_730(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,730};
  data->simulationInfo->realParameter[146] /* eSAC1A.imSimpleLag.const.y PARAM */ = data->simulationInfo->realParameter[144] /* eSAC1A.imSimpleLag.T PARAM */;
  TRACE_POP
}

/*
equation index: 731
type: SIMPLE_ASSIGN
eSAC1A.simpleLagLim.T = eSAC1A.T_A
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_731(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,731};
  data->simulationInfo->realParameter[174] /* eSAC1A.simpleLagLim.T PARAM */ = data->simulationInfo->realParameter[97] /* eSAC1A.T_A PARAM */;
  TRACE_POP
}

/*
equation index: 732
type: SIMPLE_ASSIGN
eSAC1A.simpleLagLim.const.y = eSAC1A.simpleLagLim.T
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_732(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,732};
  data->simulationInfo->realParameter[176] /* eSAC1A.simpleLagLim.const.y PARAM */ = data->simulationInfo->realParameter[174] /* eSAC1A.simpleLagLim.T PARAM */;
  TRACE_POP
}

/*
equation index: 733
type: SIMPLE_ASSIGN
eSAC1A.rectifierCommutationVoltageDrop.K_C = eSAC1A.K_C
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_733(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,733};
  data->simulationInfo->realParameter[151] /* eSAC1A.rectifierCommutationVoltageDrop.K_C PARAM */ = data->simulationInfo->realParameter[91] /* eSAC1A.K_C PARAM */;
  TRACE_POP
}

/*
equation index: 734
type: SIMPLE_ASSIGN
eSAC1A.rectifierCommutationVoltageDrop.gain2.k = eSAC1A.rectifierCommutationVoltageDrop.K_C
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_734(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,734};
  data->simulationInfo->realParameter[152] /* eSAC1A.rectifierCommutationVoltageDrop.gain2.k PARAM */ = data->simulationInfo->realParameter[151] /* eSAC1A.rectifierCommutationVoltageDrop.K_C PARAM */;
  TRACE_POP
}

/*
equation index: 735
type: SIMPLE_ASSIGN
eSAC1A.rotatingExciterWithDemagnetization.K_D = eSAC1A.K_D
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_735(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,735};
  data->simulationInfo->realParameter[156] /* eSAC1A.rotatingExciterWithDemagnetization.K_D PARAM */ = data->simulationInfo->realParameter[92] /* eSAC1A.K_D PARAM */;
  TRACE_POP
}

/*
equation index: 739
type: SIMPLE_ASSIGN
eSAC1A.rotatingExciterWithDemagnetization.T_E = eSAC1A.T_E
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_739(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,739};
  data->simulationInfo->realParameter[163] /* eSAC1A.rotatingExciterWithDemagnetization.T_E PARAM */ = data->simulationInfo->realParameter[100] /* eSAC1A.T_E PARAM */;
  TRACE_POP
}

/*
equation index: 740
type: SIMPLE_ASSIGN
eSAC1A.rotatingExciterWithDemagnetization.sISO.k = 1.0 / eSAC1A.rotatingExciterWithDemagnetization.T_E
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_740(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,740};
  data->simulationInfo->realParameter[165] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.k PARAM */ = DIVISION_SIM(1.0,data->simulationInfo->realParameter[163] /* eSAC1A.rotatingExciterWithDemagnetization.T_E PARAM */,"eSAC1A.rotatingExciterWithDemagnetization.T_E",equationIndexes);
  TRACE_POP
}

/*
equation index: 741
type: SIMPLE_ASSIGN
eSAC1A.rotatingExciterWithDemagnetization.E_2 = eSAC1A.E_2
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_741(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,741};
  data->simulationInfo->realParameter[154] /* eSAC1A.rotatingExciterWithDemagnetization.E_2 PARAM */ = data->simulationInfo->realParameter[87] /* eSAC1A.E_2 PARAM */;
  TRACE_POP
}

/*
equation index: 742
type: SIMPLE_ASSIGN
eSAC1A.rotatingExciterWithDemagnetization.se1.E2 = eSAC1A.rotatingExciterWithDemagnetization.E_2
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_742(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,742};
  data->simulationInfo->realParameter[170] /* eSAC1A.rotatingExciterWithDemagnetization.se1.E2 PARAM */ = data->simulationInfo->realParameter[154] /* eSAC1A.rotatingExciterWithDemagnetization.E_2 PARAM */;
  TRACE_POP
}

/*
equation index: 743
type: SIMPLE_ASSIGN
eSAC1A.rotatingExciterWithDemagnetization.E_1 = eSAC1A.E_1
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_743(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,743};
  data->simulationInfo->realParameter[153] /* eSAC1A.rotatingExciterWithDemagnetization.E_1 PARAM */ = data->simulationInfo->realParameter[86] /* eSAC1A.E_1 PARAM */;
  TRACE_POP
}

/*
equation index: 744
type: SIMPLE_ASSIGN
eSAC1A.rotatingExciterWithDemagnetization.se1.E1 = eSAC1A.rotatingExciterWithDemagnetization.E_1
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_744(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,744};
  data->simulationInfo->realParameter[169] /* eSAC1A.rotatingExciterWithDemagnetization.se1.E1 PARAM */ = data->simulationInfo->realParameter[153] /* eSAC1A.rotatingExciterWithDemagnetization.E_1 PARAM */;
  TRACE_POP
}

/*
equation index: 745
type: SIMPLE_ASSIGN
eSAC1A.rotatingExciterWithDemagnetization.S_EE_2 = eSAC1A.S_EE_2
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_745(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,745};
  data->simulationInfo->realParameter[159] /* eSAC1A.rotatingExciterWithDemagnetization.S_EE_2 PARAM */ = data->simulationInfo->realParameter[96] /* eSAC1A.S_EE_2 PARAM */;
  TRACE_POP
}

/*
equation index: 746
type: SIMPLE_ASSIGN
eSAC1A.rotatingExciterWithDemagnetization.se1.SE2 = eSAC1A.rotatingExciterWithDemagnetization.S_EE_2
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_746(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,746};
  data->simulationInfo->realParameter[172] /* eSAC1A.rotatingExciterWithDemagnetization.se1.SE2 PARAM */ = data->simulationInfo->realParameter[159] /* eSAC1A.rotatingExciterWithDemagnetization.S_EE_2 PARAM */;
  TRACE_POP
}

/*
equation index: 747
type: SIMPLE_ASSIGN
eSAC1A.rotatingExciterWithDemagnetization.S_EE_1 = eSAC1A.S_EE_1
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_747(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,747};
  data->simulationInfo->realParameter[158] /* eSAC1A.rotatingExciterWithDemagnetization.S_EE_1 PARAM */ = data->simulationInfo->realParameter[95] /* eSAC1A.S_EE_1 PARAM */;
  TRACE_POP
}

/*
equation index: 748
type: SIMPLE_ASSIGN
eSAC1A.rotatingExciterWithDemagnetization.se1.SE1 = eSAC1A.rotatingExciterWithDemagnetization.S_EE_1
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_748(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,748};
  data->simulationInfo->realParameter[171] /* eSAC1A.rotatingExciterWithDemagnetization.se1.SE1 PARAM */ = data->simulationInfo->realParameter[158] /* eSAC1A.rotatingExciterWithDemagnetization.S_EE_1 PARAM */;
  TRACE_POP
}

/*
equation index: 749
type: SIMPLE_ASSIGN
eSAC1A.rotatingExciterWithDemagnetization.Sum.k3 = eSAC1A.rotatingExciterWithDemagnetization.K_D
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_749(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,749};
  data->simulationInfo->realParameter[162] /* eSAC1A.rotatingExciterWithDemagnetization.Sum.k3 PARAM */ = data->simulationInfo->realParameter[156] /* eSAC1A.rotatingExciterWithDemagnetization.K_D PARAM */;
  TRACE_POP
}

/*
equation index: 750
type: SIMPLE_ASSIGN
eSAC1A.rotatingExciterWithDemagnetization.K_E = eSAC1A.K_E
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_750(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,750};
  data->simulationInfo->realParameter[157] /* eSAC1A.rotatingExciterWithDemagnetization.K_E PARAM */ = data->simulationInfo->realParameter[93] /* eSAC1A.K_E PARAM */;
  TRACE_POP
}

/*
equation index: 751
type: SIMPLE_ASSIGN
eSAC1A.rotatingExciterWithDemagnetization.gain.k = eSAC1A.rotatingExciterWithDemagnetization.K_E
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_751(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,751};
  data->simulationInfo->realParameter[164] /* eSAC1A.rotatingExciterWithDemagnetization.gain.k PARAM */ = data->simulationInfo->realParameter[157] /* eSAC1A.rotatingExciterWithDemagnetization.K_E PARAM */;
  TRACE_POP
}

/*
equation index: 754
type: SIMPLE_ASSIGN
eSAC1A.derivative.T = eSAC1A.T_F
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_754(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,754};
  data->simulationInfo->realParameter[120] /* eSAC1A.derivative.T PARAM */ = data->simulationInfo->realParameter[101] /* eSAC1A.T_F PARAM */;
  TRACE_POP
}

/*
equation index: 755
type: SIMPLE_ASSIGN
eSAC1A.derivative.k = eSAC1A.K_F
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_755(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,755};
  data->simulationInfo->realParameter[121] /* eSAC1A.derivative.k PARAM */ = data->simulationInfo->realParameter[94] /* eSAC1A.K_F PARAM */;
  TRACE_POP
}

/*
equation index: 756
type: SIMPLE_ASSIGN
eSAC1A.simpleLagLim.T_mod = if eSAC1A.simpleLagLim.T < 1e-15 then 1000.0 else eSAC1A.simpleLagLim.T
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_756(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,756};
  modelica_boolean tmp0;
  tmp0 = Less(data->simulationInfo->realParameter[174] /* eSAC1A.simpleLagLim.T PARAM */,1e-15);
  data->simulationInfo->realParameter[175] /* eSAC1A.simpleLagLim.T_mod PARAM */ = (tmp0?1000.0:data->simulationInfo->realParameter[174] /* eSAC1A.simpleLagLim.T PARAM */);
  TRACE_POP
}

/*
equation index: 757
type: SIMPLE_ASSIGN
eSAC1A.simpleLagLim.outMin = eSAC1A.V_AMIN
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_757(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,757};
  data->simulationInfo->realParameter[178] /* eSAC1A.simpleLagLim.outMin PARAM */ = data->simulationInfo->realParameter[110] /* eSAC1A.V_AMIN PARAM */;
  TRACE_POP
}

/*
equation index: 758
type: SIMPLE_ASSIGN
eSAC1A.simpleLagLim.outMax = eSAC1A.V_AMAX
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_758(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,758};
  data->simulationInfo->realParameter[177] /* eSAC1A.simpleLagLim.outMax PARAM */ = data->simulationInfo->realParameter[109] /* eSAC1A.V_AMAX PARAM */;
  TRACE_POP
}

/*
equation index: 759
type: SIMPLE_ASSIGN
eSAC1A.simpleLagLim.K = eSAC1A.K_A
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_759(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,759};
  data->simulationInfo->realParameter[173] /* eSAC1A.simpleLagLim.K PARAM */ = data->simulationInfo->realParameter[90] /* eSAC1A.K_A PARAM */;
  TRACE_POP
}

/*
equation index: 762
type: SIMPLE_ASSIGN
eSAC1A.limiter1.uMin = eSAC1A.V_RMIN
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_762(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,762};
  data->simulationInfo->realParameter[150] /* eSAC1A.limiter1.uMin PARAM */ = data->simulationInfo->realParameter[113] /* eSAC1A.V_RMIN PARAM */;
  TRACE_POP
}

/*
equation index: 763
type: SIMPLE_ASSIGN
eSAC1A.limiter1.uMax = eSAC1A.V_RMAX
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_763(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,763};
  data->simulationInfo->realParameter[149] /* eSAC1A.limiter1.uMax PARAM */ = data->simulationInfo->realParameter[112] /* eSAC1A.V_RMAX PARAM */;
  TRACE_POP
}

/*
equation index: 764
type: SIMPLE_ASSIGN
eSAC1A.imSimpleLag.T_mod = if eSAC1A.imSimpleLag.T < 1e-15 then 1000.0 else eSAC1A.imSimpleLag.T
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_764(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,764};
  modelica_boolean tmp1;
  tmp1 = Less(data->simulationInfo->realParameter[144] /* eSAC1A.imSimpleLag.T PARAM */,1e-15);
  data->simulationInfo->realParameter[145] /* eSAC1A.imSimpleLag.T_mod PARAM */ = (tmp1?1000.0:data->simulationInfo->realParameter[144] /* eSAC1A.imSimpleLag.T PARAM */);
  TRACE_POP
}

/*
equation index: 765
type: SIMPLE_ASSIGN
eSAC1A.imLeadLag.T2_dummy = if abs(eSAC1A.imLeadLag.T1 - eSAC1A.imLeadLag.T2) < 1e-15 then 1000.0 else eSAC1A.imLeadLag.T2
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_765(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,765};
  modelica_boolean tmp2;
  tmp2 = Less(fabs(data->simulationInfo->realParameter[126] /* eSAC1A.imLeadLag.T1 PARAM */ - data->simulationInfo->realParameter[127] /* eSAC1A.imLeadLag.T2 PARAM */),1e-15);
  data->simulationInfo->realParameter[128] /* eSAC1A.imLeadLag.T2_dummy PARAM */ = (tmp2?1000.0:data->simulationInfo->realParameter[127] /* eSAC1A.imLeadLag.T2 PARAM */);
  TRACE_POP
}

/*
equation index: 766
type: SIMPLE_ASSIGN
eSAC1A.imLeadLag.TF.a[1] = eSAC1A.imLeadLag.T2_dummy
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_766(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,766};
  data->simulationInfo->realParameter[129] /* eSAC1A.imLeadLag.TF.a[1] PARAM */ = data->simulationInfo->realParameter[128] /* eSAC1A.imLeadLag.T2_dummy PARAM */;
  TRACE_POP
}

/*
equation index: 767
type: SIMPLE_ASSIGN
eSAC1A.imLeadLag.TF.a_end = if eSAC1A.imLeadLag.TF.a[2] > 1e-13 * sqrt(eSAC1A.imLeadLag.TF.a[1] ^ 2.0 + eSAC1A.imLeadLag.TF.a[2] ^ 2.0) then eSAC1A.imLeadLag.TF.a[2] else 1.0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_767(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,767};
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_boolean tmp5;
  tmp3 = data->simulationInfo->realParameter[129] /* eSAC1A.imLeadLag.TF.a[1] PARAM */;
  tmp4 = data->simulationInfo->realParameter[130] /* eSAC1A.imLeadLag.TF.a[2] PARAM */;
  tmp5 = Greater(data->simulationInfo->realParameter[130] /* eSAC1A.imLeadLag.TF.a[2] PARAM */,(1e-13) * (sqrt((tmp3 * tmp3) + (tmp4 * tmp4))));
  data->simulationInfo->realParameter[131] /* eSAC1A.imLeadLag.TF.a_end PARAM */ = (tmp5?data->simulationInfo->realParameter[130] /* eSAC1A.imLeadLag.TF.a[2] PARAM */:1.0);
  TRACE_POP
}

/*
equation index: 768
type: SIMPLE_ASSIGN
eSAC1A.imLeadLag.TF.b[1] = eSAC1A.imLeadLag.K * eSAC1A.imLeadLag.T1
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_768(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,768};
  data->simulationInfo->realParameter[132] /* eSAC1A.imLeadLag.TF.b[1] PARAM */ = (data->simulationInfo->realParameter[125] /* eSAC1A.imLeadLag.K PARAM */) * (data->simulationInfo->realParameter[126] /* eSAC1A.imLeadLag.T1 PARAM */);
  TRACE_POP
}

/*
equation index: 769
type: SIMPLE_ASSIGN
eSAC1A.imLeadLag.TF.bb[1] = eSAC1A.imLeadLag.TF.b[1]
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_769(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,769};
  data->simulationInfo->realParameter[134] /* eSAC1A.imLeadLag.TF.bb[1] PARAM */ = data->simulationInfo->realParameter[132] /* eSAC1A.imLeadLag.TF.b[1] PARAM */;
  TRACE_POP
}

/*
equation index: 770
type: SIMPLE_ASSIGN
eSAC1A.imLeadLag.TF.d = eSAC1A.imLeadLag.TF.bb[1] / eSAC1A.imLeadLag.TF.a[1]
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_770(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,770};
  data->simulationInfo->realParameter[136] /* eSAC1A.imLeadLag.TF.d PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[134] /* eSAC1A.imLeadLag.TF.bb[1] PARAM */,data->simulationInfo->realParameter[129] /* eSAC1A.imLeadLag.TF.a[1] PARAM */,"eSAC1A.imLeadLag.TF.a[1]",equationIndexes);
  TRACE_POP
}

/*
equation index: 771
type: SIMPLE_ASSIGN
eSAC1A.imLeadLag.TF.b[2] = eSAC1A.imLeadLag.K
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_771(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,771};
  data->simulationInfo->realParameter[133] /* eSAC1A.imLeadLag.TF.b[2] PARAM */ = data->simulationInfo->realParameter[125] /* eSAC1A.imLeadLag.K PARAM */;
  TRACE_POP
}

/*
equation index: 772
type: SIMPLE_ASSIGN
eSAC1A.imLeadLag.TF.bb[2] = eSAC1A.imLeadLag.TF.b[2]
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_772(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,772};
  data->simulationInfo->realParameter[135] /* eSAC1A.imLeadLag.TF.bb[2] PARAM */ = data->simulationInfo->realParameter[133] /* eSAC1A.imLeadLag.TF.b[2] PARAM */;
  TRACE_POP
}

/*
equation index: 777
type: SIMPLE_ASSIGN
gENROE.K4q = (gENROE.Xpq - gENROE.Xppq) / (gENROE.Xpq - gENROE.Xl)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_777(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,777};
  data->simulationInfo->realParameter[227] /* gENROE.K4q PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[262] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[261] /* gENROE.Xppq PARAM */,data->simulationInfo->realParameter[262] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[257] /* gENROE.Xl PARAM */,"gENROE.Xpq - gENROE.Xl",equationIndexes);
  TRACE_POP
}

/*
equation index: 778
type: SIMPLE_ASSIGN
gENROE.K3q = (gENROE.Xppq - gENROE.Xl) / (gENROE.Xpq - gENROE.Xl)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_778(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,778};
  data->simulationInfo->realParameter[225] /* gENROE.K3q PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[261] /* gENROE.Xppq PARAM */ - data->simulationInfo->realParameter[257] /* gENROE.Xl PARAM */,data->simulationInfo->realParameter[262] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[257] /* gENROE.Xl PARAM */,"gENROE.Xpq - gENROE.Xl",equationIndexes);
  TRACE_POP
}

/*
equation index: 779
type: SIMPLE_ASSIGN
gENROE.K4d = (gENROE.Xpd - gENROE.Xppd) / (gENROE.Xpd - gENROE.Xl)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_779(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,779};
  data->simulationInfo->realParameter[226] /* gENROE.K4d PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[258] /* gENROE.Xpd PARAM */ - data->simulationInfo->realParameter[260] /* gENROE.Xppd PARAM */,data->simulationInfo->realParameter[258] /* gENROE.Xpd PARAM */ - data->simulationInfo->realParameter[257] /* gENROE.Xl PARAM */,"gENROE.Xpd - gENROE.Xl",equationIndexes);
  TRACE_POP
}

/*
equation index: 780
type: SIMPLE_ASSIGN
gENROE.K3d = (gENROE.Xppd - gENROE.Xl) / (gENROE.Xpd - gENROE.Xl)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_780(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,780};
  data->simulationInfo->realParameter[224] /* gENROE.K3d PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[260] /* gENROE.Xppd PARAM */ - data->simulationInfo->realParameter[257] /* gENROE.Xl PARAM */,data->simulationInfo->realParameter[258] /* gENROE.Xpd PARAM */ - data->simulationInfo->realParameter[257] /* gENROE.Xl PARAM */,"gENROE.Xpd - gENROE.Xl",equationIndexes);
  TRACE_POP
}

/*
equation index: 781
type: SIMPLE_ASSIGN
gENROE.K2q = (gENROE.Xpq - gENROE.Xl) * (gENROE.Xppq - gENROE.Xl) / (gENROE.Xpq - gENROE.Xppq)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_781(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,781};
  data->simulationInfo->realParameter[223] /* gENROE.K2q PARAM */ = (data->simulationInfo->realParameter[262] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[257] /* gENROE.Xl PARAM */) * (DIVISION_SIM(data->simulationInfo->realParameter[261] /* gENROE.Xppq PARAM */ - data->simulationInfo->realParameter[257] /* gENROE.Xl PARAM */,data->simulationInfo->realParameter[262] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[261] /* gENROE.Xppq PARAM */,"gENROE.Xpq - gENROE.Xppq",equationIndexes));
  TRACE_POP
}

/*
equation index: 782
type: SIMPLE_ASSIGN
gENROE.K1q = (gENROE.Xpq - gENROE.Xppq) * (gENROE.Xq - gENROE.Xpq) / (gENROE.Xpq - gENROE.Xl) ^ 2.0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_782(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,782};
  modelica_real tmp6;
  tmp6 = data->simulationInfo->realParameter[262] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[257] /* gENROE.Xl PARAM */;
  data->simulationInfo->realParameter[221] /* gENROE.K1q PARAM */ = (data->simulationInfo->realParameter[262] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[261] /* gENROE.Xppq PARAM */) * (DIVISION_SIM(data->simulationInfo->realParameter[263] /* gENROE.Xq PARAM */ - data->simulationInfo->realParameter[262] /* gENROE.Xpq PARAM */,(tmp6 * tmp6),"(gENROE.Xpq - gENROE.Xl) ^ 2.0",equationIndexes));
  TRACE_POP
}

/*
equation index: 783
type: SIMPLE_ASSIGN
gENROE.K2d = (gENROE.Xpd - gENROE.Xl) * (gENROE.Xppd - gENROE.Xl) / (gENROE.Xpd - gENROE.Xppd)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_783(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,783};
  data->simulationInfo->realParameter[222] /* gENROE.K2d PARAM */ = (data->simulationInfo->realParameter[258] /* gENROE.Xpd PARAM */ - data->simulationInfo->realParameter[257] /* gENROE.Xl PARAM */) * (DIVISION_SIM(data->simulationInfo->realParameter[260] /* gENROE.Xppd PARAM */ - data->simulationInfo->realParameter[257] /* gENROE.Xl PARAM */,data->simulationInfo->realParameter[258] /* gENROE.Xpd PARAM */ - data->simulationInfo->realParameter[260] /* gENROE.Xppd PARAM */,"gENROE.Xpd - gENROE.Xppd",equationIndexes));
  TRACE_POP
}

/*
equation index: 784
type: SIMPLE_ASSIGN
gENROE.K1d = (gENROE.Xpd - gENROE.Xppd) * (gENROE.Xd - gENROE.Xpd) / (gENROE.Xpd - gENROE.Xl) ^ 2.0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_784(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,784};
  modelica_real tmp7;
  tmp7 = data->simulationInfo->realParameter[258] /* gENROE.Xpd PARAM */ - data->simulationInfo->realParameter[257] /* gENROE.Xl PARAM */;
  data->simulationInfo->realParameter[220] /* gENROE.K1d PARAM */ = (data->simulationInfo->realParameter[258] /* gENROE.Xpd PARAM */ - data->simulationInfo->realParameter[260] /* gENROE.Xppd PARAM */) * (DIVISION_SIM(data->simulationInfo->realParameter[256] /* gENROE.Xd PARAM */ - data->simulationInfo->realParameter[258] /* gENROE.Xpd PARAM */,(tmp7 * tmp7),"(gENROE.Xpd - gENROE.Xl) ^ 2.0",equationIndexes));
  TRACE_POP
}

/*
equation index: 785
type: SIMPLE_ASSIGN
gENROE.q0 = gENROE.Q_0 / gENROE.M_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_785(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,785};
  data->simulationInfo->realParameter[284] /* gENROE.q0 PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[242] /* gENROE.Q_0 PARAM */,data->simulationInfo->realParameter[228] /* gENROE.M_b PARAM */,"gENROE.M_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 786
type: SIMPLE_ASSIGN
gENROE.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_786(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,786};
  data->simulationInfo->realParameter[248] /* gENROE.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 787
type: SIMPLE_ASSIGN
gENROE.CoB = gENROE.M_b / gENROE.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_787(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,787};
  data->simulationInfo->realParameter[206] /* gENROE.CoB PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[228] /* gENROE.M_b PARAM */,data->simulationInfo->realParameter[248] /* gENROE.S_b PARAM */,"gENROE.S_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 788
type: SIMPLE_ASSIGN
gENROE.angle_0rad = 0.0174532925199433 * gENROE.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_788(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,788};
  data->simulationInfo->realParameter[272] /* gENROE.angle_0rad PARAM */ = (0.0174532925199433) * (data->simulationInfo->realParameter[271] /* gENROE.angle_0 PARAM */);
  TRACE_POP
}

/*
equation index: 789
type: SIMPLE_ASSIGN
gENROE.vr0 = gENROE.v_0 * cos(gENROE.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_789(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,789};
  data->simulationInfo->realParameter[289] /* gENROE.vr0 PARAM */ = (data->simulationInfo->realParameter[287] /* gENROE.v_0 PARAM */) * (cos(data->simulationInfo->realParameter[272] /* gENROE.angle_0rad PARAM */));
  TRACE_POP
}

/*
equation index: 790
type: SIMPLE_ASSIGN
gENROE.vi0 = gENROE.v_0 * sin(gENROE.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_790(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,790};
  data->simulationInfo->realParameter[288] /* gENROE.vi0 PARAM */ = (data->simulationInfo->realParameter[287] /* gENROE.v_0 PARAM */) * (sin(data->simulationInfo->realParameter[272] /* gENROE.angle_0rad PARAM */));
  TRACE_POP
}

/*
equation index: 791
type: SIMPLE_ASSIGN
gENROE.ii0 = gENROE.CoB * (gENROE.q0 * gENROE.vr0 - gENROE.p0 * gENROE.vi0) / (gENROE.vr0 ^ 2.0 + gENROE.vi0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_791(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,791};
  modelica_real tmp8;
  modelica_real tmp9;
  tmp8 = data->simulationInfo->realParameter[289] /* gENROE.vr0 PARAM */;
  tmp9 = data->simulationInfo->realParameter[288] /* gENROE.vi0 PARAM */;
  data->simulationInfo->realParameter[279] /* gENROE.ii0 PARAM */ = (data->simulationInfo->realParameter[206] /* gENROE.CoB PARAM */) * (DIVISION_SIM((data->simulationInfo->realParameter[284] /* gENROE.q0 PARAM */) * (data->simulationInfo->realParameter[289] /* gENROE.vr0 PARAM */) - ((data->simulationInfo->realParameter[282] /* gENROE.p0 PARAM */) * (data->simulationInfo->realParameter[288] /* gENROE.vi0 PARAM */)),(tmp8 * tmp8) + (tmp9 * tmp9),"gENROE.vr0 ^ 2.0 + gENROE.vi0 ^ 2.0",equationIndexes));
  TRACE_POP
}

/*
equation index: 792
type: SIMPLE_ASSIGN
gENROE.ir0 = (-gENROE.CoB) * (gENROE.p0 * gENROE.vr0 + gENROE.q0 * gENROE.vi0) / (gENROE.vr0 ^ 2.0 + gENROE.vi0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_792(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,792};
  modelica_real tmp10;
  modelica_real tmp11;
  tmp10 = data->simulationInfo->realParameter[289] /* gENROE.vr0 PARAM */;
  tmp11 = data->simulationInfo->realParameter[288] /* gENROE.vi0 PARAM */;
  data->simulationInfo->realParameter[281] /* gENROE.ir0 PARAM */ = ((-data->simulationInfo->realParameter[206] /* gENROE.CoB PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[282] /* gENROE.p0 PARAM */) * (data->simulationInfo->realParameter[289] /* gENROE.vr0 PARAM */) + (data->simulationInfo->realParameter[284] /* gENROE.q0 PARAM */) * (data->simulationInfo->realParameter[288] /* gENROE.vi0 PARAM */),(tmp10 * tmp10) + (tmp11 * tmp11),"gENROE.vr0 ^ 2.0 + gENROE.vi0 ^ 2.0",equationIndexes));
  TRACE_POP
}

/*
equation index: 793
type: SIMPLE_ASSIGN
gENROE.fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_793(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,793};
  data->simulationInfo->realParameter[277] /* gENROE.fn PARAM */ = data->simulationInfo->realParameter[33] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 794
type: SIMPLE_ASSIGN
gENROE.w_b = 6.283185307179586 * gENROE.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_794(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,794};
  data->simulationInfo->realParameter[290] /* gENROE.w_b PARAM */ = (6.283185307179586) * (data->simulationInfo->realParameter[277] /* gENROE.fn PARAM */);
  TRACE_POP
}

/*
equation index: 803
type: SIMPLE_ASSIGN
FAULT.angle_0rad = 0.0174532925199433 * FAULT.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_803(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,803};
  data->simulationInfo->realParameter[5] /* FAULT.angle_0rad PARAM */ = (0.0174532925199433) * (data->simulationInfo->realParameter[4] /* FAULT.angle_0 PARAM */);
  TRACE_POP
}

/*
equation index: 810
type: SIMPLE_ASSIGN
FAULT.fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_810(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,810};
  data->simulationInfo->realParameter[6] /* FAULT.fn PARAM */ = data->simulationInfo->realParameter[33] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 813
type: SIMPLE_ASSIGN
FAULT.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_813(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,813};
  data->simulationInfo->realParameter[2] /* FAULT.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 814
type: SIMPLE_ASSIGN
GEN2.angle_0rad = 0.0174532925199433 * GEN2.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_814(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,814};
  data->simulationInfo->realParameter[21] /* GEN2.angle_0rad PARAM */ = (0.0174532925199433) * (data->simulationInfo->realParameter[20] /* GEN2.angle_0 PARAM */);
  TRACE_POP
}

/*
equation index: 821
type: SIMPLE_ASSIGN
GEN2.fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_821(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,821};
  data->simulationInfo->realParameter[22] /* GEN2.fn PARAM */ = data->simulationInfo->realParameter[33] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 824
type: SIMPLE_ASSIGN
GEN2.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_824(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,824};
  data->simulationInfo->realParameter[18] /* GEN2.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 825
type: SIMPLE_ASSIGN
LOAD.angle_0rad = 0.0174532925199433 * LOAD.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_825(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,825};
  data->simulationInfo->realParameter[29] /* LOAD.angle_0rad PARAM */ = (0.0174532925199433) * (data->simulationInfo->realParameter[28] /* LOAD.angle_0 PARAM */);
  TRACE_POP
}

/*
equation index: 832
type: SIMPLE_ASSIGN
LOAD.fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_832(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,832};
  data->simulationInfo->realParameter[30] /* LOAD.fn PARAM */ = data->simulationInfo->realParameter[33] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 835
type: SIMPLE_ASSIGN
LOAD.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_835(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,835};
  data->simulationInfo->realParameter[26] /* LOAD.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 836
type: SIMPLE_ASSIGN
GEN1.angle_0rad = 0.0174532925199433 * GEN1.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_836(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,836};
  data->simulationInfo->realParameter[13] /* GEN1.angle_0rad PARAM */ = (0.0174532925199433) * (data->simulationInfo->realParameter[12] /* GEN1.angle_0 PARAM */);
  TRACE_POP
}

/*
equation index: 843
type: SIMPLE_ASSIGN
GEN1.fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_843(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,843};
  data->simulationInfo->realParameter[14] /* GEN1.fn PARAM */ = data->simulationInfo->realParameter[33] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 846
type: SIMPLE_ASSIGN
GEN1.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_846(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,846};
  data->simulationInfo->realParameter[10] /* GEN1.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 847
type: SIMPLE_ASSIGN
pwFault.ground = abs(pwFault.R) < 1e-15 and abs(pwFault.X) < 1e-15
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_847(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,847};
  modelica_boolean tmp12;
  modelica_boolean tmp13;
  tmp12 = Less(fabs(data->simulationInfo->realParameter[291] /* pwFault.R PARAM */),1e-15);
  tmp13 = Less(fabs(data->simulationInfo->realParameter[292] /* pwFault.X PARAM */),1e-15);
  data->simulationInfo->booleanParameter[68] /* pwFault.ground PARAM */ = (tmp12 && tmp13);
  TRACE_POP
}

/*
equation index: 848
type: SIMPLE_ASSIGN
constantLoad.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_848(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,848};
  data->simulationInfo->realParameter[50] /* constantLoad.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 855
type: SIMPLE_ASSIGN
constantLoad.angle_0rad = 0.0174532925199433 * constantLoad.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_855(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,855};
  data->simulationInfo->realParameter[64] /* constantLoad.angle_0rad PARAM */ = (0.0174532925199433) * (data->simulationInfo->realParameter[63] /* constantLoad.angle_0 PARAM */);
  TRACE_POP
}

/*
equation index: 856
type: SIMPLE_ASSIGN
constantLoad.vr0 = constantLoad.v_0 * cos(constantLoad.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_856(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,856};
  data->simulationInfo->realParameter[80] /* constantLoad.vr0 PARAM */ = (data->simulationInfo->realParameter[78] /* constantLoad.v_0 PARAM */) * (cos(data->simulationInfo->realParameter[64] /* constantLoad.angle_0rad PARAM */));
  TRACE_POP
}

/*
equation index: 857
type: SIMPLE_ASSIGN
constantLoad.vi0 = constantLoad.v_0 * sin(constantLoad.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_857(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,857};
  data->simulationInfo->realParameter[79] /* constantLoad.vi0 PARAM */ = (data->simulationInfo->realParameter[78] /* constantLoad.v_0 PARAM */) * (sin(data->simulationInfo->realParameter[64] /* constantLoad.angle_0rad PARAM */));
  TRACE_POP
}

/*
equation index: 865
type: SIMPLE_ASSIGN
constantLoad.fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_865(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,865};
  data->simulationInfo->realParameter[72] /* constantLoad.fn PARAM */ = data->simulationInfo->realParameter[33] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 868
type: SIMPLE_ASSIGN
gENCLS.angle_0rad = 0.0174532925199433 * gENCLS.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_868(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,868};
  data->simulationInfo->realParameter[191] /* gENCLS.angle_0rad PARAM */ = (0.0174532925199433) * (data->simulationInfo->realParameter[190] /* gENCLS.angle_0 PARAM */);
  TRACE_POP
}

/*
equation index: 869
type: SIMPLE_ASSIGN
gENCLS.vr0 = gENCLS.v_0 * cos(gENCLS.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_869(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,869};
  data->simulationInfo->realParameter[205] /* gENCLS.vr0 PARAM */ = (data->simulationInfo->realParameter[200] /* gENCLS.v_0 PARAM */) * (cos(data->simulationInfo->realParameter[191] /* gENCLS.angle_0rad PARAM */));
  TRACE_POP
}

/*
equation index: 870
type: SIMPLE_ASSIGN
gENCLS.vi0 = gENCLS.v_0 * sin(gENCLS.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_870(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,870};
  data->simulationInfo->realParameter[203] /* gENCLS.vi0 PARAM */ = (data->simulationInfo->realParameter[200] /* gENCLS.v_0 PARAM */) * (sin(data->simulationInfo->realParameter[191] /* gENCLS.angle_0rad PARAM */));
  TRACE_POP
}

/*
equation index: 871
type: SIMPLE_ASSIGN
gENCLS.p0 = gENCLS.P_0 / gENCLS.M_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_871(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,871};
  data->simulationInfo->realParameter[198] /* gENCLS.p0 PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[184] /* gENCLS.P_0 PARAM */,data->simulationInfo->realParameter[183] /* gENCLS.M_b PARAM */,"gENCLS.M_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 872
type: SIMPLE_ASSIGN
gENCLS.q0 = gENCLS.Q_0 / gENCLS.M_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_872(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,872};
  data->simulationInfo->realParameter[199] /* gENCLS.q0 PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[185] /* gENCLS.Q_0 PARAM */,data->simulationInfo->realParameter[183] /* gENCLS.M_b PARAM */,"gENCLS.M_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 873
type: SIMPLE_ASSIGN
gENCLS.ir0 = (gENCLS.p0 * gENCLS.vr0 + gENCLS.q0 * gENCLS.vi0) / (gENCLS.vr0 ^ 2.0 + gENCLS.vi0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_873(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,873};
  modelica_real tmp14;
  modelica_real tmp15;
  tmp14 = data->simulationInfo->realParameter[205] /* gENCLS.vr0 PARAM */;
  tmp15 = data->simulationInfo->realParameter[203] /* gENCLS.vi0 PARAM */;
  data->simulationInfo->realParameter[197] /* gENCLS.ir0 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[198] /* gENCLS.p0 PARAM */) * (data->simulationInfo->realParameter[205] /* gENCLS.vr0 PARAM */) + (data->simulationInfo->realParameter[199] /* gENCLS.q0 PARAM */) * (data->simulationInfo->realParameter[203] /* gENCLS.vi0 PARAM */),(tmp14 * tmp14) + (tmp15 * tmp15),"gENCLS.vr0 ^ 2.0 + gENCLS.vi0 ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 874
type: SIMPLE_ASSIGN
gENCLS.ii0 = (gENCLS.p0 * gENCLS.vi0 - gENCLS.q0 * gENCLS.vr0) / (gENCLS.vr0 ^ 2.0 + gENCLS.vi0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_874(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,874};
  modelica_real tmp16;
  modelica_real tmp17;
  tmp16 = data->simulationInfo->realParameter[205] /* gENCLS.vr0 PARAM */;
  tmp17 = data->simulationInfo->realParameter[203] /* gENCLS.vi0 PARAM */;
  data->simulationInfo->realParameter[195] /* gENCLS.ii0 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[198] /* gENCLS.p0 PARAM */) * (data->simulationInfo->realParameter[203] /* gENCLS.vi0 PARAM */) - ((data->simulationInfo->realParameter[199] /* gENCLS.q0 PARAM */) * (data->simulationInfo->realParameter[205] /* gENCLS.vr0 PARAM */)),(tmp16 * tmp16) + (tmp17 * tmp17),"gENCLS.vr0 ^ 2.0 + gENCLS.vi0 ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 875
type: SIMPLE_ASSIGN
gENCLS.delta0 = atan2(gENCLS.vi0 + gENCLS.R_a * gENCLS.ii0 + gENCLS.X_d * gENCLS.ir0, gENCLS.vr0 + gENCLS.R_a * gENCLS.ir0 - gENCLS.X_d * gENCLS.ii0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_875(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,875};
  data->simulationInfo->realParameter[192] /* gENCLS.delta0 PARAM */ = atan2(data->simulationInfo->realParameter[203] /* gENCLS.vi0 PARAM */ + (data->simulationInfo->realParameter[186] /* gENCLS.R_a PARAM */) * (data->simulationInfo->realParameter[195] /* gENCLS.ii0 PARAM */) + (data->simulationInfo->realParameter[189] /* gENCLS.X_d PARAM */) * (data->simulationInfo->realParameter[197] /* gENCLS.ir0 PARAM */), data->simulationInfo->realParameter[205] /* gENCLS.vr0 PARAM */ + (data->simulationInfo->realParameter[186] /* gENCLS.R_a PARAM */) * (data->simulationInfo->realParameter[197] /* gENCLS.ir0 PARAM */) - ((data->simulationInfo->realParameter[189] /* gENCLS.X_d PARAM */) * (data->simulationInfo->realParameter[195] /* gENCLS.ii0 PARAM */)));
  TRACE_POP
}

/*
equation index: 876
type: SIMPLE_ASSIGN
gENCLS.vq0 = gENCLS.vr0 * sin(1.570796326794897 - gENCLS.delta0) + gENCLS.vi0 * cos(1.570796326794897 - gENCLS.delta0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_876(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,876};
  data->simulationInfo->realParameter[204] /* gENCLS.vq0 PARAM */ = (data->simulationInfo->realParameter[205] /* gENCLS.vr0 PARAM */) * (sin(1.570796326794897 - data->simulationInfo->realParameter[192] /* gENCLS.delta0 PARAM */)) + (data->simulationInfo->realParameter[203] /* gENCLS.vi0 PARAM */) * (cos(1.570796326794897 - data->simulationInfo->realParameter[192] /* gENCLS.delta0 PARAM */));
  TRACE_POP
}

/*
equation index: 877
type: SIMPLE_ASSIGN
gENCLS.id0 = gENCLS.ir0 * cos(1.570796326794897 - gENCLS.delta0) - gENCLS.ii0 * sin(1.570796326794897 - gENCLS.delta0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_877(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,877};
  data->simulationInfo->realParameter[194] /* gENCLS.id0 PARAM */ = (data->simulationInfo->realParameter[197] /* gENCLS.ir0 PARAM */) * (cos(1.570796326794897 - data->simulationInfo->realParameter[192] /* gENCLS.delta0 PARAM */)) - ((data->simulationInfo->realParameter[195] /* gENCLS.ii0 PARAM */) * (sin(1.570796326794897 - data->simulationInfo->realParameter[192] /* gENCLS.delta0 PARAM */)));
  TRACE_POP
}

/*
equation index: 878
type: SIMPLE_ASSIGN
gENCLS.iq0 = gENCLS.ir0 * sin(1.570796326794897 - gENCLS.delta0) + gENCLS.ii0 * cos(1.570796326794897 - gENCLS.delta0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_878(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,878};
  data->simulationInfo->realParameter[196] /* gENCLS.iq0 PARAM */ = (data->simulationInfo->realParameter[197] /* gENCLS.ir0 PARAM */) * (sin(1.570796326794897 - data->simulationInfo->realParameter[192] /* gENCLS.delta0 PARAM */)) + (data->simulationInfo->realParameter[195] /* gENCLS.ii0 PARAM */) * (cos(1.570796326794897 - data->simulationInfo->realParameter[192] /* gENCLS.delta0 PARAM */));
  TRACE_POP
}

/*
equation index: 879
type: SIMPLE_ASSIGN
gENCLS.vf0 = gENCLS.vq0 + gENCLS.R_a * gENCLS.iq0 + gENCLS.X_d * gENCLS.id0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_879(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,879};
  data->simulationInfo->realParameter[202] /* gENCLS.vf0 PARAM */ = data->simulationInfo->realParameter[204] /* gENCLS.vq0 PARAM */ + (data->simulationInfo->realParameter[186] /* gENCLS.R_a PARAM */) * (data->simulationInfo->realParameter[196] /* gENCLS.iq0 PARAM */) + (data->simulationInfo->realParameter[189] /* gENCLS.X_d PARAM */) * (data->simulationInfo->realParameter[194] /* gENCLS.id0 PARAM */);
  TRACE_POP
}

/*
equation index: 880
type: SIMPLE_ASSIGN
gENCLS.vd0 = gENCLS.vr0 * cos(1.570796326794897 - gENCLS.delta0) - gENCLS.vi0 * sin(1.570796326794897 - gENCLS.delta0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_880(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,880};
  data->simulationInfo->realParameter[201] /* gENCLS.vd0 PARAM */ = (data->simulationInfo->realParameter[205] /* gENCLS.vr0 PARAM */) * (cos(1.570796326794897 - data->simulationInfo->realParameter[192] /* gENCLS.delta0 PARAM */)) - ((data->simulationInfo->realParameter[203] /* gENCLS.vi0 PARAM */) * (sin(1.570796326794897 - data->simulationInfo->realParameter[192] /* gENCLS.delta0 PARAM */)));
  TRACE_POP
}

/*
equation index: 881
type: SIMPLE_ASSIGN
gENCLS.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_881(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,881};
  data->simulationInfo->realParameter[187] /* gENCLS.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 882
type: SIMPLE_ASSIGN
gENCLS.CoB = gENCLS.M_b / gENCLS.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_882(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,882};
  data->simulationInfo->realParameter[180] /* gENCLS.CoB PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[183] /* gENCLS.M_b PARAM */,data->simulationInfo->realParameter[187] /* gENCLS.S_b PARAM */,"gENCLS.S_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 890
type: SIMPLE_ASSIGN
gENCLS.fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_890(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,890};
  data->simulationInfo->realParameter[193] /* gENCLS.fn PARAM */ = data->simulationInfo->realParameter[33] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 893
type: SIMPLE_ASSIGN
pwLine4.Z.im = pwLine4.X
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_893(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,893};
  data->simulationInfo->realParameter[335] /* pwLine4.Z.im PARAM */ = data->simulationInfo->realParameter[332] /* pwLine4.X PARAM */;
  TRACE_POP
}

/*
equation index: 894
type: SIMPLE_ASSIGN
pwLine4.Z.re = pwLine4.R
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_894(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,894};
  data->simulationInfo->realParameter[336] /* pwLine4.Z.re PARAM */ = data->simulationInfo->realParameter[330] /* pwLine4.R PARAM */;
  TRACE_POP
}

/*
equation index: 895
type: SIMPLE_ASSIGN
pwLine4.Y.im = pwLine4.B
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_895(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,895};
  data->simulationInfo->realParameter[333] /* pwLine4.Y.im PARAM */ = data->simulationInfo->realParameter[328] /* pwLine4.B PARAM */;
  TRACE_POP
}

/*
equation index: 896
type: SIMPLE_ASSIGN
pwLine4.Y.re = pwLine4.G
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_896(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,896};
  data->simulationInfo->realParameter[334] /* pwLine4.Y.re PARAM */ = data->simulationInfo->realParameter[329] /* pwLine4.G PARAM */;
  TRACE_POP
}

/*
equation index: 898
type: SIMPLE_ASSIGN
pwLine4.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_898(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,898};
  data->simulationInfo->realParameter[331] /* pwLine4.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 899
type: SIMPLE_ASSIGN
pwLine3.Z.im = pwLine3.X
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_899(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,899};
  data->simulationInfo->realParameter[324] /* pwLine3.Z.im PARAM */ = data->simulationInfo->realParameter[321] /* pwLine3.X PARAM */;
  TRACE_POP
}

/*
equation index: 900
type: SIMPLE_ASSIGN
pwLine3.Z.re = pwLine3.R
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_900(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,900};
  data->simulationInfo->realParameter[325] /* pwLine3.Z.re PARAM */ = data->simulationInfo->realParameter[319] /* pwLine3.R PARAM */;
  TRACE_POP
}

/*
equation index: 901
type: SIMPLE_ASSIGN
pwLine3.Y.im = pwLine3.B
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_901(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,901};
  data->simulationInfo->realParameter[322] /* pwLine3.Y.im PARAM */ = data->simulationInfo->realParameter[317] /* pwLine3.B PARAM */;
  TRACE_POP
}

/*
equation index: 902
type: SIMPLE_ASSIGN
pwLine3.Y.re = pwLine3.G
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_902(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,902};
  data->simulationInfo->realParameter[323] /* pwLine3.Y.re PARAM */ = data->simulationInfo->realParameter[318] /* pwLine3.G PARAM */;
  TRACE_POP
}

/*
equation index: 904
type: SIMPLE_ASSIGN
pwLine3.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_904(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,904};
  data->simulationInfo->realParameter[320] /* pwLine3.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 905
type: SIMPLE_ASSIGN
pwLine1.Z.im = pwLine1.X
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_905(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,905};
  data->simulationInfo->realParameter[313] /* pwLine1.Z.im PARAM */ = data->simulationInfo->realParameter[310] /* pwLine1.X PARAM */;
  TRACE_POP
}

/*
equation index: 906
type: SIMPLE_ASSIGN
pwLine1.Z.re = pwLine1.R
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_906(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,906};
  data->simulationInfo->realParameter[314] /* pwLine1.Z.re PARAM */ = data->simulationInfo->realParameter[308] /* pwLine1.R PARAM */;
  TRACE_POP
}

/*
equation index: 907
type: SIMPLE_ASSIGN
pwLine1.Y.im = pwLine1.B
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_907(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,907};
  data->simulationInfo->realParameter[311] /* pwLine1.Y.im PARAM */ = data->simulationInfo->realParameter[306] /* pwLine1.B PARAM */;
  TRACE_POP
}

/*
equation index: 908
type: SIMPLE_ASSIGN
pwLine1.Y.re = pwLine1.G
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_908(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,908};
  data->simulationInfo->realParameter[312] /* pwLine1.Y.re PARAM */ = data->simulationInfo->realParameter[307] /* pwLine1.G PARAM */;
  TRACE_POP
}

/*
equation index: 910
type: SIMPLE_ASSIGN
pwLine1.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_910(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,910};
  data->simulationInfo->realParameter[309] /* pwLine1.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 911
type: SIMPLE_ASSIGN
pwLine.Z.im = pwLine.X
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_911(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,911};
  data->simulationInfo->realParameter[302] /* pwLine.Z.im PARAM */ = data->simulationInfo->realParameter[299] /* pwLine.X PARAM */;
  TRACE_POP
}

/*
equation index: 912
type: SIMPLE_ASSIGN
pwLine.Z.re = pwLine.R
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_912(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,912};
  data->simulationInfo->realParameter[303] /* pwLine.Z.re PARAM */ = data->simulationInfo->realParameter[297] /* pwLine.R PARAM */;
  TRACE_POP
}

/*
equation index: 913
type: SIMPLE_ASSIGN
pwLine.Y.im = pwLine.B
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_913(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,913};
  data->simulationInfo->realParameter[300] /* pwLine.Y.im PARAM */ = data->simulationInfo->realParameter[295] /* pwLine.B PARAM */;
  TRACE_POP
}

/*
equation index: 914
type: SIMPLE_ASSIGN
pwLine.Y.re = pwLine.G
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_914(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,914};
  data->simulationInfo->realParameter[301] /* pwLine.Y.re PARAM */ = data->simulationInfo->realParameter[296] /* pwLine.G PARAM */;
  TRACE_POP
}

/*
equation index: 916
type: SIMPLE_ASSIGN
pwLine.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_916(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,916};
  data->simulationInfo->realParameter[298] /* pwLine.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_9(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_8(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_7(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_6(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_5(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_4(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_3(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_2(DATA *data, threadData_t *threadData);


/*
equation index: 926
type: ALGORITHM

  assert(eSAC1A.rotatingExciterWithDemagnetization.sISO.initType >= Modelica.Blocks.Types.Init.NoInit and eSAC1A.rotatingExciterWithDemagnetization.sISO.initType <= Modelica.Blocks.Types.Init.InitialOutput, "Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= eSAC1A.rotatingExciterWithDemagnetization.sISO.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: " + String(eSAC1A.rotatingExciterWithDemagnetization.sISO.initType, "d"));
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_926(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,926};
  modelica_boolean tmp18;
  modelica_boolean tmp19;
  static const MMC_DEFSTRINGLIT(tmp20,188,"Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= eSAC1A.rotatingExciterWithDemagnetization.sISO.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: ");
  modelica_string tmp21;
  static int tmp22 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp22)
  {
    tmp18 = GreaterEq(data->simulationInfo->integerParameter[6] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.initType PARAM */,1);
    tmp19 = LessEq(data->simulationInfo->integerParameter[6] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.initType PARAM */,4);
    if(!(tmp18 && tmp19))
    {
      tmp21 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[6] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.initType PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp20),tmp21);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Continuous.mo",103,5,105,64,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\neSAC1A.rotatingExciterWithDemagnetization.sISO.initType >= Modelica.Blocks.Types.Init.NoInit and eSAC1A.rotatingExciterWithDemagnetization.sISO.initType <= Modelica.Blocks.Types.Init.InitialOutput", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp22 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 927
type: ALGORITHM

  assert(eSAC1A.derivative.initType >= Modelica.Blocks.Types.Init.NoInit and eSAC1A.derivative.initType <= Modelica.Blocks.Types.Init.InitialOutput, "Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= eSAC1A.derivative.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: " + String(eSAC1A.derivative.initType, "d"));
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_927(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,927};
  modelica_boolean tmp23;
  modelica_boolean tmp24;
  static const MMC_DEFSTRINGLIT(tmp25,159,"Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= eSAC1A.derivative.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: ");
  modelica_string tmp26;
  static int tmp27 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp27)
  {
    tmp23 = GreaterEq(data->simulationInfo->integerParameter[1] /* eSAC1A.derivative.initType PARAM */,1);
    tmp24 = LessEq(data->simulationInfo->integerParameter[1] /* eSAC1A.derivative.initType PARAM */,4);
    if(!(tmp23 && tmp24))
    {
      tmp26 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[1] /* eSAC1A.derivative.initType PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp25),tmp26);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Continuous.mo",215,5,218,40,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\neSAC1A.derivative.initType >= Modelica.Blocks.Types.Init.NoInit and eSAC1A.derivative.initType <= Modelica.Blocks.Types.Init.InitialOutput", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp27 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 928
type: ALGORITHM

  assert(eSAC1A.derivative.T >= 1e-60, "Variable violating min constraint: 1e-60 <= eSAC1A.derivative.T, has value: " + String(eSAC1A.derivative.T, "g"));
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_928(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,928};
  modelica_boolean tmp28;
  static const MMC_DEFSTRINGLIT(tmp29,76,"Variable violating min constraint: 1e-60 <= eSAC1A.derivative.T, has value: ");
  modelica_string tmp30;
  static int tmp31 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp31)
  {
    tmp28 = GreaterEq(data->simulationInfo->realParameter[120] /* eSAC1A.derivative.T PARAM */,1e-60);
    if(!tmp28)
    {
      tmp30 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[120] /* eSAC1A.derivative.T PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp29),tmp30);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Continuous.mo",213,5,214,69,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\neSAC1A.derivative.T >= 1e-60", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp31 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 929
type: ALGORITHM

  assert(eSAC1A.imLeadLag.TF.initType >= Modelica.Blocks.Types.Init.NoInit and eSAC1A.imLeadLag.TF.initType <= Modelica.Blocks.Types.Init.InitialOutput, "Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= eSAC1A.imLeadLag.TF.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: " + String(eSAC1A.imLeadLag.TF.initType, "d"));
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_929(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,929};
  modelica_boolean tmp32;
  modelica_boolean tmp33;
  static const MMC_DEFSTRINGLIT(tmp34,161,"Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= eSAC1A.imLeadLag.TF.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: ");
  modelica_string tmp35;
  static int tmp36 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp36)
  {
    tmp32 = GreaterEq(data->simulationInfo->integerParameter[2] /* eSAC1A.imLeadLag.TF.initType PARAM */,1);
    tmp33 = LessEq(data->simulationInfo->integerParameter[2] /* eSAC1A.imLeadLag.TF.initType PARAM */,4);
    if(!(tmp32 && tmp33))
    {
      tmp35 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[2] /* eSAC1A.imLeadLag.TF.initType PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp34),tmp35);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Continuous.mo",1166,5,1169,31,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\neSAC1A.imLeadLag.TF.initType >= Modelica.Blocks.Types.Init.NoInit and eSAC1A.imLeadLag.TF.initType <= Modelica.Blocks.Types.Init.InitialOutput", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp36 = 1;
    }
  }
  TRACE_POP
}
OMC_DISABLE_OPT
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_updateBoundParameters_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_714(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_715(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_716(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_717(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_718(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_719(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_720(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_721(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_722(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_723(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_724(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_725(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_726(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_727(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_728(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_729(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_730(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_731(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_732(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_733(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_734(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_735(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_739(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_740(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_741(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_742(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_743(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_744(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_745(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_746(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_747(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_748(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_749(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_750(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_751(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_754(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_755(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_756(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_757(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_758(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_759(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_762(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_763(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_764(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_765(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_766(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_767(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_768(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_769(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_770(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_771(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_772(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_777(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_778(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_779(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_780(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_781(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_782(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_783(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_784(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_785(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_786(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_787(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_788(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_789(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_790(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_791(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_792(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_793(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_794(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_803(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_810(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_813(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_814(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_821(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_824(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_825(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_832(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_835(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_836(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_843(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_846(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_847(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_848(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_855(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_856(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_857(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_865(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_868(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_869(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_870(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_871(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_872(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_873(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_874(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_875(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_876(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_877(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_878(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_879(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_880(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_881(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_882(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_890(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_893(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_894(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_895(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_896(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_898(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_899(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_900(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_901(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_902(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_904(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_905(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_906(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_907(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_908(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_910(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_911(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_912(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_913(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_914(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_916(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_9(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_8(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_7(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_6(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_5(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_4(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_3(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_2(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_926(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_927(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_928(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_929(data, threadData);
  TRACE_POP
}
OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_updateBoundParameters(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  data->simulationInfo->integerParameter[0] /* constantLoad.characteristic PARAM */ = ((modelica_integer) 2);
  data->modelData->integerParameterData[0].time_unvarying = 1;
  data->simulationInfo->integerParameter[3] /* eSAC1A.imLeadLag.TF.na PARAM */ = ((modelica_integer) 2);
  data->modelData->integerParameterData[3].time_unvarying = 1;
  data->simulationInfo->integerParameter[4] /* eSAC1A.imLeadLag.TF.nb PARAM */ = ((modelica_integer) 2);
  data->modelData->integerParameterData[4].time_unvarying = 1;
  data->simulationInfo->integerParameter[5] /* eSAC1A.imLeadLag.TF.nx PARAM */ = ((modelica_integer) 1);
  data->modelData->integerParameterData[5].time_unvarying = 1;
  data->simulationInfo->integerParameter[7] /* pwLine.opening PARAM */ = ((modelica_integer) 1);
  data->modelData->integerParameterData[7].time_unvarying = 1;
  data->simulationInfo->integerParameter[8] /* pwLine1.opening PARAM */ = ((modelica_integer) 1);
  data->modelData->integerParameterData[8].time_unvarying = 1;
  data->simulationInfo->integerParameter[9] /* pwLine3.opening PARAM */ = ((modelica_integer) 1);
  data->modelData->integerParameterData[9].time_unvarying = 1;
  data->simulationInfo->integerParameter[10] /* pwLine4.opening PARAM */ = ((modelica_integer) 1);
  data->modelData->integerParameterData[10].time_unvarying = 1;
  data->localData[0]->realVars[85] /* gENCLS.omega variable */ = 0.0;
  data->modelData->realVarsData[85].time_unvarying = 1;
  data->simulationInfo->realParameter[60] /* constantLoad.a0 PARAM */ = 0.4881;
  data->modelData->realParameterData[60].time_unvarying = 1;
  data->simulationInfo->realParameter[61] /* constantLoad.a1 PARAM */ = -0.4999;
  data->modelData->realParameterData[61].time_unvarying = 1;
  data->simulationInfo->realParameter[62] /* constantLoad.a2 PARAM */ = 1.502;
  data->modelData->realParameterData[62].time_unvarying = 1;
  data->simulationInfo->realParameter[67] /* constantLoad.b1 PARAM */ = 0.1389;
  data->modelData->realParameterData[67].time_unvarying = 1;
  data->simulationInfo->realParameter[68] /* constantLoad.b2 PARAM */ = 1.769;
  data->modelData->realParameterData[68].time_unvarying = 1;
  data->simulationInfo->realParameter[81] /* constantLoad.wp PARAM */ = 3.964;
  data->modelData->realParameterData[81].time_unvarying = 1;
  data->simulationInfo->realParameter[182] /* gENCLS.H PARAM */ = 0.0;
  data->modelData->realParameterData[182].time_unvarying = 1;
  data->simulationInfo->booleanParameter[1] /* FAULT.enableP_0 PARAM */ = 0;
  data->modelData->booleanParameterData[1].time_unvarying = 1;
  data->simulationInfo->booleanParameter[2] /* FAULT.enableQ_0 PARAM */ = 0;
  data->modelData->booleanParameterData[2].time_unvarying = 1;
  data->simulationInfo->booleanParameter[3] /* FAULT.enableS_b PARAM */ = 0;
  data->modelData->booleanParameterData[3].time_unvarying = 1;
  data->simulationInfo->booleanParameter[4] /* FAULT.enableV_b PARAM */ = 0;
  data->modelData->booleanParameterData[4].time_unvarying = 1;
  data->simulationInfo->booleanParameter[5] /* FAULT.enableangle_0 PARAM */ = 1;
  data->modelData->booleanParameterData[5].time_unvarying = 1;
  data->simulationInfo->booleanParameter[6] /* FAULT.enabledisplayPF PARAM */ = 1;
  data->modelData->booleanParameterData[6].time_unvarying = 1;
  data->simulationInfo->booleanParameter[7] /* FAULT.enablefn PARAM */ = 0;
  data->modelData->booleanParameterData[7].time_unvarying = 1;
  data->simulationInfo->booleanParameter[8] /* FAULT.enablev_0 PARAM */ = 1;
  data->modelData->booleanParameterData[8].time_unvarying = 1;
  data->simulationInfo->booleanParameter[10] /* GEN1.enableP_0 PARAM */ = 0;
  data->modelData->booleanParameterData[10].time_unvarying = 1;
  data->simulationInfo->booleanParameter[11] /* GEN1.enableQ_0 PARAM */ = 0;
  data->modelData->booleanParameterData[11].time_unvarying = 1;
  data->simulationInfo->booleanParameter[12] /* GEN1.enableS_b PARAM */ = 0;
  data->modelData->booleanParameterData[12].time_unvarying = 1;
  data->simulationInfo->booleanParameter[13] /* GEN1.enableV_b PARAM */ = 0;
  data->modelData->booleanParameterData[13].time_unvarying = 1;
  data->simulationInfo->booleanParameter[14] /* GEN1.enableangle_0 PARAM */ = 1;
  data->modelData->booleanParameterData[14].time_unvarying = 1;
  data->simulationInfo->booleanParameter[15] /* GEN1.enabledisplayPF PARAM */ = 1;
  data->modelData->booleanParameterData[15].time_unvarying = 1;
  data->simulationInfo->booleanParameter[16] /* GEN1.enablefn PARAM */ = 0;
  data->modelData->booleanParameterData[16].time_unvarying = 1;
  data->simulationInfo->booleanParameter[17] /* GEN1.enablev_0 PARAM */ = 1;
  data->modelData->booleanParameterData[17].time_unvarying = 1;
  data->simulationInfo->booleanParameter[19] /* GEN2.enableP_0 PARAM */ = 0;
  data->modelData->booleanParameterData[19].time_unvarying = 1;
  data->simulationInfo->booleanParameter[20] /* GEN2.enableQ_0 PARAM */ = 0;
  data->modelData->booleanParameterData[20].time_unvarying = 1;
  data->simulationInfo->booleanParameter[21] /* GEN2.enableS_b PARAM */ = 0;
  data->modelData->booleanParameterData[21].time_unvarying = 1;
  data->simulationInfo->booleanParameter[22] /* GEN2.enableV_b PARAM */ = 0;
  data->modelData->booleanParameterData[22].time_unvarying = 1;
  data->simulationInfo->booleanParameter[23] /* GEN2.enableangle_0 PARAM */ = 1;
  data->modelData->booleanParameterData[23].time_unvarying = 1;
  data->simulationInfo->booleanParameter[24] /* GEN2.enabledisplayPF PARAM */ = 1;
  data->modelData->booleanParameterData[24].time_unvarying = 1;
  data->simulationInfo->booleanParameter[25] /* GEN2.enablefn PARAM */ = 0;
  data->modelData->booleanParameterData[25].time_unvarying = 1;
  data->simulationInfo->booleanParameter[26] /* GEN2.enablev_0 PARAM */ = 1;
  data->modelData->booleanParameterData[26].time_unvarying = 1;
  data->simulationInfo->booleanParameter[28] /* LOAD.enableP_0 PARAM */ = 0;
  data->modelData->booleanParameterData[28].time_unvarying = 1;
  data->simulationInfo->booleanParameter[29] /* LOAD.enableQ_0 PARAM */ = 0;
  data->modelData->booleanParameterData[29].time_unvarying = 1;
  data->simulationInfo->booleanParameter[30] /* LOAD.enableS_b PARAM */ = 0;
  data->modelData->booleanParameterData[30].time_unvarying = 1;
  data->simulationInfo->booleanParameter[31] /* LOAD.enableV_b PARAM */ = 0;
  data->modelData->booleanParameterData[31].time_unvarying = 1;
  data->simulationInfo->booleanParameter[32] /* LOAD.enableangle_0 PARAM */ = 1;
  data->modelData->booleanParameterData[32].time_unvarying = 1;
  data->simulationInfo->booleanParameter[33] /* LOAD.enabledisplayPF PARAM */ = 1;
  data->modelData->booleanParameterData[33].time_unvarying = 1;
  data->simulationInfo->booleanParameter[34] /* LOAD.enablefn PARAM */ = 0;
  data->modelData->booleanParameterData[34].time_unvarying = 1;
  data->simulationInfo->booleanParameter[35] /* LOAD.enablev_0 PARAM */ = 1;
  data->modelData->booleanParameterData[35].time_unvarying = 1;
  data->simulationInfo->booleanParameter[37] /* constantLoad.enableP_0 PARAM */ = 1;
  data->modelData->booleanParameterData[37].time_unvarying = 1;
  data->simulationInfo->booleanParameter[38] /* constantLoad.enableQ_0 PARAM */ = 1;
  data->modelData->booleanParameterData[38].time_unvarying = 1;
  data->simulationInfo->booleanParameter[39] /* constantLoad.enableS_b PARAM */ = 1;
  data->modelData->booleanParameterData[39].time_unvarying = 1;
  data->simulationInfo->booleanParameter[40] /* constantLoad.enableV_b PARAM */ = 0;
  data->modelData->booleanParameterData[40].time_unvarying = 1;
  data->simulationInfo->booleanParameter[41] /* constantLoad.enableangle_0 PARAM */ = 1;
  data->modelData->booleanParameterData[41].time_unvarying = 1;
  data->simulationInfo->booleanParameter[42] /* constantLoad.enabledisplayPF PARAM */ = 0;
  data->modelData->booleanParameterData[42].time_unvarying = 1;
  data->simulationInfo->booleanParameter[43] /* constantLoad.enablefn PARAM */ = 0;
  data->modelData->booleanParameterData[43].time_unvarying = 1;
  data->simulationInfo->booleanParameter[44] /* constantLoad.enablev_0 PARAM */ = 1;
  data->modelData->booleanParameterData[44].time_unvarying = 1;
  data->simulationInfo->booleanParameter[45] /* eSAC1A.derivative.zeroGain PARAM */ = 0;
  data->modelData->booleanParameterData[45].time_unvarying = 1;
  data->simulationInfo->booleanParameter[46] /* eSAC1A.limiter1.limitsAtInit PARAM */ = 1;
  data->modelData->booleanParameterData[46].time_unvarying = 1;
  data->simulationInfo->booleanParameter[47] /* eSAC1A.limiter1.strict PARAM */ = 0;
  data->modelData->booleanParameterData[47].time_unvarying = 1;
  data->simulationInfo->booleanParameter[48] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.limitsAtInit PARAM */ = 1;
  data->modelData->booleanParameterData[48].time_unvarying = 1;
  data->simulationInfo->booleanParameter[49] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.strict PARAM */ = 0;
  data->modelData->booleanParameterData[49].time_unvarying = 1;
  data->simulationInfo->booleanParameter[51] /* gENCLS.enableP_0 PARAM */ = 0;
  data->modelData->booleanParameterData[51].time_unvarying = 1;
  data->simulationInfo->booleanParameter[52] /* gENCLS.enableQ_0 PARAM */ = 0;
  data->modelData->booleanParameterData[52].time_unvarying = 1;
  data->simulationInfo->booleanParameter[53] /* gENCLS.enableS_b PARAM */ = 0;
  data->modelData->booleanParameterData[53].time_unvarying = 1;
  data->simulationInfo->booleanParameter[54] /* gENCLS.enableV_b PARAM */ = 0;
  data->modelData->booleanParameterData[54].time_unvarying = 1;
  data->simulationInfo->booleanParameter[55] /* gENCLS.enableangle_0 PARAM */ = 0;
  data->modelData->booleanParameterData[55].time_unvarying = 1;
  data->simulationInfo->booleanParameter[56] /* gENCLS.enabledisplayPF PARAM */ = 0;
  data->modelData->booleanParameterData[56].time_unvarying = 1;
  data->simulationInfo->booleanParameter[57] /* gENCLS.enablefn PARAM */ = 0;
  data->modelData->booleanParameterData[57].time_unvarying = 1;
  data->simulationInfo->booleanParameter[58] /* gENCLS.enablev_0 PARAM */ = 0;
  data->modelData->booleanParameterData[58].time_unvarying = 1;
  data->simulationInfo->booleanParameter[60] /* gENROE.enableP_0 PARAM */ = 1;
  data->modelData->booleanParameterData[60].time_unvarying = 1;
  data->simulationInfo->booleanParameter[61] /* gENROE.enableQ_0 PARAM */ = 1;
  data->modelData->booleanParameterData[61].time_unvarying = 1;
  data->simulationInfo->booleanParameter[62] /* gENROE.enableS_b PARAM */ = 1;
  data->modelData->booleanParameterData[62].time_unvarying = 1;
  data->simulationInfo->booleanParameter[63] /* gENROE.enableV_b PARAM */ = 0;
  data->modelData->booleanParameterData[63].time_unvarying = 1;
  data->simulationInfo->booleanParameter[64] /* gENROE.enableangle_0 PARAM */ = 1;
  data->modelData->booleanParameterData[64].time_unvarying = 1;
  data->simulationInfo->booleanParameter[65] /* gENROE.enabledisplayPF PARAM */ = 0;
  data->modelData->booleanParameterData[65].time_unvarying = 1;
  data->simulationInfo->booleanParameter[66] /* gENROE.enablefn PARAM */ = 0;
  data->modelData->booleanParameterData[66].time_unvarying = 1;
  data->simulationInfo->booleanParameter[67] /* gENROE.enablev_0 PARAM */ = 1;
  data->modelData->booleanParameterData[67].time_unvarying = 1;
  data->simulationInfo->integerParameter[1] /* eSAC1A.derivative.initType PARAM */ = 4;
  data->modelData->integerParameterData[1].time_unvarying = 1;
  data->simulationInfo->integerParameter[2] /* eSAC1A.imLeadLag.TF.initType PARAM */ = 4;
  data->modelData->integerParameterData[2].time_unvarying = 1;
  data->simulationInfo->integerParameter[6] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.initType PARAM */ = 4;
  data->modelData->integerParameterData[6].time_unvarying = 1;
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_updateBoundParameters_0(data, threadData);
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

