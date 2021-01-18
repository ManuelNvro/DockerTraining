/* Events: Sample, Zero Crossings, Relations, Discrete Changes */
#include "OpenIPSL.Examples.Controls.PSSE.ES.ESST4B_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* Initializes the raw time events of the simulation using the now
   calcualted parameters. */
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_function_initSample(DATA *data, threadData_t *threadData)
{
  long i=0;
}

const char *OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_zeroCrossingDescription(int i, int **out_EquationIndexes)
{
  static const char *res[] = {"time < eSST4B.Vref_step.startTime",
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
  "time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t",
  "constantLoad.v < 0.5",
  "time >= constantLoad.t1",
  "time <= constantLoad.t1 + constantLoad.d_t",
  "constantLoad.v < constantLoad.PQBRAK",
  "time >= pwLine.t1",
  "time < pwLine.t2",
  "eSST4B.VR1.y < eSST4B.VR1.outMin and eSST4B.VR1.k * eSST4B.Gain1.u < 0.0 or eSST4B.VR1.y > eSST4B.VR1.outMax and eSST4B.VR1.k * eSST4B.Gain1.u > 0.0",
  "eSST4B.rectifierCommutationVoltageDrop.division.y <= 0.0",
  "eSST4B.rectifierCommutationVoltageDrop.division.y > 0.0 and eSST4B.rectifierCommutationVoltageDrop.division.y <= 0.433",
  "eSST4B.rectifierCommutationVoltageDrop.division.y > 0.433 and eSST4B.rectifierCommutationVoltageDrop.division.y < 0.75",
  "eSST4B.rectifierCommutationVoltageDrop.division.y >= 0.75 and eSST4B.rectifierCommutationVoltageDrop.division.y <= 1.0",
  "eSST4B.lV_Gate.n1 > plusInf.k",
  "eSST4B.VM1.y < eSST4B.VM1.outMin and eSST4B.VM1.k * eSST4B.Gain2.u < 0.0 or eSST4B.VM1.y > eSST4B.VM1.outMax and eSST4B.VM1.k * eSST4B.Gain2.u > 0.0",
  "eSST4B.add2.y > eSST4B.limiter1.uMax",
  "eSST4B.add2.y < eSST4B.limiter1.uMin"};
  static const int occurEqs0[] = {1,355};
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
  static const int occurEqs21[] = {1,457};
  static const int occurEqs22[] = {1,480};
  static const int occurEqs23[] = {1,480};
  static const int occurEqs24[] = {1,480};
  static const int occurEqs25[] = {1,480};
  static const int occurEqs26[] = {1,-1};
  static const int occurEqs27[] = {1,499};
  static const int occurEqs28[] = {1,354};
  static const int occurEqs29[] = {1,354};
  static const int *occurEqs[] = {occurEqs0,occurEqs1,occurEqs2,occurEqs3,occurEqs4,occurEqs5,occurEqs6,occurEqs7,occurEqs8,occurEqs9,occurEqs10,occurEqs11,occurEqs12,occurEqs13,occurEqs14,occurEqs15,occurEqs16,occurEqs17,occurEqs18,occurEqs19,occurEqs20,occurEqs21,occurEqs22,occurEqs23,occurEqs24,occurEqs25,occurEqs26,occurEqs27,occurEqs28,occurEqs29};
  *out_EquationIndexes = (int*) occurEqs[i];
  return res[i];
}

