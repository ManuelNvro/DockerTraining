/* Non Linear Systems */
#include "OpenIPSL.Examples.Controls.PSSE.ES.EXST1_model.h"
#include "OpenIPSL.Examples.Controls.PSSE.ES.EXST1_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* inner equations */

void residualFunc454(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,454};
  int i;
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[58] /* eXST1.EFD variable */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[58] /* eXST1.EFD variable */, (data->localData[0]->realVars[57] /* eXST1.ECOMP variable */) * (data->simulationInfo->realParameter[104] /* eXST1.V_RMAX PARAM */) - ((data->simulationInfo->realParameter[81] /* eXST1.K_C PARAM */) * (data->localData[0]->realVars[65] /* eXST1.XADIFD variable */)), 15, Greater);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = (data->localData[0]->realVars[57] /* eXST1.ECOMP variable */) * (data->simulationInfo->realParameter[104] /* eXST1.V_RMAX PARAM */) - ((data->simulationInfo->realParameter[81] /* eXST1.K_C PARAM */) * (data->localData[0]->realVars[65] /* eXST1.XADIFD variable */));
  }
  else
  {
    RELATIONHYSTERESIS(tmp1, data->localData[0]->realVars[58] /* eXST1.EFD variable */, (data->localData[0]->realVars[57] /* eXST1.ECOMP variable */) * (data->simulationInfo->realParameter[105] /* eXST1.V_RMIN PARAM */) - ((data->simulationInfo->realParameter[81] /* eXST1.K_C PARAM */) * (data->localData[0]->realVars[65] /* eXST1.XADIFD variable */)), 16, Less);
    tmp3 = (tmp1?(data->localData[0]->realVars[57] /* eXST1.ECOMP variable */) * (data->simulationInfo->realParameter[105] /* eXST1.V_RMIN PARAM */) - ((data->simulationInfo->realParameter[81] /* eXST1.K_C PARAM */) * (data->localData[0]->realVars[65] /* eXST1.XADIFD variable */)):data->localData[0]->realVars[63] /* eXST1.Vm1.y variable */);
  }
  res[0] = data->localData[0]->realVars[58] /* eXST1.EFD variable */ - (tmp3);
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS454(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = 0;
}
void initializeStaticDataNLS454(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for eXST1.EFD */
  sysData->nominal[i] = data->modelData->realVarsData[58].attribute /* eXST1.EFD */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[58].attribute /* eXST1.EFD */.min;
  sysData->max[i++]   = data->modelData->realVarsData[58].attribute /* eXST1.EFD */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS454(sysData);
}

void getIterationVarsNLS454(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[58] /* eXST1.EFD variable */;
}


/* inner equations */

/*
equation index: 431
type: SIMPLE_ASSIGN
eXST1.Vm1.y = if abs(eXST1.Vm1.T) <= 1e-15 then eXST1.K_a.y * eXST1.Vm1.K else eXST1.Vm1.state
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_431(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,431};
  modelica_boolean tmp0;
  tmp0 = LessEq(fabs(data->simulationInfo->realParameter[107] /* eXST1.Vm1.T PARAM */),1e-15);
  data->localData[0]->realVars[63] /* eXST1.Vm1.y variable */ = (tmp0?(data->localData[0]->realVars[61] /* eXST1.K_a.y variable */) * (data->simulationInfo->realParameter[106] /* eXST1.Vm1.K PARAM */):data->localData[0]->realVars[1] /* eXST1.Vm1.state STATE(1) */);
  TRACE_POP
}
/*
equation index: 432
type: SIMPLE_ASSIGN
eXST1.K_a.u = eXST1.K_a.y / eXST1.K_a.k
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_432(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,432};
  data->localData[0]->realVars[60] /* eXST1.K_a.u variable */ = DIVISION_SIM(data->localData[0]->realVars[61] /* eXST1.K_a.y variable */,data->simulationInfo->realParameter[83] /* eXST1.K_a.k PARAM */,"eXST1.K_a.k",equationIndexes);
  TRACE_POP
}
/*
equation index: 433
type: SIMPLE_ASSIGN
eXST1.imDerivativeLag.y = 0.1 * (eXST1.Vm1.y - eXST1.imDerivativeLag.x) / eXST1.imDerivativeLag.T
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_433(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,433};
  data->localData[0]->realVars[68] /* eXST1.imDerivativeLag.y variable */ = (0.1) * (DIVISION_SIM(data->localData[0]->realVars[63] /* eXST1.Vm1.y variable */ - data->localData[0]->realVars[2] /* eXST1.imDerivativeLag.x STATE(1) */,data->simulationInfo->realParameter[124] /* eXST1.imDerivativeLag.T PARAM */,"eXST1.imDerivativeLag.T",equationIndexes));
  TRACE_POP
}
/*
equation index: 434
type: SIMPLE_ASSIGN
eXST1.feedback.y = eXST1.add3_2.y - eXST1.imDerivativeLag.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_434(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,434};
  data->localData[0]->realVars[67] /* eXST1.feedback.y variable */ = data->localData[0]->realVars[66] /* eXST1.add3_2.y variable */ - data->localData[0]->realVars[68] /* eXST1.imDerivativeLag.y variable */;
  TRACE_POP
}
/*
equation index: 435
type: SIMPLE_ASSIGN
eXST1.imLeadLag.u = smooth(0, if eXST1.feedback.y > eXST1.limiter.uMax then eXST1.limiter.uMax else if eXST1.feedback.y < eXST1.limiter.uMin then eXST1.limiter.uMin else eXST1.feedback.y)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_435(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,435};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  tmp0 = Greater(data->localData[0]->realVars[67] /* eXST1.feedback.y variable */,data->simulationInfo->realParameter[146] /* eXST1.limiter.uMax PARAM */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = data->simulationInfo->realParameter[146] /* eXST1.limiter.uMax PARAM */;
  }
  else
  {
    tmp1 = Less(data->localData[0]->realVars[67] /* eXST1.feedback.y variable */,data->simulationInfo->realParameter[147] /* eXST1.limiter.uMin PARAM */);
    tmp3 = (tmp1?data->simulationInfo->realParameter[147] /* eXST1.limiter.uMin PARAM */:data->localData[0]->realVars[67] /* eXST1.feedback.y variable */);
  }
  data->localData[0]->realVars[71] /* eXST1.imLeadLag.u variable */ = tmp3;
  TRACE_POP
}
/*
equation index: 436
type: SIMPLE_ASSIGN
eXST1.imLeadLag.TF.y = (eXST1.imLeadLag.TF.bb[2] - eXST1.imLeadLag.TF.a[2] * eXST1.imLeadLag.TF.d) * eXST1.imLeadLag.TF.x[1] + eXST1.imLeadLag.TF.d * eXST1.imLeadLag.u
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_436(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,436};
  data->localData[0]->realVars[70] /* eXST1.imLeadLag.TF.y variable */ = (data->simulationInfo->realParameter[138] /* eXST1.imLeadLag.TF.bb[2] PARAM */ - ((data->simulationInfo->realParameter[133] /* eXST1.imLeadLag.TF.a[2] PARAM */) * (data->simulationInfo->realParameter[139] /* eXST1.imLeadLag.TF.d PARAM */))) * (data->localData[0]->realVars[69] /* eXST1.imLeadLag.TF.x[1] variable */) + (data->simulationInfo->realParameter[139] /* eXST1.imLeadLag.TF.d PARAM */) * (data->localData[0]->realVars[71] /* eXST1.imLeadLag.u variable */);
  TRACE_POP
}

