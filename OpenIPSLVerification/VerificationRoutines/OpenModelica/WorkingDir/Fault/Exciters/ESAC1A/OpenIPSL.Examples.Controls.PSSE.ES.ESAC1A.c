/* Main Simulation File */

#if defined(__cplusplus)
extern "C" {
#endif

#include "OpenIPSL.Examples.Controls.PSSE.ES.ESAC1A_model.h"
#include "simulation/solver/events.h"

#define prefixedName_performSimulation OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_performSimulation
#define prefixedName_updateContinuousSystem OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_updateContinuousSystem
#include <simulation/solver/perform_simulation.c.inc>

#define prefixedName_performQSSSimulation OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_performQSSSimulation
#include <simulation/solver/perform_qss_simulation.c.inc>

/* dummy VARINFO and FILEINFO */
const FILE_INFO dummyFILE_INFO = omc_dummyFileInfo;
const VAR_INFO dummyVAR_INFO = omc_dummyVarInfo;

int OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_input_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_input_function_init(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_input_function_updateStartValues(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_inputNames(DATA *data, char ** names){
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_data_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_output_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_setc_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/*
equation index: 497
type: SIMPLE_ASSIGN
eSAC1A.EFD0 = gENROE.efd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_497(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,497};
  data->localData[0]->realVars[59] /* eSAC1A.EFD0 variable */ = data->simulationInfo->realParameter[276] /* gENROE.efd0 PARAM */;
  TRACE_POP
}
/*
equation index: 498
type: SIMPLE_ASSIGN
$DER.gENCLS.delta = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_498(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,498};
  data->localData[0]->realVars[18] /* der(gENCLS.delta) STATE_DER */ = 0.0;
  TRACE_POP
}
/*
equation index: 499
type: SIMPLE_ASSIGN
$DER.gENCLS.eq = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_499(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,499};
  data->localData[0]->realVars[19] /* der(gENCLS.eq) STATE_DER */ = 0.0;
  TRACE_POP
}
/*
equation index: 500
type: SIMPLE_ASSIGN
gENROE.PSIppd = gENROE.Epq * gENROE.K3d + gENROE.PSIkd * gENROE.K4d
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_500(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,500};
  data->localData[0]->realVars[95] /* gENROE.PSIppd variable */ = (data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */) * (data->simulationInfo->realParameter[224] /* gENROE.K3d PARAM */) + (data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */) * (data->simulationInfo->realParameter[226] /* gENROE.K4d PARAM */);
  TRACE_POP
}
/*
equation index: 501
type: SIMPLE_ASSIGN
gENROE.PSIppq = gENROE.PSIkq * gENROE.K4q + gENROE.Epd * gENROE.K3q
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_501(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,501};
  data->localData[0]->realVars[96] /* gENROE.PSIppq variable */ = (data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */) * (data->simulationInfo->realParameter[227] /* gENROE.K4q PARAM */) + (data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */) * (data->simulationInfo->realParameter[225] /* gENROE.K3q PARAM */);
  TRACE_POP
}
/*
equation index: 502
type: SIMPLE_ASSIGN
gENROE.PSIpp = sqrt(gENROE.PSIppd ^ 2.0 + gENROE.PSIppq ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_502(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,502};
  modelica_real tmp6;
  modelica_real tmp7;
  tmp6 = data->localData[0]->realVars[95] /* gENROE.PSIppd variable */;
  tmp7 = data->localData[0]->realVars[96] /* gENROE.PSIppq variable */;
  data->localData[0]->realVars[94] /* gENROE.PSIpp variable */ = sqrt((tmp6 * tmp6) + (tmp7 * tmp7));
  TRACE_POP
}
/*
equation index: 503
type: SIMPLE_ASSIGN
$cse5 = OpenIPSL.NonElectrical.Functions.SE_exp(gENROE.PSIpp, gENROE.S10, gENROE.S12, 1.0, 1.2)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_503(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,503};
  data->localData[0]->realVars[29] /* $cse5 variable */ = omc_OpenIPSL_NonElectrical_Functions_SE__exp(threadData, data->localData[0]->realVars[94] /* gENROE.PSIpp variable */, data->simulationInfo->realParameter[246] /* gENROE.S10 PARAM */, data->simulationInfo->realParameter[247] /* gENROE.S12 PARAM */, 1.0, 1.2);
  TRACE_POP
}
/*
equation index: 504
type: SIMPLE_ASSIGN
$DER.gENROE.delta = gENROE.w_b * gENROE.w
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_504(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,504};
  data->localData[0]->realVars[24] /* der(gENROE.delta) STATE_DER */ = (data->simulationInfo->realParameter[290] /* gENROE.w_b PARAM */) * (data->localData[0]->realVars[12] /* gENROE.w STATE(1) */);
  TRACE_POP
}
/*
equation index: 505
type: SIMPLE_ASSIGN
eSAC1A.imLeadLag.TF.x[1] = eSAC1A.imLeadLag.TF.x_scaled[1] / eSAC1A.imLeadLag.TF.a_end
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_505(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,505};
  data->localData[0]->realVars[65] /* eSAC1A.imLeadLag.TF.x[1] variable */ = DIVISION_SIM(data->localData[0]->realVars[1] /* eSAC1A.imLeadLag.TF.x_scaled[1] STATE(1) */,data->simulationInfo->realParameter[131] /* eSAC1A.imLeadLag.TF.a_end PARAM */,"eSAC1A.imLeadLag.TF.a_end",equationIndexes);
  TRACE_POP
}
/*
equation index: 506
type: SIMPLE_ASSIGN
eSAC1A.rotatingExciterWithDemagnetization.gain.y = eSAC1A.rotatingExciterWithDemagnetization.gain.k * eSAC1A.rotatingExciterWithDemagnetization.sISO.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_506(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,506};
  data->localData[0]->realVars[76] /* eSAC1A.rotatingExciterWithDemagnetization.gain.y variable */ = (data->simulationInfo->realParameter[164] /* eSAC1A.rotatingExciterWithDemagnetization.gain.k PARAM */) * (data->localData[0]->realVars[3] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */);
  TRACE_POP
}
/*
equation index: 507
type: SIMPLE_ASSIGN
eSAC1A.rotatingExciterWithDemagnetization.se1.VE_OUT = OpenIPSL.NonElectrical.Functions.SE(eSAC1A.rotatingExciterWithDemagnetization.sISO.y, eSAC1A.rotatingExciterWithDemagnetization.se1.SE1, eSAC1A.rotatingExciterWithDemagnetization.se1.SE2, eSAC1A.rotatingExciterWithDemagnetization.se1.E1, eSAC1A.rotatingExciterWithDemagnetization.se1.E2)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_507(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,507};
  data->localData[0]->realVars[77] /* eSAC1A.rotatingExciterWithDemagnetization.se1.VE_OUT variable */ = omc_OpenIPSL_NonElectrical_Functions_SE(threadData, data->localData[0]->realVars[3] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */, data->simulationInfo->realParameter[171] /* eSAC1A.rotatingExciterWithDemagnetization.se1.SE1 PARAM */, data->simulationInfo->realParameter[172] /* eSAC1A.rotatingExciterWithDemagnetization.se1.SE2 PARAM */, data->simulationInfo->realParameter[169] /* eSAC1A.rotatingExciterWithDemagnetization.se1.E1 PARAM */, data->simulationInfo->realParameter[170] /* eSAC1A.rotatingExciterWithDemagnetization.se1.E2 PARAM */);
  TRACE_POP
}
/*
equation index: 508
type: SIMPLE_ASSIGN
eSAC1A.rotatingExciterWithDemagnetization.VE.y = eSAC1A.rotatingExciterWithDemagnetization.sISO.y * eSAC1A.rotatingExciterWithDemagnetization.se1.VE_OUT
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_508(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,508};
  data->localData[0]->realVars[74] /* eSAC1A.rotatingExciterWithDemagnetization.VE.y variable */ = (data->localData[0]->realVars[3] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */) * (data->localData[0]->realVars[77] /* eSAC1A.rotatingExciterWithDemagnetization.se1.VE_OUT variable */);
  TRACE_POP
}
/*
equation index: 509
type: SIMPLE_ASSIGN
$cse7 = cos(gENROE.delta)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_509(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,509};
  data->localData[0]->realVars[31] /* $cse7 variable */ = cos(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */);
  TRACE_POP
}
/*
equation index: 510
type: SIMPLE_ASSIGN
$cse6 = sin(gENROE.delta)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_510(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,510};
  data->localData[0]->realVars[30] /* $cse6 variable */ = sin(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */);
  TRACE_POP
}
/*
equation index: 511
type: SIMPLE_ASSIGN
$cse2 = cos(gENCLS.delta)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_511(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,511};
  data->localData[0]->realVars[27] /* $cse2 variable */ = cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */);
  TRACE_POP
}
/*
equation index: 512
type: SIMPLE_ASSIGN
$cse1 = sin(gENCLS.delta)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_512(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,512};
  data->localData[0]->realVars[26] /* $cse1 variable */ = sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */);
  TRACE_POP
}
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_513(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_514(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_515(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_516(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_517(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_518(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_519(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_520(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_521(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_522(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_523(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_524(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_525(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_526(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_527(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_528(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_529(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_530(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_531(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_532(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_533(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_534(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_535(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_557(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_556(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_555(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_554(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_553(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_552(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_551(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_550(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_549(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_548(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_547(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_546(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_545(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_544(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_543(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_542(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_541(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_540(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_539(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_538(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_537(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_536(DATA*, threadData_t*);
/*
equation index: 603
indexNonlinear: 4
type: NONLINEAR

vars: {pwLine1.is.re, pwLine.ir.re, pwLine1.is.im, constantLoad.p.ii, pwLine4.is.re, pwLine3.ir.re, pwLine3.ir.im, pwLine4.is.im, pwLine3.is.re, pwLine3.is.im, pwLine1.ir.im, pwLine1.ir.re, gENCLS.id, gENCLS.iq, pwLine4.vr.re, pwLine4.vr.im, gENROE.iq, gENROE.id, pwLine3.vs.im, pwLine3.vs.re, pwLine4.vs.re, pwLine4.vs.im}
eqns: {513, 514, 515, 516, 517, 518, 519, 520, 521, 522, 523, 524, 525, 526, 527, 528, 529, 530, 531, 532, 533, 534, 535, 557, 556, 555, 554, 553, 552, 551, 550, 549, 548, 547, 546, 545, 544, 543, 542, 541, 540, 539, 538, 537, 536}
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_603(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,603};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 603 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[0] = data->localData[0]->realVars[126] /* pwLine1.is.re variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[1] = data->localData[0]->realVars[114] /* pwLine.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[2] = data->localData[0]->realVars[125] /* pwLine1.is.im variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[3] = data->localData[0]->realVars[53] /* constantLoad.p.ii variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[4] = data->localData[0]->realVars[144] /* pwLine4.is.re variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[5] = data->localData[0]->realVars[132] /* pwLine3.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[6] = data->localData[0]->realVars[131] /* pwLine3.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[7] = data->localData[0]->realVars[143] /* pwLine4.is.im variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[8] = data->localData[0]->realVars[134] /* pwLine3.is.re variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[9] = data->localData[0]->realVars[133] /* pwLine3.is.im variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[10] = data->localData[0]->realVars[123] /* pwLine1.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[11] = data->localData[0]->realVars[124] /* pwLine1.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[12] = data->localData[0]->realVars[83] /* gENCLS.id variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[13] = data->localData[0]->realVars[84] /* gENCLS.iq variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[14] = data->localData[0]->realVars[146] /* pwLine4.vr.re variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[15] = data->localData[0]->realVars[145] /* pwLine4.vr.im variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[16] = data->localData[0]->realVars[104] /* gENROE.iq variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[17] = data->localData[0]->realVars[103] /* gENROE.id variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[18] = data->localData[0]->realVars[135] /* pwLine3.vs.im variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[19] = data->localData[0]->realVars[136] /* pwLine3.vs.re variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[20] = data->localData[0]->realVars[148] /* pwLine4.vs.re variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[21] = data->localData[0]->realVars[147] /* pwLine4.vs.im variable */;
  retValue = solve_nonlinear_system(data, threadData, 4);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,603};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 603 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[126] /* pwLine1.is.re variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[0];
  data->localData[0]->realVars[114] /* pwLine.ir.re variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[1];
  data->localData[0]->realVars[125] /* pwLine1.is.im variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[2];
  data->localData[0]->realVars[53] /* constantLoad.p.ii variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[3];
  data->localData[0]->realVars[144] /* pwLine4.is.re variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[4];
  data->localData[0]->realVars[132] /* pwLine3.ir.re variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[5];
  data->localData[0]->realVars[131] /* pwLine3.ir.im variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[6];
  data->localData[0]->realVars[143] /* pwLine4.is.im variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[7];
  data->localData[0]->realVars[134] /* pwLine3.is.re variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[8];
  data->localData[0]->realVars[133] /* pwLine3.is.im variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[9];
  data->localData[0]->realVars[123] /* pwLine1.ir.im variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[10];
  data->localData[0]->realVars[124] /* pwLine1.ir.re variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[11];
  data->localData[0]->realVars[83] /* gENCLS.id variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[12];
  data->localData[0]->realVars[84] /* gENCLS.iq variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[13];
  data->localData[0]->realVars[146] /* pwLine4.vr.re variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[14];
  data->localData[0]->realVars[145] /* pwLine4.vr.im variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[15];
  data->localData[0]->realVars[104] /* gENROE.iq variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[16];
  data->localData[0]->realVars[103] /* gENROE.id variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[17];
  data->localData[0]->realVars[135] /* pwLine3.vs.im variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[18];
  data->localData[0]->realVars[136] /* pwLine3.vs.re variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[19];
  data->localData[0]->realVars[148] /* pwLine4.vs.re variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[20];
  data->localData[0]->realVars[147] /* pwLine4.vs.im variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[21];
  TRACE_POP
}
/*
equation index: 604
type: SIMPLE_ASSIGN
pwLine4.P12 = (pwLine4.vs.re * pwLine4.is.re + pwLine4.vs.im * pwLine4.is.im) * pwLine4.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_604(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,604};
  data->localData[0]->realVars[137] /* pwLine4.P12 variable */ = ((data->localData[0]->realVars[148] /* pwLine4.vs.re variable */) * (data->localData[0]->realVars[144] /* pwLine4.is.re variable */) + (data->localData[0]->realVars[147] /* pwLine4.vs.im variable */) * (data->localData[0]->realVars[143] /* pwLine4.is.im variable */)) * (data->simulationInfo->realParameter[331] /* pwLine4.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 605
type: SIMPLE_ASSIGN
pwLine4.Q12 = (pwLine4.vs.im * pwLine4.is.re - pwLine4.vs.re * pwLine4.is.im) * pwLine4.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_605(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,605};
  data->localData[0]->realVars[139] /* pwLine4.Q12 variable */ = ((data->localData[0]->realVars[147] /* pwLine4.vs.im variable */) * (data->localData[0]->realVars[144] /* pwLine4.is.re variable */) - ((data->localData[0]->realVars[148] /* pwLine4.vs.re variable */) * (data->localData[0]->realVars[143] /* pwLine4.is.im variable */))) * (data->simulationInfo->realParameter[331] /* pwLine4.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 606
type: SIMPLE_ASSIGN
pwLine3.P21 = ((-pwLine4.vs.re) * pwLine3.ir.re - pwLine4.vs.im * pwLine3.ir.im) * pwLine3.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_606(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,606};
  data->localData[0]->realVars[128] /* pwLine3.P21 variable */ = (((-data->localData[0]->realVars[148] /* pwLine4.vs.re variable */)) * (data->localData[0]->realVars[132] /* pwLine3.ir.re variable */) - ((data->localData[0]->realVars[147] /* pwLine4.vs.im variable */) * (data->localData[0]->realVars[131] /* pwLine3.ir.im variable */))) * (data->simulationInfo->realParameter[320] /* pwLine3.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 607
type: SIMPLE_ASSIGN
pwLine3.Q21 = (pwLine4.vs.re * pwLine3.ir.im - pwLine4.vs.im * pwLine3.ir.re) * pwLine3.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_607(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,607};
  data->localData[0]->realVars[130] /* pwLine3.Q21 variable */ = ((data->localData[0]->realVars[148] /* pwLine4.vs.re variable */) * (data->localData[0]->realVars[131] /* pwLine3.ir.im variable */) - ((data->localData[0]->realVars[147] /* pwLine4.vs.im variable */) * (data->localData[0]->realVars[132] /* pwLine3.ir.re variable */))) * (data->simulationInfo->realParameter[320] /* pwLine3.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 608
type: SIMPLE_ASSIGN
FAULT.V = sqrt(pwLine4.vs.re ^ 2.0 + pwLine4.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_608(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,608};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[148] /* pwLine4.vs.re variable */;
  tmp1 = data->localData[0]->realVars[147] /* pwLine4.vs.im variable */;
  data->localData[0]->realVars[32] /* FAULT.V variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 609
type: SIMPLE_ASSIGN
$cse4 = atan2(pwLine4.vs.im, pwLine4.vs.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_609(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,609};
  data->localData[0]->realVars[28] /* $cse4 variable */ = atan2(data->localData[0]->realVars[147] /* pwLine4.vs.im variable */, data->localData[0]->realVars[148] /* pwLine4.vs.re variable */);
  TRACE_POP
}
/*
equation index: 610
type: SIMPLE_ASSIGN
FAULT.angle = 57.29577951308232 * $cse4
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_610(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,610};
  data->localData[0]->realVars[33] /* FAULT.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[28] /* $cse4 variable */);
  TRACE_POP
}
/*
equation index: 611
type: SIMPLE_ASSIGN
$DER.gENROE.PSIkq = (gENROE.Epd + (gENROE.Xpq - gENROE.Xl) * gENROE.iq - gENROE.PSIkq) / gENROE.Tppq0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_611(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,611};
  data->localData[0]->realVars[23] /* der(gENROE.PSIkq) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */ + (data->simulationInfo->realParameter[262] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[257] /* gENROE.Xl PARAM */) * (data->localData[0]->realVars[104] /* gENROE.iq variable */) - data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */,data->simulationInfo->realParameter[251] /* gENROE.Tppq0 PARAM */,"gENROE.Tppq0",equationIndexes);
  TRACE_POP
}
/*
equation index: 612
type: SIMPLE_ASSIGN
gENROE.XaqIlq = gENROE.K1q * (gENROE.Epd + (gENROE.Xpq - gENROE.Xl) * gENROE.iq - gENROE.PSIkq) + gENROE.Epd + gENROE.iq * (gENROE.Xpq - gENROE.Xq) + $cse5 * gENROE.PSIppq * (gENROE.Xq - gENROE.Xl) / (gENROE.Xd - gENROE.Xl)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_612(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,612};
  data->localData[0]->realVars[100] /* gENROE.XaqIlq variable */ = (data->simulationInfo->realParameter[221] /* gENROE.K1q PARAM */) * (data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */ + (data->simulationInfo->realParameter[262] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[257] /* gENROE.Xl PARAM */) * (data->localData[0]->realVars[104] /* gENROE.iq variable */) - data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */) + data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */ + (data->localData[0]->realVars[104] /* gENROE.iq variable */) * (data->simulationInfo->realParameter[262] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[263] /* gENROE.Xq PARAM */) + (data->localData[0]->realVars[29] /* $cse5 variable */) * ((data->localData[0]->realVars[96] /* gENROE.PSIppq variable */) * (DIVISION_SIM(data->simulationInfo->realParameter[263] /* gENROE.Xq PARAM */ - data->simulationInfo->realParameter[257] /* gENROE.Xl PARAM */,data->simulationInfo->realParameter[256] /* gENROE.Xd PARAM */ - data->simulationInfo->realParameter[257] /* gENROE.Xl PARAM */,"gENROE.Xd - gENROE.Xl",equationIndexes)));
  TRACE_POP
}
/*
equation index: 613
type: SIMPLE_ASSIGN
$DER.gENROE.Epd = (-gENROE.XaqIlq) / gENROE.Tpq0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_613(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,613};
  data->localData[0]->realVars[20] /* der(gENROE.Epd) STATE_DER */ = DIVISION_SIM((-data->localData[0]->realVars[100] /* gENROE.XaqIlq variable */),data->simulationInfo->realParameter[252] /* gENROE.Tpq0 PARAM */,"gENROE.Tpq0",equationIndexes);
  TRACE_POP
}
/*
equation index: 614
type: SIMPLE_ASSIGN
GEN1.V = sqrt(pwLine.vs.re ^ 2.0 + pwLine.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_614(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,614};
  modelica_real tmp2;
  modelica_real tmp3;
  tmp2 = data->localData[0]->realVars[118] /* pwLine.vs.re variable */;
  tmp3 = data->localData[0]->realVars[117] /* pwLine.vs.im variable */;
  data->localData[0]->realVars[36] /* GEN1.V variable */ = sqrt((tmp2 * tmp2) + (tmp3 * tmp3));
  TRACE_POP
}
/*
equation index: 615
type: SIMPLE_ASSIGN
$DER.eSAC1A.imSimpleLag.state = (eSAC1A.imSimpleLag.K * GEN1.V - eSAC1A.imSimpleLag.state) / eSAC1A.imSimpleLag.T_mod
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_615(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,615};
  data->localData[0]->realVars[15] /* der(eSAC1A.imSimpleLag.state) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[143] /* eSAC1A.imSimpleLag.K PARAM */) * (data->localData[0]->realVars[36] /* GEN1.V variable */) - data->localData[0]->realVars[2] /* eSAC1A.imSimpleLag.state STATE(1) */,data->simulationInfo->realParameter[145] /* eSAC1A.imSimpleLag.T_mod PARAM */,"eSAC1A.imSimpleLag.T_mod",equationIndexes);
  TRACE_POP
}
/*
equation index: 616
type: SIMPLE_ASSIGN
eSAC1A.imSimpleLag.y = if abs(eSAC1A.imSimpleLag.T) <= 1e-15 then GEN1.V * eSAC1A.imSimpleLag.K else eSAC1A.imSimpleLag.state
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_616(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,616};
  modelica_boolean tmp4;
  tmp4 = LessEq(fabs(data->simulationInfo->realParameter[144] /* eSAC1A.imSimpleLag.T PARAM */),1e-15);
  data->localData[0]->realVars[68] /* eSAC1A.imSimpleLag.y variable */ = (tmp4?(data->localData[0]->realVars[36] /* GEN1.V variable */) * (data->simulationInfo->realParameter[143] /* eSAC1A.imSimpleLag.K PARAM */):data->localData[0]->realVars[2] /* eSAC1A.imSimpleLag.state STATE(1) */);
  TRACE_POP
}
/*
equation index: 617
type: SIMPLE_ASSIGN
eSAC1A.DiffV.y = eSAC1A.DiffV.k1 * eSAC1A.VoltageReference.k + eSAC1A.DiffV.k2 * eSAC1A.imSimpleLag.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_617(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,617};
  data->localData[0]->realVars[56] /* eSAC1A.DiffV.y variable */ = (data->simulationInfo->realParameter[82] /* eSAC1A.DiffV.k1 PARAM */) * (data->simulationInfo->realParameter[114] /* eSAC1A.VoltageReference.k PARAM */) + (data->simulationInfo->realParameter[83] /* eSAC1A.DiffV.k2 PARAM */) * (data->localData[0]->realVars[68] /* eSAC1A.imSimpleLag.y variable */);
  TRACE_POP
}
/*
equation index: 618
type: SIMPLE_ASSIGN
eSAC1A.ECOMP = GEN1.V
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_618(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,618};
  data->localData[0]->realVars[57] /* eSAC1A.ECOMP variable */ = data->localData[0]->realVars[36] /* GEN1.V variable */;
  TRACE_POP
}
/*
equation index: 619
type: SIMPLE_ASSIGN
gENROE.anglev = atan2(pwLine.vs.im, pwLine.vs.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_619(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,619};
  data->localData[0]->realVars[102] /* gENROE.anglev variable */ = atan2(data->localData[0]->realVars[117] /* pwLine.vs.im variable */, data->localData[0]->realVars[118] /* pwLine.vs.re variable */);
  TRACE_POP
}
/*
equation index: 620
type: SIMPLE_ASSIGN
GEN1.angle = 57.29577951308232 * gENROE.anglev
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_620(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,620};
  data->localData[0]->realVars[37] /* GEN1.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[102] /* gENROE.anglev variable */);
  TRACE_POP
}
/*
equation index: 621
type: SIMPLE_ASSIGN
$DER.gENROE.PSIkd = (gENROE.Epq + (gENROE.Xl - gENROE.Xpd) * gENROE.id - gENROE.PSIkd) / gENROE.Tppd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_621(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,621};
  data->localData[0]->realVars[22] /* der(gENROE.PSIkd) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ + (data->simulationInfo->realParameter[257] /* gENROE.Xl PARAM */ - data->simulationInfo->realParameter[258] /* gENROE.Xpd PARAM */) * (data->localData[0]->realVars[103] /* gENROE.id variable */) - data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */,data->simulationInfo->realParameter[250] /* gENROE.Tppd0 PARAM */,"gENROE.Tppd0",equationIndexes);
  TRACE_POP
}
/*
equation index: 622
type: SIMPLE_ASSIGN
gENROE.Te = gENROE.PSId * gENROE.iq - gENROE.PSIq * gENROE.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_622(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,622};
  data->localData[0]->realVars[99] /* gENROE.Te variable */ = (data->localData[0]->realVars[93] /* gENROE.PSId variable */) * (data->localData[0]->realVars[104] /* gENROE.iq variable */) - ((data->localData[0]->realVars[97] /* gENROE.PSIq variable */) * (data->localData[0]->realVars[103] /* gENROE.id variable */));
  TRACE_POP
}
/*
equation index: 623
type: SIMPLE_ASSIGN
$DER.gENROE.w = 0.5 * ((gENROE.pm0 - gENROE.D * gENROE.w) / (1.0 + gENROE.w) - gENROE.Te) / gENROE.H
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_623(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,623};
  data->localData[0]->realVars[25] /* der(gENROE.w) STATE_DER */ = (0.5) * (DIVISION_SIM(DIVISION_SIM(data->simulationInfo->realParameter[283] /* gENROE.pm0 PARAM */ - ((data->simulationInfo->realParameter[207] /* gENROE.D PARAM */) * (data->localData[0]->realVars[12] /* gENROE.w STATE(1) */)),1.0 + data->localData[0]->realVars[12] /* gENROE.w STATE(1) */,"1.0 + gENROE.w",equationIndexes) - data->localData[0]->realVars[99] /* gENROE.Te variable */,data->simulationInfo->realParameter[213] /* gENROE.H PARAM */,"gENROE.H",equationIndexes));
  TRACE_POP
}
/*
equation index: 624
type: SIMPLE_ASSIGN
eSAC1A.XADIFD = gENROE.K1d * (gENROE.Epq + (gENROE.Xl - gENROE.Xpd) * gENROE.id - gENROE.PSIkd) + gENROE.Epq + gENROE.id * (gENROE.Xd - gENROE.Xpd) + $cse5 * gENROE.PSIppd
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_624(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,624};
  data->localData[0]->realVars[60] /* eSAC1A.XADIFD variable */ = (data->simulationInfo->realParameter[220] /* gENROE.K1d PARAM */) * (data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ + (data->simulationInfo->realParameter[257] /* gENROE.Xl PARAM */ - data->simulationInfo->realParameter[258] /* gENROE.Xpd PARAM */) * (data->localData[0]->realVars[103] /* gENROE.id variable */) - data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */) + data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ + (data->localData[0]->realVars[103] /* gENROE.id variable */) * (data->simulationInfo->realParameter[256] /* gENROE.Xd PARAM */ - data->simulationInfo->realParameter[258] /* gENROE.Xpd PARAM */) + (data->localData[0]->realVars[29] /* $cse5 variable */) * (data->localData[0]->realVars[95] /* gENROE.PSIppd variable */);
  TRACE_POP
}
/*
equation index: 625
type: SIMPLE_ASSIGN
eSAC1A.derivative.u = eSAC1A.rotatingExciterWithDemagnetization.Sum.k1 * eSAC1A.rotatingExciterWithDemagnetization.VE.y + eSAC1A.rotatingExciterWithDemagnetization.Sum.k2 * eSAC1A.rotatingExciterWithDemagnetization.gain.y + eSAC1A.rotatingExciterWithDemagnetization.Sum.k3 * eSAC1A.XADIFD
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_625(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,625};
  data->localData[0]->realVars[62] /* eSAC1A.derivative.u variable */ = (data->simulationInfo->realParameter[160] /* eSAC1A.rotatingExciterWithDemagnetization.Sum.k1 PARAM */) * (data->localData[0]->realVars[74] /* eSAC1A.rotatingExciterWithDemagnetization.VE.y variable */) + (data->simulationInfo->realParameter[161] /* eSAC1A.rotatingExciterWithDemagnetization.Sum.k2 PARAM */) * (data->localData[0]->realVars[76] /* eSAC1A.rotatingExciterWithDemagnetization.gain.y variable */) + (data->simulationInfo->realParameter[162] /* eSAC1A.rotatingExciterWithDemagnetization.Sum.k3 PARAM */) * (data->localData[0]->realVars[60] /* eSAC1A.XADIFD variable */);
  TRACE_POP
}
/*
equation index: 626
type: SIMPLE_ASSIGN
$DER.eSAC1A.derivative.x = (eSAC1A.derivative.u - eSAC1A.derivative.x) / eSAC1A.derivative.T
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_626(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,626};
  data->localData[0]->realVars[13] /* der(eSAC1A.derivative.x) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[62] /* eSAC1A.derivative.u variable */ - data->localData[0]->realVars[0] /* eSAC1A.derivative.x STATE(1) */,data->simulationInfo->realParameter[120] /* eSAC1A.derivative.T PARAM */,"eSAC1A.derivative.T",equationIndexes);
  TRACE_POP
}
/*
equation index: 627
type: SIMPLE_ASSIGN
eSAC1A.derivative.y = eSAC1A.derivative.k * (eSAC1A.derivative.u - eSAC1A.derivative.x) / eSAC1A.derivative.T
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_627(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,627};
  data->localData[0]->realVars[63] /* eSAC1A.derivative.y variable */ = (data->simulationInfo->realParameter[121] /* eSAC1A.derivative.k PARAM */) * (DIVISION_SIM(data->localData[0]->realVars[62] /* eSAC1A.derivative.u variable */ - data->localData[0]->realVars[0] /* eSAC1A.derivative.x STATE(1) */,data->simulationInfo->realParameter[120] /* eSAC1A.derivative.T PARAM */,"eSAC1A.derivative.T",equationIndexes));
  TRACE_POP
}
/*
equation index: 628
type: SIMPLE_ASSIGN
eSAC1A.add3_1.y = eSAC1A.add3_1.k1 * const.k + eSAC1A.add3_1.k2 * eSAC1A.DiffV.y + eSAC1A.add3_1.k3 * eSAC1A.derivative.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_628(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,628};
  data->localData[0]->realVars[61] /* eSAC1A.add3_1.y variable */ = (data->simulationInfo->realParameter[116] /* eSAC1A.add3_1.k1 PARAM */) * (data->simulationInfo->realParameter[34] /* const.k PARAM */) + (data->simulationInfo->realParameter[117] /* eSAC1A.add3_1.k2 PARAM */) * (data->localData[0]->realVars[56] /* eSAC1A.DiffV.y variable */) + (data->simulationInfo->realParameter[118] /* eSAC1A.add3_1.k3 PARAM */) * (data->localData[0]->realVars[63] /* eSAC1A.derivative.y variable */);
  TRACE_POP
}
/*
equation index: 629
type: SIMPLE_ASSIGN
$DER.eSAC1A.imLeadLag.TF.x_scaled[1] = (eSAC1A.imLeadLag.TF.a_end * eSAC1A.add3_1.y - eSAC1A.imLeadLag.TF.a[2] * eSAC1A.imLeadLag.TF.x_scaled[1]) / eSAC1A.imLeadLag.TF.a[1]
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_629(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,629};
  data->localData[0]->realVars[14] /* der(eSAC1A.imLeadLag.TF.x_scaled[1]) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[131] /* eSAC1A.imLeadLag.TF.a_end PARAM */) * (data->localData[0]->realVars[61] /* eSAC1A.add3_1.y variable */) - ((data->simulationInfo->realParameter[130] /* eSAC1A.imLeadLag.TF.a[2] PARAM */) * (data->localData[0]->realVars[1] /* eSAC1A.imLeadLag.TF.x_scaled[1] STATE(1) */)),data->simulationInfo->realParameter[129] /* eSAC1A.imLeadLag.TF.a[1] PARAM */,"eSAC1A.imLeadLag.TF.a[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 630
type: SIMPLE_ASSIGN
eSAC1A.imLeadLag.TF.y = (eSAC1A.imLeadLag.TF.bb[2] - eSAC1A.imLeadLag.TF.d * eSAC1A.imLeadLag.TF.a[2]) * eSAC1A.imLeadLag.TF.x[1] + eSAC1A.imLeadLag.TF.d * eSAC1A.add3_1.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_630(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,630};
  data->localData[0]->realVars[66] /* eSAC1A.imLeadLag.TF.y variable */ = (data->simulationInfo->realParameter[135] /* eSAC1A.imLeadLag.TF.bb[2] PARAM */ - ((data->simulationInfo->realParameter[136] /* eSAC1A.imLeadLag.TF.d PARAM */) * (data->simulationInfo->realParameter[130] /* eSAC1A.imLeadLag.TF.a[2] PARAM */))) * (data->localData[0]->realVars[65] /* eSAC1A.imLeadLag.TF.x[1] variable */) + (data->simulationInfo->realParameter[136] /* eSAC1A.imLeadLag.TF.d PARAM */) * (data->localData[0]->realVars[61] /* eSAC1A.add3_1.y variable */);
  TRACE_POP
}
/*
equation index: 631
type: SIMPLE_ASSIGN
eSAC1A.imLeadLag.y = if abs(eSAC1A.imLeadLag.T1 - eSAC1A.imLeadLag.T2) < 1e-15 then eSAC1A.imLeadLag.K * eSAC1A.add3_1.y else eSAC1A.imLeadLag.TF.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_631(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,631};
  modelica_boolean tmp5;
  tmp5 = Less(fabs(data->simulationInfo->realParameter[126] /* eSAC1A.imLeadLag.T1 PARAM */ - data->simulationInfo->realParameter[127] /* eSAC1A.imLeadLag.T2 PARAM */),1e-15);
  data->localData[0]->realVars[67] /* eSAC1A.imLeadLag.y variable */ = (tmp5?(data->simulationInfo->realParameter[125] /* eSAC1A.imLeadLag.K PARAM */) * (data->localData[0]->realVars[61] /* eSAC1A.add3_1.y variable */):data->localData[0]->realVars[66] /* eSAC1A.imLeadLag.TF.y variable */);
  TRACE_POP
}
/*
equation index: 632
type: SIMPLE_ASSIGN
$DER.eSAC1A.simpleLagLim.state = (eSAC1A.simpleLagLim.K * eSAC1A.imLeadLag.y - eSAC1A.simpleLagLim.state) / eSAC1A.simpleLagLim.T_mod
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_632(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,632};
  data->localData[0]->realVars[17] /* der(eSAC1A.simpleLagLim.state) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[173] /* eSAC1A.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[67] /* eSAC1A.imLeadLag.y variable */) - data->localData[0]->realVars[4] /* eSAC1A.simpleLagLim.state STATE(1) */,data->simulationInfo->realParameter[175] /* eSAC1A.simpleLagLim.T_mod PARAM */,"eSAC1A.simpleLagLim.T_mod",equationIndexes);
  TRACE_POP
}
/*
equation index: 633
type: SIMPLE_ASSIGN
eSAC1A.simpleLagLim.y = if abs(eSAC1A.simpleLagLim.T) <= 1e-15 then max(min(eSAC1A.imLeadLag.y * eSAC1A.simpleLagLim.K, eSAC1A.simpleLagLim.outMax), eSAC1A.simpleLagLim.outMin) else max(min(eSAC1A.simpleLagLim.state, eSAC1A.simpleLagLim.outMax), eSAC1A.simpleLagLim.outMin)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_633(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,633};
  modelica_boolean tmp6;
  tmp6 = LessEq(fabs(data->simulationInfo->realParameter[174] /* eSAC1A.simpleLagLim.T PARAM */),1e-15);
  data->localData[0]->realVars[78] /* eSAC1A.simpleLagLim.y variable */ = (tmp6?fmax(fmin((data->localData[0]->realVars[67] /* eSAC1A.imLeadLag.y variable */) * (data->simulationInfo->realParameter[173] /* eSAC1A.simpleLagLim.K PARAM */),data->simulationInfo->realParameter[177] /* eSAC1A.simpleLagLim.outMax PARAM */),data->simulationInfo->realParameter[178] /* eSAC1A.simpleLagLim.outMin PARAM */):fmax(fmin(data->localData[0]->realVars[4] /* eSAC1A.simpleLagLim.state STATE(1) */,data->simulationInfo->realParameter[177] /* eSAC1A.simpleLagLim.outMax PARAM */),data->simulationInfo->realParameter[178] /* eSAC1A.simpleLagLim.outMin PARAM */));
  TRACE_POP
}
/*
equation index: 634
type: SIMPLE_ASSIGN
eSAC1A.hV_GATE.p = if eSAC1A.simpleLagLim.y < const1.k then const1.k else eSAC1A.simpleLagLim.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_634(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,634};
  modelica_boolean tmp7;
  RELATIONHYSTERESIS(tmp7, data->localData[0]->realVars[78] /* eSAC1A.simpleLagLim.y variable */, data->simulationInfo->realParameter[36] /* const1.k PARAM */, 21, Less);
  data->localData[0]->realVars[64] /* eSAC1A.hV_GATE.p variable */ = (tmp7?data->simulationInfo->realParameter[36] /* const1.k PARAM */:data->localData[0]->realVars[78] /* eSAC1A.simpleLagLim.y variable */);
  TRACE_POP
}
/*
equation index: 635
type: SIMPLE_ASSIGN
eSAC1A.lV_GATE.p = if const2.k > eSAC1A.hV_GATE.p then eSAC1A.hV_GATE.p else const2.k
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_635(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,635};
  modelica_boolean tmp8;
  RELATIONHYSTERESIS(tmp8, data->simulationInfo->realParameter[38] /* const2.k PARAM */, data->localData[0]->realVars[64] /* eSAC1A.hV_GATE.p variable */, 22, Greater);
  data->localData[0]->realVars[69] /* eSAC1A.lV_GATE.p variable */ = (tmp8?data->localData[0]->realVars[64] /* eSAC1A.hV_GATE.p variable */:data->simulationInfo->realParameter[38] /* const2.k PARAM */);
  TRACE_POP
}
/*
equation index: 636
type: SIMPLE_ASSIGN
eSAC1A.limiter1.y = smooth(0, if eSAC1A.lV_GATE.p > eSAC1A.limiter1.uMax then eSAC1A.limiter1.uMax else if eSAC1A.lV_GATE.p < eSAC1A.limiter1.uMin then eSAC1A.limiter1.uMin else eSAC1A.lV_GATE.p)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_636(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,636};
  modelica_boolean tmp9;
  modelica_boolean tmp10;
  modelica_boolean tmp11;
  modelica_real tmp12;
  tmp9 = Greater(data->localData[0]->realVars[69] /* eSAC1A.lV_GATE.p variable */,data->simulationInfo->realParameter[149] /* eSAC1A.limiter1.uMax PARAM */);
  tmp11 = (modelica_boolean)tmp9;
  if(tmp11)
  {
    tmp12 = data->simulationInfo->realParameter[149] /* eSAC1A.limiter1.uMax PARAM */;
  }
  else
  {
    tmp10 = Less(data->localData[0]->realVars[69] /* eSAC1A.lV_GATE.p variable */,data->simulationInfo->realParameter[150] /* eSAC1A.limiter1.uMin PARAM */);
    tmp12 = (tmp10?data->simulationInfo->realParameter[150] /* eSAC1A.limiter1.uMin PARAM */:data->localData[0]->realVars[69] /* eSAC1A.lV_GATE.p variable */);
  }
  data->localData[0]->realVars[70] /* eSAC1A.limiter1.y variable */ = tmp12;
  TRACE_POP
}
/*
equation index: 637
type: SIMPLE_ASSIGN
$whenCondition2 = eSAC1A.simpleLagLim.state > eSAC1A.simpleLagLim.outMax and eSAC1A.simpleLagLim.K * eSAC1A.imLeadLag.y - eSAC1A.simpleLagLim.state < 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_637(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,637};
  modelica_boolean tmp13;
  modelica_boolean tmp14;
  RELATIONHYSTERESIS(tmp13, data->localData[0]->realVars[4] /* eSAC1A.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[177] /* eSAC1A.simpleLagLim.outMax PARAM */, 27, Greater);
  RELATIONHYSTERESIS(tmp14, (data->simulationInfo->realParameter[173] /* eSAC1A.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[67] /* eSAC1A.imLeadLag.y variable */) - data->localData[0]->realVars[4] /* eSAC1A.simpleLagLim.state STATE(1) */, 0.0, 28, Less);
  data->localData[0]->booleanVars[1] /* $whenCondition2 DISCRETE */ = (tmp13 && tmp14);
  TRACE_POP
}
/*
equation index: 638
type: SIMPLE_ASSIGN
$whenCondition1 = eSAC1A.simpleLagLim.state < eSAC1A.simpleLagLim.outMin and eSAC1A.simpleLagLim.K * eSAC1A.imLeadLag.y - eSAC1A.simpleLagLim.state > 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_638(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,638};
  modelica_boolean tmp15;
  modelica_boolean tmp16;
  RELATIONHYSTERESIS(tmp15, data->localData[0]->realVars[4] /* eSAC1A.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[178] /* eSAC1A.simpleLagLim.outMin PARAM */, 29, Less);
  RELATIONHYSTERESIS(tmp16, (data->simulationInfo->realParameter[173] /* eSAC1A.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[67] /* eSAC1A.imLeadLag.y variable */) - data->localData[0]->realVars[4] /* eSAC1A.simpleLagLim.state STATE(1) */, 0.0, 30, Greater);
  data->localData[0]->booleanVars[0] /* $whenCondition1 DISCRETE */ = (tmp15 && tmp16);
  TRACE_POP
}
/*
equation index: 639
type: SIMPLE_ASSIGN
eSAC1A.rotatingExciterWithDemagnetization.feedback.y = eSAC1A.limiter1.y - eSAC1A.derivative.u
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_639(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,639};
  data->localData[0]->realVars[75] /* eSAC1A.rotatingExciterWithDemagnetization.feedback.y variable */ = data->localData[0]->realVars[70] /* eSAC1A.limiter1.y variable */ - data->localData[0]->realVars[62] /* eSAC1A.derivative.u variable */;
  TRACE_POP
}
/*
equation index: 640
type: SIMPLE_ASSIGN
$DER.eSAC1A.rotatingExciterWithDemagnetization.sISO.y = if eSAC1A.rotatingExciterWithDemagnetization.sISO.y < eSAC1A.rotatingExciterWithDemagnetization.sISO.outMin and eSAC1A.rotatingExciterWithDemagnetization.sISO.k * eSAC1A.rotatingExciterWithDemagnetization.feedback.y < 0.0 or eSAC1A.rotatingExciterWithDemagnetization.sISO.y > eSAC1A.rotatingExciterWithDemagnetization.sISO.outMax and eSAC1A.rotatingExciterWithDemagnetization.sISO.k * eSAC1A.rotatingExciterWithDemagnetization.feedback.y > 0.0 then 0.0 else eSAC1A.rotatingExciterWithDemagnetization.sISO.k * eSAC1A.rotatingExciterWithDemagnetization.feedback.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_640(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,640};
  modelica_boolean tmp17;
  modelica_boolean tmp18;
  modelica_boolean tmp19;
  modelica_boolean tmp20;
  RELATIONHYSTERESIS(tmp17, data->localData[0]->realVars[3] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */, data->simulationInfo->realParameter[167] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.outMin PARAM */, 23, Less);
  RELATIONHYSTERESIS(tmp18, (data->simulationInfo->realParameter[165] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.k PARAM */) * (data->localData[0]->realVars[75] /* eSAC1A.rotatingExciterWithDemagnetization.feedback.y variable */), 0.0, 24, Less);
  RELATIONHYSTERESIS(tmp19, data->localData[0]->realVars[3] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */, data->simulationInfo->realParameter[166] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.outMax PARAM */, 25, Greater);
  RELATIONHYSTERESIS(tmp20, (data->simulationInfo->realParameter[165] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.k PARAM */) * (data->localData[0]->realVars[75] /* eSAC1A.rotatingExciterWithDemagnetization.feedback.y variable */), 0.0, 26, Greater);
  data->localData[0]->realVars[16] /* der(eSAC1A.rotatingExciterWithDemagnetization.sISO.y) STATE_DER */ = (((tmp17 && tmp18) || (tmp19 && tmp20))?0.0:(data->simulationInfo->realParameter[165] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.k PARAM */) * (data->localData[0]->realVars[75] /* eSAC1A.rotatingExciterWithDemagnetization.feedback.y variable */));
  TRACE_POP
}
/*
equation index: 641
type: SIMPLE_ASSIGN
eSAC1A.rectifierCommutationVoltageDrop.gain2.y = eSAC1A.rectifierCommutationVoltageDrop.gain2.k * eSAC1A.XADIFD
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_641(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,641};
  data->localData[0]->realVars[73] /* eSAC1A.rectifierCommutationVoltageDrop.gain2.y variable */ = (data->simulationInfo->realParameter[152] /* eSAC1A.rectifierCommutationVoltageDrop.gain2.k PARAM */) * (data->localData[0]->realVars[60] /* eSAC1A.XADIFD variable */);
  TRACE_POP
}
/*
equation index: 642
type: SIMPLE_ASSIGN
eSAC1A.rectifierCommutationVoltageDrop.division.y = eSAC1A.rectifierCommutationVoltageDrop.gain2.y / eSAC1A.rotatingExciterWithDemagnetization.sISO.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_642(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,642};
  data->localData[0]->realVars[71] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */ = DIVISION_SIM(data->localData[0]->realVars[73] /* eSAC1A.rectifierCommutationVoltageDrop.gain2.y variable */,data->localData[0]->realVars[3] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */,"eSAC1A.rotatingExciterWithDemagnetization.sISO.y",equationIndexes);
  TRACE_POP
}
/*
equation index: 643
type: SIMPLE_ASSIGN
eSAC1A.rectifierCommutationVoltageDrop.fEX.y = if eSAC1A.rectifierCommutationVoltageDrop.division.y <= 0.0 then 1.0 else if eSAC1A.rectifierCommutationVoltageDrop.division.y > 0.0 and eSAC1A.rectifierCommutationVoltageDrop.division.y <= 0.433 then 1.0 + (-0.577) * eSAC1A.rectifierCommutationVoltageDrop.division.y else if eSAC1A.rectifierCommutationVoltageDrop.division.y > 0.433 and eSAC1A.rectifierCommutationVoltageDrop.division.y < 0.75 then sqrt(0.75 - eSAC1A.rectifierCommutationVoltageDrop.division.y ^ 2.0) else if eSAC1A.rectifierCommutationVoltageDrop.division.y >= 0.75 and eSAC1A.rectifierCommutationVoltageDrop.division.y <= 1.0 then 1.732 * (1.0 - eSAC1A.rectifierCommutationVoltageDrop.division.y) else 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_643(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,643};
  modelica_boolean tmp21;
  modelica_boolean tmp22;
  modelica_boolean tmp23;
  modelica_boolean tmp24;
  modelica_boolean tmp25;
  modelica_real tmp26;
  modelica_real tmp27;
  modelica_boolean tmp28;
  modelica_boolean tmp29;
  modelica_boolean tmp30;
  modelica_real tmp31;
  modelica_boolean tmp32;
  modelica_real tmp33;
  modelica_boolean tmp34;
  modelica_real tmp35;
  RELATIONHYSTERESIS(tmp21, data->localData[0]->realVars[71] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */, 0.0, 14, LessEq);
  tmp34 = (modelica_boolean)tmp21;
  if(tmp34)
  {
    tmp35 = 1.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp22, data->localData[0]->realVars[71] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */, 0.0, 15, Greater);
    RELATIONHYSTERESIS(tmp23, data->localData[0]->realVars[71] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */, 0.433, 16, LessEq);
    tmp32 = (modelica_boolean)(tmp22 && tmp23);
    if(tmp32)
    {
      tmp33 = 1.0 + (-0.577) * (data->localData[0]->realVars[71] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */);
    }
    else
    {
      RELATIONHYSTERESIS(tmp24, data->localData[0]->realVars[71] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */, 0.433, 17, Greater);
      RELATIONHYSTERESIS(tmp25, data->localData[0]->realVars[71] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */, 0.75, 18, Less);
      tmp30 = (modelica_boolean)(tmp24 && tmp25);
      if(tmp30)
      {
        tmp26 = data->localData[0]->realVars[71] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */;
        tmp27 = 0.75 - ((tmp26 * tmp26));
        if(!(tmp27 >= 0.0))
        {
          FILE_INFO info = {"",0,0,0,0,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of sqrt(0.75 - eSAC1A.rectifierCommutationVoltageDrop.division.y ^ 2.0) was %g should be >= 0", tmp27);
        }
        tmp31 = sqrt(tmp27);
      }
      else
      {
        RELATIONHYSTERESIS(tmp28, data->localData[0]->realVars[71] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */, 0.75, 19, GreaterEq);
        RELATIONHYSTERESIS(tmp29, data->localData[0]->realVars[71] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */, 1.0, 20, LessEq);
        tmp31 = ((tmp28 && tmp29)?(1.732) * (1.0 - data->localData[0]->realVars[71] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */):0.0);
      }
      tmp33 = tmp31;
    }
    tmp35 = tmp33;
  }
  data->localData[0]->realVars[72] /* eSAC1A.rectifierCommutationVoltageDrop.fEX.y variable */ = tmp35;
  TRACE_POP
}
/*
equation index: 644
type: SIMPLE_ASSIGN
eSAC1A.EFD = eSAC1A.rotatingExciterWithDemagnetization.sISO.y * eSAC1A.rectifierCommutationVoltageDrop.fEX.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_644(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,644};
  data->localData[0]->realVars[58] /* eSAC1A.EFD variable */ = (data->localData[0]->realVars[3] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */) * (data->localData[0]->realVars[72] /* eSAC1A.rectifierCommutationVoltageDrop.fEX.y variable */);
  TRACE_POP
}
/*
equation index: 645
type: SIMPLE_ASSIGN
$DER.gENROE.Epq = (eSAC1A.EFD - eSAC1A.XADIFD) / gENROE.Tpd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_645(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,645};
  data->localData[0]->realVars[21] /* der(gENROE.Epq) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[58] /* eSAC1A.EFD variable */ - data->localData[0]->realVars[60] /* eSAC1A.XADIFD variable */,data->simulationInfo->realParameter[249] /* gENROE.Tpd0 PARAM */,"gENROE.Tpd0",equationIndexes);
  TRACE_POP
}
/*
equation index: 646
type: SIMPLE_ASSIGN
pwLine.P12 = (pwLine.vs.re * pwLine.is.re + pwLine.vs.im * pwLine.is.im) * pwLine.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_646(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,646};
  data->localData[0]->realVars[109] /* pwLine.P12 variable */ = ((data->localData[0]->realVars[118] /* pwLine.vs.re variable */) * (data->localData[0]->realVars[116] /* pwLine.is.re variable */) + (data->localData[0]->realVars[117] /* pwLine.vs.im variable */) * (data->localData[0]->realVars[115] /* pwLine.is.im variable */)) * (data->simulationInfo->realParameter[298] /* pwLine.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 647
type: SIMPLE_ASSIGN
pwLine.Q12 = (pwLine.vs.im * pwLine.is.re - pwLine.vs.re * pwLine.is.im) * pwLine.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_647(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,647};
  data->localData[0]->realVars[111] /* pwLine.Q12 variable */ = ((data->localData[0]->realVars[117] /* pwLine.vs.im variable */) * (data->localData[0]->realVars[116] /* pwLine.is.re variable */) - ((data->localData[0]->realVars[118] /* pwLine.vs.re variable */) * (data->localData[0]->realVars[115] /* pwLine.is.im variable */))) * (data->simulationInfo->realParameter[298] /* pwLine.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 648
type: SIMPLE_ASSIGN
gENROE.I = sqrt(pwLine.is.im ^ 2.0 + pwLine.is.re ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_648(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,648};
  modelica_real tmp36;
  modelica_real tmp37;
  tmp36 = data->localData[0]->realVars[115] /* pwLine.is.im variable */;
  tmp37 = data->localData[0]->realVars[116] /* pwLine.is.re variable */;
  data->localData[0]->realVars[90] /* gENROE.I variable */ = sqrt((tmp36 * tmp36) + (tmp37 * tmp37));
  TRACE_POP
}
/*
equation index: 649
type: SIMPLE_ASSIGN
gENROE.anglei = atan2(-pwLine.is.im, -pwLine.is.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_649(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,649};
  data->localData[0]->realVars[101] /* gENROE.anglei variable */ = atan2((-data->localData[0]->realVars[115] /* pwLine.is.im variable */), (-data->localData[0]->realVars[116] /* pwLine.is.re variable */));
  TRACE_POP
}
/*
equation index: 650
type: SIMPLE_ASSIGN
gENROE.P = pwLine.vs.im * pwLine.is.im + pwLine.vs.re * pwLine.is.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_650(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,650};
  data->localData[0]->realVars[91] /* gENROE.P variable */ = (data->localData[0]->realVars[117] /* pwLine.vs.im variable */) * (data->localData[0]->realVars[115] /* pwLine.is.im variable */) + (data->localData[0]->realVars[118] /* pwLine.vs.re variable */) * (data->localData[0]->realVars[116] /* pwLine.is.re variable */);
  TRACE_POP
}
/*
equation index: 651
type: SIMPLE_ASSIGN
gENROE.PELEC = gENROE.P / gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_651(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,651};
  data->localData[0]->realVars[92] /* gENROE.PELEC variable */ = DIVISION_SIM(data->localData[0]->realVars[91] /* gENROE.P variable */,data->simulationInfo->realParameter[206] /* gENROE.CoB PARAM */,"gENROE.CoB",equationIndexes);
  TRACE_POP
}
/*
equation index: 652
type: SIMPLE_ASSIGN
gENROE.Q = pwLine.vs.im * pwLine.is.re - pwLine.vs.re * pwLine.is.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_652(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,652};
  data->localData[0]->realVars[98] /* gENROE.Q variable */ = (data->localData[0]->realVars[117] /* pwLine.vs.im variable */) * (data->localData[0]->realVars[116] /* pwLine.is.re variable */) - ((data->localData[0]->realVars[118] /* pwLine.vs.re variable */) * (data->localData[0]->realVars[115] /* pwLine.is.im variable */));
  TRACE_POP
}
/*
equation index: 653
type: SIMPLE_ASSIGN
LOAD.V = constantLoad.v
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_653(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,653};
  data->localData[0]->realVars[44] /* LOAD.V variable */ = data->localData[0]->realVars[55] /* constantLoad.v variable */;
  TRACE_POP
}
/*
equation index: 654
type: SIMPLE_ASSIGN
pwLine.P21 = ((-pwLine3.vs.re) * pwLine.ir.re - pwLine3.vs.im * pwLine.ir.im) * pwLine.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_654(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,654};
  data->localData[0]->realVars[110] /* pwLine.P21 variable */ = (((-data->localData[0]->realVars[136] /* pwLine3.vs.re variable */)) * (data->localData[0]->realVars[114] /* pwLine.ir.re variable */) - ((data->localData[0]->realVars[135] /* pwLine3.vs.im variable */) * (data->localData[0]->realVars[113] /* pwLine.ir.im variable */))) * (data->simulationInfo->realParameter[298] /* pwLine.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 655
type: SIMPLE_ASSIGN
pwLine.Q21 = (pwLine3.vs.re * pwLine.ir.im - pwLine3.vs.im * pwLine.ir.re) * pwLine.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_655(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,655};
  data->localData[0]->realVars[112] /* pwLine.Q21 variable */ = ((data->localData[0]->realVars[136] /* pwLine3.vs.re variable */) * (data->localData[0]->realVars[113] /* pwLine.ir.im variable */) - ((data->localData[0]->realVars[135] /* pwLine3.vs.im variable */) * (data->localData[0]->realVars[114] /* pwLine.ir.re variable */))) * (data->simulationInfo->realParameter[298] /* pwLine.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 656
type: SIMPLE_ASSIGN
pwLine3.P12 = (pwLine3.vs.re * pwLine3.is.re + pwLine3.vs.im * pwLine3.is.im) * pwLine3.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_656(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,656};
  data->localData[0]->realVars[127] /* pwLine3.P12 variable */ = ((data->localData[0]->realVars[136] /* pwLine3.vs.re variable */) * (data->localData[0]->realVars[134] /* pwLine3.is.re variable */) + (data->localData[0]->realVars[135] /* pwLine3.vs.im variable */) * (data->localData[0]->realVars[133] /* pwLine3.is.im variable */)) * (data->simulationInfo->realParameter[320] /* pwLine3.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 657
type: SIMPLE_ASSIGN
pwLine3.Q12 = (pwLine3.vs.im * pwLine3.is.re - pwLine3.vs.re * pwLine3.is.im) * pwLine3.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_657(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,657};
  data->localData[0]->realVars[129] /* pwLine3.Q12 variable */ = ((data->localData[0]->realVars[135] /* pwLine3.vs.im variable */) * (data->localData[0]->realVars[134] /* pwLine3.is.re variable */) - ((data->localData[0]->realVars[136] /* pwLine3.vs.re variable */) * (data->localData[0]->realVars[133] /* pwLine3.is.im variable */))) * (data->simulationInfo->realParameter[320] /* pwLine3.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 658
type: SIMPLE_ASSIGN
constantLoad.angle = atan2(pwLine3.vs.im, pwLine3.vs.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_658(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,658};
  data->localData[0]->realVars[50] /* constantLoad.angle variable */ = atan2(data->localData[0]->realVars[135] /* pwLine3.vs.im variable */, data->localData[0]->realVars[136] /* pwLine3.vs.re variable */);
  TRACE_POP
}
/*
equation index: 659
type: SIMPLE_ASSIGN
LOAD.angle = 57.29577951308232 * constantLoad.angle
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_659(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,659};
  data->localData[0]->realVars[45] /* LOAD.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[50] /* constantLoad.angle variable */);
  TRACE_POP
}
/*
equation index: 660
type: SIMPLE_ASSIGN
pwLine1.P12 = (pwLine3.vs.re * pwLine1.is.re + pwLine3.vs.im * pwLine1.is.im) * pwLine1.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_660(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,660};
  data->localData[0]->realVars[119] /* pwLine1.P12 variable */ = ((data->localData[0]->realVars[136] /* pwLine3.vs.re variable */) * (data->localData[0]->realVars[126] /* pwLine1.is.re variable */) + (data->localData[0]->realVars[135] /* pwLine3.vs.im variable */) * (data->localData[0]->realVars[125] /* pwLine1.is.im variable */)) * (data->simulationInfo->realParameter[309] /* pwLine1.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 661
type: SIMPLE_ASSIGN
pwLine1.Q12 = (pwLine3.vs.im * pwLine1.is.re - pwLine3.vs.re * pwLine1.is.im) * pwLine1.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_661(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,661};
  data->localData[0]->realVars[121] /* pwLine1.Q12 variable */ = ((data->localData[0]->realVars[135] /* pwLine3.vs.im variable */) * (data->localData[0]->realVars[126] /* pwLine1.is.re variable */) - ((data->localData[0]->realVars[136] /* pwLine3.vs.re variable */) * (data->localData[0]->realVars[125] /* pwLine1.is.im variable */))) * (data->simulationInfo->realParameter[309] /* pwLine1.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 662
type: SIMPLE_ASSIGN
pwLine4.P21 = ((-pwLine4.vr.re) * pwLine4.ir.re - pwLine4.vr.im * pwLine4.ir.im) * pwLine4.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_662(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,662};
  data->localData[0]->realVars[138] /* pwLine4.P21 variable */ = (((-data->localData[0]->realVars[146] /* pwLine4.vr.re variable */)) * (data->localData[0]->realVars[142] /* pwLine4.ir.re variable */) - ((data->localData[0]->realVars[145] /* pwLine4.vr.im variable */) * (data->localData[0]->realVars[141] /* pwLine4.ir.im variable */))) * (data->simulationInfo->realParameter[331] /* pwLine4.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 663
type: SIMPLE_ASSIGN
pwLine4.Q21 = (pwLine4.vr.re * pwLine4.ir.im - pwLine4.vr.im * pwLine4.ir.re) * pwLine4.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_663(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,663};
  data->localData[0]->realVars[140] /* pwLine4.Q21 variable */ = ((data->localData[0]->realVars[146] /* pwLine4.vr.re variable */) * (data->localData[0]->realVars[141] /* pwLine4.ir.im variable */) - ((data->localData[0]->realVars[145] /* pwLine4.vr.im variable */) * (data->localData[0]->realVars[142] /* pwLine4.ir.re variable */))) * (data->simulationInfo->realParameter[331] /* pwLine4.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 664
type: SIMPLE_ASSIGN
GEN2.V = sqrt(pwLine4.vr.re ^ 2.0 + pwLine4.vr.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_664(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,664};
  modelica_real tmp38;
  modelica_real tmp39;
  tmp38 = data->localData[0]->realVars[146] /* pwLine4.vr.re variable */;
  tmp39 = data->localData[0]->realVars[145] /* pwLine4.vr.im variable */;
  data->localData[0]->realVars[40] /* GEN2.V variable */ = sqrt((tmp38 * tmp38) + (tmp39 * tmp39));
  TRACE_POP
}
/*
equation index: 665
type: SIMPLE_ASSIGN
gENCLS.V = GEN2.V
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_665(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,665};
  data->localData[0]->realVars[81] /* gENCLS.V variable */ = data->localData[0]->realVars[40] /* GEN2.V variable */;
  TRACE_POP
}
/*
equation index: 666
type: SIMPLE_ASSIGN
gENCLS.anglev = atan2(pwLine4.vr.im, pwLine4.vr.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_666(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,666};
  data->localData[0]->realVars[82] /* gENCLS.anglev variable */ = atan2(data->localData[0]->realVars[145] /* pwLine4.vr.im variable */, data->localData[0]->realVars[146] /* pwLine4.vr.re variable */);
  TRACE_POP
}
/*
equation index: 667
type: SIMPLE_ASSIGN
GEN2.angle = 57.29577951308232 * gENCLS.anglev
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_667(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,667};
  data->localData[0]->realVars[41] /* GEN2.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[82] /* gENCLS.anglev variable */);
  TRACE_POP
}
/*
equation index: 668
type: SIMPLE_ASSIGN
pwLine1.P21 = ((-pwLine4.vr.re) * pwLine1.ir.re - pwLine4.vr.im * pwLine1.ir.im) * pwLine1.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_668(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,668};
  data->localData[0]->realVars[120] /* pwLine1.P21 variable */ = (((-data->localData[0]->realVars[146] /* pwLine4.vr.re variable */)) * (data->localData[0]->realVars[124] /* pwLine1.ir.re variable */) - ((data->localData[0]->realVars[145] /* pwLine4.vr.im variable */) * (data->localData[0]->realVars[123] /* pwLine1.ir.im variable */))) * (data->simulationInfo->realParameter[309] /* pwLine1.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 669
type: SIMPLE_ASSIGN
pwLine1.Q21 = (pwLine4.vr.re * pwLine1.ir.im - pwLine4.vr.im * pwLine1.ir.re) * pwLine1.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_669(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,669};
  data->localData[0]->realVars[122] /* pwLine1.Q21 variable */ = ((data->localData[0]->realVars[146] /* pwLine4.vr.re variable */) * (data->localData[0]->realVars[123] /* pwLine1.ir.im variable */) - ((data->localData[0]->realVars[145] /* pwLine4.vr.im variable */) * (data->localData[0]->realVars[124] /* pwLine1.ir.re variable */))) * (data->simulationInfo->realParameter[309] /* pwLine1.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 670
type: SIMPLE_ASSIGN
gENCLS.P = (-pwLine4.vr.re) * gENCLS.p.ir - pwLine4.vr.im * gENCLS.p.ii
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_670(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,670};
  data->localData[0]->realVars[79] /* gENCLS.P variable */ = ((-data->localData[0]->realVars[146] /* pwLine4.vr.re variable */)) * (data->localData[0]->realVars[87] /* gENCLS.p.ir variable */) - ((data->localData[0]->realVars[145] /* pwLine4.vr.im variable */) * (data->localData[0]->realVars[86] /* gENCLS.p.ii variable */));
  TRACE_POP
}
/*
equation index: 671
type: SIMPLE_ASSIGN
gENCLS.Q = pwLine4.vr.re * gENCLS.p.ii - pwLine4.vr.im * gENCLS.p.ir
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_671(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,671};
  data->localData[0]->realVars[80] /* gENCLS.Q variable */ = (data->localData[0]->realVars[146] /* pwLine4.vr.re variable */) * (data->localData[0]->realVars[86] /* gENCLS.p.ii variable */) - ((data->localData[0]->realVars[145] /* pwLine4.vr.im variable */) * (data->localData[0]->realVars[87] /* gENCLS.p.ir variable */));
  TRACE_POP
}
/*
equation index: 674
type: ALGORITHM

  assert(eSAC1A.limiter1.uMax >= eSAC1A.limiter1.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(eSAC1A.limiter1.uMax, 6, 0, true) + ") < uMin (=" + String(eSAC1A.limiter1.uMin, 6, 0, true) + ")");
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_674(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,674};
  modelica_boolean tmp40;
  static const MMC_DEFSTRINGLIT(tmp41,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp42;
  static const MMC_DEFSTRINGLIT(tmp43,11,") < uMin (=");
  modelica_string tmp44;
  static int tmp45 = 0;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  {
    tmp40 = GreaterEq(data->simulationInfo->realParameter[149] /* eSAC1A.limiter1.uMax PARAM */,data->simulationInfo->realParameter[150] /* eSAC1A.limiter1.uMin PARAM */);
    if(!tmp40)
    {
      tmp42 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[149] /* eSAC1A.limiter1.uMax PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp41),tmp42);
      tmpMeta[1] = stringAppend(tmpMeta[0],MMC_REFSTRINGLIT(tmp43));
      tmp44 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[150] /* eSAC1A.limiter1.uMin PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[2] = stringAppend(tmpMeta[1],tmp44);
      tmpMeta[3] = stringAppend(tmpMeta[2],(modelica_string) mmc_strings_len1[41]);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Nonlinear.mo",19,9,20,65,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\neSAC1A.limiter1.uMax >= eSAC1A.limiter1.uMin", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(tmpMeta[3]));
      }
    }
  }
  TRACE_POP
}
/*
equation index: 672
type: WHEN

when {$whenCondition2} then
  reinit(eSAC1A.simpleLagLim.state,  eSAC1A.simpleLagLim.outMax);
end when;
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_672(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,672};
  if((data->localData[0]->booleanVars[1] /* $whenCondition2 DISCRETE */ && !data->simulationInfo->booleanVarsPre[1] /* $whenCondition2 DISCRETE */ /* edge */))
  {
    data->localData[0]->realVars[4] /* eSAC1A.simpleLagLim.state STATE(1) */ = data->simulationInfo->realParameter[177] /* eSAC1A.simpleLagLim.outMax PARAM */;
    infoStreamPrint(LOG_EVENTS, 0, "reinit eSAC1A.simpleLagLim.state = %g", data->localData[0]->realVars[4] /* eSAC1A.simpleLagLim.state STATE(1) */);
    data->simulationInfo->needToIterate = 1;
  }
  else if((data->localData[0]->booleanVars[0] /* $whenCondition1 DISCRETE */ && !data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */ /* edge */))
  {
    data->localData[0]->realVars[4] /* eSAC1A.simpleLagLim.state STATE(1) */ = data->simulationInfo->realParameter[178] /* eSAC1A.simpleLagLim.outMin PARAM */;
    infoStreamPrint(LOG_EVENTS, 0, "reinit eSAC1A.simpleLagLim.state = %g", data->localData[0]->realVars[4] /* eSAC1A.simpleLagLim.state STATE(1) */);
    data->simulationInfo->needToIterate = 1;
  }
  TRACE_POP
}

OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_functionDAE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  int equationIndexes[1] = {0};
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_DAE);
#endif

  data->simulationInfo->needToIterate = 0;
  data->simulationInfo->discreteCall = 1;
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_functionLocalKnownVars(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_497(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_498(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_499(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_500(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_501(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_502(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_503(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_504(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_505(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_506(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_507(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_508(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_509(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_510(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_511(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_512(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_603(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_604(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_605(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_606(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_607(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_608(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_609(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_610(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_611(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_612(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_613(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_614(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_615(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_616(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_617(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_618(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_619(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_620(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_621(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_622(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_623(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_624(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_625(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_626(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_627(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_628(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_629(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_630(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_631(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_632(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_633(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_634(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_635(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_636(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_637(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_638(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_639(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_640(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_641(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_642(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_643(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_644(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_645(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_646(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_647(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_648(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_649(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_650(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_651(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_652(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_653(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_654(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_655(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_656(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_657(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_658(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_659(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_660(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_661(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_662(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_663(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_664(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_665(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_666(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_667(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_668(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_669(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_670(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_671(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_674(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_672(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_DAE);
#endif
  TRACE_POP
  return 0;
}


int OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_functionLocalKnownVars(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/* forwarded equations */
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_498(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_499(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_500(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_501(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_502(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_503(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_504(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_505(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_506(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_507(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_508(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_509(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_510(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_511(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_512(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_603(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_611(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_612(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_613(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_614(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_615(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_616(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_617(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_621(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_622(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_623(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_624(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_625(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_626(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_627(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_628(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_629(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_630(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_631(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_632(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_633(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_634(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_635(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_636(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_639(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_640(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_641(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_642(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_643(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_644(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_645(DATA* data, threadData_t *threadData);

static void functionODE_system0(DATA *data, threadData_t *threadData)
{
    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_498(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_499(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_500(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_501(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_502(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_503(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_504(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_505(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_506(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_507(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_508(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_509(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_510(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_511(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_512(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_603(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_611(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_612(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_613(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_614(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_615(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_616(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_617(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_621(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_622(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_623(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_624(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_625(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_626(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_627(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_628(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_629(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_630(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_631(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_632(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_633(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_634(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_635(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_636(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_639(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_640(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_641(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_642(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_643(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_644(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_645(data, threadData);
}

int OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_functionODE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_FUNCTION_ODE);
#endif

  
  data->simulationInfo->callStatistics.functionODE++;
  
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_functionLocalKnownVars(data, threadData);
  functionODE_system0(data, threadData);

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_FUNCTION_ODE);
#endif

  TRACE_POP
  return 0;
}

/* forward the main in the simulation runtime */
extern int _main_SimulationRuntime(int argc, char**argv, DATA *data, threadData_t *threadData);

#include "OpenIPSL.Examples.Controls.PSSE.ES.ESAC1A_12jac.h"
#include "OpenIPSL.Examples.Controls.PSSE.ES.ESAC1A_13opt.h"

struct OpenModelicaGeneratedFunctionCallbacks OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_callback = {
   (int (*)(DATA *, threadData_t *, void *)) OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_performSimulation,
   (int (*)(DATA *, threadData_t *, void *)) OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_performQSSSimulation,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_updateContinuousSystem,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_callExternalObjectDestructors,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_initialNonLinearSystem,
   NULL,
   NULL,
   #if !defined(OMC_NO_STATESELECTION)
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_initializeStateSets,
   #else
   NULL,
   #endif
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_initializeDAEmodeData,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_functionODE,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_functionAlgebraics,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_functionDAE,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_functionLocalKnownVars,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_input_function,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_input_function_init,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_input_function_updateStartValues,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_data_function,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_output_function,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_setc_function,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_function_storeDelayed,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_updateBoundVariableAttributes,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_functionInitialEquations,
   1, /* useHomotopy - 0: local homotopy (equidistant lambda), 1: global homotopy (equidistant lambda), 2: new global homotopy approach (adaptive lambda), 3: new local homotopy approach (adaptive lambda)*/
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_functionInitialEquations_lambda0,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_functionRemovedInitialEquations,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_updateBoundParameters,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_checkForAsserts,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_function_ZeroCrossingsEquations,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_function_ZeroCrossings,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_function_updateRelations,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_zeroCrossingDescription,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_relationDescription,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_function_initSample,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_INDEX_JAC_A,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_INDEX_JAC_B,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_INDEX_JAC_C,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_INDEX_JAC_D,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_INDEX_JAC_F,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_initialAnalyticJacobianA,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_initialAnalyticJacobianB,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_initialAnalyticJacobianC,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_initialAnalyticJacobianD,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_initialAnalyticJacobianF,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_functionJacA_column,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_functionJacB_column,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_functionJacC_column,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_functionJacD_column,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_functionJacF_column,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_linear_model_frame,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_linear_model_datarecovery_frame,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_mayer,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_lagrange,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_pickUpBoundsForInputsInOptimization,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_setInputData,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_getTimeGrid,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_symbolicInlineSystem,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_function_initSynchronous,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_function_updateSynchronous,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_function_equationsSynchronous,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_inputNames,
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
#define _OMC_LIT_RESOURCE_1_dir_data "/usr/lib/omlibrary/Modelica 3.2.2"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_1_name,8,_OMC_LIT_RESOURCE_1_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_1_dir,33,_OMC_LIT_RESOURCE_1_dir_data);

#define _OMC_LIT_RESOURCE_2_name_data "ModelicaServices"
#define _OMC_LIT_RESOURCE_2_dir_data "/usr/lib/omlibrary/ModelicaServices 3.2.2"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_2_name,16,_OMC_LIT_RESOURCE_2_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_2_dir,41,_OMC_LIT_RESOURCE_2_dir_data);

#define _OMC_LIT_RESOURCE_3_name_data "OpenIPSL"
#define _OMC_LIT_RESOURCE_3_dir_data "/home/manuelnvro/dev/Gitted/DockerTraining/OpenIPSLVerification/VerificationRoutines/OpenIPSL/OpenIPSL"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_3_name,8,_OMC_LIT_RESOURCE_3_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_3_dir,102,_OMC_LIT_RESOURCE_3_dir_data);

static const MMC_DEFSTRUCTLIT(_OMC_LIT_RESOURCES,8,MMC_ARRAY_TAG) {MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_0_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_0_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_1_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_1_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_2_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_2_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_3_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_3_dir)}};
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_setupDataStruc(DATA *data, threadData_t *threadData)
{
  assertStreamPrint(threadData,0!=data, "Error while initialize Data");
  threadData->localRoots[LOCAL_ROOT_SIMULATION_DATA] = data;
  data->callback = &OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_callback;
  OpenModelica_updateUriMapping(threadData, MMC_REFSTRUCTLIT(_OMC_LIT_RESOURCES));
  data->modelData->modelName = "OpenIPSL.Examples.Controls.PSSE.ES.ESAC1A";
  data->modelData->modelFilePrefix = "OpenIPSL.Examples.Controls.PSSE.ES.ESAC1A";
  data->modelData->resultFileName = NULL;
  data->modelData->modelDir = "/home/manuelnvro/dev/Gitted/DockerTraining/OpenIPSLVerification/VerificationRoutines/OpenIPSL/OpenIPSL/Examples/Controls/PSSE/ES";
  data->modelData->modelGUID = "{c0265349-8b49-4399-bcca-b177d11dedef}";
  #if defined(OPENMODELICA_XML_FROM_FILE_AT_RUNTIME)
  data->modelData->initXMLData = NULL;
  data->modelData->modelDataXml.infoXMLData = NULL;
  #else
  #if defined(_MSC_VER) /* handle joke compilers */
  {
  /* for MSVC we encode a string like char x[] = {'a', 'b', 'c', '\0'} */
  /* because the string constant limit is 65535 bytes */
  static const char contents_init[] =
    #include "OpenIPSL.Examples.Controls.PSSE.ES.ESAC1A_init.c"
    ;
  static const char contents_info[] =
    #include "OpenIPSL.Examples.Controls.PSSE.ES.ESAC1A_info.c"
    ;
    data->modelData->initXMLData = contents_init;
    data->modelData->modelDataXml.infoXMLData = contents_info;
  }
  #else /* handle real compilers */
  data->modelData->initXMLData =
  #include "OpenIPSL.Examples.Controls.PSSE.ES.ESAC1A_init.c"
    ;
  data->modelData->modelDataXml.infoXMLData =
  #include "OpenIPSL.Examples.Controls.PSSE.ES.ESAC1A_info.c"
    ;
  #endif /* defined(_MSC_VER) */
  #endif /* defined(OPENMODELICA_XML_FROM_FILE_AT_RUNTIME) */
  data->modelData->runTestsuite = 0;
  
  data->modelData->nStates = 13;
  data->modelData->nVariablesReal = 149;
  data->modelData->nDiscreteReal = 0;
  data->modelData->nVariablesInteger = 0;
  data->modelData->nVariablesBoolean = 2;
  data->modelData->nVariablesString = 0;
  data->modelData->nParametersReal = 339;
  data->modelData->nParametersInteger = 11;
  data->modelData->nParametersBoolean = 73;
  data->modelData->nParametersString = 0;
  data->modelData->nInputVars = 0;
  data->modelData->nOutputVars = 0;
  
  data->modelData->nAliasReal = 101;
  data->modelData->nAliasInteger = 0;
  data->modelData->nAliasBoolean = 0;
  data->modelData->nAliasString = 0;
  
  data->modelData->nZeroCrossings = 29;
  data->modelData->nSamples = 0;
  data->modelData->nRelations = 31;
  data->modelData->nMathEvents = 0;
  data->modelData->nExtObjs = 0;
  
  data->modelData->modelDataXml.fileName = "OpenIPSL.Examples.Controls.PSSE.ES.ESAC1A_info.json";
  data->modelData->modelDataXml.modelInfoXmlLength = 0;
  data->modelData->modelDataXml.nFunctions = 6;
  data->modelData->modelDataXml.nProfileBlocks = 0;
  data->modelData->modelDataXml.nEquations = 930;
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
  
    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_setupDataStruc(&data, threadData);
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


