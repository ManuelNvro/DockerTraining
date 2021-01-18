/* Events: Sample, Zero Crossings, Relations, Discrete Changes */
#include "OpenIPSL.Examples.Controls.PSSE.ES.EXST1_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* Initializes the raw time events of the simulation using the now
   calcualted parameters. */
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_function_initSample(DATA *data, threadData_t *threadData)
{
  long i=0;
}

const char *OpenIPSL_Examples_Controls_PSSE_ES_EXST1_zeroCrossingDescription(int i, int **out_EquationIndexes)
{
  static const char *res[] = {"time < eXST1.Vref_step.startTime",
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
  "eXST1.EFD > eXST1.ECOMP * eXST1.V_RMAX - eXST1.K_C * eXST1.XADIFD",
  "eXST1.EFD < eXST1.ECOMP * eXST1.V_RMIN - eXST1.K_C * eXST1.XADIFD",
  "eXST1.feedback.y > eXST1.limiter.uMax",
  "eXST1.feedback.y < eXST1.limiter.uMin"};
  static const int occurEqs0[] = {1,321};
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
  static const int occurEqs21[] = {1,454};
  static const int occurEqs22[] = {1,454};
  static const int occurEqs23[] = {1,324};
  static const int occurEqs24[] = {1,324};
  static const int *occurEqs[] = {occurEqs0,occurEqs1,occurEqs2,occurEqs3,occurEqs4,occurEqs5,occurEqs6,occurEqs7,occurEqs8,occurEqs9,occurEqs10,occurEqs11,occurEqs12,occurEqs13,occurEqs14,occurEqs15,occurEqs16,occurEqs17,occurEqs18,occurEqs19,occurEqs20,occurEqs21,occurEqs22,occurEqs23,occurEqs24};
  *out_EquationIndexes = (int*) occurEqs[i];
  return res[i];
}

