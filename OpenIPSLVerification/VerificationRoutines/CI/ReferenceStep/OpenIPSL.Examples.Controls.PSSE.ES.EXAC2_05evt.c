/* Events: Sample, Zero Crossings, Relations, Discrete Changes */
#include "OpenIPSL.Examples.Controls.PSSE.ES.EXAC2_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* Initializes the raw time events of the simulation using the now
   calcualted parameters. */
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_function_initSample(DATA *data, threadData_t *threadData)
{
  long i=0;
}

const char *OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_zeroCrossingDescription(int i, int **out_EquationIndexes)
{
  static const char *res[] = {"time < eXAC2.Vref_step.startTime",
  "time >= pwLine.t1 and time < pwLine.t2",
  "time >= pwLine3.t1 and time < pwLine3.t2",
  "time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t",
  "constantLoad.v < 0.5",
  "constantLoad.v < constantLoad.PQBRAK",
  "time >= constantLoad.t1",
  "time <= constantLoad.t1 + constantLoad.d_t",
  "time >= pwLine3.t1",
  "time < pwLine3.t2",
  "time >= pwLine4.t1 and time < pwLine4.t2",
  "time < pwFault.t1",
  "time < pwFault.t2 and pwFault.ground",
  "time < pwFault.t2",
  "time >= pwLine4.t1",
  "time < pwLine4.t2",
  "time >= pwLine1.t1 and time < pwLine1.t2",
  "time >= pwLine1.t1",
  "time < pwLine1.t2",
  "time >= pwLine.t1",
  "time < pwLine.t2",
  "eXAC2.rectifierCommutationVoltageDrop.division.y <= 0.0",
  "eXAC2.rectifierCommutationVoltageDrop.division.y > 0.0 and eXAC2.rectifierCommutationVoltageDrop.division.y <= 0.433",
  "eXAC2.rectifierCommutationVoltageDrop.division.y > 0.433 and eXAC2.rectifierCommutationVoltageDrop.division.y < 0.75",
  "eXAC2.rectifierCommutationVoltageDrop.division.y >= 0.75 and eXAC2.rectifierCommutationVoltageDrop.division.y <= 1.0",
  "eXAC2.DiffV1.y > eXAC2.gain3.y",
  "eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.y < eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.outMin and eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.k * eXAC2.rotatingExciterWithDemagnetizationLimited.feedback.y < 0.0 or eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.y > eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.outMax and eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.k * eXAC2.rotatingExciterWithDemagnetizationLimited.feedback.y > 0.0",
  "eXAC2.imLimitedSimpleLag.state > eXAC2.imLimitedSimpleLag.outMax and eXAC2.imLimitedSimpleLag.K * eXAC2.imLimitedSimpleLag.u - eXAC2.imLimitedSimpleLag.state < 0.0",
  "eXAC2.imLimitedSimpleLag.state < eXAC2.imLimitedSimpleLag.outMin and eXAC2.imLimitedSimpleLag.K * eXAC2.imLimitedSimpleLag.u - eXAC2.imLimitedSimpleLag.state > 0.0"};
  static const int occurEqs0[] = {1,377};
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
  static const int occurEqs21[] = {1,494};
  static const int occurEqs22[] = {1,494};
  static const int occurEqs23[] = {1,494};
  static const int occurEqs24[] = {1,494};
  static const int occurEqs25[] = {1,516};
  static const int occurEqs26[] = {1,520};
  static const int occurEqs27[] = {1,521};
  static const int occurEqs28[] = {1,522};
  static const int *occurEqs[] = {occurEqs0,occurEqs1,occurEqs2,occurEqs3,occurEqs4,occurEqs5,occurEqs6,occurEqs7,occurEqs8,occurEqs9,occurEqs10,occurEqs11,occurEqs12,occurEqs13,occurEqs14,occurEqs15,occurEqs16,occurEqs17,occurEqs18,occurEqs19,occurEqs20,occurEqs21,occurEqs22,occurEqs23,occurEqs24,occurEqs25,occurEqs26,occurEqs27,occurEqs28};
  *out_EquationIndexes = (int*) occurEqs[i];
  return res[i];
}

