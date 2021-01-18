/* Events: Sample, Zero Crossings, Relations, Discrete Changes */
#include "OpenIPSL.Examples.Controls.PSSE.ES.IEEET2_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* Initializes the raw time events of the simulation using the now
   calcualted parameters. */
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_function_initSample(DATA *data, threadData_t *threadData)
{
  long i=0;
}

const char *OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_zeroCrossingDescription(int i, int **out_EquationIndexes)
{
  static const char *res[] = {"time < iEEET2.Vref_step.startTime",
  "time >= pwLine.t1 and time < pwLine.t2",
  "time >= pwLine.t1",
  "time < pwLine.t2",
  "time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t",
  "constantLoad.v < constantLoad.PQBRAK",
  "constantLoad.v < 0.5",
  "time >= constantLoad.t1",
  "time <= constantLoad.t1 + constantLoad.d_t",
  "time >= pwLine3.t1 and time < pwLine3.t2",
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
  "iEEET2.simpleLagLim.state > iEEET2.simpleLagLim.outMax and iEEET2.simpleLagLim.K * iEEET2.add.y - iEEET2.simpleLagLim.state < 0.0",
  "iEEET2.simpleLagLim.state < iEEET2.simpleLagLim.outMin and iEEET2.simpleLagLim.K * iEEET2.add.y - iEEET2.simpleLagLim.state > 0.0"};
  static const int occurEqs0[] = {1,176};
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
  static const int occurEqs21[] = {1,319};
  static const int occurEqs22[] = {1,320};
  static const int *occurEqs[] = {occurEqs0,occurEqs1,occurEqs2,occurEqs3,occurEqs4,occurEqs5,occurEqs6,occurEqs7,occurEqs8,occurEqs9,occurEqs10,occurEqs11,occurEqs12,occurEqs13,occurEqs14,occurEqs15,occurEqs16,occurEqs17,occurEqs18,occurEqs19,occurEqs20,occurEqs21,occurEqs22};
  *out_EquationIndexes = (int*) occurEqs[i];
  return res[i];
}

