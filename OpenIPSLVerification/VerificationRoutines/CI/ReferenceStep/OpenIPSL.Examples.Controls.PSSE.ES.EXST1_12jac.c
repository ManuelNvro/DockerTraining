/* Jacobians 7 */
#include "OpenIPSL.Examples.Controls.PSSE.ES.EXST1_model.h"
#include "OpenIPSL.Examples.Controls.PSSE.ES.EXST1_12jac.h"
/* constant equations */
/* dynamic equations */

/*
equation index: 373
type: SIMPLE_ASSIGN
constantLoad.v.$pDERNLSJac29.dummyVarNLSJac29 = (pwLine1.vs.re * pwLine1.vs.re.SeedNLSJac29 + pwLine1.vs.im * pwLine1.vs.im.SeedNLSJac29) / sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_373(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,373};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[123] /* pwLine1.vs.re variable */;
  tmp1 = data->localData[0]->realVars[122] /* pwLine1.vs.im variable */;
  jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */ = DIVISION((data->localData[0]->realVars[123] /* pwLine1.vs.re variable */) * (jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac29 SEED_VAR */) + (data->localData[0]->realVars[122] /* pwLine1.vs.im variable */) * (jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac29 SEED_VAR */),sqrt((tmp0 * tmp0) + (tmp1 * tmp1)),"sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)");
  TRACE_POP
}

/*
equation index: 374
type: SIMPLE_ASSIGN
constantLoad.kP.$pDERNLSJac29.dummyVarNLSJac29 = if constantLoad.v < constantLoad.PQBRAK then constantLoad.a1 * (-sin(constantLoad.v * constantLoad.wp)) * constantLoad.v.$pDERNLSJac29.dummyVarNLSJac29 * constantLoad.wp + constantLoad.b1 * cos(constantLoad.v * constantLoad.wp) * constantLoad.v.$pDERNLSJac29.dummyVarNLSJac29 * constantLoad.wp else 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_374(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,374};
  modelica_boolean tmp2;
  RELATIONHYSTERESIS(tmp2, data->localData[0]->realVars[53] /* constantLoad.v variable */, data->simulationInfo->realParameter[35] /* constantLoad.PQBRAK PARAM */, 8, Less);
  jacobian->tmpVars[1] /* constantLoad.kP.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */ = (tmp2?(data->simulationInfo->realParameter[55] /* constantLoad.a1 PARAM */) * (((-sin((data->localData[0]->realVars[53] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[75] /* constantLoad.wp PARAM */)))) * ((jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[75] /* constantLoad.wp PARAM */))) + (data->simulationInfo->realParameter[61] /* constantLoad.b1 PARAM */) * ((cos((data->localData[0]->realVars[53] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[75] /* constantLoad.wp PARAM */))) * ((jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[75] /* constantLoad.wp PARAM */))):0.0);
  TRACE_POP
}

/*
equation index: 375
type: SIMPLE_ASSIGN
constantLoad.kI.$pDERNLSJac29.dummyVarNLSJac29 = if constantLoad.v < 0.5 then constantLoad.a2 * constantLoad.b2 * (constantLoad.v ^ (-1.0 + constantLoad.b2) * (-exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2)) * constantLoad.a2 * constantLoad.b2 * constantLoad.v ^ (constantLoad.b2 - 1.0) * constantLoad.v.$pDERNLSJac29.dummyVarNLSJac29 + (if noEvent(constantLoad.v == 0.0) then 0.0 else constantLoad.v ^ (-1.0 + constantLoad.b2 - 1.0) * (-1.0 + constantLoad.b2) * constantLoad.v.$pDERNLSJac29.dummyVarNLSJac29) * exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2)) else 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_375(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,375};
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
  RELATIONHYSTERESIS(tmp3, data->localData[0]->realVars[53] /* constantLoad.v variable */, 0.5, 7, Less);
  tmp42 = (modelica_boolean)tmp3;
  if(tmp42)
  {
    tmp4 = data->localData[0]->realVars[53] /* constantLoad.v variable */;
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
    }tmp11 = data->localData[0]->realVars[53] /* constantLoad.v variable */;
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
    }tmp18 = data->localData[0]->realVars[53] /* constantLoad.v variable */;
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
    }tmp33 = (modelica_boolean)(data->localData[0]->realVars[53] /* constantLoad.v variable */ == 0.0);
    if(tmp33)
    {
      tmp34 = 0.0;
    }
    else
    {
      tmp26 = data->localData[0]->realVars[53] /* constantLoad.v variable */;
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
      tmp34 = (tmp28) * ((-1.0 + data->simulationInfo->realParameter[62] /* constantLoad.b2 PARAM */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */));
    }
    tmp35 = data->localData[0]->realVars[53] /* constantLoad.v variable */;
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
    tmp43 = (data->simulationInfo->realParameter[56] /* constantLoad.a2 PARAM */) * ((data->simulationInfo->realParameter[62] /* constantLoad.b2 PARAM */) * ((tmp6) * (((-exp(((-data->simulationInfo->realParameter[56] /* constantLoad.a2 PARAM */)) * (tmp13)))) * ((data->simulationInfo->realParameter[56] /* constantLoad.a2 PARAM */) * (((data->simulationInfo->realParameter[62] /* constantLoad.b2 PARAM */) * (tmp20)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */)))) + (tmp34) * (exp(((-data->simulationInfo->realParameter[56] /* constantLoad.a2 PARAM */)) * (tmp37)))));
  }
  else
  {
    tmp43 = 0.0;
  }
  jacobian->tmpVars[2] /* constantLoad.kI.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */ = tmp43;
  TRACE_POP
}

