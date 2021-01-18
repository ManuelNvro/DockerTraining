/* Events: Sample, Zero Crossings, Relations, Discrete Changes */
#include "OpenIPSL.Examples.Controls.PSSE.ES.ESST1A_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* Initializes the raw time events of the simulation using the now
   calcualted parameters. */
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_function_initSample(DATA *data, threadData_t *threadData)
{
  long i=0;
}

const char *OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_zeroCrossingDescription(int i, int **out_EquationIndexes)
{
  static const char *res[] = {"time < eSST1A.Vref_step.startTime",
  "time >= pwLine.t1 and time < pwLine.t2",
  "time >= pwLine3.t1 and time < pwLine3.t2",
  "time < pwFault.t1",
  "time < pwFault.t2 and pwFault.ground",
  "time < pwFault.t2",
  "time >= pwLine3.t1",
  "time < pwLine3.t2",
  "time >= pwLine4.t1 and time < pwLine4.t2",
  "time >= pwLine4.t1",
  "time < pwLine4.t2",
  "time >= pwLine1.t1 and time < pwLine1.t2",
  "time >= pwLine1.t1",
  "time < pwLine1.t2",
  "constantLoad.v < 0.5",
  "time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t",
  "time >= constantLoad.t1",
  "time <= constantLoad.t1 + constantLoad.d_t",
  "constantLoad.v < constantLoad.PQBRAK",
  "time >= pwLine.t1",
  "time < pwLine.t2",
  "eSST1A.hV_GATE.n1 < minusInf.k",
  "eSST1A.add3_2.y < minusInf.k",
  "eSST1A.hV_GATE1.p > plusInf.k",
  "eSST1A.simpleLagLim.state > eSST1A.simpleLagLim.outMax and eSST1A.simpleLagLim.K * eSST1A.imLeadLag1.y - eSST1A.simpleLagLim.state < 0.0",
  "eSST1A.simpleLagLim.state < eSST1A.simpleLagLim.outMin and eSST1A.simpleLagLim.K * eSST1A.imLeadLag1.y - eSST1A.simpleLagLim.state > 0.0",
  "eSST1A.add3_1.y > eSST1A.imLimited.uMax",
  "eSST1A.add3_1.y < eSST1A.imLimited.uMin"};
  static const int occurEqs0[] = {1,370};
  static const int occurEqs1[] = {1,-1};
  static const int occurEqs2[] = {1,-1};
  static const int occurEqs3[] = {1,-1};
  static const int occurEqs4[] = {1,-1};
  static const int occurEqs5[] = {1,-1};
  static const int occurEqs6[] = {1,-1};
  static const int occurEqs7[] = {1,-1};
  static const int occurEqs8[] = {1,-1};
  static const int occurEqs9[] = {1,-1};
  static const int occurEqs10[] = {1,-1};
  static const int occurEqs11[] = {1,-1};
  static const int occurEqs12[] = {1,-1};
  static const int occurEqs13[] = {1,-1};
  static const int occurEqs14[] = {1,-1};
  static const int occurEqs15[] = {1,-1};
  static const int occurEqs16[] = {1,-1};
  static const int occurEqs17[] = {1,-1};
  static const int occurEqs18[] = {1,-1};
  static const int occurEqs19[] = {1,-1};
  static const int occurEqs20[] = {1,-1};
  static const int occurEqs21[] = {1,-1};
  static const int occurEqs22[] = {1,527};
  static const int occurEqs23[] = {1,528};
  static const int occurEqs24[] = {1,525};
  static const int occurEqs25[] = {1,526};
  static const int occurEqs26[] = {1,366};
  static const int occurEqs27[] = {1,366};
  static const int *occurEqs[] = {occurEqs0,occurEqs1,occurEqs2,occurEqs3,occurEqs4,occurEqs5,occurEqs6,occurEqs7,occurEqs8,occurEqs9,occurEqs10,occurEqs11,occurEqs12,occurEqs13,occurEqs14,occurEqs15,occurEqs16,occurEqs17,occurEqs18,occurEqs19,occurEqs20,occurEqs21,occurEqs22,occurEqs23,occurEqs24,occurEqs25,occurEqs26,occurEqs27};
  *out_EquationIndexes = (int*) occurEqs[i];
  return res[i];
}

