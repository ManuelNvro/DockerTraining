/* Events: Sample, Zero Crossings, Relations, Discrete Changes */
#include "OpenIPSL.Examples.Controls.PSSE.ES.ESAC2A_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* Initializes the raw time events of the simulation using the now
   calcualted parameters. */
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_function_initSample(DATA *data, threadData_t *threadData)
{
  long i=0;
}

const char *OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_zeroCrossingDescription(int i, int **out_EquationIndexes)
{
  static const char *res[] = {"time < eSAC2A.Vref_step.startTime",
  "time >= pwLine.t1 and time < pwLine.t2",
  "constantLoad.v < 0.5",
  "time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t",
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
  "time >= pwLine.t1",
  "time < pwLine.t2",
  "time >= constantLoad.t1",
  "time <= constantLoad.t1 + constantLoad.d_t",
  "constantLoad.v < constantLoad.PQBRAK",
  "eSAC2A.gain1.y < minusInf.k",
  "plusInf.k > eSAC2A.hV_GATE.p",
  "eSAC2A.rotatingExciterWithDemagnetization.feedback.y < -1e-15",
  "eSAC2A.rotatingExciterWithDemagnetization.feedback.y > 1e-15",
  "eSAC2A.rotatingExciterWithDemagnetization.sISO.w < eSAC2A.lowLim.k",
  "eSAC2A.rotatingExciterWithDemagnetization.sISO.w > eSAC2A.rotatingExciterWithDemagnetization.sISO.outMax",
  "eSAC2A.rectifierCommutationVoltageDrop.division.y <= 0.0",
  "eSAC2A.rectifierCommutationVoltageDrop.division.y > 0.0 and eSAC2A.rectifierCommutationVoltageDrop.division.y <= 0.433",
  "eSAC2A.rectifierCommutationVoltageDrop.division.y > 0.433 and eSAC2A.rectifierCommutationVoltageDrop.division.y < 0.75",
  "eSAC2A.rectifierCommutationVoltageDrop.division.y >= 0.75 and eSAC2A.rectifierCommutationVoltageDrop.division.y <= 1.0",
  "eSAC2A.simpleLagLim.state > eSAC2A.simpleLagLim.outMax and eSAC2A.simpleLagLim.K * eSAC2A.imLeadLag.y - eSAC2A.simpleLagLim.state < 0.0",
  "eSAC2A.simpleLagLim.state < eSAC2A.simpleLagLim.outMin and eSAC2A.simpleLagLim.K * eSAC2A.imLeadLag.y - eSAC2A.simpleLagLim.state > 0.0"};
  static const int occurEqs0[] = {1,382};
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
  static const int occurEqs22[] = {1,-1};
  static const int occurEqs23[] = {1,-1};
  static const int occurEqs24[] = {1,-1};
  static const int occurEqs25[] = {1,-1};
  static const int occurEqs26[] = {1,-1};
  static const int occurEqs27[] = {1,-1};
  static const int occurEqs28[] = {1,-1};
  static const int occurEqs29[] = {1,-1};
  static const int occurEqs30[] = {1,-1};
  static const int occurEqs31[] = {1,527};
  static const int occurEqs32[] = {1,528};
  static const int *occurEqs[] = {occurEqs0,occurEqs1,occurEqs2,occurEqs3,occurEqs4,occurEqs5,occurEqs6,occurEqs7,occurEqs8,occurEqs9,occurEqs10,occurEqs11,occurEqs12,occurEqs13,occurEqs14,occurEqs15,occurEqs16,occurEqs17,occurEqs18,occurEqs19,occurEqs20,occurEqs21,occurEqs22,occurEqs23,occurEqs24,occurEqs25,occurEqs26,occurEqs27,occurEqs28,occurEqs29,occurEqs30,occurEqs31,occurEqs32};
  *out_EquationIndexes = (int*) occurEqs[i];
  return res[i];
}