/*
equation index: 376
type: SIMPLE_ASSIGN
constantLoad.Q.$pDERNLSJac29.dummyVarNLSJac29 = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.S_I.im * (constantLoad.kI * constantLoad.v.$pDERNLSJac29.dummyVarNLSJac29 + constantLoad.kI.$pDERNLSJac29.dummyVarNLSJac29 * constantLoad.v) + constantLoad.S_Y.im * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac29.dummyVarNLSJac29 + constantLoad.kP.$pDERNLSJac29.dummyVarNLSJac29 * (constantLoad.S_P.im + constantLoad.d_Q) else constantLoad.S_I.im * (constantLoad.kI * constantLoad.v.$pDERNLSJac29.dummyVarNLSJac29 + constantLoad.kI.$pDERNLSJac29.dummyVarNLSJac29 * constantLoad.v) + constantLoad.S_Y.im * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac29.dummyVarNLSJac29 + constantLoad.kP.$pDERNLSJac29.dummyVarNLSJac29 * constantLoad.S_P.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_376(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,376};
  modelica_boolean tmp44;
  modelica_boolean tmp45;
  RELATIONHYSTERESIS(tmp44, data->localData[0]->timeValue, data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */, 5, GreaterEq);
  RELATIONHYSTERESIS(tmp45, data->localData[0]->timeValue, data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[65] /* constantLoad.d_t PARAM */, 6, LessEq);
  jacobian->tmpVars[3] /* constantLoad.Q.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */ = ((tmp44 && tmp45)?(data->simulationInfo->realParameter[38] /* constantLoad.S_I.im PARAM */) * ((data->localData[0]->realVars[49] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[2] /* constantLoad.kI.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[53] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[42] /* constantLoad.S_Y.im PARAM */) * (((2.0) * (data->localData[0]->realVars[53] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[1] /* constantLoad.kP.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[40] /* constantLoad.S_P.im PARAM */ + data->simulationInfo->realParameter[64] /* constantLoad.d_Q PARAM */):(data->simulationInfo->realParameter[38] /* constantLoad.S_I.im PARAM */) * ((data->localData[0]->realVars[49] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[2] /* constantLoad.kI.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[53] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[42] /* constantLoad.S_Y.im PARAM */) * (((2.0) * (data->localData[0]->realVars[53] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[1] /* constantLoad.kP.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[40] /* constantLoad.S_P.im PARAM */));
  TRACE_POP
}

/*
equation index: 377
type: SIMPLE_ASSIGN
constantLoad.P.$pDERNLSJac29.dummyVarNLSJac29 = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.S_I.re * (constantLoad.kI * constantLoad.v.$pDERNLSJac29.dummyVarNLSJac29 + constantLoad.kI.$pDERNLSJac29.dummyVarNLSJac29 * constantLoad.v) + constantLoad.S_Y.re * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac29.dummyVarNLSJac29 + constantLoad.kP.$pDERNLSJac29.dummyVarNLSJac29 * (constantLoad.S_P.re + constantLoad.d_P) else constantLoad.S_I.re * (constantLoad.kI * constantLoad.v.$pDERNLSJac29.dummyVarNLSJac29 + constantLoad.kI.$pDERNLSJac29.dummyVarNLSJac29 * constantLoad.v) + constantLoad.S_Y.re * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac29.dummyVarNLSJac29 + constantLoad.kP.$pDERNLSJac29.dummyVarNLSJac29 * constantLoad.S_P.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_377(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,377};
  modelica_boolean tmp46;
  modelica_boolean tmp47;
  RELATIONHYSTERESIS(tmp46, data->localData[0]->timeValue, data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */, 5, GreaterEq);
  RELATIONHYSTERESIS(tmp47, data->localData[0]->timeValue, data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[65] /* constantLoad.d_t PARAM */, 6, LessEq);
  jacobian->tmpVars[4] /* constantLoad.P.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */ = ((tmp46 && tmp47)?(data->simulationInfo->realParameter[39] /* constantLoad.S_I.re PARAM */) * ((data->localData[0]->realVars[49] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[2] /* constantLoad.kI.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[53] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[43] /* constantLoad.S_Y.re PARAM */) * (((2.0) * (data->localData[0]->realVars[53] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[1] /* constantLoad.kP.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[41] /* constantLoad.S_P.re PARAM */ + data->simulationInfo->realParameter[63] /* constantLoad.d_P PARAM */):(data->simulationInfo->realParameter[39] /* constantLoad.S_I.re PARAM */) * ((data->localData[0]->realVars[49] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[2] /* constantLoad.kI.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[53] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[43] /* constantLoad.S_Y.re PARAM */) * (((2.0) * (data->localData[0]->realVars[53] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[1] /* constantLoad.kP.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[41] /* constantLoad.S_P.re PARAM */));
  TRACE_POP
}

/*
equation index: 378
type: SIMPLE_ASSIGN
gENROE.PSIq.$pDERNLSJac29.dummyVarNLSJac29 = (-gENROE.Xppq) * gENROE.iq.SeedNLSJac29
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_378(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,378};
  jacobian->tmpVars[5] /* gENROE.PSIq.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[230] /* gENROE.Xppq PARAM */)) * (jacobian->seedVars[17] /* gENROE.iq.SeedNLSJac29 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 379
type: SIMPLE_ASSIGN
pwLine.is.re.$pDERNLSJac29.dummyVarNLSJac29 = ($cse7 * gENROE.iq.SeedNLSJac29 + $cse6 * gENROE.id.SeedNLSJac29) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_379(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,379};
  jacobian->tmpVars[6] /* pwLine.is.re.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[29] /* $cse7 variable */) * (jacobian->seedVars[17] /* gENROE.iq.SeedNLSJac29 SEED_VAR */) + (data->localData[0]->realVars[28] /* $cse6 variable */) * (jacobian->seedVars[16] /* gENROE.id.SeedNLSJac29 SEED_VAR */)) * (data->simulationInfo->realParameter[175] /* gENROE.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 380
type: SIMPLE_ASSIGN
pwLine.is.im.$pDERNLSJac29.dummyVarNLSJac29 = ($cse6 * gENROE.iq.SeedNLSJac29 - $cse7 * gENROE.id.SeedNLSJac29) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_380(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,380};
  jacobian->tmpVars[7] /* pwLine.is.im.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[28] /* $cse6 variable */) * (jacobian->seedVars[17] /* gENROE.iq.SeedNLSJac29 SEED_VAR */) - ((data->localData[0]->realVars[29] /* $cse7 variable */) * (jacobian->seedVars[16] /* gENROE.id.SeedNLSJac29 SEED_VAR */))) * (data->simulationInfo->realParameter[175] /* gENROE.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 381
type: SIMPLE_ASSIGN
gENROE.ud.$pDERNLSJac29.dummyVarNLSJac29 = (-gENROE.PSIq.$pDERNLSJac29.dummyVarNLSJac29) - gENROE.R_a * gENROE.id.SeedNLSJac29
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_381(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,381};
  jacobian->tmpVars[8] /* gENROE.ud.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */ = (-jacobian->tmpVars[5] /* gENROE.PSIq.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */) - ((data->simulationInfo->realParameter[212] /* gENROE.R_a PARAM */) * (jacobian->seedVars[16] /* gENROE.id.SeedNLSJac29 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 382
type: SIMPLE_ASSIGN
gENROE.PSId.$pDERNLSJac29.dummyVarNLSJac29 = (-gENROE.Xppd) * gENROE.id.SeedNLSJac29
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_382(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,382};
  jacobian->tmpVars[9] /* gENROE.PSId.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[229] /* gENROE.Xppd PARAM */)) * (jacobian->seedVars[16] /* gENROE.id.SeedNLSJac29 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 383
type: SIMPLE_ASSIGN
gENROE.uq.$pDERNLSJac29.dummyVarNLSJac29 = gENROE.PSId.$pDERNLSJac29.dummyVarNLSJac29 - gENROE.R_a * gENROE.iq.SeedNLSJac29
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_383(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,383};
  jacobian->tmpVars[10] /* gENROE.uq.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[9] /* gENROE.PSId.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[212] /* gENROE.R_a PARAM */) * (jacobian->seedVars[17] /* gENROE.iq.SeedNLSJac29 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 384
type: SIMPLE_ASSIGN
pwLine.vs.im.$pDERNLSJac29.dummyVarNLSJac29 = $cse6 * gENROE.uq.$pDERNLSJac29.dummyVarNLSJac29 - $cse7 * gENROE.ud.$pDERNLSJac29.dummyVarNLSJac29
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_384(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,384};
  jacobian->tmpVars[11] /* pwLine.vs.im.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[28] /* $cse6 variable */) * (jacobian->tmpVars[10] /* gENROE.uq.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */) - ((data->localData[0]->realVars[29] /* $cse7 variable */) * (jacobian->tmpVars[8] /* gENROE.ud.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 385
type: SIMPLE_ASSIGN
pwLine.vs.re.$pDERNLSJac29.dummyVarNLSJac29 = $cse6 * gENROE.ud.$pDERNLSJac29.dummyVarNLSJac29 + $cse7 * gENROE.uq.$pDERNLSJac29.dummyVarNLSJac29
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_385(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,385};
  jacobian->tmpVars[12] /* pwLine.vs.re.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[28] /* $cse6 variable */) * (jacobian->tmpVars[8] /* gENROE.ud.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[29] /* $cse7 variable */) * (jacobian->tmpVars[10] /* gENROE.uq.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 386
type: SIMPLE_ASSIGN
gENCLS.p.ii.$pDERNLSJac29.dummyVarNLSJac29 = ($cse2 * gENCLS.id.SeedNLSJac29 - $cse1 * gENCLS.iq.SeedNLSJac29) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_386(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,386};
  jacobian->tmpVars[13] /* gENCLS.p.ii.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[25] /* $cse2 variable */) * (jacobian->seedVars[13] /* gENCLS.id.SeedNLSJac29 SEED_VAR */) - ((data->localData[0]->realVars[24] /* $cse1 variable */) * (jacobian->seedVars[12] /* gENCLS.iq.SeedNLSJac29 SEED_VAR */))) * (data->simulationInfo->realParameter[149] /* gENCLS.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 387
type: SIMPLE_ASSIGN
gENCLS.p.ir.$pDERNLSJac29.dummyVarNLSJac29 = ((-$cse1) * gENCLS.id.SeedNLSJac29 - $cse2 * gENCLS.iq.SeedNLSJac29) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_387(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,387};
  jacobian->tmpVars[14] /* gENCLS.p.ir.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */ = (((-data->localData[0]->realVars[24] /* $cse1 variable */)) * (jacobian->seedVars[13] /* gENCLS.id.SeedNLSJac29 SEED_VAR */) - ((data->localData[0]->realVars[25] /* $cse2 variable */) * (jacobian->seedVars[12] /* gENCLS.iq.SeedNLSJac29 SEED_VAR */))) * (data->simulationInfo->realParameter[149] /* gENCLS.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 388
type: SIMPLE_ASSIGN
gENCLS.vd.$pDERNLSJac29.dummyVarNLSJac29 = gENCLS.X_d * gENCLS.iq.SeedNLSJac29 - gENCLS.R_a * gENCLS.id.SeedNLSJac29
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_388(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,388};
  jacobian->tmpVars[15] /* gENCLS.vd.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[158] /* gENCLS.X_d PARAM */) * (jacobian->seedVars[12] /* gENCLS.iq.SeedNLSJac29 SEED_VAR */) - ((data->simulationInfo->realParameter[155] /* gENCLS.R_a PARAM */) * (jacobian->seedVars[13] /* gENCLS.id.SeedNLSJac29 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 389
type: SIMPLE_ASSIGN
gENCLS.vq.$pDERNLSJac29.dummyVarNLSJac29 = (-gENCLS.R_a) * gENCLS.iq.SeedNLSJac29 - gENCLS.X_d * gENCLS.id.SeedNLSJac29
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_389(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,389};
  jacobian->tmpVars[16] /* gENCLS.vq.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[155] /* gENCLS.R_a PARAM */)) * (jacobian->seedVars[12] /* gENCLS.iq.SeedNLSJac29 SEED_VAR */) - ((data->simulationInfo->realParameter[158] /* gENCLS.X_d PARAM */) * (jacobian->seedVars[13] /* gENCLS.id.SeedNLSJac29 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 390
type: SIMPLE_ASSIGN
pwLine1.ir.re.$pDERNLSJac29.dummyVarNLSJac29 = (-pwLine4.ir.re.SeedNLSJac29) - gENCLS.p.ir.$pDERNLSJac29.dummyVarNLSJac29
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_390(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,390};
  jacobian->tmpVars[17] /* pwLine1.ir.re.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[11] /* pwLine4.ir.re.SeedNLSJac29 SEED_VAR */) - jacobian->tmpVars[14] /* gENCLS.p.ir.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 391
type: SIMPLE_ASSIGN
pwLine4.ir.im.$pDERNLSJac29.dummyVarNLSJac29 = (-pwLine1.ir.im.SeedNLSJac29) - gENCLS.p.ii.$pDERNLSJac29.dummyVarNLSJac29
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_391(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,391};
  jacobian->tmpVars[18] /* pwLine4.ir.im.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[10] /* pwLine1.ir.im.SeedNLSJac29 SEED_VAR */) - jacobian->tmpVars[13] /* gENCLS.p.ii.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 392
type: SIMPLE_ASSIGN
pwFault.p.ir.$pDERNLSJac29.dummyVarNLSJac29 = (-pwLine3.ir.re.SeedNLSJac29) - pwLine4.is.re.SeedNLSJac29
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_392(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,392};
  jacobian->tmpVars[19] /* pwFault.p.ir.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[8] /* pwLine3.ir.re.SeedNLSJac29 SEED_VAR */) - jacobian->seedVars[9] /* pwLine4.is.re.SeedNLSJac29 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 393
type: SIMPLE_ASSIGN
pwFault.p.ii.$pDERNLSJac29.dummyVarNLSJac29 = (-pwLine3.ir.im.SeedNLSJac29) - pwLine4.is.im.SeedNLSJac29
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_393(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,393};
  jacobian->tmpVars[20] /* pwFault.p.ii.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[7] /* pwLine3.ir.im.SeedNLSJac29 SEED_VAR */) - jacobian->seedVars[6] /* pwLine4.is.im.SeedNLSJac29 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 394
type: SIMPLE_ASSIGN
pwLine3.is.re.$pDERNLSJac29.dummyVarNLSJac29 = (-pwLine.ir.re.SeedNLSJac29) - pwLine1.is.re.SeedNLSJac29 - constantLoad.p.ir.SeedNLSJac29
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_394(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,394};
  jacobian->tmpVars[21] /* pwLine3.is.re.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[3] /* pwLine.ir.re.SeedNLSJac29 SEED_VAR */) - jacobian->seedVars[2] /* pwLine1.is.re.SeedNLSJac29 SEED_VAR */ - jacobian->seedVars[4] /* constantLoad.p.ir.SeedNLSJac29 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 395
type: SIMPLE_ASSIGN
pwLine3.is.im.$pDERNLSJac29.dummyVarNLSJac29 = (-pwLine.ir.im.SeedNLSJac29) - pwLine1.is.im.SeedNLSJac29 - constantLoad.p.ii.SeedNLSJac29
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_395(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,395};
  jacobian->tmpVars[22] /* pwLine3.is.im.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[1] /* pwLine.ir.im.SeedNLSJac29 SEED_VAR */) - jacobian->seedVars[0] /* pwLine1.is.im.SeedNLSJac29 SEED_VAR */ - jacobian->seedVars[5] /* constantLoad.p.ii.SeedNLSJac29 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 396
type: SIMPLE_ASSIGN
$res_NLSJac29_1.$pDERNLSJac29.dummyVarNLSJac29 = if time < pwFault.t1 then pwFault.p.ii.$pDERNLSJac29.dummyVarNLSJac29 else if time < pwFault.t2 and pwFault.ground then pwLine3.vr.re.SeedNLSJac29 else if time < pwFault.t2 then pwFault.p.ii.$pDERNLSJac29.dummyVarNLSJac29 - (pwFault.R * pwLine3.vr.im.SeedNLSJac29 - pwFault.X * pwLine3.vr.re.SeedNLSJac29) * (pwFault.X ^ 2.0 + pwFault.R ^ 2.0) / (pwFault.X ^ 2.0 + pwFault.R ^ 2.0) ^ 2.0 else pwFault.p.ii.$pDERNLSJac29.dummyVarNLSJac29
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_396(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,396};
  modelica_boolean tmp48;
  modelica_boolean tmp49;
  modelica_boolean tmp50;
  modelica_real tmp51;
  modelica_real tmp52;
  modelica_real tmp53;
  modelica_real tmp54;
  modelica_real tmp55;
  modelica_boolean tmp56;
  modelica_real tmp57;
  modelica_boolean tmp58;
  modelica_real tmp59;
  modelica_boolean tmp60;
  modelica_real tmp61;
  RELATIONHYSTERESIS(tmp48, data->localData[0]->timeValue, data->simulationInfo->realParameter[262] /* pwFault.t1 PARAM */, 11, Less);
  tmp60 = (modelica_boolean)tmp48;
  if(tmp60)
  {
    tmp61 = jacobian->tmpVars[20] /* pwFault.p.ii.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp49, data->localData[0]->timeValue, data->simulationInfo->realParameter[263] /* pwFault.t2 PARAM */, 12, Less);
    tmp58 = (modelica_boolean)(tmp49 && data->simulationInfo->booleanParameter[66] /* pwFault.ground PARAM */);
    if(tmp58)
    {
      tmp59 = jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac29 SEED_VAR */;
    }
    else
    {
      RELATIONHYSTERESIS(tmp50, data->localData[0]->timeValue, data->simulationInfo->realParameter[263] /* pwFault.t2 PARAM */, 12, Less);
      tmp56 = (modelica_boolean)tmp50;
      if(tmp56)
      {
        tmp51 = data->simulationInfo->realParameter[261] /* pwFault.X PARAM */;
        tmp52 = data->simulationInfo->realParameter[260] /* pwFault.R PARAM */;
        tmp53 = data->simulationInfo->realParameter[261] /* pwFault.X PARAM */;
        tmp54 = data->simulationInfo->realParameter[260] /* pwFault.R PARAM */;
        tmp55 = (tmp53 * tmp53) + (tmp54 * tmp54);
        tmp57 = jacobian->tmpVars[20] /* pwFault.p.ii.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */ - (DIVISION(((data->simulationInfo->realParameter[260] /* pwFault.R PARAM */) * (jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac29 SEED_VAR */) - ((data->simulationInfo->realParameter[261] /* pwFault.X PARAM */) * (jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac29 SEED_VAR */))) * ((tmp51 * tmp51) + (tmp52 * tmp52)),(tmp55 * tmp55),"(pwFault.X ^ 2.0 + pwFault.R ^ 2.0) ^ 2.0"));
      }
      else
      {
        tmp57 = jacobian->tmpVars[20] /* pwFault.p.ii.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */;
      }
      tmp59 = tmp57;
    }
    tmp61 = tmp59;
  }
  jacobian->resultVars[0] /* $res_NLSJac29_1.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_VAR */ = tmp61;
  TRACE_POP
}