/* forwarded equations */
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_314(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_315(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_316(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_317(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_318(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_319(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_320(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_321(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_322(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_323(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_324(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_325(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_326(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_327(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_418(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_426(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_427(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_428(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_429(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_430(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_444(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_445(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_446(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_447(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_451(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_452(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_454(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_455(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_456(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_457(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_458(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_459(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_460(DATA* data, threadData_t *threadData);

int OpenIPSL_Examples_Controls_PSSE_ES_EXST1_function_ZeroCrossingsEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->callStatistics.functionZeroCrossingsEquations++;

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_314(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_315(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_316(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_317(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_318(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_319(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_320(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_321(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_322(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_323(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_324(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_325(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_326(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_327(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_418(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_426(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_427(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_428(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_429(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_430(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_444(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_445(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_446(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_447(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_451(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_452(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_454(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_455(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_456(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_457(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_458(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_459(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_460(data, threadData);
  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_EXST1_function_ZeroCrossings(DATA *data, threadData_t *threadData, double *gout)
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

  tmp0 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[115] /* eXST1.Vref_step.startTime PARAM */, data->simulationInfo->storedRelations[0]);
  gout[0] = (tmp0) ? 1 : -1;
  tmp1 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[273] /* pwLine.t1 PARAM */, data->simulationInfo->storedRelations[1]);
  tmp2 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[274] /* pwLine.t2 PARAM */, data->simulationInfo->storedRelations[2]);
  gout[1] = ((tmp1 && tmp2)) ? 1 : -1;
  tmp3 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[295] /* pwLine3.t1 PARAM */, data->simulationInfo->storedRelations[3]);
  tmp4 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[296] /* pwLine3.t2 PARAM */, data->simulationInfo->storedRelations[4]);
  gout[2] = ((tmp3 && tmp4)) ? 1 : -1;
  tmp5 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */, data->simulationInfo->storedRelations[5]);
  tmp6 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[65] /* constantLoad.d_t PARAM */, data->simulationInfo->storedRelations[6]);
  gout[3] = ((tmp5 && tmp6)) ? 1 : -1;
  tmp7 = LessZC(data->localData[0]->realVars[53] /* constantLoad.v variable */, 0.5, data->simulationInfo->storedRelations[7]);
  gout[4] = (tmp7) ? 1 : -1;
  tmp8 = LessZC(data->localData[0]->realVars[53] /* constantLoad.v variable */, data->simulationInfo->realParameter[35] /* constantLoad.PQBRAK PARAM */, data->simulationInfo->storedRelations[8]);
  gout[5] = (tmp8) ? 1 : -1;
  tmp9 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */, data->simulationInfo->storedRelations[5]);
  gout[6] = (tmp9) ? 1 : -1;
  tmp10 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[65] /* constantLoad.d_t PARAM */, data->simulationInfo->storedRelations[6]);
  gout[7] = (tmp10) ? 1 : -1;
  tmp11 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[295] /* pwLine3.t1 PARAM */, data->simulationInfo->storedRelations[3]);
  gout[8] = (tmp11) ? 1 : -1;
  tmp12 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[296] /* pwLine3.t2 PARAM */, data->simulationInfo->storedRelations[4]);
  gout[9] = (tmp12) ? 1 : -1;
  tmp13 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[306] /* pwLine4.t1 PARAM */, data->simulationInfo->storedRelations[9]);
  tmp14 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[307] /* pwLine4.t2 PARAM */, data->simulationInfo->storedRelations[10]);
  gout[10] = ((tmp13 && tmp14)) ? 1 : -1;
  tmp15 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[262] /* pwFault.t1 PARAM */, data->simulationInfo->storedRelations[11]);
  gout[11] = (tmp15) ? 1 : -1;
  tmp16 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[263] /* pwFault.t2 PARAM */, data->simulationInfo->storedRelations[12]);
  gout[12] = ((tmp16 && data->simulationInfo->booleanParameter[66] /* pwFault.ground PARAM */)) ? 1 : -1;
  tmp17 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[263] /* pwFault.t2 PARAM */, data->simulationInfo->storedRelations[12]);
  gout[13] = (tmp17) ? 1 : -1;
  tmp18 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[306] /* pwLine4.t1 PARAM */, data->simulationInfo->storedRelations[9]);
  gout[14] = (tmp18) ? 1 : -1;
  tmp19 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[307] /* pwLine4.t2 PARAM */, data->simulationInfo->storedRelations[10]);
  gout[15] = (tmp19) ? 1 : -1;
  tmp20 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[284] /* pwLine1.t1 PARAM */, data->simulationInfo->storedRelations[13]);
  tmp21 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[285] /* pwLine1.t2 PARAM */, data->simulationInfo->storedRelations[14]);
  gout[16] = ((tmp20 && tmp21)) ? 1 : -1;
  tmp22 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[284] /* pwLine1.t1 PARAM */, data->simulationInfo->storedRelations[13]);
  gout[17] = (tmp22) ? 1 : -1;
  tmp23 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[285] /* pwLine1.t2 PARAM */, data->simulationInfo->storedRelations[14]);
  gout[18] = (tmp23) ? 1 : -1;
  tmp24 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[273] /* pwLine.t1 PARAM */, data->simulationInfo->storedRelations[1]);
  gout[19] = (tmp24) ? 1 : -1;
  tmp25 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[274] /* pwLine.t2 PARAM */, data->simulationInfo->storedRelations[2]);
  gout[20] = (tmp25) ? 1 : -1;
  tmp26 = GreaterZC(data->localData[0]->realVars[58] /* eXST1.EFD variable */, (data->localData[0]->realVars[57] /* eXST1.ECOMP variable */) * (data->simulationInfo->realParameter[104] /* eXST1.V_RMAX PARAM */) - ((data->simulationInfo->realParameter[81] /* eXST1.K_C PARAM */) * (data->localData[0]->realVars[65] /* eXST1.XADIFD variable */)), data->simulationInfo->storedRelations[15]);
  gout[21] = (tmp26) ? 1 : -1;
  tmp27 = LessZC(data->localData[0]->realVars[58] /* eXST1.EFD variable */, (data->localData[0]->realVars[57] /* eXST1.ECOMP variable */) * (data->simulationInfo->realParameter[105] /* eXST1.V_RMIN PARAM */) - ((data->simulationInfo->realParameter[81] /* eXST1.K_C PARAM */) * (data->localData[0]->realVars[65] /* eXST1.XADIFD variable */)), data->simulationInfo->storedRelations[16]);
  gout[22] = (tmp27) ? 1 : -1;
  tmp28 = GreaterZC(data->localData[0]->realVars[67] /* eXST1.feedback.y variable */, data->simulationInfo->realParameter[146] /* eXST1.limiter.uMax PARAM */, data->simulationInfo->storedRelations[17]);
  gout[23] = (tmp28) ? 1 : -1;
  tmp29 = LessZC(data->localData[0]->realVars[67] /* eXST1.feedback.y variable */, data->simulationInfo->realParameter[147] /* eXST1.limiter.uMin PARAM */, data->simulationInfo->storedRelations[18]);
  gout[24] = (tmp29) ? 1 : -1;

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_ZC);
#endif

  TRACE_POP
  return 0;
}

const char *OpenIPSL_Examples_Controls_PSSE_ES_EXST1_relationDescription(int i)
{
  const char *res[] = {"time < eXST1.Vref_step.startTime",
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
  "eXST1.EFD > eXST1.ECOMP * eXST1.V_RMAX - eXST1.K_C * eXST1.XADIFD",
  "eXST1.EFD < eXST1.ECOMP * eXST1.V_RMIN - eXST1.K_C * eXST1.XADIFD",
  "eXST1.feedback.y > eXST1.limiter.uMax",
  "eXST1.feedback.y < eXST1.limiter.uMin"};
  return res[i];
}

int OpenIPSL_Examples_Controls_PSSE_ES_EXST1_function_updateRelations(DATA *data, threadData_t *threadData, int evalforZeroCross)
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
    tmp30 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[115] /* eXST1.Vref_step.startTime PARAM */, data->simulationInfo->storedRelations[0]);
    data->simulationInfo->relations[0] = tmp30;
    tmp31 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[273] /* pwLine.t1 PARAM */, data->simulationInfo->storedRelations[1]);
    data->simulationInfo->relations[1] = tmp31;
    tmp32 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[274] /* pwLine.t2 PARAM */, data->simulationInfo->storedRelations[2]);
    data->simulationInfo->relations[2] = tmp32;
    tmp33 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[295] /* pwLine3.t1 PARAM */, data->simulationInfo->storedRelations[3]);
    data->simulationInfo->relations[3] = tmp33;
    tmp34 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[296] /* pwLine3.t2 PARAM */, data->simulationInfo->storedRelations[4]);
    data->simulationInfo->relations[4] = tmp34;
    tmp35 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */, data->simulationInfo->storedRelations[5]);
    data->simulationInfo->relations[5] = tmp35;
    tmp36 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[65] /* constantLoad.d_t PARAM */, data->simulationInfo->storedRelations[6]);
    data->simulationInfo->relations[6] = tmp36;
    tmp37 = LessZC(data->localData[0]->realVars[53] /* constantLoad.v variable */, 0.5, data->simulationInfo->storedRelations[7]);
    data->simulationInfo->relations[7] = tmp37;
    tmp38 = LessZC(data->localData[0]->realVars[53] /* constantLoad.v variable */, data->simulationInfo->realParameter[35] /* constantLoad.PQBRAK PARAM */, data->simulationInfo->storedRelations[8]);
    data->simulationInfo->relations[8] = tmp38;
    tmp39 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[306] /* pwLine4.t1 PARAM */, data->simulationInfo->storedRelations[9]);
    data->simulationInfo->relations[9] = tmp39;
    tmp40 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[307] /* pwLine4.t2 PARAM */, data->simulationInfo->storedRelations[10]);
    data->simulationInfo->relations[10] = tmp40;
    tmp41 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[262] /* pwFault.t1 PARAM */, data->simulationInfo->storedRelations[11]);
    data->simulationInfo->relations[11] = tmp41;
    tmp42 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[263] /* pwFault.t2 PARAM */, data->simulationInfo->storedRelations[12]);
    data->simulationInfo->relations[12] = tmp42;
    tmp43 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[284] /* pwLine1.t1 PARAM */, data->simulationInfo->storedRelations[13]);
    data->simulationInfo->relations[13] = tmp43;
    tmp44 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[285] /* pwLine1.t2 PARAM */, data->simulationInfo->storedRelations[14]);
    data->simulationInfo->relations[14] = tmp44;
    tmp45 = GreaterZC(data->localData[0]->realVars[58] /* eXST1.EFD variable */, (data->localData[0]->realVars[57] /* eXST1.ECOMP variable */) * (data->simulationInfo->realParameter[104] /* eXST1.V_RMAX PARAM */) - ((data->simulationInfo->realParameter[81] /* eXST1.K_C PARAM */) * (data->localData[0]->realVars[65] /* eXST1.XADIFD variable */)), data->simulationInfo->storedRelations[15]);
    data->simulationInfo->relations[15] = tmp45;
    tmp46 = LessZC(data->localData[0]->realVars[58] /* eXST1.EFD variable */, (data->localData[0]->realVars[57] /* eXST1.ECOMP variable */) * (data->simulationInfo->realParameter[105] /* eXST1.V_RMIN PARAM */) - ((data->simulationInfo->realParameter[81] /* eXST1.K_C PARAM */) * (data->localData[0]->realVars[65] /* eXST1.XADIFD variable */)), data->simulationInfo->storedRelations[16]);
    data->simulationInfo->relations[16] = tmp46;
    tmp47 = GreaterZC(data->localData[0]->realVars[67] /* eXST1.feedback.y variable */, data->simulationInfo->realParameter[146] /* eXST1.limiter.uMax PARAM */, data->simulationInfo->storedRelations[17]);
    data->simulationInfo->relations[17] = tmp47;
    tmp48 = LessZC(data->localData[0]->realVars[67] /* eXST1.feedback.y variable */, data->simulationInfo->realParameter[147] /* eXST1.limiter.uMin PARAM */, data->simulationInfo->storedRelations[18]);
    data->simulationInfo->relations[18] = tmp48;
  } else {
    data->simulationInfo->relations[0] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[115] /* eXST1.Vref_step.startTime PARAM */);
    data->simulationInfo->relations[1] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[273] /* pwLine.t1 PARAM */);
    data->simulationInfo->relations[2] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[274] /* pwLine.t2 PARAM */);
    data->simulationInfo->relations[3] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[295] /* pwLine3.t1 PARAM */);
    data->simulationInfo->relations[4] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[296] /* pwLine3.t2 PARAM */);
    data->simulationInfo->relations[5] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */);
    data->simulationInfo->relations[6] = (data->localData[0]->timeValue <= data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[65] /* constantLoad.d_t PARAM */);
    data->simulationInfo->relations[7] = (data->localData[0]->realVars[53] /* constantLoad.v variable */ < 0.5);
    data->simulationInfo->relations[8] = (data->localData[0]->realVars[53] /* constantLoad.v variable */ < data->simulationInfo->realParameter[35] /* constantLoad.PQBRAK PARAM */);
    data->simulationInfo->relations[9] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[306] /* pwLine4.t1 PARAM */);
    data->simulationInfo->relations[10] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[307] /* pwLine4.t2 PARAM */);
    data->simulationInfo->relations[11] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[262] /* pwFault.t1 PARAM */);
    data->simulationInfo->relations[12] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[263] /* pwFault.t2 PARAM */);
    data->simulationInfo->relations[13] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[284] /* pwLine1.t1 PARAM */);
    data->simulationInfo->relations[14] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[285] /* pwLine1.t2 PARAM */);
    data->simulationInfo->relations[15] = (data->localData[0]->realVars[58] /* eXST1.EFD variable */ > (data->localData[0]->realVars[57] /* eXST1.ECOMP variable */) * (data->simulationInfo->realParameter[104] /* eXST1.V_RMAX PARAM */) - ((data->simulationInfo->realParameter[81] /* eXST1.K_C PARAM */) * (data->localData[0]->realVars[65] /* eXST1.XADIFD variable */)));
    data->simulationInfo->relations[16] = (data->localData[0]->realVars[58] /* eXST1.EFD variable */ < (data->localData[0]->realVars[57] /* eXST1.ECOMP variable */) * (data->simulationInfo->realParameter[105] /* eXST1.V_RMIN PARAM */) - ((data->simulationInfo->realParameter[81] /* eXST1.K_C PARAM */) * (data->localData[0]->realVars[65] /* eXST1.XADIFD variable */)));
    data->simulationInfo->relations[17] = (data->localData[0]->realVars[67] /* eXST1.feedback.y variable */ > data->simulationInfo->realParameter[146] /* eXST1.limiter.uMax PARAM */);
    data->simulationInfo->relations[18] = (data->localData[0]->realVars[67] /* eXST1.feedback.y variable */ < data->simulationInfo->realParameter[147] /* eXST1.limiter.uMin PARAM */);
  }
  
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

