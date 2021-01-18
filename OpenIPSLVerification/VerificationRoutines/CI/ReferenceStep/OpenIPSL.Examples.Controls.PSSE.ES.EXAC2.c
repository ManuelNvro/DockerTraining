/* Main Simulation File */

#if defined(__cplusplus)
extern "C" {
#endif

#include "OpenIPSL.Examples.Controls.PSSE.ES.EXAC2_model.h"
#include "simulation/solver/events.h"

#define prefixedName_performSimulation OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_performSimulation
#define prefixedName_updateContinuousSystem OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_updateContinuousSystem
#include <simulation/solver/perform_simulation.c.inc>

#define prefixedName_performQSSSimulation OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_performQSSSimulation
#include <simulation/solver/perform_qss_simulation.c.inc>

/* dummy VARINFO and FILEINFO */
const FILE_INFO dummyFILE_INFO = omc_dummyFileInfo;
const VAR_INFO dummyVAR_INFO = omc_dummyVarInfo;

int OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_input_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_input_function_init(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_input_function_updateStartValues(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_inputNames(DATA *data, char ** names){
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_data_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_output_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_setc_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/*
equation index: 369
type: SIMPLE_ASSIGN
eXAC2.EFD0 = gENROE.efd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_369(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,369};
  data->localData[0]->realVars[64] /* eXAC2.EFD0 variable */ = data->simulationInfo->realParameter[295] /* gENROE.efd0 PARAM */;
  TRACE_POP
}
/*
equation index: 370
type: SIMPLE_ASSIGN
$DER.gENCLS.delta = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_370(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,370};
  data->localData[0]->realVars[18] /* der(gENCLS.delta) STATE_DER */ = 0.0;
  TRACE_POP
}
/*
equation index: 371
type: SIMPLE_ASSIGN
$DER.gENCLS.eq = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_371(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,371};
  data->localData[0]->realVars[19] /* der(gENCLS.eq) STATE_DER */ = 0.0;
  TRACE_POP
}
/*
equation index: 372
type: SIMPLE_ASSIGN
gENROE.PSIppd = gENROE.Epq * gENROE.K3d + gENROE.PSIkd * gENROE.K4d
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_372(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,372};
  data->localData[0]->realVars[103] /* gENROE.PSIppd variable */ = (data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */) * (data->simulationInfo->realParameter[243] /* gENROE.K3d PARAM */) + (data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */) * (data->simulationInfo->realParameter[245] /* gENROE.K4d PARAM */);
  TRACE_POP
}
/*
equation index: 373
type: SIMPLE_ASSIGN
gENROE.PSIppq = gENROE.PSIkq * gENROE.K4q + gENROE.Epd * gENROE.K3q
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_373(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,373};
  data->localData[0]->realVars[104] /* gENROE.PSIppq variable */ = (data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */) * (data->simulationInfo->realParameter[246] /* gENROE.K4q PARAM */) + (data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */) * (data->simulationInfo->realParameter[244] /* gENROE.K3q PARAM */);
  TRACE_POP
}
/*
equation index: 374
type: SIMPLE_ASSIGN
gENROE.PSIpp = sqrt(gENROE.PSIppd ^ 2.0 + gENROE.PSIppq ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_374(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,374};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[103] /* gENROE.PSIppd variable */;
  tmp1 = data->localData[0]->realVars[104] /* gENROE.PSIppq variable */;
  data->localData[0]->realVars[102] /* gENROE.PSIpp variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 375
type: SIMPLE_ASSIGN
$cse5 = OpenIPSL.NonElectrical.Functions.SE_exp(gENROE.PSIpp, gENROE.S10, gENROE.S12, 1.0, 1.2)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_375(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,375};
  data->localData[0]->realVars[29] /* $cse5 variable */ = omc_OpenIPSL_NonElectrical_Functions_SE__exp(threadData, data->localData[0]->realVars[102] /* gENROE.PSIpp variable */, data->simulationInfo->realParameter[265] /* gENROE.S10 PARAM */, data->simulationInfo->realParameter[266] /* gENROE.S12 PARAM */, 1.0, 1.2);
  TRACE_POP
}
/*
equation index: 376
type: SIMPLE_ASSIGN
$DER.gENROE.delta = gENROE.w_b * gENROE.w
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_376(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,376};
  data->localData[0]->realVars[24] /* der(gENROE.delta) STATE_DER */ = (data->simulationInfo->realParameter[309] /* gENROE.w_b PARAM */) * (data->localData[0]->realVars[12] /* gENROE.w STATE(1) */);
  TRACE_POP
}
/*
equation index: 377
type: SIMPLE_ASSIGN
eXAC2.Vref_step.y = eXAC2.Vref_step.offset + (if time < eXAC2.Vref_step.startTime then 0.0 else eXAC2.Vref_step.height)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_377(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,377};
  modelica_boolean tmp2;
  RELATIONHYSTERESIS(tmp2, data->localData[0]->timeValue, data->simulationInfo->realParameter[125] /* eXAC2.Vref_step.startTime PARAM */, 0, Less);
  data->localData[0]->realVars[65] /* eXAC2.Vref_step.y variable */ = data->simulationInfo->realParameter[124] /* eXAC2.Vref_step.offset PARAM */ + (tmp2?0.0:data->simulationInfo->realParameter[123] /* eXAC2.Vref_step.height PARAM */);
  TRACE_POP
}
/*
equation index: 378
type: SIMPLE_ASSIGN
eXAC2.DiffV.u1 = eXAC2.add7.k1 * eXAC2.Vref_step.y + eXAC2.add7.k2 * eXAC2.VoltageReference.k
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_378(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,378};
  data->localData[0]->realVars[56] /* eXAC2.DiffV.u1 variable */ = (data->simulationInfo->realParameter[138] /* eXAC2.add7.k1 PARAM */) * (data->localData[0]->realVars[65] /* eXAC2.Vref_step.y variable */) + (data->simulationInfo->realParameter[139] /* eXAC2.add7.k2 PARAM */) * (data->simulationInfo->realParameter[119] /* eXAC2.VoltageReference.k PARAM */);
  TRACE_POP
}
/*
equation index: 379
type: SIMPLE_ASSIGN
eXAC2.leadLag.TF.x[1] = eXAC2.leadLag.TF.x_scaled[1] / eXAC2.leadLag.TF.a_end
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_379(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,379};
  data->localData[0]->realVars[76] /* eXAC2.leadLag.TF.x[1] variable */ = DIVISION_SIM(data->localData[0]->realVars[3] /* eXAC2.leadLag.TF.x_scaled[1] STATE(1) */,data->simulationInfo->realParameter[162] /* eXAC2.leadLag.TF.a_end PARAM */,"eXAC2.leadLag.TF.a_end",equationIndexes);
  TRACE_POP
}
/*
equation index: 380
type: SIMPLE_ASSIGN
eXAC2.rotatingExciterWithDemagnetizationLimited.Sum.u2 = eXAC2.rotatingExciterWithDemagnetizationLimited.gain.k * eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_380(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,380};
  data->localData[0]->realVars[83] /* eXAC2.rotatingExciterWithDemagnetizationLimited.Sum.u2 variable */ = (data->simulationInfo->realParameter[189] /* eXAC2.rotatingExciterWithDemagnetizationLimited.gain.k PARAM */) * (data->localData[0]->realVars[4] /* eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.y STATE(1) */);
  TRACE_POP
}
/*
equation index: 381
type: SIMPLE_ASSIGN
eXAC2.rotatingExciterWithDemagnetizationLimited.VE.u2 = OpenIPSL.NonElectrical.Functions.SE(eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.y, eXAC2.rotatingExciterWithDemagnetizationLimited.se1.SE1, eXAC2.rotatingExciterWithDemagnetizationLimited.se1.SE2, eXAC2.rotatingExciterWithDemagnetizationLimited.se1.E1, eXAC2.rotatingExciterWithDemagnetizationLimited.se1.E2)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_381(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,381};
  data->localData[0]->realVars[84] /* eXAC2.rotatingExciterWithDemagnetizationLimited.VE.u2 variable */ = omc_OpenIPSL_NonElectrical_Functions_SE(threadData, data->localData[0]->realVars[4] /* eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.y STATE(1) */, data->simulationInfo->realParameter[196] /* eXAC2.rotatingExciterWithDemagnetizationLimited.se1.SE1 PARAM */, data->simulationInfo->realParameter[197] /* eXAC2.rotatingExciterWithDemagnetizationLimited.se1.SE2 PARAM */, data->simulationInfo->realParameter[194] /* eXAC2.rotatingExciterWithDemagnetizationLimited.se1.E1 PARAM */, data->simulationInfo->realParameter[195] /* eXAC2.rotatingExciterWithDemagnetizationLimited.se1.E2 PARAM */);
  TRACE_POP
}
/*
equation index: 382
type: SIMPLE_ASSIGN
eXAC2.rotatingExciterWithDemagnetizationLimited.Sum.u1 = eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.y * eXAC2.rotatingExciterWithDemagnetizationLimited.VE.u2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_382(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,382};
  data->localData[0]->realVars[82] /* eXAC2.rotatingExciterWithDemagnetizationLimited.Sum.u1 variable */ = (data->localData[0]->realVars[4] /* eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.y STATE(1) */) * (data->localData[0]->realVars[84] /* eXAC2.rotatingExciterWithDemagnetizationLimited.VE.u2 variable */);
  TRACE_POP
}
/*
equation index: 383
type: SIMPLE_ASSIGN
$cse7 = cos(gENROE.delta)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_383(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,383};
  data->localData[0]->realVars[31] /* $cse7 variable */ = cos(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */);
  TRACE_POP
}
/*
equation index: 384
type: SIMPLE_ASSIGN
$cse6 = sin(gENROE.delta)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_384(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,384};
  data->localData[0]->realVars[30] /* $cse6 variable */ = sin(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */);
  TRACE_POP
}
/*
equation index: 385
type: SIMPLE_ASSIGN
$cse2 = cos(gENCLS.delta)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_385(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,385};
  data->localData[0]->realVars[27] /* $cse2 variable */ = cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */);
  TRACE_POP
}
/*
equation index: 386
type: SIMPLE_ASSIGN
$cse1 = sin(gENCLS.delta)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_386(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,386};
  data->localData[0]->realVars[26] /* $cse1 variable */ = sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */);
  TRACE_POP
}
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_387(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_388(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_389(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_390(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_391(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_392(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_393(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_394(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_395(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_396(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_397(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_398(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_399(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_400(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_401(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_402(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_403(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_404(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_405(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_406(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_407(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_408(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_409(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_431(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_430(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_429(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_428(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_427(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_426(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_425(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_424(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_423(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_422(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_421(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_420(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_419(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_418(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_417(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_416(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_415(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_414(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_413(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_412(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_411(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_410(DATA*, threadData_t*);
/*
equation index: 477
indexNonlinear: 4
type: NONLINEAR

vars: {constantLoad.p.ii, pwLine1.is.im, pwLine.ir.re, pwLine1.is.re, pwLine4.is.re, pwLine3.ir.re, pwLine4.is.im, pwLine3.ir.im, pwLine3.is.re, pwLine3.is.im, pwLine1.ir.im, pwLine4.ir.re, gENCLS.iq, gENCLS.id, pwLine1.vr.re, pwLine1.vr.im, gENROE.iq, gENROE.id, pwLine1.vs.im, pwLine1.vs.re, pwLine3.vr.re, pwLine3.vr.im}
eqns: {387, 388, 389, 390, 391, 392, 393, 394, 395, 396, 397, 398, 399, 400, 401, 402, 403, 404, 405, 406, 407, 408, 409, 431, 430, 429, 428, 427, 426, 425, 424, 423, 422, 421, 420, 419, 418, 417, 416, 415, 414, 413, 412, 411, 410}
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_477(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,477};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 477 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[0] = data->localData[0]->realVars[53] /* constantLoad.p.ii variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[1] = data->localData[0]->realVars[133] /* pwLine1.is.im variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[2] = data->localData[0]->realVars[122] /* pwLine.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[3] = data->localData[0]->realVars[134] /* pwLine1.is.re variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[4] = data->localData[0]->realVars[156] /* pwLine4.is.re variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[5] = data->localData[0]->realVars[144] /* pwLine3.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[6] = data->localData[0]->realVars[155] /* pwLine4.is.im variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[7] = data->localData[0]->realVars[143] /* pwLine3.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[8] = data->localData[0]->realVars[146] /* pwLine3.is.re variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[9] = data->localData[0]->realVars[145] /* pwLine3.is.im variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[10] = data->localData[0]->realVars[131] /* pwLine1.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[11] = data->localData[0]->realVars[154] /* pwLine4.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[12] = data->localData[0]->realVars[92] /* gENCLS.iq variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[13] = data->localData[0]->realVars[91] /* gENCLS.id variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[14] = data->localData[0]->realVars[136] /* pwLine1.vr.re variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[15] = data->localData[0]->realVars[135] /* pwLine1.vr.im variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[16] = data->localData[0]->realVars[112] /* gENROE.iq variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[17] = data->localData[0]->realVars[111] /* gENROE.id variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[18] = data->localData[0]->realVars[137] /* pwLine1.vs.im variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[19] = data->localData[0]->realVars[138] /* pwLine1.vs.re variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[20] = data->localData[0]->realVars[148] /* pwLine3.vr.re variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[21] = data->localData[0]->realVars[147] /* pwLine3.vr.im variable */;
  retValue = solve_nonlinear_system(data, threadData, 4);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,477};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 477 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[53] /* constantLoad.p.ii variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[0];
  data->localData[0]->realVars[133] /* pwLine1.is.im variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[1];
  data->localData[0]->realVars[122] /* pwLine.ir.re variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[2];
  data->localData[0]->realVars[134] /* pwLine1.is.re variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[3];
  data->localData[0]->realVars[156] /* pwLine4.is.re variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[4];
  data->localData[0]->realVars[144] /* pwLine3.ir.re variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[5];
  data->localData[0]->realVars[155] /* pwLine4.is.im variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[6];
  data->localData[0]->realVars[143] /* pwLine3.ir.im variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[7];
  data->localData[0]->realVars[146] /* pwLine3.is.re variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[8];
  data->localData[0]->realVars[145] /* pwLine3.is.im variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[9];
  data->localData[0]->realVars[131] /* pwLine1.ir.im variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[10];
  data->localData[0]->realVars[154] /* pwLine4.ir.re variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[11];
  data->localData[0]->realVars[92] /* gENCLS.iq variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[12];
  data->localData[0]->realVars[91] /* gENCLS.id variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[13];
  data->localData[0]->realVars[136] /* pwLine1.vr.re variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[14];
  data->localData[0]->realVars[135] /* pwLine1.vr.im variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[15];
  data->localData[0]->realVars[112] /* gENROE.iq variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[16];
  data->localData[0]->realVars[111] /* gENROE.id variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[17];
  data->localData[0]->realVars[137] /* pwLine1.vs.im variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[18];
  data->localData[0]->realVars[138] /* pwLine1.vs.re variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[19];
  data->localData[0]->realVars[148] /* pwLine3.vr.re variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[20];
  data->localData[0]->realVars[147] /* pwLine3.vr.im variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[21];
  TRACE_POP
}
/*
equation index: 478
type: SIMPLE_ASSIGN
pwLine3.P21 = ((-pwLine3.vr.re) * pwLine3.ir.re - pwLine3.vr.im * pwLine3.ir.im) * pwLine3.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_478(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,478};
  data->localData[0]->realVars[140] /* pwLine3.P21 variable */ = (((-data->localData[0]->realVars[148] /* pwLine3.vr.re variable */)) * (data->localData[0]->realVars[144] /* pwLine3.ir.re variable */) - ((data->localData[0]->realVars[147] /* pwLine3.vr.im variable */) * (data->localData[0]->realVars[143] /* pwLine3.ir.im variable */))) * (data->simulationInfo->realParameter[339] /* pwLine3.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 479
type: SIMPLE_ASSIGN
pwLine3.Q21 = (pwLine3.vr.re * pwLine3.ir.im - pwLine3.vr.im * pwLine3.ir.re) * pwLine3.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_479(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,479};
  data->localData[0]->realVars[142] /* pwLine3.Q21 variable */ = ((data->localData[0]->realVars[148] /* pwLine3.vr.re variable */) * (data->localData[0]->realVars[143] /* pwLine3.ir.im variable */) - ((data->localData[0]->realVars[147] /* pwLine3.vr.im variable */) * (data->localData[0]->realVars[144] /* pwLine3.ir.re variable */))) * (data->simulationInfo->realParameter[339] /* pwLine3.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 480
type: SIMPLE_ASSIGN
pwLine4.P12 = (pwLine3.vr.re * pwLine4.is.re + pwLine3.vr.im * pwLine4.is.im) * pwLine4.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_480(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,480};
  data->localData[0]->realVars[149] /* pwLine4.P12 variable */ = ((data->localData[0]->realVars[148] /* pwLine3.vr.re variable */) * (data->localData[0]->realVars[156] /* pwLine4.is.re variable */) + (data->localData[0]->realVars[147] /* pwLine3.vr.im variable */) * (data->localData[0]->realVars[155] /* pwLine4.is.im variable */)) * (data->simulationInfo->realParameter[350] /* pwLine4.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 481
type: SIMPLE_ASSIGN
pwLine4.Q12 = (pwLine3.vr.im * pwLine4.is.re - pwLine3.vr.re * pwLine4.is.im) * pwLine4.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_481(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,481};
  data->localData[0]->realVars[151] /* pwLine4.Q12 variable */ = ((data->localData[0]->realVars[147] /* pwLine3.vr.im variable */) * (data->localData[0]->realVars[156] /* pwLine4.is.re variable */) - ((data->localData[0]->realVars[148] /* pwLine3.vr.re variable */) * (data->localData[0]->realVars[155] /* pwLine4.is.im variable */))) * (data->simulationInfo->realParameter[350] /* pwLine4.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 482
type: SIMPLE_ASSIGN
FAULT.V = sqrt(pwLine3.vr.re ^ 2.0 + pwLine3.vr.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_482(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,482};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[148] /* pwLine3.vr.re variable */;
  tmp1 = data->localData[0]->realVars[147] /* pwLine3.vr.im variable */;
  data->localData[0]->realVars[32] /* FAULT.V variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 483
type: SIMPLE_ASSIGN
$cse4 = atan2(pwLine3.vr.im, pwLine3.vr.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_483(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,483};
  data->localData[0]->realVars[28] /* $cse4 variable */ = atan2(data->localData[0]->realVars[147] /* pwLine3.vr.im variable */, data->localData[0]->realVars[148] /* pwLine3.vr.re variable */);
  TRACE_POP
}
/*
equation index: 484
type: SIMPLE_ASSIGN
FAULT.angle = 57.29577951308232 * $cse4
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_484(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,484};
  data->localData[0]->realVars[33] /* FAULT.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[28] /* $cse4 variable */);
  TRACE_POP
}
/*
equation index: 485
type: SIMPLE_ASSIGN
gENROE.I = sqrt(pwLine.is.im ^ 2.0 + pwLine.is.re ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_485(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,485};
  modelica_real tmp2;
  modelica_real tmp3;
  tmp2 = data->localData[0]->realVars[123] /* pwLine.is.im variable */;
  tmp3 = data->localData[0]->realVars[124] /* pwLine.is.re variable */;
  data->localData[0]->realVars[98] /* gENROE.I variable */ = sqrt((tmp2 * tmp2) + (tmp3 * tmp3));
  TRACE_POP
}
/*
equation index: 486
type: SIMPLE_ASSIGN
gENROE.anglei = atan2(-pwLine.is.im, -pwLine.is.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_486(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,486};
  data->localData[0]->realVars[109] /* gENROE.anglei variable */ = atan2((-data->localData[0]->realVars[123] /* pwLine.is.im variable */), (-data->localData[0]->realVars[124] /* pwLine.is.re variable */));
  TRACE_POP
}
/*
equation index: 487
type: SIMPLE_ASSIGN
$DER.gENROE.PSIkq = (gENROE.Epd + (gENROE.Xpq - gENROE.Xl) * gENROE.iq - gENROE.PSIkq) / gENROE.Tppq0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_487(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,487};
  data->localData[0]->realVars[23] /* der(gENROE.PSIkq) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */ + (data->simulationInfo->realParameter[281] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[276] /* gENROE.Xl PARAM */) * (data->localData[0]->realVars[112] /* gENROE.iq variable */) - data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */,data->simulationInfo->realParameter[270] /* gENROE.Tppq0 PARAM */,"gENROE.Tppq0",equationIndexes);
  TRACE_POP
}
/*
equation index: 488
type: SIMPLE_ASSIGN
gENROE.XaqIlq = gENROE.K1q * (gENROE.Epd + (gENROE.Xpq - gENROE.Xl) * gENROE.iq - gENROE.PSIkq) + gENROE.Epd + gENROE.iq * (gENROE.Xpq - gENROE.Xq) + $cse5 * gENROE.PSIppq * (gENROE.Xq - gENROE.Xl) / (gENROE.Xd - gENROE.Xl)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_488(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,488};
  data->localData[0]->realVars[108] /* gENROE.XaqIlq variable */ = (data->simulationInfo->realParameter[240] /* gENROE.K1q PARAM */) * (data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */ + (data->simulationInfo->realParameter[281] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[276] /* gENROE.Xl PARAM */) * (data->localData[0]->realVars[112] /* gENROE.iq variable */) - data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */) + data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */ + (data->localData[0]->realVars[112] /* gENROE.iq variable */) * (data->simulationInfo->realParameter[281] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[282] /* gENROE.Xq PARAM */) + (data->localData[0]->realVars[29] /* $cse5 variable */) * ((data->localData[0]->realVars[104] /* gENROE.PSIppq variable */) * (DIVISION_SIM(data->simulationInfo->realParameter[282] /* gENROE.Xq PARAM */ - data->simulationInfo->realParameter[276] /* gENROE.Xl PARAM */,data->simulationInfo->realParameter[275] /* gENROE.Xd PARAM */ - data->simulationInfo->realParameter[276] /* gENROE.Xl PARAM */,"gENROE.Xd - gENROE.Xl",equationIndexes)));
  TRACE_POP
}
/*
equation index: 489
type: SIMPLE_ASSIGN
$DER.gENROE.Epd = (-gENROE.XaqIlq) / gENROE.Tpq0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_489(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,489};
  data->localData[0]->realVars[20] /* der(gENROE.Epd) STATE_DER */ = DIVISION_SIM((-data->localData[0]->realVars[108] /* gENROE.XaqIlq variable */),data->simulationInfo->realParameter[271] /* gENROE.Tpq0 PARAM */,"gENROE.Tpq0",equationIndexes);
  TRACE_POP
}
/*
equation index: 490
type: SIMPLE_ASSIGN
$DER.gENROE.PSIkd = (gENROE.Epq + (gENROE.Xl - gENROE.Xpd) * gENROE.id - gENROE.PSIkd) / gENROE.Tppd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_490(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,490};
  data->localData[0]->realVars[22] /* der(gENROE.PSIkd) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ + (data->simulationInfo->realParameter[276] /* gENROE.Xl PARAM */ - data->simulationInfo->realParameter[277] /* gENROE.Xpd PARAM */) * (data->localData[0]->realVars[111] /* gENROE.id variable */) - data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */,data->simulationInfo->realParameter[269] /* gENROE.Tppd0 PARAM */,"gENROE.Tppd0",equationIndexes);
  TRACE_POP
}
/*
equation index: 491
type: SIMPLE_ASSIGN
eXAC2.XADIFD = gENROE.K1d * (gENROE.Epq + (gENROE.Xl - gENROE.Xpd) * gENROE.id - gENROE.PSIkd) + gENROE.Epq + gENROE.id * (gENROE.Xd - gENROE.Xpd) + $cse5 * gENROE.PSIppd
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_491(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,491};
  data->localData[0]->realVars[66] /* eXAC2.XADIFD variable */ = (data->simulationInfo->realParameter[239] /* gENROE.K1d PARAM */) * (data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ + (data->simulationInfo->realParameter[276] /* gENROE.Xl PARAM */ - data->simulationInfo->realParameter[277] /* gENROE.Xpd PARAM */) * (data->localData[0]->realVars[111] /* gENROE.id variable */) - data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */) + data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ + (data->localData[0]->realVars[111] /* gENROE.id variable */) * (data->simulationInfo->realParameter[275] /* gENROE.Xd PARAM */ - data->simulationInfo->realParameter[277] /* gENROE.Xpd PARAM */) + (data->localData[0]->realVars[29] /* $cse5 variable */) * (data->localData[0]->realVars[103] /* gENROE.PSIppd variable */);
  TRACE_POP
}
/*
equation index: 492
type: SIMPLE_ASSIGN
eXAC2.rectifierCommutationVoltageDrop.division.u1 = eXAC2.rectifierCommutationVoltageDrop.gain2.k * eXAC2.XADIFD
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_492(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,492};
  data->localData[0]->realVars[79] /* eXAC2.rectifierCommutationVoltageDrop.division.u1 variable */ = (data->simulationInfo->realParameter[177] /* eXAC2.rectifierCommutationVoltageDrop.gain2.k PARAM */) * (data->localData[0]->realVars[66] /* eXAC2.XADIFD variable */);
  TRACE_POP
}
/*
equation index: 493
type: SIMPLE_ASSIGN
eXAC2.rectifierCommutationVoltageDrop.division.y = eXAC2.rectifierCommutationVoltageDrop.division.u1 / eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_493(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,493};
  data->localData[0]->realVars[80] /* eXAC2.rectifierCommutationVoltageDrop.division.y variable */ = DIVISION_SIM(data->localData[0]->realVars[79] /* eXAC2.rectifierCommutationVoltageDrop.division.u1 variable */,data->localData[0]->realVars[4] /* eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.y STATE(1) */,"eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.y",equationIndexes);
  TRACE_POP
}
/*
equation index: 494
type: SIMPLE_ASSIGN
eXAC2.rectifierCommutationVoltageDrop.fEX.y = if eXAC2.rectifierCommutationVoltageDrop.division.y <= 0.0 then 1.0 else if eXAC2.rectifierCommutationVoltageDrop.division.y > 0.0 and eXAC2.rectifierCommutationVoltageDrop.division.y <= 0.433 then 1.0 + (-0.577) * eXAC2.rectifierCommutationVoltageDrop.division.y else if eXAC2.rectifierCommutationVoltageDrop.division.y > 0.433 and eXAC2.rectifierCommutationVoltageDrop.division.y < 0.75 then sqrt(0.75 - eXAC2.rectifierCommutationVoltageDrop.division.y ^ 2.0) else if eXAC2.rectifierCommutationVoltageDrop.division.y >= 0.75 and eXAC2.rectifierCommutationVoltageDrop.division.y <= 1.0 then 1.732 * (1.0 - eXAC2.rectifierCommutationVoltageDrop.division.y) else 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_494(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,494};
  modelica_boolean tmp4;
  modelica_boolean tmp5;
  modelica_boolean tmp6;
  modelica_boolean tmp7;
  modelica_boolean tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_boolean tmp11;
  modelica_boolean tmp12;
  modelica_boolean tmp13;
  modelica_real tmp14;
  modelica_boolean tmp15;
  modelica_real tmp16;
  modelica_boolean tmp17;
  modelica_real tmp18;
  RELATIONHYSTERESIS(tmp4, data->localData[0]->realVars[80] /* eXAC2.rectifierCommutationVoltageDrop.division.y variable */, 0.0, 15, LessEq);
  tmp17 = (modelica_boolean)tmp4;
  if(tmp17)
  {
    tmp18 = 1.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp5, data->localData[0]->realVars[80] /* eXAC2.rectifierCommutationVoltageDrop.division.y variable */, 0.0, 16, Greater);
    RELATIONHYSTERESIS(tmp6, data->localData[0]->realVars[80] /* eXAC2.rectifierCommutationVoltageDrop.division.y variable */, 0.433, 17, LessEq);
    tmp15 = (modelica_boolean)(tmp5 && tmp6);
    if(tmp15)
    {
      tmp16 = 1.0 + (-0.577) * (data->localData[0]->realVars[80] /* eXAC2.rectifierCommutationVoltageDrop.division.y variable */);
    }
    else
    {
      RELATIONHYSTERESIS(tmp7, data->localData[0]->realVars[80] /* eXAC2.rectifierCommutationVoltageDrop.division.y variable */, 0.433, 18, Greater);
      RELATIONHYSTERESIS(tmp8, data->localData[0]->realVars[80] /* eXAC2.rectifierCommutationVoltageDrop.division.y variable */, 0.75, 19, Less);
      tmp13 = (modelica_boolean)(tmp7 && tmp8);
      if(tmp13)
      {
        tmp9 = data->localData[0]->realVars[80] /* eXAC2.rectifierCommutationVoltageDrop.division.y variable */;
        tmp10 = 0.75 - ((tmp9 * tmp9));
        if(!(tmp10 >= 0.0))
        {
          FILE_INFO info = {"",0,0,0,0,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of sqrt(0.75 - eXAC2.rectifierCommutationVoltageDrop.division.y ^ 2.0) was %g should be >= 0", tmp10);
        }
        tmp14 = sqrt(tmp10);
      }
      else
      {
        RELATIONHYSTERESIS(tmp11, data->localData[0]->realVars[80] /* eXAC2.rectifierCommutationVoltageDrop.division.y variable */, 0.75, 20, GreaterEq);
        RELATIONHYSTERESIS(tmp12, data->localData[0]->realVars[80] /* eXAC2.rectifierCommutationVoltageDrop.division.y variable */, 1.0, 21, LessEq);
        tmp14 = ((tmp11 && tmp12)?(1.732) * (1.0 - data->localData[0]->realVars[80] /* eXAC2.rectifierCommutationVoltageDrop.division.y variable */):0.0);
      }
      tmp16 = tmp14;
    }
    tmp18 = tmp16;
  }
  data->localData[0]->realVars[81] /* eXAC2.rectifierCommutationVoltageDrop.fEX.y variable */ = tmp18;
  TRACE_POP
}
/*
equation index: 495
type: SIMPLE_ASSIGN
eXAC2.EFD = eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.y * eXAC2.rectifierCommutationVoltageDrop.fEX.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_495(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,495};
  data->localData[0]->realVars[63] /* eXAC2.EFD variable */ = (data->localData[0]->realVars[4] /* eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.y STATE(1) */) * (data->localData[0]->realVars[81] /* eXAC2.rectifierCommutationVoltageDrop.fEX.y variable */);
  TRACE_POP
}
/*
equation index: 496
type: SIMPLE_ASSIGN
$DER.gENROE.Epq = (eXAC2.EFD - eXAC2.XADIFD) / gENROE.Tpd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_496(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,496};
  data->localData[0]->realVars[21] /* der(gENROE.Epq) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[63] /* eXAC2.EFD variable */ - data->localData[0]->realVars[66] /* eXAC2.XADIFD variable */,data->simulationInfo->realParameter[268] /* gENROE.Tpd0 PARAM */,"gENROE.Tpd0",equationIndexes);
  TRACE_POP
}
/*
equation index: 497
type: SIMPLE_ASSIGN
eXAC2.add3.u1 = eXAC2.rotatingExciterWithDemagnetizationLimited.Sum.k1 * eXAC2.rotatingExciterWithDemagnetizationLimited.Sum.u1 + eXAC2.rotatingExciterWithDemagnetizationLimited.Sum.k2 * eXAC2.rotatingExciterWithDemagnetizationLimited.Sum.u2 + eXAC2.rotatingExciterWithDemagnetizationLimited.Sum.k3 * eXAC2.XADIFD
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_497(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,497};
  data->localData[0]->realVars[67] /* eXAC2.add3.u1 variable */ = (data->simulationInfo->realParameter[185] /* eXAC2.rotatingExciterWithDemagnetizationLimited.Sum.k1 PARAM */) * (data->localData[0]->realVars[82] /* eXAC2.rotatingExciterWithDemagnetizationLimited.Sum.u1 variable */) + (data->simulationInfo->realParameter[186] /* eXAC2.rotatingExciterWithDemagnetizationLimited.Sum.k2 PARAM */) * (data->localData[0]->realVars[83] /* eXAC2.rotatingExciterWithDemagnetizationLimited.Sum.u2 variable */) + (data->simulationInfo->realParameter[187] /* eXAC2.rotatingExciterWithDemagnetizationLimited.Sum.k3 PARAM */) * (data->localData[0]->realVars[66] /* eXAC2.XADIFD variable */);
  TRACE_POP
}
/*
equation index: 498
type: SIMPLE_ASSIGN
$DER.eXAC2.imDerivativeLag.x = (eXAC2.add3.u1 - eXAC2.imDerivativeLag.x) / eXAC2.imDerivativeLag.T
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_498(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,498};
  data->localData[0]->realVars[14] /* der(eXAC2.imDerivativeLag.x) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[67] /* eXAC2.add3.u1 variable */ - data->localData[0]->realVars[1] /* eXAC2.imDerivativeLag.x STATE(1) */,data->simulationInfo->realParameter[145] /* eXAC2.imDerivativeLag.T PARAM */,"eXAC2.imDerivativeLag.T",equationIndexes);
  TRACE_POP
}
/*
equation index: 499
type: SIMPLE_ASSIGN
eXAC2.imDerivativeLag.y = 0.03 * (eXAC2.add3.u1 - eXAC2.imDerivativeLag.x) / eXAC2.imDerivativeLag.T
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_499(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,499};
  data->localData[0]->realVars[74] /* eXAC2.imDerivativeLag.y variable */ = (0.03) * (DIVISION_SIM(data->localData[0]->realVars[67] /* eXAC2.add3.u1 variable */ - data->localData[0]->realVars[1] /* eXAC2.imDerivativeLag.x STATE(1) */,data->simulationInfo->realParameter[145] /* eXAC2.imDerivativeLag.T PARAM */,"eXAC2.imDerivativeLag.T",equationIndexes));
  TRACE_POP
}
/*
equation index: 500
type: SIMPLE_ASSIGN
eXAC2.DiffV1.u2 = eXAC2.gain.k * eXAC2.add3.u1
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_500(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,500};
  data->localData[0]->realVars[60] /* eXAC2.DiffV1.u2 variable */ = (data->simulationInfo->realParameter[142] /* eXAC2.gain.k PARAM */) * (data->localData[0]->realVars[67] /* eXAC2.add3.u1 variable */);
  TRACE_POP
}
/*
equation index: 501
type: SIMPLE_ASSIGN
eXAC2.add3.y = eXAC2.add3.k1 * eXAC2.add3.u1 + eXAC2.add3.k2 * eXAC2.Vref1.k
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_501(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,501};
  data->localData[0]->realVars[68] /* eXAC2.add3.y variable */ = (data->simulationInfo->realParameter[126] /* eXAC2.add3.k1 PARAM */) * (data->localData[0]->realVars[67] /* eXAC2.add3.u1 variable */) + (data->simulationInfo->realParameter[127] /* eXAC2.add3.k2 PARAM */) * (data->simulationInfo->realParameter[121] /* eXAC2.Vref1.k PARAM */);
  TRACE_POP
}
/*
equation index: 502
type: SIMPLE_ASSIGN
eXAC2.gain3.y = eXAC2.gain3.k * eXAC2.add3.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_502(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,502};
  data->localData[0]->realVars[73] /* eXAC2.gain3.y variable */ = (data->simulationInfo->realParameter[144] /* eXAC2.gain3.k PARAM */) * (data->localData[0]->realVars[68] /* eXAC2.add3.y variable */);
  TRACE_POP
}
/*
equation index: 503
type: SIMPLE_ASSIGN
gENROE.Te = gENROE.PSId * gENROE.iq - gENROE.PSIq * gENROE.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_503(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,503};
  data->localData[0]->realVars[107] /* gENROE.Te variable */ = (data->localData[0]->realVars[101] /* gENROE.PSId variable */) * (data->localData[0]->realVars[112] /* gENROE.iq variable */) - ((data->localData[0]->realVars[105] /* gENROE.PSIq variable */) * (data->localData[0]->realVars[111] /* gENROE.id variable */));
  TRACE_POP
}
/*
equation index: 504
type: SIMPLE_ASSIGN
$DER.gENROE.w = 0.5 * ((gENROE.pm0 - gENROE.D * gENROE.w) / (1.0 + gENROE.w) - gENROE.Te) / gENROE.H
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_504(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,504};
  data->localData[0]->realVars[25] /* der(gENROE.w) STATE_DER */ = (0.5) * (DIVISION_SIM(DIVISION_SIM(data->simulationInfo->realParameter[302] /* gENROE.pm0 PARAM */ - ((data->simulationInfo->realParameter[226] /* gENROE.D PARAM */) * (data->localData[0]->realVars[12] /* gENROE.w STATE(1) */)),1.0 + data->localData[0]->realVars[12] /* gENROE.w STATE(1) */,"1.0 + gENROE.w",equationIndexes) - data->localData[0]->realVars[107] /* gENROE.Te variable */,data->simulationInfo->realParameter[232] /* gENROE.H PARAM */,"gENROE.H",equationIndexes));
  TRACE_POP
}
/*
equation index: 505
type: SIMPLE_ASSIGN
eXAC2.ECOMP = sqrt(pwLine.vs.re ^ 2.0 + pwLine.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_505(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,505};
  modelica_real tmp19;
  modelica_real tmp20;
  tmp19 = data->localData[0]->realVars[126] /* pwLine.vs.re variable */;
  tmp20 = data->localData[0]->realVars[125] /* pwLine.vs.im variable */;
  data->localData[0]->realVars[62] /* eXAC2.ECOMP variable */ = sqrt((tmp19 * tmp19) + (tmp20 * tmp20));
  TRACE_POP
}
/*
equation index: 506
type: SIMPLE_ASSIGN
$DER.eXAC2.TransducerDelay.state = (eXAC2.TransducerDelay.K * eXAC2.ECOMP - eXAC2.TransducerDelay.state) / eXAC2.TransducerDelay.T_mod
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_506(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,506};
  data->localData[0]->realVars[13] /* der(eXAC2.TransducerDelay.state) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[101] /* eXAC2.TransducerDelay.K PARAM */) * (data->localData[0]->realVars[62] /* eXAC2.ECOMP variable */) - data->localData[0]->realVars[0] /* eXAC2.TransducerDelay.state STATE(1) */,data->simulationInfo->realParameter[103] /* eXAC2.TransducerDelay.T_mod PARAM */,"eXAC2.TransducerDelay.T_mod",equationIndexes);
  TRACE_POP
}
/*
equation index: 507
type: SIMPLE_ASSIGN
eXAC2.DiffV.u2 = if abs(eXAC2.TransducerDelay.T) <= 1e-15 then eXAC2.ECOMP * eXAC2.TransducerDelay.K else eXAC2.TransducerDelay.state
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_507(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,507};
  modelica_boolean tmp21;
  tmp21 = LessEq(fabs(data->simulationInfo->realParameter[102] /* eXAC2.TransducerDelay.T PARAM */),1e-15);
  data->localData[0]->realVars[57] /* eXAC2.DiffV.u2 variable */ = (tmp21?(data->localData[0]->realVars[62] /* eXAC2.ECOMP variable */) * (data->simulationInfo->realParameter[101] /* eXAC2.TransducerDelay.K PARAM */):data->localData[0]->realVars[0] /* eXAC2.TransducerDelay.state STATE(1) */);
  TRACE_POP
}
/*
equation index: 508
type: SIMPLE_ASSIGN
eXAC2.DiffV.y = eXAC2.DiffV.k1 * eXAC2.DiffV.u1 + eXAC2.DiffV.k2 * eXAC2.DiffV.u2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_508(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,508};
  data->localData[0]->realVars[58] /* eXAC2.DiffV.y variable */ = (data->simulationInfo->realParameter[76] /* eXAC2.DiffV.k1 PARAM */) * (data->localData[0]->realVars[56] /* eXAC2.DiffV.u1 variable */) + (data->simulationInfo->realParameter[77] /* eXAC2.DiffV.k2 PARAM */) * (data->localData[0]->realVars[57] /* eXAC2.DiffV.u2 variable */);
  TRACE_POP
}
/*
equation index: 509
type: SIMPLE_ASSIGN
eXAC2.add3_1.y = eXAC2.add3_1.k1 * eXAC2.add3_1.u1 + eXAC2.add3_1.k2 * eXAC2.DiffV.y + eXAC2.add3_1.k3 * eXAC2.imDerivativeLag.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_509(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,509};
  data->localData[0]->realVars[70] /* eXAC2.add3_1.y variable */ = (data->simulationInfo->realParameter[129] /* eXAC2.add3_1.k1 PARAM */) * (data->localData[0]->realVars[69] /* eXAC2.add3_1.u1 variable */) + (data->simulationInfo->realParameter[130] /* eXAC2.add3_1.k2 PARAM */) * (data->localData[0]->realVars[58] /* eXAC2.DiffV.y variable */) + (data->simulationInfo->realParameter[131] /* eXAC2.add3_1.k3 PARAM */) * (data->localData[0]->realVars[74] /* eXAC2.imDerivativeLag.y variable */);
  TRACE_POP
}
/*
equation index: 510
type: SIMPLE_ASSIGN
$DER.eXAC2.leadLag.TF.x_scaled[1] = (eXAC2.leadLag.TF.a_end * eXAC2.add3_1.y - eXAC2.leadLag.TF.a[2] * eXAC2.leadLag.TF.x_scaled[1]) / eXAC2.leadLag.TF.a[1]
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_510(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,510};
  data->localData[0]->realVars[16] /* der(eXAC2.leadLag.TF.x_scaled[1]) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[162] /* eXAC2.leadLag.TF.a_end PARAM */) * (data->localData[0]->realVars[70] /* eXAC2.add3_1.y variable */) - ((data->simulationInfo->realParameter[161] /* eXAC2.leadLag.TF.a[2] PARAM */) * (data->localData[0]->realVars[3] /* eXAC2.leadLag.TF.x_scaled[1] STATE(1) */)),data->simulationInfo->realParameter[160] /* eXAC2.leadLag.TF.a[1] PARAM */,"eXAC2.leadLag.TF.a[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 511
type: SIMPLE_ASSIGN
eXAC2.leadLag.TF.y = (eXAC2.leadLag.TF.bb[2] - eXAC2.leadLag.TF.a[2] * eXAC2.leadLag.TF.d) * eXAC2.leadLag.TF.x[1] + eXAC2.leadLag.TF.d * eXAC2.add3_1.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_511(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,511};
  data->localData[0]->realVars[77] /* eXAC2.leadLag.TF.y variable */ = (data->simulationInfo->realParameter[166] /* eXAC2.leadLag.TF.bb[2] PARAM */ - ((data->simulationInfo->realParameter[161] /* eXAC2.leadLag.TF.a[2] PARAM */) * (data->simulationInfo->realParameter[167] /* eXAC2.leadLag.TF.d PARAM */))) * (data->localData[0]->realVars[76] /* eXAC2.leadLag.TF.x[1] variable */) + (data->simulationInfo->realParameter[167] /* eXAC2.leadLag.TF.d PARAM */) * (data->localData[0]->realVars[70] /* eXAC2.add3_1.y variable */);
  TRACE_POP
}
/*
equation index: 512
type: SIMPLE_ASSIGN
eXAC2.imLimitedSimpleLag.u = if abs(eXAC2.leadLag.T1 - eXAC2.leadLag.T2) < 1e-15 then eXAC2.leadLag.K * eXAC2.add3_1.y else eXAC2.leadLag.TF.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_512(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,512};
  modelica_boolean tmp22;
  tmp22 = Less(fabs(data->simulationInfo->realParameter[157] /* eXAC2.leadLag.T1 PARAM */ - data->simulationInfo->realParameter[158] /* eXAC2.leadLag.T2 PARAM */),1e-15);
  data->localData[0]->realVars[75] /* eXAC2.imLimitedSimpleLag.u variable */ = (tmp22?(data->simulationInfo->realParameter[156] /* eXAC2.leadLag.K PARAM */) * (data->localData[0]->realVars[70] /* eXAC2.add3_1.y variable */):data->localData[0]->realVars[77] /* eXAC2.leadLag.TF.y variable */);
  TRACE_POP
}
/*
equation index: 513
type: SIMPLE_ASSIGN
$DER.eXAC2.imLimitedSimpleLag.state = (eXAC2.imLimitedSimpleLag.K * eXAC2.imLimitedSimpleLag.u - eXAC2.imLimitedSimpleLag.state) / eXAC2.imLimitedSimpleLag.T_mod
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_513(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,513};
  data->localData[0]->realVars[15] /* der(eXAC2.imLimitedSimpleLag.state) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[149] /* eXAC2.imLimitedSimpleLag.K PARAM */) * (data->localData[0]->realVars[75] /* eXAC2.imLimitedSimpleLag.u variable */) - data->localData[0]->realVars[2] /* eXAC2.imLimitedSimpleLag.state STATE(1) */,data->simulationInfo->realParameter[151] /* eXAC2.imLimitedSimpleLag.T_mod PARAM */,"eXAC2.imLimitedSimpleLag.T_mod",equationIndexes);
  TRACE_POP
}
/*
equation index: 514
type: SIMPLE_ASSIGN
eXAC2.DiffV1.u1 = if abs(eXAC2.imLimitedSimpleLag.T) <= 1e-15 then max(min(eXAC2.imLimitedSimpleLag.u * eXAC2.imLimitedSimpleLag.K, eXAC2.imLimitedSimpleLag.outMax), eXAC2.imLimitedSimpleLag.outMin) else max(min(eXAC2.imLimitedSimpleLag.state, eXAC2.imLimitedSimpleLag.outMax), eXAC2.imLimitedSimpleLag.outMin)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_514(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,514};
  modelica_boolean tmp23;
  tmp23 = LessEq(fabs(data->simulationInfo->realParameter[150] /* eXAC2.imLimitedSimpleLag.T PARAM */),1e-15);
  data->localData[0]->realVars[59] /* eXAC2.DiffV1.u1 variable */ = (tmp23?fmax(fmin((data->localData[0]->realVars[75] /* eXAC2.imLimitedSimpleLag.u variable */) * (data->simulationInfo->realParameter[149] /* eXAC2.imLimitedSimpleLag.K PARAM */),data->simulationInfo->realParameter[153] /* eXAC2.imLimitedSimpleLag.outMax PARAM */),data->simulationInfo->realParameter[154] /* eXAC2.imLimitedSimpleLag.outMin PARAM */):fmax(fmin(data->localData[0]->realVars[2] /* eXAC2.imLimitedSimpleLag.state STATE(1) */,data->simulationInfo->realParameter[153] /* eXAC2.imLimitedSimpleLag.outMax PARAM */),data->simulationInfo->realParameter[154] /* eXAC2.imLimitedSimpleLag.outMin PARAM */));
  TRACE_POP
}
/*
equation index: 515
type: SIMPLE_ASSIGN
eXAC2.DiffV1.y = eXAC2.DiffV1.k1 * eXAC2.DiffV1.u1 + eXAC2.DiffV1.k2 * eXAC2.DiffV1.u2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_515(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,515};
  data->localData[0]->realVars[61] /* eXAC2.DiffV1.y variable */ = (data->simulationInfo->realParameter[78] /* eXAC2.DiffV1.k1 PARAM */) * (data->localData[0]->realVars[59] /* eXAC2.DiffV1.u1 variable */) + (data->simulationInfo->realParameter[79] /* eXAC2.DiffV1.k2 PARAM */) * (data->localData[0]->realVars[60] /* eXAC2.DiffV1.u2 variable */);
  TRACE_POP
}
/*
equation index: 516
type: SIMPLE_ASSIGN
eXAC2.gain1.u = if eXAC2.DiffV1.y > eXAC2.gain3.y then eXAC2.gain3.y else eXAC2.DiffV1.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_516(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,516};
  modelica_boolean tmp24;
  RELATIONHYSTERESIS(tmp24, data->localData[0]->realVars[61] /* eXAC2.DiffV1.y variable */, data->localData[0]->realVars[73] /* eXAC2.gain3.y variable */, 22, Greater);
  data->localData[0]->realVars[71] /* eXAC2.gain1.u variable */ = (tmp24?data->localData[0]->realVars[73] /* eXAC2.gain3.y variable */:data->localData[0]->realVars[61] /* eXAC2.DiffV1.y variable */);
  TRACE_POP
}
/*
equation index: 517
type: SIMPLE_ASSIGN
eXAC2.gain1.y = eXAC2.gain1.k * eXAC2.gain1.u
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_517(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,517};
  data->localData[0]->realVars[72] /* eXAC2.gain1.y variable */ = (data->simulationInfo->realParameter[143] /* eXAC2.gain1.k PARAM */) * (data->localData[0]->realVars[71] /* eXAC2.gain1.u variable */);
  TRACE_POP
}
/*
equation index: 518
type: SIMPLE_ASSIGN
eXAC2.limiter.y = smooth(0, if eXAC2.gain1.y > eXAC2.limiter.uMax then eXAC2.limiter.uMax else if eXAC2.gain1.y < eXAC2.limiter.uMin then eXAC2.limiter.uMin else eXAC2.gain1.y)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_518(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,518};
  modelica_boolean tmp25;
  modelica_boolean tmp26;
  modelica_boolean tmp27;
  modelica_real tmp28;
  tmp25 = Greater(data->localData[0]->realVars[72] /* eXAC2.gain1.y variable */,data->simulationInfo->realParameter[174] /* eXAC2.limiter.uMax PARAM */);
  tmp27 = (modelica_boolean)tmp25;
  if(tmp27)
  {
    tmp28 = data->simulationInfo->realParameter[174] /* eXAC2.limiter.uMax PARAM */;
  }
  else
  {
    tmp26 = Less(data->localData[0]->realVars[72] /* eXAC2.gain1.y variable */,data->simulationInfo->realParameter[175] /* eXAC2.limiter.uMin PARAM */);
    tmp28 = (tmp26?data->simulationInfo->realParameter[175] /* eXAC2.limiter.uMin PARAM */:data->localData[0]->realVars[72] /* eXAC2.gain1.y variable */);
  }
  data->localData[0]->realVars[78] /* eXAC2.limiter.y variable */ = tmp28;
  TRACE_POP
}
/*
equation index: 519
type: SIMPLE_ASSIGN
eXAC2.rotatingExciterWithDemagnetizationLimited.feedback.y = eXAC2.limiter.y - eXAC2.add3.u1
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_519(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,519};
  data->localData[0]->realVars[85] /* eXAC2.rotatingExciterWithDemagnetizationLimited.feedback.y variable */ = data->localData[0]->realVars[78] /* eXAC2.limiter.y variable */ - data->localData[0]->realVars[67] /* eXAC2.add3.u1 variable */;
  TRACE_POP
}
/*
equation index: 520
type: SIMPLE_ASSIGN
$DER.eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.y = if eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.y < eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.outMin and eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.k * eXAC2.rotatingExciterWithDemagnetizationLimited.feedback.y < 0.0 or eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.y > eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.outMax and eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.k * eXAC2.rotatingExciterWithDemagnetizationLimited.feedback.y > 0.0 then 0.0 else eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.k * eXAC2.rotatingExciterWithDemagnetizationLimited.feedback.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_520(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,520};
  modelica_boolean tmp29;
  modelica_boolean tmp30;
  modelica_boolean tmp31;
  modelica_boolean tmp32;
  RELATIONHYSTERESIS(tmp29, data->localData[0]->realVars[4] /* eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.y STATE(1) */, data->simulationInfo->realParameter[192] /* eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.outMin PARAM */, 23, Less);
  RELATIONHYSTERESIS(tmp30, (data->simulationInfo->realParameter[190] /* eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.k PARAM */) * (data->localData[0]->realVars[85] /* eXAC2.rotatingExciterWithDemagnetizationLimited.feedback.y variable */), 0.0, 24, Less);
  RELATIONHYSTERESIS(tmp31, data->localData[0]->realVars[4] /* eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.y STATE(1) */, data->simulationInfo->realParameter[191] /* eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.outMax PARAM */, 25, Greater);
  RELATIONHYSTERESIS(tmp32, (data->simulationInfo->realParameter[190] /* eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.k PARAM */) * (data->localData[0]->realVars[85] /* eXAC2.rotatingExciterWithDemagnetizationLimited.feedback.y variable */), 0.0, 26, Greater);
  data->localData[0]->realVars[17] /* der(eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.y) STATE_DER */ = (((tmp29 && tmp30) || (tmp31 && tmp32))?0.0:(data->simulationInfo->realParameter[190] /* eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.k PARAM */) * (data->localData[0]->realVars[85] /* eXAC2.rotatingExciterWithDemagnetizationLimited.feedback.y variable */));
  TRACE_POP
}
/*
equation index: 521
type: SIMPLE_ASSIGN
$whenCondition2 = eXAC2.imLimitedSimpleLag.state > eXAC2.imLimitedSimpleLag.outMax and eXAC2.imLimitedSimpleLag.K * eXAC2.imLimitedSimpleLag.u - eXAC2.imLimitedSimpleLag.state < 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_521(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,521};
  modelica_boolean tmp33;
  modelica_boolean tmp34;
  RELATIONHYSTERESIS(tmp33, data->localData[0]->realVars[2] /* eXAC2.imLimitedSimpleLag.state STATE(1) */, data->simulationInfo->realParameter[153] /* eXAC2.imLimitedSimpleLag.outMax PARAM */, 27, Greater);
  RELATIONHYSTERESIS(tmp34, (data->simulationInfo->realParameter[149] /* eXAC2.imLimitedSimpleLag.K PARAM */) * (data->localData[0]->realVars[75] /* eXAC2.imLimitedSimpleLag.u variable */) - data->localData[0]->realVars[2] /* eXAC2.imLimitedSimpleLag.state STATE(1) */, 0.0, 28, Less);
  data->localData[0]->booleanVars[1] /* $whenCondition2 DISCRETE */ = (tmp33 && tmp34);
  TRACE_POP
}
/*
equation index: 522
type: SIMPLE_ASSIGN
$whenCondition1 = eXAC2.imLimitedSimpleLag.state < eXAC2.imLimitedSimpleLag.outMin and eXAC2.imLimitedSimpleLag.K * eXAC2.imLimitedSimpleLag.u - eXAC2.imLimitedSimpleLag.state > 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_522(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,522};
  modelica_boolean tmp35;
  modelica_boolean tmp36;
  RELATIONHYSTERESIS(tmp35, data->localData[0]->realVars[2] /* eXAC2.imLimitedSimpleLag.state STATE(1) */, data->simulationInfo->realParameter[154] /* eXAC2.imLimitedSimpleLag.outMin PARAM */, 29, Less);
  RELATIONHYSTERESIS(tmp36, (data->simulationInfo->realParameter[149] /* eXAC2.imLimitedSimpleLag.K PARAM */) * (data->localData[0]->realVars[75] /* eXAC2.imLimitedSimpleLag.u variable */) - data->localData[0]->realVars[2] /* eXAC2.imLimitedSimpleLag.state STATE(1) */, 0.0, 30, Greater);
  data->localData[0]->booleanVars[0] /* $whenCondition1 DISCRETE */ = (tmp35 && tmp36);
  TRACE_POP
}
/*
equation index: 523
type: SIMPLE_ASSIGN
GEN1.V = eXAC2.ECOMP
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_523(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,523};
  data->localData[0]->realVars[36] /* GEN1.V variable */ = data->localData[0]->realVars[62] /* eXAC2.ECOMP variable */;
  TRACE_POP
}
/*
equation index: 524
type: SIMPLE_ASSIGN
gENROE.anglev = atan2(pwLine.vs.im, pwLine.vs.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_524(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,524};
  data->localData[0]->realVars[110] /* gENROE.anglev variable */ = atan2(data->localData[0]->realVars[125] /* pwLine.vs.im variable */, data->localData[0]->realVars[126] /* pwLine.vs.re variable */);
  TRACE_POP
}
/*
equation index: 525
type: SIMPLE_ASSIGN
GEN1.angle = 57.29577951308232 * gENROE.anglev
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_525(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,525};
  data->localData[0]->realVars[37] /* GEN1.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[110] /* gENROE.anglev variable */);
  TRACE_POP
}
/*
equation index: 526
type: SIMPLE_ASSIGN
gENROE.P = pwLine.vs.im * pwLine.is.im + pwLine.vs.re * pwLine.is.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_526(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,526};
  data->localData[0]->realVars[99] /* gENROE.P variable */ = (data->localData[0]->realVars[125] /* pwLine.vs.im variable */) * (data->localData[0]->realVars[123] /* pwLine.is.im variable */) + (data->localData[0]->realVars[126] /* pwLine.vs.re variable */) * (data->localData[0]->realVars[124] /* pwLine.is.re variable */);
  TRACE_POP
}
/*
equation index: 527
type: SIMPLE_ASSIGN
gENROE.PELEC = gENROE.P / gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_527(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,527};
  data->localData[0]->realVars[100] /* gENROE.PELEC variable */ = DIVISION_SIM(data->localData[0]->realVars[99] /* gENROE.P variable */,data->simulationInfo->realParameter[225] /* gENROE.CoB PARAM */,"gENROE.CoB",equationIndexes);
  TRACE_POP
}
/*
equation index: 528
type: SIMPLE_ASSIGN
gENROE.Q = pwLine.vs.im * pwLine.is.re - pwLine.vs.re * pwLine.is.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_528(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,528};
  data->localData[0]->realVars[106] /* gENROE.Q variable */ = (data->localData[0]->realVars[125] /* pwLine.vs.im variable */) * (data->localData[0]->realVars[124] /* pwLine.is.re variable */) - ((data->localData[0]->realVars[126] /* pwLine.vs.re variable */) * (data->localData[0]->realVars[123] /* pwLine.is.im variable */));
  TRACE_POP
}
/*
equation index: 529
type: SIMPLE_ASSIGN
pwLine.Q12 = (pwLine.vs.im * pwLine.is.re - pwLine.vs.re * pwLine.is.im) * pwLine.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_529(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,529};
  data->localData[0]->realVars[119] /* pwLine.Q12 variable */ = ((data->localData[0]->realVars[125] /* pwLine.vs.im variable */) * (data->localData[0]->realVars[124] /* pwLine.is.re variable */) - ((data->localData[0]->realVars[126] /* pwLine.vs.re variable */) * (data->localData[0]->realVars[123] /* pwLine.is.im variable */))) * (data->simulationInfo->realParameter[317] /* pwLine.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 530
type: SIMPLE_ASSIGN
pwLine.P12 = (pwLine.vs.re * pwLine.is.re + pwLine.vs.im * pwLine.is.im) * pwLine.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_530(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,530};
  data->localData[0]->realVars[117] /* pwLine.P12 variable */ = ((data->localData[0]->realVars[126] /* pwLine.vs.re variable */) * (data->localData[0]->realVars[124] /* pwLine.is.re variable */) + (data->localData[0]->realVars[125] /* pwLine.vs.im variable */) * (data->localData[0]->realVars[123] /* pwLine.is.im variable */)) * (data->simulationInfo->realParameter[317] /* pwLine.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 531
type: SIMPLE_ASSIGN
LOAD.V = constantLoad.v
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_531(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,531};
  data->localData[0]->realVars[44] /* LOAD.V variable */ = data->localData[0]->realVars[55] /* constantLoad.v variable */;
  TRACE_POP
}
/*
equation index: 532
type: SIMPLE_ASSIGN
pwLine3.P12 = (pwLine1.vs.re * pwLine3.is.re + pwLine1.vs.im * pwLine3.is.im) * pwLine3.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_532(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,532};
  data->localData[0]->realVars[139] /* pwLine3.P12 variable */ = ((data->localData[0]->realVars[138] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[146] /* pwLine3.is.re variable */) + (data->localData[0]->realVars[137] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[145] /* pwLine3.is.im variable */)) * (data->simulationInfo->realParameter[339] /* pwLine3.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 533
type: SIMPLE_ASSIGN
pwLine3.Q12 = (pwLine1.vs.im * pwLine3.is.re - pwLine1.vs.re * pwLine3.is.im) * pwLine3.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_533(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,533};
  data->localData[0]->realVars[141] /* pwLine3.Q12 variable */ = ((data->localData[0]->realVars[137] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[146] /* pwLine3.is.re variable */) - ((data->localData[0]->realVars[138] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[145] /* pwLine3.is.im variable */))) * (data->simulationInfo->realParameter[339] /* pwLine3.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 534
type: SIMPLE_ASSIGN
pwLine1.P12 = (pwLine1.vs.re * pwLine1.is.re + pwLine1.vs.im * pwLine1.is.im) * pwLine1.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_534(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,534};
  data->localData[0]->realVars[127] /* pwLine1.P12 variable */ = ((data->localData[0]->realVars[138] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[134] /* pwLine1.is.re variable */) + (data->localData[0]->realVars[137] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[133] /* pwLine1.is.im variable */)) * (data->simulationInfo->realParameter[328] /* pwLine1.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 535
type: SIMPLE_ASSIGN
pwLine1.Q12 = (pwLine1.vs.im * pwLine1.is.re - pwLine1.vs.re * pwLine1.is.im) * pwLine1.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_535(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,535};
  data->localData[0]->realVars[129] /* pwLine1.Q12 variable */ = ((data->localData[0]->realVars[137] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[134] /* pwLine1.is.re variable */) - ((data->localData[0]->realVars[138] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[133] /* pwLine1.is.im variable */))) * (data->simulationInfo->realParameter[328] /* pwLine1.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 536
type: SIMPLE_ASSIGN
constantLoad.angle = atan2(pwLine1.vs.im, pwLine1.vs.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_536(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,536};
  data->localData[0]->realVars[50] /* constantLoad.angle variable */ = atan2(data->localData[0]->realVars[137] /* pwLine1.vs.im variable */, data->localData[0]->realVars[138] /* pwLine1.vs.re variable */);
  TRACE_POP
}
/*
equation index: 537
type: SIMPLE_ASSIGN
LOAD.angle = 57.29577951308232 * constantLoad.angle
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_537(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,537};
  data->localData[0]->realVars[45] /* LOAD.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[50] /* constantLoad.angle variable */);
  TRACE_POP
}
/*
equation index: 538
type: SIMPLE_ASSIGN
pwLine.Q21 = (pwLine1.vs.re * pwLine.ir.im - pwLine1.vs.im * pwLine.ir.re) * pwLine.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_538(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,538};
  data->localData[0]->realVars[120] /* pwLine.Q21 variable */ = ((data->localData[0]->realVars[138] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[121] /* pwLine.ir.im variable */) - ((data->localData[0]->realVars[137] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[122] /* pwLine.ir.re variable */))) * (data->simulationInfo->realParameter[317] /* pwLine.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 539
type: SIMPLE_ASSIGN
pwLine.P21 = ((-pwLine1.vs.re) * pwLine.ir.re - pwLine1.vs.im * pwLine.ir.im) * pwLine.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_539(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,539};
  data->localData[0]->realVars[118] /* pwLine.P21 variable */ = (((-data->localData[0]->realVars[138] /* pwLine1.vs.re variable */)) * (data->localData[0]->realVars[122] /* pwLine.ir.re variable */) - ((data->localData[0]->realVars[137] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[121] /* pwLine.ir.im variable */))) * (data->simulationInfo->realParameter[317] /* pwLine.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 540
type: SIMPLE_ASSIGN
pwLine1.P21 = ((-pwLine1.vr.re) * pwLine1.ir.re - pwLine1.vr.im * pwLine1.ir.im) * pwLine1.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_540(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,540};
  data->localData[0]->realVars[128] /* pwLine1.P21 variable */ = (((-data->localData[0]->realVars[136] /* pwLine1.vr.re variable */)) * (data->localData[0]->realVars[132] /* pwLine1.ir.re variable */) - ((data->localData[0]->realVars[135] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[131] /* pwLine1.ir.im variable */))) * (data->simulationInfo->realParameter[328] /* pwLine1.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 541
type: SIMPLE_ASSIGN
pwLine1.Q21 = (pwLine1.vr.re * pwLine1.ir.im - pwLine1.vr.im * pwLine1.ir.re) * pwLine1.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_541(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,541};
  data->localData[0]->realVars[130] /* pwLine1.Q21 variable */ = ((data->localData[0]->realVars[136] /* pwLine1.vr.re variable */) * (data->localData[0]->realVars[131] /* pwLine1.ir.im variable */) - ((data->localData[0]->realVars[135] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[132] /* pwLine1.ir.re variable */))) * (data->simulationInfo->realParameter[328] /* pwLine1.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 542
type: SIMPLE_ASSIGN
pwLine4.P21 = ((-pwLine1.vr.re) * pwLine4.ir.re - pwLine1.vr.im * pwLine4.ir.im) * pwLine4.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_542(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,542};
  data->localData[0]->realVars[150] /* pwLine4.P21 variable */ = (((-data->localData[0]->realVars[136] /* pwLine1.vr.re variable */)) * (data->localData[0]->realVars[154] /* pwLine4.ir.re variable */) - ((data->localData[0]->realVars[135] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[153] /* pwLine4.ir.im variable */))) * (data->simulationInfo->realParameter[350] /* pwLine4.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 543
type: SIMPLE_ASSIGN
pwLine4.Q21 = (pwLine1.vr.re * pwLine4.ir.im - pwLine1.vr.im * pwLine4.ir.re) * pwLine4.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_543(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,543};
  data->localData[0]->realVars[152] /* pwLine4.Q21 variable */ = ((data->localData[0]->realVars[136] /* pwLine1.vr.re variable */) * (data->localData[0]->realVars[153] /* pwLine4.ir.im variable */) - ((data->localData[0]->realVars[135] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[154] /* pwLine4.ir.re variable */))) * (data->simulationInfo->realParameter[350] /* pwLine4.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 544
type: SIMPLE_ASSIGN
GEN2.V = sqrt(pwLine1.vr.re ^ 2.0 + pwLine1.vr.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_544(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,544};
  modelica_real tmp37;
  modelica_real tmp38;
  tmp37 = data->localData[0]->realVars[136] /* pwLine1.vr.re variable */;
  tmp38 = data->localData[0]->realVars[135] /* pwLine1.vr.im variable */;
  data->localData[0]->realVars[40] /* GEN2.V variable */ = sqrt((tmp37 * tmp37) + (tmp38 * tmp38));
  TRACE_POP
}
/*
equation index: 545
type: SIMPLE_ASSIGN
gENCLS.V = GEN2.V
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_545(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,545};
  data->localData[0]->realVars[89] /* gENCLS.V variable */ = data->localData[0]->realVars[40] /* GEN2.V variable */;
  TRACE_POP
}
/*
equation index: 546
type: SIMPLE_ASSIGN
gENCLS.anglev = atan2(pwLine1.vr.im, pwLine1.vr.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_546(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,546};
  data->localData[0]->realVars[90] /* gENCLS.anglev variable */ = atan2(data->localData[0]->realVars[135] /* pwLine1.vr.im variable */, data->localData[0]->realVars[136] /* pwLine1.vr.re variable */);
  TRACE_POP
}
/*
equation index: 547
type: SIMPLE_ASSIGN
GEN2.angle = 57.29577951308232 * gENCLS.anglev
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_547(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,547};
  data->localData[0]->realVars[41] /* GEN2.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[90] /* gENCLS.anglev variable */);
  TRACE_POP
}
/*
equation index: 548
type: SIMPLE_ASSIGN
gENCLS.P = (-pwLine1.vr.re) * gENCLS.p.ir - pwLine1.vr.im * gENCLS.p.ii
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_548(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,548};
  data->localData[0]->realVars[87] /* gENCLS.P variable */ = ((-data->localData[0]->realVars[136] /* pwLine1.vr.re variable */)) * (data->localData[0]->realVars[95] /* gENCLS.p.ir variable */) - ((data->localData[0]->realVars[135] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[94] /* gENCLS.p.ii variable */));
  TRACE_POP
}
/*
equation index: 549
type: SIMPLE_ASSIGN
gENCLS.Q = pwLine1.vr.re * gENCLS.p.ii - pwLine1.vr.im * gENCLS.p.ir
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_549(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,549};
  data->localData[0]->realVars[88] /* gENCLS.Q variable */ = (data->localData[0]->realVars[136] /* pwLine1.vr.re variable */) * (data->localData[0]->realVars[94] /* gENCLS.p.ii variable */) - ((data->localData[0]->realVars[135] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[95] /* gENCLS.p.ir variable */));
  TRACE_POP
}
/*
equation index: 552
type: ALGORITHM

  assert(eXAC2.limiter.uMax >= eXAC2.limiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(eXAC2.limiter.uMax, 6, 0, true) + ") < uMin (=" + String(eXAC2.limiter.uMin, 6, 0, true) + ")");
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_552(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,552};
  modelica_boolean tmp39;
  static const MMC_DEFSTRINGLIT(tmp40,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp41;
  static const MMC_DEFSTRINGLIT(tmp42,11,") < uMin (=");
  modelica_string tmp43;
  static int tmp44 = 0;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  {
    tmp39 = GreaterEq(data->simulationInfo->realParameter[174] /* eXAC2.limiter.uMax PARAM */,data->simulationInfo->realParameter[175] /* eXAC2.limiter.uMin PARAM */);
    if(!tmp39)
    {
      tmp41 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[174] /* eXAC2.limiter.uMax PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp40),tmp41);
      tmpMeta[1] = stringAppend(tmpMeta[0],MMC_REFSTRINGLIT(tmp42));
      tmp43 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[175] /* eXAC2.limiter.uMin PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[2] = stringAppend(tmpMeta[1],tmp43);
      tmpMeta[3] = stringAppend(tmpMeta[2],(modelica_string) mmc_strings_len1[41]);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.3/Blocks/Nonlinear.mo",22,9,23,65,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\neXAC2.limiter.uMax >= eXAC2.limiter.uMin", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(tmpMeta[3]));
      }
    }
  }
  TRACE_POP
}
/*
equation index: 550
type: WHEN

when {$whenCondition2} then
  reinit(eXAC2.imLimitedSimpleLag.state,  eXAC2.imLimitedSimpleLag.outMax);
end when;
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_550(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,550};
  if((data->localData[0]->booleanVars[1] /* $whenCondition2 DISCRETE */ && !data->simulationInfo->booleanVarsPre[1] /* $whenCondition2 DISCRETE */ /* edge */))
  {
    data->localData[0]->realVars[2] /* eXAC2.imLimitedSimpleLag.state STATE(1) */ = data->simulationInfo->realParameter[153] /* eXAC2.imLimitedSimpleLag.outMax PARAM */;
    infoStreamPrint(LOG_EVENTS, 0, "reinit eXAC2.imLimitedSimpleLag.state = %g", data->localData[0]->realVars[2] /* eXAC2.imLimitedSimpleLag.state STATE(1) */);
    data->simulationInfo->needToIterate = 1;
  }
  else if((data->localData[0]->booleanVars[0] /* $whenCondition1 DISCRETE */ && !data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */ /* edge */))
  {
    data->localData[0]->realVars[2] /* eXAC2.imLimitedSimpleLag.state STATE(1) */ = data->simulationInfo->realParameter[154] /* eXAC2.imLimitedSimpleLag.outMin PARAM */;
    infoStreamPrint(LOG_EVENTS, 0, "reinit eXAC2.imLimitedSimpleLag.state = %g", data->localData[0]->realVars[2] /* eXAC2.imLimitedSimpleLag.state STATE(1) */);
    data->simulationInfo->needToIterate = 1;
  }
  TRACE_POP
}

OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_functionDAE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  int equationIndexes[1] = {0};
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_DAE);
#endif

  data->simulationInfo->needToIterate = 0;
  data->simulationInfo->discreteCall = 1;
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_functionLocalKnownVars(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_369(data, threadData);

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

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_478(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_479(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_480(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_481(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_482(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_483(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_484(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_485(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_486(data, threadData);

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

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_521(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_522(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_523(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_524(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_525(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_526(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_527(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_528(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_529(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_530(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_531(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_532(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_533(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_534(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_535(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_536(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_537(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_538(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_539(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_540(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_541(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_542(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_543(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_544(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_545(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_546(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_547(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_548(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_549(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_552(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_550(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_DAE);
#endif
  TRACE_POP
  return 0;
}


int OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_functionLocalKnownVars(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
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

static void functionODE_system0(DATA *data, threadData_t *threadData)
{
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
}

int OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_functionODE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_FUNCTION_ODE);
#endif

  
  data->simulationInfo->callStatistics.functionODE++;
  
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_functionLocalKnownVars(data, threadData);
  functionODE_system0(data, threadData);

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_FUNCTION_ODE);
#endif

  TRACE_POP
  return 0;
}

/* forward the main in the simulation runtime */
extern int _main_SimulationRuntime(int argc, char**argv, DATA *data, threadData_t *threadData);

#include "OpenIPSL.Examples.Controls.PSSE.ES.EXAC2_12jac.h"
#include "OpenIPSL.Examples.Controls.PSSE.ES.EXAC2_13opt.h"

struct OpenModelicaGeneratedFunctionCallbacks OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_callback = {
   (int (*)(DATA *, threadData_t *, void *)) OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_performSimulation,
   (int (*)(DATA *, threadData_t *, void *)) OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_performQSSSimulation,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_updateContinuousSystem,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_callExternalObjectDestructors,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_initialNonLinearSystem,
   NULL,
   NULL,
   #if !defined(OMC_NO_STATESELECTION)
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_initializeStateSets,
   #else
   NULL,
   #endif
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_initializeDAEmodeData,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_functionODE,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_functionAlgebraics,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_functionDAE,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_functionLocalKnownVars,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_input_function,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_input_function_init,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_input_function_updateStartValues,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_data_function,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_output_function,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_setc_function,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_function_storeDelayed,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_updateBoundVariableAttributes,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_functionInitialEquations,
   1, /* useHomotopy - 0: local homotopy (equidistant lambda), 1: global homotopy (equidistant lambda), 2: new global homotopy approach (adaptive lambda), 3: new local homotopy approach (adaptive lambda)*/
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_functionInitialEquations_lambda0,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_functionRemovedInitialEquations,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_updateBoundParameters,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_checkForAsserts,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_function_ZeroCrossingsEquations,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_function_ZeroCrossings,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_function_updateRelations,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_zeroCrossingDescription,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_relationDescription,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_function_initSample,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_INDEX_JAC_A,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_INDEX_JAC_B,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_INDEX_JAC_C,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_INDEX_JAC_D,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_INDEX_JAC_F,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_initialAnalyticJacobianA,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_initialAnalyticJacobianB,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_initialAnalyticJacobianC,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_initialAnalyticJacobianD,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_initialAnalyticJacobianF,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_functionJacA_column,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_functionJacB_column,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_functionJacC_column,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_functionJacD_column,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_functionJacF_column,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_linear_model_frame,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_linear_model_datarecovery_frame,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_mayer,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_lagrange,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_pickUpBoundsForInputsInOptimization,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_setInputData,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_getTimeGrid,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_symbolicInlineSystem,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_function_initSynchronous,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_function_updateSynchronous,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_function_equationsSynchronous,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_inputNames,
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
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_setupDataStruc(DATA *data, threadData_t *threadData)
{
  assertStreamPrint(threadData,0!=data, "Error while initialize Data");
  threadData->localRoots[LOCAL_ROOT_SIMULATION_DATA] = data;
  data->callback = &OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_callback;
  OpenModelica_updateUriMapping(threadData, MMC_REFSTRUCTLIT(_OMC_LIT_RESOURCES));
  data->modelData->modelName = "OpenIPSL.Examples.Controls.PSSE.ES.EXAC2";
  data->modelData->modelFilePrefix = "OpenIPSL.Examples.Controls.PSSE.ES.EXAC2";
  data->modelData->resultFileName = NULL;
  data->modelData->modelDir = "/home/manuelnvro/dev/Gitted/DockerTraining/OpenIPSLVerification/VerificationRoutines/OpenIPSL/OpenIPSL/Examples/Controls/PSSE/ES";
  data->modelData->modelGUID = "{1b7c1df4-11c8-49d7-9953-36a047006ec8}";
  #if defined(OPENMODELICA_XML_FROM_FILE_AT_RUNTIME)
  data->modelData->initXMLData = NULL;
  data->modelData->modelDataXml.infoXMLData = NULL;
  #else
  #if defined(_MSC_VER) /* handle joke compilers */
  {
  /* for MSVC we encode a string like char x[] = {'a', 'b', 'c', '\0'} */
  /* because the string constant limit is 65535 bytes */
  static const char contents_init[] =
    #include "OpenIPSL.Examples.Controls.PSSE.ES.EXAC2_init.c"
    ;
  static const char contents_info[] =
    #include "OpenIPSL.Examples.Controls.PSSE.ES.EXAC2_info.c"
    ;
    data->modelData->initXMLData = contents_init;
    data->modelData->modelDataXml.infoXMLData = contents_info;
  }
  #else /* handle real compilers */
  data->modelData->initXMLData =
  #include "OpenIPSL.Examples.Controls.PSSE.ES.EXAC2_init.c"
    ;
  data->modelData->modelDataXml.infoXMLData =
  #include "OpenIPSL.Examples.Controls.PSSE.ES.EXAC2_info.c"
    ;
  #endif /* defined(_MSC_VER) */
  #endif /* defined(OPENMODELICA_XML_FROM_FILE_AT_RUNTIME) */
  data->modelData->runTestsuite = 0;
  
  data->modelData->nStates = 13;
  data->modelData->nVariablesReal = 157;
  data->modelData->nDiscreteReal = 0;
  data->modelData->nVariablesInteger = 0;
  data->modelData->nVariablesBoolean = 3;
  data->modelData->nVariablesString = 0;
  data->modelData->nParametersReal = 360;
  data->modelData->nParametersInteger = 12;
  data->modelData->nParametersBoolean = 75;
  data->modelData->nParametersString = 0;
  data->modelData->nInputVars = 0;
  data->modelData->nOutputVars = 0;
  
  data->modelData->nAliasReal = 111;
  data->modelData->nAliasInteger = 0;
  data->modelData->nAliasBoolean = 0;
  data->modelData->nAliasString = 0;
  
  data->modelData->nZeroCrossings = 29;
  data->modelData->nSamples = 0;
  data->modelData->nRelations = 31;
  data->modelData->nMathEvents = 0;
  data->modelData->nExtObjs = 0;
  
  data->modelData->modelDataXml.fileName = "OpenIPSL.Examples.Controls.PSSE.ES.EXAC2_info.json";
  data->modelData->modelDataXml.modelInfoXmlLength = 0;
  data->modelData->modelDataXml.nFunctions = 8;
  data->modelData->modelDataXml.nProfileBlocks = 0;
  data->modelData->modelDataXml.nEquations = 838;
  data->modelData->nMixedSystems = 0;
  data->modelData->nLinearSystems = 0;
  data->modelData->nNonLinearSystems = 5;
  data->modelData->nStateSets = 0;
  data->modelData->nJacobians = 6;
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
  
    OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_setupDataStruc(&data, threadData);
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