void residualFunc444(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,444};
  int i;
  modelica_boolean tmp0;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[61] /* eXST1.K_a.y variable */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_431(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_432(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_433(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_434(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_435(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_436(data, threadData);
  /* body */
  tmp0 = Less(fabs(data->simulationInfo->realParameter[129] /* eXST1.imLeadLag.T1 PARAM */ - data->simulationInfo->realParameter[130] /* eXST1.imLeadLag.T2 PARAM */),1e-15);
  res[0] = (tmp0?(data->simulationInfo->realParameter[128] /* eXST1.imLeadLag.K PARAM */) * (data->localData[0]->realVars[71] /* eXST1.imLeadLag.u variable */):data->localData[0]->realVars[70] /* eXST1.imLeadLag.TF.y variable */) - data->localData[0]->realVars[60] /* eXST1.K_a.u variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS444(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  inSysData->sparsePattern->leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  inSysData->sparsePattern->index = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->numberOfNoneZeros = 1;
  inSysData->sparsePattern->colorCols = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->maxColors = 1;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern->colorCols[0] = 1;
}
void initializeStaticDataNLS444(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for eXST1.K_a.y */
  sysData->nominal[i] = data->modelData->realVarsData[61].attribute /* eXST1.K_a.y */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[61].attribute /* eXST1.K_a.y */.min;
  sysData->max[i++]   = data->modelData->realVarsData[61].attribute /* eXST1.K_a.y */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS444(sysData);
}

void getIterationVarsNLS444(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[61] /* eXST1.K_a.y variable */;
}


/* inner equations */

/*
equation index: 328
type: SIMPLE_ASSIGN
constantLoad.v = sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_328(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,328};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[123] /* pwLine1.vs.re variable */;
  tmp1 = data->localData[0]->realVars[122] /* pwLine1.vs.im variable */;
  data->localData[0]->realVars[53] /* constantLoad.v variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 329
type: SIMPLE_ASSIGN
constantLoad.kP = if constantLoad.v < constantLoad.PQBRAK then constantLoad.a0 + constantLoad.a1 * cos(constantLoad.v * constantLoad.wp) + constantLoad.b1 * sin(constantLoad.v * constantLoad.wp) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_329(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,329};
  modelica_boolean tmp0;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[53] /* constantLoad.v variable */, data->simulationInfo->realParameter[35] /* constantLoad.PQBRAK PARAM */, 8, Less);
  data->localData[0]->realVars[50] /* constantLoad.kP variable */ = (tmp0?data->simulationInfo->realParameter[54] /* constantLoad.a0 PARAM */ + (data->simulationInfo->realParameter[55] /* constantLoad.a1 PARAM */) * (cos((data->localData[0]->realVars[53] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[75] /* constantLoad.wp PARAM */))) + (data->simulationInfo->realParameter[61] /* constantLoad.b1 PARAM */) * (sin((data->localData[0]->realVars[53] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[75] /* constantLoad.wp PARAM */))):1.0);
  TRACE_POP
}
/*
equation index: 330
type: SIMPLE_ASSIGN
constantLoad.kI = if constantLoad.v < 0.5 then constantLoad.a2 * constantLoad.b2 * constantLoad.v ^ (-1.0 + constantLoad.b2) * exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_330(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,330};
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  modelica_real tmp12;
  modelica_real tmp13;
  modelica_real tmp14;
  modelica_boolean tmp15;
  modelica_real tmp16;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[53] /* constantLoad.v variable */, 0.5, 7, Less);
  tmp15 = (modelica_boolean)tmp0;
  if(tmp15)
  {
    tmp1 = data->localData[0]->realVars[53] /* constantLoad.v variable */;
    tmp2 = -1.0 + data->simulationInfo->realParameter[62] /* constantLoad.b2 PARAM */;
    if(tmp1 < 0.0 && tmp2 != 0.0)
    {
      tmp4 = modf(tmp2, &tmp5);
      
      if(tmp4 > 0.5)
      {
        tmp4 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp4 < -0.5)
      {
        tmp4 += 1.0;
        tmp5 -= 1.0;
      }
      
      if(fabs(tmp4) < 1e-10)
        tmp3 = pow(tmp1, tmp5);
      else
      {
        tmp7 = modf(1.0/tmp2, &tmp6);
        if(tmp7 > 0.5)
        {
          tmp7 -= 1.0;
          tmp6 += 1.0;
        }
        else if(tmp7 < -0.5)
        {
          tmp7 += 1.0;
          tmp6 -= 1.0;
        }
        if(fabs(tmp7) < 1e-10 && ((unsigned long)tmp6 & 1))
        {
          tmp3 = -pow(-tmp1, tmp4)*pow(tmp1, tmp5);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
        }
      }
    }
    else
    {
      tmp3 = pow(tmp1, tmp2);
    }
    if(isnan(tmp3) || isinf(tmp3))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
    }tmp8 = data->localData[0]->realVars[53] /* constantLoad.v variable */;
    tmp9 = data->simulationInfo->realParameter[62] /* constantLoad.b2 PARAM */;
    if(tmp8 < 0.0 && tmp9 != 0.0)
    {
      tmp11 = modf(tmp9, &tmp12);
      
      if(tmp11 > 0.5)
      {
        tmp11 -= 1.0;
        tmp12 += 1.0;
      }
      else if(tmp11 < -0.5)
      {
        tmp11 += 1.0;
        tmp12 -= 1.0;
      }
      
      if(fabs(tmp11) < 1e-10)
        tmp10 = pow(tmp8, tmp12);
      else
      {
        tmp14 = modf(1.0/tmp9, &tmp13);
        if(tmp14 > 0.5)
        {
          tmp14 -= 1.0;
          tmp13 += 1.0;
        }
        else if(tmp14 < -0.5)
        {
          tmp14 += 1.0;
          tmp13 -= 1.0;
        }
        if(fabs(tmp14) < 1e-10 && ((unsigned long)tmp13 & 1))
        {
          tmp10 = -pow(-tmp8, tmp11)*pow(tmp8, tmp12);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp8, tmp9);
        }
      }
    }
    else
    {
      tmp10 = pow(tmp8, tmp9);
    }
    if(isnan(tmp10) || isinf(tmp10))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp8, tmp9);
    }
    tmp16 = (data->simulationInfo->realParameter[56] /* constantLoad.a2 PARAM */) * ((data->simulationInfo->realParameter[62] /* constantLoad.b2 PARAM */) * ((tmp3) * (exp(((-data->simulationInfo->realParameter[56] /* constantLoad.a2 PARAM */)) * (tmp10)))));
  }
  else
  {
    tmp16 = 1.0;
  }
  data->localData[0]->realVars[49] /* constantLoad.kI variable */ = tmp16;
  TRACE_POP
}
/*
equation index: 331
type: SIMPLE_ASSIGN
constantLoad.Q = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.im + constantLoad.d_Q) else constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_331(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,331};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->timeValue, data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */, 5, GreaterEq);
  RELATIONHYSTERESIS(tmp1, data->localData[0]->timeValue, data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[65] /* constantLoad.d_t PARAM */, 6, LessEq);
  tmp4 = (modelica_boolean)(tmp0 && tmp1);
  if(tmp4)
  {
    tmp2 = data->localData[0]->realVars[53] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[49] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[38] /* constantLoad.S_I.im PARAM */) * (data->localData[0]->realVars[53] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[42] /* constantLoad.S_Y.im PARAM */) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[50] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[40] /* constantLoad.S_P.im PARAM */ + data->simulationInfo->realParameter[64] /* constantLoad.d_Q PARAM */);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[53] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[49] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[38] /* constantLoad.S_I.im PARAM */) * (data->localData[0]->realVars[53] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[42] /* constantLoad.S_Y.im PARAM */) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[50] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[40] /* constantLoad.S_P.im PARAM */);
  }
  data->localData[0]->realVars[47] /* constantLoad.Q variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 332
type: SIMPLE_ASSIGN
constantLoad.P = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.re + constantLoad.d_P) else constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_332(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,332};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->timeValue, data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */, 5, GreaterEq);
  RELATIONHYSTERESIS(tmp1, data->localData[0]->timeValue, data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[65] /* constantLoad.d_t PARAM */, 6, LessEq);
  tmp4 = (modelica_boolean)(tmp0 && tmp1);
  if(tmp4)
  {
    tmp2 = data->localData[0]->realVars[53] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[49] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[39] /* constantLoad.S_I.re PARAM */) * (data->localData[0]->realVars[53] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[43] /* constantLoad.S_Y.re PARAM */) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[50] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[41] /* constantLoad.S_P.re PARAM */ + data->simulationInfo->realParameter[63] /* constantLoad.d_P PARAM */);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[53] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[49] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[39] /* constantLoad.S_I.re PARAM */) * (data->localData[0]->realVars[53] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[43] /* constantLoad.S_Y.re PARAM */) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[50] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[41] /* constantLoad.S_P.re PARAM */);
  }
  data->localData[0]->realVars[46] /* constantLoad.P variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 333
type: SIMPLE_ASSIGN
gENROE.PSIq = (-gENROE.PSIppq) - gENROE.Xppq * gENROE.iq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_333(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,333};
  data->localData[0]->realVars[90] /* gENROE.PSIq variable */ = (-data->localData[0]->realVars[89] /* gENROE.PSIppq variable */) - ((data->simulationInfo->realParameter[230] /* gENROE.Xppq PARAM */) * (data->localData[0]->realVars[97] /* gENROE.iq variable */));
  TRACE_POP
}
/*
equation index: 334
type: SIMPLE_ASSIGN
pwLine.is.re = ($cse7 * gENROE.iq - (-$cse6) * gENROE.id) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_334(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,334};
  data->localData[0]->realVars[109] /* pwLine.is.re variable */ = ((data->localData[0]->realVars[29] /* $cse7 variable */) * (data->localData[0]->realVars[97] /* gENROE.iq variable */) - (((-data->localData[0]->realVars[28] /* $cse6 variable */)) * (data->localData[0]->realVars[96] /* gENROE.id variable */))) * (data->simulationInfo->realParameter[175] /* gENROE.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 335
type: SIMPLE_ASSIGN
pwLine.is.im = ($cse6 * gENROE.iq - $cse7 * gENROE.id) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_335(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,335};
  data->localData[0]->realVars[108] /* pwLine.is.im variable */ = ((data->localData[0]->realVars[28] /* $cse6 variable */) * (data->localData[0]->realVars[97] /* gENROE.iq variable */) - ((data->localData[0]->realVars[29] /* $cse7 variable */) * (data->localData[0]->realVars[96] /* gENROE.id variable */))) * (data->simulationInfo->realParameter[175] /* gENROE.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 336
type: SIMPLE_ASSIGN
gENROE.ud = (-gENROE.PSIq) - gENROE.R_a * gENROE.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_336(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,336};
  data->localData[0]->realVars[98] /* gENROE.ud variable */ = (-data->localData[0]->realVars[90] /* gENROE.PSIq variable */) - ((data->simulationInfo->realParameter[212] /* gENROE.R_a PARAM */) * (data->localData[0]->realVars[96] /* gENROE.id variable */));
  TRACE_POP
}
/*
equation index: 337
type: SIMPLE_ASSIGN
gENROE.PSId = gENROE.PSIppd - gENROE.Xppd * gENROE.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_337(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,337};
  data->localData[0]->realVars[86] /* gENROE.PSId variable */ = data->localData[0]->realVars[88] /* gENROE.PSIppd variable */ - ((data->simulationInfo->realParameter[229] /* gENROE.Xppd PARAM */) * (data->localData[0]->realVars[96] /* gENROE.id variable */));
  TRACE_POP
}
/*
equation index: 338
type: SIMPLE_ASSIGN
gENROE.uq = gENROE.PSId - gENROE.R_a * gENROE.iq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_338(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,338};
  data->localData[0]->realVars[99] /* gENROE.uq variable */ = data->localData[0]->realVars[86] /* gENROE.PSId variable */ - ((data->simulationInfo->realParameter[212] /* gENROE.R_a PARAM */) * (data->localData[0]->realVars[97] /* gENROE.iq variable */));
  TRACE_POP
}
/*
equation index: 339
type: SIMPLE_ASSIGN
pwLine.vs.im = $cse6 * gENROE.uq - $cse7 * gENROE.ud
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_339(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,339};
  data->localData[0]->realVars[110] /* pwLine.vs.im variable */ = (data->localData[0]->realVars[28] /* $cse6 variable */) * (data->localData[0]->realVars[99] /* gENROE.uq variable */) - ((data->localData[0]->realVars[29] /* $cse7 variable */) * (data->localData[0]->realVars[98] /* gENROE.ud variable */));
  TRACE_POP
}
/*
equation index: 340
type: SIMPLE_ASSIGN
pwLine.vs.re = $cse6 * gENROE.ud + $cse7 * gENROE.uq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_340(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,340};
  data->localData[0]->realVars[111] /* pwLine.vs.re variable */ = (data->localData[0]->realVars[28] /* $cse6 variable */) * (data->localData[0]->realVars[98] /* gENROE.ud variable */) + (data->localData[0]->realVars[29] /* $cse7 variable */) * (data->localData[0]->realVars[99] /* gENROE.uq variable */);
  TRACE_POP
}
/*
equation index: 341
type: SIMPLE_ASSIGN
gENCLS.p.ii = ($cse2 * gENCLS.id - $cse1 * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_341(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,341};
  data->localData[0]->realVars[79] /* gENCLS.p.ii variable */ = ((data->localData[0]->realVars[25] /* $cse2 variable */) * (data->localData[0]->realVars[76] /* gENCLS.id variable */) - ((data->localData[0]->realVars[24] /* $cse1 variable */) * (data->localData[0]->realVars[77] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[149] /* gENCLS.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 342
type: SIMPLE_ASSIGN
gENCLS.p.ir = ((-$cse1) * gENCLS.id - $cse2 * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_342(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,342};
  data->localData[0]->realVars[80] /* gENCLS.p.ir variable */ = (((-data->localData[0]->realVars[24] /* $cse1 variable */)) * (data->localData[0]->realVars[76] /* gENCLS.id variable */) - ((data->localData[0]->realVars[25] /* $cse2 variable */) * (data->localData[0]->realVars[77] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[149] /* gENCLS.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 343
type: SIMPLE_ASSIGN
gENCLS.vd = gENCLS.X_d * gENCLS.iq - gENCLS.R_a * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_343(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,343};
  data->localData[0]->realVars[81] /* gENCLS.vd variable */ = (data->simulationInfo->realParameter[158] /* gENCLS.X_d PARAM */) * (data->localData[0]->realVars[77] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[155] /* gENCLS.R_a PARAM */) * (data->localData[0]->realVars[76] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 344
type: SIMPLE_ASSIGN
gENCLS.vq = gENCLS.eq + (-gENCLS.R_a) * gENCLS.iq - gENCLS.X_d * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_344(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,344};
  data->localData[0]->realVars[82] /* gENCLS.vq variable */ = data->localData[0]->realVars[5] /* gENCLS.eq STATE(1) */ + ((-data->simulationInfo->realParameter[155] /* gENCLS.R_a PARAM */)) * (data->localData[0]->realVars[77] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[158] /* gENCLS.X_d PARAM */) * (data->localData[0]->realVars[76] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 345
type: SIMPLE_ASSIGN
pwLine1.ir.re = (-pwLine4.ir.re) - gENCLS.p.ir
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_345(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,345};
  data->localData[0]->realVars[117] /* pwLine1.ir.re variable */ = (-data->localData[0]->realVars[139] /* pwLine4.ir.re variable */) - data->localData[0]->realVars[80] /* gENCLS.p.ir variable */;
  TRACE_POP
}
/*
equation index: 346
type: SIMPLE_ASSIGN
pwLine4.ir.im = (-pwLine1.ir.im) - gENCLS.p.ii
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_346(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,346};
  data->localData[0]->realVars[138] /* pwLine4.ir.im variable */ = (-data->localData[0]->realVars[116] /* pwLine1.ir.im variable */) - data->localData[0]->realVars[79] /* gENCLS.p.ii variable */;
  TRACE_POP
}
/*
equation index: 347
type: SIMPLE_ASSIGN
pwFault.p.ir = (-pwLine3.ir.re) - pwLine4.is.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_347(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,347};
  data->localData[0]->realVars[101] /* pwFault.p.ir variable */ = (-data->localData[0]->realVars[129] /* pwLine3.ir.re variable */) - data->localData[0]->realVars[141] /* pwLine4.is.re variable */;
  TRACE_POP
}
/*
equation index: 348
type: SIMPLE_ASSIGN
pwFault.p.ii = (-pwLine3.ir.im) - pwLine4.is.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_348(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,348};
  data->localData[0]->realVars[100] /* pwFault.p.ii variable */ = (-data->localData[0]->realVars[128] /* pwLine3.ir.im variable */) - data->localData[0]->realVars[140] /* pwLine4.is.im variable */;
  TRACE_POP
}
/*
equation index: 349
type: SIMPLE_ASSIGN
pwLine3.is.re = (-pwLine.ir.re) - pwLine1.is.re - constantLoad.p.ir
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_349(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,349};
  data->localData[0]->realVars[131] /* pwLine3.is.re variable */ = (-data->localData[0]->realVars[107] /* pwLine.ir.re variable */) - data->localData[0]->realVars[119] /* pwLine1.is.re variable */ - data->localData[0]->realVars[52] /* constantLoad.p.ir variable */;
  TRACE_POP
}
/*
equation index: 350
type: SIMPLE_ASSIGN
pwLine3.is.im = (-pwLine.ir.im) - pwLine1.is.im - constantLoad.p.ii
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_350(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,350};
  data->localData[0]->realVars[130] /* pwLine3.is.im variable */ = (-data->localData[0]->realVars[106] /* pwLine.ir.im variable */) - data->localData[0]->realVars[118] /* pwLine1.is.im variable */ - data->localData[0]->realVars[51] /* constantLoad.p.ii variable */;
  TRACE_POP
}

void residualFunc418(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,418};
  int i;
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_boolean tmp5;
  modelica_real tmp6;
  modelica_boolean tmp7;
  modelica_real tmp8;
  modelica_boolean tmp9;
  modelica_real tmp10;
  modelica_boolean tmp11;
  modelica_boolean tmp12;
  modelica_boolean tmp13;
  modelica_boolean tmp14;
  modelica_boolean tmp15;
  modelica_boolean tmp16;
  modelica_boolean tmp17;
  modelica_boolean tmp18;
  modelica_boolean tmp19;
  modelica_real tmp20;
  modelica_real tmp21;
  modelica_boolean tmp22;
  modelica_real tmp23;
  modelica_boolean tmp24;
  modelica_real tmp25;
  modelica_boolean tmp26;
  modelica_real tmp27;
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
  modelica_boolean tmp47;
  modelica_boolean tmp48;
  modelica_boolean tmp49;
  modelica_boolean tmp50;
  modelica_boolean tmp51;
  modelica_boolean tmp52;
  modelica_boolean tmp53;
  /* iteration variables */
  for (i=0; i<22; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<22; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[118] /* pwLine1.is.im variable */ = xloc[0];
  data->localData[0]->realVars[106] /* pwLine.ir.im variable */ = xloc[1];
  data->localData[0]->realVars[119] /* pwLine1.is.re variable */ = xloc[2];
  data->localData[0]->realVars[107] /* pwLine.ir.re variable */ = xloc[3];
  data->localData[0]->realVars[52] /* constantLoad.p.ir variable */ = xloc[4];
  data->localData[0]->realVars[51] /* constantLoad.p.ii variable */ = xloc[5];
  data->localData[0]->realVars[140] /* pwLine4.is.im variable */ = xloc[6];
  data->localData[0]->realVars[128] /* pwLine3.ir.im variable */ = xloc[7];
  data->localData[0]->realVars[129] /* pwLine3.ir.re variable */ = xloc[8];
  data->localData[0]->realVars[141] /* pwLine4.is.re variable */ = xloc[9];
  data->localData[0]->realVars[116] /* pwLine1.ir.im variable */ = xloc[10];
  data->localData[0]->realVars[139] /* pwLine4.ir.re variable */ = xloc[11];
  data->localData[0]->realVars[77] /* gENCLS.iq variable */ = xloc[12];
  data->localData[0]->realVars[76] /* gENCLS.id variable */ = xloc[13];
  data->localData[0]->realVars[120] /* pwLine1.vr.im variable */ = xloc[14];
  data->localData[0]->realVars[121] /* pwLine1.vr.re variable */ = xloc[15];
  data->localData[0]->realVars[96] /* gENROE.id variable */ = xloc[16];
  data->localData[0]->realVars[97] /* gENROE.iq variable */ = xloc[17];
  data->localData[0]->realVars[123] /* pwLine1.vs.re variable */ = xloc[18];
  data->localData[0]->realVars[122] /* pwLine1.vs.im variable */ = xloc[19];
  data->localData[0]->realVars[132] /* pwLine3.vr.im variable */ = xloc[20];
  data->localData[0]->realVars[133] /* pwLine3.vr.re variable */ = xloc[21];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_328(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_329(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_330(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_331(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_332(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_333(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_334(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_335(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_336(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_337(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_338(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_339(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_340(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_341(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_342(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_343(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_344(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_345(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_346(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_347(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_348(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_349(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_350(data, threadData);
  /* body */
  RELATIONHYSTERESIS(tmp0, data->localData[0]->timeValue, data->simulationInfo->realParameter[262] /* pwFault.t1 PARAM */, 11, Less);
  tmp9 = (modelica_boolean)tmp0;
  if(tmp9)
  {
    tmp10 = data->localData[0]->realVars[100] /* pwFault.p.ii variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp1, data->localData[0]->timeValue, data->simulationInfo->realParameter[263] /* pwFault.t2 PARAM */, 12, Less);
    tmp7 = (modelica_boolean)(tmp1 && data->simulationInfo->booleanParameter[66] /* pwFault.ground PARAM */);
    if(tmp7)
    {
      tmp8 = data->localData[0]->realVars[133] /* pwLine3.vr.re variable */ - 1e-10;
    }
    else
    {
      RELATIONHYSTERESIS(tmp2, data->localData[0]->timeValue, data->simulationInfo->realParameter[263] /* pwFault.t2 PARAM */, 12, Less);
      tmp5 = (modelica_boolean)tmp2;
      if(tmp5)
      {
        tmp3 = data->simulationInfo->realParameter[261] /* pwFault.X PARAM */;
        tmp4 = data->simulationInfo->realParameter[260] /* pwFault.R PARAM */;
        tmp6 = data->localData[0]->realVars[100] /* pwFault.p.ii variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[260] /* pwFault.R PARAM */) * (data->localData[0]->realVars[132] /* pwLine3.vr.im variable */) - ((data->simulationInfo->realParameter[261] /* pwFault.X PARAM */) * (data->localData[0]->realVars[133] /* pwLine3.vr.re variable */)),(tmp3 * tmp3) + (tmp4 * tmp4),"pwFault.X ^ 2.0 + pwFault.R ^ 2.0",equationIndexes));
      }
      else
      {
        tmp6 = data->localData[0]->realVars[100] /* pwFault.p.ii variable */;
      }
      tmp8 = tmp6;
    }
    tmp10 = tmp8;
  }
  res[0] = tmp10;

  RELATIONHYSTERESIS(tmp11, data->localData[0]->timeValue, data->simulationInfo->realParameter[306] /* pwLine4.t1 PARAM */, 9, GreaterEq);
  RELATIONHYSTERESIS(tmp12, data->localData[0]->timeValue, data->simulationInfo->realParameter[307] /* pwLine4.t2 PARAM */, 10, Less);
  res[1] = ((tmp11 && tmp12)?data->localData[0]->realVars[141] /* pwLine4.is.re variable */:data->localData[0]->realVars[133] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[121] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[305] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[141] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[132] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[302] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[133] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[303] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[304] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[140] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[133] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[302] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[132] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[303] /* pwLine4.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp13, data->localData[0]->timeValue, data->simulationInfo->realParameter[295] /* pwLine3.t1 PARAM */, 3, GreaterEq);
  RELATIONHYSTERESIS(tmp14, data->localData[0]->timeValue, data->simulationInfo->realParameter[296] /* pwLine3.t2 PARAM */, 4, Less);
  res[2] = ((tmp13 && tmp14)?data->localData[0]->realVars[129] /* pwLine3.ir.re variable */:data->localData[0]->realVars[133] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[123] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[294] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[129] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[132] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[291] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[133] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[292] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[293] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[128] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[133] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[291] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[132] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[292] /* pwLine3.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp15, data->localData[0]->timeValue, data->simulationInfo->realParameter[306] /* pwLine4.t1 PARAM */, 9, GreaterEq);
  RELATIONHYSTERESIS(tmp16, data->localData[0]->timeValue, data->simulationInfo->realParameter[307] /* pwLine4.t2 PARAM */, 10, Less);
  res[3] = ((tmp15 && tmp16)?data->localData[0]->realVars[140] /* pwLine4.is.im variable */:data->localData[0]->realVars[132] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[120] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[305] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[140] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[133] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[302] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[132] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[303] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[304] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[141] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[132] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[302] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[133] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[303] /* pwLine4.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp17, data->localData[0]->timeValue, data->simulationInfo->realParameter[262] /* pwFault.t1 PARAM */, 11, Less);
  tmp26 = (modelica_boolean)tmp17;
  if(tmp26)
  {
    tmp27 = data->localData[0]->realVars[101] /* pwFault.p.ir variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp18, data->localData[0]->timeValue, data->simulationInfo->realParameter[263] /* pwFault.t2 PARAM */, 12, Less);
    tmp24 = (modelica_boolean)(tmp18 && data->simulationInfo->booleanParameter[66] /* pwFault.ground PARAM */);
    if(tmp24)
    {
      tmp25 = data->localData[0]->realVars[132] /* pwLine3.vr.im variable */;
    }
    else
    {
      RELATIONHYSTERESIS(tmp19, data->localData[0]->timeValue, data->simulationInfo->realParameter[263] /* pwFault.t2 PARAM */, 12, Less);
      tmp22 = (modelica_boolean)tmp19;
      if(tmp22)
      {
        tmp20 = data->simulationInfo->realParameter[260] /* pwFault.R PARAM */;
        tmp21 = data->simulationInfo->realParameter[261] /* pwFault.X PARAM */;
        tmp23 = data->localData[0]->realVars[101] /* pwFault.p.ir variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[260] /* pwFault.R PARAM */) * (data->localData[0]->realVars[133] /* pwLine3.vr.re variable */) + (data->simulationInfo->realParameter[261] /* pwFault.X PARAM */) * (data->localData[0]->realVars[132] /* pwLine3.vr.im variable */),(tmp20 * tmp20) + (tmp21 * tmp21),"pwFault.R ^ 2.0 + pwFault.X ^ 2.0",equationIndexes));
      }
      else
      {
        tmp23 = data->localData[0]->realVars[101] /* pwFault.p.ir variable */;
      }
      tmp25 = tmp23;
    }
    tmp27 = tmp25;
  }
  res[4] = tmp27;

  RELATIONHYSTERESIS(tmp28, data->localData[0]->timeValue, data->simulationInfo->realParameter[306] /* pwLine4.t1 PARAM */, 9, GreaterEq);
  RELATIONHYSTERESIS(tmp29, data->localData[0]->timeValue, data->simulationInfo->realParameter[307] /* pwLine4.t2 PARAM */, 10, Less);
  res[5] = ((tmp28 && tmp29)?data->localData[0]->realVars[139] /* pwLine4.ir.re variable */:data->localData[0]->realVars[121] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[133] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[305] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[139] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[120] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[302] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[121] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[303] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[304] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[138] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[121] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[302] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[120] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[303] /* pwLine4.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp30, data->localData[0]->timeValue, data->simulationInfo->realParameter[284] /* pwLine1.t1 PARAM */, 13, GreaterEq);
  RELATIONHYSTERESIS(tmp31, data->localData[0]->timeValue, data->simulationInfo->realParameter[285] /* pwLine1.t2 PARAM */, 14, Less);
  res[6] = ((tmp30 && tmp31)?data->localData[0]->realVars[117] /* pwLine1.ir.re variable */:data->localData[0]->realVars[121] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[123] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[283] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[117] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[120] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[280] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[121] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[281] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[282] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[116] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[121] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[280] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[120] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[281] /* pwLine1.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp32, data->localData[0]->timeValue, data->simulationInfo->realParameter[306] /* pwLine4.t1 PARAM */, 9, GreaterEq);
  RELATIONHYSTERESIS(tmp33, data->localData[0]->timeValue, data->simulationInfo->realParameter[307] /* pwLine4.t2 PARAM */, 10, Less);
  res[7] = ((tmp32 && tmp33)?data->localData[0]->realVars[138] /* pwLine4.ir.im variable */:data->localData[0]->realVars[120] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[132] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[305] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[138] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[121] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[302] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[120] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[303] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[304] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[139] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[120] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[302] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[121] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[303] /* pwLine4.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp34, data->localData[0]->timeValue, data->simulationInfo->realParameter[295] /* pwLine3.t1 PARAM */, 3, GreaterEq);
  RELATIONHYSTERESIS(tmp35, data->localData[0]->timeValue, data->simulationInfo->realParameter[296] /* pwLine3.t2 PARAM */, 4, Less);
  res[8] = ((tmp34 && tmp35)?data->localData[0]->realVars[128] /* pwLine3.ir.im variable */:data->localData[0]->realVars[132] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[122] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[294] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[128] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[133] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[291] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[132] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[292] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[293] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[129] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[132] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[291] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[133] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[292] /* pwLine3.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp36, data->localData[0]->timeValue, data->simulationInfo->realParameter[273] /* pwLine.t1 PARAM */, 1, GreaterEq);
  RELATIONHYSTERESIS(tmp37, data->localData[0]->timeValue, data->simulationInfo->realParameter[274] /* pwLine.t2 PARAM */, 2, Less);
  res[9] = ((tmp36 && tmp37)?data->localData[0]->realVars[109] /* pwLine.is.re variable */:data->localData[0]->realVars[111] /* pwLine.vs.re variable */ - data->localData[0]->realVars[123] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[272] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[109] /* pwLine.is.re variable */ + (data->localData[0]->realVars[110] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[269] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[111] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[270] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[271] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[108] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[111] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[269] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[110] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[270] /* pwLine.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp38, data->localData[0]->timeValue, data->simulationInfo->realParameter[273] /* pwLine.t1 PARAM */, 1, GreaterEq);
  RELATIONHYSTERESIS(tmp39, data->localData[0]->timeValue, data->simulationInfo->realParameter[274] /* pwLine.t2 PARAM */, 2, Less);
  res[10] = ((tmp38 && tmp39)?data->localData[0]->realVars[108] /* pwLine.is.im variable */:data->localData[0]->realVars[110] /* pwLine.vs.im variable */ - data->localData[0]->realVars[122] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[272] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[108] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[111] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[269] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[110] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[270] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[271] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[109] /* pwLine.is.re variable */ + (data->localData[0]->realVars[110] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[269] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[111] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[270] /* pwLine.Y.re PARAM */)))));

  res[11] = (data->localData[0]->realVars[122] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[52] /* constantLoad.p.ir variable */) + ((-data->localData[0]->realVars[123] /* pwLine1.vs.re variable */)) * (data->localData[0]->realVars[51] /* constantLoad.p.ii variable */) - data->localData[0]->realVars[47] /* constantLoad.Q variable */;

  res[12] = (data->localData[0]->realVars[122] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[51] /* constantLoad.p.ii variable */) + (data->localData[0]->realVars[123] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[52] /* constantLoad.p.ir variable */) - data->localData[0]->realVars[46] /* constantLoad.P variable */;

  RELATIONHYSTERESIS(tmp40, data->localData[0]->timeValue, data->simulationInfo->realParameter[273] /* pwLine.t1 PARAM */, 1, GreaterEq);
  RELATIONHYSTERESIS(tmp41, data->localData[0]->timeValue, data->simulationInfo->realParameter[274] /* pwLine.t2 PARAM */, 2, Less);
  res[13] = ((tmp40 && tmp41)?data->localData[0]->realVars[106] /* pwLine.ir.im variable */:data->localData[0]->realVars[122] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[110] /* pwLine.vs.im variable */ - ((data->simulationInfo->realParameter[272] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[106] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[123] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[269] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[122] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[270] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[271] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[107] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[122] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[269] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[123] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[270] /* pwLine.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp42, data->localData[0]->timeValue, data->simulationInfo->realParameter[273] /* pwLine.t1 PARAM */, 1, GreaterEq);
  RELATIONHYSTERESIS(tmp43, data->localData[0]->timeValue, data->simulationInfo->realParameter[274] /* pwLine.t2 PARAM */, 2, Less);
  res[14] = ((tmp42 && tmp43)?data->localData[0]->realVars[107] /* pwLine.ir.re variable */:data->localData[0]->realVars[123] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[111] /* pwLine.vs.re variable */ - ((data->simulationInfo->realParameter[272] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[107] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[122] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[269] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[123] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[270] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[271] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[106] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[123] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[269] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[122] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[270] /* pwLine.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp44, data->localData[0]->timeValue, data->simulationInfo->realParameter[295] /* pwLine3.t1 PARAM */, 3, GreaterEq);
  RELATIONHYSTERESIS(tmp45, data->localData[0]->timeValue, data->simulationInfo->realParameter[296] /* pwLine3.t2 PARAM */, 4, Less);
  res[15] = ((tmp44 && tmp45)?data->localData[0]->realVars[131] /* pwLine3.is.re variable */:data->localData[0]->realVars[123] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[133] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[294] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[131] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[122] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[291] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[123] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[292] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[293] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[130] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[123] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[291] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[122] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[292] /* pwLine3.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp46, data->localData[0]->timeValue, data->simulationInfo->realParameter[295] /* pwLine3.t1 PARAM */, 3, GreaterEq);
  RELATIONHYSTERESIS(tmp47, data->localData[0]->timeValue, data->simulationInfo->realParameter[296] /* pwLine3.t2 PARAM */, 4, Less);
  res[16] = ((tmp46 && tmp47)?data->localData[0]->realVars[130] /* pwLine3.is.im variable */:data->localData[0]->realVars[122] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[132] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[294] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[130] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[123] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[291] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[122] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[292] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[293] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[131] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[122] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[291] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[123] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[292] /* pwLine3.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp48, data->localData[0]->timeValue, data->simulationInfo->realParameter[284] /* pwLine1.t1 PARAM */, 13, GreaterEq);
  RELATIONHYSTERESIS(tmp49, data->localData[0]->timeValue, data->simulationInfo->realParameter[285] /* pwLine1.t2 PARAM */, 14, Less);
  res[17] = ((tmp48 && tmp49)?data->localData[0]->realVars[118] /* pwLine1.is.im variable */:data->localData[0]->realVars[122] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[120] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[283] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[118] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[123] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[280] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[122] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[281] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[282] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[119] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[122] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[280] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[123] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[281] /* pwLine1.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp50, data->localData[0]->timeValue, data->simulationInfo->realParameter[284] /* pwLine1.t1 PARAM */, 13, GreaterEq);
  RELATIONHYSTERESIS(tmp51, data->localData[0]->timeValue, data->simulationInfo->realParameter[285] /* pwLine1.t2 PARAM */, 14, Less);
  res[18] = ((tmp50 && tmp51)?data->localData[0]->realVars[119] /* pwLine1.is.re variable */:data->localData[0]->realVars[123] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[121] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[283] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[119] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[122] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[280] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[123] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[281] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[282] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[118] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[123] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[280] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[122] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[281] /* pwLine1.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp52, data->localData[0]->timeValue, data->simulationInfo->realParameter[284] /* pwLine1.t1 PARAM */, 13, GreaterEq);
  RELATIONHYSTERESIS(tmp53, data->localData[0]->timeValue, data->simulationInfo->realParameter[285] /* pwLine1.t2 PARAM */, 14, Less);
  res[19] = ((tmp52 && tmp53)?data->localData[0]->realVars[116] /* pwLine1.ir.im variable */:data->localData[0]->realVars[120] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[122] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[283] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[116] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[121] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[280] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[120] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[281] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[282] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[117] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[120] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[280] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[121] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[281] /* pwLine1.Y.re PARAM */)))));

  res[20] = (data->localData[0]->realVars[24] /* $cse1 variable */) * (data->localData[0]->realVars[82] /* gENCLS.vq variable */) + ((-data->localData[0]->realVars[25] /* $cse2 variable */)) * (data->localData[0]->realVars[81] /* gENCLS.vd variable */) - data->localData[0]->realVars[120] /* pwLine1.vr.im variable */;

  res[21] = (data->localData[0]->realVars[25] /* $cse2 variable */) * (data->localData[0]->realVars[82] /* gENCLS.vq variable */) + (data->localData[0]->realVars[24] /* $cse1 variable */) * (data->localData[0]->realVars[81] /* gENCLS.vd variable */) - data->localData[0]->realVars[121] /* pwLine1.vr.re variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS418(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+22] = {0,4,4,4,4,4,4,3,3,3,3,4,4,6,6,7,7,4,4,11,11,8,8};
  const int rowIndex[116] = {15,16,17,18,13,14,15,16,15,16,17,18,13,14,15,16,11,12,15,16,11,12,15,16,0,1,3,0,2,8,2,4,8,1,3,4,5,6,7,19,5,6,7,19,5,6,7,19,20,21,5,6,7,19,20,21,3,5,6,7,17,19,20,1,5,6,7,18,19,21,9,10,13,14,9,10,13,14,2,6,9,11,12,13,14,15,16,17,18,8,10,11,12,13,14,15,16,17,18,19,0,1,2,3,4,7,8,16,0,1,2,3,4,5,8,15};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  inSysData->sparsePattern->leadindex = (unsigned int*) malloc((22+1)*sizeof(int));
  inSysData->sparsePattern->index = (unsigned int*) malloc(116*sizeof(int));
  inSysData->sparsePattern->numberOfNoneZeros = 116;
  inSysData->sparsePattern->colorCols = (unsigned int*) malloc(22*sizeof(int));
  inSysData->sparsePattern->maxColors = 10;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (22+1)*sizeof(int));
  
  for(i=2;i<22+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 116*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern->colorCols[21] = 1;
  inSysData->sparsePattern->colorCols[20] = 2;
  inSysData->sparsePattern->colorCols[19] = 3;
  inSysData->sparsePattern->colorCols[18] = 4;
  inSysData->sparsePattern->colorCols[5] = 5;
  inSysData->sparsePattern->colorCols[15] = 5;
  inSysData->sparsePattern->colorCols[4] = 6;
  inSysData->sparsePattern->colorCols[14] = 6;
  inSysData->sparsePattern->colorCols[3] = 7;
  inSysData->sparsePattern->colorCols[13] = 7;
  inSysData->sparsePattern->colorCols[2] = 8;
  inSysData->sparsePattern->colorCols[12] = 8;
  inSysData->sparsePattern->colorCols[17] = 8;
  inSysData->sparsePattern->colorCols[1] = 9;
  inSysData->sparsePattern->colorCols[7] = 9;
  inSysData->sparsePattern->colorCols[9] = 9;
  inSysData->sparsePattern->colorCols[11] = 9;
  inSysData->sparsePattern->colorCols[0] = 10;
  inSysData->sparsePattern->colorCols[6] = 10;
  inSysData->sparsePattern->colorCols[8] = 10;
  inSysData->sparsePattern->colorCols[10] = 10;
  inSysData->sparsePattern->colorCols[16] = 10;
}
void initializeStaticDataNLS418(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for pwLine1.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[118].attribute /* pwLine1.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[118].attribute /* pwLine1.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[118].attribute /* pwLine1.is.im */.max;
  /* static nls data for pwLine.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[106].attribute /* pwLine.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[106].attribute /* pwLine.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[106].attribute /* pwLine.ir.im */.max;
  /* static nls data for pwLine1.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[119].attribute /* pwLine1.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[119].attribute /* pwLine1.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[119].attribute /* pwLine1.is.re */.max;
  /* static nls data for pwLine.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[107].attribute /* pwLine.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[107].attribute /* pwLine.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[107].attribute /* pwLine.ir.re */.max;
  /* static nls data for constantLoad.p.ir */
  sysData->nominal[i] = data->modelData->realVarsData[52].attribute /* constantLoad.p.ir */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[52].attribute /* constantLoad.p.ir */.min;
  sysData->max[i++]   = data->modelData->realVarsData[52].attribute /* constantLoad.p.ir */.max;
  /* static nls data for constantLoad.p.ii */
  sysData->nominal[i] = data->modelData->realVarsData[51].attribute /* constantLoad.p.ii */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[51].attribute /* constantLoad.p.ii */.min;
  sysData->max[i++]   = data->modelData->realVarsData[51].attribute /* constantLoad.p.ii */.max;
  /* static nls data for pwLine4.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[140].attribute /* pwLine4.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[140].attribute /* pwLine4.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[140].attribute /* pwLine4.is.im */.max;
  /* static nls data for pwLine3.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[128].attribute /* pwLine3.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[128].attribute /* pwLine3.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[128].attribute /* pwLine3.ir.im */.max;
  /* static nls data for pwLine3.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[129].attribute /* pwLine3.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[129].attribute /* pwLine3.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[129].attribute /* pwLine3.ir.re */.max;
  /* static nls data for pwLine4.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[141].attribute /* pwLine4.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[141].attribute /* pwLine4.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[141].attribute /* pwLine4.is.re */.max;
  /* static nls data for pwLine1.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[116].attribute /* pwLine1.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[116].attribute /* pwLine1.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[116].attribute /* pwLine1.ir.im */.max;
  /* static nls data for pwLine4.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[139].attribute /* pwLine4.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[139].attribute /* pwLine4.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[139].attribute /* pwLine4.ir.re */.max;
  /* static nls data for gENCLS.iq */
  sysData->nominal[i] = data->modelData->realVarsData[77].attribute /* gENCLS.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[77].attribute /* gENCLS.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[77].attribute /* gENCLS.iq */.max;
  /* static nls data for gENCLS.id */
  sysData->nominal[i] = data->modelData->realVarsData[76].attribute /* gENCLS.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[76].attribute /* gENCLS.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[76].attribute /* gENCLS.id */.max;
  /* static nls data for pwLine1.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[120].attribute /* pwLine1.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[120].attribute /* pwLine1.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[120].attribute /* pwLine1.vr.im */.max;
  /* static nls data for pwLine1.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[121].attribute /* pwLine1.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[121].attribute /* pwLine1.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[121].attribute /* pwLine1.vr.re */.max;
  /* static nls data for gENROE.id */
  sysData->nominal[i] = data->modelData->realVarsData[96].attribute /* gENROE.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[96].attribute /* gENROE.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[96].attribute /* gENROE.id */.max;
  /* static nls data for gENROE.iq */
  sysData->nominal[i] = data->modelData->realVarsData[97].attribute /* gENROE.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[97].attribute /* gENROE.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[97].attribute /* gENROE.iq */.max;
  /* static nls data for pwLine1.vs.re */
  sysData->nominal[i] = data->modelData->realVarsData[123].attribute /* pwLine1.vs.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[123].attribute /* pwLine1.vs.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[123].attribute /* pwLine1.vs.re */.max;
  /* static nls data for pwLine1.vs.im */
  sysData->nominal[i] = data->modelData->realVarsData[122].attribute /* pwLine1.vs.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[122].attribute /* pwLine1.vs.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[122].attribute /* pwLine1.vs.im */.max;
  /* static nls data for pwLine3.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[132].attribute /* pwLine3.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[132].attribute /* pwLine3.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[132].attribute /* pwLine3.vr.im */.max;
  /* static nls data for pwLine3.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[133].attribute /* pwLine3.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[133].attribute /* pwLine3.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[133].attribute /* pwLine3.vr.re */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS418(sysData);
}

void getIterationVarsNLS418(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[118] /* pwLine1.is.im variable */;
  array[1] = data->localData[0]->realVars[106] /* pwLine.ir.im variable */;
  array[2] = data->localData[0]->realVars[119] /* pwLine1.is.re variable */;
  array[3] = data->localData[0]->realVars[107] /* pwLine.ir.re variable */;
  array[4] = data->localData[0]->realVars[52] /* constantLoad.p.ir variable */;
  array[5] = data->localData[0]->realVars[51] /* constantLoad.p.ii variable */;
  array[6] = data->localData[0]->realVars[140] /* pwLine4.is.im variable */;
  array[7] = data->localData[0]->realVars[128] /* pwLine3.ir.im variable */;
  array[8] = data->localData[0]->realVars[129] /* pwLine3.ir.re variable */;
  array[9] = data->localData[0]->realVars[141] /* pwLine4.is.re variable */;
  array[10] = data->localData[0]->realVars[116] /* pwLine1.ir.im variable */;
  array[11] = data->localData[0]->realVars[139] /* pwLine4.ir.re variable */;
  array[12] = data->localData[0]->realVars[77] /* gENCLS.iq variable */;
  array[13] = data->localData[0]->realVars[76] /* gENCLS.id variable */;
  array[14] = data->localData[0]->realVars[120] /* pwLine1.vr.im variable */;
  array[15] = data->localData[0]->realVars[121] /* pwLine1.vr.re variable */;
  array[16] = data->localData[0]->realVars[96] /* gENROE.id variable */;
  array[17] = data->localData[0]->realVars[97] /* gENROE.iq variable */;
  array[18] = data->localData[0]->realVars[123] /* pwLine1.vs.re variable */;
  array[19] = data->localData[0]->realVars[122] /* pwLine1.vs.im variable */;
  array[20] = data->localData[0]->realVars[132] /* pwLine3.vr.im variable */;
  array[21] = data->localData[0]->realVars[133] /* pwLine3.vr.re variable */;
}


/* inner equations */

/*
equation index: 182
type: SIMPLE_ASSIGN
constantLoad.v = sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_182(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,182};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[123] /* pwLine1.vs.re variable */;
  tmp1 = data->localData[0]->realVars[122] /* pwLine1.vs.im variable */;
  data->localData[0]->realVars[53] /* constantLoad.v variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 183
type: SIMPLE_ASSIGN
constantLoad.kI = if constantLoad.v < 0.5 then constantLoad.a2 * constantLoad.b2 * constantLoad.v ^ (-1.0 + constantLoad.b2) * exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_183(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,183};
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  modelica_real tmp12;
  modelica_real tmp13;
  modelica_real tmp14;
  modelica_boolean tmp15;
  modelica_real tmp16;
  tmp0 = Less(data->localData[0]->realVars[53] /* constantLoad.v variable */,0.5);
  tmp15 = (modelica_boolean)tmp0;
  if(tmp15)
  {
    tmp1 = data->localData[0]->realVars[53] /* constantLoad.v variable */;
    tmp2 = -1.0 + data->simulationInfo->realParameter[62] /* constantLoad.b2 PARAM */;
    if(tmp1 < 0.0 && tmp2 != 0.0)
    {
      tmp4 = modf(tmp2, &tmp5);
      
      if(tmp4 > 0.5)
      {
        tmp4 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp4 < -0.5)
      {
        tmp4 += 1.0;
        tmp5 -= 1.0;
      }
      
      if(fabs(tmp4) < 1e-10)
        tmp3 = pow(tmp1, tmp5);
      else
      {
        tmp7 = modf(1.0/tmp2, &tmp6);
        if(tmp7 > 0.5)
        {
          tmp7 -= 1.0;
          tmp6 += 1.0;
        }
        else if(tmp7 < -0.5)
        {
          tmp7 += 1.0;
          tmp6 -= 1.0;
        }
        if(fabs(tmp7) < 1e-10 && ((unsigned long)tmp6 & 1))
        {
          tmp3 = -pow(-tmp1, tmp4)*pow(tmp1, tmp5);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
        }
      }
    }
    else
    {
      tmp3 = pow(tmp1, tmp2);
    }
    if(isnan(tmp3) || isinf(tmp3))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
    }tmp8 = data->localData[0]->realVars[53] /* constantLoad.v variable */;
    tmp9 = data->simulationInfo->realParameter[62] /* constantLoad.b2 PARAM */;
    if(tmp8 < 0.0 && tmp9 != 0.0)
    {
      tmp11 = modf(tmp9, &tmp12);
      
      if(tmp11 > 0.5)
      {
        tmp11 -= 1.0;
        tmp12 += 1.0;
      }
      else if(tmp11 < -0.5)
      {
        tmp11 += 1.0;
        tmp12 -= 1.0;
      }
      
      if(fabs(tmp11) < 1e-10)
        tmp10 = pow(tmp8, tmp12);
      else
      {
        tmp14 = modf(1.0/tmp9, &tmp13);
        if(tmp14 > 0.5)
        {
          tmp14 -= 1.0;
          tmp13 += 1.0;
        }
        else if(tmp14 < -0.5)
        {
          tmp14 += 1.0;
          tmp13 -= 1.0;
        }
        if(fabs(tmp14) < 1e-10 && ((unsigned long)tmp13 & 1))
        {
          tmp10 = -pow(-tmp8, tmp11)*pow(tmp8, tmp12);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp8, tmp9);
        }
      }
    }
    else
    {
      tmp10 = pow(tmp8, tmp9);
    }
    if(isnan(tmp10) || isinf(tmp10))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp8, tmp9);
    }
    tmp16 = (data->simulationInfo->realParameter[56] /* constantLoad.a2 PARAM */) * ((data->simulationInfo->realParameter[62] /* constantLoad.b2 PARAM */) * ((tmp3) * (exp(((-data->simulationInfo->realParameter[56] /* constantLoad.a2 PARAM */)) * (tmp10)))));
  }
  else
  {
    tmp16 = 1.0;
  }
  data->localData[0]->realVars[49] /* constantLoad.kI variable */ = tmp16;
  TRACE_POP
}
/*
equation index: 184
type: SIMPLE_ASSIGN
constantLoad.kP = if constantLoad.v < constantLoad.PQBRAK then constantLoad.a0 + constantLoad.a1 * cos(constantLoad.v * constantLoad.wp) + constantLoad.b1 * sin(constantLoad.v * constantLoad.wp) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_184(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,184};
  modelica_boolean tmp0;
  tmp0 = Less(data->localData[0]->realVars[53] /* constantLoad.v variable */,data->simulationInfo->realParameter[35] /* constantLoad.PQBRAK PARAM */);
  data->localData[0]->realVars[50] /* constantLoad.kP variable */ = (tmp0?data->simulationInfo->realParameter[54] /* constantLoad.a0 PARAM */ + (data->simulationInfo->realParameter[55] /* constantLoad.a1 PARAM */) * (cos((data->localData[0]->realVars[53] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[75] /* constantLoad.wp PARAM */))) + (data->simulationInfo->realParameter[61] /* constantLoad.b1 PARAM */) * (sin((data->localData[0]->realVars[53] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[75] /* constantLoad.wp PARAM */))):1.0);
  TRACE_POP
}
/*
equation index: 185
type: SIMPLE_ASSIGN
constantLoad.Q = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.im + constantLoad.d_Q) else constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_185(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,185};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  tmp0 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */);
  tmp1 = LessEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[65] /* constantLoad.d_t PARAM */);
  tmp4 = (modelica_boolean)(tmp0 && tmp1);
  if(tmp4)
  {
    tmp2 = data->localData[0]->realVars[53] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[49] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[38] /* constantLoad.S_I.im PARAM */) * (data->localData[0]->realVars[53] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[42] /* constantLoad.S_Y.im PARAM */) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[50] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[40] /* constantLoad.S_P.im PARAM */ + data->simulationInfo->realParameter[64] /* constantLoad.d_Q PARAM */);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[53] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[49] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[38] /* constantLoad.S_I.im PARAM */) * (data->localData[0]->realVars[53] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[42] /* constantLoad.S_Y.im PARAM */) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[50] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[40] /* constantLoad.S_P.im PARAM */);
  }
  data->localData[0]->realVars[47] /* constantLoad.Q variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 186
type: SIMPLE_ASSIGN
constantLoad.P = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.re + constantLoad.d_P) else constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_186(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,186};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  tmp0 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */);
  tmp1 = LessEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[65] /* constantLoad.d_t PARAM */);
  tmp4 = (modelica_boolean)(tmp0 && tmp1);
  if(tmp4)
  {
    tmp2 = data->localData[0]->realVars[53] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[49] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[39] /* constantLoad.S_I.re PARAM */) * (data->localData[0]->realVars[53] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[43] /* constantLoad.S_Y.re PARAM */) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[50] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[41] /* constantLoad.S_P.re PARAM */ + data->simulationInfo->realParameter[63] /* constantLoad.d_P PARAM */);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[53] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[49] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[39] /* constantLoad.S_I.re PARAM */) * (data->localData[0]->realVars[53] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[43] /* constantLoad.S_Y.re PARAM */) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[50] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[41] /* constantLoad.S_P.re PARAM */);
  }
  data->localData[0]->realVars[46] /* constantLoad.P variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 187
type: SIMPLE_ASSIGN
eXST1.ECOMP0 = eXST1.ECOMP
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_187(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,187};
  data->simulationInfo->realParameter[78] /* eXST1.ECOMP0 PARAM */ = data->localData[0]->realVars[57] /* eXST1.ECOMP variable */;
  TRACE_POP
}
/*
equation index: 188
type: SIMPLE_ASSIGN
eXST1.V_REF = eXST1.Efd0 / eXST1.K_A + eXST1.ECOMP0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_188(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,188};
  data->simulationInfo->realParameter[103] /* eXST1.V_REF PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[79] /* eXST1.Efd0 PARAM */,data->simulationInfo->realParameter[80] /* eXST1.K_A PARAM */,"eXST1.K_A",equationIndexes) + data->simulationInfo->realParameter[78] /* eXST1.ECOMP0 PARAM */;
  TRACE_POP
}
/*
equation index: 189
type: SIMPLE_ASSIGN
eXST1.Vref_step.height = eXST1.V_REF * eXST1.dV
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_189(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,189};
  data->simulationInfo->realParameter[113] /* eXST1.Vref_step.height PARAM */ = (data->simulationInfo->realParameter[103] /* eXST1.V_REF PARAM */) * (data->simulationInfo->realParameter[123] /* eXST1.dV PARAM */);
  TRACE_POP
}
/*
equation index: 190
type: SIMPLE_ASSIGN
eXST1.Vref_step.y = eXST1.Vref_step.offset + (if time < eXST1.Vref_step.startTime then 0.0 else eXST1.Vref_step.height)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_190(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,190};
  modelica_boolean tmp0;
  tmp0 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[115] /* eXST1.Vref_step.startTime PARAM */);
  data->localData[0]->realVars[64] /* eXST1.Vref_step.y variable */ = data->simulationInfo->realParameter[114] /* eXST1.Vref_step.offset PARAM */ + (tmp0?0.0:data->simulationInfo->realParameter[113] /* eXST1.Vref_step.height PARAM */);
  TRACE_POP
}
/*
equation index: 191
type: SIMPLE_ASSIGN
eXST1.TransducerDelay.y_start = eXST1.ECOMP0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_191(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,191};
  data->simulationInfo->realParameter[97] /* eXST1.TransducerDelay.y_start PARAM */ = data->simulationInfo->realParameter[78] /* eXST1.ECOMP0 PARAM */;
  TRACE_POP
}
/*
equation index: 192
type: SIMPLE_ASSIGN
$START.eXST1.DiffV.u2 = eXST1.TransducerDelay.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_192(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,192};
  data->modelData->realVarsData[55].attribute /* eXST1.DiffV.u2 variable */.start = data->simulationInfo->realParameter[97] /* eXST1.TransducerDelay.y_start PARAM */;
    data->localData[0]->realVars[55] /* eXST1.DiffV.u2 variable */ = data->modelData->realVarsData[55].attribute /* eXST1.DiffV.u2 variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[55].info /* eXST1.DiffV.u2 */.name, (modelica_real) data->localData[0]->realVars[55] /* eXST1.DiffV.u2 variable */);
  TRACE_POP
}
/*
equation index: 193
type: SIMPLE_ASSIGN
$START.eXST1.TransducerDelay.state = eXST1.TransducerDelay.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_193(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,193};
  data->modelData->realVarsData[0].attribute /* eXST1.TransducerDelay.state STATE(1) */.start = data->simulationInfo->realParameter[97] /* eXST1.TransducerDelay.y_start PARAM */;
    data->localData[0]->realVars[0] /* eXST1.TransducerDelay.state STATE(1) */ = data->modelData->realVarsData[0].attribute /* eXST1.TransducerDelay.state STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[0].info /* eXST1.TransducerDelay.state */.name, (modelica_real) data->localData[0]->realVars[0] /* eXST1.TransducerDelay.state STATE(1) */);
  TRACE_POP
}
/*
equation index: 194
type: SIMPLE_ASSIGN
eXST1.TransducerDelay.state = eXST1.TransducerDelay.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_194(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,194};
  data->localData[0]->realVars[0] /* eXST1.TransducerDelay.state STATE(1) */ = data->simulationInfo->realParameter[97] /* eXST1.TransducerDelay.y_start PARAM */;
  TRACE_POP
}
/*
equation index: 195
type: SIMPLE_ASSIGN
eXST1.DiffV.u2 = if abs(eXST1.TransducerDelay.T) <= 1e-15 then eXST1.ECOMP * eXST1.TransducerDelay.K else eXST1.TransducerDelay.state
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_195(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,195};
  modelica_boolean tmp0;
  tmp0 = LessEq(fabs(data->simulationInfo->realParameter[94] /* eXST1.TransducerDelay.T PARAM */),1e-15);
  data->localData[0]->realVars[55] /* eXST1.DiffV.u2 variable */ = (tmp0?(data->localData[0]->realVars[57] /* eXST1.ECOMP variable */) * (data->simulationInfo->realParameter[93] /* eXST1.TransducerDelay.K PARAM */):data->localData[0]->realVars[0] /* eXST1.TransducerDelay.state STATE(1) */);
  TRACE_POP
}
/*
equation index: 196
type: SIMPLE_ASSIGN
eXST1.VoltageReference.k = eXST1.V_REF
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_196(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,196};
  data->simulationInfo->realParameter[111] /* eXST1.VoltageReference.k PARAM */ = data->simulationInfo->realParameter[103] /* eXST1.V_REF PARAM */;
  TRACE_POP
}
/*
equation index: 197
type: SIMPLE_ASSIGN
eXST1.DiffV.u1 = eXST1.add7.k1 * eXST1.Vref_step.y + eXST1.add7.k2 * eXST1.VoltageReference.k
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_197(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,197};
  data->localData[0]->realVars[54] /* eXST1.DiffV.u1 variable */ = (data->simulationInfo->realParameter[120] /* eXST1.add7.k1 PARAM */) * (data->localData[0]->realVars[64] /* eXST1.Vref_step.y variable */) + (data->simulationInfo->realParameter[121] /* eXST1.add7.k2 PARAM */) * (data->simulationInfo->realParameter[111] /* eXST1.VoltageReference.k PARAM */);
  TRACE_POP
}
/*
equation index: 198
type: SIMPLE_ASSIGN
eXST1.DiffV.y = eXST1.DiffV.k1 * eXST1.DiffV.u1 + eXST1.DiffV.k2 * eXST1.DiffV.u2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_198(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,198};
  data->localData[0]->realVars[56] /* eXST1.DiffV.y variable */ = (data->simulationInfo->realParameter[76] /* eXST1.DiffV.k1 PARAM */) * (data->localData[0]->realVars[54] /* eXST1.DiffV.u1 variable */) + (data->simulationInfo->realParameter[77] /* eXST1.DiffV.k2 PARAM */) * (data->localData[0]->realVars[55] /* eXST1.DiffV.u2 variable */);
  TRACE_POP
}
/*
equation index: 199
type: SIMPLE_ASSIGN
eXST1.add3_2.y = eXST1.add3_2.k1 * zero.k + eXST1.add3_2.k2 * eXST1.DiffV.y + eXST1.add3_2.k3 * eXST1.Limiters.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_199(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,199};
  data->localData[0]->realVars[66] /* eXST1.add3_2.y variable */ = (data->simulationInfo->realParameter[116] /* eXST1.add3_2.k1 PARAM */) * (data->simulationInfo->realParameter[308] /* zero.k PARAM */) + (data->simulationInfo->realParameter[117] /* eXST1.add3_2.k2 PARAM */) * (data->localData[0]->realVars[56] /* eXST1.DiffV.y variable */) + (data->simulationInfo->realParameter[118] /* eXST1.add3_2.k3 PARAM */) * (data->localData[0]->realVars[62] /* eXST1.Limiters.y variable */);
  TRACE_POP
}
/*
equation index: 200
type: SIMPLE_ASSIGN
eXST1.feedback.y = eXST1.add3_2.y - eXST1.imDerivativeLag.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_200(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,200};
  data->localData[0]->realVars[67] /* eXST1.feedback.y variable */ = data->localData[0]->realVars[66] /* eXST1.add3_2.y variable */ - data->localData[0]->realVars[68] /* eXST1.imDerivativeLag.y variable */;
  TRACE_POP
}
/*
equation index: 201
type: SIMPLE_ASSIGN
eXST1.imLeadLag.u = eXST1.feedback.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_201(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,201};
  data->localData[0]->realVars[71] /* eXST1.imLeadLag.u variable */ = data->localData[0]->realVars[67] /* eXST1.feedback.y variable */;
  TRACE_POP
}
/*
equation index: 202
type: SIMPLE_ASSIGN
eXST1.K_a.u = if abs(eXST1.imLeadLag.T1 - eXST1.imLeadLag.T2) < 1e-15 then eXST1.imLeadLag.K * eXST1.imLeadLag.u else eXST1.imLeadLag.TF.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_202(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,202};
  modelica_boolean tmp0;
  tmp0 = Less(fabs(data->simulationInfo->realParameter[129] /* eXST1.imLeadLag.T1 PARAM */ - data->simulationInfo->realParameter[130] /* eXST1.imLeadLag.T2 PARAM */),1e-15);
  data->localData[0]->realVars[60] /* eXST1.K_a.u variable */ = (tmp0?(data->simulationInfo->realParameter[128] /* eXST1.imLeadLag.K PARAM */) * (data->localData[0]->realVars[71] /* eXST1.imLeadLag.u variable */):data->localData[0]->realVars[70] /* eXST1.imLeadLag.TF.y variable */);
  TRACE_POP
}
/*
equation index: 203
type: SIMPLE_ASSIGN
eXST1.K_a.y = eXST1.K_a.k * eXST1.K_a.u
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_203(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,203};
  data->localData[0]->realVars[61] /* eXST1.K_a.y variable */ = (data->simulationInfo->realParameter[83] /* eXST1.K_a.k PARAM */) * (data->localData[0]->realVars[60] /* eXST1.K_a.u variable */);
  TRACE_POP
}
/*
equation index: 204
type: SIMPLE_ASSIGN
eXST1.Vm1.y = if abs(eXST1.Vm1.T) <= 1e-15 then eXST1.K_a.y * eXST1.Vm1.K else eXST1.Vm1.state
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_204(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,204};
  modelica_boolean tmp0;
  tmp0 = LessEq(fabs(data->simulationInfo->realParameter[107] /* eXST1.Vm1.T PARAM */),1e-15);
  data->localData[0]->realVars[63] /* eXST1.Vm1.y variable */ = (tmp0?(data->localData[0]->realVars[61] /* eXST1.K_a.y variable */) * (data->simulationInfo->realParameter[106] /* eXST1.Vm1.K PARAM */):data->localData[0]->realVars[1] /* eXST1.Vm1.state STATE(1) */);
  TRACE_POP
}
/*
equation index: 205
type: SIMPLE_ASSIGN
eXST1.EFD = eXST1.XADIFD + $DER.gENROE.Epq * gENROE.Tpd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_205(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,205};
  data->localData[0]->realVars[58] /* eXST1.EFD variable */ = data->localData[0]->realVars[65] /* eXST1.XADIFD variable */ + (data->localData[0]->realVars[19] /* der(gENROE.Epq) STATE_DER */) * (data->simulationInfo->realParameter[218] /* gENROE.Tpd0 PARAM */);
  TRACE_POP
}
/*
equation index: 206
type: SIMPLE_ASSIGN
pwLine.is.re = (cos(gENROE.delta) * gENROE.iq - (-sin(gENROE.delta)) * gENROE.id) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_206(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,206};
  data->localData[0]->realVars[109] /* pwLine.is.re variable */ = ((cos(data->localData[0]->realVars[10] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[97] /* gENROE.iq variable */) - (((-sin(data->localData[0]->realVars[10] /* gENROE.delta STATE(1) */))) * (data->localData[0]->realVars[96] /* gENROE.id variable */))) * (data->simulationInfo->realParameter[175] /* gENROE.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 207
type: SIMPLE_ASSIGN
pwLine.is.im = (sin(gENROE.delta) * gENROE.iq - cos(gENROE.delta) * gENROE.id) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_207(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,207};
  data->localData[0]->realVars[108] /* pwLine.is.im variable */ = ((sin(data->localData[0]->realVars[10] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[97] /* gENROE.iq variable */) - ((cos(data->localData[0]->realVars[10] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[96] /* gENROE.id variable */))) * (data->simulationInfo->realParameter[175] /* gENROE.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 208
type: SIMPLE_ASSIGN
gENROE.PSIq = (-gENROE.PSIppq) - gENROE.Xppq * gENROE.iq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_208(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,208};
  data->localData[0]->realVars[90] /* gENROE.PSIq variable */ = (-data->localData[0]->realVars[89] /* gENROE.PSIppq variable */) - ((data->simulationInfo->realParameter[230] /* gENROE.Xppq PARAM */) * (data->localData[0]->realVars[97] /* gENROE.iq variable */));
  TRACE_POP
}
/*
equation index: 209
type: SIMPLE_ASSIGN
gENROE.ud = (-gENROE.PSIq) - gENROE.R_a * gENROE.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_209(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,209};
  data->localData[0]->realVars[98] /* gENROE.ud variable */ = (-data->localData[0]->realVars[90] /* gENROE.PSIq variable */) - ((data->simulationInfo->realParameter[212] /* gENROE.R_a PARAM */) * (data->localData[0]->realVars[96] /* gENROE.id variable */));
  TRACE_POP
}
/*
equation index: 210
type: SIMPLE_ASSIGN
gENROE.PSIpp = sqrt(gENROE.PSIppd ^ 2.0 + gENROE.PSIppq ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_210(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,210};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[88] /* gENROE.PSIppd variable */;
  tmp1 = data->localData[0]->realVars[89] /* gENROE.PSIppq variable */;
  data->localData[0]->realVars[87] /* gENROE.PSIpp variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 211
type: SIMPLE_ASSIGN
gENROE.PSId = gENROE.PSIppd - gENROE.Xppd * gENROE.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_211(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,211};
  data->localData[0]->realVars[86] /* gENROE.PSId variable */ = data->localData[0]->realVars[88] /* gENROE.PSIppd variable */ - ((data->simulationInfo->realParameter[229] /* gENROE.Xppd PARAM */) * (data->localData[0]->realVars[96] /* gENROE.id variable */));
  TRACE_POP
}
/*
equation index: 212
type: SIMPLE_ASSIGN
gENROE.uq = gENROE.PSId - gENROE.R_a * gENROE.iq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_212(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,212};
  data->localData[0]->realVars[99] /* gENROE.uq variable */ = data->localData[0]->realVars[86] /* gENROE.PSId variable */ - ((data->simulationInfo->realParameter[212] /* gENROE.R_a PARAM */) * (data->localData[0]->realVars[97] /* gENROE.iq variable */));
  TRACE_POP
}
/*
equation index: 213
type: SIMPLE_ASSIGN
gENROE.Epq = (eXST1.XADIFD - (((gENROE.Xl - gENROE.Xpd) * gENROE.id - gENROE.PSIkd) * gENROE.K1d + gENROE.id * (gENROE.Xd - gENROE.Xpd) + OpenIPSL.NonElectrical.Functions.SE_exp(gENROE.PSIpp, gENROE.S10, gENROE.S12, 1.0, 1.2) * gENROE.PSIppd)) / (1.0 + gENROE.K1d)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_213(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,213};
  data->localData[0]->realVars[7] /* gENROE.Epq STATE(1) */ = DIVISION_SIM(data->localData[0]->realVars[65] /* eXST1.XADIFD variable */ - (((data->simulationInfo->realParameter[226] /* gENROE.Xl PARAM */ - data->simulationInfo->realParameter[227] /* gENROE.Xpd PARAM */) * (data->localData[0]->realVars[96] /* gENROE.id variable */) - data->localData[0]->realVars[8] /* gENROE.PSIkd STATE(1) */) * (data->simulationInfo->realParameter[189] /* gENROE.K1d PARAM */) + (data->localData[0]->realVars[96] /* gENROE.id variable */) * (data->simulationInfo->realParameter[225] /* gENROE.Xd PARAM */ - data->simulationInfo->realParameter[227] /* gENROE.Xpd PARAM */) + (omc_OpenIPSL_NonElectrical_Functions_SE__exp(threadData, data->localData[0]->realVars[87] /* gENROE.PSIpp variable */, data->simulationInfo->realParameter[215] /* gENROE.S10 PARAM */, data->simulationInfo->realParameter[216] /* gENROE.S12 PARAM */, 1.0, 1.2)) * (data->localData[0]->realVars[88] /* gENROE.PSIppd variable */)),1.0 + data->simulationInfo->realParameter[189] /* gENROE.K1d PARAM */,"1.0 + gENROE.K1d",equationIndexes);
  TRACE_POP
}
/*
equation index: 214
type: SIMPLE_ASSIGN
gENROE.Epd = (gENROE.XaqIlq - (((gENROE.Xpq - gENROE.Xl) * gENROE.iq - gENROE.PSIkq) * gENROE.K1q + gENROE.iq * (gENROE.Xpq - gENROE.Xq) + OpenIPSL.NonElectrical.Functions.SE_exp(gENROE.PSIpp, gENROE.S10, gENROE.S12, 1.0, 1.2) * gENROE.PSIppq * (gENROE.Xq - gENROE.Xl) / (gENROE.Xd - gENROE.Xl))) / (1.0 + gENROE.K1q)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_214(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,214};
  data->localData[0]->realVars[6] /* gENROE.Epd STATE(1) */ = DIVISION_SIM(data->localData[0]->realVars[93] /* gENROE.XaqIlq variable */ - (((data->simulationInfo->realParameter[231] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[226] /* gENROE.Xl PARAM */) * (data->localData[0]->realVars[97] /* gENROE.iq variable */) - data->localData[0]->realVars[9] /* gENROE.PSIkq STATE(1) */) * (data->simulationInfo->realParameter[190] /* gENROE.K1q PARAM */) + (data->localData[0]->realVars[97] /* gENROE.iq variable */) * (data->simulationInfo->realParameter[231] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[232] /* gENROE.Xq PARAM */) + (omc_OpenIPSL_NonElectrical_Functions_SE__exp(threadData, data->localData[0]->realVars[87] /* gENROE.PSIpp variable */, data->simulationInfo->realParameter[215] /* gENROE.S10 PARAM */, data->simulationInfo->realParameter[216] /* gENROE.S12 PARAM */, 1.0, 1.2)) * ((data->localData[0]->realVars[89] /* gENROE.PSIppq variable */) * (DIVISION_SIM(data->simulationInfo->realParameter[232] /* gENROE.Xq PARAM */ - data->simulationInfo->realParameter[226] /* gENROE.Xl PARAM */,data->simulationInfo->realParameter[225] /* gENROE.Xd PARAM */ - data->simulationInfo->realParameter[226] /* gENROE.Xl PARAM */,"gENROE.Xd - gENROE.Xl",equationIndexes)))),1.0 + data->simulationInfo->realParameter[190] /* gENROE.K1q PARAM */,"1.0 + gENROE.K1q",equationIndexes);
  TRACE_POP
}
/*
equation index: 215
type: SIMPLE_ASSIGN
gENCLS.p.ir = ((-sin(gENCLS.delta)) * gENCLS.id - cos(gENCLS.delta) * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_215(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,215};
  data->localData[0]->realVars[80] /* gENCLS.p.ir variable */ = (((-sin(data->localData[0]->realVars[4] /* gENCLS.delta STATE(1) */))) * (data->localData[0]->realVars[76] /* gENCLS.id variable */) - ((cos(data->localData[0]->realVars[4] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[77] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[149] /* gENCLS.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 216
type: SIMPLE_ASSIGN
gENCLS.p.ii = (cos(gENCLS.delta) * gENCLS.id - sin(gENCLS.delta) * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_216(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,216};
  data->localData[0]->realVars[79] /* gENCLS.p.ii variable */ = ((cos(data->localData[0]->realVars[4] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[76] /* gENCLS.id variable */) - ((sin(data->localData[0]->realVars[4] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[77] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[149] /* gENCLS.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 217
type: SIMPLE_ASSIGN
gENCLS.vq = gENCLS.eq + (-gENCLS.R_a) * gENCLS.iq - gENCLS.X_d * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_217(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,217};
  data->localData[0]->realVars[82] /* gENCLS.vq variable */ = data->localData[0]->realVars[5] /* gENCLS.eq STATE(1) */ + ((-data->simulationInfo->realParameter[155] /* gENCLS.R_a PARAM */)) * (data->localData[0]->realVars[77] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[158] /* gENCLS.X_d PARAM */) * (data->localData[0]->realVars[76] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 218
type: SIMPLE_ASSIGN
gENCLS.vd = gENCLS.X_d * gENCLS.iq - gENCLS.R_a * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_218(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,218};
  data->localData[0]->realVars[81] /* gENCLS.vd variable */ = (data->simulationInfo->realParameter[158] /* gENCLS.X_d PARAM */) * (data->localData[0]->realVars[77] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[155] /* gENCLS.R_a PARAM */) * (data->localData[0]->realVars[76] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 219
type: SIMPLE_ASSIGN
pwLine4.ir.re = (-pwLine1.ir.re) - gENCLS.p.ir
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_219(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,219};
  data->localData[0]->realVars[139] /* pwLine4.ir.re variable */ = (-data->localData[0]->realVars[117] /* pwLine1.ir.re variable */) - data->localData[0]->realVars[80] /* gENCLS.p.ir variable */;
  TRACE_POP
}
/*
equation index: 220
type: SIMPLE_ASSIGN
pwLine4.ir.im = (-pwLine1.ir.im) - gENCLS.p.ii
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_220(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,220};
  data->localData[0]->realVars[138] /* pwLine4.ir.im variable */ = (-data->localData[0]->realVars[116] /* pwLine1.ir.im variable */) - data->localData[0]->realVars[79] /* gENCLS.p.ii variable */;
  TRACE_POP
}
/*
equation index: 221
type: SIMPLE_ASSIGN
pwFault.p.ir = (-pwLine3.ir.re) - pwLine4.is.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_221(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,221};
  data->localData[0]->realVars[101] /* pwFault.p.ir variable */ = (-data->localData[0]->realVars[129] /* pwLine3.ir.re variable */) - data->localData[0]->realVars[141] /* pwLine4.is.re variable */;
  TRACE_POP
}
/*
equation index: 222
type: SIMPLE_ASSIGN
pwFault.p.ii = (-pwLine3.ir.im) - pwLine4.is.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_222(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,222};
  data->localData[0]->realVars[100] /* pwFault.p.ii variable */ = (-data->localData[0]->realVars[128] /* pwLine3.ir.im variable */) - data->localData[0]->realVars[140] /* pwLine4.is.im variable */;
  TRACE_POP
}
/*
equation index: 223
type: SIMPLE_ASSIGN
constantLoad.p.ii = (-pwLine.ir.im) - pwLine1.is.im - pwLine3.is.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_223(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,223};
  data->localData[0]->realVars[51] /* constantLoad.p.ii variable */ = (-data->localData[0]->realVars[106] /* pwLine.ir.im variable */) - data->localData[0]->realVars[118] /* pwLine1.is.im variable */ - data->localData[0]->realVars[130] /* pwLine3.is.im variable */;
  TRACE_POP
}
/*
equation index: 224
type: SIMPLE_ASSIGN
constantLoad.p.ir = (-pwLine.ir.re) - pwLine1.is.re - pwLine3.is.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_224(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,224};
  data->localData[0]->realVars[52] /* constantLoad.p.ir variable */ = (-data->localData[0]->realVars[107] /* pwLine.ir.re variable */) - data->localData[0]->realVars[119] /* pwLine1.is.re variable */ - data->localData[0]->realVars[131] /* pwLine3.is.re variable */;
  TRACE_POP
}

void residualFunc255(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,255};
  int i;
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_boolean tmp6;
  modelica_boolean tmp7;
  modelica_boolean tmp8;
  modelica_boolean tmp9;
  modelica_boolean tmp10;
  modelica_boolean tmp11;
  modelica_boolean tmp12;
  modelica_boolean tmp13;
  modelica_boolean tmp14;
  modelica_real tmp15;
  modelica_real tmp16;
  modelica_boolean tmp17;
  modelica_real tmp18;
  modelica_boolean tmp19;
  modelica_real tmp20;
  modelica_boolean tmp21;
  modelica_real tmp22;
  modelica_boolean tmp23;
  modelica_boolean tmp24;
  modelica_boolean tmp25;
  modelica_boolean tmp26;
  modelica_boolean tmp27;
  modelica_boolean tmp28;
  modelica_boolean tmp29;
  modelica_real tmp30;
  modelica_real tmp31;
  modelica_boolean tmp32;
  modelica_real tmp33;
  modelica_boolean tmp34;
  modelica_real tmp35;
  modelica_boolean tmp36;
  modelica_real tmp37;
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
  modelica_boolean tmp59;
  /* iteration variables */
  for (i=0; i<30; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<30; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[107] /* pwLine.ir.re variable */ = xloc[0];
  data->localData[0]->realVars[119] /* pwLine1.is.re variable */ = xloc[1];
  data->localData[0]->realVars[106] /* pwLine.ir.im variable */ = xloc[2];
  data->localData[0]->realVars[118] /* pwLine1.is.im variable */ = xloc[3];
  data->localData[0]->realVars[140] /* pwLine4.is.im variable */ = xloc[4];
  data->localData[0]->realVars[128] /* pwLine3.ir.im variable */ = xloc[5];
  data->localData[0]->realVars[141] /* pwLine4.is.re variable */ = xloc[6];
  data->localData[0]->realVars[129] /* pwLine3.ir.re variable */ = xloc[7];
  data->localData[0]->realVars[131] /* pwLine3.is.re variable */ = xloc[8];
  data->localData[0]->realVars[130] /* pwLine3.is.im variable */ = xloc[9];
  data->localData[0]->realVars[116] /* pwLine1.ir.im variable */ = xloc[10];
  data->localData[0]->realVars[117] /* pwLine1.ir.re variable */ = xloc[11];
  data->localData[0]->realVars[76] /* gENCLS.id variable */ = xloc[12];
  data->localData[0]->realVars[77] /* gENCLS.iq variable */ = xloc[13];
  data->localData[0]->realVars[9] /* gENROE.PSIkq STATE(1) */ = xloc[14];
  data->localData[0]->realVars[8] /* gENROE.PSIkd STATE(1) */ = xloc[15];
  data->localData[0]->realVars[88] /* gENROE.PSIppd variable */ = xloc[16];
  data->localData[0]->realVars[89] /* gENROE.PSIppq variable */ = xloc[17];
  data->localData[0]->realVars[96] /* gENROE.id variable */ = xloc[18];
  data->localData[0]->realVars[97] /* gENROE.iq variable */ = xloc[19];
  data->localData[0]->realVars[111] /* pwLine.vs.re variable */ = xloc[20];
  data->localData[0]->realVars[110] /* pwLine.vs.im variable */ = xloc[21];
  data->localData[0]->realVars[121] /* pwLine1.vr.re variable */ = xloc[22];
  data->localData[0]->realVars[120] /* pwLine1.vr.im variable */ = xloc[23];
  data->localData[0]->realVars[65] /* eXST1.XADIFD variable */ = xloc[24];
  data->localData[0]->realVars[57] /* eXST1.ECOMP variable */ = xloc[25];
  data->localData[0]->realVars[122] /* pwLine1.vs.im variable */ = xloc[26];
  data->localData[0]->realVars[132] /* pwLine3.vr.im variable */ = xloc[27];
  data->localData[0]->realVars[133] /* pwLine3.vr.re variable */ = xloc[28];
  data->localData[0]->realVars[123] /* pwLine1.vs.re variable */ = xloc[29];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_182(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_183(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_184(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_185(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_186(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_187(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_188(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_189(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_190(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_191(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_192(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_193(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_194(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_195(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_196(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_197(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_198(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_199(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_200(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_201(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_202(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_203(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_204(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_205(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_206(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_207(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_208(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_209(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_210(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_211(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_212(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_213(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_214(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_215(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_216(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_217(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_218(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_219(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_220(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_221(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_222(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_223(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_224(data, threadData);
  /* body */
  tmp0 = Greater(data->localData[0]->realVars[58] /* eXST1.EFD variable */,(data->localData[0]->realVars[57] /* eXST1.ECOMP variable */) * (data->simulationInfo->realParameter[104] /* eXST1.V_RMAX PARAM */) - ((data->simulationInfo->realParameter[81] /* eXST1.K_C PARAM */) * (data->localData[0]->realVars[65] /* eXST1.XADIFD variable */)));
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = (data->localData[0]->realVars[57] /* eXST1.ECOMP variable */) * (data->simulationInfo->realParameter[104] /* eXST1.V_RMAX PARAM */) - ((data->simulationInfo->realParameter[81] /* eXST1.K_C PARAM */) * (data->localData[0]->realVars[65] /* eXST1.XADIFD variable */));
  }
  else
  {
    tmp1 = Less(data->localData[0]->realVars[58] /* eXST1.EFD variable */,(data->localData[0]->realVars[57] /* eXST1.ECOMP variable */) * (data->simulationInfo->realParameter[105] /* eXST1.V_RMIN PARAM */) - ((data->simulationInfo->realParameter[81] /* eXST1.K_C PARAM */) * (data->localData[0]->realVars[65] /* eXST1.XADIFD variable */)));
    tmp3 = (tmp1?(data->localData[0]->realVars[57] /* eXST1.ECOMP variable */) * (data->simulationInfo->realParameter[105] /* eXST1.V_RMIN PARAM */) - ((data->simulationInfo->realParameter[81] /* eXST1.K_C PARAM */) * (data->localData[0]->realVars[65] /* eXST1.XADIFD variable */)):data->localData[0]->realVars[63] /* eXST1.Vm1.y variable */);
  }
  res[0] = tmp3 - data->localData[0]->realVars[58] /* eXST1.EFD variable */;

  tmp4 = data->localData[0]->realVars[111] /* pwLine.vs.re variable */;
  tmp5 = data->localData[0]->realVars[110] /* pwLine.vs.im variable */;
  res[1] = sqrt((tmp4 * tmp4) + (tmp5 * tmp5)) - data->localData[0]->realVars[57] /* eXST1.ECOMP variable */;

  res[2] = (cos(data->localData[0]->realVars[10] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[99] /* gENROE.uq variable */) + (sin(data->localData[0]->realVars[10] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[98] /* gENROE.ud variable */) - data->localData[0]->realVars[111] /* pwLine.vs.re variable */;

  res[3] = (sin(data->localData[0]->realVars[10] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[99] /* gENROE.uq variable */) + ((-cos(data->localData[0]->realVars[10] /* gENROE.delta STATE(1) */))) * (data->localData[0]->realVars[98] /* gENROE.ud variable */) - data->localData[0]->realVars[110] /* pwLine.vs.im variable */;

  tmp6 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[273] /* pwLine.t1 PARAM */);
  tmp7 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[274] /* pwLine.t2 PARAM */);
  res[4] = ((tmp6 && tmp7)?data->localData[0]->realVars[109] /* pwLine.is.re variable */:data->localData[0]->realVars[111] /* pwLine.vs.re variable */ - data->localData[0]->realVars[123] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[272] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[109] /* pwLine.is.re variable */ + (data->localData[0]->realVars[110] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[269] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[111] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[270] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[271] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[108] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[111] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[269] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[110] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[270] /* pwLine.Y.re PARAM */))))));

  tmp8 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[295] /* pwLine3.t1 PARAM */);
  tmp9 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[296] /* pwLine3.t2 PARAM */);
  res[5] = ((tmp8 && tmp9)?data->localData[0]->realVars[130] /* pwLine3.is.im variable */:data->localData[0]->realVars[122] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[132] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[294] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[130] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[123] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[291] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[122] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[292] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[293] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[131] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[122] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[291] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[123] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[292] /* pwLine3.Y.re PARAM */)))));

  tmp10 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[295] /* pwLine3.t1 PARAM */);
  tmp11 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[296] /* pwLine3.t2 PARAM */);
  res[6] = ((tmp10 && tmp11)?data->localData[0]->realVars[131] /* pwLine3.is.re variable */:data->localData[0]->realVars[123] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[133] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[294] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[131] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[122] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[291] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[123] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[292] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[293] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[130] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[123] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[291] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[122] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[292] /* pwLine3.Y.re PARAM */))))));

  tmp12 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[262] /* pwFault.t1 PARAM */);
  tmp21 = (modelica_boolean)tmp12;
  if(tmp21)
  {
    tmp22 = data->localData[0]->realVars[100] /* pwFault.p.ii variable */;
  }
  else
  {
    tmp13 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[263] /* pwFault.t2 PARAM */);
    tmp19 = (modelica_boolean)(tmp13 && data->simulationInfo->booleanParameter[66] /* pwFault.ground PARAM */);
    if(tmp19)
    {
      tmp20 = data->localData[0]->realVars[133] /* pwLine3.vr.re variable */ - 1e-10;
    }
    else
    {
      tmp14 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[263] /* pwFault.t2 PARAM */);
      tmp17 = (modelica_boolean)tmp14;
      if(tmp17)
      {
        tmp15 = data->simulationInfo->realParameter[261] /* pwFault.X PARAM */;
        tmp16 = data->simulationInfo->realParameter[260] /* pwFault.R PARAM */;
        tmp18 = data->localData[0]->realVars[100] /* pwFault.p.ii variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[260] /* pwFault.R PARAM */) * (data->localData[0]->realVars[132] /* pwLine3.vr.im variable */) - ((data->simulationInfo->realParameter[261] /* pwFault.X PARAM */) * (data->localData[0]->realVars[133] /* pwLine3.vr.re variable */)),(tmp15 * tmp15) + (tmp16 * tmp16),"pwFault.X ^ 2.0 + pwFault.R ^ 2.0",equationIndexes));
      }
      else
      {
        tmp18 = data->localData[0]->realVars[100] /* pwFault.p.ii variable */;
      }
      tmp20 = tmp18;
    }
    tmp22 = tmp20;
  }
  res[7] = tmp22;

  tmp23 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[295] /* pwLine3.t1 PARAM */);
  tmp24 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[296] /* pwLine3.t2 PARAM */);
  res[8] = ((tmp23 && tmp24)?data->localData[0]->realVars[129] /* pwLine3.ir.re variable */:data->localData[0]->realVars[133] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[123] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[294] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[129] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[132] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[291] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[133] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[292] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[293] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[128] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[133] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[291] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[132] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[292] /* pwLine3.Y.re PARAM */))))));

  tmp25 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[295] /* pwLine3.t1 PARAM */);
  tmp26 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[296] /* pwLine3.t2 PARAM */);
  res[9] = ((tmp25 && tmp26)?data->localData[0]->realVars[128] /* pwLine3.ir.im variable */:data->localData[0]->realVars[132] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[122] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[294] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[128] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[133] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[291] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[132] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[292] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[293] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[129] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[132] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[291] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[133] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[292] /* pwLine3.Y.re PARAM */)))));

  tmp27 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[262] /* pwFault.t1 PARAM */);
  tmp36 = (modelica_boolean)tmp27;
  if(tmp36)
  {
    tmp37 = data->localData[0]->realVars[101] /* pwFault.p.ir variable */;
  }
  else
  {
    tmp28 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[263] /* pwFault.t2 PARAM */);
    tmp34 = (modelica_boolean)(tmp28 && data->simulationInfo->booleanParameter[66] /* pwFault.ground PARAM */);
    if(tmp34)
    {
      tmp35 = data->localData[0]->realVars[132] /* pwLine3.vr.im variable */;
    }
    else
    {
      tmp29 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[263] /* pwFault.t2 PARAM */);
      tmp32 = (modelica_boolean)tmp29;
      if(tmp32)
      {
        tmp30 = data->simulationInfo->realParameter[260] /* pwFault.R PARAM */;
        tmp31 = data->simulationInfo->realParameter[261] /* pwFault.X PARAM */;
        tmp33 = data->localData[0]->realVars[101] /* pwFault.p.ir variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[260] /* pwFault.R PARAM */) * (data->localData[0]->realVars[133] /* pwLine3.vr.re variable */) + (data->simulationInfo->realParameter[261] /* pwFault.X PARAM */) * (data->localData[0]->realVars[132] /* pwLine3.vr.im variable */),(tmp30 * tmp30) + (tmp31 * tmp31),"pwFault.R ^ 2.0 + pwFault.X ^ 2.0",equationIndexes));
      }
      else
      {
        tmp33 = data->localData[0]->realVars[101] /* pwFault.p.ir variable */;
      }
      tmp35 = tmp33;
    }
    tmp37 = tmp35;
  }
  res[10] = tmp37;

  tmp38 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[306] /* pwLine4.t1 PARAM */);
  tmp39 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[307] /* pwLine4.t2 PARAM */);
  res[11] = ((tmp38 && tmp39)?data->localData[0]->realVars[141] /* pwLine4.is.re variable */:data->localData[0]->realVars[133] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[121] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[305] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[141] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[132] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[302] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[133] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[303] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[304] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[140] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[133] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[302] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[132] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[303] /* pwLine4.Y.re PARAM */))))));

  tmp40 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[306] /* pwLine4.t1 PARAM */);
  tmp41 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[307] /* pwLine4.t2 PARAM */);
  res[12] = ((tmp40 && tmp41)?data->localData[0]->realVars[140] /* pwLine4.is.im variable */:data->localData[0]->realVars[132] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[120] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[305] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[140] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[133] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[302] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[132] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[303] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[304] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[141] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[132] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[302] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[133] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[303] /* pwLine4.Y.re PARAM */)))));

  res[13] = (sin(data->localData[0]->realVars[4] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[82] /* gENCLS.vq variable */) + ((-cos(data->localData[0]->realVars[4] /* gENCLS.delta STATE(1) */))) * (data->localData[0]->realVars[81] /* gENCLS.vd variable */) - data->localData[0]->realVars[120] /* pwLine1.vr.im variable */;

  res[14] = (cos(data->localData[0]->realVars[4] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[82] /* gENCLS.vq variable */) + (sin(data->localData[0]->realVars[4] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[81] /* gENCLS.vd variable */) - data->localData[0]->realVars[121] /* pwLine1.vr.re variable */;

  tmp42 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[306] /* pwLine4.t1 PARAM */);
  tmp43 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[307] /* pwLine4.t2 PARAM */);
  res[15] = ((tmp42 && tmp43)?data->localData[0]->realVars[139] /* pwLine4.ir.re variable */:data->localData[0]->realVars[121] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[133] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[305] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[139] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[120] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[302] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[121] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[303] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[304] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[138] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[121] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[302] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[120] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[303] /* pwLine4.Y.re PARAM */))))));

  tmp44 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[284] /* pwLine1.t1 PARAM */);
  tmp45 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[285] /* pwLine1.t2 PARAM */);
  res[16] = ((tmp44 && tmp45)?data->localData[0]->realVars[119] /* pwLine1.is.re variable */:data->localData[0]->realVars[123] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[121] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[283] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[119] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[122] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[280] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[123] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[281] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[282] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[118] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[123] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[280] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[122] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[281] /* pwLine1.Y.re PARAM */))))));

  tmp46 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[306] /* pwLine4.t1 PARAM */);
  tmp47 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[307] /* pwLine4.t2 PARAM */);
  res[17] = ((tmp46 && tmp47)?data->localData[0]->realVars[138] /* pwLine4.ir.im variable */:data->localData[0]->realVars[120] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[132] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[305] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[138] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[121] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[302] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[120] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[303] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[304] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[139] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[120] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[302] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[121] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[303] /* pwLine4.Y.re PARAM */)))));

  tmp48 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[284] /* pwLine1.t1 PARAM */);
  tmp49 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[285] /* pwLine1.t2 PARAM */);
  res[18] = ((tmp48 && tmp49)?data->localData[0]->realVars[117] /* pwLine1.ir.re variable */:data->localData[0]->realVars[121] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[123] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[283] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[117] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[120] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[280] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[121] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[281] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[282] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[116] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[121] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[280] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[120] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[281] /* pwLine1.Y.re PARAM */))))));

  tmp50 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[284] /* pwLine1.t1 PARAM */);
  tmp51 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[285] /* pwLine1.t2 PARAM */);
  res[19] = ((tmp50 && tmp51)?data->localData[0]->realVars[116] /* pwLine1.ir.im variable */:data->localData[0]->realVars[120] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[122] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[283] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[116] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[121] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[280] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[120] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[281] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[282] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[117] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[120] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[280] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[121] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[281] /* pwLine1.Y.re PARAM */)))));

  tmp52 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[284] /* pwLine1.t1 PARAM */);
  tmp53 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[285] /* pwLine1.t2 PARAM */);
  res[20] = ((tmp52 && tmp53)?data->localData[0]->realVars[118] /* pwLine1.is.im variable */:data->localData[0]->realVars[122] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[120] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[283] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[118] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[123] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[280] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[122] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[281] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[282] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[119] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[122] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[280] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[123] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[281] /* pwLine1.Y.re PARAM */)))));

  res[21] = (data->localData[0]->realVars[122] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[52] /* constantLoad.p.ir variable */) + ((-data->localData[0]->realVars[123] /* pwLine1.vs.re variable */)) * (data->localData[0]->realVars[51] /* constantLoad.p.ii variable */) - data->localData[0]->realVars[47] /* constantLoad.Q variable */;

  res[22] = (data->localData[0]->realVars[122] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[51] /* constantLoad.p.ii variable */) + (data->localData[0]->realVars[123] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[52] /* constantLoad.p.ir variable */) - data->localData[0]->realVars[46] /* constantLoad.P variable */;

  tmp54 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[273] /* pwLine.t1 PARAM */);
  tmp55 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[274] /* pwLine.t2 PARAM */);
  res[23] = ((tmp54 && tmp55)?data->localData[0]->realVars[106] /* pwLine.ir.im variable */:data->localData[0]->realVars[122] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[110] /* pwLine.vs.im variable */ - ((data->simulationInfo->realParameter[272] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[106] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[123] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[269] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[122] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[270] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[271] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[107] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[122] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[269] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[123] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[270] /* pwLine.Y.re PARAM */)))));

  tmp56 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[273] /* pwLine.t1 PARAM */);
  tmp57 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[274] /* pwLine.t2 PARAM */);
  res[24] = ((tmp56 && tmp57)?data->localData[0]->realVars[107] /* pwLine.ir.re variable */:data->localData[0]->realVars[123] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[111] /* pwLine.vs.re variable */ - ((data->simulationInfo->realParameter[272] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[107] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[122] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[269] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[123] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[270] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[271] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[106] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[123] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[269] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[122] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[270] /* pwLine.Y.re PARAM */))))));

  tmp58 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[273] /* pwLine.t1 PARAM */);
  tmp59 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[274] /* pwLine.t2 PARAM */);
  res[25] = ((tmp58 && tmp59)?data->localData[0]->realVars[108] /* pwLine.is.im variable */:data->localData[0]->realVars[110] /* pwLine.vs.im variable */ - data->localData[0]->realVars[122] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[272] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[108] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[111] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[269] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[110] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[270] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[271] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[109] /* pwLine.is.re variable */ + (data->localData[0]->realVars[110] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[269] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[111] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[270] /* pwLine.Y.re PARAM */)))));

  res[26] = data->localData[0]->realVars[89] /* gENROE.PSIppq variable */ - ((data->localData[0]->realVars[6] /* gENROE.Epd STATE(1) */) * (data->simulationInfo->realParameter[194] /* gENROE.K3q PARAM */)) - ((data->localData[0]->realVars[9] /* gENROE.PSIkq STATE(1) */) * (data->simulationInfo->realParameter[196] /* gENROE.K4q PARAM */));

  res[27] = data->localData[0]->realVars[6] /* gENROE.Epd STATE(1) */ + (data->simulationInfo->realParameter[231] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[226] /* gENROE.Xl PARAM */) * (data->localData[0]->realVars[97] /* gENROE.iq variable */) + (-data->localData[0]->realVars[9] /* gENROE.PSIkq STATE(1) */) - ((data->localData[0]->realVars[21] /* der(gENROE.PSIkq) STATE_DER */) * (data->simulationInfo->realParameter[220] /* gENROE.Tppq0 PARAM */));

  res[28] = (data->localData[0]->realVars[8] /* gENROE.PSIkd STATE(1) */) * (data->simulationInfo->realParameter[195] /* gENROE.K4d PARAM */) + (data->localData[0]->realVars[7] /* gENROE.Epq STATE(1) */) * (data->simulationInfo->realParameter[193] /* gENROE.K3d PARAM */) - data->localData[0]->realVars[88] /* gENROE.PSIppd variable */;

  res[29] = data->localData[0]->realVars[7] /* gENROE.Epq STATE(1) */ + (data->simulationInfo->realParameter[226] /* gENROE.Xl PARAM */ - data->simulationInfo->realParameter[227] /* gENROE.Xpd PARAM */) * (data->localData[0]->realVars[96] /* gENROE.id variable */) + (-data->localData[0]->realVars[8] /* gENROE.PSIkd STATE(1) */) - ((data->localData[0]->realVars[20] /* der(gENROE.PSIkd) STATE_DER */) * (data->simulationInfo->realParameter[219] /* gENROE.Tppd0 PARAM */));
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS255(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+30] = {0,4,4,4,4,3,3,3,3,4,4,4,4,4,4,2,2,6,6,6,6,5,5,7,7,3,2,11,8,8,11};
  const int rowIndex[147] = {21,22,23,24,16,20,21,22,21,22,23,24,16,20,21,22,7,11,12,7,8,9,10,11,12,8,9,10,5,6,21,22,5,6,21,22,15,17,18,19,15,17,18,19,13,14,15,17,13,14,15,17,26,27,28,29,2,3,26,27,28,29,2,3,26,27,28,29,2,3,4,25,28,29,2,3,4,25,26,27,1,2,4,24,25,1,3,4,23,25,11,14,15,16,17,18,19,12,13,15,17,18,19,20,0,28,29,0,1,5,6,9,16,19,20,21,22,23,24,25,5,7,8,9,10,11,12,17,6,7,8,9,10,11,12,15,4,5,6,8,16,18,20,21,22,23,24};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  inSysData->sparsePattern->leadindex = (unsigned int*) malloc((30+1)*sizeof(int));
  inSysData->sparsePattern->index = (unsigned int*) malloc(147*sizeof(int));
  inSysData->sparsePattern->numberOfNoneZeros = 147;
  inSysData->sparsePattern->colorCols = (unsigned int*) malloc(30*sizeof(int));
  inSysData->sparsePattern->maxColors = 10;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (30+1)*sizeof(int));
  
  for(i=2;i<30+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 147*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern->colorCols[29] = 1;
  inSysData->sparsePattern->colorCols[28] = 2;
  inSysData->sparsePattern->colorCols[26] = 3;
  inSysData->sparsePattern->colorCols[21] = 4;
  inSysData->sparsePattern->colorCols[27] = 4;
  inSysData->sparsePattern->colorCols[9] = 5;
  inSysData->sparsePattern->colorCols[20] = 5;
  inSysData->sparsePattern->colorCols[23] = 5;
  inSysData->sparsePattern->colorCols[8] = 6;
  inSysData->sparsePattern->colorCols[19] = 6;
  inSysData->sparsePattern->colorCols[22] = 6;
  inSysData->sparsePattern->colorCols[24] = 6;
  inSysData->sparsePattern->colorCols[3] = 7;
  inSysData->sparsePattern->colorCols[13] = 7;
  inSysData->sparsePattern->colorCols[18] = 7;
  inSysData->sparsePattern->colorCols[2] = 8;
  inSysData->sparsePattern->colorCols[12] = 8;
  inSysData->sparsePattern->colorCols[17] = 8;
  inSysData->sparsePattern->colorCols[1] = 9;
  inSysData->sparsePattern->colorCols[5] = 9;
  inSysData->sparsePattern->colorCols[6] = 9;
  inSysData->sparsePattern->colorCols[11] = 9;
  inSysData->sparsePattern->colorCols[16] = 9;
  inSysData->sparsePattern->colorCols[0] = 10;
  inSysData->sparsePattern->colorCols[4] = 10;
  inSysData->sparsePattern->colorCols[7] = 10;
  inSysData->sparsePattern->colorCols[10] = 10;
  inSysData->sparsePattern->colorCols[14] = 10;
  inSysData->sparsePattern->colorCols[15] = 10;
  inSysData->sparsePattern->colorCols[25] = 10;
}
void initializeStaticDataNLS255(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for pwLine.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[107].attribute /* pwLine.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[107].attribute /* pwLine.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[107].attribute /* pwLine.ir.re */.max;
  /* static nls data for pwLine1.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[119].attribute /* pwLine1.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[119].attribute /* pwLine1.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[119].attribute /* pwLine1.is.re */.max;
  /* static nls data for pwLine.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[106].attribute /* pwLine.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[106].attribute /* pwLine.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[106].attribute /* pwLine.ir.im */.max;
  /* static nls data for pwLine1.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[118].attribute /* pwLine1.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[118].attribute /* pwLine1.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[118].attribute /* pwLine1.is.im */.max;
  /* static nls data for pwLine4.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[140].attribute /* pwLine4.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[140].attribute /* pwLine4.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[140].attribute /* pwLine4.is.im */.max;
  /* static nls data for pwLine3.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[128].attribute /* pwLine3.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[128].attribute /* pwLine3.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[128].attribute /* pwLine3.ir.im */.max;
  /* static nls data for pwLine4.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[141].attribute /* pwLine4.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[141].attribute /* pwLine4.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[141].attribute /* pwLine4.is.re */.max;
  /* static nls data for pwLine3.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[129].attribute /* pwLine3.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[129].attribute /* pwLine3.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[129].attribute /* pwLine3.ir.re */.max;
  /* static nls data for pwLine3.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[131].attribute /* pwLine3.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[131].attribute /* pwLine3.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[131].attribute /* pwLine3.is.re */.max;
  /* static nls data for pwLine3.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[130].attribute /* pwLine3.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[130].attribute /* pwLine3.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[130].attribute /* pwLine3.is.im */.max;
  /* static nls data for pwLine1.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[116].attribute /* pwLine1.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[116].attribute /* pwLine1.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[116].attribute /* pwLine1.ir.im */.max;
  /* static nls data for pwLine1.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[117].attribute /* pwLine1.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[117].attribute /* pwLine1.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[117].attribute /* pwLine1.ir.re */.max;
  /* static nls data for gENCLS.id */
  sysData->nominal[i] = data->modelData->realVarsData[76].attribute /* gENCLS.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[76].attribute /* gENCLS.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[76].attribute /* gENCLS.id */.max;
  /* static nls data for gENCLS.iq */
  sysData->nominal[i] = data->modelData->realVarsData[77].attribute /* gENCLS.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[77].attribute /* gENCLS.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[77].attribute /* gENCLS.iq */.max;
  /* static nls data for gENROE.PSIkq */
  sysData->nominal[i] = data->modelData->realVarsData[9].attribute /* gENROE.PSIkq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[9].attribute /* gENROE.PSIkq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[9].attribute /* gENROE.PSIkq */.max;
  /* static nls data for gENROE.PSIkd */
  sysData->nominal[i] = data->modelData->realVarsData[8].attribute /* gENROE.PSIkd */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[8].attribute /* gENROE.PSIkd */.min;
  sysData->max[i++]   = data->modelData->realVarsData[8].attribute /* gENROE.PSIkd */.max;
  /* static nls data for gENROE.PSIppd */
  sysData->nominal[i] = data->modelData->realVarsData[88].attribute /* gENROE.PSIppd */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[88].attribute /* gENROE.PSIppd */.min;
  sysData->max[i++]   = data->modelData->realVarsData[88].attribute /* gENROE.PSIppd */.max;
  /* static nls data for gENROE.PSIppq */
  sysData->nominal[i] = data->modelData->realVarsData[89].attribute /* gENROE.PSIppq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[89].attribute /* gENROE.PSIppq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[89].attribute /* gENROE.PSIppq */.max;
  /* static nls data for gENROE.id */
  sysData->nominal[i] = data->modelData->realVarsData[96].attribute /* gENROE.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[96].attribute /* gENROE.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[96].attribute /* gENROE.id */.max;
  /* static nls data for gENROE.iq */
  sysData->nominal[i] = data->modelData->realVarsData[97].attribute /* gENROE.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[97].attribute /* gENROE.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[97].attribute /* gENROE.iq */.max;
  /* static nls data for pwLine.vs.re */
  sysData->nominal[i] = data->modelData->realVarsData[111].attribute /* pwLine.vs.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[111].attribute /* pwLine.vs.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[111].attribute /* pwLine.vs.re */.max;
  /* static nls data for pwLine.vs.im */
  sysData->nominal[i] = data->modelData->realVarsData[110].attribute /* pwLine.vs.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[110].attribute /* pwLine.vs.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[110].attribute /* pwLine.vs.im */.max;
  /* static nls data for pwLine1.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[121].attribute /* pwLine1.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[121].attribute /* pwLine1.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[121].attribute /* pwLine1.vr.re */.max;
  /* static nls data for pwLine1.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[120].attribute /* pwLine1.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[120].attribute /* pwLine1.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[120].attribute /* pwLine1.vr.im */.max;
  /* static nls data for eXST1.XADIFD */
  sysData->nominal[i] = data->modelData->realVarsData[65].attribute /* eXST1.XADIFD */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[65].attribute /* eXST1.XADIFD */.min;
  sysData->max[i++]   = data->modelData->realVarsData[65].attribute /* eXST1.XADIFD */.max;
  /* static nls data for eXST1.ECOMP */
  sysData->nominal[i] = data->modelData->realVarsData[57].attribute /* eXST1.ECOMP */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[57].attribute /* eXST1.ECOMP */.min;
  sysData->max[i++]   = data->modelData->realVarsData[57].attribute /* eXST1.ECOMP */.max;
  /* static nls data for pwLine1.vs.im */
  sysData->nominal[i] = data->modelData->realVarsData[122].attribute /* pwLine1.vs.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[122].attribute /* pwLine1.vs.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[122].attribute /* pwLine1.vs.im */.max;
  /* static nls data for pwLine3.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[132].attribute /* pwLine3.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[132].attribute /* pwLine3.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[132].attribute /* pwLine3.vr.im */.max;
  /* static nls data for pwLine3.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[133].attribute /* pwLine3.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[133].attribute /* pwLine3.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[133].attribute /* pwLine3.vr.re */.max;
  /* static nls data for pwLine1.vs.re */
  sysData->nominal[i] = data->modelData->realVarsData[123].attribute /* pwLine1.vs.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[123].attribute /* pwLine1.vs.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[123].attribute /* pwLine1.vs.re */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS255(sysData);
}

