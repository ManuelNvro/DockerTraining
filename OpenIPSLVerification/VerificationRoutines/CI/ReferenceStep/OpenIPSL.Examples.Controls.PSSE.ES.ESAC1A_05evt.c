/* Events: Sample, Zero Crossings, Relations, Discrete Changes */
#include "OpenIPSL.Examples.Controls.PSSE.ES.ESAC1A_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* Initializes the raw time events of the simulation using the now
   calcualted parameters. */
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_function_initSample(DATA *data, threadData_t *threadData)
{
  long i=0;
}

const char *OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_zeroCrossingDescription(int i, int **out_EquationIndexes)
{
  static const char *res[] = {"time < eSAC1A.Vref_step.startTime",
  "time >= pwLine.t1 and time < pwLine.t2",
  "time >= pwLine3.t1 and time < pwLine3.t2",
  "constantLoad.v < 0.5",
  "time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t",
  "time >= constantLoad.t1",
  "time <= constantLoad.t1 + constantLoad.d_t",
  "constantLoad.v < constantLoad.PQBRAK",
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
  "eSAC1A.rectifierCommutationVoltageDrop.division.y <= 0.0",
  "eSAC1A.rectifierCommutationVoltageDrop.division.y > 0.0 and eSAC1A.rectifierCommutationVoltageDrop.division.y <= 0.433",
  "eSAC1A.rectifierCommutationVoltageDrop.division.y > 0.433 and eSAC1A.rectifierCommutationVoltageDrop.division.y < 0.75",
  "eSAC1A.rectifierCommutationVoltageDrop.division.y >= 0.75 and eSAC1A.rectifierCommutationVoltageDrop.division.y <= 1.0",
  "eSAC1A.hV_GATE.n1 < minusInf.k",
  "plusInf.k > eSAC1A.hV_GATE.p",
  "eSAC1A.rotatingExciterWithDemagnetization.sISO.y < eSAC1A.rotatingExciterWithDemagnetization.sISO.outMin and eSAC1A.rotatingExciterWithDemagnetization.sISO.k * eSAC1A.rotatingExciterWithDemagnetization.feedback.y < 0.0 or eSAC1A.rotatingExciterWithDemagnetization.sISO.y > eSAC1A.rotatingExciterWithDemagnetization.sISO.outMax and eSAC1A.rotatingExciterWithDemagnetization.sISO.k * eSAC1A.rotatingExciterWithDemagnetization.feedback.y > 0.0",
  "eSAC1A.simpleLagLim.state > eSAC1A.simpleLagLim.outMax and eSAC1A.simpleLagLim.K * eSAC1A.imLeadLag.y - eSAC1A.simpleLagLim.state < 0.0",
  "eSAC1A.simpleLagLim.state < eSAC1A.simpleLagLim.outMin and eSAC1A.simpleLagLim.K * eSAC1A.imLeadLag.y - eSAC1A.simpleLagLim.state > 0.0"};
  static const int occurEqs0[] = {1,365};
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
  static const int occurEqs21[] = {1,504};
  static const int occurEqs22[] = {1,504};
  static const int occurEqs23[] = {1,504};
  static const int occurEqs24[] = {1,504};
  static const int occurEqs25[] = {1,495};
  static const int occurEqs26[] = {1,496};
  static const int occurEqs27[] = {1,501};
  static const int occurEqs28[] = {1,498};
  static const int occurEqs29[] = {1,499};
  static const int *occurEqs[] = {occurEqs0,occurEqs1,occurEqs2,occurEqs3,occurEqs4,occurEqs5,occurEqs6,occurEqs7,occurEqs8,occurEqs9,occurEqs10,occurEqs11,occurEqs12,occurEqs13,occurEqs14,occurEqs15,occurEqs16,occurEqs17,occurEqs18,occurEqs19,occurEqs20,occurEqs21,occurEqs22,occurEqs23,occurEqs24,occurEqs25,occurEqs26,occurEqs27,occurEqs28,occurEqs29};
  *out_EquationIndexes = (int*) occurEqs[i];
  return res[i];
}