/* forwarded equations */
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_363(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_364(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_365(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_366(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_367(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_368(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_369(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_370(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_371(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_372(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_373(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_374(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_375(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_376(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_377(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_468(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_470(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_471(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_472(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_473(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_474(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_475(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_489(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_490(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_491(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_492(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_493(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_494(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_495(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_496(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_497(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_498(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_499(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_500(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_521(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_522(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_523(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_524(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_527(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_528(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_529(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_530(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_531(DATA* data, threadData_t *threadData);

int OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_function_ZeroCrossingsEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->callStatistics.functionZeroCrossingsEquations++;

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_363(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_364(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_365(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_366(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_367(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_368(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_369(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_370(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_371(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_372(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_373(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_374(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_375(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_376(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_377(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_468(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_470(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_471(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_472(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_473(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_474(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_475(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_489(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_490(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_491(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_492(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_493(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_494(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_495(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_496(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_497(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_498(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_499(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_500(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_521(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_522(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_523(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_524(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_527(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_528(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_529(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_530(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_531(data, threadData);
  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_function_ZeroCrossings(DATA *data, threadData_t *threadData, double *gout)
{
  TRACE_PUSH
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_boolean tmp3;
  modelica_boolean tmp4;
  modelica_boolean tmp5;
  modelica_boolean tmp6;
  modelica_boolean tmp7;
  modelica_boolean tmp8;
  modelica_boolean tmp9;
  modelica_boolean tmp10;
  modelica_boolean tmp11;
  modelica_boolean tmp12;
  modelica_boolean tmp13;
  modelica_boolean tmp14;
  modelica_boolean tmp15;
  modelica_boolean tmp16;
  modelica_boolean tmp17;
  modelica_boolean tmp18;
  modelica_boolean tmp19;
  modelica_boolean tmp20;
  modelica_boolean tmp21;
  modelica_boolean tmp22;
  modelica_boolean tmp23;
  modelica_boolean tmp24;
  modelica_boolean tmp25;
  modelica_boolean tmp26;
  modelica_boolean tmp27;
  modelica_boolean tmp28;
  modelica_boolean tmp29;
  modelica_boolean tmp30;
  modelica_boolean tmp31;
  modelica_boolean tmp32;
  modelica_boolean tmp33;
  modelica_boolean tmp34;

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_ZC);
#endif
  data->simulationInfo->callStatistics.functionZeroCrossings++;

  tmp0 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[122] /* eSST1A.Vref_step.startTime PARAM */, data->simulationInfo->storedRelations[0]);
  gout[0] = (tmp0) ? 1 : -1;
  tmp1 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[327] /* pwLine.t1 PARAM */, data->simulationInfo->storedRelations[1]);
  tmp2 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[328] /* pwLine.t2 PARAM */, data->simulationInfo->storedRelations[2]);
  gout[1] = ((tmp1 && tmp2)) ? 1 : -1;
  tmp3 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[349] /* pwLine3.t1 PARAM */, data->simulationInfo->storedRelations[3]);
  tmp4 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[350] /* pwLine3.t2 PARAM */, data->simulationInfo->storedRelations[4]);
  gout[2] = ((tmp3 && tmp4)) ? 1 : -1;
  tmp5 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[316] /* pwFault.t1 PARAM */, data->simulationInfo->storedRelations[5]);
  gout[3] = (tmp5) ? 1 : -1;
  tmp6 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[317] /* pwFault.t2 PARAM */, data->simulationInfo->storedRelations[6]);
  gout[4] = ((tmp6 && data->simulationInfo->booleanParameter[70] /* pwFault.ground PARAM */)) ? 1 : -1;
  tmp7 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[317] /* pwFault.t2 PARAM */, data->simulationInfo->storedRelations[6]);
  gout[5] = (tmp7) ? 1 : -1;
  tmp8 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[349] /* pwLine3.t1 PARAM */, data->simulationInfo->storedRelations[3]);
  gout[6] = (tmp8) ? 1 : -1;
  tmp9 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[350] /* pwLine3.t2 PARAM */, data->simulationInfo->storedRelations[4]);
  gout[7] = (tmp9) ? 1 : -1;
  tmp10 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[360] /* pwLine4.t1 PARAM */, data->simulationInfo->storedRelations[7]);
  tmp11 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[361] /* pwLine4.t2 PARAM */, data->simulationInfo->storedRelations[8]);
  gout[8] = ((tmp10 && tmp11)) ? 1 : -1;
  tmp12 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[360] /* pwLine4.t1 PARAM */, data->simulationInfo->storedRelations[7]);
  gout[9] = (tmp12) ? 1 : -1;
  tmp13 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[361] /* pwLine4.t2 PARAM */, data->simulationInfo->storedRelations[8]);
  gout[10] = (tmp13) ? 1 : -1;
  tmp14 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[338] /* pwLine1.t1 PARAM */, data->simulationInfo->storedRelations[9]);
  tmp15 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[339] /* pwLine1.t2 PARAM */, data->simulationInfo->storedRelations[10]);
  gout[11] = ((tmp14 && tmp15)) ? 1 : -1;
  tmp16 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[338] /* pwLine1.t1 PARAM */, data->simulationInfo->storedRelations[9]);
  gout[12] = (tmp16) ? 1 : -1;
  tmp17 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[339] /* pwLine1.t2 PARAM */, data->simulationInfo->storedRelations[10]);
  gout[13] = (tmp17) ? 1 : -1;
  tmp18 = LessZC(data->localData[0]->realVars[55] /* constantLoad.v variable */, 0.5, data->simulationInfo->storedRelations[11]);
  gout[14] = (tmp18) ? 1 : -1;
  tmp19 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */, data->simulationInfo->storedRelations[12]);
  tmp20 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[65] /* constantLoad.d_t PARAM */, data->simulationInfo->storedRelations[13]);
  gout[15] = ((tmp19 && tmp20)) ? 1 : -1;
  tmp21 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */, data->simulationInfo->storedRelations[12]);
  gout[16] = (tmp21) ? 1 : -1;
  tmp22 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[65] /* constantLoad.d_t PARAM */, data->simulationInfo->storedRelations[13]);
  gout[17] = (tmp22) ? 1 : -1;
  tmp23 = LessZC(data->localData[0]->realVars[55] /* constantLoad.v variable */, data->simulationInfo->realParameter[35] /* constantLoad.PQBRAK PARAM */, data->simulationInfo->storedRelations[14]);
  gout[18] = (tmp23) ? 1 : -1;
  tmp24 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[327] /* pwLine.t1 PARAM */, data->simulationInfo->storedRelations[1]);
  gout[19] = (tmp24) ? 1 : -1;
  tmp25 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[328] /* pwLine.t2 PARAM */, data->simulationInfo->storedRelations[2]);
  gout[20] = (tmp25) ? 1 : -1;
  tmp26 = LessZC(data->localData[0]->realVars[73] /* eSST1A.hV_GATE.n1 variable */, data->simulationInfo->realParameter[310] /* minusInf.k PARAM */, data->simulationInfo->storedRelations[15]);
  gout[21] = (tmp26) ? 1 : -1;
  tmp27 = LessZC(data->localData[0]->realVars[72] /* eSST1A.add3_2.y variable */, data->simulationInfo->realParameter[310] /* minusInf.k PARAM */, data->simulationInfo->storedRelations[16]);
  gout[22] = (tmp27) ? 1 : -1;
  tmp28 = GreaterZC(data->localData[0]->realVars[75] /* eSST1A.hV_GATE1.p variable */, data->simulationInfo->realParameter[312] /* plusInf.k PARAM */, data->simulationInfo->storedRelations[17]);
  gout[23] = (tmp28) ? 1 : -1;
  tmp29 = GreaterZC(data->localData[0]->realVars[4] /* eSST1A.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[194] /* eSST1A.simpleLagLim.outMax PARAM */, data->simulationInfo->storedRelations[18]);
  tmp30 = LessZC((data->simulationInfo->realParameter[190] /* eSST1A.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[84] /* eSST1A.imLeadLag1.y variable */) - data->localData[0]->realVars[4] /* eSST1A.simpleLagLim.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[19]);
  gout[24] = ((tmp29 && tmp30)) ? 1 : -1;
  tmp31 = LessZC(data->localData[0]->realVars[4] /* eSST1A.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[195] /* eSST1A.simpleLagLim.outMin PARAM */, data->simulationInfo->storedRelations[20]);
  tmp32 = GreaterZC((data->simulationInfo->realParameter[190] /* eSST1A.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[84] /* eSST1A.imLeadLag1.y variable */) - data->localData[0]->realVars[4] /* eSST1A.simpleLagLim.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[21]);
  gout[25] = ((tmp31 && tmp32)) ? 1 : -1;
  tmp33 = GreaterZC(data->localData[0]->realVars[69] /* eSST1A.add3_1.y variable */, data->simulationInfo->realParameter[185] /* eSST1A.imLimited.uMax PARAM */, data->simulationInfo->storedRelations[22]);
  gout[26] = (tmp33) ? 1 : -1;
  tmp34 = LessZC(data->localData[0]->realVars[69] /* eSST1A.add3_1.y variable */, data->simulationInfo->realParameter[186] /* eSST1A.imLimited.uMin PARAM */, data->simulationInfo->storedRelations[23]);
  gout[27] = (tmp34) ? 1 : -1;

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_ZC);
#endif

  TRACE_POP
  return 0;
}

const char *OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_relationDescription(int i)
{
  const char *res[] = {"time < eSST1A.Vref_step.startTime",
  "time >= pwLine.t1",
  "time < pwLine.t2",
  "time >= pwLine3.t1",
  "time < pwLine3.t2",
  "time < pwFault.t1",
  "time < pwFault.t2",
  "time >= pwLine4.t1",
  "time < pwLine4.t2",
  "time >= pwLine1.t1",
  "time < pwLine1.t2",
  "constantLoad.v < 0.5",
  "time >= constantLoad.t1",
  "time <= constantLoad.t1 + constantLoad.d_t",
  "constantLoad.v < constantLoad.PQBRAK",
  "eSST1A.hV_GATE.n1 < minusInf.k",
  "eSST1A.add3_2.y < minusInf.k",
  "eSST1A.hV_GATE1.p > plusInf.k",
  "eSST1A.simpleLagLim.state > eSST1A.simpleLagLim.outMax",
  "eSST1A.simpleLagLim.K * eSST1A.imLeadLag1.y - eSST1A.simpleLagLim.state < 0.0",
  "eSST1A.simpleLagLim.state < eSST1A.simpleLagLim.outMin",
  "eSST1A.simpleLagLim.K * eSST1A.imLeadLag1.y - eSST1A.simpleLagLim.state > 0.0",
  "eSST1A.add3_1.y > eSST1A.imLimited.uMax",
  "eSST1A.add3_1.y < eSST1A.imLimited.uMin"};
  return res[i];
}

int OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_function_updateRelations(DATA *data, threadData_t *threadData, int evalforZeroCross)
{
  TRACE_PUSH
  modelica_boolean tmp35;
  modelica_boolean tmp36;
  modelica_boolean tmp37;
  modelica_boolean tmp38;
  modelica_boolean tmp39;
  modelica_boolean tmp40;
  modelica_boolean tmp41;
  modelica_boolean tmp42;
  modelica_boolean tmp43;
  modelica_boolean tmp44;
  modelica_boolean tmp45;
  modelica_boolean tmp46;
  modelica_boolean tmp47;
  modelica_boolean tmp48;
  modelica_boolean tmp49;
  modelica_boolean tmp50;
  modelica_boolean tmp51;
  modelica_boolean tmp52;
  modelica_boolean tmp53;
  modelica_boolean tmp54;
  modelica_boolean tmp55;
  modelica_boolean tmp56;
  modelica_boolean tmp57;
  modelica_boolean tmp58;
  
  if(evalforZeroCross) {
    tmp35 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[122] /* eSST1A.Vref_step.startTime PARAM */, data->simulationInfo->storedRelations[0]);
    data->simulationInfo->relations[0] = tmp35;
    tmp36 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[327] /* pwLine.t1 PARAM */, data->simulationInfo->storedRelations[1]);
    data->simulationInfo->relations[1] = tmp36;
    tmp37 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[328] /* pwLine.t2 PARAM */, data->simulationInfo->storedRelations[2]);
    data->simulationInfo->relations[2] = tmp37;
    tmp38 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[349] /* pwLine3.t1 PARAM */, data->simulationInfo->storedRelations[3]);
    data->simulationInfo->relations[3] = tmp38;
    tmp39 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[350] /* pwLine3.t2 PARAM */, data->simulationInfo->storedRelations[4]);
    data->simulationInfo->relations[4] = tmp39;
    tmp40 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[316] /* pwFault.t1 PARAM */, data->simulationInfo->storedRelations[5]);
    data->simulationInfo->relations[5] = tmp40;
    tmp41 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[317] /* pwFault.t2 PARAM */, data->simulationInfo->storedRelations[6]);
    data->simulationInfo->relations[6] = tmp41;
    tmp42 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[360] /* pwLine4.t1 PARAM */, data->simulationInfo->storedRelations[7]);
    data->simulationInfo->relations[7] = tmp42;
    tmp43 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[361] /* pwLine4.t2 PARAM */, data->simulationInfo->storedRelations[8]);
    data->simulationInfo->relations[8] = tmp43;
    tmp44 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[338] /* pwLine1.t1 PARAM */, data->simulationInfo->storedRelations[9]);
    data->simulationInfo->relations[9] = tmp44;
    tmp45 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[339] /* pwLine1.t2 PARAM */, data->simulationInfo->storedRelations[10]);
    data->simulationInfo->relations[10] = tmp45;
    tmp46 = LessZC(data->localData[0]->realVars[55] /* constantLoad.v variable */, 0.5, data->simulationInfo->storedRelations[11]);
    data->simulationInfo->relations[11] = tmp46;
    tmp47 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */, data->simulationInfo->storedRelations[12]);
    data->simulationInfo->relations[12] = tmp47;
    tmp48 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[65] /* constantLoad.d_t PARAM */, data->simulationInfo->storedRelations[13]);
    data->simulationInfo->relations[13] = tmp48;
    tmp49 = LessZC(data->localData[0]->realVars[55] /* constantLoad.v variable */, data->simulationInfo->realParameter[35] /* constantLoad.PQBRAK PARAM */, data->simulationInfo->storedRelations[14]);
    data->simulationInfo->relations[14] = tmp49;
    tmp50 = LessZC(data->localData[0]->realVars[73] /* eSST1A.hV_GATE.n1 variable */, data->simulationInfo->realParameter[310] /* minusInf.k PARAM */, data->simulationInfo->storedRelations[15]);
    data->simulationInfo->relations[15] = tmp50;
    tmp51 = LessZC(data->localData[0]->realVars[72] /* eSST1A.add3_2.y variable */, data->simulationInfo->realParameter[310] /* minusInf.k PARAM */, data->simulationInfo->storedRelations[16]);
    data->simulationInfo->relations[16] = tmp51;
    tmp52 = GreaterZC(data->localData[0]->realVars[75] /* eSST1A.hV_GATE1.p variable */, data->simulationInfo->realParameter[312] /* plusInf.k PARAM */, data->simulationInfo->storedRelations[17]);
    data->simulationInfo->relations[17] = tmp52;
    tmp53 = GreaterZC(data->localData[0]->realVars[4] /* eSST1A.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[194] /* eSST1A.simpleLagLim.outMax PARAM */, data->simulationInfo->storedRelations[18]);
    data->simulationInfo->relations[18] = tmp53;
    tmp54 = LessZC((data->simulationInfo->realParameter[190] /* eSST1A.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[84] /* eSST1A.imLeadLag1.y variable */) - data->localData[0]->realVars[4] /* eSST1A.simpleLagLim.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[19]);
    data->simulationInfo->relations[19] = tmp54;
    tmp55 = LessZC(data->localData[0]->realVars[4] /* eSST1A.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[195] /* eSST1A.simpleLagLim.outMin PARAM */, data->simulationInfo->storedRelations[20]);
    data->simulationInfo->relations[20] = tmp55;
    tmp56 = GreaterZC((data->simulationInfo->realParameter[190] /* eSST1A.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[84] /* eSST1A.imLeadLag1.y variable */) - data->localData[0]->realVars[4] /* eSST1A.simpleLagLim.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[21]);
    data->simulationInfo->relations[21] = tmp56;
    tmp57 = GreaterZC(data->localData[0]->realVars[69] /* eSST1A.add3_1.y variable */, data->simulationInfo->realParameter[185] /* eSST1A.imLimited.uMax PARAM */, data->simulationInfo->storedRelations[22]);
    data->simulationInfo->relations[22] = tmp57;
    tmp58 = LessZC(data->localData[0]->realVars[69] /* eSST1A.add3_1.y variable */, data->simulationInfo->realParameter[186] /* eSST1A.imLimited.uMin PARAM */, data->simulationInfo->storedRelations[23]);
    data->simulationInfo->relations[23] = tmp58;
  } else {
    data->simulationInfo->relations[0] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[122] /* eSST1A.Vref_step.startTime PARAM */);
    data->simulationInfo->relations[1] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[327] /* pwLine.t1 PARAM */);
    data->simulationInfo->relations[2] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[328] /* pwLine.t2 PARAM */);
    data->simulationInfo->relations[3] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[349] /* pwLine3.t1 PARAM */);
    data->simulationInfo->relations[4] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[350] /* pwLine3.t2 PARAM */);
    data->simulationInfo->relations[5] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[316] /* pwFault.t1 PARAM */);
    data->simulationInfo->relations[6] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[317] /* pwFault.t2 PARAM */);
    data->simulationInfo->relations[7] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[360] /* pwLine4.t1 PARAM */);
    data->simulationInfo->relations[8] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[361] /* pwLine4.t2 PARAM */);
    data->simulationInfo->relations[9] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[338] /* pwLine1.t1 PARAM */);
    data->simulationInfo->relations[10] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[339] /* pwLine1.t2 PARAM */);
    data->simulationInfo->relations[11] = (data->localData[0]->realVars[55] /* constantLoad.v variable */ < 0.5);
    data->simulationInfo->relations[12] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */);
    data->simulationInfo->relations[13] = (data->localData[0]->timeValue <= data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[65] /* constantLoad.d_t PARAM */);
    data->simulationInfo->relations[14] = (data->localData[0]->realVars[55] /* constantLoad.v variable */ < data->simulationInfo->realParameter[35] /* constantLoad.PQBRAK PARAM */);
    data->simulationInfo->relations[15] = (data->localData[0]->realVars[73] /* eSST1A.hV_GATE.n1 variable */ < data->simulationInfo->realParameter[310] /* minusInf.k PARAM */);
    data->simulationInfo->relations[16] = (data->localData[0]->realVars[72] /* eSST1A.add3_2.y variable */ < data->simulationInfo->realParameter[310] /* minusInf.k PARAM */);
    data->simulationInfo->relations[17] = (data->localData[0]->realVars[75] /* eSST1A.hV_GATE1.p variable */ > data->simulationInfo->realParameter[312] /* plusInf.k PARAM */);
    data->simulationInfo->relations[18] = (data->localData[0]->realVars[4] /* eSST1A.simpleLagLim.state STATE(1) */ > data->simulationInfo->realParameter[194] /* eSST1A.simpleLagLim.outMax PARAM */);
    data->simulationInfo->relations[19] = ((data->simulationInfo->realParameter[190] /* eSST1A.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[84] /* eSST1A.imLeadLag1.y variable */) - data->localData[0]->realVars[4] /* eSST1A.simpleLagLim.state STATE(1) */ < 0.0);
    data->simulationInfo->relations[20] = (data->localData[0]->realVars[4] /* eSST1A.simpleLagLim.state STATE(1) */ < data->simulationInfo->realParameter[195] /* eSST1A.simpleLagLim.outMin PARAM */);
    data->simulationInfo->relations[21] = ((data->simulationInfo->realParameter[190] /* eSST1A.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[84] /* eSST1A.imLeadLag1.y variable */) - data->localData[0]->realVars[4] /* eSST1A.simpleLagLim.state STATE(1) */ > 0.0);
    data->simulationInfo->relations[22] = (data->localData[0]->realVars[69] /* eSST1A.add3_1.y variable */ > data->simulationInfo->realParameter[185] /* eSST1A.imLimited.uMax PARAM */);
    data->simulationInfo->relations[23] = (data->localData[0]->realVars[69] /* eSST1A.add3_1.y variable */ < data->simulationInfo->realParameter[186] /* eSST1A.imLimited.uMin PARAM */);
  }
  
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