/* forwarded equations */
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_370(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_371(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_372(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_373(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_374(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_375(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_376(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_377(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_378(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_379(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_380(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_381(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_382(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_383(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_384(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_385(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_386(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_477(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_487(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_488(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_489(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_490(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_491(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_492(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_493(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_494(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_495(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_496(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_497(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_498(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_499(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_500(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_501(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_502(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_503(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_504(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_505(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_506(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_507(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_508(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_509(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_510(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_511(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_512(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_513(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_514(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_515(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_516(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_517(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_518(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_519(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_520(DATA* data, threadData_t *threadData);

int OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_function_ZeroCrossingsEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->callStatistics.functionZeroCrossingsEquations++;

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_370(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_371(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_372(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_373(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_374(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_375(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_376(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_377(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_378(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_379(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_380(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_381(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_382(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_383(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_384(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_385(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_386(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_477(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_487(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_488(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_489(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_490(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_491(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_492(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_493(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_494(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_495(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_496(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_497(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_498(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_499(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_500(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_501(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_502(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_503(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_504(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_505(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_506(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_507(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_508(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_509(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_510(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_511(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_512(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_513(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_514(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_515(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_516(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_517(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_518(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_519(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_520(data, threadData);
  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_function_ZeroCrossings(DATA *data, threadData_t *threadData, double *gout)
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

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_ZC);
#endif
  data->simulationInfo->callStatistics.functionZeroCrossings++;

  tmp0 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[125] /* eXAC2.Vref_step.startTime PARAM */, data->simulationInfo->storedRelations[0]);
  gout[0] = (tmp0) ? 1 : -1;
  tmp1 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[323] /* pwLine.t1 PARAM */, data->simulationInfo->storedRelations[1]);
  tmp2 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[324] /* pwLine.t2 PARAM */, data->simulationInfo->storedRelations[2]);
  gout[1] = ((tmp1 && tmp2)) ? 1 : -1;
  tmp3 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[345] /* pwLine3.t1 PARAM */, data->simulationInfo->storedRelations[3]);
  tmp4 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[346] /* pwLine3.t2 PARAM */, data->simulationInfo->storedRelations[4]);
  gout[2] = ((tmp3 && tmp4)) ? 1 : -1;
  tmp5 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */, data->simulationInfo->storedRelations[5]);
  tmp6 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[65] /* constantLoad.d_t PARAM */, data->simulationInfo->storedRelations[6]);
  gout[3] = ((tmp5 && tmp6)) ? 1 : -1;
  tmp7 = LessZC(data->localData[0]->realVars[55] /* constantLoad.v variable */, 0.5, data->simulationInfo->storedRelations[7]);
  gout[4] = (tmp7) ? 1 : -1;
  tmp8 = LessZC(data->localData[0]->realVars[55] /* constantLoad.v variable */, data->simulationInfo->realParameter[35] /* constantLoad.PQBRAK PARAM */, data->simulationInfo->storedRelations[8]);
  gout[5] = (tmp8) ? 1 : -1;
  tmp9 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */, data->simulationInfo->storedRelations[5]);
  gout[6] = (tmp9) ? 1 : -1;
  tmp10 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[65] /* constantLoad.d_t PARAM */, data->simulationInfo->storedRelations[6]);
  gout[7] = (tmp10) ? 1 : -1;
  tmp11 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[345] /* pwLine3.t1 PARAM */, data->simulationInfo->storedRelations[3]);
  gout[8] = (tmp11) ? 1 : -1;
  tmp12 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[346] /* pwLine3.t2 PARAM */, data->simulationInfo->storedRelations[4]);
  gout[9] = (tmp12) ? 1 : -1;
  tmp13 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[356] /* pwLine4.t1 PARAM */, data->simulationInfo->storedRelations[9]);
  tmp14 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[357] /* pwLine4.t2 PARAM */, data->simulationInfo->storedRelations[10]);
  gout[10] = ((tmp13 && tmp14)) ? 1 : -1;
  tmp15 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[312] /* pwFault.t1 PARAM */, data->simulationInfo->storedRelations[11]);
  gout[11] = (tmp15) ? 1 : -1;
  tmp16 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[313] /* pwFault.t2 PARAM */, data->simulationInfo->storedRelations[12]);
  gout[12] = ((tmp16 && data->simulationInfo->booleanParameter[70] /* pwFault.ground PARAM */)) ? 1 : -1;
  tmp17 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[313] /* pwFault.t2 PARAM */, data->simulationInfo->storedRelations[12]);
  gout[13] = (tmp17) ? 1 : -1;
  tmp18 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[356] /* pwLine4.t1 PARAM */, data->simulationInfo->storedRelations[9]);
  gout[14] = (tmp18) ? 1 : -1;
  tmp19 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[357] /* pwLine4.t2 PARAM */, data->simulationInfo->storedRelations[10]);
  gout[15] = (tmp19) ? 1 : -1;
  tmp20 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[334] /* pwLine1.t1 PARAM */, data->simulationInfo->storedRelations[13]);
  tmp21 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[335] /* pwLine1.t2 PARAM */, data->simulationInfo->storedRelations[14]);
  gout[16] = ((tmp20 && tmp21)) ? 1 : -1;
  tmp22 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[334] /* pwLine1.t1 PARAM */, data->simulationInfo->storedRelations[13]);
  gout[17] = (tmp22) ? 1 : -1;
  tmp23 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[335] /* pwLine1.t2 PARAM */, data->simulationInfo->storedRelations[14]);
  gout[18] = (tmp23) ? 1 : -1;
  tmp24 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[323] /* pwLine.t1 PARAM */, data->simulationInfo->storedRelations[1]);
  gout[19] = (tmp24) ? 1 : -1;
  tmp25 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[324] /* pwLine.t2 PARAM */, data->simulationInfo->storedRelations[2]);
  gout[20] = (tmp25) ? 1 : -1;
  tmp26 = LessEqZC(data->localData[0]->realVars[80] /* eXAC2.rectifierCommutationVoltageDrop.division.y variable */, 0.0, data->simulationInfo->storedRelations[15]);
  gout[21] = (tmp26) ? 1 : -1;
  tmp27 = GreaterZC(data->localData[0]->realVars[80] /* eXAC2.rectifierCommutationVoltageDrop.division.y variable */, 0.0, data->simulationInfo->storedRelations[16]);
  tmp28 = LessEqZC(data->localData[0]->realVars[80] /* eXAC2.rectifierCommutationVoltageDrop.division.y variable */, 0.433, data->simulationInfo->storedRelations[17]);
  gout[22] = ((tmp27 && tmp28)) ? 1 : -1;
  tmp29 = GreaterZC(data->localData[0]->realVars[80] /* eXAC2.rectifierCommutationVoltageDrop.division.y variable */, 0.433, data->simulationInfo->storedRelations[18]);
  tmp30 = LessZC(data->localData[0]->realVars[80] /* eXAC2.rectifierCommutationVoltageDrop.division.y variable */, 0.75, data->simulationInfo->storedRelations[19]);
  gout[23] = ((tmp29 && tmp30)) ? 1 : -1;
  tmp31 = GreaterEqZC(data->localData[0]->realVars[80] /* eXAC2.rectifierCommutationVoltageDrop.division.y variable */, 0.75, data->simulationInfo->storedRelations[20]);
  tmp32 = LessEqZC(data->localData[0]->realVars[80] /* eXAC2.rectifierCommutationVoltageDrop.division.y variable */, 1.0, data->simulationInfo->storedRelations[21]);
  gout[24] = ((tmp31 && tmp32)) ? 1 : -1;
  tmp33 = GreaterZC(data->localData[0]->realVars[61] /* eXAC2.DiffV1.y variable */, data->localData[0]->realVars[73] /* eXAC2.gain3.y variable */, data->simulationInfo->storedRelations[22]);
  gout[25] = (tmp33) ? 1 : -1;
  tmp34 = LessZC(data->localData[0]->realVars[4] /* eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.y STATE(1) */, data->simulationInfo->realParameter[192] /* eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.outMin PARAM */, data->simulationInfo->storedRelations[23]);
  tmp35 = LessZC((data->simulationInfo->realParameter[190] /* eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.k PARAM */) * (data->localData[0]->realVars[85] /* eXAC2.rotatingExciterWithDemagnetizationLimited.feedback.y variable */), 0.0, data->simulationInfo->storedRelations[24]);
  tmp36 = GreaterZC(data->localData[0]->realVars[4] /* eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.y STATE(1) */, data->simulationInfo->realParameter[191] /* eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.outMax PARAM */, data->simulationInfo->storedRelations[25]);
  tmp37 = GreaterZC((data->simulationInfo->realParameter[190] /* eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.k PARAM */) * (data->localData[0]->realVars[85] /* eXAC2.rotatingExciterWithDemagnetizationLimited.feedback.y variable */), 0.0, data->simulationInfo->storedRelations[26]);
  gout[26] = (((tmp34 && tmp35) || (tmp36 && tmp37))) ? 1 : -1;
  tmp38 = GreaterZC(data->localData[0]->realVars[2] /* eXAC2.imLimitedSimpleLag.state STATE(1) */, data->simulationInfo->realParameter[153] /* eXAC2.imLimitedSimpleLag.outMax PARAM */, data->simulationInfo->storedRelations[27]);
  tmp39 = LessZC((data->simulationInfo->realParameter[149] /* eXAC2.imLimitedSimpleLag.K PARAM */) * (data->localData[0]->realVars[75] /* eXAC2.imLimitedSimpleLag.u variable */) - data->localData[0]->realVars[2] /* eXAC2.imLimitedSimpleLag.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[28]);
  gout[27] = ((tmp38 && tmp39)) ? 1 : -1;
  tmp40 = LessZC(data->localData[0]->realVars[2] /* eXAC2.imLimitedSimpleLag.state STATE(1) */, data->simulationInfo->realParameter[154] /* eXAC2.imLimitedSimpleLag.outMin PARAM */, data->simulationInfo->storedRelations[29]);
  tmp41 = GreaterZC((data->simulationInfo->realParameter[149] /* eXAC2.imLimitedSimpleLag.K PARAM */) * (data->localData[0]->realVars[75] /* eXAC2.imLimitedSimpleLag.u variable */) - data->localData[0]->realVars[2] /* eXAC2.imLimitedSimpleLag.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[30]);
  gout[28] = ((tmp40 && tmp41)) ? 1 : -1;

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_ZC);
#endif

  TRACE_POP
  return 0;
}

const char *OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_relationDescription(int i)
{
  const char *res[] = {"time < eXAC2.Vref_step.startTime",
  "time >= pwLine.t1",
  "time < pwLine.t2",
  "time >= pwLine3.t1",
  "time < pwLine3.t2",
  "time >= constantLoad.t1",
  "time <= constantLoad.t1 + constantLoad.d_t",
  "constantLoad.v < 0.5",
  "constantLoad.v < constantLoad.PQBRAK",
  "time >= pwLine4.t1",
  "time < pwLine4.t2",
  "time < pwFault.t1",
  "time < pwFault.t2",
  "time >= pwLine1.t1",
  "time < pwLine1.t2",
  "eXAC2.rectifierCommutationVoltageDrop.division.y <= 0.0",
  "eXAC2.rectifierCommutationVoltageDrop.division.y > 0.0",
  "eXAC2.rectifierCommutationVoltageDrop.division.y <= 0.433",
  "eXAC2.rectifierCommutationVoltageDrop.division.y > 0.433",
  "eXAC2.rectifierCommutationVoltageDrop.division.y < 0.75",
  "eXAC2.rectifierCommutationVoltageDrop.division.y >= 0.75",
  "eXAC2.rectifierCommutationVoltageDrop.division.y <= 1.0",
  "eXAC2.DiffV1.y > eXAC2.gain3.y",
  "eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.y < eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.outMin",
  "eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.k * eXAC2.rotatingExciterWithDemagnetizationLimited.feedback.y < 0.0",
  "eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.y > eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.outMax",
  "eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.k * eXAC2.rotatingExciterWithDemagnetizationLimited.feedback.y > 0.0",
  "eXAC2.imLimitedSimpleLag.state > eXAC2.imLimitedSimpleLag.outMax",
  "eXAC2.imLimitedSimpleLag.K * eXAC2.imLimitedSimpleLag.u - eXAC2.imLimitedSimpleLag.state < 0.0",
  "eXAC2.imLimitedSimpleLag.state < eXAC2.imLimitedSimpleLag.outMin",
  "eXAC2.imLimitedSimpleLag.K * eXAC2.imLimitedSimpleLag.u - eXAC2.imLimitedSimpleLag.state > 0.0"};
  return res[i];
}

int OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_function_updateRelations(DATA *data, threadData_t *threadData, int evalforZeroCross)
{
  TRACE_PUSH
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
  
  if(evalforZeroCross) {
    tmp42 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[125] /* eXAC2.Vref_step.startTime PARAM */, data->simulationInfo->storedRelations[0]);
    data->simulationInfo->relations[0] = tmp42;
    tmp43 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[323] /* pwLine.t1 PARAM */, data->simulationInfo->storedRelations[1]);
    data->simulationInfo->relations[1] = tmp43;
    tmp44 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[324] /* pwLine.t2 PARAM */, data->simulationInfo->storedRelations[2]);
    data->simulationInfo->relations[2] = tmp44;
    tmp45 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[345] /* pwLine3.t1 PARAM */, data->simulationInfo->storedRelations[3]);
    data->simulationInfo->relations[3] = tmp45;
    tmp46 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[346] /* pwLine3.t2 PARAM */, data->simulationInfo->storedRelations[4]);
    data->simulationInfo->relations[4] = tmp46;
    tmp47 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */, data->simulationInfo->storedRelations[5]);
    data->simulationInfo->relations[5] = tmp47;
    tmp48 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[65] /* constantLoad.d_t PARAM */, data->simulationInfo->storedRelations[6]);
    data->simulationInfo->relations[6] = tmp48;
    tmp49 = LessZC(data->localData[0]->realVars[55] /* constantLoad.v variable */, 0.5, data->simulationInfo->storedRelations[7]);
    data->simulationInfo->relations[7] = tmp49;
    tmp50 = LessZC(data->localData[0]->realVars[55] /* constantLoad.v variable */, data->simulationInfo->realParameter[35] /* constantLoad.PQBRAK PARAM */, data->simulationInfo->storedRelations[8]);
    data->simulationInfo->relations[8] = tmp50;
    tmp51 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[356] /* pwLine4.t1 PARAM */, data->simulationInfo->storedRelations[9]);
    data->simulationInfo->relations[9] = tmp51;
    tmp52 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[357] /* pwLine4.t2 PARAM */, data->simulationInfo->storedRelations[10]);
    data->simulationInfo->relations[10] = tmp52;
    tmp53 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[312] /* pwFault.t1 PARAM */, data->simulationInfo->storedRelations[11]);
    data->simulationInfo->relations[11] = tmp53;
    tmp54 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[313] /* pwFault.t2 PARAM */, data->simulationInfo->storedRelations[12]);
    data->simulationInfo->relations[12] = tmp54;
    tmp55 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[334] /* pwLine1.t1 PARAM */, data->simulationInfo->storedRelations[13]);
    data->simulationInfo->relations[13] = tmp55;
    tmp56 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[335] /* pwLine1.t2 PARAM */, data->simulationInfo->storedRelations[14]);
    data->simulationInfo->relations[14] = tmp56;
    tmp57 = LessEqZC(data->localData[0]->realVars[80] /* eXAC2.rectifierCommutationVoltageDrop.division.y variable */, 0.0, data->simulationInfo->storedRelations[15]);
    data->simulationInfo->relations[15] = tmp57;
    tmp58 = GreaterZC(data->localData[0]->realVars[80] /* eXAC2.rectifierCommutationVoltageDrop.division.y variable */, 0.0, data->simulationInfo->storedRelations[16]);
    data->simulationInfo->relations[16] = tmp58;
    tmp59 = LessEqZC(data->localData[0]->realVars[80] /* eXAC2.rectifierCommutationVoltageDrop.division.y variable */, 0.433, data->simulationInfo->storedRelations[17]);
    data->simulationInfo->relations[17] = tmp59;
    tmp60 = GreaterZC(data->localData[0]->realVars[80] /* eXAC2.rectifierCommutationVoltageDrop.division.y variable */, 0.433, data->simulationInfo->storedRelations[18]);
    data->simulationInfo->relations[18] = tmp60;
    tmp61 = LessZC(data->localData[0]->realVars[80] /* eXAC2.rectifierCommutationVoltageDrop.division.y variable */, 0.75, data->simulationInfo->storedRelations[19]);
    data->simulationInfo->relations[19] = tmp61;
    tmp62 = GreaterEqZC(data->localData[0]->realVars[80] /* eXAC2.rectifierCommutationVoltageDrop.division.y variable */, 0.75, data->simulationInfo->storedRelations[20]);
    data->simulationInfo->relations[20] = tmp62;
    tmp63 = LessEqZC(data->localData[0]->realVars[80] /* eXAC2.rectifierCommutationVoltageDrop.division.y variable */, 1.0, data->simulationInfo->storedRelations[21]);
    data->simulationInfo->relations[21] = tmp63;
    tmp64 = GreaterZC(data->localData[0]->realVars[61] /* eXAC2.DiffV1.y variable */, data->localData[0]->realVars[73] /* eXAC2.gain3.y variable */, data->simulationInfo->storedRelations[22]);
    data->simulationInfo->relations[22] = tmp64;
    tmp65 = LessZC(data->localData[0]->realVars[4] /* eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.y STATE(1) */, data->simulationInfo->realParameter[192] /* eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.outMin PARAM */, data->simulationInfo->storedRelations[23]);
    data->simulationInfo->relations[23] = tmp65;
    tmp66 = LessZC((data->simulationInfo->realParameter[190] /* eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.k PARAM */) * (data->localData[0]->realVars[85] /* eXAC2.rotatingExciterWithDemagnetizationLimited.feedback.y variable */), 0.0, data->simulationInfo->storedRelations[24]);
    data->simulationInfo->relations[24] = tmp66;
    tmp67 = GreaterZC(data->localData[0]->realVars[4] /* eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.y STATE(1) */, data->simulationInfo->realParameter[191] /* eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.outMax PARAM */, data->simulationInfo->storedRelations[25]);
    data->simulationInfo->relations[25] = tmp67;
    tmp68 = GreaterZC((data->simulationInfo->realParameter[190] /* eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.k PARAM */) * (data->localData[0]->realVars[85] /* eXAC2.rotatingExciterWithDemagnetizationLimited.feedback.y variable */), 0.0, data->simulationInfo->storedRelations[26]);
    data->simulationInfo->relations[26] = tmp68;
    tmp69 = GreaterZC(data->localData[0]->realVars[2] /* eXAC2.imLimitedSimpleLag.state STATE(1) */, data->simulationInfo->realParameter[153] /* eXAC2.imLimitedSimpleLag.outMax PARAM */, data->simulationInfo->storedRelations[27]);
    data->simulationInfo->relations[27] = tmp69;
    tmp70 = LessZC((data->simulationInfo->realParameter[149] /* eXAC2.imLimitedSimpleLag.K PARAM */) * (data->localData[0]->realVars[75] /* eXAC2.imLimitedSimpleLag.u variable */) - data->localData[0]->realVars[2] /* eXAC2.imLimitedSimpleLag.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[28]);
    data->simulationInfo->relations[28] = tmp70;
    tmp71 = LessZC(data->localData[0]->realVars[2] /* eXAC2.imLimitedSimpleLag.state STATE(1) */, data->simulationInfo->realParameter[154] /* eXAC2.imLimitedSimpleLag.outMin PARAM */, data->simulationInfo->storedRelations[29]);
    data->simulationInfo->relations[29] = tmp71;
    tmp72 = GreaterZC((data->simulationInfo->realParameter[149] /* eXAC2.imLimitedSimpleLag.K PARAM */) * (data->localData[0]->realVars[75] /* eXAC2.imLimitedSimpleLag.u variable */) - data->localData[0]->realVars[2] /* eXAC2.imLimitedSimpleLag.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[30]);
    data->simulationInfo->relations[30] = tmp72;
  } else {
    data->simulationInfo->relations[0] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[125] /* eXAC2.Vref_step.startTime PARAM */);
    data->simulationInfo->relations[1] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[323] /* pwLine.t1 PARAM */);
    data->simulationInfo->relations[2] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[324] /* pwLine.t2 PARAM */);
    data->simulationInfo->relations[3] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[345] /* pwLine3.t1 PARAM */);
    data->simulationInfo->relations[4] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[346] /* pwLine3.t2 PARAM */);
    data->simulationInfo->relations[5] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */);
    data->simulationInfo->relations[6] = (data->localData[0]->timeValue <= data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[65] /* constantLoad.d_t PARAM */);
    data->simulationInfo->relations[7] = (data->localData[0]->realVars[55] /* constantLoad.v variable */ < 0.5);
    data->simulationInfo->relations[8] = (data->localData[0]->realVars[55] /* constantLoad.v variable */ < data->simulationInfo->realParameter[35] /* constantLoad.PQBRAK PARAM */);
    data->simulationInfo->relations[9] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[356] /* pwLine4.t1 PARAM */);
    data->simulationInfo->relations[10] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[357] /* pwLine4.t2 PARAM */);
    data->simulationInfo->relations[11] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[312] /* pwFault.t1 PARAM */);
    data->simulationInfo->relations[12] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[313] /* pwFault.t2 PARAM */);
    data->simulationInfo->relations[13] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[334] /* pwLine1.t1 PARAM */);
    data->simulationInfo->relations[14] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[335] /* pwLine1.t2 PARAM */);
    data->simulationInfo->relations[15] = (data->localData[0]->realVars[80] /* eXAC2.rectifierCommutationVoltageDrop.division.y variable */ <= 0.0);
    data->simulationInfo->relations[16] = (data->localData[0]->realVars[80] /* eXAC2.rectifierCommutationVoltageDrop.division.y variable */ > 0.0);
    data->simulationInfo->relations[17] = (data->localData[0]->realVars[80] /* eXAC2.rectifierCommutationVoltageDrop.division.y variable */ <= 0.433);
    data->simulationInfo->relations[18] = (data->localData[0]->realVars[80] /* eXAC2.rectifierCommutationVoltageDrop.division.y variable */ > 0.433);
    data->simulationInfo->relations[19] = (data->localData[0]->realVars[80] /* eXAC2.rectifierCommutationVoltageDrop.division.y variable */ < 0.75);
    data->simulationInfo->relations[20] = (data->localData[0]->realVars[80] /* eXAC2.rectifierCommutationVoltageDrop.division.y variable */ >= 0.75);
    data->simulationInfo->relations[21] = (data->localData[0]->realVars[80] /* eXAC2.rectifierCommutationVoltageDrop.division.y variable */ <= 1.0);
    data->simulationInfo->relations[22] = (data->localData[0]->realVars[61] /* eXAC2.DiffV1.y variable */ > data->localData[0]->realVars[73] /* eXAC2.gain3.y variable */);
    data->simulationInfo->relations[23] = (data->localData[0]->realVars[4] /* eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.y STATE(1) */ < data->simulationInfo->realParameter[192] /* eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.outMin PARAM */);
    data->simulationInfo->relations[24] = ((data->simulationInfo->realParameter[190] /* eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.k PARAM */) * (data->localData[0]->realVars[85] /* eXAC2.rotatingExciterWithDemagnetizationLimited.feedback.y variable */) < 0.0);
    data->simulationInfo->relations[25] = (data->localData[0]->realVars[4] /* eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.y STATE(1) */ > data->simulationInfo->realParameter[191] /* eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.outMax PARAM */);
    data->simulationInfo->relations[26] = ((data->simulationInfo->realParameter[190] /* eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.k PARAM */) * (data->localData[0]->realVars[85] /* eXAC2.rotatingExciterWithDemagnetizationLimited.feedback.y variable */) > 0.0);
    data->simulationInfo->relations[27] = (data->localData[0]->realVars[2] /* eXAC2.imLimitedSimpleLag.state STATE(1) */ > data->simulationInfo->realParameter[153] /* eXAC2.imLimitedSimpleLag.outMax PARAM */);
    data->simulationInfo->relations[28] = ((data->simulationInfo->realParameter[149] /* eXAC2.imLimitedSimpleLag.K PARAM */) * (data->localData[0]->realVars[75] /* eXAC2.imLimitedSimpleLag.u variable */) - data->localData[0]->realVars[2] /* eXAC2.imLimitedSimpleLag.state STATE(1) */ < 0.0);
    data->simulationInfo->relations[29] = (data->localData[0]->realVars[2] /* eXAC2.imLimitedSimpleLag.state STATE(1) */ < data->simulationInfo->realParameter[154] /* eXAC2.imLimitedSimpleLag.outMin PARAM */);
    data->simulationInfo->relations[30] = ((data->simulationInfo->realParameter[149] /* eXAC2.imLimitedSimpleLag.K PARAM */) * (data->localData[0]->realVars[75] /* eXAC2.imLimitedSimpleLag.u variable */) - data->localData[0]->realVars[2] /* eXAC2.imLimitedSimpleLag.state STATE(1) */ > 0.0);
  }
  
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

