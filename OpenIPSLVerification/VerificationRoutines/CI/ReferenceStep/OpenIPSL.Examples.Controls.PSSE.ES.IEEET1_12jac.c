/* Jacobians 6 */
#include "OpenIPSL.Examples.Controls.PSSE.ES.IEEET1_model.h"
#include "OpenIPSL.Examples.Controls.PSSE.ES.IEEET1_12jac.h"
/* constant equations */
/* dynamic equations */

/*
equation index: 228
type: SIMPLE_ASSIGN
constantLoad.v.$pDERNLSJac33.dummyVarNLSJac33 = (pwLine1.vs.re * pwLine1.vs.re.SeedNLSJac33 + pwLine1.vs.im * pwLine1.vs.im.SeedNLSJac33) / sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_228(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,228};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[123] /* pwLine1.vs.re variable */;
  tmp1 = data->localData[0]->realVars[122] /* pwLine1.vs.im variable */;
  jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */ = DIVISION((data->localData[0]->realVars[123] /* pwLine1.vs.re variable */) * (jacobian->seedVars[20] /* pwLine1.vs.re.SeedNLSJac33 SEED_VAR */) + (data->localData[0]->realVars[122] /* pwLine1.vs.im variable */) * (jacobian->seedVars[21] /* pwLine1.vs.im.SeedNLSJac33 SEED_VAR */),sqrt((tmp0 * tmp0) + (tmp1 * tmp1)),"sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)");
  TRACE_POP
}

/*
equation index: 229
type: SIMPLE_ASSIGN
constantLoad.kI.$pDERNLSJac33.dummyVarNLSJac33 = if constantLoad.v < 0.5 then constantLoad.a2 * constantLoad.b2 * (constantLoad.v ^ (-1.0 + constantLoad.b2) * (-exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2)) * constantLoad.a2 * constantLoad.b2 * constantLoad.v ^ (constantLoad.b2 - 1.0) * constantLoad.v.$pDERNLSJac33.dummyVarNLSJac33 + (if noEvent(constantLoad.v == 0.0) then 0.0 else constantLoad.v ^ (-1.0 + constantLoad.b2 - 1.0) * (-1.0 + constantLoad.b2) * constantLoad.v.$pDERNLSJac33.dummyVarNLSJac33) * exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2)) else 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_229(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,229};
  modelica_boolean tmp2;
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
  modelica_real tmp15;
  modelica_real tmp16;
  modelica_real tmp17;
  modelica_real tmp18;
  modelica_real tmp19;
  modelica_real tmp20;
  modelica_real tmp21;
  modelica_real tmp22;
  modelica_real tmp23;
  modelica_real tmp25;
  modelica_real tmp26;
  modelica_real tmp27;
  modelica_real tmp28;
  modelica_real tmp29;
  modelica_real tmp30;
  modelica_real tmp31;
  modelica_boolean tmp32;
  modelica_real tmp33;
  modelica_real tmp34;
  modelica_real tmp35;
  modelica_real tmp36;
  modelica_real tmp37;
  modelica_real tmp38;
  modelica_real tmp39;
  modelica_real tmp40;
  modelica_boolean tmp41;
  modelica_real tmp42;
  RELATIONHYSTERESIS(tmp2, data->localData[0]->realVars[53] /* constantLoad.v variable */, 0.5, 8, Less);
  tmp41 = (modelica_boolean)tmp2;
  if(tmp41)
  {
    tmp3 = data->localData[0]->realVars[53] /* constantLoad.v variable */;
    tmp4 = -1.0 + data->simulationInfo->realParameter[62] /* constantLoad.b2 PARAM */;
    if(tmp3 < 0.0 && tmp4 != 0.0)
    {
      tmp6 = modf(tmp4, &tmp7);
      
      if(tmp6 > 0.5)
      {
        tmp6 -= 1.0;
        tmp7 += 1.0;
      }
      else if(tmp6 < -0.5)
      {
        tmp6 += 1.0;
        tmp7 -= 1.0;
      }
      
      if(fabs(tmp6) < 1e-10)
        tmp5 = pow(tmp3, tmp7);
      else
      {
        tmp9 = modf(1.0/tmp4, &tmp8);
        if(tmp9 > 0.5)
        {
          tmp9 -= 1.0;
          tmp8 += 1.0;
        }
        else if(tmp9 < -0.5)
        {
          tmp9 += 1.0;
          tmp8 -= 1.0;
        }
        if(fabs(tmp9) < 1e-10 && ((unsigned long)tmp8 & 1))
        {
          tmp5 = -pow(-tmp3, tmp6)*pow(tmp3, tmp7);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3, tmp4);
        }
      }
    }
    else
    {
      tmp5 = pow(tmp3, tmp4);
    }
    if(isnan(tmp5) || isinf(tmp5))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3, tmp4);
    }tmp10 = data->localData[0]->realVars[53] /* constantLoad.v variable */;
    tmp11 = data->simulationInfo->realParameter[62] /* constantLoad.b2 PARAM */;
    if(tmp10 < 0.0 && tmp11 != 0.0)
    {
      tmp13 = modf(tmp11, &tmp14);
      
      if(tmp13 > 0.5)
      {
        tmp13 -= 1.0;
        tmp14 += 1.0;
      }
      else if(tmp13 < -0.5)
      {
        tmp13 += 1.0;
        tmp14 -= 1.0;
      }
      
      if(fabs(tmp13) < 1e-10)
        tmp12 = pow(tmp10, tmp14);
      else
      {
        tmp16 = modf(1.0/tmp11, &tmp15);
        if(tmp16 > 0.5)
        {
          tmp16 -= 1.0;
          tmp15 += 1.0;
        }
        else if(tmp16 < -0.5)
        {
          tmp16 += 1.0;
          tmp15 -= 1.0;
        }
        if(fabs(tmp16) < 1e-10 && ((unsigned long)tmp15 & 1))
        {
          tmp12 = -pow(-tmp10, tmp13)*pow(tmp10, tmp14);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp10, tmp11);
        }
      }
    }
    else
    {
      tmp12 = pow(tmp10, tmp11);
    }
    if(isnan(tmp12) || isinf(tmp12))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp10, tmp11);
    }tmp17 = data->localData[0]->realVars[53] /* constantLoad.v variable */;
    tmp18 = data->simulationInfo->realParameter[62] /* constantLoad.b2 PARAM */ - 1.0;
    if(tmp17 < 0.0 && tmp18 != 0.0)
    {
      tmp20 = modf(tmp18, &tmp21);
      
      if(tmp20 > 0.5)
      {
        tmp20 -= 1.0;
        tmp21 += 1.0;
      }
      else if(tmp20 < -0.5)
      {
        tmp20 += 1.0;
        tmp21 -= 1.0;
      }
      
      if(fabs(tmp20) < 1e-10)
        tmp19 = pow(tmp17, tmp21);
      else
      {
        tmp23 = modf(1.0/tmp18, &tmp22);
        if(tmp23 > 0.5)
        {
          tmp23 -= 1.0;
          tmp22 += 1.0;
        }
        else if(tmp23 < -0.5)
        {
          tmp23 += 1.0;
          tmp22 -= 1.0;
        }
        if(fabs(tmp23) < 1e-10 && ((unsigned long)tmp22 & 1))
        {
          tmp19 = -pow(-tmp17, tmp20)*pow(tmp17, tmp21);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp17, tmp18);
        }
      }
    }
    else
    {
      tmp19 = pow(tmp17, tmp18);
    }
    if(isnan(tmp19) || isinf(tmp19))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp17, tmp18);
    }tmp32 = (modelica_boolean)(data->localData[0]->realVars[53] /* constantLoad.v variable */ == 0.0);
    if(tmp32)
    {
      tmp33 = 0.0;
    }
    else
    {
      tmp25 = data->localData[0]->realVars[53] /* constantLoad.v variable */;
      tmp26 = -1.0 + data->simulationInfo->realParameter[62] /* constantLoad.b2 PARAM */ - 1.0;
      if(tmp25 < 0.0 && tmp26 != 0.0)
      {
        tmp28 = modf(tmp26, &tmp29);
        
        if(tmp28 > 0.5)
        {
          tmp28 -= 1.0;
          tmp29 += 1.0;
        }
        else if(tmp28 < -0.5)
        {
          tmp28 += 1.0;
          tmp29 -= 1.0;
        }
        
        if(fabs(tmp28) < 1e-10)
          tmp27 = pow(tmp25, tmp29);
        else
        {
          tmp31 = modf(1.0/tmp26, &tmp30);
          if(tmp31 > 0.5)
          {
            tmp31 -= 1.0;
            tmp30 += 1.0;
          }
          else if(tmp31 < -0.5)
          {
            tmp31 += 1.0;
            tmp30 -= 1.0;
          }
          if(fabs(tmp31) < 1e-10 && ((unsigned long)tmp30 & 1))
          {
            tmp27 = -pow(-tmp25, tmp28)*pow(tmp25, tmp29);
          }
          else
          {
            throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp25, tmp26);
          }
        }
      }
      else
      {
        tmp27 = pow(tmp25, tmp26);
      }
      if(isnan(tmp27) || isinf(tmp27))
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp25, tmp26);
      }
      tmp33 = (tmp27) * ((-1.0 + data->simulationInfo->realParameter[62] /* constantLoad.b2 PARAM */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */));
    }
    tmp34 = data->localData[0]->realVars[53] /* constantLoad.v variable */;
    tmp35 = data->simulationInfo->realParameter[62] /* constantLoad.b2 PARAM */;
    if(tmp34 < 0.0 && tmp35 != 0.0)
    {
      tmp37 = modf(tmp35, &tmp38);
      
      if(tmp37 > 0.5)
      {
        tmp37 -= 1.0;
        tmp38 += 1.0;
      }
      else if(tmp37 < -0.5)
      {
        tmp37 += 1.0;
        tmp38 -= 1.0;
      }
      
      if(fabs(tmp37) < 1e-10)
        tmp36 = pow(tmp34, tmp38);
      else
      {
        tmp40 = modf(1.0/tmp35, &tmp39);
        if(tmp40 > 0.5)
        {
          tmp40 -= 1.0;
          tmp39 += 1.0;
        }
        else if(tmp40 < -0.5)
        {
          tmp40 += 1.0;
          tmp39 -= 1.0;
        }
        if(fabs(tmp40) < 1e-10 && ((unsigned long)tmp39 & 1))
        {
          tmp36 = -pow(-tmp34, tmp37)*pow(tmp34, tmp38);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp34, tmp35);
        }
      }
    }
    else
    {
      tmp36 = pow(tmp34, tmp35);
    }
    if(isnan(tmp36) || isinf(tmp36))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp34, tmp35);
    }
    tmp42 = (data->simulationInfo->realParameter[56] /* constantLoad.a2 PARAM */) * ((data->simulationInfo->realParameter[62] /* constantLoad.b2 PARAM */) * ((tmp5) * (((-exp(((-data->simulationInfo->realParameter[56] /* constantLoad.a2 PARAM */)) * (tmp12)))) * ((data->simulationInfo->realParameter[56] /* constantLoad.a2 PARAM */) * (((data->simulationInfo->realParameter[62] /* constantLoad.b2 PARAM */) * (tmp19)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */)))) + (tmp33) * (exp(((-data->simulationInfo->realParameter[56] /* constantLoad.a2 PARAM */)) * (tmp36)))));
  }
  else
  {
    tmp42 = 0.0;
  }
  jacobian->tmpVars[1] /* constantLoad.kI.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */ = tmp42;
  TRACE_POP
}

