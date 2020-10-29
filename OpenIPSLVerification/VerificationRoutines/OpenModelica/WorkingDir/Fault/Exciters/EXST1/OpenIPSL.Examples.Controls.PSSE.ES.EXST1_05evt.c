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
  static const char *res[] = {"time >= pwLine.t1 and time < pwLine.t2",
  "time >= pwLine1.t1 and time < pwLine1.t2",
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
  "time >= pwLine1.t1",
  "time < pwLine1.t2",
  "time >= pwLine.t1",
  "time < pwLine.t2",
  "eXST1.EFD > eXST1.ECOMP * eXST1.V_RMAX - eXST1.K_C * eXST1.XADIFD",
  "eXST1.EFD < eXST1.ECOMP * eXST1.V_RMIN - eXST1.K_C * eXST1.XADIFD",
  "eXST1.feedback.y > eXST1.limiter.uMax",
  "eXST1.feedback.y < eXST1.limiter.uMin"};
  static const int occurEqs0[] = {1,-1};
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
  static const int occurEqs20[] = {1,455};
  static const int occurEqs21[] = {1,455};
  static const int occurEqs22[] = {1,311};
  static const int occurEqs23[] = {1,311};
  static const int *occurEqs[] = {occurEqs0,occurEqs1,occurEqs2,occurEqs3,occurEqs4,occurEqs5,occurEqs6,occurEqs7,occurEqs8,occurEqs9,occurEqs10,occurEqs11,occurEqs12,occurEqs13,occurEqs14,occurEqs15,occurEqs16,occurEqs17,occurEqs18,occurEqs19,occurEqs20,occurEqs21,occurEqs22,occurEqs23};
  *out_EquationIndexes = (int*) occurEqs[i];
  return res[i];
}

