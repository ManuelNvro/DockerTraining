/* Events: Sample, Zero Crossings, Relations, Discrete Changes */
#include "OpenIPSL.Examples.Controls.PSSE.ES.ESDC1A_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* Initializes the raw time events of the simulation using the now
   calcualted parameters. */
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_function_initSample(DATA *data, threadData_t *threadData)
{
  long i=0;
}

const char *OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_zeroCrossingDescription(int i, int **out_EquationIndexes)
{
  static const char *res[] = {"time < eSDC1A.Vref_step.startTime",
  "time >= pwLine.t1 and time < pwLine.t2",
  "time >= pwLine3.t1 and time < pwLine3.t2",
  "time < pwFault.t1",
  "time < pwFault.t2 and pwFault.ground",
  "time < pwFault.t2",
  "time >= pwLine3.t1",
  "time < pwLine3.t2",
  "constantLoad.v < 0.5",
  "time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t",
  "time >= pwLine.t1",
  "time < pwLine.t2",
  "time >= pwLine4.t1 and time < pwLine4.t2",
  "time >= pwLine4.t1",
  "time < pwLine4.t2",
  "time >= pwLine1.t1 and time < pwLine1.t2",
  "time >= pwLine1.t1",
  "time < pwLine1.t2",
  "time >= constantLoad.t1",
  "time <= constantLoad.t1 + constantLoad.d_t",
  "constantLoad.v < constantLoad.PQBRAK",
  "eSDC1A.hV_GATE.n1 < minusInf.k",
  "eSDC1A.rotatingExciterLimited.sISO.y < eSDC1A.rotatingExciterLimited.sISO.outMin and eSDC1A.rotatingExciterLimited.sISO.k * eSDC1A.rotatingExciterLimited.feedback.y < 0.0 or eSDC1A.rotatingExciterLimited.sISO.y > eSDC1A.rotatingExciterLimited.sISO.outMax and eSDC1A.rotatingExciterLimited.sISO.k * eSDC1A.rotatingExciterLimited.feedback.y > 0.0",
  "eSDC1A.simpleLagLim.state > eSDC1A.simpleLagLim.outMax and eSDC1A.simpleLagLim.K * eSDC1A.hV_GATE.p - eSDC1A.simpleLagLim.state < 0.0",
  "eSDC1A.simpleLagLim.state < eSDC1A.simpleLagLim.outMin and eSDC1A.simpleLagLim.K * eSDC1A.hV_GATE.p - eSDC1A.simpleLagLim.state > 0.0"};
  static const int occurEqs0[] = {1,180};
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
  static const int occurEqs21[] = {1,293};
  static const int occurEqs22[] = {1,297};
  static const int occurEqs23[] = {1,298};
  static const int occurEqs24[] = {1,299};
  static const int *occurEqs[] = {occurEqs0,occurEqs1,occurEqs2,occurEqs3,occurEqs4,occurEqs5,occurEqs6,occurEqs7,occurEqs8,occurEqs9,occurEqs10,occurEqs11,occurEqs12,occurEqs13,occurEqs14,occurEqs15,occurEqs16,occurEqs17,occurEqs18,occurEqs19,occurEqs20,occurEqs21,occurEqs22,occurEqs23,occurEqs24};
  *out_EquationIndexes = (int*) occurEqs[i];
  return res[i];
}

