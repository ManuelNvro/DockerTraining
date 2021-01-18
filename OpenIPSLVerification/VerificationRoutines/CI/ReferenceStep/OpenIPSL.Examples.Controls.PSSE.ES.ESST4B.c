/* Main Simulation File */

#if defined(__cplusplus)
extern "C" {
#endif

#include "OpenIPSL.Examples.Controls.PSSE.ES.ESST4B_model.h"
#include "simulation/solver/events.h"

#define prefixedName_performSimulation OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_performSimulation
#define prefixedName_updateContinuousSystem OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_updateContinuousSystem
#include <simulation/solver/perform_simulation.c.inc>

#define prefixedName_performQSSSimulation OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_performQSSSimulation
#include <simulation/solver/perform_qss_simulation.c.inc>

/* dummy VARINFO and FILEINFO */
const FILE_INFO dummyFILE_INFO = omc_dummyFileInfo;
const VAR_INFO dummyVAR_INFO = omc_dummyVarInfo;

int OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_input_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_input_function_init(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_input_function_updateStartValues(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_inputNames(DATA *data, char ** names){
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_data_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_output_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_setc_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/*
equation index: 347
type: SIMPLE_ASSIGN
eSST4B.EFD0 = gENROU.efd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_347(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,347};
  data->localData[0]->realVars[59] /* eSST4B.EFD0 variable */ = data->simulationInfo->realParameter[257] /* gENROU.efd0 PARAM */;
  TRACE_POP
}
/*
equation index: 348
type: SIMPLE_ASSIGN
$DER.gENCLS.delta = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_348(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,348};
  data->localData[0]->realVars[16] /* der(gENCLS.delta) STATE_DER */ = 0.0;
  TRACE_POP
}
/*
equation index: 349
type: SIMPLE_ASSIGN
$DER.gENCLS.eq = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_349(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,349};
  data->localData[0]->realVars[17] /* der(gENCLS.eq) STATE_DER */ = 0.0;
  TRACE_POP
}
/*
equation index: 350
type: SIMPLE_ASSIGN
gENROU.PSIppd = gENROU.Epq * gENROU.K3d + gENROU.PSIkd * gENROU.K4d
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_350(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,350};
  data->localData[0]->realVars[97] /* gENROU.PSIppd variable */ = (data->localData[0]->realVars[7] /* gENROU.Epq STATE(1) */) * (data->simulationInfo->realParameter[205] /* gENROU.K3d PARAM */) + (data->localData[0]->realVars[8] /* gENROU.PSIkd STATE(1) */) * (data->simulationInfo->realParameter[207] /* gENROU.K4d PARAM */);
  TRACE_POP
}
/*
equation index: 351
type: SIMPLE_ASSIGN
gENROU.PSIppq = gENROU.PSIkq * gENROU.K4q + gENROU.Epd * gENROU.K3q
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_351(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,351};
  data->localData[0]->realVars[98] /* gENROU.PSIppq variable */ = (data->localData[0]->realVars[9] /* gENROU.PSIkq STATE(1) */) * (data->simulationInfo->realParameter[208] /* gENROU.K4q PARAM */) + (data->localData[0]->realVars[6] /* gENROU.Epd STATE(1) */) * (data->simulationInfo->realParameter[206] /* gENROU.K3q PARAM */);
  TRACE_POP
}
/*
equation index: 352
type: SIMPLE_ASSIGN
gENROU.PSIpp = sqrt(gENROU.PSIppd ^ 2.0 + gENROU.PSIppq ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_352(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,352};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[97] /* gENROU.PSIppd variable */;
  tmp1 = data->localData[0]->realVars[98] /* gENROU.PSIppq variable */;
  data->localData[0]->realVars[96] /* gENROU.PSIpp variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 353
type: SIMPLE_ASSIGN
$cse5 = OpenIPSL.NonElectrical.Functions.SE(gENROU.PSIpp, gENROU.S10, gENROU.S12, 1.0, 1.2)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_353(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,353};
  data->localData[0]->realVars[27] /* $cse5 variable */ = omc_OpenIPSL_NonElectrical_Functions_SE(threadData, data->localData[0]->realVars[96] /* gENROU.PSIpp variable */, data->simulationInfo->realParameter[227] /* gENROU.S10 PARAM */, data->simulationInfo->realParameter[228] /* gENROU.S12 PARAM */, 1.0, 1.2);
  TRACE_POP
}
/*
equation index: 354
type: SIMPLE_ASSIGN
$DER.gENROU.delta = gENROU.w_b * gENROU.w
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_354(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,354};
  data->localData[0]->realVars[22] /* der(gENROU.delta) STATE_DER */ = (data->simulationInfo->realParameter[271] /* gENROU.w_b PARAM */) * (data->localData[0]->realVars[11] /* gENROU.w STATE(1) */);
  TRACE_POP
}
/*
equation index: 355
type: SIMPLE_ASSIGN
eSST4B.Vref_step.y = eSST4B.Vref_step.offset + (if time < eSST4B.Vref_step.startTime then 0.0 else eSST4B.Vref_step.height)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_355(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,355};
  modelica_boolean tmp2;
  RELATIONHYSTERESIS(tmp2, data->localData[0]->timeValue, data->simulationInfo->realParameter[133] /* eSST4B.Vref_step.startTime PARAM */, 0, Less);
  data->localData[0]->realVars[69] /* eSST4B.Vref_step.y variable */ = data->simulationInfo->realParameter[132] /* eSST4B.Vref_step.offset PARAM */ + (tmp2?0.0:data->simulationInfo->realParameter[131] /* eSST4B.Vref_step.height PARAM */);
  TRACE_POP
}
/*
equation index: 356
type: SIMPLE_ASSIGN
eSST4B.DiffV.u1 = eSST4B.add7.k1 * eSST4B.Vref_step.y + eSST4B.add7.k2 * eSST4B.VoltageReference.k
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_356(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,356};
  data->localData[0]->realVars[54] /* eSST4B.DiffV.u1 variable */ = (data->simulationInfo->realParameter[146] /* eSST4B.add7.k1 PARAM */) * (data->localData[0]->realVars[69] /* eSST4B.Vref_step.y variable */) + (data->simulationInfo->realParameter[147] /* eSST4B.add7.k2 PARAM */) * (data->simulationInfo->realParameter[129] /* eSST4B.VoltageReference.k PARAM */);
  TRACE_POP
}
/*
equation index: 357
type: SIMPLE_ASSIGN
$cse7 = cos(gENROU.delta)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_357(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,357};
  data->localData[0]->realVars[29] /* $cse7 variable */ = cos(data->localData[0]->realVars[10] /* gENROU.delta STATE(1) */);
  TRACE_POP
}
/*
equation index: 358
type: SIMPLE_ASSIGN
$cse6 = sin(gENROU.delta)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_358(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,358};
  data->localData[0]->realVars[28] /* $cse6 variable */ = sin(data->localData[0]->realVars[10] /* gENROU.delta STATE(1) */);
  TRACE_POP
}
/*
equation index: 359
type: SIMPLE_ASSIGN
$cse2 = cos(gENCLS.delta)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_359(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,359};
  data->localData[0]->realVars[25] /* $cse2 variable */ = cos(data->localData[0]->realVars[4] /* gENCLS.delta STATE(1) */);
  TRACE_POP
}
/*
equation index: 360
type: SIMPLE_ASSIGN
$cse1 = sin(gENCLS.delta)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_360(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,360};
  data->localData[0]->realVars[24] /* $cse1 variable */ = sin(data->localData[0]->realVars[4] /* gENCLS.delta STATE(1) */);
  TRACE_POP
}
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_361(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_362(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_363(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_364(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_365(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_366(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_367(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_368(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_369(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_370(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_371(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_372(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_373(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_374(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_375(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_376(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_377(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_378(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_379(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_380(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_381(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_382(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_383(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_405(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_404(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_403(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_402(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_401(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_400(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_399(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_398(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_397(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_396(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_395(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_394(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_393(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_392(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_391(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_390(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_389(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_388(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_387(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_386(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_385(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_384(DATA*, threadData_t*);
/*
equation index: 451
indexNonlinear: 2
type: NONLINEAR

vars: {pwLine1.is.re, constantLoad.p.ir, pwLine1.is.im, constantLoad.p.ii, pwLine3.ir.re, pwLine4.is.re, pwLine3.is.re, pwLine3.is.im, pwLine4.is.im, pwLine3.ir.im, pwLine4.ir.im, pwLine1.ir.re, gENCLS.iq, gENCLS.id, pwLine1.vr.re, pwLine1.vr.im, gENROU.id, gENROU.iq, pwLine1.vs.im, pwLine3.vr.re, pwLine3.vr.im, pwLine1.vs.re}
eqns: {361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375, 376, 377, 378, 379, 380, 381, 382, 383, 405, 404, 403, 402, 401, 400, 399, 398, 397, 396, 395, 394, 393, 392, 391, 390, 389, 388, 387, 386, 385, 384}
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_451(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,451};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 451 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[0] = data->localData[0]->realVars[128] /* pwLine1.is.re variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[1] = data->localData[0]->realVars[52] /* constantLoad.p.ir variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[2] = data->localData[0]->realVars[127] /* pwLine1.is.im variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[3] = data->localData[0]->realVars[51] /* constantLoad.p.ii variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[4] = data->localData[0]->realVars[138] /* pwLine3.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[5] = data->localData[0]->realVars[150] /* pwLine4.is.re variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[6] = data->localData[0]->realVars[140] /* pwLine3.is.re variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[7] = data->localData[0]->realVars[139] /* pwLine3.is.im variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[8] = data->localData[0]->realVars[149] /* pwLine4.is.im variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[9] = data->localData[0]->realVars[137] /* pwLine3.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[10] = data->localData[0]->realVars[147] /* pwLine4.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[11] = data->localData[0]->realVars[126] /* pwLine1.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[12] = data->localData[0]->realVars[86] /* gENCLS.iq variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[13] = data->localData[0]->realVars[85] /* gENCLS.id variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[14] = data->localData[0]->realVars[130] /* pwLine1.vr.re variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[15] = data->localData[0]->realVars[129] /* pwLine1.vr.im variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[16] = data->localData[0]->realVars[105] /* gENROU.id variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[17] = data->localData[0]->realVars[106] /* gENROU.iq variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[18] = data->localData[0]->realVars[131] /* pwLine1.vs.im variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[19] = data->localData[0]->realVars[142] /* pwLine3.vr.re variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[20] = data->localData[0]->realVars[141] /* pwLine3.vr.im variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[21] = data->localData[0]->realVars[132] /* pwLine1.vs.re variable */;
  retValue = solve_nonlinear_system(data, threadData, 2);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,451};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 451 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[128] /* pwLine1.is.re variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[0];
  data->localData[0]->realVars[52] /* constantLoad.p.ir variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[1];
  data->localData[0]->realVars[127] /* pwLine1.is.im variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[2];
  data->localData[0]->realVars[51] /* constantLoad.p.ii variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[3];
  data->localData[0]->realVars[138] /* pwLine3.ir.re variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[4];
  data->localData[0]->realVars[150] /* pwLine4.is.re variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[5];
  data->localData[0]->realVars[140] /* pwLine3.is.re variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[6];
  data->localData[0]->realVars[139] /* pwLine3.is.im variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[7];
  data->localData[0]->realVars[149] /* pwLine4.is.im variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[8];
  data->localData[0]->realVars[137] /* pwLine3.ir.im variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[9];
  data->localData[0]->realVars[147] /* pwLine4.ir.im variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[10];
  data->localData[0]->realVars[126] /* pwLine1.ir.re variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[11];
  data->localData[0]->realVars[86] /* gENCLS.iq variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[12];
  data->localData[0]->realVars[85] /* gENCLS.id variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[13];
  data->localData[0]->realVars[130] /* pwLine1.vr.re variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[14];
  data->localData[0]->realVars[129] /* pwLine1.vr.im variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[15];
  data->localData[0]->realVars[105] /* gENROU.id variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[16];
  data->localData[0]->realVars[106] /* gENROU.iq variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[17];
  data->localData[0]->realVars[131] /* pwLine1.vs.im variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[18];
  data->localData[0]->realVars[142] /* pwLine3.vr.re variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[19];
  data->localData[0]->realVars[141] /* pwLine3.vr.im variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[20];
  data->localData[0]->realVars[132] /* pwLine1.vs.re variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[21];
  TRACE_POP
}
/*
equation index: 452
type: SIMPLE_ASSIGN
eSST4B.ECOMP = sqrt(pwLine.vs.re ^ 2.0 + pwLine.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_452(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,452};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[120] /* pwLine.vs.re variable */;
  tmp1 = data->localData[0]->realVars[119] /* pwLine.vs.im variable */;
  data->localData[0]->realVars[57] /* eSST4B.ECOMP variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 453
type: SIMPLE_ASSIGN
$DER.eSST4B.TransducerDelay.state = (eSST4B.TransducerDelay.K * eSST4B.ECOMP - eSST4B.TransducerDelay.state) / eSST4B.TransducerDelay.T_mod
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_453(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,453};
  data->localData[0]->realVars[12] /* der(eSST4B.TransducerDelay.state) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[98] /* eSST4B.TransducerDelay.K PARAM */) * (data->localData[0]->realVars[57] /* eSST4B.ECOMP variable */) - data->localData[0]->realVars[0] /* eSST4B.TransducerDelay.state STATE(1) */,data->simulationInfo->realParameter[100] /* eSST4B.TransducerDelay.T_mod PARAM */,"eSST4B.TransducerDelay.T_mod",equationIndexes);
  TRACE_POP
}
/*
equation index: 454
type: SIMPLE_ASSIGN
eSST4B.DiffV.u2 = if abs(eSST4B.TransducerDelay.T) <= 1e-15 then eSST4B.ECOMP * eSST4B.TransducerDelay.K else eSST4B.TransducerDelay.state
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_454(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,454};
  modelica_boolean tmp2;
  tmp2 = LessEq(fabs(data->simulationInfo->realParameter[99] /* eSST4B.TransducerDelay.T PARAM */),1e-15);
  data->localData[0]->realVars[55] /* eSST4B.DiffV.u2 variable */ = (tmp2?(data->localData[0]->realVars[57] /* eSST4B.ECOMP variable */) * (data->simulationInfo->realParameter[98] /* eSST4B.TransducerDelay.K PARAM */):data->localData[0]->realVars[0] /* eSST4B.TransducerDelay.state STATE(1) */);
  TRACE_POP
}
/*
equation index: 455
type: SIMPLE_ASSIGN
eSST4B.DiffV.y = eSST4B.DiffV.k1 * eSST4B.DiffV.u1 + eSST4B.DiffV.k2 * eSST4B.DiffV.u2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_455(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,455};
  data->localData[0]->realVars[56] /* eSST4B.DiffV.y variable */ = (data->simulationInfo->realParameter[76] /* eSST4B.DiffV.k1 PARAM */) * (data->localData[0]->realVars[54] /* eSST4B.DiffV.u1 variable */) + (data->simulationInfo->realParameter[77] /* eSST4B.DiffV.k2 PARAM */) * (data->localData[0]->realVars[55] /* eSST4B.DiffV.u2 variable */);
  TRACE_POP
}
/*
equation index: 456
type: SIMPLE_ASSIGN
eSST4B.Gain1.u = eSST4B.add3_1.k1 * zero.k + eSST4B.add3_1.k2 * eSST4B.DiffV.y + eSST4B.add3_1.k3 * zero.k
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_456(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,456};
  data->localData[0]->realVars[60] /* eSST4B.Gain1.u variable */ = (data->simulationInfo->realParameter[141] /* eSST4B.add3_1.k1 PARAM */) * (data->simulationInfo->realParameter[322] /* zero.k PARAM */) + (data->simulationInfo->realParameter[142] /* eSST4B.add3_1.k2 PARAM */) * (data->localData[0]->realVars[56] /* eSST4B.DiffV.y variable */) + (data->simulationInfo->realParameter[143] /* eSST4B.add3_1.k3 PARAM */) * (data->simulationInfo->realParameter[322] /* zero.k PARAM */);
  TRACE_POP
}
/*
equation index: 457
type: SIMPLE_ASSIGN
$DER.eSST4B.VR1.y = if eSST4B.VR1.y < eSST4B.VR1.outMin and eSST4B.VR1.k * eSST4B.Gain1.u < 0.0 or eSST4B.VR1.y > eSST4B.VR1.outMax and eSST4B.VR1.k * eSST4B.Gain1.u > 0.0 then 0.0 else eSST4B.VR1.k * eSST4B.Gain1.u
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_457(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,457};
  modelica_boolean tmp3;
  modelica_boolean tmp4;
  modelica_boolean tmp5;
  modelica_boolean tmp6;
  RELATIONHYSTERESIS(tmp3, data->localData[0]->realVars[3] /* eSST4B.VR1.y STATE(1) */, data->simulationInfo->realParameter[120] /* eSST4B.VR1.outMin PARAM */, 15, Less);
  RELATIONHYSTERESIS(tmp4, (data->simulationInfo->realParameter[118] /* eSST4B.VR1.k PARAM */) * (data->localData[0]->realVars[60] /* eSST4B.Gain1.u variable */), 0.0, 16, Less);
  RELATIONHYSTERESIS(tmp5, data->localData[0]->realVars[3] /* eSST4B.VR1.y STATE(1) */, data->simulationInfo->realParameter[119] /* eSST4B.VR1.outMax PARAM */, 17, Greater);
  RELATIONHYSTERESIS(tmp6, (data->simulationInfo->realParameter[118] /* eSST4B.VR1.k PARAM */) * (data->localData[0]->realVars[60] /* eSST4B.Gain1.u variable */), 0.0, 18, Greater);
  data->localData[0]->realVars[15] /* der(eSST4B.VR1.y) STATE_DER */ = (((tmp3 && tmp4) || (tmp5 && tmp6))?0.0:(data->simulationInfo->realParameter[118] /* eSST4B.VR1.k PARAM */) * (data->localData[0]->realVars[60] /* eSST4B.Gain1.u variable */));
  TRACE_POP
}
/*
equation index: 458
type: SIMPLE_ASSIGN
eSST4B.Gain1.y = eSST4B.Gain1.k * eSST4B.Gain1.u
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_458(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,458};
  data->localData[0]->realVars[61] /* eSST4B.Gain1.y variable */ = (data->simulationInfo->realParameter[80] /* eSST4B.Gain1.k PARAM */) * (data->localData[0]->realVars[60] /* eSST4B.Gain1.u variable */);
  TRACE_POP
}
/*
equation index: 459
type: SIMPLE_ASSIGN
eSST4B.add.y = eSST4B.add.k1 * eSST4B.Gain1.y + eSST4B.add.k2 * eSST4B.VR1.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_459(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,459};
  data->localData[0]->realVars[71] /* eSST4B.add.y variable */ = (data->simulationInfo->realParameter[135] /* eSST4B.add.k1 PARAM */) * (data->localData[0]->realVars[61] /* eSST4B.Gain1.y variable */) + (data->simulationInfo->realParameter[136] /* eSST4B.add.k2 PARAM */) * (data->localData[0]->realVars[3] /* eSST4B.VR1.y STATE(1) */);
  TRACE_POP
}
/*
equation index: 460
type: SIMPLE_ASSIGN
eSST4B.VA.u = smooth(0, if eSST4B.add.y > eSST4B.limiter.uMax then eSST4B.limiter.uMax else if eSST4B.add.y < eSST4B.limiter.uMin then eSST4B.limiter.uMin else eSST4B.add.y)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_460(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,460};
  modelica_boolean tmp7;
  modelica_boolean tmp8;
  modelica_boolean tmp9;
  modelica_real tmp10;
  tmp7 = Greater(data->localData[0]->realVars[71] /* eSST4B.add.y variable */,data->simulationInfo->realParameter[152] /* eSST4B.limiter.uMax PARAM */);
  tmp9 = (modelica_boolean)tmp7;
  if(tmp9)
  {
    tmp10 = data->simulationInfo->realParameter[152] /* eSST4B.limiter.uMax PARAM */;
  }
  else
  {
    tmp8 = Less(data->localData[0]->realVars[71] /* eSST4B.add.y variable */,data->simulationInfo->realParameter[153] /* eSST4B.limiter.uMin PARAM */);
    tmp10 = (tmp8?data->simulationInfo->realParameter[153] /* eSST4B.limiter.uMin PARAM */:data->localData[0]->realVars[71] /* eSST4B.add.y variable */);
  }
  data->localData[0]->realVars[64] /* eSST4B.VA.u variable */ = tmp10;
  TRACE_POP
}
/*
equation index: 461
type: SIMPLE_ASSIGN
$DER.eSST4B.VA.state = (eSST4B.VA.K * eSST4B.VA.u - eSST4B.VA.state) / eSST4B.VA.T_mod
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_461(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,461};
  data->localData[0]->realVars[13] /* der(eSST4B.VA.state) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[103] /* eSST4B.VA.K PARAM */) * (data->localData[0]->realVars[64] /* eSST4B.VA.u variable */) - data->localData[0]->realVars[1] /* eSST4B.VA.state STATE(1) */,data->simulationInfo->realParameter[105] /* eSST4B.VA.T_mod PARAM */,"eSST4B.VA.T_mod",equationIndexes);
  TRACE_POP
}
/*
equation index: 462
type: SIMPLE_ASSIGN
eSST4B.VA.y = if abs(eSST4B.VA.T) <= 1e-15 then eSST4B.VA.u * eSST4B.VA.K else eSST4B.VA.state
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_462(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,462};
  modelica_boolean tmp11;
  tmp11 = LessEq(fabs(data->simulationInfo->realParameter[104] /* eSST4B.VA.T PARAM */),1e-15);
  data->localData[0]->realVars[65] /* eSST4B.VA.y variable */ = (tmp11?(data->localData[0]->realVars[64] /* eSST4B.VA.u variable */) * (data->simulationInfo->realParameter[103] /* eSST4B.VA.K PARAM */):data->localData[0]->realVars[1] /* eSST4B.VA.state STATE(1) */);
  TRACE_POP
}
/*
equation index: 463
type: SIMPLE_ASSIGN
GEN1.V = eSST4B.ECOMP
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_463(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,463};
  data->localData[0]->realVars[34] /* GEN1.V variable */ = data->localData[0]->realVars[57] /* eSST4B.ECOMP variable */;
  TRACE_POP
}
/*
equation index: 464
type: SIMPLE_ASSIGN
gENROU.anglev = atan2(pwLine.vs.im, pwLine.vs.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_464(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,464};
  data->localData[0]->realVars[104] /* gENROU.anglev variable */ = atan2(data->localData[0]->realVars[119] /* pwLine.vs.im variable */, data->localData[0]->realVars[120] /* pwLine.vs.re variable */);
  TRACE_POP
}
/*
equation index: 465
type: SIMPLE_ASSIGN
GEN1.angle = 57.29577951308232 * gENROU.anglev
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_465(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,465};
  data->localData[0]->realVars[35] /* GEN1.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[104] /* gENROU.anglev variable */);
  TRACE_POP
}
/*
equation index: 466
type: SIMPLE_ASSIGN
$DER.gENROU.PSIkd = (gENROU.Epq + (gENROU.Xl - gENROU.Xpd) * gENROU.id - gENROU.PSIkd) / gENROU.Tppd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_466(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,466};
  data->localData[0]->realVars[20] /* der(gENROU.PSIkd) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[7] /* gENROU.Epq STATE(1) */ + (data->simulationInfo->realParameter[238] /* gENROU.Xl PARAM */ - data->simulationInfo->realParameter[239] /* gENROU.Xpd PARAM */) * (data->localData[0]->realVars[105] /* gENROU.id variable */) - data->localData[0]->realVars[8] /* gENROU.PSIkd STATE(1) */,data->simulationInfo->realParameter[231] /* gENROU.Tppd0 PARAM */,"gENROU.Tppd0",equationIndexes);
  TRACE_POP
}
/*
equation index: 467
type: SIMPLE_ASSIGN
eSST4B.XADIFD = gENROU.K1d * (gENROU.Epq + (gENROU.Xl - gENROU.Xpd) * gENROU.id - gENROU.PSIkd) + gENROU.Epq + gENROU.id * (gENROU.Xd - gENROU.Xpd) + $cse5 * gENROU.PSIppd
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_467(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,467};
  data->localData[0]->realVars[70] /* eSST4B.XADIFD variable */ = (data->simulationInfo->realParameter[201] /* gENROU.K1d PARAM */) * (data->localData[0]->realVars[7] /* gENROU.Epq STATE(1) */ + (data->simulationInfo->realParameter[238] /* gENROU.Xl PARAM */ - data->simulationInfo->realParameter[239] /* gENROU.Xpd PARAM */) * (data->localData[0]->realVars[105] /* gENROU.id variable */) - data->localData[0]->realVars[8] /* gENROU.PSIkd STATE(1) */) + data->localData[0]->realVars[7] /* gENROU.Epq STATE(1) */ + (data->localData[0]->realVars[105] /* gENROU.id variable */) * (data->simulationInfo->realParameter[237] /* gENROU.Xd PARAM */ - data->simulationInfo->realParameter[239] /* gENROU.Xpd PARAM */) + (data->localData[0]->realVars[27] /* $cse5 variable */) * (data->localData[0]->realVars[97] /* gENROU.PSIppd variable */);
  TRACE_POP
}
/*
equation index: 468
type: SIMPLE_ASSIGN
eSST4B.rectifierCommutationVoltageDrop.division.u1 = eSST4B.rectifierCommutationVoltageDrop.gain2.k * eSST4B.XADIFD
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_468(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,468};
  data->localData[0]->realVars[78] /* eSST4B.rectifierCommutationVoltageDrop.division.u1 variable */ = (data->simulationInfo->realParameter[159] /* eSST4B.rectifierCommutationVoltageDrop.gain2.k PARAM */) * (data->localData[0]->realVars[70] /* eSST4B.XADIFD variable */);
  TRACE_POP
}
/*
equation index: 469
type: SIMPLE_ASSIGN
$DER.gENROU.PSIkq = (gENROU.Epd + (gENROU.Xpq - gENROU.Xl) * gENROU.iq - gENROU.PSIkq) / gENROU.Tppq0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_469(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,469};
  data->localData[0]->realVars[21] /* der(gENROU.PSIkq) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[6] /* gENROU.Epd STATE(1) */ + (data->simulationInfo->realParameter[243] /* gENROU.Xpq PARAM */ - data->simulationInfo->realParameter[238] /* gENROU.Xl PARAM */) * (data->localData[0]->realVars[106] /* gENROU.iq variable */) - data->localData[0]->realVars[9] /* gENROU.PSIkq STATE(1) */,data->simulationInfo->realParameter[232] /* gENROU.Tppq0 PARAM */,"gENROU.Tppq0",equationIndexes);
  TRACE_POP
}
/*
equation index: 470
type: SIMPLE_ASSIGN
gENROU.Te = gENROU.PSId * gENROU.iq - gENROU.PSIq * gENROU.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_470(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,470};
  data->localData[0]->realVars[101] /* gENROU.Te variable */ = (data->localData[0]->realVars[95] /* gENROU.PSId variable */) * (data->localData[0]->realVars[106] /* gENROU.iq variable */) - ((data->localData[0]->realVars[99] /* gENROU.PSIq variable */) * (data->localData[0]->realVars[105] /* gENROU.id variable */));
  TRACE_POP
}
/*
equation index: 471
type: SIMPLE_ASSIGN
$DER.gENROU.w = 0.5 * ((gENROU.pm0 - gENROU.D * gENROU.w) / (1.0 + gENROU.w) - gENROU.Te) / gENROU.H
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_471(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,471};
  data->localData[0]->realVars[23] /* der(gENROU.w) STATE_DER */ = (0.5) * (DIVISION_SIM(DIVISION_SIM(data->simulationInfo->realParameter[264] /* gENROU.pm0 PARAM */ - ((data->simulationInfo->realParameter[188] /* gENROU.D PARAM */) * (data->localData[0]->realVars[11] /* gENROU.w STATE(1) */)),1.0 + data->localData[0]->realVars[11] /* gENROU.w STATE(1) */,"1.0 + gENROU.w",equationIndexes) - data->localData[0]->realVars[101] /* gENROU.Te variable */,data->simulationInfo->realParameter[194] /* gENROU.H PARAM */,"gENROU.H",equationIndexes));
  TRACE_POP
}
/*
equation index: 472
type: SIMPLE_ASSIGN
gENROU.XaqIlq = gENROU.K1q * (gENROU.Epd + (gENROU.Xpq - gENROU.Xl) * gENROU.iq - gENROU.PSIkq) + gENROU.Epd + gENROU.iq * (gENROU.Xpq - gENROU.Xq) + $cse5 * gENROU.PSIppq * (gENROU.Xq - gENROU.Xl) / (gENROU.Xd - gENROU.Xl)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_472(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,472};
  data->localData[0]->realVars[102] /* gENROU.XaqIlq variable */ = (data->simulationInfo->realParameter[202] /* gENROU.K1q PARAM */) * (data->localData[0]->realVars[6] /* gENROU.Epd STATE(1) */ + (data->simulationInfo->realParameter[243] /* gENROU.Xpq PARAM */ - data->simulationInfo->realParameter[238] /* gENROU.Xl PARAM */) * (data->localData[0]->realVars[106] /* gENROU.iq variable */) - data->localData[0]->realVars[9] /* gENROU.PSIkq STATE(1) */) + data->localData[0]->realVars[6] /* gENROU.Epd STATE(1) */ + (data->localData[0]->realVars[106] /* gENROU.iq variable */) * (data->simulationInfo->realParameter[243] /* gENROU.Xpq PARAM */ - data->simulationInfo->realParameter[244] /* gENROU.Xq PARAM */) + (data->localData[0]->realVars[27] /* $cse5 variable */) * ((data->localData[0]->realVars[98] /* gENROU.PSIppq variable */) * (DIVISION_SIM(data->simulationInfo->realParameter[244] /* gENROU.Xq PARAM */ - data->simulationInfo->realParameter[238] /* gENROU.Xl PARAM */,data->simulationInfo->realParameter[237] /* gENROU.Xd PARAM */ - data->simulationInfo->realParameter[238] /* gENROU.Xl PARAM */,"gENROU.Xd - gENROU.Xl",equationIndexes)));
  TRACE_POP
}
/*
equation index: 473
type: SIMPLE_ASSIGN
$DER.gENROU.Epd = (-gENROU.XaqIlq) / gENROU.Tpq0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_473(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,473};
  data->localData[0]->realVars[18] /* der(gENROU.Epd) STATE_DER */ = DIVISION_SIM((-data->localData[0]->realVars[102] /* gENROU.XaqIlq variable */),data->simulationInfo->realParameter[233] /* gENROU.Tpq0 PARAM */,"gENROU.Tpq0",equationIndexes);
  TRACE_POP
}
/*
equation index: 474
type: SIMPLE_ASSIGN
gENROU.P = pwLine.vs.im * pwLine.is.im + pwLine.vs.re * pwLine.is.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_474(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,474};
  data->localData[0]->realVars[93] /* gENROU.P variable */ = (data->localData[0]->realVars[119] /* pwLine.vs.im variable */) * (data->localData[0]->realVars[117] /* pwLine.is.im variable */) + (data->localData[0]->realVars[120] /* pwLine.vs.re variable */) * (data->localData[0]->realVars[118] /* pwLine.is.re variable */);
  TRACE_POP
}
/*
equation index: 475
type: SIMPLE_ASSIGN
gENROU.PELEC = gENROU.P / gENROU.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_475(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,475};
  data->localData[0]->realVars[94] /* gENROU.PELEC variable */ = DIVISION_SIM(data->localData[0]->realVars[93] /* gENROU.P variable */,data->simulationInfo->realParameter[187] /* gENROU.CoB PARAM */,"gENROU.CoB",equationIndexes);
  TRACE_POP
}
/*
equation index: 476
type: SIMPLE_ASSIGN
gENROU.Q = pwLine.vs.im * pwLine.is.re - pwLine.vs.re * pwLine.is.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_476(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,476};
  data->localData[0]->realVars[100] /* gENROU.Q variable */ = (data->localData[0]->realVars[119] /* pwLine.vs.im variable */) * (data->localData[0]->realVars[118] /* pwLine.is.re variable */) - ((data->localData[0]->realVars[120] /* pwLine.vs.re variable */) * (data->localData[0]->realVars[117] /* pwLine.is.im variable */));
  TRACE_POP
}
/*
equation index: 477
type: SIMPLE_ASSIGN
gENROU.I = sqrt(pwLine.is.im ^ 2.0 + pwLine.is.re ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_477(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,477};
  modelica_real tmp12;
  modelica_real tmp13;
  tmp12 = data->localData[0]->realVars[117] /* pwLine.is.im variable */;
  tmp13 = data->localData[0]->realVars[118] /* pwLine.is.re variable */;
  data->localData[0]->realVars[92] /* gENROU.I variable */ = sqrt((tmp12 * tmp12) + (tmp13 * tmp13));
  TRACE_POP
}
/*
equation index: 478
type: SIMPLE_ASSIGN
eSST4B.VE = ((eSST4B.K_P_comp.re * pwLine.vs.re + ((-eSST4B.K_I) - eSST4B.K_P_comp.re * eSST4B.X_L) * pwLine.is.im - eSST4B.K_P_comp.im * (eSST4B.X_L * pwLine.is.re + pwLine.vs.im)) ^ 2.0 + (eSST4B.K_P_comp.re * pwLine.vs.im + eSST4B.K_P_comp.im * pwLine.vs.re + (eSST4B.K_I + eSST4B.K_P_comp.re * eSST4B.X_L) * pwLine.is.re - eSST4B.K_P_comp.im * eSST4B.X_L * pwLine.is.im) ^ 2.0) ^ 0.5
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_478(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,478};
  modelica_real tmp14;
  modelica_real tmp15;
  modelica_real tmp16;
  tmp14 = (data->simulationInfo->realParameter[93] /* eSST4B.K_P_comp.re PARAM */) * (data->localData[0]->realVars[120] /* pwLine.vs.re variable */) + ((-data->simulationInfo->realParameter[86] /* eSST4B.K_I PARAM */) - ((data->simulationInfo->realParameter[93] /* eSST4B.K_P_comp.re PARAM */) * (data->simulationInfo->realParameter[134] /* eSST4B.X_L PARAM */))) * (data->localData[0]->realVars[117] /* pwLine.is.im variable */) - ((data->simulationInfo->realParameter[92] /* eSST4B.K_P_comp.im PARAM */) * ((data->simulationInfo->realParameter[134] /* eSST4B.X_L PARAM */) * (data->localData[0]->realVars[118] /* pwLine.is.re variable */) + data->localData[0]->realVars[119] /* pwLine.vs.im variable */));
  tmp15 = (data->simulationInfo->realParameter[93] /* eSST4B.K_P_comp.re PARAM */) * (data->localData[0]->realVars[119] /* pwLine.vs.im variable */) + (data->simulationInfo->realParameter[92] /* eSST4B.K_P_comp.im PARAM */) * (data->localData[0]->realVars[120] /* pwLine.vs.re variable */) + (data->simulationInfo->realParameter[86] /* eSST4B.K_I PARAM */ + (data->simulationInfo->realParameter[93] /* eSST4B.K_P_comp.re PARAM */) * (data->simulationInfo->realParameter[134] /* eSST4B.X_L PARAM */)) * (data->localData[0]->realVars[118] /* pwLine.is.re variable */) - ((data->simulationInfo->realParameter[92] /* eSST4B.K_P_comp.im PARAM */) * ((data->simulationInfo->realParameter[134] /* eSST4B.X_L PARAM */) * (data->localData[0]->realVars[117] /* pwLine.is.im variable */)));
  tmp16 = (tmp14 * tmp14) + (tmp15 * tmp15);
  if(!(tmp16 >= 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of sqrt((eSST4B.K_P_comp.re * pwLine.vs.re + ((-eSST4B.K_I) - eSST4B.K_P_comp.re * eSST4B.X_L) * pwLine.is.im - eSST4B.K_P_comp.im * (eSST4B.X_L * pwLine.is.re + pwLine.vs.im)) ^ 2.0 + (eSST4B.K_P_comp.re * pwLine.vs.im + eSST4B.K_P_comp.im * pwLine.vs.re + (eSST4B.K_I + eSST4B.K_P_comp.re * eSST4B.X_L) * pwLine.is.re - eSST4B.K_P_comp.im * eSST4B.X_L * pwLine.is.im) ^ 2.0) was %g should be >= 0", tmp16);
  }
  data->localData[0]->realVars[66] /* eSST4B.VE variable */ = sqrt(tmp16);
  TRACE_POP
}
/*
equation index: 479
type: SIMPLE_ASSIGN
eSST4B.rectifierCommutationVoltageDrop.division.y = eSST4B.rectifierCommutationVoltageDrop.division.u1 / eSST4B.VE
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_479(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,479};
  data->localData[0]->realVars[79] /* eSST4B.rectifierCommutationVoltageDrop.division.y variable */ = DIVISION_SIM(data->localData[0]->realVars[78] /* eSST4B.rectifierCommutationVoltageDrop.division.u1 variable */,data->localData[0]->realVars[66] /* eSST4B.VE variable */,"eSST4B.VE",equationIndexes);
  TRACE_POP
}
/*
equation index: 480
type: SIMPLE_ASSIGN
eSST4B.rectifierCommutationVoltageDrop.fEX.y = if eSST4B.rectifierCommutationVoltageDrop.division.y <= 0.0 then 1.0 else if eSST4B.rectifierCommutationVoltageDrop.division.y > 0.0 and eSST4B.rectifierCommutationVoltageDrop.division.y <= 0.433 then 1.0 + (-0.577) * eSST4B.rectifierCommutationVoltageDrop.division.y else if eSST4B.rectifierCommutationVoltageDrop.division.y > 0.433 and eSST4B.rectifierCommutationVoltageDrop.division.y < 0.75 then sqrt(0.75 - eSST4B.rectifierCommutationVoltageDrop.division.y ^ 2.0) else if eSST4B.rectifierCommutationVoltageDrop.division.y >= 0.75 and eSST4B.rectifierCommutationVoltageDrop.division.y <= 1.0 then 1.732 * (1.0 - eSST4B.rectifierCommutationVoltageDrop.division.y) else 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_480(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,480};
  modelica_boolean tmp17;
  modelica_boolean tmp18;
  modelica_boolean tmp19;
  modelica_boolean tmp20;
  modelica_boolean tmp21;
  modelica_real tmp22;
  modelica_real tmp23;
  modelica_boolean tmp24;
  modelica_boolean tmp25;
  modelica_boolean tmp26;
  modelica_real tmp27;
  modelica_boolean tmp28;
  modelica_real tmp29;
  modelica_boolean tmp30;
  modelica_real tmp31;
  RELATIONHYSTERESIS(tmp17, data->localData[0]->realVars[79] /* eSST4B.rectifierCommutationVoltageDrop.division.y variable */, 0.0, 19, LessEq);
  tmp30 = (modelica_boolean)tmp17;
  if(tmp30)
  {
    tmp31 = 1.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp18, data->localData[0]->realVars[79] /* eSST4B.rectifierCommutationVoltageDrop.division.y variable */, 0.0, 20, Greater);
    RELATIONHYSTERESIS(tmp19, data->localData[0]->realVars[79] /* eSST4B.rectifierCommutationVoltageDrop.division.y variable */, 0.433, 21, LessEq);
    tmp28 = (modelica_boolean)(tmp18 && tmp19);
    if(tmp28)
    {
      tmp29 = 1.0 + (-0.577) * (data->localData[0]->realVars[79] /* eSST4B.rectifierCommutationVoltageDrop.division.y variable */);
    }
    else
    {
      RELATIONHYSTERESIS(tmp20, data->localData[0]->realVars[79] /* eSST4B.rectifierCommutationVoltageDrop.division.y variable */, 0.433, 22, Greater);
      RELATIONHYSTERESIS(tmp21, data->localData[0]->realVars[79] /* eSST4B.rectifierCommutationVoltageDrop.division.y variable */, 0.75, 23, Less);
      tmp26 = (modelica_boolean)(tmp20 && tmp21);
      if(tmp26)
      {
        tmp22 = data->localData[0]->realVars[79] /* eSST4B.rectifierCommutationVoltageDrop.division.y variable */;
        tmp23 = 0.75 - ((tmp22 * tmp22));
        if(!(tmp23 >= 0.0))
        {
          FILE_INFO info = {"",0,0,0,0,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of sqrt(0.75 - eSST4B.rectifierCommutationVoltageDrop.division.y ^ 2.0) was %g should be >= 0", tmp23);
        }
        tmp27 = sqrt(tmp23);
      }
      else
      {
        RELATIONHYSTERESIS(tmp24, data->localData[0]->realVars[79] /* eSST4B.rectifierCommutationVoltageDrop.division.y variable */, 0.75, 24, GreaterEq);
        RELATIONHYSTERESIS(tmp25, data->localData[0]->realVars[79] /* eSST4B.rectifierCommutationVoltageDrop.division.y variable */, 1.0, 25, LessEq);
        tmp27 = ((tmp24 && tmp25)?(1.732) * (1.0 - data->localData[0]->realVars[79] /* eSST4B.rectifierCommutationVoltageDrop.division.y variable */):0.0);
      }
      tmp29 = tmp27;
    }
    tmp31 = tmp29;
  }
  data->localData[0]->realVars[80] /* eSST4B.rectifierCommutationVoltageDrop.fEX.y variable */ = tmp31;
  TRACE_POP
}
/*
equation index: 481
type: SIMPLE_ASSIGN
eSST4B.maxLimiter.u = eSST4B.VE * eSST4B.rectifierCommutationVoltageDrop.fEX.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_481(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,481};
  data->localData[0]->realVars[76] /* eSST4B.maxLimiter.u variable */ = (data->localData[0]->realVars[66] /* eSST4B.VE variable */) * (data->localData[0]->realVars[80] /* eSST4B.rectifierCommutationVoltageDrop.fEX.y variable */);
  TRACE_POP
}
/*
equation index: 482
type: SIMPLE_ASSIGN
eSST4B.maxLimiter.y = smooth(0, if eSST4B.maxLimiter.u > eSST4B.maxLimiter.uMax then eSST4B.maxLimiter.uMax else if eSST4B.maxLimiter.u < eSST4B.maxLimiter.uMin then eSST4B.maxLimiter.uMin else eSST4B.maxLimiter.u)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_482(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,482};
  modelica_boolean tmp32;
  modelica_boolean tmp33;
  modelica_boolean tmp34;
  modelica_real tmp35;
  tmp32 = Greater(data->localData[0]->realVars[76] /* eSST4B.maxLimiter.u variable */,data->simulationInfo->realParameter[156] /* eSST4B.maxLimiter.uMax PARAM */);
  tmp34 = (modelica_boolean)tmp32;
  if(tmp34)
  {
    tmp35 = data->simulationInfo->realParameter[156] /* eSST4B.maxLimiter.uMax PARAM */;
  }
  else
  {
    tmp33 = Less(data->localData[0]->realVars[76] /* eSST4B.maxLimiter.u variable */,data->simulationInfo->realParameter[157] /* eSST4B.maxLimiter.uMin PARAM */);
    tmp35 = (tmp33?data->simulationInfo->realParameter[157] /* eSST4B.maxLimiter.uMin PARAM */:data->localData[0]->realVars[76] /* eSST4B.maxLimiter.u variable */);
  }
  data->localData[0]->realVars[77] /* eSST4B.maxLimiter.y variable */ = tmp35;
  TRACE_POP
}
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_483(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_484(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_485(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_486(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_487(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_488(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_489(DATA*, threadData_t*);
/*
equation index: 497
indexNonlinear: 3
type: NONLINEAR

vars: {eSST4B.add2.y}
eqns: {483, 484, 485, 486, 487, 488, 489}
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_497(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,497};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 497 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[0] = data->localData[0]->realVars[73] /* eSST4B.add2.y variable */;
  retValue = solve_nonlinear_system(data, threadData, 3);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,497};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 497 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[73] /* eSST4B.add2.y variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[0];
  TRACE_POP
}
/*
equation index: 498
type: SIMPLE_ASSIGN
$DER.gENROU.Epq = (eSST4B.EFD - eSST4B.XADIFD) / gENROU.Tpd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_498(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,498};
  data->localData[0]->realVars[19] /* der(gENROU.Epq) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[58] /* eSST4B.EFD variable */ - data->localData[0]->realVars[70] /* eSST4B.XADIFD variable */,data->simulationInfo->realParameter[230] /* gENROU.Tpd0 PARAM */,"gENROU.Tpd0",equationIndexes);
  TRACE_POP
}
/*
equation index: 499
type: SIMPLE_ASSIGN
$DER.eSST4B.VM1.y = if eSST4B.VM1.y < eSST4B.VM1.outMin and eSST4B.VM1.k * eSST4B.Gain2.u < 0.0 or eSST4B.VM1.y > eSST4B.VM1.outMax and eSST4B.VM1.k * eSST4B.Gain2.u > 0.0 then 0.0 else eSST4B.VM1.k * eSST4B.Gain2.u
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_499(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,499};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_boolean tmp3;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[2] /* eSST4B.VM1.y STATE(1) */, data->simulationInfo->realParameter[113] /* eSST4B.VM1.outMin PARAM */, 27, Less);
  RELATIONHYSTERESIS(tmp1, (data->simulationInfo->realParameter[111] /* eSST4B.VM1.k PARAM */) * (data->localData[0]->realVars[62] /* eSST4B.Gain2.u variable */), 0.0, 28, Less);
  RELATIONHYSTERESIS(tmp2, data->localData[0]->realVars[2] /* eSST4B.VM1.y STATE(1) */, data->simulationInfo->realParameter[112] /* eSST4B.VM1.outMax PARAM */, 29, Greater);
  RELATIONHYSTERESIS(tmp3, (data->simulationInfo->realParameter[111] /* eSST4B.VM1.k PARAM */) * (data->localData[0]->realVars[62] /* eSST4B.Gain2.u variable */), 0.0, 30, Greater);
  data->localData[0]->realVars[14] /* der(eSST4B.VM1.y) STATE_DER */ = (((tmp0 && tmp1) || (tmp2 && tmp3))?0.0:(data->simulationInfo->realParameter[111] /* eSST4B.VM1.k PARAM */) * (data->localData[0]->realVars[62] /* eSST4B.Gain2.u variable */));
  TRACE_POP
}
/*
equation index: 500
type: SIMPLE_ASSIGN
gENROU.anglei = atan2(-pwLine.is.im, -pwLine.is.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_500(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,500};
  data->localData[0]->realVars[103] /* gENROU.anglei variable */ = atan2((-data->localData[0]->realVars[117] /* pwLine.is.im variable */), (-data->localData[0]->realVars[118] /* pwLine.is.re variable */));
  TRACE_POP
}
/*
equation index: 501
type: SIMPLE_ASSIGN
pwLine.Q12 = (pwLine.vs.im * pwLine.is.re - pwLine.vs.re * pwLine.is.im) * pwLine.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_501(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,501};
  data->localData[0]->realVars[113] /* pwLine.Q12 variable */ = ((data->localData[0]->realVars[119] /* pwLine.vs.im variable */) * (data->localData[0]->realVars[118] /* pwLine.is.re variable */) - ((data->localData[0]->realVars[120] /* pwLine.vs.re variable */) * (data->localData[0]->realVars[117] /* pwLine.is.im variable */))) * (data->simulationInfo->realParameter[281] /* pwLine.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 502
type: SIMPLE_ASSIGN
pwLine.P12 = (pwLine.vs.re * pwLine.is.re + pwLine.vs.im * pwLine.is.im) * pwLine.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_502(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,502};
  data->localData[0]->realVars[111] /* pwLine.P12 variable */ = ((data->localData[0]->realVars[120] /* pwLine.vs.re variable */) * (data->localData[0]->realVars[118] /* pwLine.is.re variable */) + (data->localData[0]->realVars[119] /* pwLine.vs.im variable */) * (data->localData[0]->realVars[117] /* pwLine.is.im variable */)) * (data->simulationInfo->realParameter[281] /* pwLine.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 503
type: SIMPLE_ASSIGN
pwLine4.P12 = (pwLine3.vr.re * pwLine4.is.re + pwLine3.vr.im * pwLine4.is.im) * pwLine4.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_503(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,503};
  data->localData[0]->realVars[143] /* pwLine4.P12 variable */ = ((data->localData[0]->realVars[142] /* pwLine3.vr.re variable */) * (data->localData[0]->realVars[150] /* pwLine4.is.re variable */) + (data->localData[0]->realVars[141] /* pwLine3.vr.im variable */) * (data->localData[0]->realVars[149] /* pwLine4.is.im variable */)) * (data->simulationInfo->realParameter[314] /* pwLine4.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 504
type: SIMPLE_ASSIGN
pwLine4.Q12 = (pwLine3.vr.im * pwLine4.is.re - pwLine3.vr.re * pwLine4.is.im) * pwLine4.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_504(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,504};
  data->localData[0]->realVars[145] /* pwLine4.Q12 variable */ = ((data->localData[0]->realVars[141] /* pwLine3.vr.im variable */) * (data->localData[0]->realVars[150] /* pwLine4.is.re variable */) - ((data->localData[0]->realVars[142] /* pwLine3.vr.re variable */) * (data->localData[0]->realVars[149] /* pwLine4.is.im variable */))) * (data->simulationInfo->realParameter[314] /* pwLine4.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 505
type: SIMPLE_ASSIGN
FAULT.V = sqrt(pwLine3.vr.re ^ 2.0 + pwLine3.vr.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_505(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,505};
  modelica_real tmp4;
  modelica_real tmp5;
  tmp4 = data->localData[0]->realVars[142] /* pwLine3.vr.re variable */;
  tmp5 = data->localData[0]->realVars[141] /* pwLine3.vr.im variable */;
  data->localData[0]->realVars[30] /* FAULT.V variable */ = sqrt((tmp4 * tmp4) + (tmp5 * tmp5));
  TRACE_POP
}
/*
equation index: 506
type: SIMPLE_ASSIGN
$cse4 = atan2(pwLine3.vr.im, pwLine3.vr.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_506(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,506};
  data->localData[0]->realVars[26] /* $cse4 variable */ = atan2(data->localData[0]->realVars[141] /* pwLine3.vr.im variable */, data->localData[0]->realVars[142] /* pwLine3.vr.re variable */);
  TRACE_POP
}
/*
equation index: 507
type: SIMPLE_ASSIGN
FAULT.angle = 57.29577951308232 * $cse4
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_507(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,507};
  data->localData[0]->realVars[31] /* FAULT.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[26] /* $cse4 variable */);
  TRACE_POP
}
/*
equation index: 508
type: SIMPLE_ASSIGN
pwLine3.P21 = ((-pwLine3.vr.re) * pwLine3.ir.re - pwLine3.vr.im * pwLine3.ir.im) * pwLine3.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_508(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,508};
  data->localData[0]->realVars[134] /* pwLine3.P21 variable */ = (((-data->localData[0]->realVars[142] /* pwLine3.vr.re variable */)) * (data->localData[0]->realVars[138] /* pwLine3.ir.re variable */) - ((data->localData[0]->realVars[141] /* pwLine3.vr.im variable */) * (data->localData[0]->realVars[137] /* pwLine3.ir.im variable */))) * (data->simulationInfo->realParameter[303] /* pwLine3.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 509
type: SIMPLE_ASSIGN
pwLine3.Q21 = (pwLine3.vr.re * pwLine3.ir.im - pwLine3.vr.im * pwLine3.ir.re) * pwLine3.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_509(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,509};
  data->localData[0]->realVars[136] /* pwLine3.Q21 variable */ = ((data->localData[0]->realVars[142] /* pwLine3.vr.re variable */) * (data->localData[0]->realVars[137] /* pwLine3.ir.im variable */) - ((data->localData[0]->realVars[141] /* pwLine3.vr.im variable */) * (data->localData[0]->realVars[138] /* pwLine3.ir.re variable */))) * (data->simulationInfo->realParameter[303] /* pwLine3.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 510
type: SIMPLE_ASSIGN
pwLine3.P12 = (pwLine1.vs.re * pwLine3.is.re + pwLine1.vs.im * pwLine3.is.im) * pwLine3.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_510(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,510};
  data->localData[0]->realVars[133] /* pwLine3.P12 variable */ = ((data->localData[0]->realVars[132] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[140] /* pwLine3.is.re variable */) + (data->localData[0]->realVars[131] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[139] /* pwLine3.is.im variable */)) * (data->simulationInfo->realParameter[303] /* pwLine3.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 511
type: SIMPLE_ASSIGN
pwLine3.Q12 = (pwLine1.vs.im * pwLine3.is.re - pwLine1.vs.re * pwLine3.is.im) * pwLine3.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_511(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,511};
  data->localData[0]->realVars[135] /* pwLine3.Q12 variable */ = ((data->localData[0]->realVars[131] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[140] /* pwLine3.is.re variable */) - ((data->localData[0]->realVars[132] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[139] /* pwLine3.is.im variable */))) * (data->simulationInfo->realParameter[303] /* pwLine3.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 512
type: SIMPLE_ASSIGN
constantLoad.angle = atan2(pwLine1.vs.im, pwLine1.vs.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_512(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,512};
  data->localData[0]->realVars[48] /* constantLoad.angle variable */ = atan2(data->localData[0]->realVars[131] /* pwLine1.vs.im variable */, data->localData[0]->realVars[132] /* pwLine1.vs.re variable */);
  TRACE_POP
}
/*
equation index: 513
type: SIMPLE_ASSIGN
LOAD.angle = 57.29577951308232 * constantLoad.angle
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_513(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,513};
  data->localData[0]->realVars[43] /* LOAD.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[48] /* constantLoad.angle variable */);
  TRACE_POP
}
/*
equation index: 514
type: SIMPLE_ASSIGN
LOAD.V = constantLoad.v
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_514(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,514};
  data->localData[0]->realVars[42] /* LOAD.V variable */ = data->localData[0]->realVars[53] /* constantLoad.v variable */;
  TRACE_POP
}
/*
equation index: 515
type: SIMPLE_ASSIGN
pwLine.Q21 = (pwLine1.vs.re * pwLine.ir.im - pwLine1.vs.im * pwLine.ir.re) * pwLine.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_515(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,515};
  data->localData[0]->realVars[114] /* pwLine.Q21 variable */ = ((data->localData[0]->realVars[132] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[115] /* pwLine.ir.im variable */) - ((data->localData[0]->realVars[131] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[116] /* pwLine.ir.re variable */))) * (data->simulationInfo->realParameter[281] /* pwLine.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 516
type: SIMPLE_ASSIGN
pwLine.P21 = ((-pwLine1.vs.re) * pwLine.ir.re - pwLine1.vs.im * pwLine.ir.im) * pwLine.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_516(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,516};
  data->localData[0]->realVars[112] /* pwLine.P21 variable */ = (((-data->localData[0]->realVars[132] /* pwLine1.vs.re variable */)) * (data->localData[0]->realVars[116] /* pwLine.ir.re variable */) - ((data->localData[0]->realVars[131] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[115] /* pwLine.ir.im variable */))) * (data->simulationInfo->realParameter[281] /* pwLine.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 517
type: SIMPLE_ASSIGN
pwLine1.P12 = (pwLine1.vs.re * pwLine1.is.re + pwLine1.vs.im * pwLine1.is.im) * pwLine1.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_517(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,517};
  data->localData[0]->realVars[121] /* pwLine1.P12 variable */ = ((data->localData[0]->realVars[132] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[128] /* pwLine1.is.re variable */) + (data->localData[0]->realVars[131] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[127] /* pwLine1.is.im variable */)) * (data->simulationInfo->realParameter[292] /* pwLine1.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 518
type: SIMPLE_ASSIGN
pwLine1.Q12 = (pwLine1.vs.im * pwLine1.is.re - pwLine1.vs.re * pwLine1.is.im) * pwLine1.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_518(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,518};
  data->localData[0]->realVars[123] /* pwLine1.Q12 variable */ = ((data->localData[0]->realVars[131] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[128] /* pwLine1.is.re variable */) - ((data->localData[0]->realVars[132] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[127] /* pwLine1.is.im variable */))) * (data->simulationInfo->realParameter[292] /* pwLine1.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 519
type: SIMPLE_ASSIGN
pwLine4.P21 = ((-pwLine1.vr.re) * pwLine4.ir.re - pwLine1.vr.im * pwLine4.ir.im) * pwLine4.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_519(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,519};
  data->localData[0]->realVars[144] /* pwLine4.P21 variable */ = (((-data->localData[0]->realVars[130] /* pwLine1.vr.re variable */)) * (data->localData[0]->realVars[148] /* pwLine4.ir.re variable */) - ((data->localData[0]->realVars[129] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[147] /* pwLine4.ir.im variable */))) * (data->simulationInfo->realParameter[314] /* pwLine4.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 520
type: SIMPLE_ASSIGN
pwLine4.Q21 = (pwLine1.vr.re * pwLine4.ir.im - pwLine1.vr.im * pwLine4.ir.re) * pwLine4.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_520(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,520};
  data->localData[0]->realVars[146] /* pwLine4.Q21 variable */ = ((data->localData[0]->realVars[130] /* pwLine1.vr.re variable */) * (data->localData[0]->realVars[147] /* pwLine4.ir.im variable */) - ((data->localData[0]->realVars[129] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[148] /* pwLine4.ir.re variable */))) * (data->simulationInfo->realParameter[314] /* pwLine4.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 521
type: SIMPLE_ASSIGN
GEN2.V = sqrt(pwLine1.vr.re ^ 2.0 + pwLine1.vr.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_521(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,521};
  modelica_real tmp6;
  modelica_real tmp7;
  tmp6 = data->localData[0]->realVars[130] /* pwLine1.vr.re variable */;
  tmp7 = data->localData[0]->realVars[129] /* pwLine1.vr.im variable */;
  data->localData[0]->realVars[38] /* GEN2.V variable */ = sqrt((tmp6 * tmp6) + (tmp7 * tmp7));
  TRACE_POP
}
/*
equation index: 522
type: SIMPLE_ASSIGN
gENCLS.V = GEN2.V
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_522(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,522};
  data->localData[0]->realVars[83] /* gENCLS.V variable */ = data->localData[0]->realVars[38] /* GEN2.V variable */;
  TRACE_POP
}
/*
equation index: 523
type: SIMPLE_ASSIGN
gENCLS.anglev = atan2(pwLine1.vr.im, pwLine1.vr.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_523(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,523};
  data->localData[0]->realVars[84] /* gENCLS.anglev variable */ = atan2(data->localData[0]->realVars[129] /* pwLine1.vr.im variable */, data->localData[0]->realVars[130] /* pwLine1.vr.re variable */);
  TRACE_POP
}
/*
equation index: 524
type: SIMPLE_ASSIGN
GEN2.angle = 57.29577951308232 * gENCLS.anglev
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_524(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,524};
  data->localData[0]->realVars[39] /* GEN2.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[84] /* gENCLS.anglev variable */);
  TRACE_POP
}
/*
equation index: 525
type: SIMPLE_ASSIGN
pwLine1.P21 = ((-pwLine1.vr.re) * pwLine1.ir.re - pwLine1.vr.im * pwLine1.ir.im) * pwLine1.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_525(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,525};
  data->localData[0]->realVars[122] /* pwLine1.P21 variable */ = (((-data->localData[0]->realVars[130] /* pwLine1.vr.re variable */)) * (data->localData[0]->realVars[126] /* pwLine1.ir.re variable */) - ((data->localData[0]->realVars[129] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[125] /* pwLine1.ir.im variable */))) * (data->simulationInfo->realParameter[292] /* pwLine1.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 526
type: SIMPLE_ASSIGN
pwLine1.Q21 = (pwLine1.vr.re * pwLine1.ir.im - pwLine1.vr.im * pwLine1.ir.re) * pwLine1.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_526(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,526};
  data->localData[0]->realVars[124] /* pwLine1.Q21 variable */ = ((data->localData[0]->realVars[130] /* pwLine1.vr.re variable */) * (data->localData[0]->realVars[125] /* pwLine1.ir.im variable */) - ((data->localData[0]->realVars[129] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[126] /* pwLine1.ir.re variable */))) * (data->simulationInfo->realParameter[292] /* pwLine1.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 527
type: SIMPLE_ASSIGN
gENCLS.P = (-pwLine1.vr.re) * gENCLS.p.ir - pwLine1.vr.im * gENCLS.p.ii
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_527(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,527};
  data->localData[0]->realVars[81] /* gENCLS.P variable */ = ((-data->localData[0]->realVars[130] /* pwLine1.vr.re variable */)) * (data->localData[0]->realVars[89] /* gENCLS.p.ir variable */) - ((data->localData[0]->realVars[129] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[88] /* gENCLS.p.ii variable */));
  TRACE_POP
}
/*
equation index: 528
type: SIMPLE_ASSIGN
gENCLS.Q = pwLine1.vr.re * gENCLS.p.ii - pwLine1.vr.im * gENCLS.p.ir
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_528(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,528};
  data->localData[0]->realVars[82] /* gENCLS.Q variable */ = (data->localData[0]->realVars[130] /* pwLine1.vr.re variable */) * (data->localData[0]->realVars[88] /* gENCLS.p.ii variable */) - ((data->localData[0]->realVars[129] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[89] /* gENCLS.p.ir variable */));
  TRACE_POP
}
/*
equation index: 531
type: ALGORITHM

  assert(eSST4B.maxLimiter.uMax >= eSST4B.maxLimiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(eSST4B.maxLimiter.uMax, 6, 0, true) + ") < uMin (=" + String(eSST4B.maxLimiter.uMin, 6, 0, true) + ")");
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_531(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,531};
  modelica_boolean tmp8;
  static const MMC_DEFSTRINGLIT(tmp9,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp10;
  static const MMC_DEFSTRINGLIT(tmp11,11,") < uMin (=");
  modelica_string tmp12;
  static int tmp13 = 0;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  {
    tmp8 = GreaterEq(data->simulationInfo->realParameter[156] /* eSST4B.maxLimiter.uMax PARAM */,data->simulationInfo->realParameter[157] /* eSST4B.maxLimiter.uMin PARAM */);
    if(!tmp8)
    {
      tmp10 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[156] /* eSST4B.maxLimiter.uMax PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp9),tmp10);
      tmpMeta[1] = stringAppend(tmpMeta[0],MMC_REFSTRINGLIT(tmp11));
      tmp12 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[157] /* eSST4B.maxLimiter.uMin PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[2] = stringAppend(tmpMeta[1],tmp12);
      tmpMeta[3] = stringAppend(tmpMeta[2],(modelica_string) mmc_strings_len1[41]);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.3/Blocks/Nonlinear.mo",22,9,23,65,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\neSST4B.maxLimiter.uMax >= eSST4B.maxLimiter.uMin", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(tmpMeta[3]));
      }
    }
  }
  TRACE_POP
}
/*
equation index: 530
type: ALGORITHM

  assert(eSST4B.limiter1.uMax >= eSST4B.limiter1.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(eSST4B.limiter1.uMax, 6, 0, true) + ") < uMin (=" + String(eSST4B.limiter1.uMin, 6, 0, true) + ")");
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_530(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,530};
  modelica_boolean tmp14;
  static const MMC_DEFSTRINGLIT(tmp15,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp16;
  static const MMC_DEFSTRINGLIT(tmp17,11,") < uMin (=");
  modelica_string tmp18;
  static int tmp19 = 0;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  {
    tmp14 = GreaterEq(data->simulationInfo->realParameter[154] /* eSST4B.limiter1.uMax PARAM */,data->simulationInfo->realParameter[155] /* eSST4B.limiter1.uMin PARAM */);
    if(!tmp14)
    {
      tmp16 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[154] /* eSST4B.limiter1.uMax PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp15),tmp16);
      tmpMeta[1] = stringAppend(tmpMeta[0],MMC_REFSTRINGLIT(tmp17));
      tmp18 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[155] /* eSST4B.limiter1.uMin PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[2] = stringAppend(tmpMeta[1],tmp18);
      tmpMeta[3] = stringAppend(tmpMeta[2],(modelica_string) mmc_strings_len1[41]);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.3/Blocks/Nonlinear.mo",22,9,23,65,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\neSST4B.limiter1.uMax >= eSST4B.limiter1.uMin", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(tmpMeta[3]));
      }
    }
  }
  TRACE_POP
}
/*
equation index: 529
type: ALGORITHM

  assert(eSST4B.limiter.uMax >= eSST4B.limiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(eSST4B.limiter.uMax, 6, 0, true) + ") < uMin (=" + String(eSST4B.limiter.uMin, 6, 0, true) + ")");
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_529(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,529};
  modelica_boolean tmp20;
  static const MMC_DEFSTRINGLIT(tmp21,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp22;
  static const MMC_DEFSTRINGLIT(tmp23,11,") < uMin (=");
  modelica_string tmp24;
  static int tmp25 = 0;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  {
    tmp20 = GreaterEq(data->simulationInfo->realParameter[152] /* eSST4B.limiter.uMax PARAM */,data->simulationInfo->realParameter[153] /* eSST4B.limiter.uMin PARAM */);
    if(!tmp20)
    {
      tmp22 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[152] /* eSST4B.limiter.uMax PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp21),tmp22);
      tmpMeta[1] = stringAppend(tmpMeta[0],MMC_REFSTRINGLIT(tmp23));
      tmp24 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[153] /* eSST4B.limiter.uMin PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[2] = stringAppend(tmpMeta[1],tmp24);
      tmpMeta[3] = stringAppend(tmpMeta[2],(modelica_string) mmc_strings_len1[41]);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.3/Blocks/Nonlinear.mo",22,9,23,65,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\neSST4B.limiter.uMax >= eSST4B.limiter.uMin", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(tmpMeta[3]));
      }
    }
  }
  TRACE_POP
}

OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_functionDAE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  int equationIndexes[1] = {0};
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_DAE);
#endif

  data->simulationInfo->needToIterate = 0;
  data->simulationInfo->discreteCall = 1;
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_functionLocalKnownVars(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_347(data, threadData);

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

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_463(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_464(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_465(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_466(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_467(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_468(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_469(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_470(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_471(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_472(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_473(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_474(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_475(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_476(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_477(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_478(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_479(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_480(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_481(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_482(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_497(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_498(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_499(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_500(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_501(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_502(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_503(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_504(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_505(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_506(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_507(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_508(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_509(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_510(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_511(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_512(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_513(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_514(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_515(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_516(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_517(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_518(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_519(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_520(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_521(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_522(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_523(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_524(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_525(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_526(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_527(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_528(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_531(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_530(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_529(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_DAE);
#endif
  TRACE_POP
  return 0;
}


int OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_functionLocalKnownVars(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
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

static void functionODE_system0(DATA *data, threadData_t *threadData)
{
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
}

int OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_functionODE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_FUNCTION_ODE);
#endif

  
  data->simulationInfo->callStatistics.functionODE++;
  
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_functionLocalKnownVars(data, threadData);
  functionODE_system0(data, threadData);

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_FUNCTION_ODE);
#endif

  TRACE_POP
  return 0;
}

/* forward the main in the simulation runtime */
extern int _main_SimulationRuntime(int argc, char**argv, DATA *data, threadData_t *threadData);

#include "OpenIPSL.Examples.Controls.PSSE.ES.ESST4B_12jac.h"
#include "OpenIPSL.Examples.Controls.PSSE.ES.ESST4B_13opt.h"

struct OpenModelicaGeneratedFunctionCallbacks OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_callback = {
   (int (*)(DATA *, threadData_t *, void *)) OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_performSimulation,
   (int (*)(DATA *, threadData_t *, void *)) OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_performQSSSimulation,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_updateContinuousSystem,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_callExternalObjectDestructors,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_initialNonLinearSystem,
   NULL,
   NULL,
   #if !defined(OMC_NO_STATESELECTION)
   OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_initializeStateSets,
   #else
   NULL,
   #endif
   OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_initializeDAEmodeData,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_functionODE,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_functionAlgebraics,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_functionDAE,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_functionLocalKnownVars,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_input_function,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_input_function_init,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_input_function_updateStartValues,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_data_function,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_output_function,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_setc_function,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_function_storeDelayed,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_updateBoundVariableAttributes,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_functionInitialEquations,
   1, /* useHomotopy - 0: local homotopy (equidistant lambda), 1: global homotopy (equidistant lambda), 2: new global homotopy approach (adaptive lambda), 3: new local homotopy approach (adaptive lambda)*/
   OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_functionInitialEquations_lambda0,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_functionRemovedInitialEquations,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_updateBoundParameters,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_checkForAsserts,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_function_ZeroCrossingsEquations,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_function_ZeroCrossings,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_function_updateRelations,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_zeroCrossingDescription,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_relationDescription,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_function_initSample,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_INDEX_JAC_A,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_INDEX_JAC_B,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_INDEX_JAC_C,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_INDEX_JAC_D,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_INDEX_JAC_F,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_initialAnalyticJacobianA,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_initialAnalyticJacobianB,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_initialAnalyticJacobianC,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_initialAnalyticJacobianD,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_initialAnalyticJacobianF,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_functionJacA_column,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_functionJacB_column,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_functionJacC_column,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_functionJacD_column,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_functionJacF_column,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_linear_model_frame,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_linear_model_datarecovery_frame,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_mayer,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_lagrange,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_pickUpBoundsForInputsInOptimization,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_setInputData,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_getTimeGrid,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_symbolicInlineSystem,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_function_initSynchronous,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_function_updateSynchronous,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_function_equationsSynchronous,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_inputNames,
   NULL,
   NULL,
   NULL,
   -1

};

#define _OMC_LIT_RESOURCE_0_name_data "Complex"
#define _OMC_LIT_RESOURCE_0_dir_data "/usr/lib/omlibrary"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_0_name,7,_OMC_LIT_RESOURCE_0_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_0_dir,18,_OMC_LIT_RESOURCE_0_dir_data);

#define _OMC_LIT_RESOURCE_1_name_data "Modelica"
#define _OMC_LIT_RESOURCE_1_dir_data "/usr/lib/omlibrary/Modelica 3.2.3"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_1_name,8,_OMC_LIT_RESOURCE_1_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_1_dir,33,_OMC_LIT_RESOURCE_1_dir_data);

#define _OMC_LIT_RESOURCE_2_name_data "ModelicaServices"
#define _OMC_LIT_RESOURCE_2_dir_data "/usr/lib/omlibrary/ModelicaServices 3.2.3"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_2_name,16,_OMC_LIT_RESOURCE_2_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_2_dir,41,_OMC_LIT_RESOURCE_2_dir_data);

#define _OMC_LIT_RESOURCE_3_name_data "OpenIPSL"
#define _OMC_LIT_RESOURCE_3_dir_data "/home/manuelnvro/dev/Gitted/DockerTraining/OpenIPSLVerification/VerificationRoutines/OpenIPSL/OpenIPSL"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_3_name,8,_OMC_LIT_RESOURCE_3_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_3_dir,102,_OMC_LIT_RESOURCE_3_dir_data);

static const MMC_DEFSTRUCTLIT(_OMC_LIT_RESOURCES,8,MMC_ARRAY_TAG) {MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_0_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_0_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_1_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_1_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_2_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_2_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_3_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_3_dir)}};
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_setupDataStruc(DATA *data, threadData_t *threadData)
{
  assertStreamPrint(threadData,0!=data, "Error while initialize Data");
  threadData->localRoots[LOCAL_ROOT_SIMULATION_DATA] = data;
  data->callback = &OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_callback;
  OpenModelica_updateUriMapping(threadData, MMC_REFSTRUCTLIT(_OMC_LIT_RESOURCES));
  data->modelData->modelName = "OpenIPSL.Examples.Controls.PSSE.ES.ESST4B";
  data->modelData->modelFilePrefix = "OpenIPSL.Examples.Controls.PSSE.ES.ESST4B";
  data->modelData->resultFileName = NULL;
  data->modelData->modelDir = "/home/manuelnvro/dev/Gitted/DockerTraining/OpenIPSLVerification/VerificationRoutines/OpenIPSL/OpenIPSL/Examples/Controls/PSSE/ES";
  data->modelData->modelGUID = "{0c337aac-8fa4-480a-a147-254c2a3806e9}";
  #if defined(OPENMODELICA_XML_FROM_FILE_AT_RUNTIME)
  data->modelData->initXMLData = NULL;
  data->modelData->modelDataXml.infoXMLData = NULL;
  #else
  #if defined(_MSC_VER) /* handle joke compilers */
  {
  /* for MSVC we encode a string like char x[] = {'a', 'b', 'c', '\0'} */
  /* because the string constant limit is 65535 bytes */
  static const char contents_init[] =
    #include "OpenIPSL.Examples.Controls.PSSE.ES.ESST4B_init.c"
    ;
  static const char contents_info[] =
    #include "OpenIPSL.Examples.Controls.PSSE.ES.ESST4B_info.c"
    ;
    data->modelData->initXMLData = contents_init;
    data->modelData->modelDataXml.infoXMLData = contents_info;
  }
  #else /* handle real compilers */
  data->modelData->initXMLData =
  #include "OpenIPSL.Examples.Controls.PSSE.ES.ESST4B_init.c"
    ;
  data->modelData->modelDataXml.infoXMLData =
  #include "OpenIPSL.Examples.Controls.PSSE.ES.ESST4B_info.c"
    ;
  #endif /* defined(_MSC_VER) */
  #endif /* defined(OPENMODELICA_XML_FROM_FILE_AT_RUNTIME) */
  data->modelData->runTestsuite = 0;
  
  data->modelData->nStates = 12;
  data->modelData->nVariablesReal = 151;
  data->modelData->nDiscreteReal = 0;
  data->modelData->nVariablesInteger = 0;
  data->modelData->nVariablesBoolean = 2;
  data->modelData->nVariablesString = 0;
  data->modelData->nParametersReal = 324;
  data->modelData->nParametersInteger = 10;
  data->modelData->nParametersBoolean = 82;
  data->modelData->nParametersString = 0;
  data->modelData->nInputVars = 0;
  data->modelData->nOutputVars = 0;
  
  data->modelData->nAliasReal = 114;
  data->modelData->nAliasInteger = 0;
  data->modelData->nAliasBoolean = 0;
  data->modelData->nAliasString = 0;
  
  data->modelData->nZeroCrossings = 30;
  data->modelData->nSamples = 0;
  data->modelData->nRelations = 33;
  data->modelData->nMathEvents = 0;
  data->modelData->nExtObjs = 0;
  
  data->modelData->modelDataXml.fileName = "OpenIPSL.Examples.Controls.PSSE.ES.ESST4B_info.json";
  data->modelData->modelDataXml.modelInfoXmlLength = 0;
  data->modelData->modelDataXml.nFunctions = 6;
  data->modelData->modelDataXml.nProfileBlocks = 0;
  data->modelData->modelDataXml.nEquations = 799;
  data->modelData->nMixedSystems = 0;
  data->modelData->nLinearSystems = 0;
  data->modelData->nNonLinearSystems = 4;
  data->modelData->nStateSets = 0;
  data->modelData->nJacobians = 7;
  data->modelData->nOptimizeConstraints = 0;
  data->modelData->nOptimizeFinalConstraints = 0;
  
  data->modelData->nDelayExpressions = 0;
  
  data->modelData->nClocks = 0;
  data->modelData->nSubClocks = 0;
  
  data->modelData->nSensitivityVars = 0;
  data->modelData->nSensitivityParamVars = 0;
  data->modelData->nSetcVars = 0;
  data->modelData->ndataReconVars = 0;
  data->modelData->linearizationDumpLanguage =
  OMC_LINEARIZE_DUMP_LANGUAGE_MODELICA;
}