/*
equation index: 230
type: SIMPLE_ASSIGN
constantLoad.kP.$pDERNLSJac33.dummyVarNLSJac33 = if constantLoad.v < constantLoad.PQBRAK then constantLoad.a1 * (-sin(constantLoad.v * constantLoad.wp)) * constantLoad.v.$pDERNLSJac33.dummyVarNLSJac33 * constantLoad.wp + constantLoad.b1 * cos(constantLoad.v * constantLoad.wp) * constantLoad.v.$pDERNLSJac33.dummyVarNLSJac33 * constantLoad.wp else 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_230(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,230};
  modelica_boolean tmp43;
  RELATIONHYSTERESIS(tmp43, data->localData[0]->realVars[53] /* constantLoad.v variable */, data->simulationInfo->realParameter[35] /* constantLoad.PQBRAK PARAM */, 7, Less);
  jacobian->tmpVars[2] /* constantLoad.kP.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */ = (tmp43?(data->simulationInfo->realParameter[55] /* constantLoad.a1 PARAM */) * (((-sin((data->localData[0]->realVars[53] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[75] /* constantLoad.wp PARAM */)))) * ((jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[75] /* constantLoad.wp PARAM */))) + (data->simulationInfo->realParameter[61] /* constantLoad.b1 PARAM */) * ((cos((data->localData[0]->realVars[53] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[75] /* constantLoad.wp PARAM */))) * ((jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[75] /* constantLoad.wp PARAM */))):0.0);
  TRACE_POP
}