/* forwarded equations */
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_348(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_349(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_350(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_351(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_352(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_353(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_354(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_355(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_356(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_357(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_358(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_359(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_360(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_451(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_452(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_453(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_454(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_455(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_456(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_457(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_458(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_459(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_460(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_461(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_462(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_466(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_467(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_468(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_469(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_470(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_471(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_472(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_473(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_478(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_479(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_480(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_481(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_482(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_497(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_498(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_499(DATA* data, threadData_t *threadData);

int OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_function_ZeroCrossingsEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->callStatistics.functionZeroCrossingsEquations++;

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_348(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_349(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_350(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_351(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_352(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_353(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_354(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_355(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_356(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_357(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_358(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_359(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_360(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_451(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_452(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_453(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_454(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_455(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_456(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_457(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_458(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_459(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_460(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_461(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_462(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_466(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_467(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_468(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_469(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_470(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_471(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_472(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_473(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_478(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_479(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_480(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_481(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_482(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_497(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_498(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_499(data, threadData);
  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_function_ZeroCrossings(DATA *data, threadData_t *threadData, double *gout)
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
  modelica_boolean tmp35;
  modelica_boolean tmp36;
  modelica_boolean tmp37;
  modelica_boolean tmp38;
  modelica_boolean tmp39;
  modelica_boolean tmp40;
  modelica_boolean tmp41;
  modelica_boolean tmp42;
  modelica_boolean tmp43;

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_ZC);
#endif
  data->simulationInfo->callStatistics.functionZeroCrossings++;

  tmp0 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[133] /* eSST4B.Vref_step.startTime PARAM */, data->simulationInfo->storedRelations[0]);
  gout[0] = (tmp0) ? 1 : -1;
  tmp1 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[287] /* pwLine.t1 PARAM */, data->simulationInfo->storedRelations[1]);
  tmp2 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[288] /* pwLine.t2 PARAM */, data->simulationInfo->storedRelations[2]);
  gout[1] = ((tmp1 && tmp2)) ? 1 : -1;
  tmp3 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[309] /* pwLine3.t1 PARAM */, data->simulationInfo->storedRelations[3]);
  tmp4 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[310] /* pwLine3.t2 PARAM */, data->simulationInfo->storedRelations[4]);
  gout[2] = ((tmp3 && tmp4)) ? 1 : -1;
  tmp5 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[276] /* pwFault.t1 PARAM */, data->simulationInfo->storedRelations[5]);
  gout[3] = (tmp5) ? 1 : -1;
  tmp6 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[277] /* pwFault.t2 PARAM */, data->simulationInfo->storedRelations[6]);
  gout[4] = ((tmp6 && data->simulationInfo->booleanParameter[77] /* pwFault.ground PARAM */)) ? 1 : -1;
  tmp7 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[277] /* pwFault.t2 PARAM */, data->simulationInfo->storedRelations[6]);
  gout[5] = (tmp7) ? 1 : -1;
  tmp8 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[309] /* pwLine3.t1 PARAM */, data->simulationInfo->storedRelations[3]);
  gout[6] = (tmp8) ? 1 : -1;
  tmp9 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[310] /* pwLine3.t2 PARAM */, data->simulationInfo->storedRelations[4]);
  gout[7] = (tmp9) ? 1 : -1;
  tmp10 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[320] /* pwLine4.t1 PARAM */, data->simulationInfo->storedRelations[7]);
  tmp11 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[321] /* pwLine4.t2 PARAM */, data->simulationInfo->storedRelations[8]);
  gout[8] = ((tmp10 && tmp11)) ? 1 : -1;
  tmp12 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[320] /* pwLine4.t1 PARAM */, data->simulationInfo->storedRelations[7]);
  gout[9] = (tmp12) ? 1 : -1;
  tmp13 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[321] /* pwLine4.t2 PARAM */, data->simulationInfo->storedRelations[8]);
  gout[10] = (tmp13) ? 1 : -1;
  tmp14 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[298] /* pwLine1.t1 PARAM */, data->simulationInfo->storedRelations[9]);
  tmp15 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[299] /* pwLine1.t2 PARAM */, data->simulationInfo->storedRelations[10]);
  gout[11] = ((tmp14 && tmp15)) ? 1 : -1;
  tmp16 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[298] /* pwLine1.t1 PARAM */, data->simulationInfo->storedRelations[9]);
  gout[12] = (tmp16) ? 1 : -1;
  tmp17 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[299] /* pwLine1.t2 PARAM */, data->simulationInfo->storedRelations[10]);
  gout[13] = (tmp17) ? 1 : -1;
  tmp18 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */, data->simulationInfo->storedRelations[11]);
  tmp19 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[65] /* constantLoad.d_t PARAM */, data->simulationInfo->storedRelations[12]);
  gout[14] = ((tmp18 && tmp19)) ? 1 : -1;
  tmp20 = LessZC(data->localData[0]->realVars[53] /* constantLoad.v variable */, 0.5, data->simulationInfo->storedRelations[13]);
  gout[15] = (tmp20) ? 1 : -1;
  tmp21 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */, data->simulationInfo->storedRelations[11]);
  gout[16] = (tmp21) ? 1 : -1;
  tmp22 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[65] /* constantLoad.d_t PARAM */, data->simulationInfo->storedRelations[12]);
  gout[17] = (tmp22) ? 1 : -1;
  tmp23 = LessZC(data->localData[0]->realVars[53] /* constantLoad.v variable */, data->simulationInfo->realParameter[35] /* constantLoad.PQBRAK PARAM */, data->simulationInfo->storedRelations[14]);
  gout[18] = (tmp23) ? 1 : -1;
  tmp24 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[287] /* pwLine.t1 PARAM */, data->simulationInfo->storedRelations[1]);
  gout[19] = (tmp24) ? 1 : -1;
  tmp25 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[288] /* pwLine.t2 PARAM */, data->simulationInfo->storedRelations[2]);
  gout[20] = (tmp25) ? 1 : -1;
  tmp26 = LessZC(data->localData[0]->realVars[3] /* eSST4B.VR1.y STATE(1) */, data->simulationInfo->realParameter[120] /* eSST4B.VR1.outMin PARAM */, data->simulationInfo->storedRelations[15]);
  tmp27 = LessZC((data->simulationInfo->realParameter[118] /* eSST4B.VR1.k PARAM */) * (data->localData[0]->realVars[60] /* eSST4B.Gain1.u variable */), 0.0, data->simulationInfo->storedRelations[16]);
  tmp28 = GreaterZC(data->localData[0]->realVars[3] /* eSST4B.VR1.y STATE(1) */, data->simulationInfo->realParameter[119] /* eSST4B.VR1.outMax PARAM */, data->simulationInfo->storedRelations[17]);
  tmp29 = GreaterZC((data->simulationInfo->realParameter[118] /* eSST4B.VR1.k PARAM */) * (data->localData[0]->realVars[60] /* eSST4B.Gain1.u variable */), 0.0, data->simulationInfo->storedRelations[18]);
  gout[21] = (((tmp26 && tmp27) || (tmp28 && tmp29))) ? 1 : -1;
  tmp30 = LessEqZC(data->localData[0]->realVars[79] /* eSST4B.rectifierCommutationVoltageDrop.division.y variable */, 0.0, data->simulationInfo->storedRelations[19]);
  gout[22] = (tmp30) ? 1 : -1;
  tmp31 = GreaterZC(data->localData[0]->realVars[79] /* eSST4B.rectifierCommutationVoltageDrop.division.y variable */, 0.0, data->simulationInfo->storedRelations[20]);
  tmp32 = LessEqZC(data->localData[0]->realVars[79] /* eSST4B.rectifierCommutationVoltageDrop.division.y variable */, 0.433, data->simulationInfo->storedRelations[21]);
  gout[23] = ((tmp31 && tmp32)) ? 1 : -1;
  tmp33 = GreaterZC(data->localData[0]->realVars[79] /* eSST4B.rectifierCommutationVoltageDrop.division.y variable */, 0.433, data->simulationInfo->storedRelations[22]);
  tmp34 = LessZC(data->localData[0]->realVars[79] /* eSST4B.rectifierCommutationVoltageDrop.division.y variable */, 0.75, data->simulationInfo->storedRelations[23]);
  gout[24] = ((tmp33 && tmp34)) ? 1 : -1;
  tmp35 = GreaterEqZC(data->localData[0]->realVars[79] /* eSST4B.rectifierCommutationVoltageDrop.division.y variable */, 0.75, data->simulationInfo->storedRelations[24]);
  tmp36 = LessEqZC(data->localData[0]->realVars[79] /* eSST4B.rectifierCommutationVoltageDrop.division.y variable */, 1.0, data->simulationInfo->storedRelations[25]);
  gout[25] = ((tmp35 && tmp36)) ? 1 : -1;
  tmp37 = GreaterZC(data->localData[0]->realVars[74] /* eSST4B.lV_Gate.n1 variable */, data->simulationInfo->realParameter[272] /* plusInf.k PARAM */, data->simulationInfo->storedRelations[26]);
  gout[26] = (tmp37) ? 1 : -1;
  tmp38 = LessZC(data->localData[0]->realVars[2] /* eSST4B.VM1.y STATE(1) */, data->simulationInfo->realParameter[113] /* eSST4B.VM1.outMin PARAM */, data->simulationInfo->storedRelations[27]);
  tmp39 = LessZC((data->simulationInfo->realParameter[111] /* eSST4B.VM1.k PARAM */) * (data->localData[0]->realVars[62] /* eSST4B.Gain2.u variable */), 0.0, data->simulationInfo->storedRelations[28]);
  tmp40 = GreaterZC(data->localData[0]->realVars[2] /* eSST4B.VM1.y STATE(1) */, data->simulationInfo->realParameter[112] /* eSST4B.VM1.outMax PARAM */, data->simulationInfo->storedRelations[29]);
  tmp41 = GreaterZC((data->simulationInfo->realParameter[111] /* eSST4B.VM1.k PARAM */) * (data->localData[0]->realVars[62] /* eSST4B.Gain2.u variable */), 0.0, data->simulationInfo->storedRelations[30]);
  gout[27] = (((tmp38 && tmp39) || (tmp40 && tmp41))) ? 1 : -1;
  tmp42 = GreaterZC(data->localData[0]->realVars[73] /* eSST4B.add2.y variable */, data->simulationInfo->realParameter[154] /* eSST4B.limiter1.uMax PARAM */, data->simulationInfo->storedRelations[31]);
  gout[28] = (tmp42) ? 1 : -1;
  tmp43 = LessZC(data->localData[0]->realVars[73] /* eSST4B.add2.y variable */, data->simulationInfo->realParameter[155] /* eSST4B.limiter1.uMin PARAM */, data->simulationInfo->storedRelations[32]);
  gout[29] = (tmp43) ? 1 : -1;

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_ZC);
#endif

  TRACE_POP
  return 0;
}

const char *OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_relationDescription(int i)
{
  const char *res[] = {"time < eSST4B.Vref_step.startTime",
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
  "time >= constantLoad.t1",
  "time <= constantLoad.t1 + constantLoad.d_t",
  "constantLoad.v < 0.5",
  "constantLoad.v < constantLoad.PQBRAK",
  "eSST4B.VR1.y < eSST4B.VR1.outMin",
  "eSST4B.VR1.k * eSST4B.Gain1.u < 0.0",
  "eSST4B.VR1.y > eSST4B.VR1.outMax",
  "eSST4B.VR1.k * eSST4B.Gain1.u > 0.0",
  "eSST4B.rectifierCommutationVoltageDrop.division.y <= 0.0",
  "eSST4B.rectifierCommutationVoltageDrop.division.y > 0.0",
  "eSST4B.rectifierCommutationVoltageDrop.division.y <= 0.433",
  "eSST4B.rectifierCommutationVoltageDrop.division.y > 0.433",
  "eSST4B.rectifierCommutationVoltageDrop.division.y < 0.75",
  "eSST4B.rectifierCommutationVoltageDrop.division.y >= 0.75",
  "eSST4B.rectifierCommutationVoltageDrop.division.y <= 1.0",
  "eSST4B.lV_Gate.n1 > plusInf.k",
  "eSST4B.VM1.y < eSST4B.VM1.outMin",
  "eSST4B.VM1.k * eSST4B.Gain2.u < 0.0",
  "eSST4B.VM1.y > eSST4B.VM1.outMax",
  "eSST4B.VM1.k * eSST4B.Gain2.u > 0.0",
  "eSST4B.add2.y > eSST4B.limiter1.uMax",
  "eSST4B.add2.y < eSST4B.limiter1.uMin"};
  return res[i];
}

int OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_function_updateRelations(DATA *data, threadData_t *threadData, int evalforZeroCross)
{
  TRACE_PUSH
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
  modelica_boolean tmp59;
  modelica_boolean tmp60;
  modelica_boolean tmp61;
  modelica_boolean tmp62;
  modelica_boolean tmp63;
  modelica_boolean tmp64;
  modelica_boolean tmp65;
  modelica_boolean tmp66;
  modelica_boolean tmp67;
  modelica_boolean tmp68;
  modelica_boolean tmp69;
  modelica_boolean tmp70;
  modelica_boolean tmp71;
  modelica_boolean tmp72;
  modelica_boolean tmp73;
  modelica_boolean tmp74;
  modelica_boolean tmp75;
  modelica_boolean tmp76;
  
  if(evalforZeroCross) {
    tmp44 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[133] /* eSST4B.Vref_step.startTime PARAM */, data->simulationInfo->storedRelations[0]);
    data->simulationInfo->relations[0] = tmp44;
    tmp45 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[287] /* pwLine.t1 PARAM */, data->simulationInfo->storedRelations[1]);
    data->simulationInfo->relations[1] = tmp45;
    tmp46 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[288] /* pwLine.t2 PARAM */, data->simulationInfo->storedRelations[2]);
    data->simulationInfo->relations[2] = tmp46;
    tmp47 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[309] /* pwLine3.t1 PARAM */, data->simulationInfo->storedRelations[3]);
    data->simulationInfo->relations[3] = tmp47;
    tmp48 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[310] /* pwLine3.t2 PARAM */, data->simulationInfo->storedRelations[4]);
    data->simulationInfo->relations[4] = tmp48;
    tmp49 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[276] /* pwFault.t1 PARAM */, data->simulationInfo->storedRelations[5]);
    data->simulationInfo->relations[5] = tmp49;
    tmp50 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[277] /* pwFault.t2 PARAM */, data->simulationInfo->storedRelations[6]);
    data->simulationInfo->relations[6] = tmp50;
    tmp51 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[320] /* pwLine4.t1 PARAM */, data->simulationInfo->storedRelations[7]);
    data->simulationInfo->relations[7] = tmp51;
    tmp52 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[321] /* pwLine4.t2 PARAM */, data->simulationInfo->storedRelations[8]);
    data->simulationInfo->relations[8] = tmp52;
    tmp53 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[298] /* pwLine1.t1 PARAM */, data->simulationInfo->storedRelations[9]);
    data->simulationInfo->relations[9] = tmp53;
    tmp54 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[299] /* pwLine1.t2 PARAM */, data->simulationInfo->storedRelations[10]);
    data->simulationInfo->relations[10] = tmp54;
    tmp55 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */, data->simulationInfo->storedRelations[11]);
    data->simulationInfo->relations[11] = tmp55;
    tmp56 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[65] /* constantLoad.d_t PARAM */, data->simulationInfo->storedRelations[12]);
    data->simulationInfo->relations[12] = tmp56;
    tmp57 = LessZC(data->localData[0]->realVars[53] /* constantLoad.v variable */, 0.5, data->simulationInfo->storedRelations[13]);
    data->simulationInfo->relations[13] = tmp57;
    tmp58 = LessZC(data->localData[0]->realVars[53] /* constantLoad.v variable */, data->simulationInfo->realParameter[35] /* constantLoad.PQBRAK PARAM */, data->simulationInfo->storedRelations[14]);
    data->simulationInfo->relations[14] = tmp58;
    tmp59 = LessZC(data->localData[0]->realVars[3] /* eSST4B.VR1.y STATE(1) */, data->simulationInfo->realParameter[120] /* eSST4B.VR1.outMin PARAM */, data->simulationInfo->storedRelations[15]);
    data->simulationInfo->relations[15] = tmp59;
    tmp60 = LessZC((data->simulationInfo->realParameter[118] /* eSST4B.VR1.k PARAM */) * (data->localData[0]->realVars[60] /* eSST4B.Gain1.u variable */), 0.0, data->simulationInfo->storedRelations[16]);
    data->simulationInfo->relations[16] = tmp60;
    tmp61 = GreaterZC(data->localData[0]->realVars[3] /* eSST4B.VR1.y STATE(1) */, data->simulationInfo->realParameter[119] /* eSST4B.VR1.outMax PARAM */, data->simulationInfo->storedRelations[17]);
    data->simulationInfo->relations[17] = tmp61;
    tmp62 = GreaterZC((data->simulationInfo->realParameter[118] /* eSST4B.VR1.k PARAM */) * (data->localData[0]->realVars[60] /* eSST4B.Gain1.u variable */), 0.0, data->simulationInfo->storedRelations[18]);
    data->simulationInfo->relations[18] = tmp62;
    tmp63 = LessEqZC(data->localData[0]->realVars[79] /* eSST4B.rectifierCommutationVoltageDrop.division.y variable */, 0.0, data->simulationInfo->storedRelations[19]);
    data->simulationInfo->relations[19] = tmp63;
    tmp64 = GreaterZC(data->localData[0]->realVars[79] /* eSST4B.rectifierCommutationVoltageDrop.division.y variable */, 0.0, data->simulationInfo->storedRelations[20]);
    data->simulationInfo->relations[20] = tmp64;
    tmp65 = LessEqZC(data->localData[0]->realVars[79] /* eSST4B.rectifierCommutationVoltageDrop.division.y variable */, 0.433, data->simulationInfo->storedRelations[21]);
    data->simulationInfo->relations[21] = tmp65;
    tmp66 = GreaterZC(data->localData[0]->realVars[79] /* eSST4B.rectifierCommutationVoltageDrop.division.y variable */, 0.433, data->simulationInfo->storedRelations[22]);
    data->simulationInfo->relations[22] = tmp66;
    tmp67 = LessZC(data->localData[0]->realVars[79] /* eSST4B.rectifierCommutationVoltageDrop.division.y variable */, 0.75, data->simulationInfo->storedRelations[23]);
    data->simulationInfo->relations[23] = tmp67;
    tmp68 = GreaterEqZC(data->localData[0]->realVars[79] /* eSST4B.rectifierCommutationVoltageDrop.division.y variable */, 0.75, data->simulationInfo->storedRelations[24]);
    data->simulationInfo->relations[24] = tmp68;
    tmp69 = LessEqZC(data->localData[0]->realVars[79] /* eSST4B.rectifierCommutationVoltageDrop.division.y variable */, 1.0, data->simulationInfo->storedRelations[25]);
    data->simulationInfo->relations[25] = tmp69;
    tmp70 = GreaterZC(data->localData[0]->realVars[74] /* eSST4B.lV_Gate.n1 variable */, data->simulationInfo->realParameter[272] /* plusInf.k PARAM */, data->simulationInfo->storedRelations[26]);
    data->simulationInfo->relations[26] = tmp70;
    tmp71 = LessZC(data->localData[0]->realVars[2] /* eSST4B.VM1.y STATE(1) */, data->simulationInfo->realParameter[113] /* eSST4B.VM1.outMin PARAM */, data->simulationInfo->storedRelations[27]);
    data->simulationInfo->relations[27] = tmp71;
    tmp72 = LessZC((data->simulationInfo->realParameter[111] /* eSST4B.VM1.k PARAM */) * (data->localData[0]->realVars[62] /* eSST4B.Gain2.u variable */), 0.0, data->simulationInfo->storedRelations[28]);
    data->simulationInfo->relations[28] = tmp72;
    tmp73 = GreaterZC(data->localData[0]->realVars[2] /* eSST4B.VM1.y STATE(1) */, data->simulationInfo->realParameter[112] /* eSST4B.VM1.outMax PARAM */, data->simulationInfo->storedRelations[29]);
    data->simulationInfo->relations[29] = tmp73;
    tmp74 = GreaterZC((data->simulationInfo->realParameter[111] /* eSST4B.VM1.k PARAM */) * (data->localData[0]->realVars[62] /* eSST4B.Gain2.u variable */), 0.0, data->simulationInfo->storedRelations[30]);
    data->simulationInfo->relations[30] = tmp74;
    tmp75 = GreaterZC(data->localData[0]->realVars[73] /* eSST4B.add2.y variable */, data->simulationInfo->realParameter[154] /* eSST4B.limiter1.uMax PARAM */, data->simulationInfo->storedRelations[31]);
    data->simulationInfo->relations[31] = tmp75;
    tmp76 = LessZC(data->localData[0]->realVars[73] /* eSST4B.add2.y variable */, data->simulationInfo->realParameter[155] /* eSST4B.limiter1.uMin PARAM */, data->simulationInfo->storedRelations[32]);
    data->simulationInfo->relations[32] = tmp76;
  } else {
    data->simulationInfo->relations[0] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[133] /* eSST4B.Vref_step.startTime PARAM */);
    data->simulationInfo->relations[1] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[287] /* pwLine.t1 PARAM */);
    data->simulationInfo->relations[2] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[288] /* pwLine.t2 PARAM */);
    data->simulationInfo->relations[3] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[309] /* pwLine3.t1 PARAM */);
    data->simulationInfo->relations[4] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[310] /* pwLine3.t2 PARAM */);
    data->simulationInfo->relations[5] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[276] /* pwFault.t1 PARAM */);
    data->simulationInfo->relations[6] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[277] /* pwFault.t2 PARAM */);
    data->simulationInfo->relations[7] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[320] /* pwLine4.t1 PARAM */);
    data->simulationInfo->relations[8] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[321] /* pwLine4.t2 PARAM */);
    data->simulationInfo->relations[9] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[298] /* pwLine1.t1 PARAM */);
    data->simulationInfo->relations[10] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[299] /* pwLine1.t2 PARAM */);
    data->simulationInfo->relations[11] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */);
    data->simulationInfo->relations[12] = (data->localData[0]->timeValue <= data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[65] /* constantLoad.d_t PARAM */);
    data->simulationInfo->relations[13] = (data->localData[0]->realVars[53] /* constantLoad.v variable */ < 0.5);
    data->simulationInfo->relations[14] = (data->localData[0]->realVars[53] /* constantLoad.v variable */ < data->simulationInfo->realParameter[35] /* constantLoad.PQBRAK PARAM */);
    data->simulationInfo->relations[15] = (data->localData[0]->realVars[3] /* eSST4B.VR1.y STATE(1) */ < data->simulationInfo->realParameter[120] /* eSST4B.VR1.outMin PARAM */);
    data->simulationInfo->relations[16] = ((data->simulationInfo->realParameter[118] /* eSST4B.VR1.k PARAM */) * (data->localData[0]->realVars[60] /* eSST4B.Gain1.u variable */) < 0.0);
    data->simulationInfo->relations[17] = (data->localData[0]->realVars[3] /* eSST4B.VR1.y STATE(1) */ > data->simulationInfo->realParameter[119] /* eSST4B.VR1.outMax PARAM */);
    data->simulationInfo->relations[18] = ((data->simulationInfo->realParameter[118] /* eSST4B.VR1.k PARAM */) * (data->localData[0]->realVars[60] /* eSST4B.Gain1.u variable */) > 0.0);
    data->simulationInfo->relations[19] = (data->localData[0]->realVars[79] /* eSST4B.rectifierCommutationVoltageDrop.division.y variable */ <= 0.0);
    data->simulationInfo->relations[20] = (data->localData[0]->realVars[79] /* eSST4B.rectifierCommutationVoltageDrop.division.y variable */ > 0.0);
    data->simulationInfo->relations[21] = (data->localData[0]->realVars[79] /* eSST4B.rectifierCommutationVoltageDrop.division.y variable */ <= 0.433);
    data->simulationInfo->relations[22] = (data->localData[0]->realVars[79] /* eSST4B.rectifierCommutationVoltageDrop.division.y variable */ > 0.433);
    data->simulationInfo->relations[23] = (data->localData[0]->realVars[79] /* eSST4B.rectifierCommutationVoltageDrop.division.y variable */ < 0.75);
    data->simulationInfo->relations[24] = (data->localData[0]->realVars[79] /* eSST4B.rectifierCommutationVoltageDrop.division.y variable */ >= 0.75);
    data->simulationInfo->relations[25] = (data->localData[0]->realVars[79] /* eSST4B.rectifierCommutationVoltageDrop.division.y variable */ <= 1.0);
    data->simulationInfo->relations[26] = (data->localData[0]->realVars[74] /* eSST4B.lV_Gate.n1 variable */ > data->simulationInfo->realParameter[272] /* plusInf.k PARAM */);
    data->simulationInfo->relations[27] = (data->localData[0]->realVars[2] /* eSST4B.VM1.y STATE(1) */ < data->simulationInfo->realParameter[113] /* eSST4B.VM1.outMin PARAM */);
    data->simulationInfo->relations[28] = ((data->simulationInfo->realParameter[111] /* eSST4B.VM1.k PARAM */) * (data->localData[0]->realVars[62] /* eSST4B.Gain2.u variable */) < 0.0);
    data->simulationInfo->relations[29] = (data->localData[0]->realVars[2] /* eSST4B.VM1.y STATE(1) */ > data->simulationInfo->realParameter[112] /* eSST4B.VM1.outMax PARAM */);
    data->simulationInfo->relations[30] = ((data->simulationInfo->realParameter[111] /* eSST4B.VM1.k PARAM */) * (data->localData[0]->realVars[62] /* eSST4B.Gain2.u variable */) > 0.0);
    data->simulationInfo->relations[31] = (data->localData[0]->realVars[73] /* eSST4B.add2.y variable */ > data->simulationInfo->realParameter[154] /* eSST4B.limiter1.uMax PARAM */);
    data->simulationInfo->relations[32] = (data->localData[0]->realVars[73] /* eSST4B.add2.y variable */ < data->simulationInfo->realParameter[155] /* eSST4B.limiter1.uMin PARAM */);
  }
  
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

