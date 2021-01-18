/* Events: Sample, Zero Crossings, Relations, Discrete Changes */
#include "OpenIPSL.Examples.Controls.PSSE.ES.EXAC1_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* Initializes the raw time events of the simulation using the now
   calcualted parameters. */
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_function_initSample(DATA *data, threadData_t *threadData)
{
  long i=0;
}

const char *OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_zeroCrossingDescription(int i, int **out_EquationIndexes)
{
  static const char *res[] = {"time < eXAC1.Vref_step.startTime",
  "time >= pwLine.t1 and time < pwLine.t2",
  "time >= pwLine.t1",
  "time < pwLine.t2",
  "time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t",
  "constantLoad.v < 0.5",
  "time >= constantLoad.t1",
  "time <= constantLoad.t1 + constantLoad.d_t",
  "constantLoad.v < constantLoad.PQBRAK",
  "time >= pwLine3.t1 and time < pwLine3.t2",
  "time >= pwLine3.t1",
  "time < pwLine3.t2",
  "time < pwFault.t1",
  "time < pwFault.t2 and pwFault.ground",
  "time < pwFault.t2",
  "time >= pwLine4.t1 and time < pwLine4.t2",
  "time >= pwLine4.t1",
  "time < pwLine4.t2",
  "time >= pwLine1.t1 and time < pwLine1.t2",
  "time >= pwLine1.t1",
  "time < pwLine1.t2",
  "eXAC1.rectifierCommutationVoltageDrop.division.y <= 0.0",
  "eXAC1.rectifierCommutationVoltageDrop.division.y > 0.0 and eXAC1.rectifierCommutationVoltageDrop.division.y <= 0.433",
  "eXAC1.rectifierCommutationVoltageDrop.division.y > 0.433 and eXAC1.rectifierCommutationVoltageDrop.division.y < 0.75",
  "eXAC1.rectifierCommutationVoltageDrop.division.y >= 0.75 and eXAC1.rectifierCommutationVoltageDrop.division.y <= 1.0",
  "eXAC1.rotatingExciterWithDemagnetizationLimited.sISO.y < eXAC1.rotatingExciterWithDemagnetizationLimited.sISO.outMin and eXAC1.rotatingExciterWithDemagnetizationLimited.sISO.k * eXAC1.rotatingExciterWithDemagnetizationLimited.feedback.y < 0.0 or eXAC1.rotatingExciterWithDemagnetizationLimited.sISO.y > eXAC1.rotatingExciterWithDemagnetizationLimited.sISO.outMax and eXAC1.rotatingExciterWithDemagnetizationLimited.sISO.k * eXAC1.rotatingExciterWithDemagnetizationLimited.feedback.y > 0.0",
  "eXAC1.imLimitedSimpleLag.state > eXAC1.imLimitedSimpleLag.outMax and eXAC1.imLimitedSimpleLag.K * eXAC1.imLimitedSimpleLag.u - eXAC1.imLimitedSimpleLag.state < 0.0",
  "eXAC1.imLimitedSimpleLag.state < eXAC1.imLimitedSimpleLag.outMin and eXAC1.imLimitedSimpleLag.K * eXAC1.imLimitedSimpleLag.u - eXAC1.imLimitedSimpleLag.state > 0.0"};
  static const int occurEqs0[] = {1,185};
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
  static const int occurEqs21[] = {1,307};
  static const int occurEqs22[] = {1,307};
  static const int occurEqs23[] = {1,307};
  static const int occurEqs24[] = {1,307};
  static const int occurEqs25[] = {1,326};
  static const int occurEqs26[] = {1,327};
  static const int occurEqs27[] = {1,328};
  static const int *occurEqs[] = {occurEqs0,occurEqs1,occurEqs2,occurEqs3,occurEqs4,occurEqs5,occurEqs6,occurEqs7,occurEqs8,occurEqs9,occurEqs10,occurEqs11,occurEqs12,occurEqs13,occurEqs14,occurEqs15,occurEqs16,occurEqs17,occurEqs18,occurEqs19,occurEqs20,occurEqs21,occurEqs22,occurEqs23,occurEqs24,occurEqs25,occurEqs26,occurEqs27};
  *out_EquationIndexes = (int*) occurEqs[i];
  return res[i];
}