/*
equation index: 231
type: SIMPLE_ASSIGN
constantLoad.Q.$pDERNLSJac33.dummyVarNLSJac33 = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.S_I.im * (constantLoad.kI * constantLoad.v.$pDERNLSJac33.dummyVarNLSJac33 + constantLoad.kI.$pDERNLSJac33.dummyVarNLSJac33 * constantLoad.v) + constantLoad.S_Y.im * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac33.dummyVarNLSJac33 + constantLoad.kP.$pDERNLSJac33.dummyVarNLSJac33 * (constantLoad.S_P.im + constantLoad.d_Q) else constantLoad.S_I.im * (constantLoad.kI * constantLoad.v.$pDERNLSJac33.dummyVarNLSJac33 + constantLoad.kI.$pDERNLSJac33.dummyVarNLSJac33 * constantLoad.v) + constantLoad.S_Y.im * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac33.dummyVarNLSJac33 + constantLoad.kP.$pDERNLSJac33.dummyVarNLSJac33 * constantLoad.S_P.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_231(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,231};
  modelica_boolean tmp44;
  modelica_boolean tmp45;
  RELATIONHYSTERESIS(tmp44, data->localData[0]->timeValue, data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */, 5, GreaterEq);
  RELATIONHYSTERESIS(tmp45, data->localData[0]->timeValue, data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[65] /* constantLoad.d_t PARAM */, 6, LessEq);
  jacobian->tmpVars[3] /* constantLoad.Q.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */ = ((tmp44 && tmp45)?(data->simulationInfo->realParameter[38] /* constantLoad.S_I.im PARAM */) * ((data->localData[0]->realVars[49] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[1] /* constantLoad.kI.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[53] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[42] /* constantLoad.S_Y.im PARAM */) * (((2.0) * (data->localData[0]->realVars[53] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[2] /* constantLoad.kP.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[40] /* constantLoad.S_P.im PARAM */ + data->simulationInfo->realParameter[64] /* constantLoad.d_Q PARAM */):(data->simulationInfo->realParameter[38] /* constantLoad.S_I.im PARAM */) * ((data->localData[0]->realVars[49] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[1] /* constantLoad.kI.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[53] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[42] /* constantLoad.S_Y.im PARAM */) * (((2.0) * (data->localData[0]->realVars[53] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[2] /* constantLoad.kP.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[40] /* constantLoad.S_P.im PARAM */));
  TRACE_POP
}

/*
equation index: 232
type: SIMPLE_ASSIGN
constantLoad.P.$pDERNLSJac33.dummyVarNLSJac33 = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.S_I.re * (constantLoad.kI * constantLoad.v.$pDERNLSJac33.dummyVarNLSJac33 + constantLoad.kI.$pDERNLSJac33.dummyVarNLSJac33 * constantLoad.v) + constantLoad.S_Y.re * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac33.dummyVarNLSJac33 + constantLoad.kP.$pDERNLSJac33.dummyVarNLSJac33 * (constantLoad.S_P.re + constantLoad.d_P) else constantLoad.S_I.re * (constantLoad.kI * constantLoad.v.$pDERNLSJac33.dummyVarNLSJac33 + constantLoad.kI.$pDERNLSJac33.dummyVarNLSJac33 * constantLoad.v) + constantLoad.S_Y.re * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac33.dummyVarNLSJac33 + constantLoad.kP.$pDERNLSJac33.dummyVarNLSJac33 * constantLoad.S_P.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_232(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,232};
  modelica_boolean tmp46;
  modelica_boolean tmp47;
  RELATIONHYSTERESIS(tmp46, data->localData[0]->timeValue, data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */, 5, GreaterEq);
  RELATIONHYSTERESIS(tmp47, data->localData[0]->timeValue, data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[65] /* constantLoad.d_t PARAM */, 6, LessEq);
  jacobian->tmpVars[4] /* constantLoad.P.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */ = ((tmp46 && tmp47)?(data->simulationInfo->realParameter[39] /* constantLoad.S_I.re PARAM */) * ((data->localData[0]->realVars[49] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[1] /* constantLoad.kI.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[53] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[43] /* constantLoad.S_Y.re PARAM */) * (((2.0) * (data->localData[0]->realVars[53] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[2] /* constantLoad.kP.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[41] /* constantLoad.S_P.re PARAM */ + data->simulationInfo->realParameter[63] /* constantLoad.d_P PARAM */):(data->simulationInfo->realParameter[39] /* constantLoad.S_I.re PARAM */) * ((data->localData[0]->realVars[49] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[1] /* constantLoad.kI.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[53] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[43] /* constantLoad.S_Y.re PARAM */) * (((2.0) * (data->localData[0]->realVars[53] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[2] /* constantLoad.kP.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[41] /* constantLoad.S_P.re PARAM */));
  TRACE_POP
}

/*
equation index: 233
type: SIMPLE_ASSIGN
gENROE.PSId.$pDERNLSJac33.dummyVarNLSJac33 = (-gENROE.Xppd) * gENROE.id.SeedNLSJac33
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_233(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,233};
  jacobian->tmpVars[5] /* gENROE.PSId.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[156] /* gENROE.Xppd PARAM */)) * (jacobian->seedVars[17] /* gENROE.id.SeedNLSJac33 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 234
type: SIMPLE_ASSIGN
pwLine.is.re.$pDERNLSJac33.dummyVarNLSJac33 = ($cse7 * gENROE.iq.SeedNLSJac33 + $cse6 * gENROE.id.SeedNLSJac33) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_234(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,234};
  jacobian->tmpVars[6] /* pwLine.is.re.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[29] /* $cse7 variable */) * (jacobian->seedVars[16] /* gENROE.iq.SeedNLSJac33 SEED_VAR */) + (data->localData[0]->realVars[28] /* $cse6 variable */) * (jacobian->seedVars[17] /* gENROE.id.SeedNLSJac33 SEED_VAR */)) * (data->simulationInfo->realParameter[102] /* gENROE.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 235
type: SIMPLE_ASSIGN
pwLine.is.im.$pDERNLSJac33.dummyVarNLSJac33 = ($cse6 * gENROE.iq.SeedNLSJac33 - $cse7 * gENROE.id.SeedNLSJac33) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_235(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,235};
  jacobian->tmpVars[7] /* pwLine.is.im.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[28] /* $cse6 variable */) * (jacobian->seedVars[16] /* gENROE.iq.SeedNLSJac33 SEED_VAR */) - ((data->localData[0]->realVars[29] /* $cse7 variable */) * (jacobian->seedVars[17] /* gENROE.id.SeedNLSJac33 SEED_VAR */))) * (data->simulationInfo->realParameter[102] /* gENROE.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 236
type: SIMPLE_ASSIGN
gENROE.uq.$pDERNLSJac33.dummyVarNLSJac33 = gENROE.PSId.$pDERNLSJac33.dummyVarNLSJac33 - gENROE.R_a * gENROE.iq.SeedNLSJac33
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_236(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,236};
  jacobian->tmpVars[8] /* gENROE.uq.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[5] /* gENROE.PSId.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[139] /* gENROE.R_a PARAM */) * (jacobian->seedVars[16] /* gENROE.iq.SeedNLSJac33 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 237
type: SIMPLE_ASSIGN
gENROE.PSIq.$pDERNLSJac33.dummyVarNLSJac33 = (-gENROE.Xppq) * gENROE.iq.SeedNLSJac33
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_237(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,237};
  jacobian->tmpVars[9] /* gENROE.PSIq.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[157] /* gENROE.Xppq PARAM */)) * (jacobian->seedVars[16] /* gENROE.iq.SeedNLSJac33 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 238
type: SIMPLE_ASSIGN
gENROE.ud.$pDERNLSJac33.dummyVarNLSJac33 = (-gENROE.PSIq.$pDERNLSJac33.dummyVarNLSJac33) - gENROE.R_a * gENROE.id.SeedNLSJac33
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_238(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,238};
  jacobian->tmpVars[10] /* gENROE.ud.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */ = (-jacobian->tmpVars[9] /* gENROE.PSIq.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */) - ((data->simulationInfo->realParameter[139] /* gENROE.R_a PARAM */) * (jacobian->seedVars[17] /* gENROE.id.SeedNLSJac33 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 239
type: SIMPLE_ASSIGN
pwLine.vs.re.$pDERNLSJac33.dummyVarNLSJac33 = $cse6 * gENROE.ud.$pDERNLSJac33.dummyVarNLSJac33 + $cse7 * gENROE.uq.$pDERNLSJac33.dummyVarNLSJac33
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_239(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,239};
  jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[28] /* $cse6 variable */) * (jacobian->tmpVars[10] /* gENROE.ud.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[29] /* $cse7 variable */) * (jacobian->tmpVars[8] /* gENROE.uq.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 240
type: SIMPLE_ASSIGN
pwLine.vs.im.$pDERNLSJac33.dummyVarNLSJac33 = $cse6 * gENROE.uq.$pDERNLSJac33.dummyVarNLSJac33 - $cse7 * gENROE.ud.$pDERNLSJac33.dummyVarNLSJac33
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_240(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,240};
  jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[28] /* $cse6 variable */) * (jacobian->tmpVars[8] /* gENROE.uq.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */) - ((data->localData[0]->realVars[29] /* $cse7 variable */) * (jacobian->tmpVars[10] /* gENROE.ud.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 241
type: SIMPLE_ASSIGN
gENCLS.p.ii.$pDERNLSJac33.dummyVarNLSJac33 = ($cse2 * gENCLS.id.SeedNLSJac33 - $cse1 * gENCLS.iq.SeedNLSJac33) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_241(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,241};
  jacobian->tmpVars[13] /* gENCLS.p.ii.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[25] /* $cse2 variable */) * (jacobian->seedVars[13] /* gENCLS.id.SeedNLSJac33 SEED_VAR */) - ((data->localData[0]->realVars[24] /* $cse1 variable */) * (jacobian->seedVars[12] /* gENCLS.iq.SeedNLSJac33 SEED_VAR */))) * (data->simulationInfo->realParameter[76] /* gENCLS.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 242
type: SIMPLE_ASSIGN
gENCLS.p.ir.$pDERNLSJac33.dummyVarNLSJac33 = ((-$cse1) * gENCLS.id.SeedNLSJac33 - $cse2 * gENCLS.iq.SeedNLSJac33) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_242(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,242};
  jacobian->tmpVars[14] /* gENCLS.p.ir.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */ = (((-data->localData[0]->realVars[24] /* $cse1 variable */)) * (jacobian->seedVars[13] /* gENCLS.id.SeedNLSJac33 SEED_VAR */) - ((data->localData[0]->realVars[25] /* $cse2 variable */) * (jacobian->seedVars[12] /* gENCLS.iq.SeedNLSJac33 SEED_VAR */))) * (data->simulationInfo->realParameter[76] /* gENCLS.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 243
type: SIMPLE_ASSIGN
gENCLS.vq.$pDERNLSJac33.dummyVarNLSJac33 = (-gENCLS.R_a) * gENCLS.iq.SeedNLSJac33 - gENCLS.X_d * gENCLS.id.SeedNLSJac33
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_243(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,243};
  jacobian->tmpVars[15] /* gENCLS.vq.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[82] /* gENCLS.R_a PARAM */)) * (jacobian->seedVars[12] /* gENCLS.iq.SeedNLSJac33 SEED_VAR */) - ((data->simulationInfo->realParameter[85] /* gENCLS.X_d PARAM */) * (jacobian->seedVars[13] /* gENCLS.id.SeedNLSJac33 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 244
type: SIMPLE_ASSIGN
gENCLS.vd.$pDERNLSJac33.dummyVarNLSJac33 = gENCLS.X_d * gENCLS.iq.SeedNLSJac33 - gENCLS.R_a * gENCLS.id.SeedNLSJac33
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_244(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,244};
  jacobian->tmpVars[16] /* gENCLS.vd.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[85] /* gENCLS.X_d PARAM */) * (jacobian->seedVars[12] /* gENCLS.iq.SeedNLSJac33 SEED_VAR */) - ((data->simulationInfo->realParameter[82] /* gENCLS.R_a PARAM */) * (jacobian->seedVars[13] /* gENCLS.id.SeedNLSJac33 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 245
type: SIMPLE_ASSIGN
pwLine4.ir.re.$pDERNLSJac33.dummyVarNLSJac33 = (-pwLine1.ir.re.SeedNLSJac33) - gENCLS.p.ir.$pDERNLSJac33.dummyVarNLSJac33
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_245(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,245};
  jacobian->tmpVars[17] /* pwLine4.ir.re.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[11] /* pwLine1.ir.re.SeedNLSJac33 SEED_VAR */) - jacobian->tmpVars[14] /* gENCLS.p.ir.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 246
type: SIMPLE_ASSIGN
pwLine4.ir.im.$pDERNLSJac33.dummyVarNLSJac33 = (-pwLine1.ir.im.SeedNLSJac33) - gENCLS.p.ii.$pDERNLSJac33.dummyVarNLSJac33
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_246(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,246};
  jacobian->tmpVars[18] /* pwLine4.ir.im.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[10] /* pwLine1.ir.im.SeedNLSJac33 SEED_VAR */) - jacobian->tmpVars[13] /* gENCLS.p.ii.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 247
type: SIMPLE_ASSIGN
pwFault.p.ii.$pDERNLSJac33.dummyVarNLSJac33 = (-pwLine3.ir.im.SeedNLSJac33) - pwLine4.is.im.SeedNLSJac33
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_247(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,247};
  jacobian->tmpVars[19] /* pwFault.p.ii.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[9] /* pwLine3.ir.im.SeedNLSJac33 SEED_VAR */) - jacobian->seedVars[8] /* pwLine4.is.im.SeedNLSJac33 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 248
type: SIMPLE_ASSIGN
pwFault.p.ir.$pDERNLSJac33.dummyVarNLSJac33 = (-pwLine3.ir.re.SeedNLSJac33) - pwLine4.is.re.SeedNLSJac33
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_248(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,248};
  jacobian->tmpVars[20] /* pwFault.p.ir.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[6] /* pwLine3.ir.re.SeedNLSJac33 SEED_VAR */) - jacobian->seedVars[7] /* pwLine4.is.re.SeedNLSJac33 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 249
type: SIMPLE_ASSIGN
constantLoad.p.ii.$pDERNLSJac33.dummyVarNLSJac33 = (-pwLine.ir.im.SeedNLSJac33) - pwLine1.is.im.SeedNLSJac33 - pwLine3.is.im.SeedNLSJac33
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_249(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,249};
  jacobian->tmpVars[21] /* constantLoad.p.ii.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[4] /* pwLine.ir.im.SeedNLSJac33 SEED_VAR */) - jacobian->seedVars[2] /* pwLine1.is.im.SeedNLSJac33 SEED_VAR */ - jacobian->seedVars[3] /* pwLine3.is.im.SeedNLSJac33 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 250
type: SIMPLE_ASSIGN
constantLoad.p.ir.$pDERNLSJac33.dummyVarNLSJac33 = (-pwLine.ir.re.SeedNLSJac33) - pwLine1.is.re.SeedNLSJac33 - pwLine3.is.re.SeedNLSJac33
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_250(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,250};
  jacobian->tmpVars[22] /* constantLoad.p.ir.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[5] /* pwLine.ir.re.SeedNLSJac33 SEED_VAR */) - jacobian->seedVars[0] /* pwLine1.is.re.SeedNLSJac33 SEED_VAR */ - jacobian->seedVars[1] /* pwLine3.is.re.SeedNLSJac33 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 251
type: SIMPLE_ASSIGN
$res_NLSJac33_1.$pDERNLSJac33.dummyVarNLSJac33 = if time < pwFault.t1 then pwFault.p.ii.$pDERNLSJac33.dummyVarNLSJac33 else if time < pwFault.t2 and pwFault.ground then pwLine3.vr.re.SeedNLSJac33 else if time < pwFault.t2 then pwFault.p.ii.$pDERNLSJac33.dummyVarNLSJac33 - (pwFault.R * pwLine3.vr.im.SeedNLSJac33 - pwFault.X * pwLine3.vr.re.SeedNLSJac33) * (pwFault.X ^ 2.0 + pwFault.R ^ 2.0) / (pwFault.X ^ 2.0 + pwFault.R ^ 2.0) ^ 2.0 else pwFault.p.ii.$pDERNLSJac33.dummyVarNLSJac33
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_251(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,251};
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
  RELATIONHYSTERESIS(tmp48, data->localData[0]->timeValue, data->simulationInfo->realParameter[267] /* pwFault.t1 PARAM */, 11, Less);
  tmp60 = (modelica_boolean)tmp48;
  if(tmp60)
  {
    tmp61 = jacobian->tmpVars[19] /* pwFault.p.ii.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp49, data->localData[0]->timeValue, data->simulationInfo->realParameter[268] /* pwFault.t2 PARAM */, 12, Less);
    tmp58 = (modelica_boolean)(tmp49 && data->simulationInfo->booleanParameter[66] /* pwFault.ground PARAM */);
    if(tmp58)
    {
      tmp59 = jacobian->seedVars[19] /* pwLine3.vr.re.SeedNLSJac33 SEED_VAR */;
    }
    else
    {
      RELATIONHYSTERESIS(tmp50, data->localData[0]->timeValue, data->simulationInfo->realParameter[268] /* pwFault.t2 PARAM */, 12, Less);
      tmp56 = (modelica_boolean)tmp50;
      if(tmp56)
      {
        tmp51 = data->simulationInfo->realParameter[266] /* pwFault.X PARAM */;
        tmp52 = data->simulationInfo->realParameter[265] /* pwFault.R PARAM */;
        tmp53 = data->simulationInfo->realParameter[266] /* pwFault.X PARAM */;
        tmp54 = data->simulationInfo->realParameter[265] /* pwFault.R PARAM */;
        tmp55 = (tmp53 * tmp53) + (tmp54 * tmp54);
        tmp57 = jacobian->tmpVars[19] /* pwFault.p.ii.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */ - (DIVISION(((data->simulationInfo->realParameter[265] /* pwFault.R PARAM */) * (jacobian->seedVars[18] /* pwLine3.vr.im.SeedNLSJac33 SEED_VAR */) - ((data->simulationInfo->realParameter[266] /* pwFault.X PARAM */) * (jacobian->seedVars[19] /* pwLine3.vr.re.SeedNLSJac33 SEED_VAR */))) * ((tmp51 * tmp51) + (tmp52 * tmp52)),(tmp55 * tmp55),"(pwFault.X ^ 2.0 + pwFault.R ^ 2.0) ^ 2.0"));
      }
      else
      {
        tmp57 = jacobian->tmpVars[19] /* pwFault.p.ii.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */;
      }
      tmp59 = tmp57;
    }
    tmp61 = tmp59;
  }
  jacobian->resultVars[0] /* $res_NLSJac33_1.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_VAR */ = tmp61;
  TRACE_POP
}