/* forwarded equations */
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_169(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_170(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_171(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_172(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_173(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_174(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_175(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_176(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_177(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_178(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_179(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_180(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_181(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_182(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_183(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_184(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_185(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_276(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_279(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_280(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_281(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_282(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_283(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_284(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_285(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_286(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_304(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_305(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_306(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_307(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_308(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_317(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_318(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_321(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_322(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_323(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_324(DATA* data, threadData_t *threadData);

int OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_function_ZeroCrossingsEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->callStatistics.functionZeroCrossingsEquations++;

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_169(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_170(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_171(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_172(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_173(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_174(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_175(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_176(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_177(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_178(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_179(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_180(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_181(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_182(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_183(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_184(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_185(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_276(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_279(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_280(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_281(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_282(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_283(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_284(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_285(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_286(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_304(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_305(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_306(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_307(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_308(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_317(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_318(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_321(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_322(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_323(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_324(data, threadData);
  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_function_ZeroCrossings(DATA *data, threadData_t *threadData, double *gout)
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

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_ZC);
#endif
  data->simulationInfo->callStatistics.functionZeroCrossings++;

  tmp0 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[227] /* iEEET2.Vref_step.startTime PARAM */, data->simulationInfo->storedRelations[0]);
  gout[0] = (tmp0) ? 1 : -1;
  tmp1 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[284] /* pwLine.t1 PARAM */, data->simulationInfo->storedRelations[1]);
  tmp2 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[285] /* pwLine.t2 PARAM */, data->simulationInfo->storedRelations[2]);
  gout[1] = ((tmp1 && tmp2)) ? 1 : -1;
  tmp3 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[284] /* pwLine.t1 PARAM */, data->simulationInfo->storedRelations[1]);
  gout[2] = (tmp3) ? 1 : -1;
  tmp4 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[285] /* pwLine.t2 PARAM */, data->simulationInfo->storedRelations[2]);
  gout[3] = (tmp4) ? 1 : -1;
  tmp5 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */, data->simulationInfo->storedRelations[3]);
  tmp6 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[65] /* constantLoad.d_t PARAM */, data->simulationInfo->storedRelations[4]);
  gout[4] = ((tmp5 && tmp6)) ? 1 : -1;
  tmp7 = LessZC(data->localData[0]->realVars[55] /* constantLoad.v variable */, data->simulationInfo->realParameter[35] /* constantLoad.PQBRAK PARAM */, data->simulationInfo->storedRelations[5]);
  gout[5] = (tmp7) ? 1 : -1;
  tmp8 = LessZC(data->localData[0]->realVars[55] /* constantLoad.v variable */, 0.5, data->simulationInfo->storedRelations[6]);
  gout[6] = (tmp8) ? 1 : -1;
  tmp9 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */, data->simulationInfo->storedRelations[3]);
  gout[7] = (tmp9) ? 1 : -1;
  tmp10 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[65] /* constantLoad.d_t PARAM */, data->simulationInfo->storedRelations[4]);
  gout[8] = (tmp10) ? 1 : -1;
  tmp11 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[306] /* pwLine3.t1 PARAM */, data->simulationInfo->storedRelations[7]);
  tmp12 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[307] /* pwLine3.t2 PARAM */, data->simulationInfo->storedRelations[8]);
  gout[9] = ((tmp11 && tmp12)) ? 1 : -1;
  tmp13 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[306] /* pwLine3.t1 PARAM */, data->simulationInfo->storedRelations[7]);
  gout[10] = (tmp13) ? 1 : -1;
  tmp14 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[307] /* pwLine3.t2 PARAM */, data->simulationInfo->storedRelations[8]);
  gout[11] = (tmp14) ? 1 : -1;
  tmp15 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[317] /* pwLine4.t1 PARAM */, data->simulationInfo->storedRelations[9]);
  tmp16 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[318] /* pwLine4.t2 PARAM */, data->simulationInfo->storedRelations[10]);
  gout[12] = ((tmp15 && tmp16)) ? 1 : -1;
  tmp17 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[273] /* pwFault.t1 PARAM */, data->simulationInfo->storedRelations[11]);
  gout[13] = (tmp17) ? 1 : -1;
  tmp18 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[274] /* pwFault.t2 PARAM */, data->simulationInfo->storedRelations[12]);
  gout[14] = ((tmp18 && data->simulationInfo->booleanParameter[66] /* pwFault.ground PARAM */)) ? 1 : -1;
  tmp19 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[274] /* pwFault.t2 PARAM */, data->simulationInfo->storedRelations[12]);
  gout[15] = (tmp19) ? 1 : -1;
  tmp20 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[317] /* pwLine4.t1 PARAM */, data->simulationInfo->storedRelations[9]);
  gout[16] = (tmp20) ? 1 : -1;
  tmp21 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[318] /* pwLine4.t2 PARAM */, data->simulationInfo->storedRelations[10]);
  gout[17] = (tmp21) ? 1 : -1;
  tmp22 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[295] /* pwLine1.t1 PARAM */, data->simulationInfo->storedRelations[13]);
  tmp23 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[296] /* pwLine1.t2 PARAM */, data->simulationInfo->storedRelations[14]);
  gout[18] = ((tmp22 && tmp23)) ? 1 : -1;
  tmp24 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[295] /* pwLine1.t1 PARAM */, data->simulationInfo->storedRelations[13]);
  gout[19] = (tmp24) ? 1 : -1;
  tmp25 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[296] /* pwLine1.t2 PARAM */, data->simulationInfo->storedRelations[14]);
  gout[20] = (tmp25) ? 1 : -1;
  tmp26 = GreaterZC(data->localData[0]->realVars[12] /* iEEET2.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[267] /* iEEET2.simpleLagLim.outMax PARAM */, data->simulationInfo->storedRelations[15]);
  tmp27 = LessZC((data->simulationInfo->realParameter[263] /* iEEET2.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[94] /* iEEET2.add.y variable */) - data->localData[0]->realVars[12] /* iEEET2.simpleLagLim.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[16]);
  gout[21] = ((tmp26 && tmp27)) ? 1 : -1;
  tmp28 = LessZC(data->localData[0]->realVars[12] /* iEEET2.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[268] /* iEEET2.simpleLagLim.outMin PARAM */, data->simulationInfo->storedRelations[17]);
  tmp29 = GreaterZC((data->simulationInfo->realParameter[263] /* iEEET2.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[94] /* iEEET2.add.y variable */) - data->localData[0]->realVars[12] /* iEEET2.simpleLagLim.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[18]);
  gout[22] = ((tmp28 && tmp29)) ? 1 : -1;

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_ZC);
#endif

  TRACE_POP
  return 0;
}

const char *OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_relationDescription(int i)
{
  const char *res[] = {"time < iEEET2.Vref_step.startTime",
  "time >= pwLine.t1",
  "time < pwLine.t2",
  "time >= constantLoad.t1",
  "time <= constantLoad.t1 + constantLoad.d_t",
  "constantLoad.v < constantLoad.PQBRAK",
  "constantLoad.v < 0.5",
  "time >= pwLine3.t1",
  "time < pwLine3.t2",
  "time >= pwLine4.t1",
  "time < pwLine4.t2",
  "time < pwFault.t1",
  "time < pwFault.t2",
  "time >= pwLine1.t1",
  "time < pwLine1.t2",
  "iEEET2.simpleLagLim.state > iEEET2.simpleLagLim.outMax",
  "iEEET2.simpleLagLim.K * iEEET2.add.y - iEEET2.simpleLagLim.state < 0.0",
  "iEEET2.simpleLagLim.state < iEEET2.simpleLagLim.outMin",
  "iEEET2.simpleLagLim.K * iEEET2.add.y - iEEET2.simpleLagLim.state > 0.0"};
  return res[i];
}

int OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_function_updateRelations(DATA *data, threadData_t *threadData, int evalforZeroCross)
{
  TRACE_PUSH
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
  modelica_boolean tmp47;
  modelica_boolean tmp48;
  
  if(evalforZeroCross) {
    tmp30 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[227] /* iEEET2.Vref_step.startTime PARAM */, data->simulationInfo->storedRelations[0]);
    data->simulationInfo->relations[0] = tmp30;
    tmp31 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[284] /* pwLine.t1 PARAM */, data->simulationInfo->storedRelations[1]);
    data->simulationInfo->relations[1] = tmp31;
    tmp32 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[285] /* pwLine.t2 PARAM */, data->simulationInfo->storedRelations[2]);
    data->simulationInfo->relations[2] = tmp32;
    tmp33 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */, data->simulationInfo->storedRelations[3]);
    data->simulationInfo->relations[3] = tmp33;
    tmp34 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[65] /* constantLoad.d_t PARAM */, data->simulationInfo->storedRelations[4]);
    data->simulationInfo->relations[4] = tmp34;
    tmp35 = LessZC(data->localData[0]->realVars[55] /* constantLoad.v variable */, data->simulationInfo->realParameter[35] /* constantLoad.PQBRAK PARAM */, data->simulationInfo->storedRelations[5]);
    data->simulationInfo->relations[5] = tmp35;
    tmp36 = LessZC(data->localData[0]->realVars[55] /* constantLoad.v variable */, 0.5, data->simulationInfo->storedRelations[6]);
    data->simulationInfo->relations[6] = tmp36;
    tmp37 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[306] /* pwLine3.t1 PARAM */, data->simulationInfo->storedRelations[7]);
    data->simulationInfo->relations[7] = tmp37;
    tmp38 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[307] /* pwLine3.t2 PARAM */, data->simulationInfo->storedRelations[8]);
    data->simulationInfo->relations[8] = tmp38;
    tmp39 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[317] /* pwLine4.t1 PARAM */, data->simulationInfo->storedRelations[9]);
    data->simulationInfo->relations[9] = tmp39;
    tmp40 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[318] /* pwLine4.t2 PARAM */, data->simulationInfo->storedRelations[10]);
    data->simulationInfo->relations[10] = tmp40;
    tmp41 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[273] /* pwFault.t1 PARAM */, data->simulationInfo->storedRelations[11]);
    data->simulationInfo->relations[11] = tmp41;
    tmp42 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[274] /* pwFault.t2 PARAM */, data->simulationInfo->storedRelations[12]);
    data->simulationInfo->relations[12] = tmp42;
    tmp43 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[295] /* pwLine1.t1 PARAM */, data->simulationInfo->storedRelations[13]);
    data->simulationInfo->relations[13] = tmp43;
    tmp44 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[296] /* pwLine1.t2 PARAM */, data->simulationInfo->storedRelations[14]);
    data->simulationInfo->relations[14] = tmp44;
    tmp45 = GreaterZC(data->localData[0]->realVars[12] /* iEEET2.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[267] /* iEEET2.simpleLagLim.outMax PARAM */, data->simulationInfo->storedRelations[15]);
    data->simulationInfo->relations[15] = tmp45;
    tmp46 = LessZC((data->simulationInfo->realParameter[263] /* iEEET2.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[94] /* iEEET2.add.y variable */) - data->localData[0]->realVars[12] /* iEEET2.simpleLagLim.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[16]);
    data->simulationInfo->relations[16] = tmp46;
    tmp47 = LessZC(data->localData[0]->realVars[12] /* iEEET2.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[268] /* iEEET2.simpleLagLim.outMin PARAM */, data->simulationInfo->storedRelations[17]);
    data->simulationInfo->relations[17] = tmp47;
    tmp48 = GreaterZC((data->simulationInfo->realParameter[263] /* iEEET2.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[94] /* iEEET2.add.y variable */) - data->localData[0]->realVars[12] /* iEEET2.simpleLagLim.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[18]);
    data->simulationInfo->relations[18] = tmp48;
  } else {
    data->simulationInfo->relations[0] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[227] /* iEEET2.Vref_step.startTime PARAM */);
    data->simulationInfo->relations[1] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[284] /* pwLine.t1 PARAM */);
    data->simulationInfo->relations[2] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[285] /* pwLine.t2 PARAM */);
    data->simulationInfo->relations[3] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */);
    data->simulationInfo->relations[4] = (data->localData[0]->timeValue <= data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[65] /* constantLoad.d_t PARAM */);
    data->simulationInfo->relations[5] = (data->localData[0]->realVars[55] /* constantLoad.v variable */ < data->simulationInfo->realParameter[35] /* constantLoad.PQBRAK PARAM */);
    data->simulationInfo->relations[6] = (data->localData[0]->realVars[55] /* constantLoad.v variable */ < 0.5);
    data->simulationInfo->relations[7] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[306] /* pwLine3.t1 PARAM */);
    data->simulationInfo->relations[8] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[307] /* pwLine3.t2 PARAM */);
    data->simulationInfo->relations[9] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[317] /* pwLine4.t1 PARAM */);
    data->simulationInfo->relations[10] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[318] /* pwLine4.t2 PARAM */);
    data->simulationInfo->relations[11] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[273] /* pwFault.t1 PARAM */);
    data->simulationInfo->relations[12] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[274] /* pwFault.t2 PARAM */);
    data->simulationInfo->relations[13] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[295] /* pwLine1.t1 PARAM */);
    data->simulationInfo->relations[14] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[296] /* pwLine1.t2 PARAM */);
    data->simulationInfo->relations[15] = (data->localData[0]->realVars[12] /* iEEET2.simpleLagLim.state STATE(1) */ > data->simulationInfo->realParameter[267] /* iEEET2.simpleLagLim.outMax PARAM */);
    data->simulationInfo->relations[16] = ((data->simulationInfo->realParameter[263] /* iEEET2.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[94] /* iEEET2.add.y variable */) - data->localData[0]->realVars[12] /* iEEET2.simpleLagLim.state STATE(1) */ < 0.0);
    data->simulationInfo->relations[17] = (data->localData[0]->realVars[12] /* iEEET2.simpleLagLim.state STATE(1) */ < data->simulationInfo->realParameter[268] /* iEEET2.simpleLagLim.outMin PARAM */);
    data->simulationInfo->relations[18] = ((data->simulationInfo->realParameter[263] /* iEEET2.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[94] /* iEEET2.add.y variable */) - data->localData[0]->realVars[12] /* iEEET2.simpleLagLim.state STATE(1) */ > 0.0);
  }
  
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