void getIterationVarsNLS255(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[107] /* pwLine.ir.re variable */;
  array[1] = data->localData[0]->realVars[119] /* pwLine1.is.re variable */;
  array[2] = data->localData[0]->realVars[106] /* pwLine.ir.im variable */;
  array[3] = data->localData[0]->realVars[118] /* pwLine1.is.im variable */;
  array[4] = data->localData[0]->realVars[140] /* pwLine4.is.im variable */;
  array[5] = data->localData[0]->realVars[128] /* pwLine3.ir.im variable */;
  array[6] = data->localData[0]->realVars[141] /* pwLine4.is.re variable */;
  array[7] = data->localData[0]->realVars[129] /* pwLine3.ir.re variable */;
  array[8] = data->localData[0]->realVars[131] /* pwLine3.is.re variable */;
  array[9] = data->localData[0]->realVars[130] /* pwLine3.is.im variable */;
  array[10] = data->localData[0]->realVars[116] /* pwLine1.ir.im variable */;
  array[11] = data->localData[0]->realVars[117] /* pwLine1.ir.re variable */;
  array[12] = data->localData[0]->realVars[76] /* gENCLS.id variable */;
  array[13] = data->localData[0]->realVars[77] /* gENCLS.iq variable */;
  array[14] = data->localData[0]->realVars[9] /* gENROE.PSIkq STATE(1) */;
  array[15] = data->localData[0]->realVars[8] /* gENROE.PSIkd STATE(1) */;
  array[16] = data->localData[0]->realVars[88] /* gENROE.PSIppd variable */;
  array[17] = data->localData[0]->realVars[89] /* gENROE.PSIppq variable */;
  array[18] = data->localData[0]->realVars[96] /* gENROE.id variable */;
  array[19] = data->localData[0]->realVars[97] /* gENROE.iq variable */;
  array[20] = data->localData[0]->realVars[111] /* pwLine.vs.re variable */;
  array[21] = data->localData[0]->realVars[110] /* pwLine.vs.im variable */;
  array[22] = data->localData[0]->realVars[121] /* pwLine1.vr.re variable */;
  array[23] = data->localData[0]->realVars[120] /* pwLine1.vr.im variable */;
  array[24] = data->localData[0]->realVars[65] /* eXST1.XADIFD variable */;
  array[25] = data->localData[0]->realVars[57] /* eXST1.ECOMP variable */;
  array[26] = data->localData[0]->realVars[122] /* pwLine1.vs.im variable */;
  array[27] = data->localData[0]->realVars[132] /* pwLine3.vr.im variable */;
  array[28] = data->localData[0]->realVars[133] /* pwLine3.vr.re variable */;
  array[29] = data->localData[0]->realVars[123] /* pwLine1.vs.re variable */;
}