/* forwarded equations */
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_173(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_174(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_175(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_176(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_177(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_178(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_179(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_180(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_181(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_182(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_183(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_184(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_185(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_186(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_187(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_188(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_189(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_190(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_191(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_192(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_283(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_285(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_286(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_287(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_288(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_289(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_290(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_291(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_292(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_293(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_294(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_295(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_296(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_297(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_303(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_304(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_305(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_306(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_307(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_308(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_309(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_310(DATA* data, threadData_t *threadData);

int OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_function_ZeroCrossingsEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->callStatistics.functionZeroCrossingsEquations++;

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_173(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_174(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_175(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_176(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_177(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_178(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_179(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_180(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_181(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_182(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_183(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_184(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_185(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_186(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_187(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_188(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_189(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_190(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_191(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_192(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_283(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_285(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_286(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_287(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_288(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_289(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_290(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_291(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_292(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_293(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_294(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_295(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_296(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_297(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_303(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_304(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_305(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_306(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_307(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_308(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_309(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_310(data, threadData);
  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_function_ZeroCrossings(DATA *data, threadData_t *threadData, double *gout)
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

  tmp0 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[117] /* eSDC1A.Vref_step.startTime PARAM */, data->simulationInfo->storedRelations[0]);
  gout[0] = (tmp0) ? 1 : -1;
  tmp1 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[300] /* pwLine.t1 PARAM */, data->simulationInfo->storedRelations[1]);
  tmp2 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[301] /* pwLine.t2 PARAM */, data->simulationInfo->storedRelations[2]);
  gout[1] = ((tmp1 && tmp2)) ? 1 : -1;
  tmp3 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[322] /* pwLine3.t1 PARAM */, data->simulationInfo->storedRelations[3]);
  tmp4 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[323] /* pwLine3.t2 PARAM */, data->simulationInfo->storedRelations[4]);
  gout[2] = ((tmp3 && tmp4)) ? 1 : -1;
  tmp5 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[289] /* pwFault.t1 PARAM */, data->simulationInfo->storedRelations[5]);
  gout[3] = (tmp5) ? 1 : -1;
  tmp6 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[290] /* pwFault.t2 PARAM */, data->simulationInfo->storedRelations[6]);
  gout[4] = ((tmp6 && data->simulationInfo->booleanParameter[68] /* pwFault.ground PARAM */)) ? 1 : -1;
  tmp7 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[290] /* pwFault.t2 PARAM */, data->simulationInfo->storedRelations[6]);
  gout[5] = (tmp7) ? 1 : -1;
  tmp8 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[322] /* pwLine3.t1 PARAM */, data->simulationInfo->storedRelations[3]);
  gout[6] = (tmp8) ? 1 : -1;
  tmp9 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[323] /* pwLine3.t2 PARAM */, data->simulationInfo->storedRelations[4]);
  gout[7] = (tmp9) ? 1 : -1;
  tmp10 = LessZC(data->localData[0]->realVars[55] /* constantLoad.v variable */, 0.5, data->simulationInfo->storedRelations[7]);
  gout[8] = (tmp10) ? 1 : -1;
  tmp11 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */, data->simulationInfo->storedRelations[8]);
  tmp12 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[65] /* constantLoad.d_t PARAM */, data->simulationInfo->storedRelations[9]);
  gout[9] = ((tmp11 && tmp12)) ? 1 : -1;
  tmp13 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[300] /* pwLine.t1 PARAM */, data->simulationInfo->storedRelations[1]);
  gout[10] = (tmp13) ? 1 : -1;
  tmp14 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[301] /* pwLine.t2 PARAM */, data->simulationInfo->storedRelations[2]);
  gout[11] = (tmp14) ? 1 : -1;
  tmp15 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[333] /* pwLine4.t1 PARAM */, data->simulationInfo->storedRelations[10]);
  tmp16 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[334] /* pwLine4.t2 PARAM */, data->simulationInfo->storedRelations[11]);
  gout[12] = ((tmp15 && tmp16)) ? 1 : -1;
  tmp17 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[333] /* pwLine4.t1 PARAM */, data->simulationInfo->storedRelations[10]);
  gout[13] = (tmp17) ? 1 : -1;
  tmp18 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[334] /* pwLine4.t2 PARAM */, data->simulationInfo->storedRelations[11]);
  gout[14] = (tmp18) ? 1 : -1;
  tmp19 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[311] /* pwLine1.t1 PARAM */, data->simulationInfo->storedRelations[12]);
  tmp20 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[312] /* pwLine1.t2 PARAM */, data->simulationInfo->storedRelations[13]);
  gout[15] = ((tmp19 && tmp20)) ? 1 : -1;
  tmp21 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[311] /* pwLine1.t1 PARAM */, data->simulationInfo->storedRelations[12]);
  gout[16] = (tmp21) ? 1 : -1;
  tmp22 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[312] /* pwLine1.t2 PARAM */, data->simulationInfo->storedRelations[13]);
  gout[17] = (tmp22) ? 1 : -1;
  tmp23 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */, data->simulationInfo->storedRelations[8]);
  gout[18] = (tmp23) ? 1 : -1;
  tmp24 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[65] /* constantLoad.d_t PARAM */, data->simulationInfo->storedRelations[9]);
  gout[19] = (tmp24) ? 1 : -1;
  tmp25 = LessZC(data->localData[0]->realVars[55] /* constantLoad.v variable */, data->simulationInfo->realParameter[35] /* constantLoad.PQBRAK PARAM */, data->simulationInfo->storedRelations[14]);
  gout[20] = (tmp25) ? 1 : -1;
  tmp26 = LessZC(data->localData[0]->realVars[65] /* eSDC1A.hV_GATE.n1 variable */, data->simulationInfo->realParameter[285] /* minusInf.k PARAM */, data->simulationInfo->storedRelations[15]);
  gout[21] = (tmp26) ? 1 : -1;
  tmp27 = LessZC(data->localData[0]->realVars[3] /* eSDC1A.rotatingExciterLimited.sISO.y STATE(1) */, data->simulationInfo->realParameter[160] /* eSDC1A.rotatingExciterLimited.sISO.outMin PARAM */, data->simulationInfo->storedRelations[16]);
  tmp28 = LessZC((data->simulationInfo->realParameter[158] /* eSDC1A.rotatingExciterLimited.sISO.k PARAM */) * (data->localData[0]->realVars[75] /* eSDC1A.rotatingExciterLimited.feedback.y variable */), 0.0, data->simulationInfo->storedRelations[17]);
  tmp29 = GreaterZC(data->localData[0]->realVars[3] /* eSDC1A.rotatingExciterLimited.sISO.y STATE(1) */, data->simulationInfo->realParameter[159] /* eSDC1A.rotatingExciterLimited.sISO.outMax PARAM */, data->simulationInfo->storedRelations[18]);
  tmp30 = GreaterZC((data->simulationInfo->realParameter[158] /* eSDC1A.rotatingExciterLimited.sISO.k PARAM */) * (data->localData[0]->realVars[75] /* eSDC1A.rotatingExciterLimited.feedback.y variable */), 0.0, data->simulationInfo->storedRelations[19]);
  gout[22] = (((tmp27 && tmp28) || (tmp29 && tmp30))) ? 1 : -1;
  tmp31 = GreaterZC(data->localData[0]->realVars[4] /* eSDC1A.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[170] /* eSDC1A.simpleLagLim.outMax PARAM */, data->simulationInfo->storedRelations[20]);
  tmp32 = LessZC((data->simulationInfo->realParameter[166] /* eSDC1A.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[66] /* eSDC1A.hV_GATE.p variable */) - data->localData[0]->realVars[4] /* eSDC1A.simpleLagLim.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[21]);
  gout[23] = ((tmp31 && tmp32)) ? 1 : -1;
  tmp33 = LessZC(data->localData[0]->realVars[4] /* eSDC1A.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[171] /* eSDC1A.simpleLagLim.outMin PARAM */, data->simulationInfo->storedRelations[22]);
  tmp34 = GreaterZC((data->simulationInfo->realParameter[166] /* eSDC1A.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[66] /* eSDC1A.hV_GATE.p variable */) - data->localData[0]->realVars[4] /* eSDC1A.simpleLagLim.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[23]);
  gout[24] = ((tmp33 && tmp34)) ? 1 : -1;

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_ZC);
#endif

  TRACE_POP
  return 0;
}

const char *OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_relationDescription(int i)
{
  const char *res[] = {"time < eSDC1A.Vref_step.startTime",
  "time >= pwLine.t1",
  "time < pwLine.t2",
  "time >= pwLine3.t1",
  "time < pwLine3.t2",
  "time < pwFault.t1",
  "time < pwFault.t2",
  "constantLoad.v < 0.5",
  "time >= constantLoad.t1",
  "time <= constantLoad.t1 + constantLoad.d_t",
  "time >= pwLine4.t1",
  "time < pwLine4.t2",
  "time >= pwLine1.t1",
  "time < pwLine1.t2",
  "constantLoad.v < constantLoad.PQBRAK",
  "eSDC1A.hV_GATE.n1 < minusInf.k",
  "eSDC1A.rotatingExciterLimited.sISO.y < eSDC1A.rotatingExciterLimited.sISO.outMin",
  "eSDC1A.rotatingExciterLimited.sISO.k * eSDC1A.rotatingExciterLimited.feedback.y < 0.0",
  "eSDC1A.rotatingExciterLimited.sISO.y > eSDC1A.rotatingExciterLimited.sISO.outMax",
  "eSDC1A.rotatingExciterLimited.sISO.k * eSDC1A.rotatingExciterLimited.feedback.y > 0.0",
  "eSDC1A.simpleLagLim.state > eSDC1A.simpleLagLim.outMax",
  "eSDC1A.simpleLagLim.K * eSDC1A.hV_GATE.p - eSDC1A.simpleLagLim.state < 0.0",
  "eSDC1A.simpleLagLim.state < eSDC1A.simpleLagLim.outMin",
  "eSDC1A.simpleLagLim.K * eSDC1A.hV_GATE.p - eSDC1A.simpleLagLim.state > 0.0"};
  return res[i];
}

int OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_function_updateRelations(DATA *data, threadData_t *threadData, int evalforZeroCross)
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
    tmp35 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[117] /* eSDC1A.Vref_step.startTime PARAM */, data->simulationInfo->storedRelations[0]);
    data->simulationInfo->relations[0] = tmp35;
    tmp36 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[300] /* pwLine.t1 PARAM */, data->simulationInfo->storedRelations[1]);
    data->simulationInfo->relations[1] = tmp36;
    tmp37 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[301] /* pwLine.t2 PARAM */, data->simulationInfo->storedRelations[2]);
    data->simulationInfo->relations[2] = tmp37;
    tmp38 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[322] /* pwLine3.t1 PARAM */, data->simulationInfo->storedRelations[3]);
    data->simulationInfo->relations[3] = tmp38;
    tmp39 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[323] /* pwLine3.t2 PARAM */, data->simulationInfo->storedRelations[4]);
    data->simulationInfo->relations[4] = tmp39;
    tmp40 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[289] /* pwFault.t1 PARAM */, data->simulationInfo->storedRelations[5]);
    data->simulationInfo->relations[5] = tmp40;
    tmp41 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[290] /* pwFault.t2 PARAM */, data->simulationInfo->storedRelations[6]);
    data->simulationInfo->relations[6] = tmp41;
    tmp42 = LessZC(data->localData[0]->realVars[55] /* constantLoad.v variable */, 0.5, data->simulationInfo->storedRelations[7]);
    data->simulationInfo->relations[7] = tmp42;
    tmp43 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */, data->simulationInfo->storedRelations[8]);
    data->simulationInfo->relations[8] = tmp43;
    tmp44 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[65] /* constantLoad.d_t PARAM */, data->simulationInfo->storedRelations[9]);
    data->simulationInfo->relations[9] = tmp44;
    tmp45 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[333] /* pwLine4.t1 PARAM */, data->simulationInfo->storedRelations[10]);
    data->simulationInfo->relations[10] = tmp45;
    tmp46 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[334] /* pwLine4.t2 PARAM */, data->simulationInfo->storedRelations[11]);
    data->simulationInfo->relations[11] = tmp46;
    tmp47 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[311] /* pwLine1.t1 PARAM */, data->simulationInfo->storedRelations[12]);
    data->simulationInfo->relations[12] = tmp47;
    tmp48 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[312] /* pwLine1.t2 PARAM */, data->simulationInfo->storedRelations[13]);
    data->simulationInfo->relations[13] = tmp48;
    tmp49 = LessZC(data->localData[0]->realVars[55] /* constantLoad.v variable */, data->simulationInfo->realParameter[35] /* constantLoad.PQBRAK PARAM */, data->simulationInfo->storedRelations[14]);
    data->simulationInfo->relations[14] = tmp49;
    tmp50 = LessZC(data->localData[0]->realVars[65] /* eSDC1A.hV_GATE.n1 variable */, data->simulationInfo->realParameter[285] /* minusInf.k PARAM */, data->simulationInfo->storedRelations[15]);
    data->simulationInfo->relations[15] = tmp50;
    tmp51 = LessZC(data->localData[0]->realVars[3] /* eSDC1A.rotatingExciterLimited.sISO.y STATE(1) */, data->simulationInfo->realParameter[160] /* eSDC1A.rotatingExciterLimited.sISO.outMin PARAM */, data->simulationInfo->storedRelations[16]);
    data->simulationInfo->relations[16] = tmp51;
    tmp52 = LessZC((data->simulationInfo->realParameter[158] /* eSDC1A.rotatingExciterLimited.sISO.k PARAM */) * (data->localData[0]->realVars[75] /* eSDC1A.rotatingExciterLimited.feedback.y variable */), 0.0, data->simulationInfo->storedRelations[17]);
    data->simulationInfo->relations[17] = tmp52;
    tmp53 = GreaterZC(data->localData[0]->realVars[3] /* eSDC1A.rotatingExciterLimited.sISO.y STATE(1) */, data->simulationInfo->realParameter[159] /* eSDC1A.rotatingExciterLimited.sISO.outMax PARAM */, data->simulationInfo->storedRelations[18]);
    data->simulationInfo->relations[18] = tmp53;
    tmp54 = GreaterZC((data->simulationInfo->realParameter[158] /* eSDC1A.rotatingExciterLimited.sISO.k PARAM */) * (data->localData[0]->realVars[75] /* eSDC1A.rotatingExciterLimited.feedback.y variable */), 0.0, data->simulationInfo->storedRelations[19]);
    data->simulationInfo->relations[19] = tmp54;
    tmp55 = GreaterZC(data->localData[0]->realVars[4] /* eSDC1A.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[170] /* eSDC1A.simpleLagLim.outMax PARAM */, data->simulationInfo->storedRelations[20]);
    data->simulationInfo->relations[20] = tmp55;
    tmp56 = LessZC((data->simulationInfo->realParameter[166] /* eSDC1A.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[66] /* eSDC1A.hV_GATE.p variable */) - data->localData[0]->realVars[4] /* eSDC1A.simpleLagLim.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[21]);
    data->simulationInfo->relations[21] = tmp56;
    tmp57 = LessZC(data->localData[0]->realVars[4] /* eSDC1A.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[171] /* eSDC1A.simpleLagLim.outMin PARAM */, data->simulationInfo->storedRelations[22]);
    data->simulationInfo->relations[22] = tmp57;
    tmp58 = GreaterZC((data->simulationInfo->realParameter[166] /* eSDC1A.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[66] /* eSDC1A.hV_GATE.p variable */) - data->localData[0]->realVars[4] /* eSDC1A.simpleLagLim.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[23]);
    data->simulationInfo->relations[23] = tmp58;
  } else {
    data->simulationInfo->relations[0] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[117] /* eSDC1A.Vref_step.startTime PARAM */);
    data->simulationInfo->relations[1] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[300] /* pwLine.t1 PARAM */);
    data->simulationInfo->relations[2] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[301] /* pwLine.t2 PARAM */);
    data->simulationInfo->relations[3] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[322] /* pwLine3.t1 PARAM */);
    data->simulationInfo->relations[4] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[323] /* pwLine3.t2 PARAM */);
    data->simulationInfo->relations[5] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[289] /* pwFault.t1 PARAM */);
    data->simulationInfo->relations[6] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[290] /* pwFault.t2 PARAM */);
    data->simulationInfo->relations[7] = (data->localData[0]->realVars[55] /* constantLoad.v variable */ < 0.5);
    data->simulationInfo->relations[8] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */);
    data->simulationInfo->relations[9] = (data->localData[0]->timeValue <= data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[65] /* constantLoad.d_t PARAM */);
    data->simulationInfo->relations[10] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[333] /* pwLine4.t1 PARAM */);
    data->simulationInfo->relations[11] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[334] /* pwLine4.t2 PARAM */);
    data->simulationInfo->relations[12] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[311] /* pwLine1.t1 PARAM */);
    data->simulationInfo->relations[13] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[312] /* pwLine1.t2 PARAM */);
    data->simulationInfo->relations[14] = (data->localData[0]->realVars[55] /* constantLoad.v variable */ < data->simulationInfo->realParameter[35] /* constantLoad.PQBRAK PARAM */);
    data->simulationInfo->relations[15] = (data->localData[0]->realVars[65] /* eSDC1A.hV_GATE.n1 variable */ < data->simulationInfo->realParameter[285] /* minusInf.k PARAM */);
    data->simulationInfo->relations[16] = (data->localData[0]->realVars[3] /* eSDC1A.rotatingExciterLimited.sISO.y STATE(1) */ < data->simulationInfo->realParameter[160] /* eSDC1A.rotatingExciterLimited.sISO.outMin PARAM */);
    data->simulationInfo->relations[17] = ((data->simulationInfo->realParameter[158] /* eSDC1A.rotatingExciterLimited.sISO.k PARAM */) * (data->localData[0]->realVars[75] /* eSDC1A.rotatingExciterLimited.feedback.y variable */) < 0.0);
    data->simulationInfo->relations[18] = (data->localData[0]->realVars[3] /* eSDC1A.rotatingExciterLimited.sISO.y STATE(1) */ > data->simulationInfo->realParameter[159] /* eSDC1A.rotatingExciterLimited.sISO.outMax PARAM */);
    data->simulationInfo->relations[19] = ((data->simulationInfo->realParameter[158] /* eSDC1A.rotatingExciterLimited.sISO.k PARAM */) * (data->localData[0]->realVars[75] /* eSDC1A.rotatingExciterLimited.feedback.y variable */) > 0.0);
    data->simulationInfo->relations[20] = (data->localData[0]->realVars[4] /* eSDC1A.simpleLagLim.state STATE(1) */ > data->simulationInfo->realParameter[170] /* eSDC1A.simpleLagLim.outMax PARAM */);
    data->simulationInfo->relations[21] = ((data->simulationInfo->realParameter[166] /* eSDC1A.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[66] /* eSDC1A.hV_GATE.p variable */) - data->localData[0]->realVars[4] /* eSDC1A.simpleLagLim.state STATE(1) */ < 0.0);
    data->simulationInfo->relations[22] = (data->localData[0]->realVars[4] /* eSDC1A.simpleLagLim.state STATE(1) */ < data->simulationInfo->realParameter[171] /* eSDC1A.simpleLagLim.outMin PARAM */);
    data->simulationInfo->relations[23] = ((data->simulationInfo->realParameter[166] /* eSDC1A.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[66] /* eSDC1A.hV_GATE.p variable */) - data->localData[0]->realVars[4] /* eSDC1A.simpleLagLim.state STATE(1) */ > 0.0);
  }
  
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