/* forwarded equations */
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_178(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_179(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_180(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_181(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_182(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_183(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_184(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_185(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_186(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_187(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_188(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_189(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_190(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_191(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_192(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_193(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_194(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_285(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_286(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_287(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_288(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_303(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_304(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_305(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_306(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_307(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_308(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_309(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_310(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_311(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_312(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_313(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_314(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_315(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_316(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_317(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_318(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_319(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_320(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_321(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_322(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_323(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_324(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_325(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_326(DATA* data, threadData_t *threadData);

int OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_function_ZeroCrossingsEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->callStatistics.functionZeroCrossingsEquations++;

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_178(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_179(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_180(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_181(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_182(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_183(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_184(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_185(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_186(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_187(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_188(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_189(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_190(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_191(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_192(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_193(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_194(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_285(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_286(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_287(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_288(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_303(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_304(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_305(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_306(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_307(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_308(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_309(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_310(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_311(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_312(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_313(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_314(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_315(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_316(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_317(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_318(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_319(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_320(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_321(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_322(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_323(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_324(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_325(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_326(data, threadData);
  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_function_ZeroCrossings(DATA *data, threadData_t *threadData, double *gout)
{
  TRACE_PUSH
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
  modelica_boolean tmp44;
  modelica_boolean tmp45;
  modelica_boolean tmp46;

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_ZC);
#endif
  data->simulationInfo->callStatistics.functionZeroCrossings++;

  tmp6 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[114] /* eXAC1.Vref_step.startTime PARAM */, data->simulationInfo->storedRelations[0]);
  gout[0] = (tmp6) ? 1 : -1;
  tmp7 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[304] /* pwLine.t1 PARAM */, data->simulationInfo->storedRelations[1]);
  tmp8 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[305] /* pwLine.t2 PARAM */, data->simulationInfo->storedRelations[2]);
  gout[1] = ((tmp7 && tmp8)) ? 1 : -1;
  tmp9 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[304] /* pwLine.t1 PARAM */, data->simulationInfo->storedRelations[1]);
  gout[2] = (tmp9) ? 1 : -1;
  tmp10 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[305] /* pwLine.t2 PARAM */, data->simulationInfo->storedRelations[2]);
  gout[3] = (tmp10) ? 1 : -1;
  tmp11 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */, data->simulationInfo->storedRelations[3]);
  tmp12 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[65] /* constantLoad.d_t PARAM */, data->simulationInfo->storedRelations[4]);
  gout[4] = ((tmp11 && tmp12)) ? 1 : -1;
  tmp13 = LessZC(data->localData[0]->realVars[55] /* constantLoad.v variable */, 0.5, data->simulationInfo->storedRelations[5]);
  gout[5] = (tmp13) ? 1 : -1;
  tmp14 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */, data->simulationInfo->storedRelations[3]);
  gout[6] = (tmp14) ? 1 : -1;
  tmp15 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[65] /* constantLoad.d_t PARAM */, data->simulationInfo->storedRelations[4]);
  gout[7] = (tmp15) ? 1 : -1;
  tmp16 = LessZC(data->localData[0]->realVars[55] /* constantLoad.v variable */, data->simulationInfo->realParameter[35] /* constantLoad.PQBRAK PARAM */, data->simulationInfo->storedRelations[6]);
  gout[8] = (tmp16) ? 1 : -1;
  tmp17 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[326] /* pwLine3.t1 PARAM */, data->simulationInfo->storedRelations[7]);
  tmp18 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[327] /* pwLine3.t2 PARAM */, data->simulationInfo->storedRelations[8]);
  gout[9] = ((tmp17 && tmp18)) ? 1 : -1;
  tmp19 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[326] /* pwLine3.t1 PARAM */, data->simulationInfo->storedRelations[7]);
  gout[10] = (tmp19) ? 1 : -1;
  tmp20 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[327] /* pwLine3.t2 PARAM */, data->simulationInfo->storedRelations[8]);
  gout[11] = (tmp20) ? 1 : -1;
  tmp21 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[293] /* pwFault.t1 PARAM */, data->simulationInfo->storedRelations[9]);
  gout[12] = (tmp21) ? 1 : -1;
  tmp22 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[294] /* pwFault.t2 PARAM */, data->simulationInfo->storedRelations[10]);
  gout[13] = ((tmp22 && data->simulationInfo->booleanParameter[68] /* pwFault.ground PARAM */)) ? 1 : -1;
  tmp23 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[294] /* pwFault.t2 PARAM */, data->simulationInfo->storedRelations[10]);
  gout[14] = (tmp23) ? 1 : -1;
  tmp24 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[337] /* pwLine4.t1 PARAM */, data->simulationInfo->storedRelations[11]);
  tmp25 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[338] /* pwLine4.t2 PARAM */, data->simulationInfo->storedRelations[12]);
  gout[15] = ((tmp24 && tmp25)) ? 1 : -1;
  tmp26 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[337] /* pwLine4.t1 PARAM */, data->simulationInfo->storedRelations[11]);
  gout[16] = (tmp26) ? 1 : -1;
  tmp27 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[338] /* pwLine4.t2 PARAM */, data->simulationInfo->storedRelations[12]);
  gout[17] = (tmp27) ? 1 : -1;
  tmp28 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[315] /* pwLine1.t1 PARAM */, data->simulationInfo->storedRelations[13]);
  tmp29 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[316] /* pwLine1.t2 PARAM */, data->simulationInfo->storedRelations[14]);
  gout[18] = ((tmp28 && tmp29)) ? 1 : -1;
  tmp30 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[315] /* pwLine1.t1 PARAM */, data->simulationInfo->storedRelations[13]);
  gout[19] = (tmp30) ? 1 : -1;
  tmp31 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[316] /* pwLine1.t2 PARAM */, data->simulationInfo->storedRelations[14]);
  gout[20] = (tmp31) ? 1 : -1;
  tmp32 = LessEqZC(data->localData[0]->realVars[73] /* eXAC1.rectifierCommutationVoltageDrop.division.y variable */, 0.0, data->simulationInfo->storedRelations[15]);
  gout[21] = (tmp32) ? 1 : -1;
  tmp33 = GreaterZC(data->localData[0]->realVars[73] /* eXAC1.rectifierCommutationVoltageDrop.division.y variable */, 0.0, data->simulationInfo->storedRelations[16]);
  tmp34 = LessEqZC(data->localData[0]->realVars[73] /* eXAC1.rectifierCommutationVoltageDrop.division.y variable */, 0.433, data->simulationInfo->storedRelations[17]);
  gout[22] = ((tmp33 && tmp34)) ? 1 : -1;
  tmp35 = GreaterZC(data->localData[0]->realVars[73] /* eXAC1.rectifierCommutationVoltageDrop.division.y variable */, 0.433, data->simulationInfo->storedRelations[18]);
  tmp36 = LessZC(data->localData[0]->realVars[73] /* eXAC1.rectifierCommutationVoltageDrop.division.y variable */, 0.75, data->simulationInfo->storedRelations[19]);
  gout[23] = ((tmp35 && tmp36)) ? 1 : -1;
  tmp37 = GreaterEqZC(data->localData[0]->realVars[73] /* eXAC1.rectifierCommutationVoltageDrop.division.y variable */, 0.75, data->simulationInfo->storedRelations[20]);
  tmp38 = LessEqZC(data->localData[0]->realVars[73] /* eXAC1.rectifierCommutationVoltageDrop.division.y variable */, 1.0, data->simulationInfo->storedRelations[21]);
  gout[24] = ((tmp37 && tmp38)) ? 1 : -1;
  tmp39 = LessZC(data->localData[0]->realVars[4] /* eXAC1.rotatingExciterWithDemagnetizationLimited.sISO.y STATE(1) */, data->simulationInfo->realParameter[173] /* eXAC1.rotatingExciterWithDemagnetizationLimited.sISO.outMin PARAM */, data->simulationInfo->storedRelations[22]);
  tmp40 = LessZC((data->simulationInfo->realParameter[171] /* eXAC1.rotatingExciterWithDemagnetizationLimited.sISO.k PARAM */) * (data->localData[0]->realVars[78] /* eXAC1.rotatingExciterWithDemagnetizationLimited.feedback.y variable */), 0.0, data->simulationInfo->storedRelations[23]);
  tmp41 = GreaterZC(data->localData[0]->realVars[4] /* eXAC1.rotatingExciterWithDemagnetizationLimited.sISO.y STATE(1) */, data->simulationInfo->realParameter[172] /* eXAC1.rotatingExciterWithDemagnetizationLimited.sISO.outMax PARAM */, data->simulationInfo->storedRelations[24]);
  tmp42 = GreaterZC((data->simulationInfo->realParameter[171] /* eXAC1.rotatingExciterWithDemagnetizationLimited.sISO.k PARAM */) * (data->localData[0]->realVars[78] /* eXAC1.rotatingExciterWithDemagnetizationLimited.feedback.y variable */), 0.0, data->simulationInfo->storedRelations[25]);
  gout[25] = (((tmp39 && tmp40) || (tmp41 && tmp42))) ? 1 : -1;
  tmp43 = GreaterZC(data->localData[0]->realVars[2] /* eXAC1.imLimitedSimpleLag.state STATE(1) */, data->simulationInfo->realParameter[136] /* eXAC1.imLimitedSimpleLag.outMax PARAM */, data->simulationInfo->storedRelations[26]);
  tmp44 = LessZC((data->simulationInfo->realParameter[132] /* eXAC1.imLimitedSimpleLag.K PARAM */) * (data->localData[0]->realVars[68] /* eXAC1.imLimitedSimpleLag.u variable */) - data->localData[0]->realVars[2] /* eXAC1.imLimitedSimpleLag.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[27]);
  gout[26] = ((tmp43 && tmp44)) ? 1 : -1;
  tmp45 = LessZC(data->localData[0]->realVars[2] /* eXAC1.imLimitedSimpleLag.state STATE(1) */, data->simulationInfo->realParameter[137] /* eXAC1.imLimitedSimpleLag.outMin PARAM */, data->simulationInfo->storedRelations[28]);
  tmp46 = GreaterZC((data->simulationInfo->realParameter[132] /* eXAC1.imLimitedSimpleLag.K PARAM */) * (data->localData[0]->realVars[68] /* eXAC1.imLimitedSimpleLag.u variable */) - data->localData[0]->realVars[2] /* eXAC1.imLimitedSimpleLag.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[29]);
  gout[27] = ((tmp45 && tmp46)) ? 1 : -1;

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_ZC);
#endif

  TRACE_POP
  return 0;
}

const char *OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_relationDescription(int i)
{
  const char *res[] = {"time < eXAC1.Vref_step.startTime",
  "time >= pwLine.t1",
  "time < pwLine.t2",
  "time >= constantLoad.t1",
  "time <= constantLoad.t1 + constantLoad.d_t",
  "constantLoad.v < 0.5",
  "constantLoad.v < constantLoad.PQBRAK",
  "time >= pwLine3.t1",
  "time < pwLine3.t2",
  "time < pwFault.t1",
  "time < pwFault.t2",
  "time >= pwLine4.t1",
  "time < pwLine4.t2",
  "time >= pwLine1.t1",
  "time < pwLine1.t2",
  "eXAC1.rectifierCommutationVoltageDrop.division.y <= 0.0",
  "eXAC1.rectifierCommutationVoltageDrop.division.y > 0.0",
  "eXAC1.rectifierCommutationVoltageDrop.division.y <= 0.433",
  "eXAC1.rectifierCommutationVoltageDrop.division.y > 0.433",
  "eXAC1.rectifierCommutationVoltageDrop.division.y < 0.75",
  "eXAC1.rectifierCommutationVoltageDrop.division.y >= 0.75",
  "eXAC1.rectifierCommutationVoltageDrop.division.y <= 1.0",
  "eXAC1.rotatingExciterWithDemagnetizationLimited.sISO.y < eXAC1.rotatingExciterWithDemagnetizationLimited.sISO.outMin",
  "eXAC1.rotatingExciterWithDemagnetizationLimited.sISO.k * eXAC1.rotatingExciterWithDemagnetizationLimited.feedback.y < 0.0",
  "eXAC1.rotatingExciterWithDemagnetizationLimited.sISO.y > eXAC1.rotatingExciterWithDemagnetizationLimited.sISO.outMax",
  "eXAC1.rotatingExciterWithDemagnetizationLimited.sISO.k * eXAC1.rotatingExciterWithDemagnetizationLimited.feedback.y > 0.0",
  "eXAC1.imLimitedSimpleLag.state > eXAC1.imLimitedSimpleLag.outMax",
  "eXAC1.imLimitedSimpleLag.K * eXAC1.imLimitedSimpleLag.u - eXAC1.imLimitedSimpleLag.state < 0.0",
  "eXAC1.imLimitedSimpleLag.state < eXAC1.imLimitedSimpleLag.outMin",
  "eXAC1.imLimitedSimpleLag.K * eXAC1.imLimitedSimpleLag.u - eXAC1.imLimitedSimpleLag.state > 0.0"};
  return res[i];
}

int OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_function_updateRelations(DATA *data, threadData_t *threadData, int evalforZeroCross)
{
  TRACE_PUSH
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
    tmp47 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[114] /* eXAC1.Vref_step.startTime PARAM */, data->simulationInfo->storedRelations[0]);
    data->simulationInfo->relations[0] = tmp47;
    tmp48 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[304] /* pwLine.t1 PARAM */, data->simulationInfo->storedRelations[1]);
    data->simulationInfo->relations[1] = tmp48;
    tmp49 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[305] /* pwLine.t2 PARAM */, data->simulationInfo->storedRelations[2]);
    data->simulationInfo->relations[2] = tmp49;
    tmp50 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */, data->simulationInfo->storedRelations[3]);
    data->simulationInfo->relations[3] = tmp50;
    tmp51 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[65] /* constantLoad.d_t PARAM */, data->simulationInfo->storedRelations[4]);
    data->simulationInfo->relations[4] = tmp51;
    tmp52 = LessZC(data->localData[0]->realVars[55] /* constantLoad.v variable */, 0.5, data->simulationInfo->storedRelations[5]);
    data->simulationInfo->relations[5] = tmp52;
    tmp53 = LessZC(data->localData[0]->realVars[55] /* constantLoad.v variable */, data->simulationInfo->realParameter[35] /* constantLoad.PQBRAK PARAM */, data->simulationInfo->storedRelations[6]);
    data->simulationInfo->relations[6] = tmp53;
    tmp54 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[326] /* pwLine3.t1 PARAM */, data->simulationInfo->storedRelations[7]);
    data->simulationInfo->relations[7] = tmp54;
    tmp55 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[327] /* pwLine3.t2 PARAM */, data->simulationInfo->storedRelations[8]);
    data->simulationInfo->relations[8] = tmp55;
    tmp56 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[293] /* pwFault.t1 PARAM */, data->simulationInfo->storedRelations[9]);
    data->simulationInfo->relations[9] = tmp56;
    tmp57 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[294] /* pwFault.t2 PARAM */, data->simulationInfo->storedRelations[10]);
    data->simulationInfo->relations[10] = tmp57;
    tmp58 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[337] /* pwLine4.t1 PARAM */, data->simulationInfo->storedRelations[11]);
    data->simulationInfo->relations[11] = tmp58;
    tmp59 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[338] /* pwLine4.t2 PARAM */, data->simulationInfo->storedRelations[12]);
    data->simulationInfo->relations[12] = tmp59;
    tmp60 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[315] /* pwLine1.t1 PARAM */, data->simulationInfo->storedRelations[13]);
    data->simulationInfo->relations[13] = tmp60;
    tmp61 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[316] /* pwLine1.t2 PARAM */, data->simulationInfo->storedRelations[14]);
    data->simulationInfo->relations[14] = tmp61;
    tmp62 = LessEqZC(data->localData[0]->realVars[73] /* eXAC1.rectifierCommutationVoltageDrop.division.y variable */, 0.0, data->simulationInfo->storedRelations[15]);
    data->simulationInfo->relations[15] = tmp62;
    tmp63 = GreaterZC(data->localData[0]->realVars[73] /* eXAC1.rectifierCommutationVoltageDrop.division.y variable */, 0.0, data->simulationInfo->storedRelations[16]);
    data->simulationInfo->relations[16] = tmp63;
    tmp64 = LessEqZC(data->localData[0]->realVars[73] /* eXAC1.rectifierCommutationVoltageDrop.division.y variable */, 0.433, data->simulationInfo->storedRelations[17]);
    data->simulationInfo->relations[17] = tmp64;
    tmp65 = GreaterZC(data->localData[0]->realVars[73] /* eXAC1.rectifierCommutationVoltageDrop.division.y variable */, 0.433, data->simulationInfo->storedRelations[18]);
    data->simulationInfo->relations[18] = tmp65;
    tmp66 = LessZC(data->localData[0]->realVars[73] /* eXAC1.rectifierCommutationVoltageDrop.division.y variable */, 0.75, data->simulationInfo->storedRelations[19]);
    data->simulationInfo->relations[19] = tmp66;
    tmp67 = GreaterEqZC(data->localData[0]->realVars[73] /* eXAC1.rectifierCommutationVoltageDrop.division.y variable */, 0.75, data->simulationInfo->storedRelations[20]);
    data->simulationInfo->relations[20] = tmp67;
    tmp68 = LessEqZC(data->localData[0]->realVars[73] /* eXAC1.rectifierCommutationVoltageDrop.division.y variable */, 1.0, data->simulationInfo->storedRelations[21]);
    data->simulationInfo->relations[21] = tmp68;
    tmp69 = LessZC(data->localData[0]->realVars[4] /* eXAC1.rotatingExciterWithDemagnetizationLimited.sISO.y STATE(1) */, data->simulationInfo->realParameter[173] /* eXAC1.rotatingExciterWithDemagnetizationLimited.sISO.outMin PARAM */, data->simulationInfo->storedRelations[22]);
    data->simulationInfo->relations[22] = tmp69;
    tmp70 = LessZC((data->simulationInfo->realParameter[171] /* eXAC1.rotatingExciterWithDemagnetizationLimited.sISO.k PARAM */) * (data->localData[0]->realVars[78] /* eXAC1.rotatingExciterWithDemagnetizationLimited.feedback.y variable */), 0.0, data->simulationInfo->storedRelations[23]);
    data->simulationInfo->relations[23] = tmp70;
    tmp71 = GreaterZC(data->localData[0]->realVars[4] /* eXAC1.rotatingExciterWithDemagnetizationLimited.sISO.y STATE(1) */, data->simulationInfo->realParameter[172] /* eXAC1.rotatingExciterWithDemagnetizationLimited.sISO.outMax PARAM */, data->simulationInfo->storedRelations[24]);
    data->simulationInfo->relations[24] = tmp71;
    tmp72 = GreaterZC((data->simulationInfo->realParameter[171] /* eXAC1.rotatingExciterWithDemagnetizationLimited.sISO.k PARAM */) * (data->localData[0]->realVars[78] /* eXAC1.rotatingExciterWithDemagnetizationLimited.feedback.y variable */), 0.0, data->simulationInfo->storedRelations[25]);
    data->simulationInfo->relations[25] = tmp72;
    tmp73 = GreaterZC(data->localData[0]->realVars[2] /* eXAC1.imLimitedSimpleLag.state STATE(1) */, data->simulationInfo->realParameter[136] /* eXAC1.imLimitedSimpleLag.outMax PARAM */, data->simulationInfo->storedRelations[26]);
    data->simulationInfo->relations[26] = tmp73;
    tmp74 = LessZC((data->simulationInfo->realParameter[132] /* eXAC1.imLimitedSimpleLag.K PARAM */) * (data->localData[0]->realVars[68] /* eXAC1.imLimitedSimpleLag.u variable */) - data->localData[0]->realVars[2] /* eXAC1.imLimitedSimpleLag.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[27]);
    data->simulationInfo->relations[27] = tmp74;
    tmp75 = LessZC(data->localData[0]->realVars[2] /* eXAC1.imLimitedSimpleLag.state STATE(1) */, data->simulationInfo->realParameter[137] /* eXAC1.imLimitedSimpleLag.outMin PARAM */, data->simulationInfo->storedRelations[28]);
    data->simulationInfo->relations[28] = tmp75;
    tmp76 = GreaterZC((data->simulationInfo->realParameter[132] /* eXAC1.imLimitedSimpleLag.K PARAM */) * (data->localData[0]->realVars[68] /* eXAC1.imLimitedSimpleLag.u variable */) - data->localData[0]->realVars[2] /* eXAC1.imLimitedSimpleLag.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[29]);
    data->simulationInfo->relations[29] = tmp76;
  } else {
    data->simulationInfo->relations[0] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[114] /* eXAC1.Vref_step.startTime PARAM */);
    data->simulationInfo->relations[1] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[304] /* pwLine.t1 PARAM */);
    data->simulationInfo->relations[2] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[305] /* pwLine.t2 PARAM */);
    data->simulationInfo->relations[3] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */);
    data->simulationInfo->relations[4] = (data->localData[0]->timeValue <= data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[65] /* constantLoad.d_t PARAM */);
    data->simulationInfo->relations[5] = (data->localData[0]->realVars[55] /* constantLoad.v variable */ < 0.5);
    data->simulationInfo->relations[6] = (data->localData[0]->realVars[55] /* constantLoad.v variable */ < data->simulationInfo->realParameter[35] /* constantLoad.PQBRAK PARAM */);
    data->simulationInfo->relations[7] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[326] /* pwLine3.t1 PARAM */);
    data->simulationInfo->relations[8] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[327] /* pwLine3.t2 PARAM */);
    data->simulationInfo->relations[9] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[293] /* pwFault.t1 PARAM */);
    data->simulationInfo->relations[10] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[294] /* pwFault.t2 PARAM */);
    data->simulationInfo->relations[11] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[337] /* pwLine4.t1 PARAM */);
    data->simulationInfo->relations[12] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[338] /* pwLine4.t2 PARAM */);
    data->simulationInfo->relations[13] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[315] /* pwLine1.t1 PARAM */);
    data->simulationInfo->relations[14] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[316] /* pwLine1.t2 PARAM */);
    data->simulationInfo->relations[15] = (data->localData[0]->realVars[73] /* eXAC1.rectifierCommutationVoltageDrop.division.y variable */ <= 0.0);
    data->simulationInfo->relations[16] = (data->localData[0]->realVars[73] /* eXAC1.rectifierCommutationVoltageDrop.division.y variable */ > 0.0);
    data->simulationInfo->relations[17] = (data->localData[0]->realVars[73] /* eXAC1.rectifierCommutationVoltageDrop.division.y variable */ <= 0.433);
    data->simulationInfo->relations[18] = (data->localData[0]->realVars[73] /* eXAC1.rectifierCommutationVoltageDrop.division.y variable */ > 0.433);
    data->simulationInfo->relations[19] = (data->localData[0]->realVars[73] /* eXAC1.rectifierCommutationVoltageDrop.division.y variable */ < 0.75);
    data->simulationInfo->relations[20] = (data->localData[0]->realVars[73] /* eXAC1.rectifierCommutationVoltageDrop.division.y variable */ >= 0.75);
    data->simulationInfo->relations[21] = (data->localData[0]->realVars[73] /* eXAC1.rectifierCommutationVoltageDrop.division.y variable */ <= 1.0);
    data->simulationInfo->relations[22] = (data->localData[0]->realVars[4] /* eXAC1.rotatingExciterWithDemagnetizationLimited.sISO.y STATE(1) */ < data->simulationInfo->realParameter[173] /* eXAC1.rotatingExciterWithDemagnetizationLimited.sISO.outMin PARAM */);
    data->simulationInfo->relations[23] = ((data->simulationInfo->realParameter[171] /* eXAC1.rotatingExciterWithDemagnetizationLimited.sISO.k PARAM */) * (data->localData[0]->realVars[78] /* eXAC1.rotatingExciterWithDemagnetizationLimited.feedback.y variable */) < 0.0);
    data->simulationInfo->relations[24] = (data->localData[0]->realVars[4] /* eXAC1.rotatingExciterWithDemagnetizationLimited.sISO.y STATE(1) */ > data->simulationInfo->realParameter[172] /* eXAC1.rotatingExciterWithDemagnetizationLimited.sISO.outMax PARAM */);
    data->simulationInfo->relations[25] = ((data->simulationInfo->realParameter[171] /* eXAC1.rotatingExciterWithDemagnetizationLimited.sISO.k PARAM */) * (data->localData[0]->realVars[78] /* eXAC1.rotatingExciterWithDemagnetizationLimited.feedback.y variable */) > 0.0);
    data->simulationInfo->relations[26] = (data->localData[0]->realVars[2] /* eXAC1.imLimitedSimpleLag.state STATE(1) */ > data->simulationInfo->realParameter[136] /* eXAC1.imLimitedSimpleLag.outMax PARAM */);
    data->simulationInfo->relations[27] = ((data->simulationInfo->realParameter[132] /* eXAC1.imLimitedSimpleLag.K PARAM */) * (data->localData[0]->realVars[68] /* eXAC1.imLimitedSimpleLag.u variable */) - data->localData[0]->realVars[2] /* eXAC1.imLimitedSimpleLag.state STATE(1) */ < 0.0);
    data->simulationInfo->relations[28] = (data->localData[0]->realVars[2] /* eXAC1.imLimitedSimpleLag.state STATE(1) */ < data->simulationInfo->realParameter[137] /* eXAC1.imLimitedSimpleLag.outMin PARAM */);
    data->simulationInfo->relations[29] = ((data->simulationInfo->realParameter[132] /* eXAC1.imLimitedSimpleLag.K PARAM */) * (data->localData[0]->realVars[68] /* eXAC1.imLimitedSimpleLag.u variable */) - data->localData[0]->realVars[2] /* eXAC1.imLimitedSimpleLag.state STATE(1) */ > 0.0);
  }
  
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