static int rml_execution_failed()
{
  fflush(NULL);
  fprintf(stderr, "Execution failed!\n");
  fflush(NULL);
  return 1;
}

#if defined(threadData)
#undef threadData
#endif
/* call the simulation runtime main from our main! */
int main(int argc, char**argv)
{
  int res;
  DATA data;
  MODEL_DATA modelData;
  SIMULATION_INFO simInfo;
  data.modelData = &modelData;
  data.simulationInfo = &simInfo;
  measure_time_flag = 0;
  compiledInDAEMode = 0;
  compiledWithSymSolver = 0;
  MMC_INIT(0);
  omc_alloc_interface.init();
  {
    MMC_TRY_TOP()
  
    MMC_TRY_STACK()
  
    OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_setupDataStruc(&data, threadData);
    res = _main_SimulationRuntime(argc, argv, &data, threadData);
    
    MMC_ELSE()
    rml_execution_failed();
    fprintf(stderr, "Stack overflow detected and was not caught.\nSend us a bug report at https://trac.openmodelica.org/OpenModelica/newticket\n    Include the following trace:\n");
    printStacktraceMessages();
    fflush(NULL);
    return 1;
    MMC_CATCH_STACK()
    
    MMC_CATCH_TOP(return rml_execution_failed());
  }

  fflush(NULL);
  EXIT(res);
  return res;
}

#ifdef __cplusplus
}
#endif