/*
equation index: 397
type: SIMPLE_ASSIGN
$res_NLSJac29_2.$pDERNLSJac29.dummyVarNLSJac29 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.is.re.SeedNLSJac29 else pwLine3.vr.re.SeedNLSJac29 - pwLine1.vr.re.SeedNLSJac29 - (pwLine4.Z.re * (pwLine4.is.re.SeedNLSJac29 + pwLine3.vr.im.SeedNLSJac29 * pwLine4.Y.im - pwLine3.vr.re.SeedNLSJac29 * pwLine4.Y.re) - pwLine4.Z.im * (pwLine4.is.im.SeedNLSJac29 + (-pwLine3.vr.re.SeedNLSJac29) * pwLine4.Y.im - pwLine3.vr.im.SeedNLSJac29 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_397(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,397};
  modelica_boolean tmp62;
  modelica_boolean tmp63;
  RELATIONHYSTERESIS(tmp62, data->localData[0]->timeValue, data->simulationInfo->realParameter[306] /* pwLine4.t1 PARAM */, 9, GreaterEq);
  RELATIONHYSTERESIS(tmp63, data->localData[0]->timeValue, data->simulationInfo->realParameter[307] /* pwLine4.t2 PARAM */, 10, Less);
  jacobian->resultVars[1] /* $res_NLSJac29_2.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_VAR */ = ((tmp62 && tmp63)?jacobian->seedVars[9] /* pwLine4.is.re.SeedNLSJac29 SEED_VAR */:jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac29 SEED_VAR */ - jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac29 SEED_VAR */ - ((data->simulationInfo->realParameter[305] /* pwLine4.Z.re PARAM */) * (jacobian->seedVars[9] /* pwLine4.is.re.SeedNLSJac29 SEED_VAR */ + (jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac29 SEED_VAR */) * (data->simulationInfo->realParameter[302] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac29 SEED_VAR */) * (data->simulationInfo->realParameter[303] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[304] /* pwLine4.Z.im PARAM */) * (jacobian->seedVars[6] /* pwLine4.is.im.SeedNLSJac29 SEED_VAR */ + ((-jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac29 SEED_VAR */)) * (data->simulationInfo->realParameter[302] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac29 SEED_VAR */) * (data->simulationInfo->realParameter[303] /* pwLine4.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 398
type: SIMPLE_ASSIGN
$res_NLSJac29_3.$pDERNLSJac29.dummyVarNLSJac29 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.ir.re.SeedNLSJac29 else pwLine3.vr.re.SeedNLSJac29 - pwLine1.vs.re.SeedNLSJac29 - (pwLine3.Z.re * (pwLine3.ir.re.SeedNLSJac29 + pwLine3.vr.im.SeedNLSJac29 * pwLine3.Y.im - pwLine3.vr.re.SeedNLSJac29 * pwLine3.Y.re) - pwLine3.Z.im * (pwLine3.ir.im.SeedNLSJac29 + (-pwLine3.vr.re.SeedNLSJac29) * pwLine3.Y.im - pwLine3.vr.im.SeedNLSJac29 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_398(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,398};
  modelica_boolean tmp64;
  modelica_boolean tmp65;
  RELATIONHYSTERESIS(tmp64, data->localData[0]->timeValue, data->simulationInfo->realParameter[295] /* pwLine3.t1 PARAM */, 3, GreaterEq);
  RELATIONHYSTERESIS(tmp65, data->localData[0]->timeValue, data->simulationInfo->realParameter[296] /* pwLine3.t2 PARAM */, 4, Less);
  jacobian->resultVars[2] /* $res_NLSJac29_3.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_VAR */ = ((tmp64 && tmp65)?jacobian->seedVars[8] /* pwLine3.ir.re.SeedNLSJac29 SEED_VAR */:jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac29 SEED_VAR */ - jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac29 SEED_VAR */ - ((data->simulationInfo->realParameter[294] /* pwLine3.Z.re PARAM */) * (jacobian->seedVars[8] /* pwLine3.ir.re.SeedNLSJac29 SEED_VAR */ + (jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac29 SEED_VAR */) * (data->simulationInfo->realParameter[291] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac29 SEED_VAR */) * (data->simulationInfo->realParameter[292] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[293] /* pwLine3.Z.im PARAM */) * (jacobian->seedVars[7] /* pwLine3.ir.im.SeedNLSJac29 SEED_VAR */ + ((-jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac29 SEED_VAR */)) * (data->simulationInfo->realParameter[291] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac29 SEED_VAR */) * (data->simulationInfo->realParameter[292] /* pwLine3.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 399
type: SIMPLE_ASSIGN
$res_NLSJac29_4.$pDERNLSJac29.dummyVarNLSJac29 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.is.im.SeedNLSJac29 else pwLine3.vr.im.SeedNLSJac29 - pwLine1.vr.im.SeedNLSJac29 - (pwLine4.Z.re * (pwLine4.is.im.SeedNLSJac29 + (-pwLine3.vr.re.SeedNLSJac29) * pwLine4.Y.im - pwLine3.vr.im.SeedNLSJac29 * pwLine4.Y.re) + pwLine4.Z.im * (pwLine4.is.re.SeedNLSJac29 + pwLine3.vr.im.SeedNLSJac29 * pwLine4.Y.im - pwLine3.vr.re.SeedNLSJac29 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_399(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,399};
  modelica_boolean tmp66;
  modelica_boolean tmp67;
  RELATIONHYSTERESIS(tmp66, data->localData[0]->timeValue, data->simulationInfo->realParameter[306] /* pwLine4.t1 PARAM */, 9, GreaterEq);
  RELATIONHYSTERESIS(tmp67, data->localData[0]->timeValue, data->simulationInfo->realParameter[307] /* pwLine4.t2 PARAM */, 10, Less);
  jacobian->resultVars[3] /* $res_NLSJac29_4.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_VAR */ = ((tmp66 && tmp67)?jacobian->seedVars[6] /* pwLine4.is.im.SeedNLSJac29 SEED_VAR */:jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac29 SEED_VAR */ - jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac29 SEED_VAR */ - ((data->simulationInfo->realParameter[305] /* pwLine4.Z.re PARAM */) * (jacobian->seedVars[6] /* pwLine4.is.im.SeedNLSJac29 SEED_VAR */ + ((-jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac29 SEED_VAR */)) * (data->simulationInfo->realParameter[302] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac29 SEED_VAR */) * (data->simulationInfo->realParameter[303] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[304] /* pwLine4.Z.im PARAM */) * (jacobian->seedVars[9] /* pwLine4.is.re.SeedNLSJac29 SEED_VAR */ + (jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac29 SEED_VAR */) * (data->simulationInfo->realParameter[302] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac29 SEED_VAR */) * (data->simulationInfo->realParameter[303] /* pwLine4.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 400
type: SIMPLE_ASSIGN
$res_NLSJac29_5.$pDERNLSJac29.dummyVarNLSJac29 = if time < pwFault.t1 then pwFault.p.ir.$pDERNLSJac29.dummyVarNLSJac29 else if time < pwFault.t2 and pwFault.ground then pwLine3.vr.im.SeedNLSJac29 else if time < pwFault.t2 then pwFault.p.ir.$pDERNLSJac29.dummyVarNLSJac29 - (pwFault.R * pwLine3.vr.re.SeedNLSJac29 + pwFault.X * pwLine3.vr.im.SeedNLSJac29) * (pwFault.R ^ 2.0 + pwFault.X ^ 2.0) / (pwFault.R ^ 2.0 + pwFault.X ^ 2.0) ^ 2.0 else pwFault.p.ir.$pDERNLSJac29.dummyVarNLSJac29
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_400(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,400};
  modelica_boolean tmp68;
  modelica_boolean tmp69;
  modelica_boolean tmp70;
  modelica_real tmp71;
  modelica_real tmp72;
  modelica_real tmp73;
  modelica_real tmp74;
  modelica_real tmp75;
  modelica_boolean tmp76;
  modelica_real tmp77;
  modelica_boolean tmp78;
  modelica_real tmp79;
  modelica_boolean tmp80;
  modelica_real tmp81;
  RELATIONHYSTERESIS(tmp68, data->localData[0]->timeValue, data->simulationInfo->realParameter[262] /* pwFault.t1 PARAM */, 11, Less);
  tmp80 = (modelica_boolean)tmp68;
  if(tmp80)
  {
    tmp81 = jacobian->tmpVars[19] /* pwFault.p.ir.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp69, data->localData[0]->timeValue, data->simulationInfo->realParameter[263] /* pwFault.t2 PARAM */, 12, Less);
    tmp78 = (modelica_boolean)(tmp69 && data->simulationInfo->booleanParameter[66] /* pwFault.ground PARAM */);
    if(tmp78)
    {
      tmp79 = jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac29 SEED_VAR */;
    }
    else
    {
      RELATIONHYSTERESIS(tmp70, data->localData[0]->timeValue, data->simulationInfo->realParameter[263] /* pwFault.t2 PARAM */, 12, Less);
      tmp76 = (modelica_boolean)tmp70;
      if(tmp76)
      {
        tmp71 = data->simulationInfo->realParameter[260] /* pwFault.R PARAM */;
        tmp72 = data->simulationInfo->realParameter[261] /* pwFault.X PARAM */;
        tmp73 = data->simulationInfo->realParameter[260] /* pwFault.R PARAM */;
        tmp74 = data->simulationInfo->realParameter[261] /* pwFault.X PARAM */;
        tmp75 = (tmp73 * tmp73) + (tmp74 * tmp74);
        tmp77 = jacobian->tmpVars[19] /* pwFault.p.ir.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */ - (DIVISION(((data->simulationInfo->realParameter[260] /* pwFault.R PARAM */) * (jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac29 SEED_VAR */) + (data->simulationInfo->realParameter[261] /* pwFault.X PARAM */) * (jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac29 SEED_VAR */)) * ((tmp71 * tmp71) + (tmp72 * tmp72)),(tmp75 * tmp75),"(pwFault.R ^ 2.0 + pwFault.X ^ 2.0) ^ 2.0"));
      }
      else
      {
        tmp77 = jacobian->tmpVars[19] /* pwFault.p.ir.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */;
      }
      tmp79 = tmp77;
    }
    tmp81 = tmp79;
  }
  jacobian->resultVars[4] /* $res_NLSJac29_5.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_VAR */ = tmp81;
  TRACE_POP
}

/*
equation index: 401
type: SIMPLE_ASSIGN
$res_NLSJac29_6.$pDERNLSJac29.dummyVarNLSJac29 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.ir.re.SeedNLSJac29 else pwLine1.vr.re.SeedNLSJac29 - pwLine3.vr.re.SeedNLSJac29 - (pwLine4.Z.re * (pwLine4.ir.re.SeedNLSJac29 + pwLine1.vr.im.SeedNLSJac29 * pwLine4.Y.im - pwLine1.vr.re.SeedNLSJac29 * pwLine4.Y.re) - pwLine4.Z.im * (pwLine4.ir.im.$pDERNLSJac29.dummyVarNLSJac29 + (-pwLine1.vr.re.SeedNLSJac29) * pwLine4.Y.im - pwLine1.vr.im.SeedNLSJac29 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_401(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,401};
  modelica_boolean tmp82;
  modelica_boolean tmp83;
  RELATIONHYSTERESIS(tmp82, data->localData[0]->timeValue, data->simulationInfo->realParameter[306] /* pwLine4.t1 PARAM */, 9, GreaterEq);
  RELATIONHYSTERESIS(tmp83, data->localData[0]->timeValue, data->simulationInfo->realParameter[307] /* pwLine4.t2 PARAM */, 10, Less);
  jacobian->resultVars[5] /* $res_NLSJac29_6.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_VAR */ = ((tmp82 && tmp83)?jacobian->seedVars[11] /* pwLine4.ir.re.SeedNLSJac29 SEED_VAR */:jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac29 SEED_VAR */ - jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac29 SEED_VAR */ - ((data->simulationInfo->realParameter[305] /* pwLine4.Z.re PARAM */) * (jacobian->seedVars[11] /* pwLine4.ir.re.SeedNLSJac29 SEED_VAR */ + (jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac29 SEED_VAR */) * (data->simulationInfo->realParameter[302] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac29 SEED_VAR */) * (data->simulationInfo->realParameter[303] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[304] /* pwLine4.Z.im PARAM */) * (jacobian->tmpVars[18] /* pwLine4.ir.im.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac29 SEED_VAR */)) * (data->simulationInfo->realParameter[302] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac29 SEED_VAR */) * (data->simulationInfo->realParameter[303] /* pwLine4.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 402
type: SIMPLE_ASSIGN
$res_NLSJac29_7.$pDERNLSJac29.dummyVarNLSJac29 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.ir.re.$pDERNLSJac29.dummyVarNLSJac29 else pwLine1.vr.re.SeedNLSJac29 - pwLine1.vs.re.SeedNLSJac29 - (pwLine1.Z.re * (pwLine1.ir.re.$pDERNLSJac29.dummyVarNLSJac29 + pwLine1.vr.im.SeedNLSJac29 * pwLine1.Y.im - pwLine1.vr.re.SeedNLSJac29 * pwLine1.Y.re) - pwLine1.Z.im * (pwLine1.ir.im.SeedNLSJac29 + (-pwLine1.vr.re.SeedNLSJac29) * pwLine1.Y.im - pwLine1.vr.im.SeedNLSJac29 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_402(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,402};
  modelica_boolean tmp84;
  modelica_boolean tmp85;
  RELATIONHYSTERESIS(tmp84, data->localData[0]->timeValue, data->simulationInfo->realParameter[284] /* pwLine1.t1 PARAM */, 13, GreaterEq);
  RELATIONHYSTERESIS(tmp85, data->localData[0]->timeValue, data->simulationInfo->realParameter[285] /* pwLine1.t2 PARAM */, 14, Less);
  jacobian->resultVars[6] /* $res_NLSJac29_7.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_VAR */ = ((tmp84 && tmp85)?jacobian->tmpVars[17] /* pwLine1.ir.re.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */:jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac29 SEED_VAR */ - jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac29 SEED_VAR */ - ((data->simulationInfo->realParameter[283] /* pwLine1.Z.re PARAM */) * (jacobian->tmpVars[17] /* pwLine1.ir.re.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac29 SEED_VAR */) * (data->simulationInfo->realParameter[280] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac29 SEED_VAR */) * (data->simulationInfo->realParameter[281] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[282] /* pwLine1.Z.im PARAM */) * (jacobian->seedVars[10] /* pwLine1.ir.im.SeedNLSJac29 SEED_VAR */ + ((-jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac29 SEED_VAR */)) * (data->simulationInfo->realParameter[280] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac29 SEED_VAR */) * (data->simulationInfo->realParameter[281] /* pwLine1.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 403
type: SIMPLE_ASSIGN
$res_NLSJac29_8.$pDERNLSJac29.dummyVarNLSJac29 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.ir.im.$pDERNLSJac29.dummyVarNLSJac29 else pwLine1.vr.im.SeedNLSJac29 - pwLine3.vr.im.SeedNLSJac29 - (pwLine4.Z.re * (pwLine4.ir.im.$pDERNLSJac29.dummyVarNLSJac29 + (-pwLine1.vr.re.SeedNLSJac29) * pwLine4.Y.im - pwLine1.vr.im.SeedNLSJac29 * pwLine4.Y.re) + pwLine4.Z.im * (pwLine4.ir.re.SeedNLSJac29 + pwLine1.vr.im.SeedNLSJac29 * pwLine4.Y.im - pwLine1.vr.re.SeedNLSJac29 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_403(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,403};
  modelica_boolean tmp86;
  modelica_boolean tmp87;
  RELATIONHYSTERESIS(tmp86, data->localData[0]->timeValue, data->simulationInfo->realParameter[306] /* pwLine4.t1 PARAM */, 9, GreaterEq);
  RELATIONHYSTERESIS(tmp87, data->localData[0]->timeValue, data->simulationInfo->realParameter[307] /* pwLine4.t2 PARAM */, 10, Less);
  jacobian->resultVars[7] /* $res_NLSJac29_8.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_VAR */ = ((tmp86 && tmp87)?jacobian->tmpVars[18] /* pwLine4.ir.im.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */:jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac29 SEED_VAR */ - jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac29 SEED_VAR */ - ((data->simulationInfo->realParameter[305] /* pwLine4.Z.re PARAM */) * (jacobian->tmpVars[18] /* pwLine4.ir.im.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac29 SEED_VAR */)) * (data->simulationInfo->realParameter[302] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac29 SEED_VAR */) * (data->simulationInfo->realParameter[303] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[304] /* pwLine4.Z.im PARAM */) * (jacobian->seedVars[11] /* pwLine4.ir.re.SeedNLSJac29 SEED_VAR */ + (jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac29 SEED_VAR */) * (data->simulationInfo->realParameter[302] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac29 SEED_VAR */) * (data->simulationInfo->realParameter[303] /* pwLine4.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 404
type: SIMPLE_ASSIGN
$res_NLSJac29_9.$pDERNLSJac29.dummyVarNLSJac29 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.ir.im.SeedNLSJac29 else pwLine3.vr.im.SeedNLSJac29 - pwLine1.vs.im.SeedNLSJac29 - (pwLine3.Z.re * (pwLine3.ir.im.SeedNLSJac29 + (-pwLine3.vr.re.SeedNLSJac29) * pwLine3.Y.im - pwLine3.vr.im.SeedNLSJac29 * pwLine3.Y.re) + pwLine3.Z.im * (pwLine3.ir.re.SeedNLSJac29 + pwLine3.vr.im.SeedNLSJac29 * pwLine3.Y.im - pwLine3.vr.re.SeedNLSJac29 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_404(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,404};
  modelica_boolean tmp88;
  modelica_boolean tmp89;
  RELATIONHYSTERESIS(tmp88, data->localData[0]->timeValue, data->simulationInfo->realParameter[295] /* pwLine3.t1 PARAM */, 3, GreaterEq);
  RELATIONHYSTERESIS(tmp89, data->localData[0]->timeValue, data->simulationInfo->realParameter[296] /* pwLine3.t2 PARAM */, 4, Less);
  jacobian->resultVars[8] /* $res_NLSJac29_9.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_VAR */ = ((tmp88 && tmp89)?jacobian->seedVars[7] /* pwLine3.ir.im.SeedNLSJac29 SEED_VAR */:jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac29 SEED_VAR */ - jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac29 SEED_VAR */ - ((data->simulationInfo->realParameter[294] /* pwLine3.Z.re PARAM */) * (jacobian->seedVars[7] /* pwLine3.ir.im.SeedNLSJac29 SEED_VAR */ + ((-jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac29 SEED_VAR */)) * (data->simulationInfo->realParameter[291] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac29 SEED_VAR */) * (data->simulationInfo->realParameter[292] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[293] /* pwLine3.Z.im PARAM */) * (jacobian->seedVars[8] /* pwLine3.ir.re.SeedNLSJac29 SEED_VAR */ + (jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac29 SEED_VAR */) * (data->simulationInfo->realParameter[291] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac29 SEED_VAR */) * (data->simulationInfo->realParameter[292] /* pwLine3.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 405
type: SIMPLE_ASSIGN
$res_NLSJac29_10.$pDERNLSJac29.dummyVarNLSJac29 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.is.re.$pDERNLSJac29.dummyVarNLSJac29 else pwLine.vs.re.$pDERNLSJac29.dummyVarNLSJac29 - pwLine1.vs.re.SeedNLSJac29 - (pwLine.Z.re * (pwLine.is.re.$pDERNLSJac29.dummyVarNLSJac29 + pwLine.vs.im.$pDERNLSJac29.dummyVarNLSJac29 * pwLine.Y.im - pwLine.vs.re.$pDERNLSJac29.dummyVarNLSJac29 * pwLine.Y.re) - pwLine.Z.im * (pwLine.is.im.$pDERNLSJac29.dummyVarNLSJac29 + (-pwLine.vs.re.$pDERNLSJac29.dummyVarNLSJac29) * pwLine.Y.im - pwLine.vs.im.$pDERNLSJac29.dummyVarNLSJac29 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_405(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,405};
  modelica_boolean tmp90;
  modelica_boolean tmp91;
  RELATIONHYSTERESIS(tmp90, data->localData[0]->timeValue, data->simulationInfo->realParameter[273] /* pwLine.t1 PARAM */, 1, GreaterEq);
  RELATIONHYSTERESIS(tmp91, data->localData[0]->timeValue, data->simulationInfo->realParameter[274] /* pwLine.t2 PARAM */, 2, Less);
  jacobian->resultVars[9] /* $res_NLSJac29_10.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_VAR */ = ((tmp90 && tmp91)?jacobian->tmpVars[6] /* pwLine.is.re.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[12] /* pwLine.vs.re.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac29 SEED_VAR */ - ((data->simulationInfo->realParameter[272] /* pwLine.Z.re PARAM */) * (jacobian->tmpVars[6] /* pwLine.is.re.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */ + (jacobian->tmpVars[11] /* pwLine.vs.im.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[269] /* pwLine.Y.im PARAM */) - ((jacobian->tmpVars[12] /* pwLine.vs.re.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[270] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[271] /* pwLine.Z.im PARAM */) * (jacobian->tmpVars[7] /* pwLine.is.im.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */ + ((-jacobian->tmpVars[12] /* pwLine.vs.re.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[269] /* pwLine.Y.im PARAM */) - ((jacobian->tmpVars[11] /* pwLine.vs.im.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[270] /* pwLine.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 406
type: SIMPLE_ASSIGN
$res_NLSJac29_11.$pDERNLSJac29.dummyVarNLSJac29 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.is.im.$pDERNLSJac29.dummyVarNLSJac29 else pwLine.vs.im.$pDERNLSJac29.dummyVarNLSJac29 - pwLine1.vs.im.SeedNLSJac29 - (pwLine.Z.re * (pwLine.is.im.$pDERNLSJac29.dummyVarNLSJac29 + (-pwLine.vs.re.$pDERNLSJac29.dummyVarNLSJac29) * pwLine.Y.im - pwLine.vs.im.$pDERNLSJac29.dummyVarNLSJac29 * pwLine.Y.re) + pwLine.Z.im * (pwLine.is.re.$pDERNLSJac29.dummyVarNLSJac29 + pwLine.vs.im.$pDERNLSJac29.dummyVarNLSJac29 * pwLine.Y.im - pwLine.vs.re.$pDERNLSJac29.dummyVarNLSJac29 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_406(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,406};
  modelica_boolean tmp92;
  modelica_boolean tmp93;
  RELATIONHYSTERESIS(tmp92, data->localData[0]->timeValue, data->simulationInfo->realParameter[273] /* pwLine.t1 PARAM */, 1, GreaterEq);
  RELATIONHYSTERESIS(tmp93, data->localData[0]->timeValue, data->simulationInfo->realParameter[274] /* pwLine.t2 PARAM */, 2, Less);
  jacobian->resultVars[10] /* $res_NLSJac29_11.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_VAR */ = ((tmp92 && tmp93)?jacobian->tmpVars[7] /* pwLine.is.im.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[11] /* pwLine.vs.im.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac29 SEED_VAR */ - ((data->simulationInfo->realParameter[272] /* pwLine.Z.re PARAM */) * (jacobian->tmpVars[7] /* pwLine.is.im.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */ + ((-jacobian->tmpVars[12] /* pwLine.vs.re.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[269] /* pwLine.Y.im PARAM */) - ((jacobian->tmpVars[11] /* pwLine.vs.im.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[270] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[271] /* pwLine.Z.im PARAM */) * (jacobian->tmpVars[6] /* pwLine.is.re.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */ + (jacobian->tmpVars[11] /* pwLine.vs.im.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[269] /* pwLine.Y.im PARAM */) - ((jacobian->tmpVars[12] /* pwLine.vs.re.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[270] /* pwLine.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 407
type: SIMPLE_ASSIGN
$res_NLSJac29_12.$pDERNLSJac29.dummyVarNLSJac29 = pwLine1.vs.im * constantLoad.p.ir.SeedNLSJac29 + pwLine1.vs.im.SeedNLSJac29 * constantLoad.p.ir + (-pwLine1.vs.re.SeedNLSJac29) * constantLoad.p.ii - constantLoad.Q.$pDERNLSJac29.dummyVarNLSJac29 - pwLine1.vs.re * constantLoad.p.ii.SeedNLSJac29
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_407(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,407};
  jacobian->resultVars[11] /* $res_NLSJac29_12.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_VAR */ = (data->localData[0]->realVars[122] /* pwLine1.vs.im variable */) * (jacobian->seedVars[4] /* constantLoad.p.ir.SeedNLSJac29 SEED_VAR */) + (jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac29 SEED_VAR */) * (data->localData[0]->realVars[52] /* constantLoad.p.ir variable */) + ((-jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac29 SEED_VAR */)) * (data->localData[0]->realVars[51] /* constantLoad.p.ii variable */) - jacobian->tmpVars[3] /* constantLoad.Q.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */ - ((data->localData[0]->realVars[123] /* pwLine1.vs.re variable */) * (jacobian->seedVars[5] /* constantLoad.p.ii.SeedNLSJac29 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 408
type: SIMPLE_ASSIGN
$res_NLSJac29_13.$pDERNLSJac29.dummyVarNLSJac29 = pwLine1.vs.im * constantLoad.p.ii.SeedNLSJac29 + pwLine1.vs.im.SeedNLSJac29 * constantLoad.p.ii + pwLine1.vs.re * constantLoad.p.ir.SeedNLSJac29 + pwLine1.vs.re.SeedNLSJac29 * constantLoad.p.ir - constantLoad.P.$pDERNLSJac29.dummyVarNLSJac29
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_408(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,408};
  jacobian->resultVars[12] /* $res_NLSJac29_13.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_VAR */ = (data->localData[0]->realVars[122] /* pwLine1.vs.im variable */) * (jacobian->seedVars[5] /* constantLoad.p.ii.SeedNLSJac29 SEED_VAR */) + (jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac29 SEED_VAR */) * (data->localData[0]->realVars[51] /* constantLoad.p.ii variable */) + (data->localData[0]->realVars[123] /* pwLine1.vs.re variable */) * (jacobian->seedVars[4] /* constantLoad.p.ir.SeedNLSJac29 SEED_VAR */) + (jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac29 SEED_VAR */) * (data->localData[0]->realVars[52] /* constantLoad.p.ir variable */) - jacobian->tmpVars[4] /* constantLoad.P.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 409
type: SIMPLE_ASSIGN
$res_NLSJac29_14.$pDERNLSJac29.dummyVarNLSJac29 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.ir.im.SeedNLSJac29 else pwLine1.vs.im.SeedNLSJac29 - pwLine.vs.im.$pDERNLSJac29.dummyVarNLSJac29 - (pwLine.Z.re * (pwLine.ir.im.SeedNLSJac29 + (-pwLine1.vs.re.SeedNLSJac29) * pwLine.Y.im - pwLine1.vs.im.SeedNLSJac29 * pwLine.Y.re) + pwLine.Z.im * (pwLine.ir.re.SeedNLSJac29 + pwLine1.vs.im.SeedNLSJac29 * pwLine.Y.im - pwLine1.vs.re.SeedNLSJac29 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_409(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,409};
  modelica_boolean tmp94;
  modelica_boolean tmp95;
  RELATIONHYSTERESIS(tmp94, data->localData[0]->timeValue, data->simulationInfo->realParameter[273] /* pwLine.t1 PARAM */, 1, GreaterEq);
  RELATIONHYSTERESIS(tmp95, data->localData[0]->timeValue, data->simulationInfo->realParameter[274] /* pwLine.t2 PARAM */, 2, Less);
  jacobian->resultVars[13] /* $res_NLSJac29_14.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_VAR */ = ((tmp94 && tmp95)?jacobian->seedVars[1] /* pwLine.ir.im.SeedNLSJac29 SEED_VAR */:jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac29 SEED_VAR */ - jacobian->tmpVars[11] /* pwLine.vs.im.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[272] /* pwLine.Z.re PARAM */) * (jacobian->seedVars[1] /* pwLine.ir.im.SeedNLSJac29 SEED_VAR */ + ((-jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac29 SEED_VAR */)) * (data->simulationInfo->realParameter[269] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac29 SEED_VAR */) * (data->simulationInfo->realParameter[270] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[271] /* pwLine.Z.im PARAM */) * (jacobian->seedVars[3] /* pwLine.ir.re.SeedNLSJac29 SEED_VAR */ + (jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac29 SEED_VAR */) * (data->simulationInfo->realParameter[269] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac29 SEED_VAR */) * (data->simulationInfo->realParameter[270] /* pwLine.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 410
type: SIMPLE_ASSIGN
$res_NLSJac29_15.$pDERNLSJac29.dummyVarNLSJac29 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.ir.re.SeedNLSJac29 else pwLine1.vs.re.SeedNLSJac29 - pwLine.vs.re.$pDERNLSJac29.dummyVarNLSJac29 - (pwLine.Z.re * (pwLine.ir.re.SeedNLSJac29 + pwLine1.vs.im.SeedNLSJac29 * pwLine.Y.im - pwLine1.vs.re.SeedNLSJac29 * pwLine.Y.re) - pwLine.Z.im * (pwLine.ir.im.SeedNLSJac29 + (-pwLine1.vs.re.SeedNLSJac29) * pwLine.Y.im - pwLine1.vs.im.SeedNLSJac29 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_410(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,410};
  modelica_boolean tmp96;
  modelica_boolean tmp97;
  RELATIONHYSTERESIS(tmp96, data->localData[0]->timeValue, data->simulationInfo->realParameter[273] /* pwLine.t1 PARAM */, 1, GreaterEq);
  RELATIONHYSTERESIS(tmp97, data->localData[0]->timeValue, data->simulationInfo->realParameter[274] /* pwLine.t2 PARAM */, 2, Less);
  jacobian->resultVars[14] /* $res_NLSJac29_15.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_VAR */ = ((tmp96 && tmp97)?jacobian->seedVars[3] /* pwLine.ir.re.SeedNLSJac29 SEED_VAR */:jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac29 SEED_VAR */ - jacobian->tmpVars[12] /* pwLine.vs.re.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[272] /* pwLine.Z.re PARAM */) * (jacobian->seedVars[3] /* pwLine.ir.re.SeedNLSJac29 SEED_VAR */ + (jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac29 SEED_VAR */) * (data->simulationInfo->realParameter[269] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac29 SEED_VAR */) * (data->simulationInfo->realParameter[270] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[271] /* pwLine.Z.im PARAM */) * (jacobian->seedVars[1] /* pwLine.ir.im.SeedNLSJac29 SEED_VAR */ + ((-jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac29 SEED_VAR */)) * (data->simulationInfo->realParameter[269] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac29 SEED_VAR */) * (data->simulationInfo->realParameter[270] /* pwLine.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 411
type: SIMPLE_ASSIGN
$res_NLSJac29_16.$pDERNLSJac29.dummyVarNLSJac29 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.is.re.$pDERNLSJac29.dummyVarNLSJac29 else pwLine1.vs.re.SeedNLSJac29 - pwLine3.vr.re.SeedNLSJac29 - (pwLine3.Z.re * (pwLine3.is.re.$pDERNLSJac29.dummyVarNLSJac29 + pwLine1.vs.im.SeedNLSJac29 * pwLine3.Y.im - pwLine1.vs.re.SeedNLSJac29 * pwLine3.Y.re) - pwLine3.Z.im * (pwLine3.is.im.$pDERNLSJac29.dummyVarNLSJac29 + (-pwLine1.vs.re.SeedNLSJac29) * pwLine3.Y.im - pwLine1.vs.im.SeedNLSJac29 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_411(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,411};
  modelica_boolean tmp98;
  modelica_boolean tmp99;
  RELATIONHYSTERESIS(tmp98, data->localData[0]->timeValue, data->simulationInfo->realParameter[295] /* pwLine3.t1 PARAM */, 3, GreaterEq);
  RELATIONHYSTERESIS(tmp99, data->localData[0]->timeValue, data->simulationInfo->realParameter[296] /* pwLine3.t2 PARAM */, 4, Less);
  jacobian->resultVars[15] /* $res_NLSJac29_16.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_VAR */ = ((tmp98 && tmp99)?jacobian->tmpVars[21] /* pwLine3.is.re.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */:jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac29 SEED_VAR */ - jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac29 SEED_VAR */ - ((data->simulationInfo->realParameter[294] /* pwLine3.Z.re PARAM */) * (jacobian->tmpVars[21] /* pwLine3.is.re.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac29 SEED_VAR */) * (data->simulationInfo->realParameter[291] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac29 SEED_VAR */) * (data->simulationInfo->realParameter[292] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[293] /* pwLine3.Z.im PARAM */) * (jacobian->tmpVars[22] /* pwLine3.is.im.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac29 SEED_VAR */)) * (data->simulationInfo->realParameter[291] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac29 SEED_VAR */) * (data->simulationInfo->realParameter[292] /* pwLine3.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 412
type: SIMPLE_ASSIGN
$res_NLSJac29_17.$pDERNLSJac29.dummyVarNLSJac29 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.is.im.$pDERNLSJac29.dummyVarNLSJac29 else pwLine1.vs.im.SeedNLSJac29 - pwLine3.vr.im.SeedNLSJac29 - (pwLine3.Z.re * (pwLine3.is.im.$pDERNLSJac29.dummyVarNLSJac29 + (-pwLine1.vs.re.SeedNLSJac29) * pwLine3.Y.im - pwLine1.vs.im.SeedNLSJac29 * pwLine3.Y.re) + pwLine3.Z.im * (pwLine3.is.re.$pDERNLSJac29.dummyVarNLSJac29 + pwLine1.vs.im.SeedNLSJac29 * pwLine3.Y.im - pwLine1.vs.re.SeedNLSJac29 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_412(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,412};
  modelica_boolean tmp100;
  modelica_boolean tmp101;
  RELATIONHYSTERESIS(tmp100, data->localData[0]->timeValue, data->simulationInfo->realParameter[295] /* pwLine3.t1 PARAM */, 3, GreaterEq);
  RELATIONHYSTERESIS(tmp101, data->localData[0]->timeValue, data->simulationInfo->realParameter[296] /* pwLine3.t2 PARAM */, 4, Less);
  jacobian->resultVars[16] /* $res_NLSJac29_17.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_VAR */ = ((tmp100 && tmp101)?jacobian->tmpVars[22] /* pwLine3.is.im.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */:jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac29 SEED_VAR */ - jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac29 SEED_VAR */ - ((data->simulationInfo->realParameter[294] /* pwLine3.Z.re PARAM */) * (jacobian->tmpVars[22] /* pwLine3.is.im.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac29 SEED_VAR */)) * (data->simulationInfo->realParameter[291] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac29 SEED_VAR */) * (data->simulationInfo->realParameter[292] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[293] /* pwLine3.Z.im PARAM */) * (jacobian->tmpVars[21] /* pwLine3.is.re.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac29 SEED_VAR */) * (data->simulationInfo->realParameter[291] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac29 SEED_VAR */) * (data->simulationInfo->realParameter[292] /* pwLine3.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 413
type: SIMPLE_ASSIGN
$res_NLSJac29_18.$pDERNLSJac29.dummyVarNLSJac29 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.is.im.SeedNLSJac29 else pwLine1.vs.im.SeedNLSJac29 - pwLine1.vr.im.SeedNLSJac29 - (pwLine1.Z.re * (pwLine1.is.im.SeedNLSJac29 + (-pwLine1.vs.re.SeedNLSJac29) * pwLine1.Y.im - pwLine1.vs.im.SeedNLSJac29 * pwLine1.Y.re) + pwLine1.Z.im * (pwLine1.is.re.SeedNLSJac29 + pwLine1.vs.im.SeedNLSJac29 * pwLine1.Y.im - pwLine1.vs.re.SeedNLSJac29 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_413(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,413};
  modelica_boolean tmp102;
  modelica_boolean tmp103;
  RELATIONHYSTERESIS(tmp102, data->localData[0]->timeValue, data->simulationInfo->realParameter[284] /* pwLine1.t1 PARAM */, 13, GreaterEq);
  RELATIONHYSTERESIS(tmp103, data->localData[0]->timeValue, data->simulationInfo->realParameter[285] /* pwLine1.t2 PARAM */, 14, Less);
  jacobian->resultVars[17] /* $res_NLSJac29_18.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_VAR */ = ((tmp102 && tmp103)?jacobian->seedVars[0] /* pwLine1.is.im.SeedNLSJac29 SEED_VAR */:jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac29 SEED_VAR */ - jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac29 SEED_VAR */ - ((data->simulationInfo->realParameter[283] /* pwLine1.Z.re PARAM */) * (jacobian->seedVars[0] /* pwLine1.is.im.SeedNLSJac29 SEED_VAR */ + ((-jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac29 SEED_VAR */)) * (data->simulationInfo->realParameter[280] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac29 SEED_VAR */) * (data->simulationInfo->realParameter[281] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[282] /* pwLine1.Z.im PARAM */) * (jacobian->seedVars[2] /* pwLine1.is.re.SeedNLSJac29 SEED_VAR */ + (jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac29 SEED_VAR */) * (data->simulationInfo->realParameter[280] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac29 SEED_VAR */) * (data->simulationInfo->realParameter[281] /* pwLine1.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 414
type: SIMPLE_ASSIGN
$res_NLSJac29_19.$pDERNLSJac29.dummyVarNLSJac29 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.is.re.SeedNLSJac29 else pwLine1.vs.re.SeedNLSJac29 - pwLine1.vr.re.SeedNLSJac29 - (pwLine1.Z.re * (pwLine1.is.re.SeedNLSJac29 + pwLine1.vs.im.SeedNLSJac29 * pwLine1.Y.im - pwLine1.vs.re.SeedNLSJac29 * pwLine1.Y.re) - pwLine1.Z.im * (pwLine1.is.im.SeedNLSJac29 + (-pwLine1.vs.re.SeedNLSJac29) * pwLine1.Y.im - pwLine1.vs.im.SeedNLSJac29 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_414(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,414};
  modelica_boolean tmp104;
  modelica_boolean tmp105;
  RELATIONHYSTERESIS(tmp104, data->localData[0]->timeValue, data->simulationInfo->realParameter[284] /* pwLine1.t1 PARAM */, 13, GreaterEq);
  RELATIONHYSTERESIS(tmp105, data->localData[0]->timeValue, data->simulationInfo->realParameter[285] /* pwLine1.t2 PARAM */, 14, Less);
  jacobian->resultVars[18] /* $res_NLSJac29_19.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_VAR */ = ((tmp104 && tmp105)?jacobian->seedVars[2] /* pwLine1.is.re.SeedNLSJac29 SEED_VAR */:jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac29 SEED_VAR */ - jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac29 SEED_VAR */ - ((data->simulationInfo->realParameter[283] /* pwLine1.Z.re PARAM */) * (jacobian->seedVars[2] /* pwLine1.is.re.SeedNLSJac29 SEED_VAR */ + (jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac29 SEED_VAR */) * (data->simulationInfo->realParameter[280] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac29 SEED_VAR */) * (data->simulationInfo->realParameter[281] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[282] /* pwLine1.Z.im PARAM */) * (jacobian->seedVars[0] /* pwLine1.is.im.SeedNLSJac29 SEED_VAR */ + ((-jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac29 SEED_VAR */)) * (data->simulationInfo->realParameter[280] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac29 SEED_VAR */) * (data->simulationInfo->realParameter[281] /* pwLine1.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 415
type: SIMPLE_ASSIGN
$res_NLSJac29_20.$pDERNLSJac29.dummyVarNLSJac29 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.ir.im.SeedNLSJac29 else pwLine1.vr.im.SeedNLSJac29 - pwLine1.vs.im.SeedNLSJac29 - (pwLine1.Z.re * (pwLine1.ir.im.SeedNLSJac29 + (-pwLine1.vr.re.SeedNLSJac29) * pwLine1.Y.im - pwLine1.vr.im.SeedNLSJac29 * pwLine1.Y.re) + pwLine1.Z.im * (pwLine1.ir.re.$pDERNLSJac29.dummyVarNLSJac29 + pwLine1.vr.im.SeedNLSJac29 * pwLine1.Y.im - pwLine1.vr.re.SeedNLSJac29 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_415(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,415};
  modelica_boolean tmp106;
  modelica_boolean tmp107;
  RELATIONHYSTERESIS(tmp106, data->localData[0]->timeValue, data->simulationInfo->realParameter[284] /* pwLine1.t1 PARAM */, 13, GreaterEq);
  RELATIONHYSTERESIS(tmp107, data->localData[0]->timeValue, data->simulationInfo->realParameter[285] /* pwLine1.t2 PARAM */, 14, Less);
  jacobian->resultVars[19] /* $res_NLSJac29_20.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_VAR */ = ((tmp106 && tmp107)?jacobian->seedVars[10] /* pwLine1.ir.im.SeedNLSJac29 SEED_VAR */:jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac29 SEED_VAR */ - jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac29 SEED_VAR */ - ((data->simulationInfo->realParameter[283] /* pwLine1.Z.re PARAM */) * (jacobian->seedVars[10] /* pwLine1.ir.im.SeedNLSJac29 SEED_VAR */ + ((-jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac29 SEED_VAR */)) * (data->simulationInfo->realParameter[280] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac29 SEED_VAR */) * (data->simulationInfo->realParameter[281] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[282] /* pwLine1.Z.im PARAM */) * (jacobian->tmpVars[17] /* pwLine1.ir.re.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac29 SEED_VAR */) * (data->simulationInfo->realParameter[280] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac29 SEED_VAR */) * (data->simulationInfo->realParameter[281] /* pwLine1.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 416
type: SIMPLE_ASSIGN
$res_NLSJac29_21.$pDERNLSJac29.dummyVarNLSJac29 = $cse1 * gENCLS.vq.$pDERNLSJac29.dummyVarNLSJac29 + (-$cse2) * gENCLS.vd.$pDERNLSJac29.dummyVarNLSJac29 - pwLine1.vr.im.SeedNLSJac29
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_416(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,416};
  jacobian->resultVars[20] /* $res_NLSJac29_21.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_VAR */ = (data->localData[0]->realVars[24] /* $cse1 variable */) * (jacobian->tmpVars[16] /* gENCLS.vq.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */) + ((-data->localData[0]->realVars[25] /* $cse2 variable */)) * (jacobian->tmpVars[15] /* gENCLS.vd.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */) - jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac29 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 417
type: SIMPLE_ASSIGN
$res_NLSJac29_22.$pDERNLSJac29.dummyVarNLSJac29 = $cse2 * gENCLS.vq.$pDERNLSJac29.dummyVarNLSJac29 + $cse1 * gENCLS.vd.$pDERNLSJac29.dummyVarNLSJac29 - pwLine1.vr.re.SeedNLSJac29
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_417(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,417};
  jacobian->resultVars[21] /* $res_NLSJac29_22.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_VAR */ = (data->localData[0]->realVars[25] /* $cse2 variable */) * (jacobian->tmpVars[16] /* gENCLS.vq.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[24] /* $cse1 variable */) * (jacobian->tmpVars[15] /* gENCLS.vd.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */) - jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac29 SEED_VAR */;
  TRACE_POP
}

OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_EXST1_functionJacNLSJac29_constantEqns(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Controls_PSSE_ES_EXST1_INDEX_JAC_NLSJac29;
  
  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_EXST1_functionJacNLSJac29_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Controls_PSSE_ES_EXST1_INDEX_JAC_NLSJac29;
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_373(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_374(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_375(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_376(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_377(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_378(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_379(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_380(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_381(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_382(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_383(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_384(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_385(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_386(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_387(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_388(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_389(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_390(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_391(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_392(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_393(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_394(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_395(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_396(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_397(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_398(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_399(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_400(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_401(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_402(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_403(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_404(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_405(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_406(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_407(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_408(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_409(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_410(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_411(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_412(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_413(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_414(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_415(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_416(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_417(data, threadData, jacobian, parentJacobian);
  TRACE_POP
  return 0;
}
/* constant equations */
/* dynamic equations */

/*
equation index: 438
type: SIMPLE_ASSIGN
eXST1.K_a.u.$pDERNLSJac30.dummyVarNLSJac30 = eXST1.K_a.y.SeedNLSJac30 / eXST1.K_a.k
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_438(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,438};
  jacobian->tmpVars[1] /* eXST1.K_a.u.$pDERNLSJac30.dummyVarNLSJac30 JACOBIAN_DIFF_VAR */ = DIVISION(jacobian->seedVars[0] /* eXST1.K_a.y.SeedNLSJac30 SEED_VAR */,data->simulationInfo->realParameter[83] /* eXST1.K_a.k PARAM */,"eXST1.K_a.k");
  TRACE_POP
}

/*
equation index: 439
type: SIMPLE_ASSIGN
eXST1.Vm1.y.$pDERNLSJac30.dummyVarNLSJac30 = if abs(eXST1.Vm1.T) <= 1e-15 then eXST1.K_a.y.SeedNLSJac30 * eXST1.Vm1.K else 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_439(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,439};
  modelica_boolean tmp108;
  tmp108 = LessEq(fabs(data->simulationInfo->realParameter[107] /* eXST1.Vm1.T PARAM */),1e-15);
  jacobian->tmpVars[0] /* eXST1.Vm1.y.$pDERNLSJac30.dummyVarNLSJac30 JACOBIAN_DIFF_VAR */ = (tmp108?(jacobian->seedVars[0] /* eXST1.K_a.y.SeedNLSJac30 SEED_VAR */) * (data->simulationInfo->realParameter[106] /* eXST1.Vm1.K PARAM */):0.0);
  TRACE_POP
}

/*
equation index: 440
type: SIMPLE_ASSIGN
eXST1.feedback.y.$pDERNLSJac30.dummyVarNLSJac30 = (-0.1) * eXST1.Vm1.y.$pDERNLSJac30.dummyVarNLSJac30 / eXST1.imDerivativeLag.T
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_440(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,440};
  jacobian->tmpVars[3] /* eXST1.feedback.y.$pDERNLSJac30.dummyVarNLSJac30 JACOBIAN_DIFF_VAR */ = (-0.1) * (DIVISION(jacobian->tmpVars[0] /* eXST1.Vm1.y.$pDERNLSJac30.dummyVarNLSJac30 JACOBIAN_DIFF_VAR */,data->simulationInfo->realParameter[124] /* eXST1.imDerivativeLag.T PARAM */,"eXST1.imDerivativeLag.T"));
  TRACE_POP
}

/*
equation index: 441
type: SIMPLE_ASSIGN
eXST1.imLeadLag.u.$pDERNLSJac30.dummyVarNLSJac30 = if eXST1.feedback.y > eXST1.limiter.uMax then 0.0 else if eXST1.feedback.y < eXST1.limiter.uMin then 0.0 else eXST1.feedback.y.$pDERNLSJac30.dummyVarNLSJac30
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_441(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,441};
  modelica_boolean tmp109;
  modelica_boolean tmp110;
  modelica_boolean tmp111;
  modelica_real tmp112;
  RELATIONHYSTERESIS(tmp109, data->localData[0]->realVars[67] /* eXST1.feedback.y variable */, data->simulationInfo->realParameter[146] /* eXST1.limiter.uMax PARAM */, 17, Greater);
  tmp111 = (modelica_boolean)tmp109;
  if(tmp111)
  {
    tmp112 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp110, data->localData[0]->realVars[67] /* eXST1.feedback.y variable */, data->simulationInfo->realParameter[147] /* eXST1.limiter.uMin PARAM */, 18, Less);
    tmp112 = (tmp110?0.0:jacobian->tmpVars[3] /* eXST1.feedback.y.$pDERNLSJac30.dummyVarNLSJac30 JACOBIAN_DIFF_VAR */);
  }
  jacobian->tmpVars[4] /* eXST1.imLeadLag.u.$pDERNLSJac30.dummyVarNLSJac30 JACOBIAN_DIFF_VAR */ = tmp112;
  TRACE_POP
}

/*
equation index: 442
type: SIMPLE_ASSIGN
eXST1.imLeadLag.TF.y.$pDERNLSJac30.dummyVarNLSJac30 = eXST1.imLeadLag.TF.d * eXST1.imLeadLag.u.$pDERNLSJac30.dummyVarNLSJac30
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_442(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,442};
  jacobian->tmpVars[5] /* eXST1.imLeadLag.TF.y.$pDERNLSJac30.dummyVarNLSJac30 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[139] /* eXST1.imLeadLag.TF.d PARAM */) * (jacobian->tmpVars[4] /* eXST1.imLeadLag.u.$pDERNLSJac30.dummyVarNLSJac30 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 443
type: SIMPLE_ASSIGN
$res_NLSJac30_1.$pDERNLSJac30.dummyVarNLSJac30 = (if abs(eXST1.imLeadLag.T1 - eXST1.imLeadLag.T2) < 1e-15 then eXST1.imLeadLag.K * eXST1.imLeadLag.u.$pDERNLSJac30.dummyVarNLSJac30 else eXST1.imLeadLag.TF.y.$pDERNLSJac30.dummyVarNLSJac30) - eXST1.K_a.u.$pDERNLSJac30.dummyVarNLSJac30
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_443(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,443};
  modelica_boolean tmp113;
  tmp113 = Less(fabs(data->simulationInfo->realParameter[129] /* eXST1.imLeadLag.T1 PARAM */ - data->simulationInfo->realParameter[130] /* eXST1.imLeadLag.T2 PARAM */),1e-15);
  jacobian->resultVars[0] /* $res_NLSJac30_1.$pDERNLSJac30.dummyVarNLSJac30 JACOBIAN_VAR */ = (tmp113?(data->simulationInfo->realParameter[128] /* eXST1.imLeadLag.K PARAM */) * (jacobian->tmpVars[4] /* eXST1.imLeadLag.u.$pDERNLSJac30.dummyVarNLSJac30 JACOBIAN_DIFF_VAR */):jacobian->tmpVars[5] /* eXST1.imLeadLag.TF.y.$pDERNLSJac30.dummyVarNLSJac30 JACOBIAN_DIFF_VAR */) - jacobian->tmpVars[1] /* eXST1.K_a.u.$pDERNLSJac30.dummyVarNLSJac30 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_EXST1_functionJacNLSJac30_constantEqns(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Controls_PSSE_ES_EXST1_INDEX_JAC_NLSJac30;
  
  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_EXST1_functionJacNLSJac30_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Controls_PSSE_ES_EXST1_INDEX_JAC_NLSJac30;
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_438(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_439(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_440(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_441(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_442(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_443(data, threadData, jacobian, parentJacobian);
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_ES_EXST1_functionJacF_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_ES_EXST1_functionJacD_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_ES_EXST1_functionJacC_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_ES_EXST1_functionJacB_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
/* constant equations */
/* dynamic equations */

OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_EXST1_functionJacA_constantEqns(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Controls_PSSE_ES_EXST1_INDEX_JAC_A;
  
  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_EXST1_functionJacA_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Controls_PSSE_ES_EXST1_INDEX_JAC_A;
  TRACE_POP
  return 0;
}

OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_EXST1_initialAnalyticJacobianNLSJac29(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+22] = {0,4,4,4,4,4,4,3,3,3,3,4,4,6,6,7,7,4,4,11,11,8,8};
  const int rowIndex[116] = {15,16,17,18,13,14,15,16,15,16,17,18,13,14,15,16,11,12,15,16,11,12,15,16,0,1,3,0,2,8,2,4,8,1,3,4,5,6,7,19,5,6,7,19,5,6,7,19,20,21,5,6,7,19,20,21,3,5,6,7,17,19,20,1,5,6,7,18,19,21,9,10,13,14,9,10,13,14,2,6,9,11,12,13,14,15,16,17,18,8,10,11,12,13,14,15,16,17,18,19,0,1,2,3,4,7,8,16,0,1,2,3,4,5,8,15};
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
  jacobian->sparsePattern->colorCols[5] = 5;
  jacobian->sparsePattern->colorCols[15] = 5;
  jacobian->sparsePattern->colorCols[4] = 6;
  jacobian->sparsePattern->colorCols[14] = 6;
  jacobian->sparsePattern->colorCols[3] = 7;
  jacobian->sparsePattern->colorCols[13] = 7;
  jacobian->sparsePattern->colorCols[2] = 8;
  jacobian->sparsePattern->colorCols[12] = 8;
  jacobian->sparsePattern->colorCols[17] = 8;
  jacobian->sparsePattern->colorCols[1] = 9;
  jacobian->sparsePattern->colorCols[7] = 9;
  jacobian->sparsePattern->colorCols[9] = 9;
  jacobian->sparsePattern->colorCols[11] = 9;
  jacobian->sparsePattern->colorCols[0] = 10;
  jacobian->sparsePattern->colorCols[6] = 10;
  jacobian->sparsePattern->colorCols[8] = 10;
  jacobian->sparsePattern->colorCols[10] = 10;
  jacobian->sparsePattern->colorCols[16] = 10;
  TRACE_POP
  return 0;
}
OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_EXST1_initialAnalyticJacobianNLSJac30(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  int i = 0;
  
  jacobian->sizeCols = 1;
  jacobian->sizeRows = 1;
  jacobian->sizeTmpVars = 7;
  jacobian->seedVars = (modelica_real*) calloc(1,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(1,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(7,sizeof(modelica_real));
  jacobian->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  jacobian->sparsePattern->leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  jacobian->sparsePattern->index = (unsigned int*) malloc(1*sizeof(int));
  jacobian->sparsePattern->numberOfNoneZeros = 1;
  jacobian->sparsePattern->colorCols = (unsigned int*) malloc(1*sizeof(int));
  jacobian->sparsePattern->maxColors = 1;
  jacobian->constantEqns = NULL;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern->leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    jacobian->sparsePattern->leadindex[i] += jacobian->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern->index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  jacobian->sparsePattern->colorCols[0] = 1;
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_ES_EXST1_initialAnalyticJacobianF(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int OpenIPSL_Examples_Controls_PSSE_ES_EXST1_initialAnalyticJacobianD(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int OpenIPSL_Examples_Controls_PSSE_ES_EXST1_initialAnalyticJacobianC(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int OpenIPSL_Examples_Controls_PSSE_ES_EXST1_initialAnalyticJacobianB(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_EXST1_initialAnalyticJacobianA(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+12] = {0,5,4,4,4,9,9,9,9,9,9,9,2};
  const int rowIndex[82] = {0,1,2,3,7,1,2,3,7,1,2,3,7,1,2,3,7,0,1,2,3,6,7,8,9,11,0,1,2,3,6,7,8,9,11,0,1,2,3,6,7,8,9,11,0,1,2,3,6,7,8,9,11,0,1,2,3,6,7,8,9,11,0,1,2,3,6,7,8,9,11,0,1,2,3,6,7,8,9,11,10,11};
  int i = 0;
  
  jacobian->sizeCols = 12;
  jacobian->sizeRows = 12;
  jacobian->sizeTmpVars = 0;
  jacobian->seedVars = (modelica_real*) calloc(12,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(12,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(0,sizeof(modelica_real));
  jacobian->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  jacobian->sparsePattern->leadindex = (unsigned int*) malloc((12+1)*sizeof(int));
  jacobian->sparsePattern->index = (unsigned int*) malloc(82*sizeof(int));
  jacobian->sparsePattern->numberOfNoneZeros = 82;
  jacobian->sparsePattern->colorCols = (unsigned int*) malloc(12*sizeof(int));
  jacobian->sparsePattern->maxColors = 11;
  jacobian->constantEqns = NULL;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern->leadindex, colPtrIndex, (12+1)*sizeof(int));
  
  for(i=2;i<12+1;++i)
    jacobian->sparsePattern->leadindex[i] += jacobian->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern->index, rowIndex, 82*sizeof(int));
  
  /* write color array */
  jacobian->sparsePattern->colorCols[0] = 1;
  jacobian->sparsePattern->colorCols[2] = 2;
  jacobian->sparsePattern->colorCols[1] = 3;
  jacobian->sparsePattern->colorCols[9] = 4;
  jacobian->sparsePattern->colorCols[8] = 5;
  jacobian->sparsePattern->colorCols[7] = 6;
  jacobian->sparsePattern->colorCols[6] = 7;
  jacobian->sparsePattern->colorCols[10] = 8;
  jacobian->sparsePattern->colorCols[11] = 9;
  jacobian->sparsePattern->colorCols[3] = 9;
  jacobian->sparsePattern->colorCols[5] = 10;
  jacobian->sparsePattern->colorCols[4] = 11;
  TRACE_POP
  return 0;
}