/*
equation index: 252
type: SIMPLE_ASSIGN
$res_NLSJac33_2.$pDERNLSJac33.dummyVarNLSJac33 = if time < pwFault.t1 then pwFault.p.ir.$pDERNLSJac33.dummyVarNLSJac33 else if time < pwFault.t2 and pwFault.ground then pwLine3.vr.im.SeedNLSJac33 else if time < pwFault.t2 then pwFault.p.ir.$pDERNLSJac33.dummyVarNLSJac33 - (pwFault.R * pwLine3.vr.re.SeedNLSJac33 + pwFault.X * pwLine3.vr.im.SeedNLSJac33) * (pwFault.R ^ 2.0 + pwFault.X ^ 2.0) / (pwFault.R ^ 2.0 + pwFault.X ^ 2.0) ^ 2.0 else pwFault.p.ir.$pDERNLSJac33.dummyVarNLSJac33
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_252(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,252};
  modelica_boolean tmp62;
  modelica_boolean tmp63;
  modelica_boolean tmp64;
  modelica_real tmp65;
  modelica_real tmp66;
  modelica_real tmp67;
  modelica_real tmp68;
  modelica_real tmp69;
  modelica_boolean tmp70;
  modelica_real tmp71;
  modelica_boolean tmp72;
  modelica_real tmp73;
  modelica_boolean tmp74;
  modelica_real tmp75;
  RELATIONHYSTERESIS(tmp62, data->localData[0]->timeValue, data->simulationInfo->realParameter[267] /* pwFault.t1 PARAM */, 11, Less);
  tmp74 = (modelica_boolean)tmp62;
  if(tmp74)
  {
    tmp75 = jacobian->tmpVars[20] /* pwFault.p.ir.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp63, data->localData[0]->timeValue, data->simulationInfo->realParameter[268] /* pwFault.t2 PARAM */, 12, Less);
    tmp72 = (modelica_boolean)(tmp63 && data->simulationInfo->booleanParameter[66] /* pwFault.ground PARAM */);
    if(tmp72)
    {
      tmp73 = jacobian->seedVars[18] /* pwLine3.vr.im.SeedNLSJac33 SEED_VAR */;
    }
    else
    {
      RELATIONHYSTERESIS(tmp64, data->localData[0]->timeValue, data->simulationInfo->realParameter[268] /* pwFault.t2 PARAM */, 12, Less);
      tmp70 = (modelica_boolean)tmp64;
      if(tmp70)
      {
        tmp65 = data->simulationInfo->realParameter[265] /* pwFault.R PARAM */;
        tmp66 = data->simulationInfo->realParameter[266] /* pwFault.X PARAM */;
        tmp67 = data->simulationInfo->realParameter[265] /* pwFault.R PARAM */;
        tmp68 = data->simulationInfo->realParameter[266] /* pwFault.X PARAM */;
        tmp69 = (tmp67 * tmp67) + (tmp68 * tmp68);
        tmp71 = jacobian->tmpVars[20] /* pwFault.p.ir.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */ - (DIVISION(((data->simulationInfo->realParameter[265] /* pwFault.R PARAM */) * (jacobian->seedVars[19] /* pwLine3.vr.re.SeedNLSJac33 SEED_VAR */) + (data->simulationInfo->realParameter[266] /* pwFault.X PARAM */) * (jacobian->seedVars[18] /* pwLine3.vr.im.SeedNLSJac33 SEED_VAR */)) * ((tmp65 * tmp65) + (tmp66 * tmp66)),(tmp69 * tmp69),"(pwFault.R ^ 2.0 + pwFault.X ^ 2.0) ^ 2.0"));
      }
      else
      {
        tmp71 = jacobian->tmpVars[20] /* pwFault.p.ir.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */;
      }
      tmp73 = tmp71;
    }
    tmp75 = tmp73;
  }
  jacobian->resultVars[1] /* $res_NLSJac33_2.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_VAR */ = tmp75;
  TRACE_POP
}