/* forwarded equations */
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_358(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_359(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_360(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_361(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_362(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_363(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_364(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_365(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_366(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_367(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_368(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_369(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_370(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_371(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_372(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_373(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_374(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_465(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_474(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_475(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_476(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_477(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_481(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_482(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_483(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_484(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_485(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_486(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_487(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_488(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_489(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_490(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_491(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_492(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_493(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_494(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_495(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_496(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_497(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_500(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_501(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_502(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_503(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_504(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_505(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_506(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_507(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_508(DATA* data, threadData_t *threadData);

int OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_function_ZeroCrossingsEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->callStatistics.functionZeroCrossingsEquations++;

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_358(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_359(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_360(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_361(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_362(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_363(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_364(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_365(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_366(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_367(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_368(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_369(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_370(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_371(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_372(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_373(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_374(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_465(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_474(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_475(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_476(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_477(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_481(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_482(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_483(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_484(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_485(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_486(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_487(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_488(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_489(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_490(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_491(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_492(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_493(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_494(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_495(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_496(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_497(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_500(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_501(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_502(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_503(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_504(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_505(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_506(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_507(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_508(data, threadData);
  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_function_ZeroCrossings(DATA *data, threadData_t *threadData, double *gout)
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

  tmp0 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[111] /* eSAC1A.Vref_step.startTime PARAM */, data->simulationInfo->storedRelations[0]);
  gout[0] = (tmp0) ? 1 : -1;
  tmp1 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[309] /* pwLine.t1 PARAM */, data->simulationInfo->storedRelations[1]);
  tmp2 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[310] /* pwLine.t2 PARAM */, data->simulationInfo->storedRelations[2]);
  gout[1] = ((tmp1 && tmp2)) ? 1 : -1;
  tmp3 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[331] /* pwLine3.t1 PARAM */, data->simulationInfo->storedRelations[3]);
  tmp4 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[332] /* pwLine3.t2 PARAM */, data->simulationInfo->storedRelations[4]);
  gout[2] = ((tmp3 && tmp4)) ? 1 : -1;
  tmp5 = LessZC(data->localData[0]->realVars[55] /* constantLoad.v variable */, 0.5, data->simulationInfo->storedRelations[5]);
  gout[3] = (tmp5) ? 1 : -1;
  tmp6 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */, data->simulationInfo->storedRelations[6]);
  tmp7 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[65] /* constantLoad.d_t PARAM */, data->simulationInfo->storedRelations[7]);
  gout[4] = ((tmp6 && tmp7)) ? 1 : -1;
  tmp8 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */, data->simulationInfo->storedRelations[6]);
  gout[5] = (tmp8) ? 1 : -1;
  tmp9 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[65] /* constantLoad.d_t PARAM */, data->simulationInfo->storedRelations[7]);
  gout[6] = (tmp9) ? 1 : -1;
  tmp10 = LessZC(data->localData[0]->realVars[55] /* constantLoad.v variable */, data->simulationInfo->realParameter[35] /* constantLoad.PQBRAK PARAM */, data->simulationInfo->storedRelations[8]);
  gout[7] = (tmp10) ? 1 : -1;
  tmp11 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[331] /* pwLine3.t1 PARAM */, data->simulationInfo->storedRelations[3]);
  gout[8] = (tmp11) ? 1 : -1;
  tmp12 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[332] /* pwLine3.t2 PARAM */, data->simulationInfo->storedRelations[4]);
  gout[9] = (tmp12) ? 1 : -1;
  tmp13 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[298] /* pwFault.t1 PARAM */, data->simulationInfo->storedRelations[9]);
  gout[10] = (tmp13) ? 1 : -1;
  tmp14 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[299] /* pwFault.t2 PARAM */, data->simulationInfo->storedRelations[10]);
  gout[11] = ((tmp14 && data->simulationInfo->booleanParameter[70] /* pwFault.ground PARAM */)) ? 1 : -1;
  tmp15 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[299] /* pwFault.t2 PARAM */, data->simulationInfo->storedRelations[10]);
  gout[12] = (tmp15) ? 1 : -1;
  tmp16 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[342] /* pwLine4.t1 PARAM */, data->simulationInfo->storedRelations[11]);
  tmp17 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[343] /* pwLine4.t2 PARAM */, data->simulationInfo->storedRelations[12]);
  gout[13] = ((tmp16 && tmp17)) ? 1 : -1;
  tmp18 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[342] /* pwLine4.t1 PARAM */, data->simulationInfo->storedRelations[11]);
  gout[14] = (tmp18) ? 1 : -1;
  tmp19 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[343] /* pwLine4.t2 PARAM */, data->simulationInfo->storedRelations[12]);
  gout[15] = (tmp19) ? 1 : -1;
  tmp20 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[320] /* pwLine1.t1 PARAM */, data->simulationInfo->storedRelations[13]);
  tmp21 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[321] /* pwLine1.t2 PARAM */, data->simulationInfo->storedRelations[14]);
  gout[16] = ((tmp20 && tmp21)) ? 1 : -1;
  tmp22 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[320] /* pwLine1.t1 PARAM */, data->simulationInfo->storedRelations[13]);
  gout[17] = (tmp22) ? 1 : -1;
  tmp23 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[321] /* pwLine1.t2 PARAM */, data->simulationInfo->storedRelations[14]);
  gout[18] = (tmp23) ? 1 : -1;
  tmp24 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[309] /* pwLine.t1 PARAM */, data->simulationInfo->storedRelations[1]);
  gout[19] = (tmp24) ? 1 : -1;
  tmp25 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[310] /* pwLine.t2 PARAM */, data->simulationInfo->storedRelations[2]);
  gout[20] = (tmp25) ? 1 : -1;
  tmp26 = LessEqZC(data->localData[0]->realVars[75] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */, 0.0, data->simulationInfo->storedRelations[15]);
  gout[21] = (tmp26) ? 1 : -1;
  tmp27 = GreaterZC(data->localData[0]->realVars[75] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */, 0.0, data->simulationInfo->storedRelations[16]);
  tmp28 = LessEqZC(data->localData[0]->realVars[75] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */, 0.433, data->simulationInfo->storedRelations[17]);
  gout[22] = ((tmp27 && tmp28)) ? 1 : -1;
  tmp29 = GreaterZC(data->localData[0]->realVars[75] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */, 0.433, data->simulationInfo->storedRelations[18]);
  tmp30 = LessZC(data->localData[0]->realVars[75] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */, 0.75, data->simulationInfo->storedRelations[19]);
  gout[23] = ((tmp29 && tmp30)) ? 1 : -1;
  tmp31 = GreaterEqZC(data->localData[0]->realVars[75] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */, 0.75, data->simulationInfo->storedRelations[20]);
  tmp32 = LessEqZC(data->localData[0]->realVars[75] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */, 1.0, data->simulationInfo->storedRelations[21]);
  gout[24] = ((tmp31 && tmp32)) ? 1 : -1;
  tmp33 = LessZC(data->localData[0]->realVars[67] /* eSAC1A.hV_GATE.n1 variable */, data->simulationInfo->realParameter[292] /* minusInf.k PARAM */, data->simulationInfo->storedRelations[22]);
  gout[25] = (tmp33) ? 1 : -1;
  tmp34 = GreaterZC(data->simulationInfo->realParameter[294] /* plusInf.k PARAM */, data->localData[0]->realVars[68] /* eSAC1A.hV_GATE.p variable */, data->simulationInfo->storedRelations[23]);
  gout[26] = (tmp34) ? 1 : -1;
  tmp35 = LessZC(data->localData[0]->realVars[3] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */, data->simulationInfo->realParameter[167] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.outMin PARAM */, data->simulationInfo->storedRelations[24]);
  tmp36 = LessZC((data->simulationInfo->realParameter[165] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.k PARAM */) * (data->localData[0]->realVars[80] /* eSAC1A.rotatingExciterWithDemagnetization.feedback.y variable */), 0.0, data->simulationInfo->storedRelations[25]);
  tmp37 = GreaterZC(data->localData[0]->realVars[3] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */, data->simulationInfo->realParameter[166] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.outMax PARAM */, data->simulationInfo->storedRelations[26]);
  tmp38 = GreaterZC((data->simulationInfo->realParameter[165] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.k PARAM */) * (data->localData[0]->realVars[80] /* eSAC1A.rotatingExciterWithDemagnetization.feedback.y variable */), 0.0, data->simulationInfo->storedRelations[27]);
  gout[27] = (((tmp35 && tmp36) || (tmp37 && tmp38))) ? 1 : -1;
  tmp39 = GreaterZC(data->localData[0]->realVars[4] /* eSAC1A.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[177] /* eSAC1A.simpleLagLim.outMax PARAM */, data->simulationInfo->storedRelations[28]);
  tmp40 = LessZC((data->simulationInfo->realParameter[173] /* eSAC1A.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[71] /* eSAC1A.imLeadLag.y variable */) - data->localData[0]->realVars[4] /* eSAC1A.simpleLagLim.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[29]);
  gout[28] = ((tmp39 && tmp40)) ? 1 : -1;
  tmp41 = LessZC(data->localData[0]->realVars[4] /* eSAC1A.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[178] /* eSAC1A.simpleLagLim.outMin PARAM */, data->simulationInfo->storedRelations[30]);
  tmp42 = GreaterZC((data->simulationInfo->realParameter[173] /* eSAC1A.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[71] /* eSAC1A.imLeadLag.y variable */) - data->localData[0]->realVars[4] /* eSAC1A.simpleLagLim.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[31]);
  gout[29] = ((tmp41 && tmp42)) ? 1 : -1;

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_ZC);
#endif

  TRACE_POP
  return 0;
}

const char *OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_relationDescription(int i)
{
  const char *res[] = {"time < eSAC1A.Vref_step.startTime",
  "time >= pwLine.t1",
  "time < pwLine.t2",
  "time >= pwLine3.t1",
  "time < pwLine3.t2",
  "constantLoad.v < 0.5",
  "time >= constantLoad.t1",
  "time <= constantLoad.t1 + constantLoad.d_t",
  "constantLoad.v < constantLoad.PQBRAK",
  "time < pwFault.t1",
  "time < pwFault.t2",
  "time >= pwLine4.t1",
  "time < pwLine4.t2",
  "time >= pwLine1.t1",
  "time < pwLine1.t2",
  "eSAC1A.rectifierCommutationVoltageDrop.division.y <= 0.0",
  "eSAC1A.rectifierCommutationVoltageDrop.division.y > 0.0",
  "eSAC1A.rectifierCommutationVoltageDrop.division.y <= 0.433",
  "eSAC1A.rectifierCommutationVoltageDrop.division.y > 0.433",
  "eSAC1A.rectifierCommutationVoltageDrop.division.y < 0.75",
  "eSAC1A.rectifierCommutationVoltageDrop.division.y >= 0.75",
  "eSAC1A.rectifierCommutationVoltageDrop.division.y <= 1.0",
  "eSAC1A.hV_GATE.n1 < minusInf.k",
  "plusInf.k > eSAC1A.hV_GATE.p",
  "eSAC1A.rotatingExciterWithDemagnetization.sISO.y < eSAC1A.rotatingExciterWithDemagnetization.sISO.outMin",
  "eSAC1A.rotatingExciterWithDemagnetization.sISO.k * eSAC1A.rotatingExciterWithDemagnetization.feedback.y < 0.0",
  "eSAC1A.rotatingExciterWithDemagnetization.sISO.y > eSAC1A.rotatingExciterWithDemagnetization.sISO.outMax",
  "eSAC1A.rotatingExciterWithDemagnetization.sISO.k * eSAC1A.rotatingExciterWithDemagnetization.feedback.y > 0.0",
  "eSAC1A.simpleLagLim.state > eSAC1A.simpleLagLim.outMax",
  "eSAC1A.simpleLagLim.K * eSAC1A.imLeadLag.y - eSAC1A.simpleLagLim.state < 0.0",
  "eSAC1A.simpleLagLim.state < eSAC1A.simpleLagLim.outMin",
  "eSAC1A.simpleLagLim.K * eSAC1A.imLeadLag.y - eSAC1A.simpleLagLim.state > 0.0"};
  return res[i];
}

int OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_function_updateRelations(DATA *data, threadData_t *threadData, int evalforZeroCross)
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
    tmp43 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[111] /* eSAC1A.Vref_step.startTime PARAM */, data->simulationInfo->storedRelations[0]);
    data->simulationInfo->relations[0] = tmp43;
    tmp44 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[309] /* pwLine.t1 PARAM */, data->simulationInfo->storedRelations[1]);
    data->simulationInfo->relations[1] = tmp44;
    tmp45 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[310] /* pwLine.t2 PARAM */, data->simulationInfo->storedRelations[2]);
    data->simulationInfo->relations[2] = tmp45;
    tmp46 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[331] /* pwLine3.t1 PARAM */, data->simulationInfo->storedRelations[3]);
    data->simulationInfo->relations[3] = tmp46;
    tmp47 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[332] /* pwLine3.t2 PARAM */, data->simulationInfo->storedRelations[4]);
    data->simulationInfo->relations[4] = tmp47;
    tmp48 = LessZC(data->localData[0]->realVars[55] /* constantLoad.v variable */, 0.5, data->simulationInfo->storedRelations[5]);
    data->simulationInfo->relations[5] = tmp48;
    tmp49 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */, data->simulationInfo->storedRelations[6]);
    data->simulationInfo->relations[6] = tmp49;
    tmp50 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[65] /* constantLoad.d_t PARAM */, data->simulationInfo->storedRelations[7]);
    data->simulationInfo->relations[7] = tmp50;
    tmp51 = LessZC(data->localData[0]->realVars[55] /* constantLoad.v variable */, data->simulationInfo->realParameter[35] /* constantLoad.PQBRAK PARAM */, data->simulationInfo->storedRelations[8]);
    data->simulationInfo->relations[8] = tmp51;
    tmp52 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[298] /* pwFault.t1 PARAM */, data->simulationInfo->storedRelations[9]);
    data->simulationInfo->relations[9] = tmp52;
    tmp53 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[299] /* pwFault.t2 PARAM */, data->simulationInfo->storedRelations[10]);
    data->simulationInfo->relations[10] = tmp53;
    tmp54 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[342] /* pwLine4.t1 PARAM */, data->simulationInfo->storedRelations[11]);
    data->simulationInfo->relations[11] = tmp54;
    tmp55 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[343] /* pwLine4.t2 PARAM */, data->simulationInfo->storedRelations[12]);
    data->simulationInfo->relations[12] = tmp55;
    tmp56 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[320] /* pwLine1.t1 PARAM */, data->simulationInfo->storedRelations[13]);
    data->simulationInfo->relations[13] = tmp56;
    tmp57 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[321] /* pwLine1.t2 PARAM */, data->simulationInfo->storedRelations[14]);
    data->simulationInfo->relations[14] = tmp57;
    tmp58 = LessEqZC(data->localData[0]->realVars[75] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */, 0.0, data->simulationInfo->storedRelations[15]);
    data->simulationInfo->relations[15] = tmp58;
    tmp59 = GreaterZC(data->localData[0]->realVars[75] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */, 0.0, data->simulationInfo->storedRelations[16]);
    data->simulationInfo->relations[16] = tmp59;
    tmp60 = LessEqZC(data->localData[0]->realVars[75] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */, 0.433, data->simulationInfo->storedRelations[17]);
    data->simulationInfo->relations[17] = tmp60;
    tmp61 = GreaterZC(data->localData[0]->realVars[75] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */, 0.433, data->simulationInfo->storedRelations[18]);
    data->simulationInfo->relations[18] = tmp61;
    tmp62 = LessZC(data->localData[0]->realVars[75] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */, 0.75, data->simulationInfo->storedRelations[19]);
    data->simulationInfo->relations[19] = tmp62;
    tmp63 = GreaterEqZC(data->localData[0]->realVars[75] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */, 0.75, data->simulationInfo->storedRelations[20]);
    data->simulationInfo->relations[20] = tmp63;
    tmp64 = LessEqZC(data->localData[0]->realVars[75] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */, 1.0, data->simulationInfo->storedRelations[21]);
    data->simulationInfo->relations[21] = tmp64;
    tmp65 = LessZC(data->localData[0]->realVars[67] /* eSAC1A.hV_GATE.n1 variable */, data->simulationInfo->realParameter[292] /* minusInf.k PARAM */, data->simulationInfo->storedRelations[22]);
    data->simulationInfo->relations[22] = tmp65;
    tmp66 = GreaterZC(data->simulationInfo->realParameter[294] /* plusInf.k PARAM */, data->localData[0]->realVars[68] /* eSAC1A.hV_GATE.p variable */, data->simulationInfo->storedRelations[23]);
    data->simulationInfo->relations[23] = tmp66;
    tmp67 = LessZC(data->localData[0]->realVars[3] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */, data->simulationInfo->realParameter[167] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.outMin PARAM */, data->simulationInfo->storedRelations[24]);
    data->simulationInfo->relations[24] = tmp67;
    tmp68 = LessZC((data->simulationInfo->realParameter[165] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.k PARAM */) * (data->localData[0]->realVars[80] /* eSAC1A.rotatingExciterWithDemagnetization.feedback.y variable */), 0.0, data->simulationInfo->storedRelations[25]);
    data->simulationInfo->relations[25] = tmp68;
    tmp69 = GreaterZC(data->localData[0]->realVars[3] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */, data->simulationInfo->realParameter[166] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.outMax PARAM */, data->simulationInfo->storedRelations[26]);
    data->simulationInfo->relations[26] = tmp69;
    tmp70 = GreaterZC((data->simulationInfo->realParameter[165] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.k PARAM */) * (data->localData[0]->realVars[80] /* eSAC1A.rotatingExciterWithDemagnetization.feedback.y variable */), 0.0, data->simulationInfo->storedRelations[27]);
    data->simulationInfo->relations[27] = tmp70;
    tmp71 = GreaterZC(data->localData[0]->realVars[4] /* eSAC1A.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[177] /* eSAC1A.simpleLagLim.outMax PARAM */, data->simulationInfo->storedRelations[28]);
    data->simulationInfo->relations[28] = tmp71;
    tmp72 = LessZC((data->simulationInfo->realParameter[173] /* eSAC1A.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[71] /* eSAC1A.imLeadLag.y variable */) - data->localData[0]->realVars[4] /* eSAC1A.simpleLagLim.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[29]);
    data->simulationInfo->relations[29] = tmp72;
    tmp73 = LessZC(data->localData[0]->realVars[4] /* eSAC1A.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[178] /* eSAC1A.simpleLagLim.outMin PARAM */, data->simulationInfo->storedRelations[30]);
    data->simulationInfo->relations[30] = tmp73;
    tmp74 = GreaterZC((data->simulationInfo->realParameter[173] /* eSAC1A.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[71] /* eSAC1A.imLeadLag.y variable */) - data->localData[0]->realVars[4] /* eSAC1A.simpleLagLim.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[31]);
    data->simulationInfo->relations[31] = tmp74;
  } else {
    data->simulationInfo->relations[0] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[111] /* eSAC1A.Vref_step.startTime PARAM */);
    data->simulationInfo->relations[1] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[309] /* pwLine.t1 PARAM */);
    data->simulationInfo->relations[2] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[310] /* pwLine.t2 PARAM */);
    data->simulationInfo->relations[3] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[331] /* pwLine3.t1 PARAM */);
    data->simulationInfo->relations[4] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[332] /* pwLine3.t2 PARAM */);
    data->simulationInfo->relations[5] = (data->localData[0]->realVars[55] /* constantLoad.v variable */ < 0.5);
    data->simulationInfo->relations[6] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */);
    data->simulationInfo->relations[7] = (data->localData[0]->timeValue <= data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[65] /* constantLoad.d_t PARAM */);
    data->simulationInfo->relations[8] = (data->localData[0]->realVars[55] /* constantLoad.v variable */ < data->simulationInfo->realParameter[35] /* constantLoad.PQBRAK PARAM */);
    data->simulationInfo->relations[9] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[298] /* pwFault.t1 PARAM */);
    data->simulationInfo->relations[10] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[299] /* pwFault.t2 PARAM */);
    data->simulationInfo->relations[11] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[342] /* pwLine4.t1 PARAM */);
    data->simulationInfo->relations[12] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[343] /* pwLine4.t2 PARAM */);
    data->simulationInfo->relations[13] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[320] /* pwLine1.t1 PARAM */);
    data->simulationInfo->relations[14] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[321] /* pwLine1.t2 PARAM */);
    data->simulationInfo->relations[15] = (data->localData[0]->realVars[75] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */ <= 0.0);
    data->simulationInfo->relations[16] = (data->localData[0]->realVars[75] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */ > 0.0);
    data->simulationInfo->relations[17] = (data->localData[0]->realVars[75] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */ <= 0.433);
    data->simulationInfo->relations[18] = (data->localData[0]->realVars[75] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */ > 0.433);
    data->simulationInfo->relations[19] = (data->localData[0]->realVars[75] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */ < 0.75);
    data->simulationInfo->relations[20] = (data->localData[0]->realVars[75] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */ >= 0.75);
    data->simulationInfo->relations[21] = (data->localData[0]->realVars[75] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */ <= 1.0);
    data->simulationInfo->relations[22] = (data->localData[0]->realVars[67] /* eSAC1A.hV_GATE.n1 variable */ < data->simulationInfo->realParameter[292] /* minusInf.k PARAM */);
    data->simulationInfo->relations[23] = (data->simulationInfo->realParameter[294] /* plusInf.k PARAM */ > data->localData[0]->realVars[68] /* eSAC1A.hV_GATE.p variable */);
    data->simulationInfo->relations[24] = (data->localData[0]->realVars[3] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */ < data->simulationInfo->realParameter[167] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.outMin PARAM */);
    data->simulationInfo->relations[25] = ((data->simulationInfo->realParameter[165] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.k PARAM */) * (data->localData[0]->realVars[80] /* eSAC1A.rotatingExciterWithDemagnetization.feedback.y variable */) < 0.0);
    data->simulationInfo->relations[26] = (data->localData[0]->realVars[3] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */ > data->simulationInfo->realParameter[166] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.outMax PARAM */);
    data->simulationInfo->relations[27] = ((data->simulationInfo->realParameter[165] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.k PARAM */) * (data->localData[0]->realVars[80] /* eSAC1A.rotatingExciterWithDemagnetization.feedback.y variable */) > 0.0);
    data->simulationInfo->relations[28] = (data->localData[0]->realVars[4] /* eSAC1A.simpleLagLim.state STATE(1) */ > data->simulationInfo->realParameter[177] /* eSAC1A.simpleLagLim.outMax PARAM */);
    data->simulationInfo->relations[29] = ((data->simulationInfo->realParameter[173] /* eSAC1A.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[71] /* eSAC1A.imLeadLag.y variable */) - data->localData[0]->realVars[4] /* eSAC1A.simpleLagLim.state STATE(1) */ < 0.0);
    data->simulationInfo->relations[30] = (data->localData[0]->realVars[4] /* eSAC1A.simpleLagLim.state STATE(1) */ < data->simulationInfo->realParameter[178] /* eSAC1A.simpleLagLim.outMin PARAM */);
    data->simulationInfo->relations[31] = ((data->simulationInfo->realParameter[173] /* eSAC1A.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[71] /* eSAC1A.imLeadLag.y variable */) - data->localData[0]->realVars[4] /* eSAC1A.simpleLagLim.state STATE(1) */ > 0.0);
  }
  
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