/* inner equations */

/*
equation index: 26
type: SIMPLE_ASSIGN
constantLoad.v = sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_26(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,26};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[123] /* pwLine1.vs.re variable */;
  tmp1 = data->localData[0]->realVars[122] /* pwLine1.vs.im variable */;
  data->localData[0]->realVars[53] /* constantLoad.v variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 27
type: SIMPLE_ASSIGN
constantLoad.kI = if constantLoad.v < 0.5 then constantLoad.a2 * constantLoad.b2 * constantLoad.v ^ (-1.0 + constantLoad.b2) * exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_27(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,27};
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  modelica_real tmp12;
  modelica_real tmp13;
  modelica_real tmp14;
  modelica_boolean tmp15;
  modelica_real tmp16;
  tmp0 = Less(data->localData[0]->realVars[53] /* constantLoad.v variable */,0.5);
  tmp15 = (modelica_boolean)tmp0;
  if(tmp15)
  {
    tmp1 = data->localData[0]->realVars[53] /* constantLoad.v variable */;
    tmp2 = -1.0 + data->simulationInfo->realParameter[62] /* constantLoad.b2 PARAM */;
    if(tmp1 < 0.0 && tmp2 != 0.0)
    {
      tmp4 = modf(tmp2, &tmp5);
      
      if(tmp4 > 0.5)
      {
        tmp4 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp4 < -0.5)
      {
        tmp4 += 1.0;
        tmp5 -= 1.0;
      }
      
      if(fabs(tmp4) < 1e-10)
        tmp3 = pow(tmp1, tmp5);
      else
      {
        tmp7 = modf(1.0/tmp2, &tmp6);
        if(tmp7 > 0.5)
        {
          tmp7 -= 1.0;
          tmp6 += 1.0;
        }
        else if(tmp7 < -0.5)
        {
          tmp7 += 1.0;
          tmp6 -= 1.0;
        }
        if(fabs(tmp7) < 1e-10 && ((unsigned long)tmp6 & 1))
        {
          tmp3 = -pow(-tmp1, tmp4)*pow(tmp1, tmp5);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
        }
      }
    }
    else
    {
      tmp3 = pow(tmp1, tmp2);
    }
    if(isnan(tmp3) || isinf(tmp3))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
    }tmp8 = data->localData[0]->realVars[53] /* constantLoad.v variable */;
    tmp9 = data->simulationInfo->realParameter[62] /* constantLoad.b2 PARAM */;
    if(tmp8 < 0.0 && tmp9 != 0.0)
    {
      tmp11 = modf(tmp9, &tmp12);
      
      if(tmp11 > 0.5)
      {
        tmp11 -= 1.0;
        tmp12 += 1.0;
      }
      else if(tmp11 < -0.5)
      {
        tmp11 += 1.0;
        tmp12 -= 1.0;
      }
      
      if(fabs(tmp11) < 1e-10)
        tmp10 = pow(tmp8, tmp12);
      else
      {
        tmp14 = modf(1.0/tmp9, &tmp13);
        if(tmp14 > 0.5)
        {
          tmp14 -= 1.0;
          tmp13 += 1.0;
        }
        else if(tmp14 < -0.5)
        {
          tmp14 += 1.0;
          tmp13 -= 1.0;
        }
        if(fabs(tmp14) < 1e-10 && ((unsigned long)tmp13 & 1))
        {
          tmp10 = -pow(-tmp8, tmp11)*pow(tmp8, tmp12);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp8, tmp9);
        }
      }
    }
    else
    {
      tmp10 = pow(tmp8, tmp9);
    }
    if(isnan(tmp10) || isinf(tmp10))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp8, tmp9);
    }
    tmp16 = (data->simulationInfo->realParameter[56] /* constantLoad.a2 PARAM */) * ((data->simulationInfo->realParameter[62] /* constantLoad.b2 PARAM */) * ((tmp3) * (exp(((-data->simulationInfo->realParameter[56] /* constantLoad.a2 PARAM */)) * (tmp10)))));
  }
  else
  {
    tmp16 = 1.0;
  }
  data->localData[0]->realVars[49] /* constantLoad.kI variable */ = tmp16;
  TRACE_POP
}
/*
equation index: 28
type: SIMPLE_ASSIGN
constantLoad.kP = if constantLoad.v < constantLoad.PQBRAK then constantLoad.a0 + constantLoad.a1 * cos(constantLoad.v * constantLoad.wp) + constantLoad.b1 * sin(constantLoad.v * constantLoad.wp) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_28(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,28};
  modelica_boolean tmp0;
  tmp0 = Less(data->localData[0]->realVars[53] /* constantLoad.v variable */,data->simulationInfo->realParameter[35] /* constantLoad.PQBRAK PARAM */);
  data->localData[0]->realVars[50] /* constantLoad.kP variable */ = (tmp0?data->simulationInfo->realParameter[54] /* constantLoad.a0 PARAM */ + (data->simulationInfo->realParameter[55] /* constantLoad.a1 PARAM */) * (cos((data->localData[0]->realVars[53] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[75] /* constantLoad.wp PARAM */))) + (data->simulationInfo->realParameter[61] /* constantLoad.b1 PARAM */) * (sin((data->localData[0]->realVars[53] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[75] /* constantLoad.wp PARAM */))):1.0);
  TRACE_POP
}
/*
equation index: 29
type: SIMPLE_ASSIGN
constantLoad.Q = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.im + constantLoad.d_Q) else constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_29(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,29};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  tmp0 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */);
  tmp1 = LessEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[65] /* constantLoad.d_t PARAM */);
  tmp4 = (modelica_boolean)(tmp0 && tmp1);
  if(tmp4)
  {
    tmp2 = data->localData[0]->realVars[53] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[49] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[38] /* constantLoad.S_I.im PARAM */) * (data->localData[0]->realVars[53] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[42] /* constantLoad.S_Y.im PARAM */) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[50] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[40] /* constantLoad.S_P.im PARAM */ + data->simulationInfo->realParameter[64] /* constantLoad.d_Q PARAM */);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[53] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[49] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[38] /* constantLoad.S_I.im PARAM */) * (data->localData[0]->realVars[53] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[42] /* constantLoad.S_Y.im PARAM */) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[50] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[40] /* constantLoad.S_P.im PARAM */);
  }
  data->localData[0]->realVars[47] /* constantLoad.Q variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 30
type: SIMPLE_ASSIGN
constantLoad.P = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.re + constantLoad.d_P) else constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_30(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,30};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  tmp0 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */);
  tmp1 = LessEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[65] /* constantLoad.d_t PARAM */);
  tmp4 = (modelica_boolean)(tmp0 && tmp1);
  if(tmp4)
  {
    tmp2 = data->localData[0]->realVars[53] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[49] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[39] /* constantLoad.S_I.re PARAM */) * (data->localData[0]->realVars[53] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[43] /* constantLoad.S_Y.re PARAM */) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[50] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[41] /* constantLoad.S_P.re PARAM */ + data->simulationInfo->realParameter[63] /* constantLoad.d_P PARAM */);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[53] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[49] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[39] /* constantLoad.S_I.re PARAM */) * (data->localData[0]->realVars[53] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[43] /* constantLoad.S_Y.re PARAM */) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[50] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[41] /* constantLoad.S_P.re PARAM */);
  }
  data->localData[0]->realVars[46] /* constantLoad.P variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 31
type: SIMPLE_ASSIGN
eXST1.ECOMP0 = eXST1.ECOMP
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_31(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,31};
  data->simulationInfo->realParameter[78] /* eXST1.ECOMP0 PARAM */ = data->localData[0]->realVars[57] /* eXST1.ECOMP variable */;
  TRACE_POP
}
/*
equation index: 32
type: SIMPLE_ASSIGN
eXST1.V_REF = eXST1.Efd0 / eXST1.K_A + eXST1.ECOMP0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_32(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,32};
  data->simulationInfo->realParameter[103] /* eXST1.V_REF PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[79] /* eXST1.Efd0 PARAM */,data->simulationInfo->realParameter[80] /* eXST1.K_A PARAM */,"eXST1.K_A",equationIndexes) + data->simulationInfo->realParameter[78] /* eXST1.ECOMP0 PARAM */;
  TRACE_POP
}
/*
equation index: 33
type: SIMPLE_ASSIGN
eXST1.Vref_step.height = eXST1.V_REF * eXST1.dV
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_33(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,33};
  data->simulationInfo->realParameter[113] /* eXST1.Vref_step.height PARAM */ = (data->simulationInfo->realParameter[103] /* eXST1.V_REF PARAM */) * (data->simulationInfo->realParameter[123] /* eXST1.dV PARAM */);
  TRACE_POP
}
/*
equation index: 34
type: SIMPLE_ASSIGN
eXST1.Vref_step.y = eXST1.Vref_step.offset + (if time < eXST1.Vref_step.startTime then 0.0 else eXST1.Vref_step.height)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_34(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,34};
  modelica_boolean tmp0;
  tmp0 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[115] /* eXST1.Vref_step.startTime PARAM */);
  data->localData[0]->realVars[64] /* eXST1.Vref_step.y variable */ = data->simulationInfo->realParameter[114] /* eXST1.Vref_step.offset PARAM */ + (tmp0?0.0:data->simulationInfo->realParameter[113] /* eXST1.Vref_step.height PARAM */);
  TRACE_POP
}
/*
equation index: 35
type: SIMPLE_ASSIGN
eXST1.TransducerDelay.y_start = eXST1.ECOMP0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_35(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,35};
  data->simulationInfo->realParameter[97] /* eXST1.TransducerDelay.y_start PARAM */ = data->simulationInfo->realParameter[78] /* eXST1.ECOMP0 PARAM */;
  TRACE_POP
}
/*
equation index: 36
type: SIMPLE_ASSIGN
$START.eXST1.DiffV.u2 = eXST1.TransducerDelay.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_36(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,36};
  data->modelData->realVarsData[55].attribute /* eXST1.DiffV.u2 variable */.start = data->simulationInfo->realParameter[97] /* eXST1.TransducerDelay.y_start PARAM */;
    data->localData[0]->realVars[55] /* eXST1.DiffV.u2 variable */ = data->modelData->realVarsData[55].attribute /* eXST1.DiffV.u2 variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[55].info /* eXST1.DiffV.u2 */.name, (modelica_real) data->localData[0]->realVars[55] /* eXST1.DiffV.u2 variable */);
  TRACE_POP
}
/*
equation index: 37
type: SIMPLE_ASSIGN
$START.eXST1.TransducerDelay.state = eXST1.TransducerDelay.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_37(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,37};
  data->modelData->realVarsData[0].attribute /* eXST1.TransducerDelay.state STATE(1) */.start = data->simulationInfo->realParameter[97] /* eXST1.TransducerDelay.y_start PARAM */;
    data->localData[0]->realVars[0] /* eXST1.TransducerDelay.state STATE(1) */ = data->modelData->realVarsData[0].attribute /* eXST1.TransducerDelay.state STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[0].info /* eXST1.TransducerDelay.state */.name, (modelica_real) data->localData[0]->realVars[0] /* eXST1.TransducerDelay.state STATE(1) */);
  TRACE_POP
}
/*
equation index: 38
type: SIMPLE_ASSIGN
eXST1.TransducerDelay.state = eXST1.TransducerDelay.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_38(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,38};
  data->localData[0]->realVars[0] /* eXST1.TransducerDelay.state STATE(1) */ = data->simulationInfo->realParameter[97] /* eXST1.TransducerDelay.y_start PARAM */;
  TRACE_POP
}
/*
equation index: 39
type: SIMPLE_ASSIGN
eXST1.DiffV.u2 = if abs(eXST1.TransducerDelay.T) <= 1e-15 then eXST1.ECOMP * eXST1.TransducerDelay.K else eXST1.TransducerDelay.state
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_39(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,39};
  modelica_boolean tmp0;
  tmp0 = LessEq(fabs(data->simulationInfo->realParameter[94] /* eXST1.TransducerDelay.T PARAM */),1e-15);
  data->localData[0]->realVars[55] /* eXST1.DiffV.u2 variable */ = (tmp0?(data->localData[0]->realVars[57] /* eXST1.ECOMP variable */) * (data->simulationInfo->realParameter[93] /* eXST1.TransducerDelay.K PARAM */):data->localData[0]->realVars[0] /* eXST1.TransducerDelay.state STATE(1) */);
  TRACE_POP
}
/*
equation index: 40
type: SIMPLE_ASSIGN
eXST1.VoltageReference.k = eXST1.V_REF
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_40(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,40};
  data->simulationInfo->realParameter[111] /* eXST1.VoltageReference.k PARAM */ = data->simulationInfo->realParameter[103] /* eXST1.V_REF PARAM */;
  TRACE_POP
}
/*
equation index: 41
type: SIMPLE_ASSIGN
eXST1.DiffV.u1 = eXST1.add7.k1 * eXST1.Vref_step.y + eXST1.add7.k2 * eXST1.VoltageReference.k
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_41(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,41};
  data->localData[0]->realVars[54] /* eXST1.DiffV.u1 variable */ = (data->simulationInfo->realParameter[120] /* eXST1.add7.k1 PARAM */) * (data->localData[0]->realVars[64] /* eXST1.Vref_step.y variable */) + (data->simulationInfo->realParameter[121] /* eXST1.add7.k2 PARAM */) * (data->simulationInfo->realParameter[111] /* eXST1.VoltageReference.k PARAM */);
  TRACE_POP
}
/*
equation index: 42
type: SIMPLE_ASSIGN
eXST1.DiffV.y = eXST1.DiffV.k1 * eXST1.DiffV.u1 + eXST1.DiffV.k2 * eXST1.DiffV.u2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_42(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,42};
  data->localData[0]->realVars[56] /* eXST1.DiffV.y variable */ = (data->simulationInfo->realParameter[76] /* eXST1.DiffV.k1 PARAM */) * (data->localData[0]->realVars[54] /* eXST1.DiffV.u1 variable */) + (data->simulationInfo->realParameter[77] /* eXST1.DiffV.k2 PARAM */) * (data->localData[0]->realVars[55] /* eXST1.DiffV.u2 variable */);
  TRACE_POP
}
/*
equation index: 43
type: SIMPLE_ASSIGN
eXST1.add3_2.y = eXST1.add3_2.k1 * zero.k + eXST1.add3_2.k2 * eXST1.DiffV.y + eXST1.add3_2.k3 * eXST1.Limiters.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_43(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,43};
  data->localData[0]->realVars[66] /* eXST1.add3_2.y variable */ = (data->simulationInfo->realParameter[116] /* eXST1.add3_2.k1 PARAM */) * (data->simulationInfo->realParameter[308] /* zero.k PARAM */) + (data->simulationInfo->realParameter[117] /* eXST1.add3_2.k2 PARAM */) * (data->localData[0]->realVars[56] /* eXST1.DiffV.y variable */) + (data->simulationInfo->realParameter[118] /* eXST1.add3_2.k3 PARAM */) * (data->localData[0]->realVars[62] /* eXST1.Limiters.y variable */);
  TRACE_POP
}
/*
equation index: 44
type: SIMPLE_ASSIGN
eXST1.feedback.y = eXST1.add3_2.y - eXST1.imDerivativeLag.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_44(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,44};
  data->localData[0]->realVars[67] /* eXST1.feedback.y variable */ = data->localData[0]->realVars[66] /* eXST1.add3_2.y variable */ - data->localData[0]->realVars[68] /* eXST1.imDerivativeLag.y variable */;
  TRACE_POP
}
/*
equation index: 45
type: SIMPLE_ASSIGN
eXST1.imLeadLag.u = homotopy(smooth(0, if eXST1.feedback.y > eXST1.limiter.uMax then eXST1.limiter.uMax else if eXST1.feedback.y < eXST1.limiter.uMin then eXST1.limiter.uMin else eXST1.feedback.y), eXST1.feedback.y)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_45(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,45};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  tmp0 = Greater(data->localData[0]->realVars[67] /* eXST1.feedback.y variable */,data->simulationInfo->realParameter[146] /* eXST1.limiter.uMax PARAM */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = data->simulationInfo->realParameter[146] /* eXST1.limiter.uMax PARAM */;
  }
  else
  {
    tmp1 = Less(data->localData[0]->realVars[67] /* eXST1.feedback.y variable */,data->simulationInfo->realParameter[147] /* eXST1.limiter.uMin PARAM */);
    tmp3 = (tmp1?data->simulationInfo->realParameter[147] /* eXST1.limiter.uMin PARAM */:data->localData[0]->realVars[67] /* eXST1.feedback.y variable */);
  }
  data->localData[0]->realVars[71] /* eXST1.imLeadLag.u variable */ = homotopy(tmp3, data->localData[0]->realVars[67] /* eXST1.feedback.y variable */);
  TRACE_POP
}
/*
equation index: 46
type: SIMPLE_ASSIGN
eXST1.K_a.u = if abs(eXST1.imLeadLag.T1 - eXST1.imLeadLag.T2) < 1e-15 then eXST1.imLeadLag.K * eXST1.imLeadLag.u else eXST1.imLeadLag.TF.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_46(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,46};
  modelica_boolean tmp0;
  tmp0 = Less(fabs(data->simulationInfo->realParameter[129] /* eXST1.imLeadLag.T1 PARAM */ - data->simulationInfo->realParameter[130] /* eXST1.imLeadLag.T2 PARAM */),1e-15);
  data->localData[0]->realVars[60] /* eXST1.K_a.u variable */ = (tmp0?(data->simulationInfo->realParameter[128] /* eXST1.imLeadLag.K PARAM */) * (data->localData[0]->realVars[71] /* eXST1.imLeadLag.u variable */):data->localData[0]->realVars[70] /* eXST1.imLeadLag.TF.y variable */);
  TRACE_POP
}
/*
equation index: 47
type: SIMPLE_ASSIGN
eXST1.K_a.y = eXST1.K_a.k * eXST1.K_a.u
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_47(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,47};
  data->localData[0]->realVars[61] /* eXST1.K_a.y variable */ = (data->simulationInfo->realParameter[83] /* eXST1.K_a.k PARAM */) * (data->localData[0]->realVars[60] /* eXST1.K_a.u variable */);
  TRACE_POP
}
/*
equation index: 48
type: SIMPLE_ASSIGN
eXST1.Vm1.y = if abs(eXST1.Vm1.T) <= 1e-15 then eXST1.K_a.y * eXST1.Vm1.K else eXST1.Vm1.state
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_48(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,48};
  modelica_boolean tmp0;
  tmp0 = LessEq(fabs(data->simulationInfo->realParameter[107] /* eXST1.Vm1.T PARAM */),1e-15);
  data->localData[0]->realVars[63] /* eXST1.Vm1.y variable */ = (tmp0?(data->localData[0]->realVars[61] /* eXST1.K_a.y variable */) * (data->simulationInfo->realParameter[106] /* eXST1.Vm1.K PARAM */):data->localData[0]->realVars[1] /* eXST1.Vm1.state STATE(1) */);
  TRACE_POP
}
/*
equation index: 49
type: SIMPLE_ASSIGN
eXST1.EFD = eXST1.XADIFD + $DER.gENROE.Epq * gENROE.Tpd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_49(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,49};
  data->localData[0]->realVars[58] /* eXST1.EFD variable */ = data->localData[0]->realVars[65] /* eXST1.XADIFD variable */ + (data->localData[0]->realVars[19] /* der(gENROE.Epq) STATE_DER */) * (data->simulationInfo->realParameter[218] /* gENROE.Tpd0 PARAM */);
  TRACE_POP
}
/*
equation index: 50
type: SIMPLE_ASSIGN
pwLine.is.re = (cos(gENROE.delta) * gENROE.iq - (-sin(gENROE.delta)) * gENROE.id) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_50(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,50};
  data->localData[0]->realVars[109] /* pwLine.is.re variable */ = ((cos(data->localData[0]->realVars[10] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[97] /* gENROE.iq variable */) - (((-sin(data->localData[0]->realVars[10] /* gENROE.delta STATE(1) */))) * (data->localData[0]->realVars[96] /* gENROE.id variable */))) * (data->simulationInfo->realParameter[175] /* gENROE.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 51
type: SIMPLE_ASSIGN
pwLine.is.im = (sin(gENROE.delta) * gENROE.iq - cos(gENROE.delta) * gENROE.id) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_51(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,51};
  data->localData[0]->realVars[108] /* pwLine.is.im variable */ = ((sin(data->localData[0]->realVars[10] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[97] /* gENROE.iq variable */) - ((cos(data->localData[0]->realVars[10] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[96] /* gENROE.id variable */))) * (data->simulationInfo->realParameter[175] /* gENROE.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 52
type: SIMPLE_ASSIGN
gENROE.PSIq = (-gENROE.PSIppq) - gENROE.Xppq * gENROE.iq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_52(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,52};
  data->localData[0]->realVars[90] /* gENROE.PSIq variable */ = (-data->localData[0]->realVars[89] /* gENROE.PSIppq variable */) - ((data->simulationInfo->realParameter[230] /* gENROE.Xppq PARAM */) * (data->localData[0]->realVars[97] /* gENROE.iq variable */));
  TRACE_POP
}
/*
equation index: 53
type: SIMPLE_ASSIGN
gENROE.ud = (-gENROE.PSIq) - gENROE.R_a * gENROE.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_53(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,53};
  data->localData[0]->realVars[98] /* gENROE.ud variable */ = (-data->localData[0]->realVars[90] /* gENROE.PSIq variable */) - ((data->simulationInfo->realParameter[212] /* gENROE.R_a PARAM */) * (data->localData[0]->realVars[96] /* gENROE.id variable */));
  TRACE_POP
}
/*
equation index: 54
type: SIMPLE_ASSIGN
gENROE.PSIpp = sqrt(gENROE.PSIppd ^ 2.0 + gENROE.PSIppq ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_54(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,54};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[88] /* gENROE.PSIppd variable */;
  tmp1 = data->localData[0]->realVars[89] /* gENROE.PSIppq variable */;
  data->localData[0]->realVars[87] /* gENROE.PSIpp variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 55
type: SIMPLE_ASSIGN
gENROE.PSId = gENROE.PSIppd - gENROE.Xppd * gENROE.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_55(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,55};
  data->localData[0]->realVars[86] /* gENROE.PSId variable */ = data->localData[0]->realVars[88] /* gENROE.PSIppd variable */ - ((data->simulationInfo->realParameter[229] /* gENROE.Xppd PARAM */) * (data->localData[0]->realVars[96] /* gENROE.id variable */));
  TRACE_POP
}
/*
equation index: 56
type: SIMPLE_ASSIGN
gENROE.uq = gENROE.PSId - gENROE.R_a * gENROE.iq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_56(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,56};
  data->localData[0]->realVars[99] /* gENROE.uq variable */ = data->localData[0]->realVars[86] /* gENROE.PSId variable */ - ((data->simulationInfo->realParameter[212] /* gENROE.R_a PARAM */) * (data->localData[0]->realVars[97] /* gENROE.iq variable */));
  TRACE_POP
}
/*
equation index: 57
type: SIMPLE_ASSIGN
gENROE.Epq = (eXST1.XADIFD - (((gENROE.Xl - gENROE.Xpd) * gENROE.id - gENROE.PSIkd) * gENROE.K1d + gENROE.id * (gENROE.Xd - gENROE.Xpd) + OpenIPSL.NonElectrical.Functions.SE_exp(gENROE.PSIpp, gENROE.S10, gENROE.S12, 1.0, 1.2) * gENROE.PSIppd)) / (1.0 + gENROE.K1d)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_57(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,57};
  data->localData[0]->realVars[7] /* gENROE.Epq STATE(1) */ = DIVISION_SIM(data->localData[0]->realVars[65] /* eXST1.XADIFD variable */ - (((data->simulationInfo->realParameter[226] /* gENROE.Xl PARAM */ - data->simulationInfo->realParameter[227] /* gENROE.Xpd PARAM */) * (data->localData[0]->realVars[96] /* gENROE.id variable */) - data->localData[0]->realVars[8] /* gENROE.PSIkd STATE(1) */) * (data->simulationInfo->realParameter[189] /* gENROE.K1d PARAM */) + (data->localData[0]->realVars[96] /* gENROE.id variable */) * (data->simulationInfo->realParameter[225] /* gENROE.Xd PARAM */ - data->simulationInfo->realParameter[227] /* gENROE.Xpd PARAM */) + (omc_OpenIPSL_NonElectrical_Functions_SE__exp(threadData, data->localData[0]->realVars[87] /* gENROE.PSIpp variable */, data->simulationInfo->realParameter[215] /* gENROE.S10 PARAM */, data->simulationInfo->realParameter[216] /* gENROE.S12 PARAM */, 1.0, 1.2)) * (data->localData[0]->realVars[88] /* gENROE.PSIppd variable */)),1.0 + data->simulationInfo->realParameter[189] /* gENROE.K1d PARAM */,"1.0 + gENROE.K1d",equationIndexes);
  TRACE_POP
}
/*
equation index: 58
type: SIMPLE_ASSIGN
gENROE.Epd = (gENROE.XaqIlq - (((gENROE.Xpq - gENROE.Xl) * gENROE.iq - gENROE.PSIkq) * gENROE.K1q + gENROE.iq * (gENROE.Xpq - gENROE.Xq) + OpenIPSL.NonElectrical.Functions.SE_exp(gENROE.PSIpp, gENROE.S10, gENROE.S12, 1.0, 1.2) * gENROE.PSIppq * (gENROE.Xq - gENROE.Xl) / (gENROE.Xd - gENROE.Xl))) / (1.0 + gENROE.K1q)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_58(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,58};
  data->localData[0]->realVars[6] /* gENROE.Epd STATE(1) */ = DIVISION_SIM(data->localData[0]->realVars[93] /* gENROE.XaqIlq variable */ - (((data->simulationInfo->realParameter[231] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[226] /* gENROE.Xl PARAM */) * (data->localData[0]->realVars[97] /* gENROE.iq variable */) - data->localData[0]->realVars[9] /* gENROE.PSIkq STATE(1) */) * (data->simulationInfo->realParameter[190] /* gENROE.K1q PARAM */) + (data->localData[0]->realVars[97] /* gENROE.iq variable */) * (data->simulationInfo->realParameter[231] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[232] /* gENROE.Xq PARAM */) + (omc_OpenIPSL_NonElectrical_Functions_SE__exp(threadData, data->localData[0]->realVars[87] /* gENROE.PSIpp variable */, data->simulationInfo->realParameter[215] /* gENROE.S10 PARAM */, data->simulationInfo->realParameter[216] /* gENROE.S12 PARAM */, 1.0, 1.2)) * ((data->localData[0]->realVars[89] /* gENROE.PSIppq variable */) * (DIVISION_SIM(data->simulationInfo->realParameter[232] /* gENROE.Xq PARAM */ - data->simulationInfo->realParameter[226] /* gENROE.Xl PARAM */,data->simulationInfo->realParameter[225] /* gENROE.Xd PARAM */ - data->simulationInfo->realParameter[226] /* gENROE.Xl PARAM */,"gENROE.Xd - gENROE.Xl",equationIndexes)))),1.0 + data->simulationInfo->realParameter[190] /* gENROE.K1q PARAM */,"1.0 + gENROE.K1q",equationIndexes);
  TRACE_POP
}
/*
equation index: 59
type: SIMPLE_ASSIGN
gENCLS.p.ir = ((-sin(gENCLS.delta)) * gENCLS.id - cos(gENCLS.delta) * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_59(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,59};
  data->localData[0]->realVars[80] /* gENCLS.p.ir variable */ = (((-sin(data->localData[0]->realVars[4] /* gENCLS.delta STATE(1) */))) * (data->localData[0]->realVars[76] /* gENCLS.id variable */) - ((cos(data->localData[0]->realVars[4] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[77] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[149] /* gENCLS.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 60
type: SIMPLE_ASSIGN
gENCLS.p.ii = (cos(gENCLS.delta) * gENCLS.id - sin(gENCLS.delta) * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_60(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,60};
  data->localData[0]->realVars[79] /* gENCLS.p.ii variable */ = ((cos(data->localData[0]->realVars[4] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[76] /* gENCLS.id variable */) - ((sin(data->localData[0]->realVars[4] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[77] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[149] /* gENCLS.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 61
type: SIMPLE_ASSIGN
gENCLS.vq = gENCLS.eq + (-gENCLS.R_a) * gENCLS.iq - gENCLS.X_d * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_61(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,61};
  data->localData[0]->realVars[82] /* gENCLS.vq variable */ = data->localData[0]->realVars[5] /* gENCLS.eq STATE(1) */ + ((-data->simulationInfo->realParameter[155] /* gENCLS.R_a PARAM */)) * (data->localData[0]->realVars[77] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[158] /* gENCLS.X_d PARAM */) * (data->localData[0]->realVars[76] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 62
type: SIMPLE_ASSIGN
gENCLS.vd = gENCLS.X_d * gENCLS.iq - gENCLS.R_a * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_62(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,62};
  data->localData[0]->realVars[81] /* gENCLS.vd variable */ = (data->simulationInfo->realParameter[158] /* gENCLS.X_d PARAM */) * (data->localData[0]->realVars[77] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[155] /* gENCLS.R_a PARAM */) * (data->localData[0]->realVars[76] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 63
type: SIMPLE_ASSIGN
pwLine4.ir.re = (-pwLine1.ir.re) - gENCLS.p.ir
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_63(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,63};
  data->localData[0]->realVars[139] /* pwLine4.ir.re variable */ = (-data->localData[0]->realVars[117] /* pwLine1.ir.re variable */) - data->localData[0]->realVars[80] /* gENCLS.p.ir variable */;
  TRACE_POP
}
/*
equation index: 64
type: SIMPLE_ASSIGN
pwLine4.ir.im = (-pwLine1.ir.im) - gENCLS.p.ii
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_64(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,64};
  data->localData[0]->realVars[138] /* pwLine4.ir.im variable */ = (-data->localData[0]->realVars[116] /* pwLine1.ir.im variable */) - data->localData[0]->realVars[79] /* gENCLS.p.ii variable */;
  TRACE_POP
}
/*
equation index: 65
type: SIMPLE_ASSIGN
pwFault.p.ir = (-pwLine3.ir.re) - pwLine4.is.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_65(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,65};
  data->localData[0]->realVars[101] /* pwFault.p.ir variable */ = (-data->localData[0]->realVars[129] /* pwLine3.ir.re variable */) - data->localData[0]->realVars[141] /* pwLine4.is.re variable */;
  TRACE_POP
}
/*
equation index: 66
type: SIMPLE_ASSIGN
pwFault.p.ii = (-pwLine3.ir.im) - pwLine4.is.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_66(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,66};
  data->localData[0]->realVars[100] /* pwFault.p.ii variable */ = (-data->localData[0]->realVars[128] /* pwLine3.ir.im variable */) - data->localData[0]->realVars[140] /* pwLine4.is.im variable */;
  TRACE_POP
}
/*
equation index: 67
type: SIMPLE_ASSIGN
constantLoad.p.ii = (-pwLine.ir.im) - pwLine1.is.im - pwLine3.is.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_67(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,67};
  data->localData[0]->realVars[51] /* constantLoad.p.ii variable */ = (-data->localData[0]->realVars[106] /* pwLine.ir.im variable */) - data->localData[0]->realVars[118] /* pwLine1.is.im variable */ - data->localData[0]->realVars[130] /* pwLine3.is.im variable */;
  TRACE_POP
}
/*
equation index: 68
type: SIMPLE_ASSIGN
constantLoad.p.ir = (-pwLine.ir.re) - pwLine1.is.re - pwLine3.is.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_68(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,68};
  data->localData[0]->realVars[52] /* constantLoad.p.ir variable */ = (-data->localData[0]->realVars[107] /* pwLine.ir.re variable */) - data->localData[0]->realVars[119] /* pwLine1.is.re variable */ - data->localData[0]->realVars[131] /* pwLine3.is.re variable */;
  TRACE_POP
}

void residualFunc99(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,99};
  int i;
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_boolean tmp6;
  modelica_boolean tmp7;
  modelica_boolean tmp8;
  modelica_boolean tmp9;
  modelica_boolean tmp10;
  modelica_boolean tmp11;
  modelica_boolean tmp12;
  modelica_boolean tmp13;
  modelica_boolean tmp14;
  modelica_real tmp15;
  modelica_real tmp16;
  modelica_boolean tmp17;
  modelica_real tmp18;
  modelica_boolean tmp19;
  modelica_real tmp20;
  modelica_boolean tmp21;
  modelica_real tmp22;
  modelica_boolean tmp23;
  modelica_boolean tmp24;
  modelica_boolean tmp25;
  modelica_boolean tmp26;
  modelica_boolean tmp27;
  modelica_boolean tmp28;
  modelica_boolean tmp29;
  modelica_real tmp30;
  modelica_real tmp31;
  modelica_boolean tmp32;
  modelica_real tmp33;
  modelica_boolean tmp34;
  modelica_real tmp35;
  modelica_boolean tmp36;
  modelica_real tmp37;
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
  modelica_boolean tmp59;
  /* iteration variables */
  for (i=0; i<30; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<30; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[107] /* pwLine.ir.re variable */ = xloc[0];
  data->localData[0]->realVars[119] /* pwLine1.is.re variable */ = xloc[1];
  data->localData[0]->realVars[106] /* pwLine.ir.im variable */ = xloc[2];
  data->localData[0]->realVars[118] /* pwLine1.is.im variable */ = xloc[3];
  data->localData[0]->realVars[140] /* pwLine4.is.im variable */ = xloc[4];
  data->localData[0]->realVars[128] /* pwLine3.ir.im variable */ = xloc[5];
  data->localData[0]->realVars[141] /* pwLine4.is.re variable */ = xloc[6];
  data->localData[0]->realVars[129] /* pwLine3.ir.re variable */ = xloc[7];
  data->localData[0]->realVars[131] /* pwLine3.is.re variable */ = xloc[8];
  data->localData[0]->realVars[130] /* pwLine3.is.im variable */ = xloc[9];
  data->localData[0]->realVars[116] /* pwLine1.ir.im variable */ = xloc[10];
  data->localData[0]->realVars[117] /* pwLine1.ir.re variable */ = xloc[11];
  data->localData[0]->realVars[76] /* gENCLS.id variable */ = xloc[12];
  data->localData[0]->realVars[77] /* gENCLS.iq variable */ = xloc[13];
  data->localData[0]->realVars[9] /* gENROE.PSIkq STATE(1) */ = xloc[14];
  data->localData[0]->realVars[8] /* gENROE.PSIkd STATE(1) */ = xloc[15];
  data->localData[0]->realVars[88] /* gENROE.PSIppd variable */ = xloc[16];
  data->localData[0]->realVars[89] /* gENROE.PSIppq variable */ = xloc[17];
  data->localData[0]->realVars[96] /* gENROE.id variable */ = xloc[18];
  data->localData[0]->realVars[97] /* gENROE.iq variable */ = xloc[19];
  data->localData[0]->realVars[111] /* pwLine.vs.re variable */ = xloc[20];
  data->localData[0]->realVars[110] /* pwLine.vs.im variable */ = xloc[21];
  data->localData[0]->realVars[121] /* pwLine1.vr.re variable */ = xloc[22];
  data->localData[0]->realVars[120] /* pwLine1.vr.im variable */ = xloc[23];
  data->localData[0]->realVars[65] /* eXST1.XADIFD variable */ = xloc[24];
  data->localData[0]->realVars[57] /* eXST1.ECOMP variable */ = xloc[25];
  data->localData[0]->realVars[122] /* pwLine1.vs.im variable */ = xloc[26];
  data->localData[0]->realVars[132] /* pwLine3.vr.im variable */ = xloc[27];
  data->localData[0]->realVars[133] /* pwLine3.vr.re variable */ = xloc[28];
  data->localData[0]->realVars[123] /* pwLine1.vs.re variable */ = xloc[29];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_26(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_27(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_28(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_29(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_30(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_31(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_32(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_33(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_34(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_35(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_36(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_37(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_38(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_39(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_40(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_41(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_42(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_43(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_44(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_45(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_46(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_47(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_48(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_49(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_50(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_51(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_52(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_53(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_54(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_55(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_56(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_57(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_58(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_59(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_60(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_61(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_62(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_63(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_64(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_65(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_66(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_67(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_68(data, threadData);
  /* body */
  tmp0 = Greater(data->localData[0]->realVars[58] /* eXST1.EFD variable */,(data->localData[0]->realVars[57] /* eXST1.ECOMP variable */) * (data->simulationInfo->realParameter[104] /* eXST1.V_RMAX PARAM */) - ((data->simulationInfo->realParameter[81] /* eXST1.K_C PARAM */) * (data->localData[0]->realVars[65] /* eXST1.XADIFD variable */)));
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = (data->localData[0]->realVars[57] /* eXST1.ECOMP variable */) * (data->simulationInfo->realParameter[104] /* eXST1.V_RMAX PARAM */) - ((data->simulationInfo->realParameter[81] /* eXST1.K_C PARAM */) * (data->localData[0]->realVars[65] /* eXST1.XADIFD variable */));
  }
  else
  {
    tmp1 = Less(data->localData[0]->realVars[58] /* eXST1.EFD variable */,(data->localData[0]->realVars[57] /* eXST1.ECOMP variable */) * (data->simulationInfo->realParameter[105] /* eXST1.V_RMIN PARAM */) - ((data->simulationInfo->realParameter[81] /* eXST1.K_C PARAM */) * (data->localData[0]->realVars[65] /* eXST1.XADIFD variable */)));
    tmp3 = (tmp1?(data->localData[0]->realVars[57] /* eXST1.ECOMP variable */) * (data->simulationInfo->realParameter[105] /* eXST1.V_RMIN PARAM */) - ((data->simulationInfo->realParameter[81] /* eXST1.K_C PARAM */) * (data->localData[0]->realVars[65] /* eXST1.XADIFD variable */)):data->localData[0]->realVars[63] /* eXST1.Vm1.y variable */);
  }
  res[0] = tmp3 - data->localData[0]->realVars[58] /* eXST1.EFD variable */;

  tmp4 = data->localData[0]->realVars[111] /* pwLine.vs.re variable */;
  tmp5 = data->localData[0]->realVars[110] /* pwLine.vs.im variable */;
  res[1] = sqrt((tmp4 * tmp4) + (tmp5 * tmp5)) - data->localData[0]->realVars[57] /* eXST1.ECOMP variable */;

  res[2] = (cos(data->localData[0]->realVars[10] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[99] /* gENROE.uq variable */) + (sin(data->localData[0]->realVars[10] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[98] /* gENROE.ud variable */) - data->localData[0]->realVars[111] /* pwLine.vs.re variable */;

  res[3] = (sin(data->localData[0]->realVars[10] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[99] /* gENROE.uq variable */) + ((-cos(data->localData[0]->realVars[10] /* gENROE.delta STATE(1) */))) * (data->localData[0]->realVars[98] /* gENROE.ud variable */) - data->localData[0]->realVars[110] /* pwLine.vs.im variable */;

  tmp6 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[273] /* pwLine.t1 PARAM */);
  tmp7 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[274] /* pwLine.t2 PARAM */);
  res[4] = ((tmp6 && tmp7)?data->localData[0]->realVars[109] /* pwLine.is.re variable */:data->localData[0]->realVars[111] /* pwLine.vs.re variable */ - data->localData[0]->realVars[123] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[272] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[109] /* pwLine.is.re variable */ + (data->localData[0]->realVars[110] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[269] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[111] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[270] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[271] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[108] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[111] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[269] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[110] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[270] /* pwLine.Y.re PARAM */))))));

  tmp8 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[295] /* pwLine3.t1 PARAM */);
  tmp9 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[296] /* pwLine3.t2 PARAM */);
  res[5] = ((tmp8 && tmp9)?data->localData[0]->realVars[130] /* pwLine3.is.im variable */:data->localData[0]->realVars[122] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[132] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[294] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[130] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[123] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[291] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[122] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[292] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[293] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[131] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[122] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[291] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[123] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[292] /* pwLine3.Y.re PARAM */)))));

  tmp10 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[295] /* pwLine3.t1 PARAM */);
  tmp11 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[296] /* pwLine3.t2 PARAM */);
  res[6] = ((tmp10 && tmp11)?data->localData[0]->realVars[131] /* pwLine3.is.re variable */:data->localData[0]->realVars[123] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[133] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[294] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[131] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[122] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[291] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[123] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[292] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[293] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[130] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[123] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[291] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[122] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[292] /* pwLine3.Y.re PARAM */))))));

  tmp12 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[262] /* pwFault.t1 PARAM */);
  tmp21 = (modelica_boolean)tmp12;
  if(tmp21)
  {
    tmp22 = data->localData[0]->realVars[100] /* pwFault.p.ii variable */;
  }
  else
  {
    tmp13 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[263] /* pwFault.t2 PARAM */);
    tmp19 = (modelica_boolean)(tmp13 && data->simulationInfo->booleanParameter[66] /* pwFault.ground PARAM */);
    if(tmp19)
    {
      tmp20 = data->localData[0]->realVars[133] /* pwLine3.vr.re variable */ - 1e-10;
    }
    else
    {
      tmp14 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[263] /* pwFault.t2 PARAM */);
      tmp17 = (modelica_boolean)tmp14;
      if(tmp17)
      {
        tmp15 = data->simulationInfo->realParameter[261] /* pwFault.X PARAM */;
        tmp16 = data->simulationInfo->realParameter[260] /* pwFault.R PARAM */;
        tmp18 = data->localData[0]->realVars[100] /* pwFault.p.ii variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[260] /* pwFault.R PARAM */) * (data->localData[0]->realVars[132] /* pwLine3.vr.im variable */) - ((data->simulationInfo->realParameter[261] /* pwFault.X PARAM */) * (data->localData[0]->realVars[133] /* pwLine3.vr.re variable */)),(tmp15 * tmp15) + (tmp16 * tmp16),"pwFault.X ^ 2.0 + pwFault.R ^ 2.0",equationIndexes));
      }
      else
      {
        tmp18 = data->localData[0]->realVars[100] /* pwFault.p.ii variable */;
      }
      tmp20 = tmp18;
    }
    tmp22 = tmp20;
  }
  res[7] = tmp22;

  tmp23 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[295] /* pwLine3.t1 PARAM */);
  tmp24 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[296] /* pwLine3.t2 PARAM */);
  res[8] = ((tmp23 && tmp24)?data->localData[0]->realVars[129] /* pwLine3.ir.re variable */:data->localData[0]->realVars[133] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[123] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[294] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[129] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[132] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[291] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[133] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[292] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[293] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[128] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[133] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[291] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[132] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[292] /* pwLine3.Y.re PARAM */))))));

  tmp25 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[295] /* pwLine3.t1 PARAM */);
  tmp26 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[296] /* pwLine3.t2 PARAM */);
  res[9] = ((tmp25 && tmp26)?data->localData[0]->realVars[128] /* pwLine3.ir.im variable */:data->localData[0]->realVars[132] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[122] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[294] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[128] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[133] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[291] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[132] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[292] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[293] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[129] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[132] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[291] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[133] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[292] /* pwLine3.Y.re PARAM */)))));

  tmp27 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[262] /* pwFault.t1 PARAM */);
  tmp36 = (modelica_boolean)tmp27;
  if(tmp36)
  {
    tmp37 = data->localData[0]->realVars[101] /* pwFault.p.ir variable */;
  }
  else
  {
    tmp28 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[263] /* pwFault.t2 PARAM */);
    tmp34 = (modelica_boolean)(tmp28 && data->simulationInfo->booleanParameter[66] /* pwFault.ground PARAM */);
    if(tmp34)
    {
      tmp35 = data->localData[0]->realVars[132] /* pwLine3.vr.im variable */;
    }
    else
    {
      tmp29 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[263] /* pwFault.t2 PARAM */);
      tmp32 = (modelica_boolean)tmp29;
      if(tmp32)
      {
        tmp30 = data->simulationInfo->realParameter[260] /* pwFault.R PARAM */;
        tmp31 = data->simulationInfo->realParameter[261] /* pwFault.X PARAM */;
        tmp33 = data->localData[0]->realVars[101] /* pwFault.p.ir variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[260] /* pwFault.R PARAM */) * (data->localData[0]->realVars[133] /* pwLine3.vr.re variable */) + (data->simulationInfo->realParameter[261] /* pwFault.X PARAM */) * (data->localData[0]->realVars[132] /* pwLine3.vr.im variable */),(tmp30 * tmp30) + (tmp31 * tmp31),"pwFault.R ^ 2.0 + pwFault.X ^ 2.0",equationIndexes));
      }
      else
      {
        tmp33 = data->localData[0]->realVars[101] /* pwFault.p.ir variable */;
      }
      tmp35 = tmp33;
    }
    tmp37 = tmp35;
  }
  res[10] = tmp37;

  tmp38 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[306] /* pwLine4.t1 PARAM */);
  tmp39 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[307] /* pwLine4.t2 PARAM */);
  res[11] = ((tmp38 && tmp39)?data->localData[0]->realVars[141] /* pwLine4.is.re variable */:data->localData[0]->realVars[133] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[121] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[305] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[141] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[132] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[302] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[133] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[303] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[304] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[140] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[133] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[302] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[132] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[303] /* pwLine4.Y.re PARAM */))))));

  tmp40 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[306] /* pwLine4.t1 PARAM */);
  tmp41 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[307] /* pwLine4.t2 PARAM */);
  res[12] = ((tmp40 && tmp41)?data->localData[0]->realVars[140] /* pwLine4.is.im variable */:data->localData[0]->realVars[132] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[120] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[305] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[140] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[133] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[302] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[132] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[303] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[304] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[141] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[132] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[302] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[133] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[303] /* pwLine4.Y.re PARAM */)))));

  res[13] = (sin(data->localData[0]->realVars[4] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[82] /* gENCLS.vq variable */) + ((-cos(data->localData[0]->realVars[4] /* gENCLS.delta STATE(1) */))) * (data->localData[0]->realVars[81] /* gENCLS.vd variable */) - data->localData[0]->realVars[120] /* pwLine1.vr.im variable */;

  res[14] = (cos(data->localData[0]->realVars[4] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[82] /* gENCLS.vq variable */) + (sin(data->localData[0]->realVars[4] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[81] /* gENCLS.vd variable */) - data->localData[0]->realVars[121] /* pwLine1.vr.re variable */;

  tmp42 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[306] /* pwLine4.t1 PARAM */);
  tmp43 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[307] /* pwLine4.t2 PARAM */);
  res[15] = ((tmp42 && tmp43)?data->localData[0]->realVars[139] /* pwLine4.ir.re variable */:data->localData[0]->realVars[121] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[133] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[305] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[139] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[120] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[302] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[121] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[303] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[304] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[138] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[121] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[302] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[120] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[303] /* pwLine4.Y.re PARAM */))))));

  tmp44 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[284] /* pwLine1.t1 PARAM */);
  tmp45 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[285] /* pwLine1.t2 PARAM */);
  res[16] = ((tmp44 && tmp45)?data->localData[0]->realVars[119] /* pwLine1.is.re variable */:data->localData[0]->realVars[123] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[121] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[283] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[119] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[122] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[280] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[123] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[281] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[282] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[118] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[123] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[280] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[122] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[281] /* pwLine1.Y.re PARAM */))))));

  tmp46 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[306] /* pwLine4.t1 PARAM */);
  tmp47 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[307] /* pwLine4.t2 PARAM */);
  res[17] = ((tmp46 && tmp47)?data->localData[0]->realVars[138] /* pwLine4.ir.im variable */:data->localData[0]->realVars[120] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[132] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[305] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[138] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[121] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[302] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[120] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[303] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[304] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[139] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[120] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[302] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[121] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[303] /* pwLine4.Y.re PARAM */)))));

  tmp48 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[284] /* pwLine1.t1 PARAM */);
  tmp49 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[285] /* pwLine1.t2 PARAM */);
  res[18] = ((tmp48 && tmp49)?data->localData[0]->realVars[117] /* pwLine1.ir.re variable */:data->localData[0]->realVars[121] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[123] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[283] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[117] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[120] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[280] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[121] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[281] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[282] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[116] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[121] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[280] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[120] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[281] /* pwLine1.Y.re PARAM */))))));

  tmp50 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[284] /* pwLine1.t1 PARAM */);
  tmp51 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[285] /* pwLine1.t2 PARAM */);
  res[19] = ((tmp50 && tmp51)?data->localData[0]->realVars[116] /* pwLine1.ir.im variable */:data->localData[0]->realVars[120] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[122] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[283] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[116] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[121] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[280] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[120] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[281] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[282] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[117] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[120] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[280] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[121] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[281] /* pwLine1.Y.re PARAM */)))));

  tmp52 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[284] /* pwLine1.t1 PARAM */);
  tmp53 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[285] /* pwLine1.t2 PARAM */);
  res[20] = ((tmp52 && tmp53)?data->localData[0]->realVars[118] /* pwLine1.is.im variable */:data->localData[0]->realVars[122] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[120] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[283] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[118] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[123] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[280] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[122] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[281] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[282] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[119] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[122] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[280] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[123] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[281] /* pwLine1.Y.re PARAM */)))));

  res[21] = (data->localData[0]->realVars[122] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[52] /* constantLoad.p.ir variable */) + ((-data->localData[0]->realVars[123] /* pwLine1.vs.re variable */)) * (data->localData[0]->realVars[51] /* constantLoad.p.ii variable */) - data->localData[0]->realVars[47] /* constantLoad.Q variable */;

  res[22] = (data->localData[0]->realVars[122] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[51] /* constantLoad.p.ii variable */) + (data->localData[0]->realVars[123] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[52] /* constantLoad.p.ir variable */) - data->localData[0]->realVars[46] /* constantLoad.P variable */;

  tmp54 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[273] /* pwLine.t1 PARAM */);
  tmp55 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[274] /* pwLine.t2 PARAM */);
  res[23] = ((tmp54 && tmp55)?data->localData[0]->realVars[106] /* pwLine.ir.im variable */:data->localData[0]->realVars[122] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[110] /* pwLine.vs.im variable */ - ((data->simulationInfo->realParameter[272] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[106] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[123] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[269] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[122] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[270] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[271] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[107] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[122] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[269] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[123] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[270] /* pwLine.Y.re PARAM */)))));

  tmp56 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[273] /* pwLine.t1 PARAM */);
  tmp57 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[274] /* pwLine.t2 PARAM */);
  res[24] = ((tmp56 && tmp57)?data->localData[0]->realVars[107] /* pwLine.ir.re variable */:data->localData[0]->realVars[123] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[111] /* pwLine.vs.re variable */ - ((data->simulationInfo->realParameter[272] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[107] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[122] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[269] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[123] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[270] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[271] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[106] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[123] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[269] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[122] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[270] /* pwLine.Y.re PARAM */))))));

  tmp58 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[273] /* pwLine.t1 PARAM */);
  tmp59 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[274] /* pwLine.t2 PARAM */);
  res[25] = ((tmp58 && tmp59)?data->localData[0]->realVars[108] /* pwLine.is.im variable */:data->localData[0]->realVars[110] /* pwLine.vs.im variable */ - data->localData[0]->realVars[122] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[272] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[108] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[111] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[269] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[110] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[270] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[271] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[109] /* pwLine.is.re variable */ + (data->localData[0]->realVars[110] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[269] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[111] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[270] /* pwLine.Y.re PARAM */)))));

  res[26] = data->localData[0]->realVars[89] /* gENROE.PSIppq variable */ - ((data->localData[0]->realVars[6] /* gENROE.Epd STATE(1) */) * (data->simulationInfo->realParameter[194] /* gENROE.K3q PARAM */)) - ((data->localData[0]->realVars[9] /* gENROE.PSIkq STATE(1) */) * (data->simulationInfo->realParameter[196] /* gENROE.K4q PARAM */));

  res[27] = data->localData[0]->realVars[6] /* gENROE.Epd STATE(1) */ + (data->simulationInfo->realParameter[231] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[226] /* gENROE.Xl PARAM */) * (data->localData[0]->realVars[97] /* gENROE.iq variable */) + (-data->localData[0]->realVars[9] /* gENROE.PSIkq STATE(1) */) - ((data->localData[0]->realVars[21] /* der(gENROE.PSIkq) STATE_DER */) * (data->simulationInfo->realParameter[220] /* gENROE.Tppq0 PARAM */));

  res[28] = (data->localData[0]->realVars[8] /* gENROE.PSIkd STATE(1) */) * (data->simulationInfo->realParameter[195] /* gENROE.K4d PARAM */) + (data->localData[0]->realVars[7] /* gENROE.Epq STATE(1) */) * (data->simulationInfo->realParameter[193] /* gENROE.K3d PARAM */) - data->localData[0]->realVars[88] /* gENROE.PSIppd variable */;

  res[29] = data->localData[0]->realVars[7] /* gENROE.Epq STATE(1) */ + (data->simulationInfo->realParameter[226] /* gENROE.Xl PARAM */ - data->simulationInfo->realParameter[227] /* gENROE.Xpd PARAM */) * (data->localData[0]->realVars[96] /* gENROE.id variable */) + (-data->localData[0]->realVars[8] /* gENROE.PSIkd STATE(1) */) - ((data->localData[0]->realVars[20] /* der(gENROE.PSIkd) STATE_DER */) * (data->simulationInfo->realParameter[219] /* gENROE.Tppd0 PARAM */));
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS99(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+30] = {0,4,4,4,4,3,3,3,3,4,4,4,4,4,4,2,2,6,6,6,6,5,5,7,7,3,2,11,8,8,11};
  const int rowIndex[147] = {21,22,23,24,16,20,21,22,21,22,23,24,16,20,21,22,7,11,12,7,8,9,10,11,12,8,9,10,5,6,21,22,5,6,21,22,15,17,18,19,15,17,18,19,13,14,15,17,13,14,15,17,26,27,28,29,2,3,26,27,28,29,2,3,26,27,28,29,2,3,4,25,28,29,2,3,4,25,26,27,1,2,4,24,25,1,3,4,23,25,11,14,15,16,17,18,19,12,13,15,17,18,19,20,0,28,29,0,1,5,6,9,16,19,20,21,22,23,24,25,5,7,8,9,10,11,12,17,6,7,8,9,10,11,12,15,4,5,6,8,16,18,20,21,22,23,24};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  inSysData->sparsePattern->leadindex = (unsigned int*) malloc((30+1)*sizeof(int));
  inSysData->sparsePattern->index = (unsigned int*) malloc(147*sizeof(int));
  inSysData->sparsePattern->numberOfNoneZeros = 147;
  inSysData->sparsePattern->colorCols = (unsigned int*) malloc(30*sizeof(int));
  inSysData->sparsePattern->maxColors = 10;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (30+1)*sizeof(int));
  
  for(i=2;i<30+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 147*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern->colorCols[29] = 1;
  inSysData->sparsePattern->colorCols[28] = 2;
  inSysData->sparsePattern->colorCols[26] = 3;
  inSysData->sparsePattern->colorCols[21] = 4;
  inSysData->sparsePattern->colorCols[27] = 4;
  inSysData->sparsePattern->colorCols[9] = 5;
  inSysData->sparsePattern->colorCols[20] = 5;
  inSysData->sparsePattern->colorCols[23] = 5;
  inSysData->sparsePattern->colorCols[8] = 6;
  inSysData->sparsePattern->colorCols[19] = 6;
  inSysData->sparsePattern->colorCols[22] = 6;
  inSysData->sparsePattern->colorCols[24] = 6;
  inSysData->sparsePattern->colorCols[3] = 7;
  inSysData->sparsePattern->colorCols[13] = 7;
  inSysData->sparsePattern->colorCols[18] = 7;
  inSysData->sparsePattern->colorCols[2] = 8;
  inSysData->sparsePattern->colorCols[12] = 8;
  inSysData->sparsePattern->colorCols[17] = 8;
  inSysData->sparsePattern->colorCols[1] = 9;
  inSysData->sparsePattern->colorCols[5] = 9;
  inSysData->sparsePattern->colorCols[6] = 9;
  inSysData->sparsePattern->colorCols[11] = 9;
  inSysData->sparsePattern->colorCols[16] = 9;
  inSysData->sparsePattern->colorCols[0] = 10;
  inSysData->sparsePattern->colorCols[4] = 10;
  inSysData->sparsePattern->colorCols[7] = 10;
  inSysData->sparsePattern->colorCols[10] = 10;
  inSysData->sparsePattern->colorCols[14] = 10;
  inSysData->sparsePattern->colorCols[15] = 10;
  inSysData->sparsePattern->colorCols[25] = 10;
}
void initializeStaticDataNLS99(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for pwLine.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[107].attribute /* pwLine.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[107].attribute /* pwLine.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[107].attribute /* pwLine.ir.re */.max;
  /* static nls data for pwLine1.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[119].attribute /* pwLine1.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[119].attribute /* pwLine1.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[119].attribute /* pwLine1.is.re */.max;
  /* static nls data for pwLine.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[106].attribute /* pwLine.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[106].attribute /* pwLine.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[106].attribute /* pwLine.ir.im */.max;
  /* static nls data for pwLine1.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[118].attribute /* pwLine1.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[118].attribute /* pwLine1.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[118].attribute /* pwLine1.is.im */.max;
  /* static nls data for pwLine4.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[140].attribute /* pwLine4.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[140].attribute /* pwLine4.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[140].attribute /* pwLine4.is.im */.max;
  /* static nls data for pwLine3.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[128].attribute /* pwLine3.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[128].attribute /* pwLine3.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[128].attribute /* pwLine3.ir.im */.max;
  /* static nls data for pwLine4.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[141].attribute /* pwLine4.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[141].attribute /* pwLine4.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[141].attribute /* pwLine4.is.re */.max;
  /* static nls data for pwLine3.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[129].attribute /* pwLine3.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[129].attribute /* pwLine3.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[129].attribute /* pwLine3.ir.re */.max;
  /* static nls data for pwLine3.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[131].attribute /* pwLine3.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[131].attribute /* pwLine3.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[131].attribute /* pwLine3.is.re */.max;
  /* static nls data for pwLine3.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[130].attribute /* pwLine3.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[130].attribute /* pwLine3.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[130].attribute /* pwLine3.is.im */.max;
  /* static nls data for pwLine1.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[116].attribute /* pwLine1.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[116].attribute /* pwLine1.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[116].attribute /* pwLine1.ir.im */.max;
  /* static nls data for pwLine1.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[117].attribute /* pwLine1.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[117].attribute /* pwLine1.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[117].attribute /* pwLine1.ir.re */.max;
  /* static nls data for gENCLS.id */
  sysData->nominal[i] = data->modelData->realVarsData[76].attribute /* gENCLS.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[76].attribute /* gENCLS.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[76].attribute /* gENCLS.id */.max;
  /* static nls data for gENCLS.iq */
  sysData->nominal[i] = data->modelData->realVarsData[77].attribute /* gENCLS.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[77].attribute /* gENCLS.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[77].attribute /* gENCLS.iq */.max;
  /* static nls data for gENROE.PSIkq */
  sysData->nominal[i] = data->modelData->realVarsData[9].attribute /* gENROE.PSIkq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[9].attribute /* gENROE.PSIkq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[9].attribute /* gENROE.PSIkq */.max;
  /* static nls data for gENROE.PSIkd */
  sysData->nominal[i] = data->modelData->realVarsData[8].attribute /* gENROE.PSIkd */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[8].attribute /* gENROE.PSIkd */.min;
  sysData->max[i++]   = data->modelData->realVarsData[8].attribute /* gENROE.PSIkd */.max;
  /* static nls data for gENROE.PSIppd */
  sysData->nominal[i] = data->modelData->realVarsData[88].attribute /* gENROE.PSIppd */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[88].attribute /* gENROE.PSIppd */.min;
  sysData->max[i++]   = data->modelData->realVarsData[88].attribute /* gENROE.PSIppd */.max;
  /* static nls data for gENROE.PSIppq */
  sysData->nominal[i] = data->modelData->realVarsData[89].attribute /* gENROE.PSIppq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[89].attribute /* gENROE.PSIppq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[89].attribute /* gENROE.PSIppq */.max;
  /* static nls data for gENROE.id */
  sysData->nominal[i] = data->modelData->realVarsData[96].attribute /* gENROE.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[96].attribute /* gENROE.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[96].attribute /* gENROE.id */.max;
  /* static nls data for gENROE.iq */
  sysData->nominal[i] = data->modelData->realVarsData[97].attribute /* gENROE.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[97].attribute /* gENROE.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[97].attribute /* gENROE.iq */.max;
  /* static nls data for pwLine.vs.re */
  sysData->nominal[i] = data->modelData->realVarsData[111].attribute /* pwLine.vs.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[111].attribute /* pwLine.vs.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[111].attribute /* pwLine.vs.re */.max;
  /* static nls data for pwLine.vs.im */
  sysData->nominal[i] = data->modelData->realVarsData[110].attribute /* pwLine.vs.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[110].attribute /* pwLine.vs.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[110].attribute /* pwLine.vs.im */.max;
  /* static nls data for pwLine1.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[121].attribute /* pwLine1.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[121].attribute /* pwLine1.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[121].attribute /* pwLine1.vr.re */.max;
  /* static nls data for pwLine1.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[120].attribute /* pwLine1.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[120].attribute /* pwLine1.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[120].attribute /* pwLine1.vr.im */.max;
  /* static nls data for eXST1.XADIFD */
  sysData->nominal[i] = data->modelData->realVarsData[65].attribute /* eXST1.XADIFD */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[65].attribute /* eXST1.XADIFD */.min;
  sysData->max[i++]   = data->modelData->realVarsData[65].attribute /* eXST1.XADIFD */.max;
  /* static nls data for eXST1.ECOMP */
  sysData->nominal[i] = data->modelData->realVarsData[57].attribute /* eXST1.ECOMP */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[57].attribute /* eXST1.ECOMP */.min;
  sysData->max[i++]   = data->modelData->realVarsData[57].attribute /* eXST1.ECOMP */.max;
  /* static nls data for pwLine1.vs.im */
  sysData->nominal[i] = data->modelData->realVarsData[122].attribute /* pwLine1.vs.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[122].attribute /* pwLine1.vs.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[122].attribute /* pwLine1.vs.im */.max;
  /* static nls data for pwLine3.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[132].attribute /* pwLine3.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[132].attribute /* pwLine3.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[132].attribute /* pwLine3.vr.im */.max;
  /* static nls data for pwLine3.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[133].attribute /* pwLine3.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[133].attribute /* pwLine3.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[133].attribute /* pwLine3.vr.re */.max;
  /* static nls data for pwLine1.vs.re */
  sysData->nominal[i] = data->modelData->realVarsData[123].attribute /* pwLine1.vs.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[123].attribute /* pwLine1.vs.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[123].attribute /* pwLine1.vs.re */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS99(sysData);
}

