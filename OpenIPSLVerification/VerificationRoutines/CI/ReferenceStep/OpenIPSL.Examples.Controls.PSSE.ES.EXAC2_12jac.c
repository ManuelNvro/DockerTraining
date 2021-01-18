/* Jacobians 6 */
#include "OpenIPSL.Examples.Controls.PSSE.ES.EXAC2_model.h"
#include "OpenIPSL.Examples.Controls.PSSE.ES.EXAC2_12jac.h"
/* constant equations */
/* dynamic equations */

/*
equation index: 432
type: SIMPLE_ASSIGN
constantLoad.v.$pDERNLSJac26.dummyVarNLSJac26 = (pwLine1.vs.re * pwLine1.vs.re.SeedNLSJac26 + pwLine1.vs.im * pwLine1.vs.im.SeedNLSJac26) / sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_432(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,432};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[138] /* pwLine1.vs.re variable */;
  tmp1 = data->localData[0]->realVars[137] /* pwLine1.vs.im variable */;
  jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac26.dummyVarNLSJac26 JACOBIAN_DIFF_VAR */ = DIVISION((data->localData[0]->realVars[138] /* pwLine1.vs.re variable */) * (jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac26 SEED_VAR */) + (data->localData[0]->realVars[137] /* pwLine1.vs.im variable */) * (jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac26 SEED_VAR */),sqrt((tmp0 * tmp0) + (tmp1 * tmp1)),"sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)");
  TRACE_POP
}

/*
equation index: 433
type: SIMPLE_ASSIGN
constantLoad.kP.$pDERNLSJac26.dummyVarNLSJac26 = if constantLoad.v < constantLoad.PQBRAK then constantLoad.a1 * (-sin(constantLoad.v * constantLoad.wp)) * constantLoad.v.$pDERNLSJac26.dummyVarNLSJac26 * constantLoad.wp + constantLoad.b1 * cos(constantLoad.v * constantLoad.wp) * constantLoad.v.$pDERNLSJac26.dummyVarNLSJac26 * constantLoad.wp else 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_433(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,433};
  modelica_boolean tmp2;
  RELATIONHYSTERESIS(tmp2, data->localData[0]->realVars[55] /* constantLoad.v variable */, data->simulationInfo->realParameter[35] /* constantLoad.PQBRAK PARAM */, 8, Less);
  jacobian->tmpVars[1] /* constantLoad.kP.$pDERNLSJac26.dummyVarNLSJac26 JACOBIAN_DIFF_VAR */ = (tmp2?(data->simulationInfo->realParameter[55] /* constantLoad.a1 PARAM */) * (((-sin((data->localData[0]->realVars[55] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[75] /* constantLoad.wp PARAM */)))) * ((jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac26.dummyVarNLSJac26 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[75] /* constantLoad.wp PARAM */))) + (data->simulationInfo->realParameter[61] /* constantLoad.b1 PARAM */) * ((cos((data->localData[0]->realVars[55] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[75] /* constantLoad.wp PARAM */))) * ((jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac26.dummyVarNLSJac26 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[75] /* constantLoad.wp PARAM */))):0.0);
  TRACE_POP
}

/*
equation index: 434
type: SIMPLE_ASSIGN
constantLoad.kI.$pDERNLSJac26.dummyVarNLSJac26 = if constantLoad.v < 0.5 then constantLoad.a2 * constantLoad.b2 * (constantLoad.v ^ (-1.0 + constantLoad.b2) * (-exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2)) * constantLoad.a2 * constantLoad.b2 * constantLoad.v ^ (constantLoad.b2 - 1.0) * constantLoad.v.$pDERNLSJac26.dummyVarNLSJac26 + (if noEvent(constantLoad.v == 0.0) then 0.0 else constantLoad.v ^ (-1.0 + constantLoad.b2 - 1.0) * (-1.0 + constantLoad.b2) * constantLoad.v.$pDERNLSJac26.dummyVarNLSJac26) * exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2)) else 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_434(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,434};
  modelica_boolean tmp3;
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
  modelica_real tmp15;
  modelica_real tmp16;
  modelica_real tmp17;
  modelica_real tmp18;
  modelica_real tmp19;
  modelica_real tmp20;
  modelica_real tmp21;
  modelica_real tmp22;
  modelica_real tmp23;
  modelica_real tmp24;
  modelica_real tmp26;
  modelica_real tmp27;
  modelica_real tmp28;
  modelica_real tmp29;
  modelica_real tmp30;
  modelica_real tmp31;
  modelica_real tmp32;
  modelica_boolean tmp33;
  modelica_real tmp34;
  modelica_real tmp35;
  modelica_real tmp36;
  modelica_real tmp37;
  modelica_real tmp38;
  modelica_real tmp39;
  modelica_real tmp40;
  modelica_real tmp41;
  modelica_boolean tmp42;
  modelica_real tmp43;
  RELATIONHYSTERESIS(tmp3, data->localData[0]->realVars[55] /* constantLoad.v variable */, 0.5, 7, Less);
  tmp42 = (modelica_boolean)tmp3;
  if(tmp42)
  {
    tmp4 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = -1.0 + data->simulationInfo->realParameter[62] /* constantLoad.b2 PARAM */;
    if(tmp4 < 0.0 && tmp5 != 0.0)
    {
      tmp7 = modf(tmp5, &tmp8);
      
      if(tmp7 > 0.5)
      {
        tmp7 -= 1.0;
        tmp8 += 1.0;
      }
      else if(tmp7 < -0.5)
      {
        tmp7 += 1.0;
        tmp8 -= 1.0;
      }
      
      if(fabs(tmp7) < 1e-10)
        tmp6 = pow(tmp4, tmp8);
      else
      {
        tmp10 = modf(1.0/tmp5, &tmp9);
        if(tmp10 > 0.5)
        {
          tmp10 -= 1.0;
          tmp9 += 1.0;
        }
        else if(tmp10 < -0.5)
        {
          tmp10 += 1.0;
          tmp9 -= 1.0;
        }
        if(fabs(tmp10) < 1e-10 && ((unsigned long)tmp9 & 1))
        {
          tmp6 = -pow(-tmp4, tmp7)*pow(tmp4, tmp8);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp4, tmp5);
        }
      }
    }
    else
    {
      tmp6 = pow(tmp4, tmp5);
    }
    if(isnan(tmp6) || isinf(tmp6))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp4, tmp5);
    }tmp11 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp12 = data->simulationInfo->realParameter[62] /* constantLoad.b2 PARAM */;
    if(tmp11 < 0.0 && tmp12 != 0.0)
    {
      tmp14 = modf(tmp12, &tmp15);
      
      if(tmp14 > 0.5)
      {
        tmp14 -= 1.0;
        tmp15 += 1.0;
      }
      else if(tmp14 < -0.5)
      {
        tmp14 += 1.0;
        tmp15 -= 1.0;
      }
      
      if(fabs(tmp14) < 1e-10)
        tmp13 = pow(tmp11, tmp15);
      else
      {
        tmp17 = modf(1.0/tmp12, &tmp16);
        if(tmp17 > 0.5)
        {
          tmp17 -= 1.0;
          tmp16 += 1.0;
        }
        else if(tmp17 < -0.5)
        {
          tmp17 += 1.0;
          tmp16 -= 1.0;
        }
        if(fabs(tmp17) < 1e-10 && ((unsigned long)tmp16 & 1))
        {
          tmp13 = -pow(-tmp11, tmp14)*pow(tmp11, tmp15);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp11, tmp12);
        }
      }
    }
    else
    {
      tmp13 = pow(tmp11, tmp12);
    }
    if(isnan(tmp13) || isinf(tmp13))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp11, tmp12);
    }tmp18 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp19 = data->simulationInfo->realParameter[62] /* constantLoad.b2 PARAM */ - 1.0;
    if(tmp18 < 0.0 && tmp19 != 0.0)
    {
      tmp21 = modf(tmp19, &tmp22);
      
      if(tmp21 > 0.5)
      {
        tmp21 -= 1.0;
        tmp22 += 1.0;
      }
      else if(tmp21 < -0.5)
      {
        tmp21 += 1.0;
        tmp22 -= 1.0;
      }
      
      if(fabs(tmp21) < 1e-10)
        tmp20 = pow(tmp18, tmp22);
      else
      {
        tmp24 = modf(1.0/tmp19, &tmp23);
        if(tmp24 > 0.5)
        {
          tmp24 -= 1.0;
          tmp23 += 1.0;
        }
        else if(tmp24 < -0.5)
        {
          tmp24 += 1.0;
          tmp23 -= 1.0;
        }
        if(fabs(tmp24) < 1e-10 && ((unsigned long)tmp23 & 1))
        {
          tmp20 = -pow(-tmp18, tmp21)*pow(tmp18, tmp22);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp18, tmp19);
        }
      }
    }
    else
    {
      tmp20 = pow(tmp18, tmp19);
    }
    if(isnan(tmp20) || isinf(tmp20))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp18, tmp19);
    }tmp33 = (modelica_boolean)(data->localData[0]->realVars[55] /* constantLoad.v variable */ == 0.0);
    if(tmp33)
    {
      tmp34 = 0.0;
    }
    else
    {
      tmp26 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
      tmp27 = -1.0 + data->simulationInfo->realParameter[62] /* constantLoad.b2 PARAM */ - 1.0;
      if(tmp26 < 0.0 && tmp27 != 0.0)
      {
        tmp29 = modf(tmp27, &tmp30);
        
        if(tmp29 > 0.5)
        {
          tmp29 -= 1.0;
          tmp30 += 1.0;
        }
        else if(tmp29 < -0.5)
        {
          tmp29 += 1.0;
          tmp30 -= 1.0;
        }
        
        if(fabs(tmp29) < 1e-10)
          tmp28 = pow(tmp26, tmp30);
        else
        {
          tmp32 = modf(1.0/tmp27, &tmp31);
          if(tmp32 > 0.5)
          {
            tmp32 -= 1.0;
            tmp31 += 1.0;
          }
          else if(tmp32 < -0.5)
          {
            tmp32 += 1.0;
            tmp31 -= 1.0;
          }
          if(fabs(tmp32) < 1e-10 && ((unsigned long)tmp31 & 1))
          {
            tmp28 = -pow(-tmp26, tmp29)*pow(tmp26, tmp30);
          }
          else
          {
            throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp26, tmp27);
          }
        }
      }
      else
      {
        tmp28 = pow(tmp26, tmp27);
      }
      if(isnan(tmp28) || isinf(tmp28))
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp26, tmp27);
      }
      tmp34 = (tmp28) * ((-1.0 + data->simulationInfo->realParameter[62] /* constantLoad.b2 PARAM */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac26.dummyVarNLSJac26 JACOBIAN_DIFF_VAR */));
    }
    tmp35 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp36 = data->simulationInfo->realParameter[62] /* constantLoad.b2 PARAM */;
    if(tmp35 < 0.0 && tmp36 != 0.0)
    {
      tmp38 = modf(tmp36, &tmp39);
      
      if(tmp38 > 0.5)
      {
        tmp38 -= 1.0;
        tmp39 += 1.0;
      }
      else if(tmp38 < -0.5)
      {
        tmp38 += 1.0;
        tmp39 -= 1.0;
      }
      
      if(fabs(tmp38) < 1e-10)
        tmp37 = pow(tmp35, tmp39);
      else
      {
        tmp41 = modf(1.0/tmp36, &tmp40);
        if(tmp41 > 0.5)
        {
          tmp41 -= 1.0;
          tmp40 += 1.0;
        }
        else if(tmp41 < -0.5)
        {
          tmp41 += 1.0;
          tmp40 -= 1.0;
        }
        if(fabs(tmp41) < 1e-10 && ((unsigned long)tmp40 & 1))
        {
          tmp37 = -pow(-tmp35, tmp38)*pow(tmp35, tmp39);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp35, tmp36);
        }
      }
    }
    else
    {
      tmp37 = pow(tmp35, tmp36);
    }
    if(isnan(tmp37) || isinf(tmp37))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp35, tmp36);
    }
    tmp43 = (data->simulationInfo->realParameter[56] /* constantLoad.a2 PARAM */) * ((data->simulationInfo->realParameter[62] /* constantLoad.b2 PARAM */) * ((tmp6) * (((-exp(((-data->simulationInfo->realParameter[56] /* constantLoad.a2 PARAM */)) * (tmp13)))) * ((data->simulationInfo->realParameter[56] /* constantLoad.a2 PARAM */) * (((data->simulationInfo->realParameter[62] /* constantLoad.b2 PARAM */) * (tmp20)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac26.dummyVarNLSJac26 JACOBIAN_DIFF_VAR */)))) + (tmp34) * (exp(((-data->simulationInfo->realParameter[56] /* constantLoad.a2 PARAM */)) * (tmp37)))));
  }
  else
  {
    tmp43 = 0.0;
  }
  jacobian->tmpVars[2] /* constantLoad.kI.$pDERNLSJac26.dummyVarNLSJac26 JACOBIAN_DIFF_VAR */ = tmp43;
  TRACE_POP
}