/*
equation index: 253
type: SIMPLE_ASSIGN
$res_NLSJac33_3.$pDERNLSJac33.dummyVarNLSJac33 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.ir.re.SeedNLSJac33 else pwLine3.vr.re.SeedNLSJac33 - pwLine1.vs.re.SeedNLSJac33 - (pwLine3.Z.re * (pwLine3.ir.re.SeedNLSJac33 + pwLine3.vr.im.SeedNLSJac33 * pwLine3.Y.im - pwLine3.vr.re.SeedNLSJac33 * pwLine3.Y.re) - pwLine3.Z.im * (pwLine3.ir.im.SeedNLSJac33 + (-pwLine3.vr.re.SeedNLSJac33) * pwLine3.Y.im - pwLine3.vr.im.SeedNLSJac33 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_253(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,253};
  modelica_boolean tmp76;
  modelica_boolean tmp77;
  RELATIONHYSTERESIS(tmp76, data->localData[0]->timeValue, data->simulationInfo->realParameter[300] /* pwLine3.t1 PARAM */, 9, GreaterEq);
  RELATIONHYSTERESIS(tmp77, data->localData[0]->timeValue, data->simulationInfo->realParameter[301] /* pwLine3.t2 PARAM */, 10, Less);
  jacobian->resultVars[2] /* $res_NLSJac33_3.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_VAR */ = ((tmp76 && tmp77)?jacobian->seedVars[6] /* pwLine3.ir.re.SeedNLSJac33 SEED_VAR */:jacobian->seedVars[19] /* pwLine3.vr.re.SeedNLSJac33 SEED_VAR */ - jacobian->seedVars[20] /* pwLine1.vs.re.SeedNLSJac33 SEED_VAR */ - ((data->simulationInfo->realParameter[299] /* pwLine3.Z.re PARAM */) * (jacobian->seedVars[6] /* pwLine3.ir.re.SeedNLSJac33 SEED_VAR */ + (jacobian->seedVars[18] /* pwLine3.vr.im.SeedNLSJac33 SEED_VAR */) * (data->simulationInfo->realParameter[296] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine3.vr.re.SeedNLSJac33 SEED_VAR */) * (data->simulationInfo->realParameter[297] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[298] /* pwLine3.Z.im PARAM */) * (jacobian->seedVars[9] /* pwLine3.ir.im.SeedNLSJac33 SEED_VAR */ + ((-jacobian->seedVars[19] /* pwLine3.vr.re.SeedNLSJac33 SEED_VAR */)) * (data->simulationInfo->realParameter[296] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine3.vr.im.SeedNLSJac33 SEED_VAR */) * (data->simulationInfo->realParameter[297] /* pwLine3.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 254
type: SIMPLE_ASSIGN
$res_NLSJac33_4.$pDERNLSJac33.dummyVarNLSJac33 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.ir.im.SeedNLSJac33 else pwLine1.vs.im.SeedNLSJac33 - pwLine.vs.im.$pDERNLSJac33.dummyVarNLSJac33 - (pwLine.Z.re * (pwLine.ir.im.SeedNLSJac33 + (-pwLine1.vs.re.SeedNLSJac33) * pwLine.Y.im - pwLine1.vs.im.SeedNLSJac33 * pwLine.Y.re) + pwLine.Z.im * (pwLine.ir.re.SeedNLSJac33 + pwLine1.vs.im.SeedNLSJac33 * pwLine.Y.im - pwLine1.vs.re.SeedNLSJac33 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_254(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,254};
  modelica_boolean tmp78;
  modelica_boolean tmp79;
  RELATIONHYSTERESIS(tmp78, data->localData[0]->timeValue, data->simulationInfo->realParameter[278] /* pwLine.t1 PARAM */, 1, GreaterEq);
  RELATIONHYSTERESIS(tmp79, data->localData[0]->timeValue, data->simulationInfo->realParameter[279] /* pwLine.t2 PARAM */, 2, Less);
  jacobian->resultVars[3] /* $res_NLSJac33_4.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_VAR */ = ((tmp78 && tmp79)?jacobian->seedVars[4] /* pwLine.ir.im.SeedNLSJac33 SEED_VAR */:jacobian->seedVars[21] /* pwLine1.vs.im.SeedNLSJac33 SEED_VAR */ - jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[277] /* pwLine.Z.re PARAM */) * (jacobian->seedVars[4] /* pwLine.ir.im.SeedNLSJac33 SEED_VAR */ + ((-jacobian->seedVars[20] /* pwLine1.vs.re.SeedNLSJac33 SEED_VAR */)) * (data->simulationInfo->realParameter[274] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine1.vs.im.SeedNLSJac33 SEED_VAR */) * (data->simulationInfo->realParameter[275] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[276] /* pwLine.Z.im PARAM */) * (jacobian->seedVars[5] /* pwLine.ir.re.SeedNLSJac33 SEED_VAR */ + (jacobian->seedVars[21] /* pwLine1.vs.im.SeedNLSJac33 SEED_VAR */) * (data->simulationInfo->realParameter[274] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine1.vs.re.SeedNLSJac33 SEED_VAR */) * (data->simulationInfo->realParameter[275] /* pwLine.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 255
type: SIMPLE_ASSIGN
$res_NLSJac33_5.$pDERNLSJac33.dummyVarNLSJac33 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.is.re.SeedNLSJac33 else pwLine1.vs.re.SeedNLSJac33 - pwLine3.vr.re.SeedNLSJac33 - (pwLine3.Z.re * (pwLine3.is.re.SeedNLSJac33 + pwLine1.vs.im.SeedNLSJac33 * pwLine3.Y.im - pwLine1.vs.re.SeedNLSJac33 * pwLine3.Y.re) - pwLine3.Z.im * (pwLine3.is.im.SeedNLSJac33 + (-pwLine1.vs.re.SeedNLSJac33) * pwLine3.Y.im - pwLine1.vs.im.SeedNLSJac33 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_255(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,255};
  modelica_boolean tmp80;
  modelica_boolean tmp81;
  RELATIONHYSTERESIS(tmp80, data->localData[0]->timeValue, data->simulationInfo->realParameter[300] /* pwLine3.t1 PARAM */, 9, GreaterEq);
  RELATIONHYSTERESIS(tmp81, data->localData[0]->timeValue, data->simulationInfo->realParameter[301] /* pwLine3.t2 PARAM */, 10, Less);
  jacobian->resultVars[4] /* $res_NLSJac33_5.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_VAR */ = ((tmp80 && tmp81)?jacobian->seedVars[1] /* pwLine3.is.re.SeedNLSJac33 SEED_VAR */:jacobian->seedVars[20] /* pwLine1.vs.re.SeedNLSJac33 SEED_VAR */ - jacobian->seedVars[19] /* pwLine3.vr.re.SeedNLSJac33 SEED_VAR */ - ((data->simulationInfo->realParameter[299] /* pwLine3.Z.re PARAM */) * (jacobian->seedVars[1] /* pwLine3.is.re.SeedNLSJac33 SEED_VAR */ + (jacobian->seedVars[21] /* pwLine1.vs.im.SeedNLSJac33 SEED_VAR */) * (data->simulationInfo->realParameter[296] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine1.vs.re.SeedNLSJac33 SEED_VAR */) * (data->simulationInfo->realParameter[297] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[298] /* pwLine3.Z.im PARAM */) * (jacobian->seedVars[3] /* pwLine3.is.im.SeedNLSJac33 SEED_VAR */ + ((-jacobian->seedVars[20] /* pwLine1.vs.re.SeedNLSJac33 SEED_VAR */)) * (data->simulationInfo->realParameter[296] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine1.vs.im.SeedNLSJac33 SEED_VAR */) * (data->simulationInfo->realParameter[297] /* pwLine3.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 256
type: SIMPLE_ASSIGN
$res_NLSJac33_6.$pDERNLSJac33.dummyVarNLSJac33 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.is.im.SeedNLSJac33 else pwLine1.vs.im.SeedNLSJac33 - pwLine3.vr.im.SeedNLSJac33 - (pwLine3.Z.re * (pwLine3.is.im.SeedNLSJac33 + (-pwLine1.vs.re.SeedNLSJac33) * pwLine3.Y.im - pwLine1.vs.im.SeedNLSJac33 * pwLine3.Y.re) + pwLine3.Z.im * (pwLine3.is.re.SeedNLSJac33 + pwLine1.vs.im.SeedNLSJac33 * pwLine3.Y.im - pwLine1.vs.re.SeedNLSJac33 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_256(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,256};
  modelica_boolean tmp82;
  modelica_boolean tmp83;
  RELATIONHYSTERESIS(tmp82, data->localData[0]->timeValue, data->simulationInfo->realParameter[300] /* pwLine3.t1 PARAM */, 9, GreaterEq);
  RELATIONHYSTERESIS(tmp83, data->localData[0]->timeValue, data->simulationInfo->realParameter[301] /* pwLine3.t2 PARAM */, 10, Less);
  jacobian->resultVars[5] /* $res_NLSJac33_6.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_VAR */ = ((tmp82 && tmp83)?jacobian->seedVars[3] /* pwLine3.is.im.SeedNLSJac33 SEED_VAR */:jacobian->seedVars[21] /* pwLine1.vs.im.SeedNLSJac33 SEED_VAR */ - jacobian->seedVars[18] /* pwLine3.vr.im.SeedNLSJac33 SEED_VAR */ - ((data->simulationInfo->realParameter[299] /* pwLine3.Z.re PARAM */) * (jacobian->seedVars[3] /* pwLine3.is.im.SeedNLSJac33 SEED_VAR */ + ((-jacobian->seedVars[20] /* pwLine1.vs.re.SeedNLSJac33 SEED_VAR */)) * (data->simulationInfo->realParameter[296] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine1.vs.im.SeedNLSJac33 SEED_VAR */) * (data->simulationInfo->realParameter[297] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[298] /* pwLine3.Z.im PARAM */) * (jacobian->seedVars[1] /* pwLine3.is.re.SeedNLSJac33 SEED_VAR */ + (jacobian->seedVars[21] /* pwLine1.vs.im.SeedNLSJac33 SEED_VAR */) * (data->simulationInfo->realParameter[296] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine1.vs.re.SeedNLSJac33 SEED_VAR */) * (data->simulationInfo->realParameter[297] /* pwLine3.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 257
type: SIMPLE_ASSIGN
$res_NLSJac33_7.$pDERNLSJac33.dummyVarNLSJac33 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.is.im.$pDERNLSJac33.dummyVarNLSJac33 else pwLine.vs.im.$pDERNLSJac33.dummyVarNLSJac33 - pwLine1.vs.im.SeedNLSJac33 - (pwLine.Z.re * (pwLine.is.im.$pDERNLSJac33.dummyVarNLSJac33 + (-pwLine.vs.re.$pDERNLSJac33.dummyVarNLSJac33) * pwLine.Y.im - pwLine.vs.im.$pDERNLSJac33.dummyVarNLSJac33 * pwLine.Y.re) + pwLine.Z.im * (pwLine.is.re.$pDERNLSJac33.dummyVarNLSJac33 + pwLine.vs.im.$pDERNLSJac33.dummyVarNLSJac33 * pwLine.Y.im - pwLine.vs.re.$pDERNLSJac33.dummyVarNLSJac33 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_257(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,257};
  modelica_boolean tmp84;
  modelica_boolean tmp85;
  RELATIONHYSTERESIS(tmp84, data->localData[0]->timeValue, data->simulationInfo->realParameter[278] /* pwLine.t1 PARAM */, 1, GreaterEq);
  RELATIONHYSTERESIS(tmp85, data->localData[0]->timeValue, data->simulationInfo->realParameter[279] /* pwLine.t2 PARAM */, 2, Less);
  jacobian->resultVars[6] /* $res_NLSJac33_7.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_VAR */ = ((tmp84 && tmp85)?jacobian->tmpVars[7] /* pwLine.is.im.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[21] /* pwLine1.vs.im.SeedNLSJac33 SEED_VAR */ - ((data->simulationInfo->realParameter[277] /* pwLine.Z.re PARAM */) * (jacobian->tmpVars[7] /* pwLine.is.im.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */ + ((-jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[274] /* pwLine.Y.im PARAM */) - ((jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[275] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[276] /* pwLine.Z.im PARAM */) * (jacobian->tmpVars[6] /* pwLine.is.re.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */ + (jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[274] /* pwLine.Y.im PARAM */) - ((jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[275] /* pwLine.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 258
type: SIMPLE_ASSIGN
$res_NLSJac33_8.$pDERNLSJac33.dummyVarNLSJac33 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.is.re.$pDERNLSJac33.dummyVarNLSJac33 else pwLine.vs.re.$pDERNLSJac33.dummyVarNLSJac33 - pwLine1.vs.re.SeedNLSJac33 - (pwLine.Z.re * (pwLine.is.re.$pDERNLSJac33.dummyVarNLSJac33 + pwLine.vs.im.$pDERNLSJac33.dummyVarNLSJac33 * pwLine.Y.im - pwLine.vs.re.$pDERNLSJac33.dummyVarNLSJac33 * pwLine.Y.re) - pwLine.Z.im * (pwLine.is.im.$pDERNLSJac33.dummyVarNLSJac33 + (-pwLine.vs.re.$pDERNLSJac33.dummyVarNLSJac33) * pwLine.Y.im - pwLine.vs.im.$pDERNLSJac33.dummyVarNLSJac33 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_258(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,258};
  modelica_boolean tmp86;
  modelica_boolean tmp87;
  RELATIONHYSTERESIS(tmp86, data->localData[0]->timeValue, data->simulationInfo->realParameter[278] /* pwLine.t1 PARAM */, 1, GreaterEq);
  RELATIONHYSTERESIS(tmp87, data->localData[0]->timeValue, data->simulationInfo->realParameter[279] /* pwLine.t2 PARAM */, 2, Less);
  jacobian->resultVars[7] /* $res_NLSJac33_8.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_VAR */ = ((tmp86 && tmp87)?jacobian->tmpVars[6] /* pwLine.is.re.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[20] /* pwLine1.vs.re.SeedNLSJac33 SEED_VAR */ - ((data->simulationInfo->realParameter[277] /* pwLine.Z.re PARAM */) * (jacobian->tmpVars[6] /* pwLine.is.re.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */ + (jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[274] /* pwLine.Y.im PARAM */) - ((jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[275] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[276] /* pwLine.Z.im PARAM */) * (jacobian->tmpVars[7] /* pwLine.is.im.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */ + ((-jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[274] /* pwLine.Y.im PARAM */) - ((jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[275] /* pwLine.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 259
type: SIMPLE_ASSIGN
$res_NLSJac33_9.$pDERNLSJac33.dummyVarNLSJac33 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.ir.re.SeedNLSJac33 else pwLine1.vs.re.SeedNLSJac33 - pwLine.vs.re.$pDERNLSJac33.dummyVarNLSJac33 - (pwLine.Z.re * (pwLine.ir.re.SeedNLSJac33 + pwLine1.vs.im.SeedNLSJac33 * pwLine.Y.im - pwLine1.vs.re.SeedNLSJac33 * pwLine.Y.re) - pwLine.Z.im * (pwLine.ir.im.SeedNLSJac33 + (-pwLine1.vs.re.SeedNLSJac33) * pwLine.Y.im - pwLine1.vs.im.SeedNLSJac33 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_259(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,259};
  modelica_boolean tmp88;
  modelica_boolean tmp89;
  RELATIONHYSTERESIS(tmp88, data->localData[0]->timeValue, data->simulationInfo->realParameter[278] /* pwLine.t1 PARAM */, 1, GreaterEq);
  RELATIONHYSTERESIS(tmp89, data->localData[0]->timeValue, data->simulationInfo->realParameter[279] /* pwLine.t2 PARAM */, 2, Less);
  jacobian->resultVars[8] /* $res_NLSJac33_9.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_VAR */ = ((tmp88 && tmp89)?jacobian->seedVars[5] /* pwLine.ir.re.SeedNLSJac33 SEED_VAR */:jacobian->seedVars[20] /* pwLine1.vs.re.SeedNLSJac33 SEED_VAR */ - jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[277] /* pwLine.Z.re PARAM */) * (jacobian->seedVars[5] /* pwLine.ir.re.SeedNLSJac33 SEED_VAR */ + (jacobian->seedVars[21] /* pwLine1.vs.im.SeedNLSJac33 SEED_VAR */) * (data->simulationInfo->realParameter[274] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine1.vs.re.SeedNLSJac33 SEED_VAR */) * (data->simulationInfo->realParameter[275] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[276] /* pwLine.Z.im PARAM */) * (jacobian->seedVars[4] /* pwLine.ir.im.SeedNLSJac33 SEED_VAR */ + ((-jacobian->seedVars[20] /* pwLine1.vs.re.SeedNLSJac33 SEED_VAR */)) * (data->simulationInfo->realParameter[274] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine1.vs.im.SeedNLSJac33 SEED_VAR */) * (data->simulationInfo->realParameter[275] /* pwLine.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 260
type: SIMPLE_ASSIGN
$res_NLSJac33_10.$pDERNLSJac33.dummyVarNLSJac33 = pwLine1.vs.im * constantLoad.p.ir.$pDERNLSJac33.dummyVarNLSJac33 + pwLine1.vs.im.SeedNLSJac33 * constantLoad.p.ir + (-pwLine1.vs.re.SeedNLSJac33) * constantLoad.p.ii - constantLoad.Q.$pDERNLSJac33.dummyVarNLSJac33 - pwLine1.vs.re * constantLoad.p.ii.$pDERNLSJac33.dummyVarNLSJac33
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_260(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,260};
  jacobian->resultVars[9] /* $res_NLSJac33_10.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_VAR */ = (data->localData[0]->realVars[122] /* pwLine1.vs.im variable */) * (jacobian->tmpVars[22] /* constantLoad.p.ir.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[21] /* pwLine1.vs.im.SeedNLSJac33 SEED_VAR */) * (data->localData[0]->realVars[52] /* constantLoad.p.ir variable */) + ((-jacobian->seedVars[20] /* pwLine1.vs.re.SeedNLSJac33 SEED_VAR */)) * (data->localData[0]->realVars[51] /* constantLoad.p.ii variable */) - jacobian->tmpVars[3] /* constantLoad.Q.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */ - ((data->localData[0]->realVars[123] /* pwLine1.vs.re variable */) * (jacobian->tmpVars[21] /* constantLoad.p.ii.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 261
type: SIMPLE_ASSIGN
$res_NLSJac33_11.$pDERNLSJac33.dummyVarNLSJac33 = pwLine1.vs.im * constantLoad.p.ii.$pDERNLSJac33.dummyVarNLSJac33 + pwLine1.vs.im.SeedNLSJac33 * constantLoad.p.ii + pwLine1.vs.re * constantLoad.p.ir.$pDERNLSJac33.dummyVarNLSJac33 + pwLine1.vs.re.SeedNLSJac33 * constantLoad.p.ir - constantLoad.P.$pDERNLSJac33.dummyVarNLSJac33
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_261(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,261};
  jacobian->resultVars[10] /* $res_NLSJac33_11.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_VAR */ = (data->localData[0]->realVars[122] /* pwLine1.vs.im variable */) * (jacobian->tmpVars[21] /* constantLoad.p.ii.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[21] /* pwLine1.vs.im.SeedNLSJac33 SEED_VAR */) * (data->localData[0]->realVars[51] /* constantLoad.p.ii variable */) + (data->localData[0]->realVars[123] /* pwLine1.vs.re variable */) * (jacobian->tmpVars[22] /* constantLoad.p.ir.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[20] /* pwLine1.vs.re.SeedNLSJac33 SEED_VAR */) * (data->localData[0]->realVars[52] /* constantLoad.p.ir variable */) - jacobian->tmpVars[4] /* constantLoad.P.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 262
type: SIMPLE_ASSIGN
$res_NLSJac33_12.$pDERNLSJac33.dummyVarNLSJac33 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.is.im.SeedNLSJac33 else pwLine1.vs.im.SeedNLSJac33 - pwLine1.vr.im.SeedNLSJac33 - (pwLine1.Z.re * (pwLine1.is.im.SeedNLSJac33 + (-pwLine1.vs.re.SeedNLSJac33) * pwLine1.Y.im - pwLine1.vs.im.SeedNLSJac33 * pwLine1.Y.re) + pwLine1.Z.im * (pwLine1.is.re.SeedNLSJac33 + pwLine1.vs.im.SeedNLSJac33 * pwLine1.Y.im - pwLine1.vs.re.SeedNLSJac33 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_262(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,262};
  modelica_boolean tmp90;
  modelica_boolean tmp91;
  RELATIONHYSTERESIS(tmp90, data->localData[0]->timeValue, data->simulationInfo->realParameter[289] /* pwLine1.t1 PARAM */, 3, GreaterEq);
  RELATIONHYSTERESIS(tmp91, data->localData[0]->timeValue, data->simulationInfo->realParameter[290] /* pwLine1.t2 PARAM */, 4, Less);
  jacobian->resultVars[11] /* $res_NLSJac33_12.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_VAR */ = ((tmp90 && tmp91)?jacobian->seedVars[2] /* pwLine1.is.im.SeedNLSJac33 SEED_VAR */:jacobian->seedVars[21] /* pwLine1.vs.im.SeedNLSJac33 SEED_VAR */ - jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac33 SEED_VAR */ - ((data->simulationInfo->realParameter[288] /* pwLine1.Z.re PARAM */) * (jacobian->seedVars[2] /* pwLine1.is.im.SeedNLSJac33 SEED_VAR */ + ((-jacobian->seedVars[20] /* pwLine1.vs.re.SeedNLSJac33 SEED_VAR */)) * (data->simulationInfo->realParameter[285] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine1.vs.im.SeedNLSJac33 SEED_VAR */) * (data->simulationInfo->realParameter[286] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[287] /* pwLine1.Z.im PARAM */) * (jacobian->seedVars[0] /* pwLine1.is.re.SeedNLSJac33 SEED_VAR */ + (jacobian->seedVars[21] /* pwLine1.vs.im.SeedNLSJac33 SEED_VAR */) * (data->simulationInfo->realParameter[285] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine1.vs.re.SeedNLSJac33 SEED_VAR */) * (data->simulationInfo->realParameter[286] /* pwLine1.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 263
type: SIMPLE_ASSIGN
$res_NLSJac33_13.$pDERNLSJac33.dummyVarNLSJac33 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.is.re.SeedNLSJac33 else pwLine1.vs.re.SeedNLSJac33 - pwLine1.vr.re.SeedNLSJac33 - (pwLine1.Z.re * (pwLine1.is.re.SeedNLSJac33 + pwLine1.vs.im.SeedNLSJac33 * pwLine1.Y.im - pwLine1.vs.re.SeedNLSJac33 * pwLine1.Y.re) - pwLine1.Z.im * (pwLine1.is.im.SeedNLSJac33 + (-pwLine1.vs.re.SeedNLSJac33) * pwLine1.Y.im - pwLine1.vs.im.SeedNLSJac33 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_263(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,263};
  modelica_boolean tmp92;
  modelica_boolean tmp93;
  RELATIONHYSTERESIS(tmp92, data->localData[0]->timeValue, data->simulationInfo->realParameter[289] /* pwLine1.t1 PARAM */, 3, GreaterEq);
  RELATIONHYSTERESIS(tmp93, data->localData[0]->timeValue, data->simulationInfo->realParameter[290] /* pwLine1.t2 PARAM */, 4, Less);
  jacobian->resultVars[12] /* $res_NLSJac33_13.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_VAR */ = ((tmp92 && tmp93)?jacobian->seedVars[0] /* pwLine1.is.re.SeedNLSJac33 SEED_VAR */:jacobian->seedVars[20] /* pwLine1.vs.re.SeedNLSJac33 SEED_VAR */ - jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac33 SEED_VAR */ - ((data->simulationInfo->realParameter[288] /* pwLine1.Z.re PARAM */) * (jacobian->seedVars[0] /* pwLine1.is.re.SeedNLSJac33 SEED_VAR */ + (jacobian->seedVars[21] /* pwLine1.vs.im.SeedNLSJac33 SEED_VAR */) * (data->simulationInfo->realParameter[285] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine1.vs.re.SeedNLSJac33 SEED_VAR */) * (data->simulationInfo->realParameter[286] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[287] /* pwLine1.Z.im PARAM */) * (jacobian->seedVars[2] /* pwLine1.is.im.SeedNLSJac33 SEED_VAR */ + ((-jacobian->seedVars[20] /* pwLine1.vs.re.SeedNLSJac33 SEED_VAR */)) * (data->simulationInfo->realParameter[285] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine1.vs.im.SeedNLSJac33 SEED_VAR */) * (data->simulationInfo->realParameter[286] /* pwLine1.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 264
type: SIMPLE_ASSIGN
$res_NLSJac33_14.$pDERNLSJac33.dummyVarNLSJac33 = $cse2 * gENCLS.vq.$pDERNLSJac33.dummyVarNLSJac33 + $cse1 * gENCLS.vd.$pDERNLSJac33.dummyVarNLSJac33 - pwLine1.vr.re.SeedNLSJac33
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_264(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,264};
  jacobian->resultVars[13] /* $res_NLSJac33_14.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_VAR */ = (data->localData[0]->realVars[25] /* $cse2 variable */) * (jacobian->tmpVars[15] /* gENCLS.vq.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[24] /* $cse1 variable */) * (jacobian->tmpVars[16] /* gENCLS.vd.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */) - jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac33 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 265
type: SIMPLE_ASSIGN
$res_NLSJac33_15.$pDERNLSJac33.dummyVarNLSJac33 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.is.re.SeedNLSJac33 else pwLine3.vr.re.SeedNLSJac33 - pwLine1.vr.re.SeedNLSJac33 - (pwLine4.Z.re * (pwLine4.is.re.SeedNLSJac33 + pwLine3.vr.im.SeedNLSJac33 * pwLine4.Y.im - pwLine3.vr.re.SeedNLSJac33 * pwLine4.Y.re) - pwLine4.Z.im * (pwLine4.is.im.SeedNLSJac33 + (-pwLine3.vr.re.SeedNLSJac33) * pwLine4.Y.im - pwLine3.vr.im.SeedNLSJac33 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_265(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,265};
  modelica_boolean tmp94;
  modelica_boolean tmp95;
  RELATIONHYSTERESIS(tmp94, data->localData[0]->timeValue, data->simulationInfo->realParameter[311] /* pwLine4.t1 PARAM */, 13, GreaterEq);
  RELATIONHYSTERESIS(tmp95, data->localData[0]->timeValue, data->simulationInfo->realParameter[312] /* pwLine4.t2 PARAM */, 14, Less);
  jacobian->resultVars[14] /* $res_NLSJac33_15.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_VAR */ = ((tmp94 && tmp95)?jacobian->seedVars[7] /* pwLine4.is.re.SeedNLSJac33 SEED_VAR */:jacobian->seedVars[19] /* pwLine3.vr.re.SeedNLSJac33 SEED_VAR */ - jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac33 SEED_VAR */ - ((data->simulationInfo->realParameter[310] /* pwLine4.Z.re PARAM */) * (jacobian->seedVars[7] /* pwLine4.is.re.SeedNLSJac33 SEED_VAR */ + (jacobian->seedVars[18] /* pwLine3.vr.im.SeedNLSJac33 SEED_VAR */) * (data->simulationInfo->realParameter[307] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine3.vr.re.SeedNLSJac33 SEED_VAR */) * (data->simulationInfo->realParameter[308] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[309] /* pwLine4.Z.im PARAM */) * (jacobian->seedVars[8] /* pwLine4.is.im.SeedNLSJac33 SEED_VAR */ + ((-jacobian->seedVars[19] /* pwLine3.vr.re.SeedNLSJac33 SEED_VAR */)) * (data->simulationInfo->realParameter[307] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine3.vr.im.SeedNLSJac33 SEED_VAR */) * (data->simulationInfo->realParameter[308] /* pwLine4.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 266
type: SIMPLE_ASSIGN
$res_NLSJac33_16.$pDERNLSJac33.dummyVarNLSJac33 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.is.im.SeedNLSJac33 else pwLine3.vr.im.SeedNLSJac33 - pwLine1.vr.im.SeedNLSJac33 - (pwLine4.Z.re * (pwLine4.is.im.SeedNLSJac33 + (-pwLine3.vr.re.SeedNLSJac33) * pwLine4.Y.im - pwLine3.vr.im.SeedNLSJac33 * pwLine4.Y.re) + pwLine4.Z.im * (pwLine4.is.re.SeedNLSJac33 + pwLine3.vr.im.SeedNLSJac33 * pwLine4.Y.im - pwLine3.vr.re.SeedNLSJac33 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_266(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,266};
  modelica_boolean tmp96;
  modelica_boolean tmp97;
  RELATIONHYSTERESIS(tmp96, data->localData[0]->timeValue, data->simulationInfo->realParameter[311] /* pwLine4.t1 PARAM */, 13, GreaterEq);
  RELATIONHYSTERESIS(tmp97, data->localData[0]->timeValue, data->simulationInfo->realParameter[312] /* pwLine4.t2 PARAM */, 14, Less);
  jacobian->resultVars[15] /* $res_NLSJac33_16.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_VAR */ = ((tmp96 && tmp97)?jacobian->seedVars[8] /* pwLine4.is.im.SeedNLSJac33 SEED_VAR */:jacobian->seedVars[18] /* pwLine3.vr.im.SeedNLSJac33 SEED_VAR */ - jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac33 SEED_VAR */ - ((data->simulationInfo->realParameter[310] /* pwLine4.Z.re PARAM */) * (jacobian->seedVars[8] /* pwLine4.is.im.SeedNLSJac33 SEED_VAR */ + ((-jacobian->seedVars[19] /* pwLine3.vr.re.SeedNLSJac33 SEED_VAR */)) * (data->simulationInfo->realParameter[307] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine3.vr.im.SeedNLSJac33 SEED_VAR */) * (data->simulationInfo->realParameter[308] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[309] /* pwLine4.Z.im PARAM */) * (jacobian->seedVars[7] /* pwLine4.is.re.SeedNLSJac33 SEED_VAR */ + (jacobian->seedVars[18] /* pwLine3.vr.im.SeedNLSJac33 SEED_VAR */) * (data->simulationInfo->realParameter[307] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine3.vr.re.SeedNLSJac33 SEED_VAR */) * (data->simulationInfo->realParameter[308] /* pwLine4.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 267
type: SIMPLE_ASSIGN
$res_NLSJac33_17.$pDERNLSJac33.dummyVarNLSJac33 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.ir.re.$pDERNLSJac33.dummyVarNLSJac33 else pwLine1.vr.re.SeedNLSJac33 - pwLine3.vr.re.SeedNLSJac33 - (pwLine4.Z.re * (pwLine4.ir.re.$pDERNLSJac33.dummyVarNLSJac33 + pwLine1.vr.im.SeedNLSJac33 * pwLine4.Y.im - pwLine1.vr.re.SeedNLSJac33 * pwLine4.Y.re) - pwLine4.Z.im * (pwLine4.ir.im.$pDERNLSJac33.dummyVarNLSJac33 + (-pwLine1.vr.re.SeedNLSJac33) * pwLine4.Y.im - pwLine1.vr.im.SeedNLSJac33 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_267(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,267};
  modelica_boolean tmp98;
  modelica_boolean tmp99;
  RELATIONHYSTERESIS(tmp98, data->localData[0]->timeValue, data->simulationInfo->realParameter[311] /* pwLine4.t1 PARAM */, 13, GreaterEq);
  RELATIONHYSTERESIS(tmp99, data->localData[0]->timeValue, data->simulationInfo->realParameter[312] /* pwLine4.t2 PARAM */, 14, Less);
  jacobian->resultVars[16] /* $res_NLSJac33_17.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_VAR */ = ((tmp98 && tmp99)?jacobian->tmpVars[17] /* pwLine4.ir.re.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */:jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac33 SEED_VAR */ - jacobian->seedVars[19] /* pwLine3.vr.re.SeedNLSJac33 SEED_VAR */ - ((data->simulationInfo->realParameter[310] /* pwLine4.Z.re PARAM */) * (jacobian->tmpVars[17] /* pwLine4.ir.re.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac33 SEED_VAR */) * (data->simulationInfo->realParameter[307] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac33 SEED_VAR */) * (data->simulationInfo->realParameter[308] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[309] /* pwLine4.Z.im PARAM */) * (jacobian->tmpVars[18] /* pwLine4.ir.im.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac33 SEED_VAR */)) * (data->simulationInfo->realParameter[307] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac33 SEED_VAR */) * (data->simulationInfo->realParameter[308] /* pwLine4.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 268
type: SIMPLE_ASSIGN
$res_NLSJac33_18.$pDERNLSJac33.dummyVarNLSJac33 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.ir.im.SeedNLSJac33 else pwLine3.vr.im.SeedNLSJac33 - pwLine1.vs.im.SeedNLSJac33 - (pwLine3.Z.re * (pwLine3.ir.im.SeedNLSJac33 + (-pwLine3.vr.re.SeedNLSJac33) * pwLine3.Y.im - pwLine3.vr.im.SeedNLSJac33 * pwLine3.Y.re) + pwLine3.Z.im * (pwLine3.ir.re.SeedNLSJac33 + pwLine3.vr.im.SeedNLSJac33 * pwLine3.Y.im - pwLine3.vr.re.SeedNLSJac33 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_268(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,268};
  modelica_boolean tmp100;
  modelica_boolean tmp101;
  RELATIONHYSTERESIS(tmp100, data->localData[0]->timeValue, data->simulationInfo->realParameter[300] /* pwLine3.t1 PARAM */, 9, GreaterEq);
  RELATIONHYSTERESIS(tmp101, data->localData[0]->timeValue, data->simulationInfo->realParameter[301] /* pwLine3.t2 PARAM */, 10, Less);
  jacobian->resultVars[17] /* $res_NLSJac33_18.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_VAR */ = ((tmp100 && tmp101)?jacobian->seedVars[9] /* pwLine3.ir.im.SeedNLSJac33 SEED_VAR */:jacobian->seedVars[18] /* pwLine3.vr.im.SeedNLSJac33 SEED_VAR */ - jacobian->seedVars[21] /* pwLine1.vs.im.SeedNLSJac33 SEED_VAR */ - ((data->simulationInfo->realParameter[299] /* pwLine3.Z.re PARAM */) * (jacobian->seedVars[9] /* pwLine3.ir.im.SeedNLSJac33 SEED_VAR */ + ((-jacobian->seedVars[19] /* pwLine3.vr.re.SeedNLSJac33 SEED_VAR */)) * (data->simulationInfo->realParameter[296] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine3.vr.im.SeedNLSJac33 SEED_VAR */) * (data->simulationInfo->realParameter[297] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[298] /* pwLine3.Z.im PARAM */) * (jacobian->seedVars[6] /* pwLine3.ir.re.SeedNLSJac33 SEED_VAR */ + (jacobian->seedVars[18] /* pwLine3.vr.im.SeedNLSJac33 SEED_VAR */) * (data->simulationInfo->realParameter[296] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine3.vr.re.SeedNLSJac33 SEED_VAR */) * (data->simulationInfo->realParameter[297] /* pwLine3.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 269
type: SIMPLE_ASSIGN
$res_NLSJac33_19.$pDERNLSJac33.dummyVarNLSJac33 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.ir.im.$pDERNLSJac33.dummyVarNLSJac33 else pwLine1.vr.im.SeedNLSJac33 - pwLine3.vr.im.SeedNLSJac33 - (pwLine4.Z.re * (pwLine4.ir.im.$pDERNLSJac33.dummyVarNLSJac33 + (-pwLine1.vr.re.SeedNLSJac33) * pwLine4.Y.im - pwLine1.vr.im.SeedNLSJac33 * pwLine4.Y.re) + pwLine4.Z.im * (pwLine4.ir.re.$pDERNLSJac33.dummyVarNLSJac33 + pwLine1.vr.im.SeedNLSJac33 * pwLine4.Y.im - pwLine1.vr.re.SeedNLSJac33 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_269(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,269};
  modelica_boolean tmp102;
  modelica_boolean tmp103;
  RELATIONHYSTERESIS(tmp102, data->localData[0]->timeValue, data->simulationInfo->realParameter[311] /* pwLine4.t1 PARAM */, 13, GreaterEq);
  RELATIONHYSTERESIS(tmp103, data->localData[0]->timeValue, data->simulationInfo->realParameter[312] /* pwLine4.t2 PARAM */, 14, Less);
  jacobian->resultVars[18] /* $res_NLSJac33_19.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_VAR */ = ((tmp102 && tmp103)?jacobian->tmpVars[18] /* pwLine4.ir.im.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */:jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac33 SEED_VAR */ - jacobian->seedVars[18] /* pwLine3.vr.im.SeedNLSJac33 SEED_VAR */ - ((data->simulationInfo->realParameter[310] /* pwLine4.Z.re PARAM */) * (jacobian->tmpVars[18] /* pwLine4.ir.im.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac33 SEED_VAR */)) * (data->simulationInfo->realParameter[307] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac33 SEED_VAR */) * (data->simulationInfo->realParameter[308] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[309] /* pwLine4.Z.im PARAM */) * (jacobian->tmpVars[17] /* pwLine4.ir.re.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac33 SEED_VAR */) * (data->simulationInfo->realParameter[307] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac33 SEED_VAR */) * (data->simulationInfo->realParameter[308] /* pwLine4.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 270
type: SIMPLE_ASSIGN
$res_NLSJac33_20.$pDERNLSJac33.dummyVarNLSJac33 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.ir.im.SeedNLSJac33 else pwLine1.vr.im.SeedNLSJac33 - pwLine1.vs.im.SeedNLSJac33 - (pwLine1.Z.re * (pwLine1.ir.im.SeedNLSJac33 + (-pwLine1.vr.re.SeedNLSJac33) * pwLine1.Y.im - pwLine1.vr.im.SeedNLSJac33 * pwLine1.Y.re) + pwLine1.Z.im * (pwLine1.ir.re.SeedNLSJac33 + pwLine1.vr.im.SeedNLSJac33 * pwLine1.Y.im - pwLine1.vr.re.SeedNLSJac33 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_270(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,270};
  modelica_boolean tmp104;
  modelica_boolean tmp105;
  RELATIONHYSTERESIS(tmp104, data->localData[0]->timeValue, data->simulationInfo->realParameter[289] /* pwLine1.t1 PARAM */, 3, GreaterEq);
  RELATIONHYSTERESIS(tmp105, data->localData[0]->timeValue, data->simulationInfo->realParameter[290] /* pwLine1.t2 PARAM */, 4, Less);
  jacobian->resultVars[19] /* $res_NLSJac33_20.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_VAR */ = ((tmp104 && tmp105)?jacobian->seedVars[10] /* pwLine1.ir.im.SeedNLSJac33 SEED_VAR */:jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac33 SEED_VAR */ - jacobian->seedVars[21] /* pwLine1.vs.im.SeedNLSJac33 SEED_VAR */ - ((data->simulationInfo->realParameter[288] /* pwLine1.Z.re PARAM */) * (jacobian->seedVars[10] /* pwLine1.ir.im.SeedNLSJac33 SEED_VAR */ + ((-jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac33 SEED_VAR */)) * (data->simulationInfo->realParameter[285] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac33 SEED_VAR */) * (data->simulationInfo->realParameter[286] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[287] /* pwLine1.Z.im PARAM */) * (jacobian->seedVars[11] /* pwLine1.ir.re.SeedNLSJac33 SEED_VAR */ + (jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac33 SEED_VAR */) * (data->simulationInfo->realParameter[285] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac33 SEED_VAR */) * (data->simulationInfo->realParameter[286] /* pwLine1.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 271
type: SIMPLE_ASSIGN
$res_NLSJac33_21.$pDERNLSJac33.dummyVarNLSJac33 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.ir.re.SeedNLSJac33 else pwLine1.vr.re.SeedNLSJac33 - pwLine1.vs.re.SeedNLSJac33 - (pwLine1.Z.re * (pwLine1.ir.re.SeedNLSJac33 + pwLine1.vr.im.SeedNLSJac33 * pwLine1.Y.im - pwLine1.vr.re.SeedNLSJac33 * pwLine1.Y.re) - pwLine1.Z.im * (pwLine1.ir.im.SeedNLSJac33 + (-pwLine1.vr.re.SeedNLSJac33) * pwLine1.Y.im - pwLine1.vr.im.SeedNLSJac33 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_271(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,271};
  modelica_boolean tmp106;
  modelica_boolean tmp107;
  RELATIONHYSTERESIS(tmp106, data->localData[0]->timeValue, data->simulationInfo->realParameter[289] /* pwLine1.t1 PARAM */, 3, GreaterEq);
  RELATIONHYSTERESIS(tmp107, data->localData[0]->timeValue, data->simulationInfo->realParameter[290] /* pwLine1.t2 PARAM */, 4, Less);
  jacobian->resultVars[20] /* $res_NLSJac33_21.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_VAR */ = ((tmp106 && tmp107)?jacobian->seedVars[11] /* pwLine1.ir.re.SeedNLSJac33 SEED_VAR */:jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac33 SEED_VAR */ - jacobian->seedVars[20] /* pwLine1.vs.re.SeedNLSJac33 SEED_VAR */ - ((data->simulationInfo->realParameter[288] /* pwLine1.Z.re PARAM */) * (jacobian->seedVars[11] /* pwLine1.ir.re.SeedNLSJac33 SEED_VAR */ + (jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac33 SEED_VAR */) * (data->simulationInfo->realParameter[285] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac33 SEED_VAR */) * (data->simulationInfo->realParameter[286] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[287] /* pwLine1.Z.im PARAM */) * (jacobian->seedVars[10] /* pwLine1.ir.im.SeedNLSJac33 SEED_VAR */ + ((-jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac33 SEED_VAR */)) * (data->simulationInfo->realParameter[285] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac33 SEED_VAR */) * (data->simulationInfo->realParameter[286] /* pwLine1.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 272
type: SIMPLE_ASSIGN
$res_NLSJac33_22.$pDERNLSJac33.dummyVarNLSJac33 = $cse1 * gENCLS.vq.$pDERNLSJac33.dummyVarNLSJac33 + (-$cse2) * gENCLS.vd.$pDERNLSJac33.dummyVarNLSJac33 - pwLine1.vr.im.SeedNLSJac33
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_272(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,272};
  jacobian->resultVars[21] /* $res_NLSJac33_22.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_VAR */ = (data->localData[0]->realVars[24] /* $cse1 variable */) * (jacobian->tmpVars[15] /* gENCLS.vq.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */) + ((-data->localData[0]->realVars[25] /* $cse2 variable */)) * (jacobian->tmpVars[16] /* gENCLS.vd.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */) - jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac33 SEED_VAR */;
  TRACE_POP
}

OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_functionJacNLSJac33_constantEqns(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_INDEX_JAC_NLSJac33;
  
  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_functionJacNLSJac33_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_INDEX_JAC_NLSJac33;
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_228(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_229(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_230(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_231(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_232(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_233(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_234(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_235(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_236(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_237(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_238(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_239(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_240(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_241(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_242(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_243(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_244(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_245(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_246(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_247(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_248(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_249(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_250(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_251(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_252(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_253(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_254(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_255(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_256(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_257(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_258(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_259(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_260(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_261(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_262(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_263(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_264(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_265(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_266(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_267(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_268(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_269(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_270(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_271(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_272(data, threadData, jacobian, parentJacobian);
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_functionJacF_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_functionJacD_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_functionJacC_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_functionJacB_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
/* constant equations */
/* dynamic equations */

OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_functionJacA_constantEqns(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_INDEX_JAC_A;
  
  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_functionJacA_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_INDEX_JAC_A;
  TRACE_POP
  return 0;
}

OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_initialAnalyticJacobianNLSJac33(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+22] = {0,4,4,4,4,4,4,3,3,3,3,4,4,4,4,7,7,4,4,8,8,11,11};
  const int rowIndex[112] = {9,10,11,12,4,5,9,10,9,10,11,12,4,5,9,10,3,8,9,10,3,8,9,10,1,2,17,1,14,15,0,14,15,0,2,17,16,18,19,20,16,18,19,20,13,16,18,21,13,16,18,21,11,15,16,18,19,20,21,12,13,14,16,18,19,20,3,6,7,8,3,6,7,8,0,1,2,5,14,15,17,18,0,1,2,4,14,15,16,17,2,3,4,5,7,8,9,10,11,12,20,3,4,5,6,8,9,10,11,12,17,19};
  int i = 0;
  
  jacobian->sizeCols = 22;
  jacobian->sizeRows = 22;
  jacobian->sizeTmpVars = 45;
  jacobian->seedVars = (modelica_real*) calloc(22,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(22,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(45,sizeof(modelica_real));
  jacobian->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  jacobian->sparsePattern->leadindex = (unsigned int*) malloc((22+1)*sizeof(int));
  jacobian->sparsePattern->index = (unsigned int*) malloc(112*sizeof(int));
  jacobian->sparsePattern->numberOfNoneZeros = 112;
  jacobian->sparsePattern->colorCols = (unsigned int*) malloc(22*sizeof(int));
  jacobian->sparsePattern->maxColors = 10;
  jacobian->constantEqns = NULL;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern->leadindex, colPtrIndex, (22+1)*sizeof(int));
  
  for(i=2;i<22+1;++i)
    jacobian->sparsePattern->leadindex[i] += jacobian->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern->index, rowIndex, 112*sizeof(int));
  
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
  jacobian->sparsePattern->colorCols[1] = 9;
  jacobian->sparsePattern->colorCols[7] = 9;
  jacobian->sparsePattern->colorCols[9] = 9;
  jacobian->sparsePattern->colorCols[11] = 9;
  jacobian->sparsePattern->colorCols[17] = 9;
  jacobian->sparsePattern->colorCols[0] = 10;
  jacobian->sparsePattern->colorCols[6] = 10;
  jacobian->sparsePattern->colorCols[8] = 10;
  jacobian->sparsePattern->colorCols[10] = 10;
  jacobian->sparsePattern->colorCols[16] = 10;
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_initialAnalyticJacobianF(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_initialAnalyticJacobianD(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_initialAnalyticJacobianC(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_initialAnalyticJacobianB(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_initialAnalyticJacobianA(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+12] = {0,8,8,8,8,8,8,8,2,3,3,4,2};
  const int rowIndex[70] = {2,3,4,5,7,8,10,11,2,3,4,5,7,8,10,11,2,3,4,5,7,8,10,11,2,3,4,5,7,8,10,11,2,3,4,5,7,8,10,11,2,3,4,5,7,8,10,11,2,3,4,5,7,8,10,11,6,7,8,10,11,9,10,11,3,9,10,11,10,11};
  int i = 0;
  
  jacobian->sizeCols = 12;
  jacobian->sizeRows = 12;
  jacobian->sizeTmpVars = 0;
  jacobian->seedVars = (modelica_real*) calloc(12,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(12,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(0,sizeof(modelica_real));
  jacobian->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  jacobian->sparsePattern->leadindex = (unsigned int*) malloc((12+1)*sizeof(int));
  jacobian->sparsePattern->index = (unsigned int*) malloc(70*sizeof(int));
  jacobian->sparsePattern->numberOfNoneZeros = 70;
  jacobian->sparsePattern->colorCols = (unsigned int*) malloc(12*sizeof(int));
  jacobian->sparsePattern->maxColors = 11;
  jacobian->constantEqns = NULL;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern->leadindex, colPtrIndex, (12+1)*sizeof(int));
  
  for(i=2;i<12+1;++i)
    jacobian->sparsePattern->leadindex[i] += jacobian->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern->index, rowIndex, 70*sizeof(int));
  
  /* write color array */
  jacobian->sparsePattern->colorCols[8] = 1;
  jacobian->sparsePattern->colorCols[10] = 2;
  jacobian->sparsePattern->colorCols[11] = 3;
  jacobian->sparsePattern->colorCols[5] = 4;
  jacobian->sparsePattern->colorCols[4] = 5;
  jacobian->sparsePattern->colorCols[3] = 6;
  jacobian->sparsePattern->colorCols[2] = 7;
  jacobian->sparsePattern->colorCols[6] = 8;
  jacobian->sparsePattern->colorCols[7] = 9;
  jacobian->sparsePattern->colorCols[9] = 9;
  jacobian->sparsePattern->colorCols[1] = 10;
  jacobian->sparsePattern->colorCols[0] = 11;
  TRACE_POP
  return 0;
}