/* forwarded equations */
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_308(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_309(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_310(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_311(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_312(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_313(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_314(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_315(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_316(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_317(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_318(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_319(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_410(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_419(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_420(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_421(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_424(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_425(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_426(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_427(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_431(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_432(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_433(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_434(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_435(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_450(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_451(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_452(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_453(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_455(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_456(DATA* data, threadData_t *threadData);

int OpenIPSL_Examples_Controls_PSSE_ES_EXST1_function_ZeroCrossingsEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->callStatistics.functionZeroCrossingsEquations++;

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_308(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_309(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_310(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_311(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_312(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_313(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_314(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_315(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_316(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_317(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_318(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_319(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_410(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_419(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_420(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_421(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_424(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_425(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_426(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_427(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_431(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_432(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_433(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_434(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_435(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_450(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_451(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_452(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_453(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_455(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_456(data, threadData);
  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_EXST1_function_ZeroCrossings(DATA *data, threadData_t *threadData, double *gout)
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

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_ZC);
#endif
  data->simulationInfo->callStatistics.functionZeroCrossings++;

  tmp6 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[268] /* pwLine.t1 PARAM */, data->simulationInfo->storedRelations[0]);
  tmp7 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[269] /* pwLine.t2 PARAM */, data->simulationInfo->storedRelations[1]);
  gout[0] = ((tmp6 && tmp7)) ? 1 : -1;
  tmp8 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[279] /* pwLine1.t1 PARAM */, data->simulationInfo->storedRelations[2]);
  tmp9 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[280] /* pwLine1.t2 PARAM */, data->simulationInfo->storedRelations[3]);
  gout[1] = ((tmp8 && tmp9)) ? 1 : -1;
  tmp10 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[73] /* constantLoad.t1 PARAM */, data->simulationInfo->storedRelations[4]);
  tmp11 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[73] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[67] /* constantLoad.d_t PARAM */, data->simulationInfo->storedRelations[5]);
  gout[2] = ((tmp10 && tmp11)) ? 1 : -1;
  tmp12 = LessZC(data->localData[0]->realVars[53] /* constantLoad.v variable */, data->simulationInfo->realParameter[37] /* constantLoad.PQBRAK PARAM */, data->simulationInfo->storedRelations[6]);
  gout[3] = (tmp12) ? 1 : -1;
  tmp13 = LessZC(data->localData[0]->realVars[53] /* constantLoad.v variable */, 0.5, data->simulationInfo->storedRelations[7]);
  gout[4] = (tmp13) ? 1 : -1;
  tmp14 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[73] /* constantLoad.t1 PARAM */, data->simulationInfo->storedRelations[4]);
  gout[5] = (tmp14) ? 1 : -1;
  tmp15 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[73] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[67] /* constantLoad.d_t PARAM */, data->simulationInfo->storedRelations[5]);
  gout[6] = (tmp15) ? 1 : -1;
  tmp16 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[290] /* pwLine3.t1 PARAM */, data->simulationInfo->storedRelations[8]);
  tmp17 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[291] /* pwLine3.t2 PARAM */, data->simulationInfo->storedRelations[9]);
  gout[7] = ((tmp16 && tmp17)) ? 1 : -1;
  tmp18 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[290] /* pwLine3.t1 PARAM */, data->simulationInfo->storedRelations[8]);
  gout[8] = (tmp18) ? 1 : -1;
  tmp19 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[291] /* pwLine3.t2 PARAM */, data->simulationInfo->storedRelations[9]);
  gout[9] = (tmp19) ? 1 : -1;
  tmp20 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[301] /* pwLine4.t1 PARAM */, data->simulationInfo->storedRelations[10]);
  tmp21 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[302] /* pwLine4.t2 PARAM */, data->simulationInfo->storedRelations[11]);
  gout[10] = ((tmp20 && tmp21)) ? 1 : -1;
  tmp22 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[257] /* pwFault.t1 PARAM */, data->simulationInfo->storedRelations[12]);
  gout[11] = (tmp22) ? 1 : -1;
  tmp23 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[258] /* pwFault.t2 PARAM */, data->simulationInfo->storedRelations[13]);
  gout[12] = ((tmp23 && data->simulationInfo->booleanParameter[66] /* pwFault.ground PARAM */)) ? 1 : -1;
  tmp24 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[258] /* pwFault.t2 PARAM */, data->simulationInfo->storedRelations[13]);
  gout[13] = (tmp24) ? 1 : -1;
  tmp25 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[301] /* pwLine4.t1 PARAM */, data->simulationInfo->storedRelations[10]);
  gout[14] = (tmp25) ? 1 : -1;
  tmp26 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[302] /* pwLine4.t2 PARAM */, data->simulationInfo->storedRelations[11]);
  gout[15] = (tmp26) ? 1 : -1;
  tmp27 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[279] /* pwLine1.t1 PARAM */, data->simulationInfo->storedRelations[2]);
  gout[16] = (tmp27) ? 1 : -1;
  tmp28 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[280] /* pwLine1.t2 PARAM */, data->simulationInfo->storedRelations[3]);
  gout[17] = (tmp28) ? 1 : -1;
  tmp29 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[268] /* pwLine.t1 PARAM */, data->simulationInfo->storedRelations[0]);
  gout[18] = (tmp29) ? 1 : -1;
  tmp30 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[269] /* pwLine.t2 PARAM */, data->simulationInfo->storedRelations[1]);
  gout[19] = (tmp30) ? 1 : -1;
  tmp31 = GreaterZC(data->localData[0]->realVars[57] /* eXST1.EFD variable */, (data->localData[0]->realVars[56] /* eXST1.ECOMP variable */) * (data->simulationInfo->realParameter[107] /* eXST1.V_RMAX PARAM */) - ((data->simulationInfo->realParameter[84] /* eXST1.K_C PARAM */) * (data->localData[0]->realVars[63] /* eXST1.XADIFD variable */)), data->simulationInfo->storedRelations[14]);
  gout[20] = (tmp31) ? 1 : -1;
  tmp32 = LessZC(data->localData[0]->realVars[57] /* eXST1.EFD variable */, (data->localData[0]->realVars[56] /* eXST1.ECOMP variable */) * (data->simulationInfo->realParameter[108] /* eXST1.V_RMIN PARAM */) - ((data->simulationInfo->realParameter[84] /* eXST1.K_C PARAM */) * (data->localData[0]->realVars[63] /* eXST1.XADIFD variable */)), data->simulationInfo->storedRelations[15]);
  gout[21] = (tmp32) ? 1 : -1;
  tmp33 = GreaterZC(data->localData[0]->realVars[65] /* eXST1.feedback.y variable */, data->simulationInfo->realParameter[142] /* eXST1.limiter.uMax PARAM */, data->simulationInfo->storedRelations[16]);
  gout[22] = (tmp33) ? 1 : -1;
  tmp34 = LessZC(data->localData[0]->realVars[65] /* eXST1.feedback.y variable */, data->simulationInfo->realParameter[143] /* eXST1.limiter.uMin PARAM */, data->simulationInfo->storedRelations[17]);
  gout[23] = (tmp34) ? 1 : -1;

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_ZC);
#endif

  TRACE_POP
  return 0;
}

const char *OpenIPSL_Examples_Controls_PSSE_ES_EXST1_relationDescription(int i)
{
  const char *res[] = {"time >= pwLine.t1",
  "time < pwLine.t2",
  "time >= pwLine1.t1",
  "time < pwLine1.t2",
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
  "eXST1.EFD > eXST1.ECOMP * eXST1.V_RMAX - eXST1.K_C * eXST1.XADIFD",
  "eXST1.EFD < eXST1.ECOMP * eXST1.V_RMIN - eXST1.K_C * eXST1.XADIFD",
  "eXST1.feedback.y > eXST1.limiter.uMax",
  "eXST1.feedback.y < eXST1.limiter.uMin"};
  return res[i];
}

int OpenIPSL_Examples_Controls_PSSE_ES_EXST1_function_updateRelations(DATA *data, threadData_t *threadData, int evalforZeroCross)
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
  
  if(evalforZeroCross) {
    tmp35 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[268] /* pwLine.t1 PARAM */, data->simulationInfo->storedRelations[0]);
    data->simulationInfo->relations[0] = tmp35;
    tmp36 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[269] /* pwLine.t2 PARAM */, data->simulationInfo->storedRelations[1]);
    data->simulationInfo->relations[1] = tmp36;
    tmp37 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[279] /* pwLine1.t1 PARAM */, data->simulationInfo->storedRelations[2]);
    data->simulationInfo->relations[2] = tmp37;
    tmp38 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[280] /* pwLine1.t2 PARAM */, data->simulationInfo->storedRelations[3]);
    data->simulationInfo->relations[3] = tmp38;
    tmp39 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[73] /* constantLoad.t1 PARAM */, data->simulationInfo->storedRelations[4]);
    data->simulationInfo->relations[4] = tmp39;
    tmp40 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[73] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[67] /* constantLoad.d_t PARAM */, data->simulationInfo->storedRelations[5]);
    data->simulationInfo->relations[5] = tmp40;
    tmp41 = LessZC(data->localData[0]->realVars[53] /* constantLoad.v variable */, data->simulationInfo->realParameter[37] /* constantLoad.PQBRAK PARAM */, data->simulationInfo->storedRelations[6]);
    data->simulationInfo->relations[6] = tmp41;
    tmp42 = LessZC(data->localData[0]->realVars[53] /* constantLoad.v variable */, 0.5, data->simulationInfo->storedRelations[7]);
    data->simulationInfo->relations[7] = tmp42;
    tmp43 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[290] /* pwLine3.t1 PARAM */, data->simulationInfo->storedRelations[8]);
    data->simulationInfo->relations[8] = tmp43;
    tmp44 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[291] /* pwLine3.t2 PARAM */, data->simulationInfo->storedRelations[9]);
    data->simulationInfo->relations[9] = tmp44;
    tmp45 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[301] /* pwLine4.t1 PARAM */, data->simulationInfo->storedRelations[10]);
    data->simulationInfo->relations[10] = tmp45;
    tmp46 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[302] /* pwLine4.t2 PARAM */, data->simulationInfo->storedRelations[11]);
    data->simulationInfo->relations[11] = tmp46;
    tmp47 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[257] /* pwFault.t1 PARAM */, data->simulationInfo->storedRelations[12]);
    data->simulationInfo->relations[12] = tmp47;
    tmp48 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[258] /* pwFault.t2 PARAM */, data->simulationInfo->storedRelations[13]);
    data->simulationInfo->relations[13] = tmp48;
    tmp49 = GreaterZC(data->localData[0]->realVars[57] /* eXST1.EFD variable */, (data->localData[0]->realVars[56] /* eXST1.ECOMP variable */) * (data->simulationInfo->realParameter[107] /* eXST1.V_RMAX PARAM */) - ((data->simulationInfo->realParameter[84] /* eXST1.K_C PARAM */) * (data->localData[0]->realVars[63] /* eXST1.XADIFD variable */)), data->simulationInfo->storedRelations[14]);
    data->simulationInfo->relations[14] = tmp49;
    tmp50 = LessZC(data->localData[0]->realVars[57] /* eXST1.EFD variable */, (data->localData[0]->realVars[56] /* eXST1.ECOMP variable */) * (data->simulationInfo->realParameter[108] /* eXST1.V_RMIN PARAM */) - ((data->simulationInfo->realParameter[84] /* eXST1.K_C PARAM */) * (data->localData[0]->realVars[63] /* eXST1.XADIFD variable */)), data->simulationInfo->storedRelations[15]);
    data->simulationInfo->relations[15] = tmp50;
    tmp51 = GreaterZC(data->localData[0]->realVars[65] /* eXST1.feedback.y variable */, data->simulationInfo->realParameter[142] /* eXST1.limiter.uMax PARAM */, data->simulationInfo->storedRelations[16]);
    data->simulationInfo->relations[16] = tmp51;
    tmp52 = LessZC(data->localData[0]->realVars[65] /* eXST1.feedback.y variable */, data->simulationInfo->realParameter[143] /* eXST1.limiter.uMin PARAM */, data->simulationInfo->storedRelations[17]);
    data->simulationInfo->relations[17] = tmp52;
  } else {
    data->simulationInfo->relations[0] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[268] /* pwLine.t1 PARAM */);
    data->simulationInfo->relations[1] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[269] /* pwLine.t2 PARAM */);
    data->simulationInfo->relations[2] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[279] /* pwLine1.t1 PARAM */);
    data->simulationInfo->relations[3] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[280] /* pwLine1.t2 PARAM */);
    data->simulationInfo->relations[4] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[73] /* constantLoad.t1 PARAM */);
    data->simulationInfo->relations[5] = (data->localData[0]->timeValue <= data->simulationInfo->realParameter[73] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[67] /* constantLoad.d_t PARAM */);
    data->simulationInfo->relations[6] = (data->localData[0]->realVars[53] /* constantLoad.v variable */ < data->simulationInfo->realParameter[37] /* constantLoad.PQBRAK PARAM */);
    data->simulationInfo->relations[7] = (data->localData[0]->realVars[53] /* constantLoad.v variable */ < 0.5);
    data->simulationInfo->relations[8] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[290] /* pwLine3.t1 PARAM */);
    data->simulationInfo->relations[9] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[291] /* pwLine3.t2 PARAM */);
    data->simulationInfo->relations[10] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[301] /* pwLine4.t1 PARAM */);
    data->simulationInfo->relations[11] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[302] /* pwLine4.t2 PARAM */);
    data->simulationInfo->relations[12] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[257] /* pwFault.t1 PARAM */);
    data->simulationInfo->relations[13] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[258] /* pwFault.t2 PARAM */);
    data->simulationInfo->relations[14] = (data->localData[0]->realVars[57] /* eXST1.EFD variable */ > (data->localData[0]->realVars[56] /* eXST1.ECOMP variable */) * (data->simulationInfo->realParameter[107] /* eXST1.V_RMAX PARAM */) - ((data->simulationInfo->realParameter[84] /* eXST1.K_C PARAM */) * (data->localData[0]->realVars[63] /* eXST1.XADIFD variable */)));
    data->simulationInfo->relations[15] = (data->localData[0]->realVars[57] /* eXST1.EFD variable */ < (data->localData[0]->realVars[56] /* eXST1.ECOMP variable */) * (data->simulationInfo->realParameter[108] /* eXST1.V_RMIN PARAM */) - ((data->simulationInfo->realParameter[84] /* eXST1.K_C PARAM */) * (data->localData[0]->realVars[63] /* eXST1.XADIFD variable */)));
    data->simulationInfo->relations[16] = (data->localData[0]->realVars[65] /* eXST1.feedback.y variable */ > data->simulationInfo->realParameter[142] /* eXST1.limiter.uMax PARAM */);
    data->simulationInfo->relations[17] = (data->localData[0]->realVars[65] /* eXST1.feedback.y variable */ < data->simulationInfo->realParameter[143] /* eXST1.limiter.uMin PARAM */);
  }
  
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