/* forwarded equations */
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_375(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_376(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_377(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_378(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_379(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_380(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_381(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_382(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_383(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_384(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_385(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_386(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_387(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_388(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_479(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_487(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_488(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_489(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_490(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_494(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_495(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_496(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_497(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_522(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_524(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_525(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_526(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_529(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_530(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_531(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_532(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_533(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_534(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_535(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_536(DATA* data, threadData_t *threadData);

int OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_function_ZeroCrossingsEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->callStatistics.functionZeroCrossingsEquations++;

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_375(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_376(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_377(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_378(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_379(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_380(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_381(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_382(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_383(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_384(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_385(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_386(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_387(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_388(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_479(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_487(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_488(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_489(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_490(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_494(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_495(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_496(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_497(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_522(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_524(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_525(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_526(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_529(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_530(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_531(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_532(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_533(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_534(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_535(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_536(data, threadData);
  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_function_ZeroCrossings(DATA *data, threadData_t *threadData, double *gout)
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

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_ZC);
#endif
  data->simulationInfo->callStatistics.functionZeroCrossings++;

  tmp0 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[124] /* eSAC2A.Vref_step.startTime PARAM */, data->simulationInfo->storedRelations[0]);
  gout[0] = (tmp0) ? 1 : -1;
  tmp1 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[331] /* pwLine.t1 PARAM */, data->simulationInfo->storedRelations[1]);
  tmp2 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[332] /* pwLine.t2 PARAM */, data->simulationInfo->storedRelations[2]);
  gout[1] = ((tmp1 && tmp2)) ? 1 : -1;
  tmp3 = LessZC(data->localData[0]->realVars[55] /* constantLoad.v variable */, 0.5, data->simulationInfo->storedRelations[3]);
  gout[2] = (tmp3) ? 1 : -1;
  tmp4 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */, data->simulationInfo->storedRelations[4]);
  tmp5 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[65] /* constantLoad.d_t PARAM */, data->simulationInfo->storedRelations[5]);
  gout[3] = ((tmp4 && tmp5)) ? 1 : -1;
  tmp6 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[353] /* pwLine3.t1 PARAM */, data->simulationInfo->storedRelations[6]);
  tmp7 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[354] /* pwLine3.t2 PARAM */, data->simulationInfo->storedRelations[7]);
  gout[4] = ((tmp6 && tmp7)) ? 1 : -1;
  tmp8 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[353] /* pwLine3.t1 PARAM */, data->simulationInfo->storedRelations[6]);
  gout[5] = (tmp8) ? 1 : -1;
  tmp9 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[354] /* pwLine3.t2 PARAM */, data->simulationInfo->storedRelations[7]);
  gout[6] = (tmp9) ? 1 : -1;
  tmp10 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[320] /* pwFault.t1 PARAM */, data->simulationInfo->storedRelations[8]);
  gout[7] = (tmp10) ? 1 : -1;
  tmp11 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[321] /* pwFault.t2 PARAM */, data->simulationInfo->storedRelations[9]);
  gout[8] = ((tmp11 && data->simulationInfo->booleanParameter[66] /* pwFault.ground PARAM */)) ? 1 : -1;
  tmp12 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[321] /* pwFault.t2 PARAM */, data->simulationInfo->storedRelations[9]);
  gout[9] = (tmp12) ? 1 : -1;
  tmp13 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[364] /* pwLine4.t1 PARAM */, data->simulationInfo->storedRelations[10]);
  tmp14 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[365] /* pwLine4.t2 PARAM */, data->simulationInfo->storedRelations[11]);
  gout[10] = ((tmp13 && tmp14)) ? 1 : -1;
  tmp15 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[364] /* pwLine4.t1 PARAM */, data->simulationInfo->storedRelations[10]);
  gout[11] = (tmp15) ? 1 : -1;
  tmp16 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[365] /* pwLine4.t2 PARAM */, data->simulationInfo->storedRelations[11]);
  gout[12] = (tmp16) ? 1 : -1;
  tmp17 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[342] /* pwLine1.t1 PARAM */, data->simulationInfo->storedRelations[12]);
  tmp18 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[343] /* pwLine1.t2 PARAM */, data->simulationInfo->storedRelations[13]);
  gout[13] = ((tmp17 && tmp18)) ? 1 : -1;
  tmp19 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[342] /* pwLine1.t1 PARAM */, data->simulationInfo->storedRelations[12]);
  gout[14] = (tmp19) ? 1 : -1;
  tmp20 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[343] /* pwLine1.t2 PARAM */, data->simulationInfo->storedRelations[13]);
  gout[15] = (tmp20) ? 1 : -1;
  tmp21 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[331] /* pwLine.t1 PARAM */, data->simulationInfo->storedRelations[1]);
  gout[16] = (tmp21) ? 1 : -1;
  tmp22 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[332] /* pwLine.t2 PARAM */, data->simulationInfo->storedRelations[2]);
  gout[17] = (tmp22) ? 1 : -1;
  tmp23 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */, data->simulationInfo->storedRelations[4]);
  gout[18] = (tmp23) ? 1 : -1;
  tmp24 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[65] /* constantLoad.d_t PARAM */, data->simulationInfo->storedRelations[5]);
  gout[19] = (tmp24) ? 1 : -1;
  tmp25 = LessZC(data->localData[0]->realVars[55] /* constantLoad.v variable */, data->simulationInfo->realParameter[35] /* constantLoad.PQBRAK PARAM */, data->simulationInfo->storedRelations[14]);
  gout[20] = (tmp25) ? 1 : -1;
  tmp26 = LessZC(data->localData[0]->realVars[73] /* eSAC2A.gain1.y variable */, data->simulationInfo->realParameter[314] /* minusInf.k PARAM */, data->simulationInfo->storedRelations[15]);
  gout[21] = (tmp26) ? 1 : -1;
  tmp27 = GreaterZC(data->simulationInfo->realParameter[316] /* plusInf.k PARAM */, data->localData[0]->realVars[74] /* eSAC2A.hV_GATE.p variable */, data->simulationInfo->storedRelations[16]);
  gout[22] = (tmp27) ? 1 : -1;
  tmp28 = LessZC(data->localData[0]->realVars[87] /* eSAC2A.rotatingExciterWithDemagnetization.feedback.y variable */, -1e-15, data->simulationInfo->storedRelations[17]);
  gout[23] = (tmp28) ? 1 : -1;
  tmp29 = GreaterZC(data->localData[0]->realVars[87] /* eSAC2A.rotatingExciterWithDemagnetization.feedback.y variable */, 1e-15, data->simulationInfo->storedRelations[18]);
  gout[24] = (tmp29) ? 1 : -1;
  tmp30 = LessZC(data->localData[0]->realVars[3] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.w STATE(1) */, data->simulationInfo->realParameter[168] /* eSAC2A.lowLim.k PARAM */, data->simulationInfo->storedRelations[19]);
  gout[25] = (tmp30) ? 1 : -1;
  tmp31 = GreaterZC(data->localData[0]->realVars[3] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.w STATE(1) */, data->localData[0]->realVars[89] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.outMax variable */, data->simulationInfo->storedRelations[20]);
  gout[26] = (tmp31) ? 1 : -1;
  tmp32 = LessEqZC(data->localData[0]->realVars[82] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */, 0.0, data->simulationInfo->storedRelations[21]);
  gout[27] = (tmp32) ? 1 : -1;
  tmp33 = GreaterZC(data->localData[0]->realVars[82] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */, 0.0, data->simulationInfo->storedRelations[22]);
  tmp34 = LessEqZC(data->localData[0]->realVars[82] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */, 0.433, data->simulationInfo->storedRelations[23]);
  gout[28] = ((tmp33 && tmp34)) ? 1 : -1;
  tmp35 = GreaterZC(data->localData[0]->realVars[82] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */, 0.433, data->simulationInfo->storedRelations[24]);
  tmp36 = LessZC(data->localData[0]->realVars[82] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */, 0.75, data->simulationInfo->storedRelations[25]);
  gout[29] = ((tmp35 && tmp36)) ? 1 : -1;
  tmp37 = GreaterEqZC(data->localData[0]->realVars[82] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */, 0.75, data->simulationInfo->storedRelations[26]);
  tmp38 = LessEqZC(data->localData[0]->realVars[82] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */, 1.0, data->simulationInfo->storedRelations[27]);
  gout[30] = ((tmp37 && tmp38)) ? 1 : -1;
  tmp39 = GreaterZC(data->localData[0]->realVars[4] /* eSAC2A.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[199] /* eSAC2A.simpleLagLim.outMax PARAM */, data->simulationInfo->storedRelations[28]);
  tmp40 = LessZC((data->simulationInfo->realParameter[195] /* eSAC2A.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[77] /* eSAC2A.imLeadLag.y variable */) - data->localData[0]->realVars[4] /* eSAC2A.simpleLagLim.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[29]);
  gout[31] = ((tmp39 && tmp40)) ? 1 : -1;
  tmp41 = LessZC(data->localData[0]->realVars[4] /* eSAC2A.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[200] /* eSAC2A.simpleLagLim.outMin PARAM */, data->simulationInfo->storedRelations[30]);
  tmp42 = GreaterZC((data->simulationInfo->realParameter[195] /* eSAC2A.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[77] /* eSAC2A.imLeadLag.y variable */) - data->localData[0]->realVars[4] /* eSAC2A.simpleLagLim.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[31]);
  gout[32] = ((tmp41 && tmp42)) ? 1 : -1;

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_ZC);
#endif

  TRACE_POP
  return 0;
}

const char *OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_relationDescription(int i)
{
  const char *res[] = {"time < eSAC2A.Vref_step.startTime",
  "time >= pwLine.t1",
  "time < pwLine.t2",
  "constantLoad.v < 0.5",
  "time >= constantLoad.t1",
  "time <= constantLoad.t1 + constantLoad.d_t",
  "time >= pwLine3.t1",
  "time < pwLine3.t2",
  "time < pwFault.t1",
  "time < pwFault.t2",
  "time >= pwLine4.t1",
  "time < pwLine4.t2",
  "time >= pwLine1.t1",
  "time < pwLine1.t2",
  "constantLoad.v < constantLoad.PQBRAK",
  "eSAC2A.gain1.y < minusInf.k",
  "plusInf.k > eSAC2A.hV_GATE.p",
  "eSAC2A.rotatingExciterWithDemagnetization.feedback.y < -1e-15",
  "eSAC2A.rotatingExciterWithDemagnetization.feedback.y > 1e-15",
  "eSAC2A.rotatingExciterWithDemagnetization.sISO.w < eSAC2A.lowLim.k",
  "eSAC2A.rotatingExciterWithDemagnetization.sISO.w > eSAC2A.rotatingExciterWithDemagnetization.sISO.outMax",
  "eSAC2A.rectifierCommutationVoltageDrop.division.y <= 0.0",
  "eSAC2A.rectifierCommutationVoltageDrop.division.y > 0.0",
  "eSAC2A.rectifierCommutationVoltageDrop.division.y <= 0.433",
  "eSAC2A.rectifierCommutationVoltageDrop.division.y > 0.433",
  "eSAC2A.rectifierCommutationVoltageDrop.division.y < 0.75",
  "eSAC2A.rectifierCommutationVoltageDrop.division.y >= 0.75",
  "eSAC2A.rectifierCommutationVoltageDrop.division.y <= 1.0",
  "eSAC2A.simpleLagLim.state > eSAC2A.simpleLagLim.outMax",
  "eSAC2A.simpleLagLim.K * eSAC2A.imLeadLag.y - eSAC2A.simpleLagLim.state < 0.0",
  "eSAC2A.simpleLagLim.state < eSAC2A.simpleLagLim.outMin",
  "eSAC2A.simpleLagLim.K * eSAC2A.imLeadLag.y - eSAC2A.simpleLagLim.state > 0.0"};
  return res[i];
}

int OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_function_updateRelations(DATA *data, threadData_t *threadData, int evalforZeroCross)
{
  TRACE_PUSH
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
  modelica_boolean tmp73;
  modelica_boolean tmp74;
  
  if(evalforZeroCross) {
    tmp43 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[124] /* eSAC2A.Vref_step.startTime PARAM */, data->simulationInfo->storedRelations[0]);
    data->simulationInfo->relations[0] = tmp43;
    tmp44 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[331] /* pwLine.t1 PARAM */, data->simulationInfo->storedRelations[1]);
    data->simulationInfo->relations[1] = tmp44;
    tmp45 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[332] /* pwLine.t2 PARAM */, data->simulationInfo->storedRelations[2]);
    data->simulationInfo->relations[2] = tmp45;
    tmp46 = LessZC(data->localData[0]->realVars[55] /* constantLoad.v variable */, 0.5, data->simulationInfo->storedRelations[3]);
    data->simulationInfo->relations[3] = tmp46;
    tmp47 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */, data->simulationInfo->storedRelations[4]);
    data->simulationInfo->relations[4] = tmp47;
    tmp48 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[65] /* constantLoad.d_t PARAM */, data->simulationInfo->storedRelations[5]);
    data->simulationInfo->relations[5] = tmp48;
    tmp49 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[353] /* pwLine3.t1 PARAM */, data->simulationInfo->storedRelations[6]);
    data->simulationInfo->relations[6] = tmp49;
    tmp50 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[354] /* pwLine3.t2 PARAM */, data->simulationInfo->storedRelations[7]);
    data->simulationInfo->relations[7] = tmp50;
    tmp51 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[320] /* pwFault.t1 PARAM */, data->simulationInfo->storedRelations[8]);
    data->simulationInfo->relations[8] = tmp51;
    tmp52 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[321] /* pwFault.t2 PARAM */, data->simulationInfo->storedRelations[9]);
    data->simulationInfo->relations[9] = tmp52;
    tmp53 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[364] /* pwLine4.t1 PARAM */, data->simulationInfo->storedRelations[10]);
    data->simulationInfo->relations[10] = tmp53;
    tmp54 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[365] /* pwLine4.t2 PARAM */, data->simulationInfo->storedRelations[11]);
    data->simulationInfo->relations[11] = tmp54;
    tmp55 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[342] /* pwLine1.t1 PARAM */, data->simulationInfo->storedRelations[12]);
    data->simulationInfo->relations[12] = tmp55;
    tmp56 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[343] /* pwLine1.t2 PARAM */, data->simulationInfo->storedRelations[13]);
    data->simulationInfo->relations[13] = tmp56;
    tmp57 = LessZC(data->localData[0]->realVars[55] /* constantLoad.v variable */, data->simulationInfo->realParameter[35] /* constantLoad.PQBRAK PARAM */, data->simulationInfo->storedRelations[14]);
    data->simulationInfo->relations[14] = tmp57;
    tmp58 = LessZC(data->localData[0]->realVars[73] /* eSAC2A.gain1.y variable */, data->simulationInfo->realParameter[314] /* minusInf.k PARAM */, data->simulationInfo->storedRelations[15]);
    data->simulationInfo->relations[15] = tmp58;
    tmp59 = GreaterZC(data->simulationInfo->realParameter[316] /* plusInf.k PARAM */, data->localData[0]->realVars[74] /* eSAC2A.hV_GATE.p variable */, data->simulationInfo->storedRelations[16]);
    data->simulationInfo->relations[16] = tmp59;
    tmp60 = LessZC(data->localData[0]->realVars[87] /* eSAC2A.rotatingExciterWithDemagnetization.feedback.y variable */, -1e-15, data->simulationInfo->storedRelations[17]);
    data->simulationInfo->relations[17] = tmp60;
    tmp61 = GreaterZC(data->localData[0]->realVars[87] /* eSAC2A.rotatingExciterWithDemagnetization.feedback.y variable */, 1e-15, data->simulationInfo->storedRelations[18]);
    data->simulationInfo->relations[18] = tmp61;
    tmp62 = LessZC(data->localData[0]->realVars[3] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.w STATE(1) */, data->simulationInfo->realParameter[168] /* eSAC2A.lowLim.k PARAM */, data->simulationInfo->storedRelations[19]);
    data->simulationInfo->relations[19] = tmp62;
    tmp63 = GreaterZC(data->localData[0]->realVars[3] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.w STATE(1) */, data->localData[0]->realVars[89] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.outMax variable */, data->simulationInfo->storedRelations[20]);
    data->simulationInfo->relations[20] = tmp63;
    tmp64 = LessEqZC(data->localData[0]->realVars[82] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */, 0.0, data->simulationInfo->storedRelations[21]);
    data->simulationInfo->relations[21] = tmp64;
    tmp65 = GreaterZC(data->localData[0]->realVars[82] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */, 0.0, data->simulationInfo->storedRelations[22]);
    data->simulationInfo->relations[22] = tmp65;
    tmp66 = LessEqZC(data->localData[0]->realVars[82] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */, 0.433, data->simulationInfo->storedRelations[23]);
    data->simulationInfo->relations[23] = tmp66;
    tmp67 = GreaterZC(data->localData[0]->realVars[82] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */, 0.433, data->simulationInfo->storedRelations[24]);
    data->simulationInfo->relations[24] = tmp67;
    tmp68 = LessZC(data->localData[0]->realVars[82] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */, 0.75, data->simulationInfo->storedRelations[25]);
    data->simulationInfo->relations[25] = tmp68;
    tmp69 = GreaterEqZC(data->localData[0]->realVars[82] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */, 0.75, data->simulationInfo->storedRelations[26]);
    data->simulationInfo->relations[26] = tmp69;
    tmp70 = LessEqZC(data->localData[0]->realVars[82] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */, 1.0, data->simulationInfo->storedRelations[27]);
    data->simulationInfo->relations[27] = tmp70;
    tmp71 = GreaterZC(data->localData[0]->realVars[4] /* eSAC2A.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[199] /* eSAC2A.simpleLagLim.outMax PARAM */, data->simulationInfo->storedRelations[28]);
    data->simulationInfo->relations[28] = tmp71;
    tmp72 = LessZC((data->simulationInfo->realParameter[195] /* eSAC2A.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[77] /* eSAC2A.imLeadLag.y variable */) - data->localData[0]->realVars[4] /* eSAC2A.simpleLagLim.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[29]);
    data->simulationInfo->relations[29] = tmp72;
    tmp73 = LessZC(data->localData[0]->realVars[4] /* eSAC2A.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[200] /* eSAC2A.simpleLagLim.outMin PARAM */, data->simulationInfo->storedRelations[30]);
    data->simulationInfo->relations[30] = tmp73;
    tmp74 = GreaterZC((data->simulationInfo->realParameter[195] /* eSAC2A.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[77] /* eSAC2A.imLeadLag.y variable */) - data->localData[0]->realVars[4] /* eSAC2A.simpleLagLim.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[31]);
    data->simulationInfo->relations[31] = tmp74;
  } else {
    data->simulationInfo->relations[0] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[124] /* eSAC2A.Vref_step.startTime PARAM */);
    data->simulationInfo->relations[1] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[331] /* pwLine.t1 PARAM */);
    data->simulationInfo->relations[2] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[332] /* pwLine.t2 PARAM */);
    data->simulationInfo->relations[3] = (data->localData[0]->realVars[55] /* constantLoad.v variable */ < 0.5);
    data->simulationInfo->relations[4] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */);
    data->simulationInfo->relations[5] = (data->localData[0]->timeValue <= data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[65] /* constantLoad.d_t PARAM */);
    data->simulationInfo->relations[6] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[353] /* pwLine3.t1 PARAM */);
    data->simulationInfo->relations[7] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[354] /* pwLine3.t2 PARAM */);
    data->simulationInfo->relations[8] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[320] /* pwFault.t1 PARAM */);
    data->simulationInfo->relations[9] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[321] /* pwFault.t2 PARAM */);
    data->simulationInfo->relations[10] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[364] /* pwLine4.t1 PARAM */);
    data->simulationInfo->relations[11] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[365] /* pwLine4.t2 PARAM */);
    data->simulationInfo->relations[12] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[342] /* pwLine1.t1 PARAM */);
    data->simulationInfo->relations[13] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[343] /* pwLine1.t2 PARAM */);
    data->simulationInfo->relations[14] = (data->localData[0]->realVars[55] /* constantLoad.v variable */ < data->simulationInfo->realParameter[35] /* constantLoad.PQBRAK PARAM */);
    data->simulationInfo->relations[15] = (data->localData[0]->realVars[73] /* eSAC2A.gain1.y variable */ < data->simulationInfo->realParameter[314] /* minusInf.k PARAM */);
    data->simulationInfo->relations[16] = (data->simulationInfo->realParameter[316] /* plusInf.k PARAM */ > data->localData[0]->realVars[74] /* eSAC2A.hV_GATE.p variable */);
    data->simulationInfo->relations[17] = (data->localData[0]->realVars[87] /* eSAC2A.rotatingExciterWithDemagnetization.feedback.y variable */ < -1e-15);
    data->simulationInfo->relations[18] = (data->localData[0]->realVars[87] /* eSAC2A.rotatingExciterWithDemagnetization.feedback.y variable */ > 1e-15);
    data->simulationInfo->relations[19] = (data->localData[0]->realVars[3] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.w STATE(1) */ < data->simulationInfo->realParameter[168] /* eSAC2A.lowLim.k PARAM */);
    data->simulationInfo->relations[20] = (data->localData[0]->realVars[3] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.w STATE(1) */ > data->localData[0]->realVars[89] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.outMax variable */);
    data->simulationInfo->relations[21] = (data->localData[0]->realVars[82] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */ <= 0.0);
    data->simulationInfo->relations[22] = (data->localData[0]->realVars[82] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */ > 0.0);
    data->simulationInfo->relations[23] = (data->localData[0]->realVars[82] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */ <= 0.433);
    data->simulationInfo->relations[24] = (data->localData[0]->realVars[82] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */ > 0.433);
    data->simulationInfo->relations[25] = (data->localData[0]->realVars[82] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */ < 0.75);
    data->simulationInfo->relations[26] = (data->localData[0]->realVars[82] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */ >= 0.75);
    data->simulationInfo->relations[27] = (data->localData[0]->realVars[82] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */ <= 1.0);
    data->simulationInfo->relations[28] = (data->localData[0]->realVars[4] /* eSAC2A.simpleLagLim.state STATE(1) */ > data->simulationInfo->realParameter[199] /* eSAC2A.simpleLagLim.outMax PARAM */);
    data->simulationInfo->relations[29] = ((data->simulationInfo->realParameter[195] /* eSAC2A.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[77] /* eSAC2A.imLeadLag.y variable */) - data->localData[0]->realVars[4] /* eSAC2A.simpleLagLim.state STATE(1) */ < 0.0);
    data->simulationInfo->relations[30] = (data->localData[0]->realVars[4] /* eSAC2A.simpleLagLim.state STATE(1) */ < data->simulationInfo->realParameter[200] /* eSAC2A.simpleLagLim.outMin PARAM */);
    data->simulationInfo->relations[31] = ((data->simulationInfo->realParameter[195] /* eSAC2A.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[77] /* eSAC2A.imLeadLag.y variable */) - data->localData[0]->realVars[4] /* eSAC2A.simpleLagLim.state STATE(1) */ > 0.0);
  }
  
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