void getIterationVarsNLS99(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[107] /* pwLine.ir.re variable */;
  array[1] = data->localData[0]->realVars[119] /* pwLine1.is.re variable */;
  array[2] = data->localData[0]->realVars[106] /* pwLine.ir.im variable */;
  array[3] = data->localData[0]->realVars[118] /* pwLine1.is.im variable */;
  array[4] = data->localData[0]->realVars[140] /* pwLine4.is.im variable */;
  array[5] = data->localData[0]->realVars[128] /* pwLine3.ir.im variable */;
  array[6] = data->localData[0]->realVars[141] /* pwLine4.is.re variable */;
  array[7] = data->localData[0]->realVars[129] /* pwLine3.ir.re variable */;
  array[8] = data->localData[0]->realVars[131] /* pwLine3.is.re variable */;
  array[9] = data->localData[0]->realVars[130] /* pwLine3.is.im variable */;
  array[10] = data->localData[0]->realVars[116] /* pwLine1.ir.im variable */;
  array[11] = data->localData[0]->realVars[117] /* pwLine1.ir.re variable */;
  array[12] = data->localData[0]->realVars[76] /* gENCLS.id variable */;
  array[13] = data->localData[0]->realVars[77] /* gENCLS.iq variable */;
  array[14] = data->localData[0]->realVars[9] /* gENROE.PSIkq STATE(1) */;
  array[15] = data->localData[0]->realVars[8] /* gENROE.PSIkd STATE(1) */;
  array[16] = data->localData[0]->realVars[88] /* gENROE.PSIppd variable */;
  array[17] = data->localData[0]->realVars[89] /* gENROE.PSIppq variable */;
  array[18] = data->localData[0]->realVars[96] /* gENROE.id variable */;
  array[19] = data->localData[0]->realVars[97] /* gENROE.iq variable */;
  array[20] = data->localData[0]->realVars[111] /* pwLine.vs.re variable */;
  array[21] = data->localData[0]->realVars[110] /* pwLine.vs.im variable */;
  array[22] = data->localData[0]->realVars[121] /* pwLine1.vr.re variable */;
  array[23] = data->localData[0]->realVars[120] /* pwLine1.vr.im variable */;
  array[24] = data->localData[0]->realVars[65] /* eXST1.XADIFD variable */;
  array[25] = data->localData[0]->realVars[57] /* eXST1.ECOMP variable */;
  array[26] = data->localData[0]->realVars[122] /* pwLine1.vs.im variable */;
  array[27] = data->localData[0]->realVars[132] /* pwLine3.vr.im variable */;
  array[28] = data->localData[0]->realVars[133] /* pwLine3.vr.re variable */;
  array[29] = data->localData[0]->realVars[123] /* pwLine1.vs.re variable */;
}