/*
equation index: 435
type: SIMPLE_ASSIGN
constantLoad.Q.$pDERNLSJac26.dummyVarNLSJac26 = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.S_I.im * (constantLoad.kI * constantLoad.v.$pDERNLSJac26.dummyVarNLSJac26 + constantLoad.kI.$pDERNLSJac26.dummyVarNLSJac26 * constantLoad.v) + constantLoad.S_Y.im * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac26.dummyVarNLSJac26 + constantLoad.kP.$pDERNLSJac26.dummyVarNLSJac26 * (constantLoad.S_P.im + constantLoad.d_Q) else constantLoad.S_I.im * (constantLoad.kI * constantLoad.v.$pDERNLSJac26.dummyVarNLSJac26 + constantLoad.kI.$pDERNLSJac26.dummyVarNLSJac26 * constantLoad.v) + constantLoad.S_Y.im * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac26.dummyVarNLSJac26 + constantLoad.kP.$pDERNLSJac26.dummyVarNLSJac26 * constantLoad.S_P.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_435(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,435};
  modelica_boolean tmp44;
  modelica_boolean tmp45;
  RELATIONHYSTERESIS(tmp44, data->localData[0]->timeValue, data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */, 5, GreaterEq);
  RELATIONHYSTERESIS(tmp45, data->localData[0]->timeValue, data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[65] /* constantLoad.d_t PARAM */, 6, LessEq);
  jacobian->tmpVars[3] /* constantLoad.Q.$pDERNLSJac26.dummyVarNLSJac26 JACOBIAN_DIFF_VAR */ = ((tmp44 && tmp45)?(data->simulationInfo->realParameter[38] /* constantLoad.S_I.im PARAM */) * ((data->localData[0]->realVars[51] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac26.dummyVarNLSJac26 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[2] /* constantLoad.kI.$pDERNLSJac26.dummyVarNLSJac26 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[42] /* constantLoad.S_Y.im PARAM */) * (((2.0) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac26.dummyVarNLSJac26 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[1] /* constantLoad.kP.$pDERNLSJac26.dummyVarNLSJac26 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[40] /* constantLoad.S_P.im PARAM */ + data->simulationInfo->realParameter[64] /* constantLoad.d_Q PARAM */):(data->simulationInfo->realParameter[38] /* constantLoad.S_I.im PARAM */) * ((data->localData[0]->realVars[51] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac26.dummyVarNLSJac26 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[2] /* constantLoad.kI.$pDERNLSJac26.dummyVarNLSJac26 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[42] /* constantLoad.S_Y.im PARAM */) * (((2.0) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac26.dummyVarNLSJac26 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[1] /* constantLoad.kP.$pDERNLSJac26.dummyVarNLSJac26 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[40] /* constantLoad.S_P.im PARAM */));
  TRACE_POP
}

/*
equation index: 436
type: SIMPLE_ASSIGN
constantLoad.P.$pDERNLSJac26.dummyVarNLSJac26 = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.S_I.re * (constantLoad.kI * constantLoad.v.$pDERNLSJac26.dummyVarNLSJac26 + constantLoad.kI.$pDERNLSJac26.dummyVarNLSJac26 * constantLoad.v) + constantLoad.S_Y.re * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac26.dummyVarNLSJac26 + constantLoad.kP.$pDERNLSJac26.dummyVarNLSJac26 * (constantLoad.S_P.re + constantLoad.d_P) else constantLoad.S_I.re * (constantLoad.kI * constantLoad.v.$pDERNLSJac26.dummyVarNLSJac26 + constantLoad.kI.$pDERNLSJac26.dummyVarNLSJac26 * constantLoad.v) + constantLoad.S_Y.re * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac26.dummyVarNLSJac26 + constantLoad.kP.$pDERNLSJac26.dummyVarNLSJac26 * constantLoad.S_P.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_436(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,436};
  modelica_boolean tmp46;
  modelica_boolean tmp47;
  RELATIONHYSTERESIS(tmp46, data->localData[0]->timeValue, data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */, 5, GreaterEq);
  RELATIONHYSTERESIS(tmp47, data->localData[0]->timeValue, data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[65] /* constantLoad.d_t PARAM */, 6, LessEq);
  jacobian->tmpVars[4] /* constantLoad.P.$pDERNLSJac26.dummyVarNLSJac26 JACOBIAN_DIFF_VAR */ = ((tmp46 && tmp47)?(data->simulationInfo->realParameter[39] /* constantLoad.S_I.re PARAM */) * ((data->localData[0]->realVars[51] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac26.dummyVarNLSJac26 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[2] /* constantLoad.kI.$pDERNLSJac26.dummyVarNLSJac26 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[43] /* constantLoad.S_Y.re PARAM */) * (((2.0) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac26.dummyVarNLSJac26 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[1] /* constantLoad.kP.$pDERNLSJac26.dummyVarNLSJac26 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[41] /* constantLoad.S_P.re PARAM */ + data->simulationInfo->realParameter[63] /* constantLoad.d_P PARAM */):(data->simulationInfo->realParameter[39] /* constantLoad.S_I.re PARAM */) * ((data->localData[0]->realVars[51] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac26.dummyVarNLSJac26 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[2] /* constantLoad.kI.$pDERNLSJac26.dummyVarNLSJac26 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[43] /* constantLoad.S_Y.re PARAM */) * (((2.0) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac26.dummyVarNLSJac26 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[1] /* constantLoad.kP.$pDERNLSJac26.dummyVarNLSJac26 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[41] /* constantLoad.S_P.re PARAM */));
  TRACE_POP
}

/*
equation index: 437
type: SIMPLE_ASSIGN
gENROE.PSId.$pDERNLSJac26.dummyVarNLSJac26 = (-gENROE.Xppd) * gENROE.id.SeedNLSJac26
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_437(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,437};
  jacobian->tmpVars[5] /* gENROE.PSId.$pDERNLSJac26.dummyVarNLSJac26 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[279] /* gENROE.Xppd PARAM */)) * (jacobian->seedVars[17] /* gENROE.id.SeedNLSJac26 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 438
type: SIMPLE_ASSIGN
pwLine.is.re.$pDERNLSJac26.dummyVarNLSJac26 = ($cse7 * gENROE.iq.SeedNLSJac26 + $cse6 * gENROE.id.SeedNLSJac26) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_438(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,438};
  jacobian->tmpVars[6] /* pwLine.is.re.$pDERNLSJac26.dummyVarNLSJac26 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[31] /* $cse7 variable */) * (jacobian->seedVars[16] /* gENROE.iq.SeedNLSJac26 SEED_VAR */) + (data->localData[0]->realVars[30] /* $cse6 variable */) * (jacobian->seedVars[17] /* gENROE.id.SeedNLSJac26 SEED_VAR */)) * (data->simulationInfo->realParameter[225] /* gENROE.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 439
type: SIMPLE_ASSIGN
pwLine.is.im.$pDERNLSJac26.dummyVarNLSJac26 = ($cse6 * gENROE.iq.SeedNLSJac26 - $cse7 * gENROE.id.SeedNLSJac26) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_439(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,439};
  jacobian->tmpVars[7] /* pwLine.is.im.$pDERNLSJac26.dummyVarNLSJac26 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[30] /* $cse6 variable */) * (jacobian->seedVars[16] /* gENROE.iq.SeedNLSJac26 SEED_VAR */) - ((data->localData[0]->realVars[31] /* $cse7 variable */) * (jacobian->seedVars[17] /* gENROE.id.SeedNLSJac26 SEED_VAR */))) * (data->simulationInfo->realParameter[225] /* gENROE.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 440
type: SIMPLE_ASSIGN
gENROE.uq.$pDERNLSJac26.dummyVarNLSJac26 = gENROE.PSId.$pDERNLSJac26.dummyVarNLSJac26 - gENROE.R_a * gENROE.iq.SeedNLSJac26
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_440(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,440};
  jacobian->tmpVars[8] /* gENROE.uq.$pDERNLSJac26.dummyVarNLSJac26 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[5] /* gENROE.PSId.$pDERNLSJac26.dummyVarNLSJac26 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[262] /* gENROE.R_a PARAM */) * (jacobian->seedVars[16] /* gENROE.iq.SeedNLSJac26 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 441
type: SIMPLE_ASSIGN
gENROE.PSIq.$pDERNLSJac26.dummyVarNLSJac26 = (-gENROE.Xppq) * gENROE.iq.SeedNLSJac26
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_441(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,441};
  jacobian->tmpVars[9] /* gENROE.PSIq.$pDERNLSJac26.dummyVarNLSJac26 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[280] /* gENROE.Xppq PARAM */)) * (jacobian->seedVars[16] /* gENROE.iq.SeedNLSJac26 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 442
type: SIMPLE_ASSIGN
gENROE.ud.$pDERNLSJac26.dummyVarNLSJac26 = (-gENROE.PSIq.$pDERNLSJac26.dummyVarNLSJac26) - gENROE.R_a * gENROE.id.SeedNLSJac26
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_442(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,442};
  jacobian->tmpVars[10] /* gENROE.ud.$pDERNLSJac26.dummyVarNLSJac26 JACOBIAN_DIFF_VAR */ = (-jacobian->tmpVars[9] /* gENROE.PSIq.$pDERNLSJac26.dummyVarNLSJac26 JACOBIAN_DIFF_VAR */) - ((data->simulationInfo->realParameter[262] /* gENROE.R_a PARAM */) * (jacobian->seedVars[17] /* gENROE.id.SeedNLSJac26 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 443
type: SIMPLE_ASSIGN
pwLine.vs.im.$pDERNLSJac26.dummyVarNLSJac26 = $cse6 * gENROE.uq.$pDERNLSJac26.dummyVarNLSJac26 - $cse7 * gENROE.ud.$pDERNLSJac26.dummyVarNLSJac26
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_443(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,443};
  jacobian->tmpVars[11] /* pwLine.vs.im.$pDERNLSJac26.dummyVarNLSJac26 JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[30] /* $cse6 variable */) * (jacobian->tmpVars[8] /* gENROE.uq.$pDERNLSJac26.dummyVarNLSJac26 JACOBIAN_DIFF_VAR */) - ((data->localData[0]->realVars[31] /* $cse7 variable */) * (jacobian->tmpVars[10] /* gENROE.ud.$pDERNLSJac26.dummyVarNLSJac26 JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 444
type: SIMPLE_ASSIGN
pwLine.vs.re.$pDERNLSJac26.dummyVarNLSJac26 = $cse6 * gENROE.ud.$pDERNLSJac26.dummyVarNLSJac26 + $cse7 * gENROE.uq.$pDERNLSJac26.dummyVarNLSJac26
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_444(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,444};
  jacobian->tmpVars[12] /* pwLine.vs.re.$pDERNLSJac26.dummyVarNLSJac26 JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[30] /* $cse6 variable */) * (jacobian->tmpVars[10] /* gENROE.ud.$pDERNLSJac26.dummyVarNLSJac26 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[31] /* $cse7 variable */) * (jacobian->tmpVars[8] /* gENROE.uq.$pDERNLSJac26.dummyVarNLSJac26 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 445
type: SIMPLE_ASSIGN
gENCLS.p.ir.$pDERNLSJac26.dummyVarNLSJac26 = ((-$cse1) * gENCLS.id.SeedNLSJac26 - $cse2 * gENCLS.iq.SeedNLSJac26) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_445(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,445};
  jacobian->tmpVars[13] /* gENCLS.p.ir.$pDERNLSJac26.dummyVarNLSJac26 JACOBIAN_DIFF_VAR */ = (((-data->localData[0]->realVars[26] /* $cse1 variable */)) * (jacobian->seedVars[13] /* gENCLS.id.SeedNLSJac26 SEED_VAR */) - ((data->localData[0]->realVars[27] /* $cse2 variable */) * (jacobian->seedVars[12] /* gENCLS.iq.SeedNLSJac26 SEED_VAR */))) * (data->simulationInfo->realParameter[199] /* gENCLS.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 446
type: SIMPLE_ASSIGN
gENCLS.p.ii.$pDERNLSJac26.dummyVarNLSJac26 = ($cse2 * gENCLS.id.SeedNLSJac26 - $cse1 * gENCLS.iq.SeedNLSJac26) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_446(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,446};
  jacobian->tmpVars[14] /* gENCLS.p.ii.$pDERNLSJac26.dummyVarNLSJac26 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[27] /* $cse2 variable */) * (jacobian->seedVars[13] /* gENCLS.id.SeedNLSJac26 SEED_VAR */) - ((data->localData[0]->realVars[26] /* $cse1 variable */) * (jacobian->seedVars[12] /* gENCLS.iq.SeedNLSJac26 SEED_VAR */))) * (data->simulationInfo->realParameter[199] /* gENCLS.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 447
type: SIMPLE_ASSIGN
gENCLS.vq.$pDERNLSJac26.dummyVarNLSJac26 = (-gENCLS.R_a) * gENCLS.iq.SeedNLSJac26 - gENCLS.X_d * gENCLS.id.SeedNLSJac26
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_447(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,447};
  jacobian->tmpVars[15] /* gENCLS.vq.$pDERNLSJac26.dummyVarNLSJac26 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[205] /* gENCLS.R_a PARAM */)) * (jacobian->seedVars[12] /* gENCLS.iq.SeedNLSJac26 SEED_VAR */) - ((data->simulationInfo->realParameter[208] /* gENCLS.X_d PARAM */) * (jacobian->seedVars[13] /* gENCLS.id.SeedNLSJac26 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 448
type: SIMPLE_ASSIGN
gENCLS.vd.$pDERNLSJac26.dummyVarNLSJac26 = gENCLS.X_d * gENCLS.iq.SeedNLSJac26 - gENCLS.R_a * gENCLS.id.SeedNLSJac26
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_448(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,448};
  jacobian->tmpVars[16] /* gENCLS.vd.$pDERNLSJac26.dummyVarNLSJac26 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[208] /* gENCLS.X_d PARAM */) * (jacobian->seedVars[12] /* gENCLS.iq.SeedNLSJac26 SEED_VAR */) - ((data->simulationInfo->realParameter[205] /* gENCLS.R_a PARAM */) * (jacobian->seedVars[13] /* gENCLS.id.SeedNLSJac26 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 449
type: SIMPLE_ASSIGN
pwLine1.ir.re.$pDERNLSJac26.dummyVarNLSJac26 = (-pwLine4.ir.re.SeedNLSJac26) - gENCLS.p.ir.$pDERNLSJac26.dummyVarNLSJac26
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_449(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,449};
  jacobian->tmpVars[17] /* pwLine1.ir.re.$pDERNLSJac26.dummyVarNLSJac26 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[11] /* pwLine4.ir.re.SeedNLSJac26 SEED_VAR */) - jacobian->tmpVars[13] /* gENCLS.p.ir.$pDERNLSJac26.dummyVarNLSJac26 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 450
type: SIMPLE_ASSIGN
pwLine4.ir.im.$pDERNLSJac26.dummyVarNLSJac26 = (-pwLine1.ir.im.SeedNLSJac26) - gENCLS.p.ii.$pDERNLSJac26.dummyVarNLSJac26
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_450(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,450};
  jacobian->tmpVars[18] /* pwLine4.ir.im.$pDERNLSJac26.dummyVarNLSJac26 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[10] /* pwLine1.ir.im.SeedNLSJac26 SEED_VAR */) - jacobian->tmpVars[14] /* gENCLS.p.ii.$pDERNLSJac26.dummyVarNLSJac26 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 451
type: SIMPLE_ASSIGN
pwFault.p.ii.$pDERNLSJac26.dummyVarNLSJac26 = (-pwLine3.ir.im.SeedNLSJac26) - pwLine4.is.im.SeedNLSJac26
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_451(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,451};
  jacobian->tmpVars[19] /* pwFault.p.ii.$pDERNLSJac26.dummyVarNLSJac26 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[7] /* pwLine3.ir.im.SeedNLSJac26 SEED_VAR */) - jacobian->seedVars[6] /* pwLine4.is.im.SeedNLSJac26 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 452
type: SIMPLE_ASSIGN
pwFault.p.ir.$pDERNLSJac26.dummyVarNLSJac26 = (-pwLine3.ir.re.SeedNLSJac26) - pwLine4.is.re.SeedNLSJac26
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_452(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,452};
  jacobian->tmpVars[20] /* pwFault.p.ir.$pDERNLSJac26.dummyVarNLSJac26 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[5] /* pwLine3.ir.re.SeedNLSJac26 SEED_VAR */) - jacobian->seedVars[4] /* pwLine4.is.re.SeedNLSJac26 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 453
type: SIMPLE_ASSIGN
constantLoad.p.ir.$pDERNLSJac26.dummyVarNLSJac26 = (-pwLine.ir.re.SeedNLSJac26) - pwLine1.is.re.SeedNLSJac26 - pwLine3.is.re.SeedNLSJac26
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_453(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,453};
  jacobian->tmpVars[21] /* constantLoad.p.ir.$pDERNLSJac26.dummyVarNLSJac26 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[2] /* pwLine.ir.re.SeedNLSJac26 SEED_VAR */) - jacobian->seedVars[3] /* pwLine1.is.re.SeedNLSJac26 SEED_VAR */ - jacobian->seedVars[8] /* pwLine3.is.re.SeedNLSJac26 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 454
type: SIMPLE_ASSIGN
pwLine.ir.im.$pDERNLSJac26.dummyVarNLSJac26 = (-pwLine1.is.im.SeedNLSJac26) - pwLine3.is.im.SeedNLSJac26 - constantLoad.p.ii.SeedNLSJac26
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_454(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,454};
  jacobian->tmpVars[22] /* pwLine.ir.im.$pDERNLSJac26.dummyVarNLSJac26 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[1] /* pwLine1.is.im.SeedNLSJac26 SEED_VAR */) - jacobian->seedVars[9] /* pwLine3.is.im.SeedNLSJac26 SEED_VAR */ - jacobian->seedVars[0] /* constantLoad.p.ii.SeedNLSJac26 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 455
type: SIMPLE_ASSIGN
$res_NLSJac26_1.$pDERNLSJac26.dummyVarNLSJac26 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.is.re.SeedNLSJac26 else pwLine1.vs.re.SeedNLSJac26 - pwLine3.vr.re.SeedNLSJac26 - (pwLine3.Z.re * (pwLine3.is.re.SeedNLSJac26 + pwLine1.vs.im.SeedNLSJac26 * pwLine3.Y.im - pwLine1.vs.re.SeedNLSJac26 * pwLine3.Y.re) - pwLine3.Z.im * (pwLine3.is.im.SeedNLSJac26 + (-pwLine1.vs.re.SeedNLSJac26) * pwLine3.Y.im - pwLine1.vs.im.SeedNLSJac26 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_455(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,455};
  modelica_boolean tmp48;
  modelica_boolean tmp49;
  RELATIONHYSTERESIS(tmp48, data->localData[0]->timeValue, data->simulationInfo->realParameter[345] /* pwLine3.t1 PARAM */, 3, GreaterEq);
  RELATIONHYSTERESIS(tmp49, data->localData[0]->timeValue, data->simulationInfo->realParameter[346] /* pwLine3.t2 PARAM */, 4, Less);
  jacobian->resultVars[0] /* $res_NLSJac26_1.$pDERNLSJac26.dummyVarNLSJac26 JACOBIAN_VAR */ = ((tmp48 && tmp49)?jacobian->seedVars[8] /* pwLine3.is.re.SeedNLSJac26 SEED_VAR */:jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac26 SEED_VAR */ - jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac26 SEED_VAR */ - ((data->simulationInfo->realParameter[344] /* pwLine3.Z.re PARAM */) * (jacobian->seedVars[8] /* pwLine3.is.re.SeedNLSJac26 SEED_VAR */ + (jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac26 SEED_VAR */) * (data->simulationInfo->realParameter[341] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac26 SEED_VAR */) * (data->simulationInfo->realParameter[342] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[343] /* pwLine3.Z.im PARAM */) * (jacobian->seedVars[9] /* pwLine3.is.im.SeedNLSJac26 SEED_VAR */ + ((-jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac26 SEED_VAR */)) * (data->simulationInfo->realParameter[341] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac26 SEED_VAR */) * (data->simulationInfo->realParameter[342] /* pwLine3.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 456
type: SIMPLE_ASSIGN
$res_NLSJac26_2.$pDERNLSJac26.dummyVarNLSJac26 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.is.im.SeedNLSJac26 else pwLine1.vs.im.SeedNLSJac26 - pwLine3.vr.im.SeedNLSJac26 - (pwLine3.Z.re * (pwLine3.is.im.SeedNLSJac26 + (-pwLine1.vs.re.SeedNLSJac26) * pwLine3.Y.im - pwLine1.vs.im.SeedNLSJac26 * pwLine3.Y.re) + pwLine3.Z.im * (pwLine3.is.re.SeedNLSJac26 + pwLine1.vs.im.SeedNLSJac26 * pwLine3.Y.im - pwLine1.vs.re.SeedNLSJac26 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_456(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,456};
  modelica_boolean tmp50;
  modelica_boolean tmp51;
  RELATIONHYSTERESIS(tmp50, data->localData[0]->timeValue, data->simulationInfo->realParameter[345] /* pwLine3.t1 PARAM */, 3, GreaterEq);
  RELATIONHYSTERESIS(tmp51, data->localData[0]->timeValue, data->simulationInfo->realParameter[346] /* pwLine3.t2 PARAM */, 4, Less);
  jacobian->resultVars[1] /* $res_NLSJac26_2.$pDERNLSJac26.dummyVarNLSJac26 JACOBIAN_VAR */ = ((tmp50 && tmp51)?jacobian->seedVars[9] /* pwLine3.is.im.SeedNLSJac26 SEED_VAR */:jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac26 SEED_VAR */ - jacobian->seedVars[21] /* pwLine3.vr.im.SeedNLSJac26 SEED_VAR */ - ((data->simulationInfo->realParameter[344] /* pwLine3.Z.re PARAM */) * (jacobian->seedVars[9] /* pwLine3.is.im.SeedNLSJac26 SEED_VAR */ + ((-jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac26 SEED_VAR */)) * (data->simulationInfo->realParameter[341] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac26 SEED_VAR */) * (data->simulationInfo->realParameter[342] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[343] /* pwLine3.Z.im PARAM */) * (jacobian->seedVars[8] /* pwLine3.is.re.SeedNLSJac26 SEED_VAR */ + (jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac26 SEED_VAR */) * (data->simulationInfo->realParameter[341] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac26 SEED_VAR */) * (data->simulationInfo->realParameter[342] /* pwLine3.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 457
type: SIMPLE_ASSIGN
$res_NLSJac26_3.$pDERNLSJac26.dummyVarNLSJac26 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.ir.re.SeedNLSJac26 else pwLine3.vr.re.SeedNLSJac26 - pwLine1.vs.re.SeedNLSJac26 - (pwLine3.Z.re * (pwLine3.ir.re.SeedNLSJac26 + pwLine3.vr.im.SeedNLSJac26 * pwLine3.Y.im - pwLine3.vr.re.SeedNLSJac26 * pwLine3.Y.re) - pwLine3.Z.im * (pwLine3.ir.im.SeedNLSJac26 + (-pwLine3.vr.re.SeedNLSJac26) * pwLine3.Y.im - pwLine3.vr.im.SeedNLSJac26 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_457(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,457};
  modelica_boolean tmp52;
  modelica_boolean tmp53;
  RELATIONHYSTERESIS(tmp52, data->localData[0]->timeValue, data->simulationInfo->realParameter[345] /* pwLine3.t1 PARAM */, 3, GreaterEq);
  RELATIONHYSTERESIS(tmp53, data->localData[0]->timeValue, data->simulationInfo->realParameter[346] /* pwLine3.t2 PARAM */, 4, Less);
  jacobian->resultVars[2] /* $res_NLSJac26_3.$pDERNLSJac26.dummyVarNLSJac26 JACOBIAN_VAR */ = ((tmp52 && tmp53)?jacobian->seedVars[5] /* pwLine3.ir.re.SeedNLSJac26 SEED_VAR */:jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac26 SEED_VAR */ - jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac26 SEED_VAR */ - ((data->simulationInfo->realParameter[344] /* pwLine3.Z.re PARAM */) * (jacobian->seedVars[5] /* pwLine3.ir.re.SeedNLSJac26 SEED_VAR */ + (jacobian->seedVars[21] /* pwLine3.vr.im.SeedNLSJac26 SEED_VAR */) * (data->simulationInfo->realParameter[341] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac26 SEED_VAR */) * (data->simulationInfo->realParameter[342] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[343] /* pwLine3.Z.im PARAM */) * (jacobian->seedVars[7] /* pwLine3.ir.im.SeedNLSJac26 SEED_VAR */ + ((-jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac26 SEED_VAR */)) * (data->simulationInfo->realParameter[341] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine3.vr.im.SeedNLSJac26 SEED_VAR */) * (data->simulationInfo->realParameter[342] /* pwLine3.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 458
type: SIMPLE_ASSIGN
$res_NLSJac26_4.$pDERNLSJac26.dummyVarNLSJac26 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.ir.im.SeedNLSJac26 else pwLine3.vr.im.SeedNLSJac26 - pwLine1.vs.im.SeedNLSJac26 - (pwLine3.Z.re * (pwLine3.ir.im.SeedNLSJac26 + (-pwLine3.vr.re.SeedNLSJac26) * pwLine3.Y.im - pwLine3.vr.im.SeedNLSJac26 * pwLine3.Y.re) + pwLine3.Z.im * (pwLine3.ir.re.SeedNLSJac26 + pwLine3.vr.im.SeedNLSJac26 * pwLine3.Y.im - pwLine3.vr.re.SeedNLSJac26 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_458(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,458};
  modelica_boolean tmp54;
  modelica_boolean tmp55;
  RELATIONHYSTERESIS(tmp54, data->localData[0]->timeValue, data->simulationInfo->realParameter[345] /* pwLine3.t1 PARAM */, 3, GreaterEq);
  RELATIONHYSTERESIS(tmp55, data->localData[0]->timeValue, data->simulationInfo->realParameter[346] /* pwLine3.t2 PARAM */, 4, Less);
  jacobian->resultVars[3] /* $res_NLSJac26_4.$pDERNLSJac26.dummyVarNLSJac26 JACOBIAN_VAR */ = ((tmp54 && tmp55)?jacobian->seedVars[7] /* pwLine3.ir.im.SeedNLSJac26 SEED_VAR */:jacobian->seedVars[21] /* pwLine3.vr.im.SeedNLSJac26 SEED_VAR */ - jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac26 SEED_VAR */ - ((data->simulationInfo->realParameter[344] /* pwLine3.Z.re PARAM */) * (jacobian->seedVars[7] /* pwLine3.ir.im.SeedNLSJac26 SEED_VAR */ + ((-jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac26 SEED_VAR */)) * (data->simulationInfo->realParameter[341] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine3.vr.im.SeedNLSJac26 SEED_VAR */) * (data->simulationInfo->realParameter[342] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[343] /* pwLine3.Z.im PARAM */) * (jacobian->seedVars[5] /* pwLine3.ir.re.SeedNLSJac26 SEED_VAR */ + (jacobian->seedVars[21] /* pwLine3.vr.im.SeedNLSJac26 SEED_VAR */) * (data->simulationInfo->realParameter[341] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac26 SEED_VAR */) * (data->simulationInfo->realParameter[342] /* pwLine3.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 459
type: SIMPLE_ASSIGN
$res_NLSJac26_5.$pDERNLSJac26.dummyVarNLSJac26 = if time < pwFault.t1 then pwFault.p.ii.$pDERNLSJac26.dummyVarNLSJac26 else if time < pwFault.t2 and pwFault.ground then pwLine3.vr.re.SeedNLSJac26 else if time < pwFault.t2 then pwFault.p.ii.$pDERNLSJac26.dummyVarNLSJac26 - (pwFault.R * pwLine3.vr.im.SeedNLSJac26 - pwFault.X * pwLine3.vr.re.SeedNLSJac26) * (pwFault.X ^ 2.0 + pwFault.R ^ 2.0) / (pwFault.X ^ 2.0 + pwFault.R ^ 2.0) ^ 2.0 else pwFault.p.ii.$pDERNLSJac26.dummyVarNLSJac26
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_459(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,459};
  modelica_boolean tmp56;
  modelica_boolean tmp57;
  modelica_boolean tmp58;
  modelica_real tmp59;
  modelica_real tmp60;
  modelica_real tmp61;
  modelica_real tmp62;
  modelica_real tmp63;
  modelica_boolean tmp64;
  modelica_real tmp65;
  modelica_boolean tmp66;
  modelica_real tmp67;
  modelica_boolean tmp68;
  modelica_real tmp69;
  RELATIONHYSTERESIS(tmp56, data->localData[0]->timeValue, data->simulationInfo->realParameter[312] /* pwFault.t1 PARAM */, 11, Less);
  tmp68 = (modelica_boolean)tmp56;
  if(tmp68)
  {
    tmp69 = jacobian->tmpVars[19] /* pwFault.p.ii.$pDERNLSJac26.dummyVarNLSJac26 JACOBIAN_DIFF_VAR */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp57, data->localData[0]->timeValue, data->simulationInfo->realParameter[313] /* pwFault.t2 PARAM */, 12, Less);
    tmp66 = (modelica_boolean)(tmp57 && data->simulationInfo->booleanParameter[70] /* pwFault.ground PARAM */);
    if(tmp66)
    {
      tmp67 = jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac26 SEED_VAR */;
    }
    else
    {
      RELATIONHYSTERESIS(tmp58, data->localData[0]->timeValue, data->simulationInfo->realParameter[313] /* pwFault.t2 PARAM */, 12, Less);
      tmp64 = (modelica_boolean)tmp58;
      if(tmp64)
      {
        tmp59 = data->simulationInfo->realParameter[311] /* pwFault.X PARAM */;
        tmp60 = data->simulationInfo->realParameter[310] /* pwFault.R PARAM */;
        tmp61 = data->simulationInfo->realParameter[311] /* pwFault.X PARAM */;
        tmp62 = data->simulationInfo->realParameter[310] /* pwFault.R PARAM */;
        tmp63 = (tmp61 * tmp61) + (tmp62 * tmp62);
        tmp65 = jacobian->tmpVars[19] /* pwFault.p.ii.$pDERNLSJac26.dummyVarNLSJac26 JACOBIAN_DIFF_VAR */ - (DIVISION(((data->simulationInfo->realParameter[310] /* pwFault.R PARAM */) * (jacobian->seedVars[21] /* pwLine3.vr.im.SeedNLSJac26 SEED_VAR */) - ((data->simulationInfo->realParameter[311] /* pwFault.X PARAM */) * (jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac26 SEED_VAR */))) * ((tmp59 * tmp59) + (tmp60 * tmp60)),(tmp63 * tmp63),"(pwFault.X ^ 2.0 + pwFault.R ^ 2.0) ^ 2.0"));
      }
      else
      {
        tmp65 = jacobian->tmpVars[19] /* pwFault.p.ii.$pDERNLSJac26.dummyVarNLSJac26 JACOBIAN_DIFF_VAR */;
      }
      tmp67 = tmp65;
    }
    tmp69 = tmp67;
  }
  jacobian->resultVars[4] /* $res_NLSJac26_5.$pDERNLSJac26.dummyVarNLSJac26 JACOBIAN_VAR */ = tmp69;
  TRACE_POP
}

/*
equation index: 460
type: SIMPLE_ASSIGN
$res_NLSJac26_6.$pDERNLSJac26.dummyVarNLSJac26 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.is.re.SeedNLSJac26 else pwLine3.vr.re.SeedNLSJac26 - pwLine1.vr.re.SeedNLSJac26 - (pwLine4.Z.re * (pwLine4.is.re.SeedNLSJac26 + pwLine3.vr.im.SeedNLSJac26 * pwLine4.Y.im - pwLine3.vr.re.SeedNLSJac26 * pwLine4.Y.re) - pwLine4.Z.im * (pwLine4.is.im.SeedNLSJac26 + (-pwLine3.vr.re.SeedNLSJac26) * pwLine4.Y.im - pwLine3.vr.im.SeedNLSJac26 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_460(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,460};
  modelica_boolean tmp70;
  modelica_boolean tmp71;
  RELATIONHYSTERESIS(tmp70, data->localData[0]->timeValue, data->simulationInfo->realParameter[356] /* pwLine4.t1 PARAM */, 9, GreaterEq);
  RELATIONHYSTERESIS(tmp71, data->localData[0]->timeValue, data->simulationInfo->realParameter[357] /* pwLine4.t2 PARAM */, 10, Less);
  jacobian->resultVars[5] /* $res_NLSJac26_6.$pDERNLSJac26.dummyVarNLSJac26 JACOBIAN_VAR */ = ((tmp70 && tmp71)?jacobian->seedVars[4] /* pwLine4.is.re.SeedNLSJac26 SEED_VAR */:jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac26 SEED_VAR */ - jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac26 SEED_VAR */ - ((data->simulationInfo->realParameter[355] /* pwLine4.Z.re PARAM */) * (jacobian->seedVars[4] /* pwLine4.is.re.SeedNLSJac26 SEED_VAR */ + (jacobian->seedVars[21] /* pwLine3.vr.im.SeedNLSJac26 SEED_VAR */) * (data->simulationInfo->realParameter[352] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac26 SEED_VAR */) * (data->simulationInfo->realParameter[353] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[354] /* pwLine4.Z.im PARAM */) * (jacobian->seedVars[6] /* pwLine4.is.im.SeedNLSJac26 SEED_VAR */ + ((-jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac26 SEED_VAR */)) * (data->simulationInfo->realParameter[352] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine3.vr.im.SeedNLSJac26 SEED_VAR */) * (data->simulationInfo->realParameter[353] /* pwLine4.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 461
type: SIMPLE_ASSIGN
$res_NLSJac26_7.$pDERNLSJac26.dummyVarNLSJac26 = if time < pwFault.t1 then pwFault.p.ir.$pDERNLSJac26.dummyVarNLSJac26 else if time < pwFault.t2 and pwFault.ground then pwLine3.vr.im.SeedNLSJac26 else if time < pwFault.t2 then pwFault.p.ir.$pDERNLSJac26.dummyVarNLSJac26 - (pwFault.R * pwLine3.vr.re.SeedNLSJac26 + pwFault.X * pwLine3.vr.im.SeedNLSJac26) * (pwFault.R ^ 2.0 + pwFault.X ^ 2.0) / (pwFault.R ^ 2.0 + pwFault.X ^ 2.0) ^ 2.0 else pwFault.p.ir.$pDERNLSJac26.dummyVarNLSJac26
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_461(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,461};
  modelica_boolean tmp72;
  modelica_boolean tmp73;
  modelica_boolean tmp74;
  modelica_real tmp75;
  modelica_real tmp76;
  modelica_real tmp77;
  modelica_real tmp78;
  modelica_real tmp79;
  modelica_boolean tmp80;
  modelica_real tmp81;
  modelica_boolean tmp82;
  modelica_real tmp83;
  modelica_boolean tmp84;
  modelica_real tmp85;
  RELATIONHYSTERESIS(tmp72, data->localData[0]->timeValue, data->simulationInfo->realParameter[312] /* pwFault.t1 PARAM */, 11, Less);
  tmp84 = (modelica_boolean)tmp72;
  if(tmp84)
  {
    tmp85 = jacobian->tmpVars[20] /* pwFault.p.ir.$pDERNLSJac26.dummyVarNLSJac26 JACOBIAN_DIFF_VAR */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp73, data->localData[0]->timeValue, data->simulationInfo->realParameter[313] /* pwFault.t2 PARAM */, 12, Less);
    tmp82 = (modelica_boolean)(tmp73 && data->simulationInfo->booleanParameter[70] /* pwFault.ground PARAM */);
    if(tmp82)
    {
      tmp83 = jacobian->seedVars[21] /* pwLine3.vr.im.SeedNLSJac26 SEED_VAR */;
    }
    else
    {
      RELATIONHYSTERESIS(tmp74, data->localData[0]->timeValue, data->simulationInfo->realParameter[313] /* pwFault.t2 PARAM */, 12, Less);
      tmp80 = (modelica_boolean)tmp74;
      if(tmp80)
      {
        tmp75 = data->simulationInfo->realParameter[310] /* pwFault.R PARAM */;
        tmp76 = data->simulationInfo->realParameter[311] /* pwFault.X PARAM */;
        tmp77 = data->simulationInfo->realParameter[310] /* pwFault.R PARAM */;
        tmp78 = data->simulationInfo->realParameter[311] /* pwFault.X PARAM */;
        tmp79 = (tmp77 * tmp77) + (tmp78 * tmp78);
        tmp81 = jacobian->tmpVars[20] /* pwFault.p.ir.$pDERNLSJac26.dummyVarNLSJac26 JACOBIAN_DIFF_VAR */ - (DIVISION(((data->simulationInfo->realParameter[310] /* pwFault.R PARAM */) * (jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac26 SEED_VAR */) + (data->simulationInfo->realParameter[311] /* pwFault.X PARAM */) * (jacobian->seedVars[21] /* pwLine3.vr.im.SeedNLSJac26 SEED_VAR */)) * ((tmp75 * tmp75) + (tmp76 * tmp76)),(tmp79 * tmp79),"(pwFault.R ^ 2.0 + pwFault.X ^ 2.0) ^ 2.0"));
      }
      else
      {
        tmp81 = jacobian->tmpVars[20] /* pwFault.p.ir.$pDERNLSJac26.dummyVarNLSJac26 JACOBIAN_DIFF_VAR */;
      }
      tmp83 = tmp81;
    }
    tmp85 = tmp83;
  }
  jacobian->resultVars[6] /* $res_NLSJac26_7.$pDERNLSJac26.dummyVarNLSJac26 JACOBIAN_VAR */ = tmp85;
  TRACE_POP
}

/*
equation index: 462
type: SIMPLE_ASSIGN
$res_NLSJac26_8.$pDERNLSJac26.dummyVarNLSJac26 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.is.im.SeedNLSJac26 else pwLine3.vr.im.SeedNLSJac26 - pwLine1.vr.im.SeedNLSJac26 - (pwLine4.Z.re * (pwLine4.is.im.SeedNLSJac26 + (-pwLine3.vr.re.SeedNLSJac26) * pwLine4.Y.im - pwLine3.vr.im.SeedNLSJac26 * pwLine4.Y.re) + pwLine4.Z.im * (pwLine4.is.re.SeedNLSJac26 + pwLine3.vr.im.SeedNLSJac26 * pwLine4.Y.im - pwLine3.vr.re.SeedNLSJac26 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_462(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,462};
  modelica_boolean tmp86;
  modelica_boolean tmp87;
  RELATIONHYSTERESIS(tmp86, data->localData[0]->timeValue, data->simulationInfo->realParameter[356] /* pwLine4.t1 PARAM */, 9, GreaterEq);
  RELATIONHYSTERESIS(tmp87, data->localData[0]->timeValue, data->simulationInfo->realParameter[357] /* pwLine4.t2 PARAM */, 10, Less);
  jacobian->resultVars[7] /* $res_NLSJac26_8.$pDERNLSJac26.dummyVarNLSJac26 JACOBIAN_VAR */ = ((tmp86 && tmp87)?jacobian->seedVars[6] /* pwLine4.is.im.SeedNLSJac26 SEED_VAR */:jacobian->seedVars[21] /* pwLine3.vr.im.SeedNLSJac26 SEED_VAR */ - jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac26 SEED_VAR */ - ((data->simulationInfo->realParameter[355] /* pwLine4.Z.re PARAM */) * (jacobian->seedVars[6] /* pwLine4.is.im.SeedNLSJac26 SEED_VAR */ + ((-jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac26 SEED_VAR */)) * (data->simulationInfo->realParameter[352] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine3.vr.im.SeedNLSJac26 SEED_VAR */) * (data->simulationInfo->realParameter[353] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[354] /* pwLine4.Z.im PARAM */) * (jacobian->seedVars[4] /* pwLine4.is.re.SeedNLSJac26 SEED_VAR */ + (jacobian->seedVars[21] /* pwLine3.vr.im.SeedNLSJac26 SEED_VAR */) * (data->simulationInfo->realParameter[352] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac26 SEED_VAR */) * (data->simulationInfo->realParameter[353] /* pwLine4.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 463
type: SIMPLE_ASSIGN
$res_NLSJac26_9.$pDERNLSJac26.dummyVarNLSJac26 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.ir.im.$pDERNLSJac26.dummyVarNLSJac26 else pwLine1.vr.im.SeedNLSJac26 - pwLine3.vr.im.SeedNLSJac26 - (pwLine4.Z.re * (pwLine4.ir.im.$pDERNLSJac26.dummyVarNLSJac26 + (-pwLine1.vr.re.SeedNLSJac26) * pwLine4.Y.im - pwLine1.vr.im.SeedNLSJac26 * pwLine4.Y.re) + pwLine4.Z.im * (pwLine4.ir.re.SeedNLSJac26 + pwLine1.vr.im.SeedNLSJac26 * pwLine4.Y.im - pwLine1.vr.re.SeedNLSJac26 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_463(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,463};
  modelica_boolean tmp88;
  modelica_boolean tmp89;
  RELATIONHYSTERESIS(tmp88, data->localData[0]->timeValue, data->simulationInfo->realParameter[356] /* pwLine4.t1 PARAM */, 9, GreaterEq);
  RELATIONHYSTERESIS(tmp89, data->localData[0]->timeValue, data->simulationInfo->realParameter[357] /* pwLine4.t2 PARAM */, 10, Less);
  jacobian->resultVars[8] /* $res_NLSJac26_9.$pDERNLSJac26.dummyVarNLSJac26 JACOBIAN_VAR */ = ((tmp88 && tmp89)?jacobian->tmpVars[18] /* pwLine4.ir.im.$pDERNLSJac26.dummyVarNLSJac26 JACOBIAN_DIFF_VAR */:jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac26 SEED_VAR */ - jacobian->seedVars[21] /* pwLine3.vr.im.SeedNLSJac26 SEED_VAR */ - ((data->simulationInfo->realParameter[355] /* pwLine4.Z.re PARAM */) * (jacobian->tmpVars[18] /* pwLine4.ir.im.$pDERNLSJac26.dummyVarNLSJac26 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac26 SEED_VAR */)) * (data->simulationInfo->realParameter[352] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac26 SEED_VAR */) * (data->simulationInfo->realParameter[353] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[354] /* pwLine4.Z.im PARAM */) * (jacobian->seedVars[11] /* pwLine4.ir.re.SeedNLSJac26 SEED_VAR */ + (jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac26 SEED_VAR */) * (data->simulationInfo->realParameter[352] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac26 SEED_VAR */) * (data->simulationInfo->realParameter[353] /* pwLine4.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 464
type: SIMPLE_ASSIGN
$res_NLSJac26_10.$pDERNLSJac26.dummyVarNLSJac26 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.ir.im.SeedNLSJac26 else pwLine1.vr.im.SeedNLSJac26 - pwLine1.vs.im.SeedNLSJac26 - (pwLine1.Z.re * (pwLine1.ir.im.SeedNLSJac26 + (-pwLine1.vr.re.SeedNLSJac26) * pwLine1.Y.im - pwLine1.vr.im.SeedNLSJac26 * pwLine1.Y.re) + pwLine1.Z.im * (pwLine1.ir.re.$pDERNLSJac26.dummyVarNLSJac26 + pwLine1.vr.im.SeedNLSJac26 * pwLine1.Y.im - pwLine1.vr.re.SeedNLSJac26 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_464(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,464};
  modelica_boolean tmp90;
  modelica_boolean tmp91;
  RELATIONHYSTERESIS(tmp90, data->localData[0]->timeValue, data->simulationInfo->realParameter[334] /* pwLine1.t1 PARAM */, 13, GreaterEq);
  RELATIONHYSTERESIS(tmp91, data->localData[0]->timeValue, data->simulationInfo->realParameter[335] /* pwLine1.t2 PARAM */, 14, Less);
  jacobian->resultVars[9] /* $res_NLSJac26_10.$pDERNLSJac26.dummyVarNLSJac26 JACOBIAN_VAR */ = ((tmp90 && tmp91)?jacobian->seedVars[10] /* pwLine1.ir.im.SeedNLSJac26 SEED_VAR */:jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac26 SEED_VAR */ - jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac26 SEED_VAR */ - ((data->simulationInfo->realParameter[333] /* pwLine1.Z.re PARAM */) * (jacobian->seedVars[10] /* pwLine1.ir.im.SeedNLSJac26 SEED_VAR */ + ((-jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac26 SEED_VAR */)) * (data->simulationInfo->realParameter[330] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac26 SEED_VAR */) * (data->simulationInfo->realParameter[331] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[332] /* pwLine1.Z.im PARAM */) * (jacobian->tmpVars[17] /* pwLine1.ir.re.$pDERNLSJac26.dummyVarNLSJac26 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac26 SEED_VAR */) * (data->simulationInfo->realParameter[330] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac26 SEED_VAR */) * (data->simulationInfo->realParameter[331] /* pwLine1.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 465
type: SIMPLE_ASSIGN
$res_NLSJac26_11.$pDERNLSJac26.dummyVarNLSJac26 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.ir.re.SeedNLSJac26 else pwLine1.vr.re.SeedNLSJac26 - pwLine3.vr.re.SeedNLSJac26 - (pwLine4.Z.re * (pwLine4.ir.re.SeedNLSJac26 + pwLine1.vr.im.SeedNLSJac26 * pwLine4.Y.im - pwLine1.vr.re.SeedNLSJac26 * pwLine4.Y.re) - pwLine4.Z.im * (pwLine4.ir.im.$pDERNLSJac26.dummyVarNLSJac26 + (-pwLine1.vr.re.SeedNLSJac26) * pwLine4.Y.im - pwLine1.vr.im.SeedNLSJac26 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_465(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,465};
  modelica_boolean tmp92;
  modelica_boolean tmp93;
  RELATIONHYSTERESIS(tmp92, data->localData[0]->timeValue, data->simulationInfo->realParameter[356] /* pwLine4.t1 PARAM */, 9, GreaterEq);
  RELATIONHYSTERESIS(tmp93, data->localData[0]->timeValue, data->simulationInfo->realParameter[357] /* pwLine4.t2 PARAM */, 10, Less);
  jacobian->resultVars[10] /* $res_NLSJac26_11.$pDERNLSJac26.dummyVarNLSJac26 JACOBIAN_VAR */ = ((tmp92 && tmp93)?jacobian->seedVars[11] /* pwLine4.ir.re.SeedNLSJac26 SEED_VAR */:jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac26 SEED_VAR */ - jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac26 SEED_VAR */ - ((data->simulationInfo->realParameter[355] /* pwLine4.Z.re PARAM */) * (jacobian->seedVars[11] /* pwLine4.ir.re.SeedNLSJac26 SEED_VAR */ + (jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac26 SEED_VAR */) * (data->simulationInfo->realParameter[352] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac26 SEED_VAR */) * (data->simulationInfo->realParameter[353] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[354] /* pwLine4.Z.im PARAM */) * (jacobian->tmpVars[18] /* pwLine4.ir.im.$pDERNLSJac26.dummyVarNLSJac26 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac26 SEED_VAR */)) * (data->simulationInfo->realParameter[352] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac26 SEED_VAR */) * (data->simulationInfo->realParameter[353] /* pwLine4.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 466
type: SIMPLE_ASSIGN
$res_NLSJac26_12.$pDERNLSJac26.dummyVarNLSJac26 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.ir.re.$pDERNLSJac26.dummyVarNLSJac26 else pwLine1.vr.re.SeedNLSJac26 - pwLine1.vs.re.SeedNLSJac26 - (pwLine1.Z.re * (pwLine1.ir.re.$pDERNLSJac26.dummyVarNLSJac26 + pwLine1.vr.im.SeedNLSJac26 * pwLine1.Y.im - pwLine1.vr.re.SeedNLSJac26 * pwLine1.Y.re) - pwLine1.Z.im * (pwLine1.ir.im.SeedNLSJac26 + (-pwLine1.vr.re.SeedNLSJac26) * pwLine1.Y.im - pwLine1.vr.im.SeedNLSJac26 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_466(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,466};
  modelica_boolean tmp94;
  modelica_boolean tmp95;
  RELATIONHYSTERESIS(tmp94, data->localData[0]->timeValue, data->simulationInfo->realParameter[334] /* pwLine1.t1 PARAM */, 13, GreaterEq);
  RELATIONHYSTERESIS(tmp95, data->localData[0]->timeValue, data->simulationInfo->realParameter[335] /* pwLine1.t2 PARAM */, 14, Less);
  jacobian->resultVars[11] /* $res_NLSJac26_12.$pDERNLSJac26.dummyVarNLSJac26 JACOBIAN_VAR */ = ((tmp94 && tmp95)?jacobian->tmpVars[17] /* pwLine1.ir.re.$pDERNLSJac26.dummyVarNLSJac26 JACOBIAN_DIFF_VAR */:jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac26 SEED_VAR */ - jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac26 SEED_VAR */ - ((data->simulationInfo->realParameter[333] /* pwLine1.Z.re PARAM */) * (jacobian->tmpVars[17] /* pwLine1.ir.re.$pDERNLSJac26.dummyVarNLSJac26 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac26 SEED_VAR */) * (data->simulationInfo->realParameter[330] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac26 SEED_VAR */) * (data->simulationInfo->realParameter[331] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[332] /* pwLine1.Z.im PARAM */) * (jacobian->seedVars[10] /* pwLine1.ir.im.SeedNLSJac26 SEED_VAR */ + ((-jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac26 SEED_VAR */)) * (data->simulationInfo->realParameter[330] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac26 SEED_VAR */) * (data->simulationInfo->realParameter[331] /* pwLine1.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 467
type: SIMPLE_ASSIGN
$res_NLSJac26_13.$pDERNLSJac26.dummyVarNLSJac26 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.is.im.SeedNLSJac26 else pwLine1.vs.im.SeedNLSJac26 - pwLine1.vr.im.SeedNLSJac26 - (pwLine1.Z.re * (pwLine1.is.im.SeedNLSJac26 + (-pwLine1.vs.re.SeedNLSJac26) * pwLine1.Y.im - pwLine1.vs.im.SeedNLSJac26 * pwLine1.Y.re) + pwLine1.Z.im * (pwLine1.is.re.SeedNLSJac26 + pwLine1.vs.im.SeedNLSJac26 * pwLine1.Y.im - pwLine1.vs.re.SeedNLSJac26 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_467(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,467};
  modelica_boolean tmp96;
  modelica_boolean tmp97;
  RELATIONHYSTERESIS(tmp96, data->localData[0]->timeValue, data->simulationInfo->realParameter[334] /* pwLine1.t1 PARAM */, 13, GreaterEq);
  RELATIONHYSTERESIS(tmp97, data->localData[0]->timeValue, data->simulationInfo->realParameter[335] /* pwLine1.t2 PARAM */, 14, Less);
  jacobian->resultVars[12] /* $res_NLSJac26_13.$pDERNLSJac26.dummyVarNLSJac26 JACOBIAN_VAR */ = ((tmp96 && tmp97)?jacobian->seedVars[1] /* pwLine1.is.im.SeedNLSJac26 SEED_VAR */:jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac26 SEED_VAR */ - jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac26 SEED_VAR */ - ((data->simulationInfo->realParameter[333] /* pwLine1.Z.re PARAM */) * (jacobian->seedVars[1] /* pwLine1.is.im.SeedNLSJac26 SEED_VAR */ + ((-jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac26 SEED_VAR */)) * (data->simulationInfo->realParameter[330] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac26 SEED_VAR */) * (data->simulationInfo->realParameter[331] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[332] /* pwLine1.Z.im PARAM */) * (jacobian->seedVars[3] /* pwLine1.is.re.SeedNLSJac26 SEED_VAR */ + (jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac26 SEED_VAR */) * (data->simulationInfo->realParameter[330] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac26 SEED_VAR */) * (data->simulationInfo->realParameter[331] /* pwLine1.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 468
type: SIMPLE_ASSIGN
$res_NLSJac26_14.$pDERNLSJac26.dummyVarNLSJac26 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.ir.im.$pDERNLSJac26.dummyVarNLSJac26 else pwLine1.vs.im.SeedNLSJac26 - pwLine.vs.im.$pDERNLSJac26.dummyVarNLSJac26 - (pwLine.Z.re * (pwLine.ir.im.$pDERNLSJac26.dummyVarNLSJac26 + (-pwLine1.vs.re.SeedNLSJac26) * pwLine.Y.im - pwLine1.vs.im.SeedNLSJac26 * pwLine.Y.re) + pwLine.Z.im * (pwLine.ir.re.SeedNLSJac26 + pwLine1.vs.im.SeedNLSJac26 * pwLine.Y.im - pwLine1.vs.re.SeedNLSJac26 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_468(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,468};
  modelica_boolean tmp98;
  modelica_boolean tmp99;
  RELATIONHYSTERESIS(tmp98, data->localData[0]->timeValue, data->simulationInfo->realParameter[323] /* pwLine.t1 PARAM */, 1, GreaterEq);
  RELATIONHYSTERESIS(tmp99, data->localData[0]->timeValue, data->simulationInfo->realParameter[324] /* pwLine.t2 PARAM */, 2, Less);
  jacobian->resultVars[13] /* $res_NLSJac26_14.$pDERNLSJac26.dummyVarNLSJac26 JACOBIAN_VAR */ = ((tmp98 && tmp99)?jacobian->tmpVars[22] /* pwLine.ir.im.$pDERNLSJac26.dummyVarNLSJac26 JACOBIAN_DIFF_VAR */:jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac26 SEED_VAR */ - jacobian->tmpVars[11] /* pwLine.vs.im.$pDERNLSJac26.dummyVarNLSJac26 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[322] /* pwLine.Z.re PARAM */) * (jacobian->tmpVars[22] /* pwLine.ir.im.$pDERNLSJac26.dummyVarNLSJac26 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac26 SEED_VAR */)) * (data->simulationInfo->realParameter[319] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac26 SEED_VAR */) * (data->simulationInfo->realParameter[320] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[321] /* pwLine.Z.im PARAM */) * (jacobian->seedVars[2] /* pwLine.ir.re.SeedNLSJac26 SEED_VAR */ + (jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac26 SEED_VAR */) * (data->simulationInfo->realParameter[319] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac26 SEED_VAR */) * (data->simulationInfo->realParameter[320] /* pwLine.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 469
type: SIMPLE_ASSIGN
$res_NLSJac26_15.$pDERNLSJac26.dummyVarNLSJac26 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.is.im.$pDERNLSJac26.dummyVarNLSJac26 else pwLine.vs.im.$pDERNLSJac26.dummyVarNLSJac26 - pwLine1.vs.im.SeedNLSJac26 - (pwLine.Z.re * (pwLine.is.im.$pDERNLSJac26.dummyVarNLSJac26 + (-pwLine.vs.re.$pDERNLSJac26.dummyVarNLSJac26) * pwLine.Y.im - pwLine.vs.im.$pDERNLSJac26.dummyVarNLSJac26 * pwLine.Y.re) + pwLine.Z.im * (pwLine.is.re.$pDERNLSJac26.dummyVarNLSJac26 + pwLine.vs.im.$pDERNLSJac26.dummyVarNLSJac26 * pwLine.Y.im - pwLine.vs.re.$pDERNLSJac26.dummyVarNLSJac26 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_469(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,469};
  modelica_boolean tmp100;
  modelica_boolean tmp101;
  RELATIONHYSTERESIS(tmp100, data->localData[0]->timeValue, data->simulationInfo->realParameter[323] /* pwLine.t1 PARAM */, 1, GreaterEq);
  RELATIONHYSTERESIS(tmp101, data->localData[0]->timeValue, data->simulationInfo->realParameter[324] /* pwLine.t2 PARAM */, 2, Less);
  jacobian->resultVars[14] /* $res_NLSJac26_15.$pDERNLSJac26.dummyVarNLSJac26 JACOBIAN_VAR */ = ((tmp100 && tmp101)?jacobian->tmpVars[7] /* pwLine.is.im.$pDERNLSJac26.dummyVarNLSJac26 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[11] /* pwLine.vs.im.$pDERNLSJac26.dummyVarNLSJac26 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac26 SEED_VAR */ - ((data->simulationInfo->realParameter[322] /* pwLine.Z.re PARAM */) * (jacobian->tmpVars[7] /* pwLine.is.im.$pDERNLSJac26.dummyVarNLSJac26 JACOBIAN_DIFF_VAR */ + ((-jacobian->tmpVars[12] /* pwLine.vs.re.$pDERNLSJac26.dummyVarNLSJac26 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[319] /* pwLine.Y.im PARAM */) - ((jacobian->tmpVars[11] /* pwLine.vs.im.$pDERNLSJac26.dummyVarNLSJac26 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[320] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[321] /* pwLine.Z.im PARAM */) * (jacobian->tmpVars[6] /* pwLine.is.re.$pDERNLSJac26.dummyVarNLSJac26 JACOBIAN_DIFF_VAR */ + (jacobian->tmpVars[11] /* pwLine.vs.im.$pDERNLSJac26.dummyVarNLSJac26 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[319] /* pwLine.Y.im PARAM */) - ((jacobian->tmpVars[12] /* pwLine.vs.re.$pDERNLSJac26.dummyVarNLSJac26 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[320] /* pwLine.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 470
type: SIMPLE_ASSIGN
$res_NLSJac26_16.$pDERNLSJac26.dummyVarNLSJac26 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.is.re.$pDERNLSJac26.dummyVarNLSJac26 else pwLine.vs.re.$pDERNLSJac26.dummyVarNLSJac26 - pwLine1.vs.re.SeedNLSJac26 - (pwLine.Z.re * (pwLine.is.re.$pDERNLSJac26.dummyVarNLSJac26 + pwLine.vs.im.$pDERNLSJac26.dummyVarNLSJac26 * pwLine.Y.im - pwLine.vs.re.$pDERNLSJac26.dummyVarNLSJac26 * pwLine.Y.re) - pwLine.Z.im * (pwLine.is.im.$pDERNLSJac26.dummyVarNLSJac26 + (-pwLine.vs.re.$pDERNLSJac26.dummyVarNLSJac26) * pwLine.Y.im - pwLine.vs.im.$pDERNLSJac26.dummyVarNLSJac26 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_470(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,470};
  modelica_boolean tmp102;
  modelica_boolean tmp103;
  RELATIONHYSTERESIS(tmp102, data->localData[0]->timeValue, data->simulationInfo->realParameter[323] /* pwLine.t1 PARAM */, 1, GreaterEq);
  RELATIONHYSTERESIS(tmp103, data->localData[0]->timeValue, data->simulationInfo->realParameter[324] /* pwLine.t2 PARAM */, 2, Less);
  jacobian->resultVars[15] /* $res_NLSJac26_16.$pDERNLSJac26.dummyVarNLSJac26 JACOBIAN_VAR */ = ((tmp102 && tmp103)?jacobian->tmpVars[6] /* pwLine.is.re.$pDERNLSJac26.dummyVarNLSJac26 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[12] /* pwLine.vs.re.$pDERNLSJac26.dummyVarNLSJac26 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac26 SEED_VAR */ - ((data->simulationInfo->realParameter[322] /* pwLine.Z.re PARAM */) * (jacobian->tmpVars[6] /* pwLine.is.re.$pDERNLSJac26.dummyVarNLSJac26 JACOBIAN_DIFF_VAR */ + (jacobian->tmpVars[11] /* pwLine.vs.im.$pDERNLSJac26.dummyVarNLSJac26 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[319] /* pwLine.Y.im PARAM */) - ((jacobian->tmpVars[12] /* pwLine.vs.re.$pDERNLSJac26.dummyVarNLSJac26 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[320] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[321] /* pwLine.Z.im PARAM */) * (jacobian->tmpVars[7] /* pwLine.is.im.$pDERNLSJac26.dummyVarNLSJac26 JACOBIAN_DIFF_VAR */ + ((-jacobian->tmpVars[12] /* pwLine.vs.re.$pDERNLSJac26.dummyVarNLSJac26 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[319] /* pwLine.Y.im PARAM */) - ((jacobian->tmpVars[11] /* pwLine.vs.im.$pDERNLSJac26.dummyVarNLSJac26 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[320] /* pwLine.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 471
type: SIMPLE_ASSIGN
$res_NLSJac26_17.$pDERNLSJac26.dummyVarNLSJac26 = pwLine1.vs.im * constantLoad.p.ir.$pDERNLSJac26.dummyVarNLSJac26 + pwLine1.vs.im.SeedNLSJac26 * constantLoad.p.ir + (-pwLine1.vs.re.SeedNLSJac26) * constantLoad.p.ii - constantLoad.Q.$pDERNLSJac26.dummyVarNLSJac26 - pwLine1.vs.re * constantLoad.p.ii.SeedNLSJac26
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_471(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,471};
  jacobian->resultVars[16] /* $res_NLSJac26_17.$pDERNLSJac26.dummyVarNLSJac26 JACOBIAN_VAR */ = (data->localData[0]->realVars[137] /* pwLine1.vs.im variable */) * (jacobian->tmpVars[21] /* constantLoad.p.ir.$pDERNLSJac26.dummyVarNLSJac26 JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac26 SEED_VAR */) * (data->localData[0]->realVars[54] /* constantLoad.p.ir variable */) + ((-jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac26 SEED_VAR */)) * (data->localData[0]->realVars[53] /* constantLoad.p.ii variable */) - jacobian->tmpVars[3] /* constantLoad.Q.$pDERNLSJac26.dummyVarNLSJac26 JACOBIAN_DIFF_VAR */ - ((data->localData[0]->realVars[138] /* pwLine1.vs.re variable */) * (jacobian->seedVars[0] /* constantLoad.p.ii.SeedNLSJac26 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 472
type: SIMPLE_ASSIGN
$res_NLSJac26_18.$pDERNLSJac26.dummyVarNLSJac26 = pwLine1.vs.im * constantLoad.p.ii.SeedNLSJac26 + pwLine1.vs.im.SeedNLSJac26 * constantLoad.p.ii + pwLine1.vs.re * constantLoad.p.ir.$pDERNLSJac26.dummyVarNLSJac26 + pwLine1.vs.re.SeedNLSJac26 * constantLoad.p.ir - constantLoad.P.$pDERNLSJac26.dummyVarNLSJac26
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_472(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,472};
  jacobian->resultVars[17] /* $res_NLSJac26_18.$pDERNLSJac26.dummyVarNLSJac26 JACOBIAN_VAR */ = (data->localData[0]->realVars[137] /* pwLine1.vs.im variable */) * (jacobian->seedVars[0] /* constantLoad.p.ii.SeedNLSJac26 SEED_VAR */) + (jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac26 SEED_VAR */) * (data->localData[0]->realVars[53] /* constantLoad.p.ii variable */) + (data->localData[0]->realVars[138] /* pwLine1.vs.re variable */) * (jacobian->tmpVars[21] /* constantLoad.p.ir.$pDERNLSJac26.dummyVarNLSJac26 JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac26 SEED_VAR */) * (data->localData[0]->realVars[54] /* constantLoad.p.ir variable */) - jacobian->tmpVars[4] /* constantLoad.P.$pDERNLSJac26.dummyVarNLSJac26 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 473
type: SIMPLE_ASSIGN
$res_NLSJac26_19.$pDERNLSJac26.dummyVarNLSJac26 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.ir.re.SeedNLSJac26 else pwLine1.vs.re.SeedNLSJac26 - pwLine.vs.re.$pDERNLSJac26.dummyVarNLSJac26 - (pwLine.Z.re * (pwLine.ir.re.SeedNLSJac26 + pwLine1.vs.im.SeedNLSJac26 * pwLine.Y.im - pwLine1.vs.re.SeedNLSJac26 * pwLine.Y.re) - pwLine.Z.im * (pwLine.ir.im.$pDERNLSJac26.dummyVarNLSJac26 + (-pwLine1.vs.re.SeedNLSJac26) * pwLine.Y.im - pwLine1.vs.im.SeedNLSJac26 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_473(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,473};
  modelica_boolean tmp104;
  modelica_boolean tmp105;
  RELATIONHYSTERESIS(tmp104, data->localData[0]->timeValue, data->simulationInfo->realParameter[323] /* pwLine.t1 PARAM */, 1, GreaterEq);
  RELATIONHYSTERESIS(tmp105, data->localData[0]->timeValue, data->simulationInfo->realParameter[324] /* pwLine.t2 PARAM */, 2, Less);
  jacobian->resultVars[18] /* $res_NLSJac26_19.$pDERNLSJac26.dummyVarNLSJac26 JACOBIAN_VAR */ = ((tmp104 && tmp105)?jacobian->seedVars[2] /* pwLine.ir.re.SeedNLSJac26 SEED_VAR */:jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac26 SEED_VAR */ - jacobian->tmpVars[12] /* pwLine.vs.re.$pDERNLSJac26.dummyVarNLSJac26 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[322] /* pwLine.Z.re PARAM */) * (jacobian->seedVars[2] /* pwLine.ir.re.SeedNLSJac26 SEED_VAR */ + (jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac26 SEED_VAR */) * (data->simulationInfo->realParameter[319] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac26 SEED_VAR */) * (data->simulationInfo->realParameter[320] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[321] /* pwLine.Z.im PARAM */) * (jacobian->tmpVars[22] /* pwLine.ir.im.$pDERNLSJac26.dummyVarNLSJac26 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac26 SEED_VAR */)) * (data->simulationInfo->realParameter[319] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac26 SEED_VAR */) * (data->simulationInfo->realParameter[320] /* pwLine.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 474
type: SIMPLE_ASSIGN
$res_NLSJac26_20.$pDERNLSJac26.dummyVarNLSJac26 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.is.re.SeedNLSJac26 else pwLine1.vs.re.SeedNLSJac26 - pwLine1.vr.re.SeedNLSJac26 - (pwLine1.Z.re * (pwLine1.is.re.SeedNLSJac26 + pwLine1.vs.im.SeedNLSJac26 * pwLine1.Y.im - pwLine1.vs.re.SeedNLSJac26 * pwLine1.Y.re) - pwLine1.Z.im * (pwLine1.is.im.SeedNLSJac26 + (-pwLine1.vs.re.SeedNLSJac26) * pwLine1.Y.im - pwLine1.vs.im.SeedNLSJac26 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_474(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,474};
  modelica_boolean tmp106;
  modelica_boolean tmp107;
  RELATIONHYSTERESIS(tmp106, data->localData[0]->timeValue, data->simulationInfo->realParameter[334] /* pwLine1.t1 PARAM */, 13, GreaterEq);
  RELATIONHYSTERESIS(tmp107, data->localData[0]->timeValue, data->simulationInfo->realParameter[335] /* pwLine1.t2 PARAM */, 14, Less);
  jacobian->resultVars[19] /* $res_NLSJac26_20.$pDERNLSJac26.dummyVarNLSJac26 JACOBIAN_VAR */ = ((tmp106 && tmp107)?jacobian->seedVars[3] /* pwLine1.is.re.SeedNLSJac26 SEED_VAR */:jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac26 SEED_VAR */ - jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac26 SEED_VAR */ - ((data->simulationInfo->realParameter[333] /* pwLine1.Z.re PARAM */) * (jacobian->seedVars[3] /* pwLine1.is.re.SeedNLSJac26 SEED_VAR */ + (jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac26 SEED_VAR */) * (data->simulationInfo->realParameter[330] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac26 SEED_VAR */) * (data->simulationInfo->realParameter[331] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[332] /* pwLine1.Z.im PARAM */) * (jacobian->seedVars[1] /* pwLine1.is.im.SeedNLSJac26 SEED_VAR */ + ((-jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac26 SEED_VAR */)) * (data->simulationInfo->realParameter[330] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac26 SEED_VAR */) * (data->simulationInfo->realParameter[331] /* pwLine1.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 475
type: SIMPLE_ASSIGN
$res_NLSJac26_21.$pDERNLSJac26.dummyVarNLSJac26 = $cse2 * gENCLS.vq.$pDERNLSJac26.dummyVarNLSJac26 + $cse1 * gENCLS.vd.$pDERNLSJac26.dummyVarNLSJac26 - pwLine1.vr.re.SeedNLSJac26
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_475(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,475};
  jacobian->resultVars[20] /* $res_NLSJac26_21.$pDERNLSJac26.dummyVarNLSJac26 JACOBIAN_VAR */ = (data->localData[0]->realVars[27] /* $cse2 variable */) * (jacobian->tmpVars[15] /* gENCLS.vq.$pDERNLSJac26.dummyVarNLSJac26 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[26] /* $cse1 variable */) * (jacobian->tmpVars[16] /* gENCLS.vd.$pDERNLSJac26.dummyVarNLSJac26 JACOBIAN_DIFF_VAR */) - jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac26 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 476
type: SIMPLE_ASSIGN
$res_NLSJac26_22.$pDERNLSJac26.dummyVarNLSJac26 = $cse1 * gENCLS.vq.$pDERNLSJac26.dummyVarNLSJac26 + (-$cse2) * gENCLS.vd.$pDERNLSJac26.dummyVarNLSJac26 - pwLine1.vr.im.SeedNLSJac26
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_476(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,476};
  jacobian->resultVars[21] /* $res_NLSJac26_22.$pDERNLSJac26.dummyVarNLSJac26 JACOBIAN_VAR */ = (data->localData[0]->realVars[26] /* $cse1 variable */) * (jacobian->tmpVars[15] /* gENCLS.vq.$pDERNLSJac26.dummyVarNLSJac26 JACOBIAN_DIFF_VAR */) + ((-data->localData[0]->realVars[27] /* $cse2 variable */)) * (jacobian->tmpVars[16] /* gENCLS.vd.$pDERNLSJac26.dummyVarNLSJac26 JACOBIAN_DIFF_VAR */) - jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac26 SEED_VAR */;
  TRACE_POP
}

OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_functionJacNLSJac26_constantEqns(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_INDEX_JAC_NLSJac26;
  
  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_functionJacNLSJac26_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_INDEX_JAC_NLSJac26;
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_432(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_433(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_434(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_435(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_436(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_437(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_438(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_439(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_440(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_441(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_442(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_443(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_444(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_445(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_446(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_447(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_448(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_449(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_450(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_451(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_452(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_453(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_454(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_455(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_456(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_457(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_458(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_459(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_460(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_461(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_462(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_463(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_464(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_465(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_466(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_467(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_468(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_469(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_470(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_471(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_472(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_473(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_474(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_475(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_476(data, threadData, jacobian, parentJacobian);
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_functionJacF_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_functionJacD_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_functionJacC_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_functionJacB_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
/* constant equations */
/* dynamic equations */

OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_functionJacA_constantEqns(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_INDEX_JAC_A;
  
  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_functionJacA_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_INDEX_JAC_A;
  TRACE_POP
  return 0;
}

OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_initialAnalyticJacobianNLSJac26(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+22] = {0,4,4,4,4,3,3,3,3,4,4,4,4,6,6,7,7,4,4,11,11,8,8};
  const int rowIndex[116] = {13,16,17,18,12,13,18,19,13,16,17,18,12,16,17,19,5,6,7,2,3,6,4,5,7,2,3,4,0,1,16,17,0,1,13,18,8,9,10,11,8,9,10,11,8,9,10,11,20,21,8,9,10,11,20,21,5,8,9,10,11,19,20,7,8,9,10,11,12,21,13,14,15,18,13,14,15,18,0,1,3,9,12,13,14,16,17,18,19,0,1,2,11,12,13,15,16,17,18,19,0,2,3,4,5,6,7,10,1,2,3,4,5,6,7,8};
  int i = 0;
  
  jacobian->sizeCols = 22;
  jacobian->sizeRows = 22;
  jacobian->sizeTmpVars = 45;
  jacobian->seedVars = (modelica_real*) calloc(22,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(22,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(45,sizeof(modelica_real));
  jacobian->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  jacobian->sparsePattern->leadindex = (unsigned int*) malloc((22+1)*sizeof(int));
  jacobian->sparsePattern->index = (unsigned int*) malloc(116*sizeof(int));
  jacobian->sparsePattern->numberOfNoneZeros = 116;
  jacobian->sparsePattern->colorCols = (unsigned int*) malloc(22*sizeof(int));
  jacobian->sparsePattern->maxColors = 10;
  jacobian->constantEqns = NULL;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern->leadindex, colPtrIndex, (22+1)*sizeof(int));
  
  for(i=2;i<22+1;++i)
    jacobian->sparsePattern->leadindex[i] += jacobian->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern->index, rowIndex, 116*sizeof(int));
  
  /* write color array */
  jacobian->sparsePattern->colorCols[21] = 1;
  jacobian->sparsePattern->colorCols[20] = 2;
  jacobian->sparsePattern->colorCols[19] = 3;
  jacobian->sparsePattern->colorCols[18] = 4;
  jacobian->sparsePattern->colorCols[15] = 5;
  jacobian->sparsePattern->colorCols[17] = 5;
  jacobian->sparsePattern->colorCols[14] = 6;
  jacobian->sparsePattern->colorCols[16] = 6;
  jacobian->sparsePattern->colorCols[3] = 7;
  jacobian->sparsePattern->colorCols[9] = 7;
  jacobian->sparsePattern->colorCols[13] = 7;
  jacobian->sparsePattern->colorCols[2] = 8;
  jacobian->sparsePattern->colorCols[12] = 8;
  jacobian->sparsePattern->colorCols[1] = 9;
  jacobian->sparsePattern->colorCols[5] = 9;
  jacobian->sparsePattern->colorCols[6] = 9;
  jacobian->sparsePattern->colorCols[8] = 9;
  jacobian->sparsePattern->colorCols[11] = 9;
  jacobian->sparsePattern->colorCols[0] = 10;
  jacobian->sparsePattern->colorCols[4] = 10;
  jacobian->sparsePattern->colorCols[7] = 10;
  jacobian->sparsePattern->colorCols[10] = 10;
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_initialAnalyticJacobianF(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_initialAnalyticJacobianD(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_initialAnalyticJacobianC(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_initialAnalyticJacobianB(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_initialAnalyticJacobianA(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+13] = {0,4,4,2,3,5,10,10,10,10,10,10,10,2};
  const int rowIndex[90] = {0,2,3,4,1,2,3,4,2,4,2,3,4,1,2,3,4,8,0,1,2,3,4,7,8,9,10,12,0,1,2,3,4,7,8,9,10,12,0,1,2,3,4,7,8,9,10,12,0,1,2,3,4,7,8,9,10,12,0,1,2,3,4,7,8,9,10,12,0,1,2,3,4,7,8,9,10,12,0,1,2,3,4,7,8,9,10,12,11,12};
  int i = 0;
  
  jacobian->sizeCols = 13;
  jacobian->sizeRows = 13;
  jacobian->sizeTmpVars = 0;
  jacobian->seedVars = (modelica_real*) calloc(13,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(13,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(0,sizeof(modelica_real));
  jacobian->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  jacobian->sparsePattern->leadindex = (unsigned int*) malloc((13+1)*sizeof(int));
  jacobian->sparsePattern->index = (unsigned int*) malloc(90*sizeof(int));
  jacobian->sparsePattern->numberOfNoneZeros = 90;
  jacobian->sparsePattern->colorCols = (unsigned int*) malloc(13*sizeof(int));
  jacobian->sparsePattern->maxColors = 12;
  jacobian->constantEqns = NULL;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern->leadindex, colPtrIndex, (13+1)*sizeof(int));
  
  for(i=2;i<13+1;++i)
    jacobian->sparsePattern->leadindex[i] += jacobian->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern->index, rowIndex, 90*sizeof(int));
  
  /* write color array */
  jacobian->sparsePattern->colorCols[0] = 1;
  jacobian->sparsePattern->colorCols[4] = 2;
  jacobian->sparsePattern->colorCols[3] = 3;
  jacobian->sparsePattern->colorCols[1] = 4;
  jacobian->sparsePattern->colorCols[10] = 5;
  jacobian->sparsePattern->colorCols[9] = 6;
  jacobian->sparsePattern->colorCols[8] = 7;
  jacobian->sparsePattern->colorCols[7] = 8;
  jacobian->sparsePattern->colorCols[11] = 9;
  jacobian->sparsePattern->colorCols[12] = 10;
  jacobian->sparsePattern->colorCols[2] = 10;
  jacobian->sparsePattern->colorCols[6] = 11;
  jacobian->sparsePattern->colorCols[5] = 12;
  TRACE_POP
  return 0;
}