/* Prototypes for the strict sets (Dynamic Tearing) */

/* Global constraints for the casual sets */
/* function initialize non-linear systems */
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_initialNonLinearSystem(int nNonLinearSystems, NONLINEAR_SYSTEM_DATA* nonLinearSystemData)
{
  
  nonLinearSystemData[4].equationIndex = 454;
  nonLinearSystemData[4].size = 1;
  nonLinearSystemData[4].homotopySupport = 0;
  nonLinearSystemData[4].mixedSystem = 0;
  nonLinearSystemData[4].residualFunc = residualFunc454;
  nonLinearSystemData[4].strictTearingFunctionCall = NULL;
  nonLinearSystemData[4].analyticalJacobianColumn = NULL;
  nonLinearSystemData[4].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[4].jacobianIndex = -1;
  nonLinearSystemData[4].initializeStaticNLSData = initializeStaticDataNLS454;
  nonLinearSystemData[4].getIterationVars = getIterationVarsNLS454;
  nonLinearSystemData[4].checkConstraints = NULL;
  
  
  nonLinearSystemData[3].equationIndex = 444;
  nonLinearSystemData[3].size = 1;
  nonLinearSystemData[3].homotopySupport = 0;
  nonLinearSystemData[3].mixedSystem = 1;
  nonLinearSystemData[3].residualFunc = residualFunc444;
  nonLinearSystemData[3].strictTearingFunctionCall = NULL;
  nonLinearSystemData[3].analyticalJacobianColumn = OpenIPSL_Examples_Controls_PSSE_ES_EXST1_functionJacNLSJac30_column;
  nonLinearSystemData[3].initialAnalyticalJacobian = OpenIPSL_Examples_Controls_PSSE_ES_EXST1_initialAnalyticJacobianNLSJac30;
  nonLinearSystemData[3].jacobianIndex = 1 /*jacInx*/;
  nonLinearSystemData[3].initializeStaticNLSData = initializeStaticDataNLS444;
  nonLinearSystemData[3].getIterationVars = getIterationVarsNLS444;
  nonLinearSystemData[3].checkConstraints = NULL;
  
  
  nonLinearSystemData[2].equationIndex = 418;
  nonLinearSystemData[2].size = 22;
  nonLinearSystemData[2].homotopySupport = 0;
  nonLinearSystemData[2].mixedSystem = 1;
  nonLinearSystemData[2].residualFunc = residualFunc418;
  nonLinearSystemData[2].strictTearingFunctionCall = NULL;
  nonLinearSystemData[2].analyticalJacobianColumn = OpenIPSL_Examples_Controls_PSSE_ES_EXST1_functionJacNLSJac29_column;
  nonLinearSystemData[2].initialAnalyticalJacobian = OpenIPSL_Examples_Controls_PSSE_ES_EXST1_initialAnalyticJacobianNLSJac29;
  nonLinearSystemData[2].jacobianIndex = 0 /*jacInx*/;
  nonLinearSystemData[2].initializeStaticNLSData = initializeStaticDataNLS418;
  nonLinearSystemData[2].getIterationVars = getIterationVarsNLS418;
  nonLinearSystemData[2].checkConstraints = NULL;
  
  
  nonLinearSystemData[1].equationIndex = 255;
  nonLinearSystemData[1].size = 30;
  nonLinearSystemData[1].homotopySupport = 0;
  nonLinearSystemData[1].mixedSystem = 1;
  nonLinearSystemData[1].residualFunc = residualFunc255;
  nonLinearSystemData[1].strictTearingFunctionCall = NULL;
  nonLinearSystemData[1].analyticalJacobianColumn = NULL;
  nonLinearSystemData[1].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[1].jacobianIndex = -1;
  nonLinearSystemData[1].initializeStaticNLSData = initializeStaticDataNLS255;
  nonLinearSystemData[1].getIterationVars = getIterationVarsNLS255;
  nonLinearSystemData[1].checkConstraints = NULL;
  
  
  nonLinearSystemData[0].equationIndex = 99;
  nonLinearSystemData[0].size = 30;
  nonLinearSystemData[0].homotopySupport = 1;
  nonLinearSystemData[0].mixedSystem = 1;
  nonLinearSystemData[0].residualFunc = residualFunc99;
  nonLinearSystemData[0].strictTearingFunctionCall = NULL;
  nonLinearSystemData[0].analyticalJacobianColumn = NULL;
  nonLinearSystemData[0].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[0].jacobianIndex = -1;
  nonLinearSystemData[0].initializeStaticNLSData = initializeStaticDataNLS99;
  nonLinearSystemData[0].getIterationVars = getIterationVarsNLS99;
  nonLinearSystemData[0].checkConstraints = NULL;
}

#if defined(__cplusplus)
}
#endif

