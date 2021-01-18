/* Jacobians 6 */
#include "OpenIPSL.Examples.Controls.PSSE.ES.EXAC1_model.h"
#include "OpenIPSL.Examples.Controls.PSSE.ES.EXAC1_12jac.h"
/* constant equations */
/* dynamic equations */

/*
equation index: 240
type: SIMPLE_ASSIGN
constantLoad.v.$pDERNLSJac21.dummyVarNLSJac21 = (pwLine1.vs.re * pwLine1.vs.re.SeedNLSJac21 + pwLine1.vs.im * pwLine1.vs.im.SeedNLSJac21) / sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_240(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,240};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[131] /* pwLine1.vs.re variable */;
  tmp1 = data->localData[0]->realVars[130] /* pwLine1.vs.im variable */;
  jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ = DIVISION((data->localData[0]->realVars[131] /* pwLine1.vs.re variable */) * (jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac21 SEED_VAR */) + (data->localData[0]->realVars[130] /* pwLine1.vs.im variable */) * (jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac21 SEED_VAR */),sqrt((tmp0 * tmp0) + (tmp1 * tmp1)),"sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)");
  TRACE_POP
}

/*
equation index: 241
type: SIMPLE_ASSIGN
constantLoad.kI.$pDERNLSJac21.dummyVarNLSJac21 = if constantLoad.v < 0.5 then constantLoad.a2 * constantLoad.b2 * (constantLoad.v ^ (-1.0 + constantLoad.b2) * (-exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2)) * constantLoad.a2 * constantLoad.b2 * constantLoad.v ^ (constantLoad.b2 - 1.0) * constantLoad.v.$pDERNLSJac21.dummyVarNLSJac21 + (if noEvent(constantLoad.v == 0.0) then 0.0 else constantLoad.v ^ (-1.0 + constantLoad.b2 - 1.0) * (-1.0 + constantLoad.b2) * constantLoad.v.$pDERNLSJac21.dummyVarNLSJac21) * exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2)) else 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_241(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,241};
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
  RELATIONHYSTERESIS(tmp2, data->localData[0]->realVars[55] /* constantLoad.v variable */, 0.5, 5, Less);
  tmp41 = (modelica_boolean)tmp2;
  if(tmp41)
  {
    tmp3 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
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
    }tmp10 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
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
    }tmp17 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
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
    }tmp32 = (modelica_boolean)(data->localData[0]->realVars[55] /* constantLoad.v variable */ == 0.0);
    if(tmp32)
    {
      tmp33 = 0.0;
    }
    else
    {
      tmp25 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
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
      tmp33 = (tmp27) * ((-1.0 + data->simulationInfo->realParameter[62] /* constantLoad.b2 PARAM */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */));
    }
    tmp34 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
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
    tmp42 = (data->simulationInfo->realParameter[56] /* constantLoad.a2 PARAM */) * ((data->simulationInfo->realParameter[62] /* constantLoad.b2 PARAM */) * ((tmp5) * (((-exp(((-data->simulationInfo->realParameter[56] /* constantLoad.a2 PARAM */)) * (tmp12)))) * ((data->simulationInfo->realParameter[56] /* constantLoad.a2 PARAM */) * (((data->simulationInfo->realParameter[62] /* constantLoad.b2 PARAM */) * (tmp19)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */)))) + (tmp33) * (exp(((-data->simulationInfo->realParameter[56] /* constantLoad.a2 PARAM */)) * (tmp36)))));
  }
  else
  {
    tmp42 = 0.0;
  }
  jacobian->tmpVars[1] /* constantLoad.kI.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ = tmp42;
  TRACE_POP
}

/*
equation index: 242
type: SIMPLE_ASSIGN
constantLoad.kP.$pDERNLSJac21.dummyVarNLSJac21 = if constantLoad.v < constantLoad.PQBRAK then constantLoad.a1 * (-sin(constantLoad.v * constantLoad.wp)) * constantLoad.v.$pDERNLSJac21.dummyVarNLSJac21 * constantLoad.wp + constantLoad.b1 * cos(constantLoad.v * constantLoad.wp) * constantLoad.v.$pDERNLSJac21.dummyVarNLSJac21 * constantLoad.wp else 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_242(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,242};
  modelica_boolean tmp43;
  RELATIONHYSTERESIS(tmp43, data->localData[0]->realVars[55] /* constantLoad.v variable */, data->simulationInfo->realParameter[35] /* constantLoad.PQBRAK PARAM */, 6, Less);
  jacobian->tmpVars[2] /* constantLoad.kP.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ = (tmp43?(data->simulationInfo->realParameter[55] /* constantLoad.a1 PARAM */) * (((-sin((data->localData[0]->realVars[55] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[75] /* constantLoad.wp PARAM */)))) * ((jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[75] /* constantLoad.wp PARAM */))) + (data->simulationInfo->realParameter[61] /* constantLoad.b1 PARAM */) * ((cos((data->localData[0]->realVars[55] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[75] /* constantLoad.wp PARAM */))) * ((jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[75] /* constantLoad.wp PARAM */))):0.0);
  TRACE_POP
}

/*
equation index: 243
type: SIMPLE_ASSIGN
constantLoad.Q.$pDERNLSJac21.dummyVarNLSJac21 = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.S_I.im * (constantLoad.kI * constantLoad.v.$pDERNLSJac21.dummyVarNLSJac21 + constantLoad.kI.$pDERNLSJac21.dummyVarNLSJac21 * constantLoad.v) + constantLoad.S_Y.im * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac21.dummyVarNLSJac21 + constantLoad.kP.$pDERNLSJac21.dummyVarNLSJac21 * (constantLoad.S_P.im + constantLoad.d_Q) else constantLoad.S_I.im * (constantLoad.kI * constantLoad.v.$pDERNLSJac21.dummyVarNLSJac21 + constantLoad.kI.$pDERNLSJac21.dummyVarNLSJac21 * constantLoad.v) + constantLoad.S_Y.im * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac21.dummyVarNLSJac21 + constantLoad.kP.$pDERNLSJac21.dummyVarNLSJac21 * constantLoad.S_P.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_243(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,243};
  modelica_boolean tmp44;
  modelica_boolean tmp45;
  RELATIONHYSTERESIS(tmp44, data->localData[0]->timeValue, data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */, 3, GreaterEq);
  RELATIONHYSTERESIS(tmp45, data->localData[0]->timeValue, data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[65] /* constantLoad.d_t PARAM */, 4, LessEq);
  jacobian->tmpVars[3] /* constantLoad.Q.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ = ((tmp44 && tmp45)?(data->simulationInfo->realParameter[38] /* constantLoad.S_I.im PARAM */) * ((data->localData[0]->realVars[51] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[1] /* constantLoad.kI.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[42] /* constantLoad.S_Y.im PARAM */) * (((2.0) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[2] /* constantLoad.kP.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[40] /* constantLoad.S_P.im PARAM */ + data->simulationInfo->realParameter[64] /* constantLoad.d_Q PARAM */):(data->simulationInfo->realParameter[38] /* constantLoad.S_I.im PARAM */) * ((data->localData[0]->realVars[51] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[1] /* constantLoad.kI.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[42] /* constantLoad.S_Y.im PARAM */) * (((2.0) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[2] /* constantLoad.kP.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[40] /* constantLoad.S_P.im PARAM */));
  TRACE_POP
}

/*
equation index: 244
type: SIMPLE_ASSIGN
constantLoad.P.$pDERNLSJac21.dummyVarNLSJac21 = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.S_I.re * (constantLoad.kI * constantLoad.v.$pDERNLSJac21.dummyVarNLSJac21 + constantLoad.kI.$pDERNLSJac21.dummyVarNLSJac21 * constantLoad.v) + constantLoad.S_Y.re * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac21.dummyVarNLSJac21 + constantLoad.kP.$pDERNLSJac21.dummyVarNLSJac21 * (constantLoad.S_P.re + constantLoad.d_P) else constantLoad.S_I.re * (constantLoad.kI * constantLoad.v.$pDERNLSJac21.dummyVarNLSJac21 + constantLoad.kI.$pDERNLSJac21.dummyVarNLSJac21 * constantLoad.v) + constantLoad.S_Y.re * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac21.dummyVarNLSJac21 + constantLoad.kP.$pDERNLSJac21.dummyVarNLSJac21 * constantLoad.S_P.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_244(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,244};
  modelica_boolean tmp46;
  modelica_boolean tmp47;
  RELATIONHYSTERESIS(tmp46, data->localData[0]->timeValue, data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */, 3, GreaterEq);
  RELATIONHYSTERESIS(tmp47, data->localData[0]->timeValue, data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[65] /* constantLoad.d_t PARAM */, 4, LessEq);
  jacobian->tmpVars[4] /* constantLoad.P.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ = ((tmp46 && tmp47)?(data->simulationInfo->realParameter[39] /* constantLoad.S_I.re PARAM */) * ((data->localData[0]->realVars[51] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[1] /* constantLoad.kI.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[43] /* constantLoad.S_Y.re PARAM */) * (((2.0) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[2] /* constantLoad.kP.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[41] /* constantLoad.S_P.re PARAM */ + data->simulationInfo->realParameter[63] /* constantLoad.d_P PARAM */):(data->simulationInfo->realParameter[39] /* constantLoad.S_I.re PARAM */) * ((data->localData[0]->realVars[51] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[1] /* constantLoad.kI.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[43] /* constantLoad.S_Y.re PARAM */) * (((2.0) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[2] /* constantLoad.kP.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[41] /* constantLoad.S_P.re PARAM */));
  TRACE_POP
}

/*
equation index: 245
type: SIMPLE_ASSIGN
gENROE.PSId.$pDERNLSJac21.dummyVarNLSJac21 = (-gENROE.Xppd) * gENROE.id.SeedNLSJac21
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_245(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,245};
  jacobian->tmpVars[5] /* gENROE.PSId.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[260] /* gENROE.Xppd PARAM */)) * (jacobian->seedVars[17] /* gENROE.id.SeedNLSJac21 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 246
type: SIMPLE_ASSIGN
pwLine.is.im.$pDERNLSJac21.dummyVarNLSJac21 = ($cse6 * gENROE.iq.SeedNLSJac21 - $cse7 * gENROE.id.SeedNLSJac21) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_246(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,246};
  jacobian->tmpVars[6] /* pwLine.is.im.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[30] /* $cse6 variable */) * (jacobian->seedVars[16] /* gENROE.iq.SeedNLSJac21 SEED_VAR */) - ((data->localData[0]->realVars[31] /* $cse7 variable */) * (jacobian->seedVars[17] /* gENROE.id.SeedNLSJac21 SEED_VAR */))) * (data->simulationInfo->realParameter[206] /* gENROE.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 247
type: SIMPLE_ASSIGN
pwLine.is.re.$pDERNLSJac21.dummyVarNLSJac21 = ($cse7 * gENROE.iq.SeedNLSJac21 + $cse6 * gENROE.id.SeedNLSJac21) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_247(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,247};
  jacobian->tmpVars[7] /* pwLine.is.re.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[31] /* $cse7 variable */) * (jacobian->seedVars[16] /* gENROE.iq.SeedNLSJac21 SEED_VAR */) + (data->localData[0]->realVars[30] /* $cse6 variable */) * (jacobian->seedVars[17] /* gENROE.id.SeedNLSJac21 SEED_VAR */)) * (data->simulationInfo->realParameter[206] /* gENROE.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 248
type: SIMPLE_ASSIGN
gENROE.uq.$pDERNLSJac21.dummyVarNLSJac21 = gENROE.PSId.$pDERNLSJac21.dummyVarNLSJac21 - gENROE.R_a * gENROE.iq.SeedNLSJac21
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_248(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,248};
  jacobian->tmpVars[8] /* gENROE.uq.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[5] /* gENROE.PSId.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[243] /* gENROE.R_a PARAM */) * (jacobian->seedVars[16] /* gENROE.iq.SeedNLSJac21 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 249
type: SIMPLE_ASSIGN
gENROE.PSIq.$pDERNLSJac21.dummyVarNLSJac21 = (-gENROE.Xppq) * gENROE.iq.SeedNLSJac21
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_249(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,249};
  jacobian->tmpVars[9] /* gENROE.PSIq.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[261] /* gENROE.Xppq PARAM */)) * (jacobian->seedVars[16] /* gENROE.iq.SeedNLSJac21 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 250
type: SIMPLE_ASSIGN
gENROE.ud.$pDERNLSJac21.dummyVarNLSJac21 = (-gENROE.PSIq.$pDERNLSJac21.dummyVarNLSJac21) - gENROE.R_a * gENROE.id.SeedNLSJac21
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_250(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,250};
  jacobian->tmpVars[10] /* gENROE.ud.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ = (-jacobian->tmpVars[9] /* gENROE.PSIq.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */) - ((data->simulationInfo->realParameter[243] /* gENROE.R_a PARAM */) * (jacobian->seedVars[17] /* gENROE.id.SeedNLSJac21 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 251
type: SIMPLE_ASSIGN
pwLine.vs.im.$pDERNLSJac21.dummyVarNLSJac21 = $cse6 * gENROE.uq.$pDERNLSJac21.dummyVarNLSJac21 - $cse7 * gENROE.ud.$pDERNLSJac21.dummyVarNLSJac21
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_251(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,251};
  jacobian->tmpVars[11] /* pwLine.vs.im.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[30] /* $cse6 variable */) * (jacobian->tmpVars[8] /* gENROE.uq.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */) - ((data->localData[0]->realVars[31] /* $cse7 variable */) * (jacobian->tmpVars[10] /* gENROE.ud.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 252
type: SIMPLE_ASSIGN
pwLine.vs.re.$pDERNLSJac21.dummyVarNLSJac21 = $cse6 * gENROE.ud.$pDERNLSJac21.dummyVarNLSJac21 + $cse7 * gENROE.uq.$pDERNLSJac21.dummyVarNLSJac21
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_252(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,252};
  jacobian->tmpVars[12] /* pwLine.vs.re.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[30] /* $cse6 variable */) * (jacobian->tmpVars[10] /* gENROE.ud.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[31] /* $cse7 variable */) * (jacobian->tmpVars[8] /* gENROE.uq.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 253
type: SIMPLE_ASSIGN
gENCLS.p.ii.$pDERNLSJac21.dummyVarNLSJac21 = ($cse2 * gENCLS.id.SeedNLSJac21 - $cse1 * gENCLS.iq.SeedNLSJac21) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_253(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,253};
  jacobian->tmpVars[13] /* gENCLS.p.ii.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[27] /* $cse2 variable */) * (jacobian->seedVars[13] /* gENCLS.id.SeedNLSJac21 SEED_VAR */) - ((data->localData[0]->realVars[26] /* $cse1 variable */) * (jacobian->seedVars[12] /* gENCLS.iq.SeedNLSJac21 SEED_VAR */))) * (data->simulationInfo->realParameter[180] /* gENCLS.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 254
type: SIMPLE_ASSIGN
gENCLS.p.ir.$pDERNLSJac21.dummyVarNLSJac21 = ((-$cse1) * gENCLS.id.SeedNLSJac21 - $cse2 * gENCLS.iq.SeedNLSJac21) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_254(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,254};
  jacobian->tmpVars[14] /* gENCLS.p.ir.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ = (((-data->localData[0]->realVars[26] /* $cse1 variable */)) * (jacobian->seedVars[13] /* gENCLS.id.SeedNLSJac21 SEED_VAR */) - ((data->localData[0]->realVars[27] /* $cse2 variable */) * (jacobian->seedVars[12] /* gENCLS.iq.SeedNLSJac21 SEED_VAR */))) * (data->simulationInfo->realParameter[180] /* gENCLS.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 255
type: SIMPLE_ASSIGN
gENCLS.vd.$pDERNLSJac21.dummyVarNLSJac21 = gENCLS.X_d * gENCLS.iq.SeedNLSJac21 - gENCLS.R_a * gENCLS.id.SeedNLSJac21
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_255(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,255};
  jacobian->tmpVars[15] /* gENCLS.vd.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[189] /* gENCLS.X_d PARAM */) * (jacobian->seedVars[12] /* gENCLS.iq.SeedNLSJac21 SEED_VAR */) - ((data->simulationInfo->realParameter[186] /* gENCLS.R_a PARAM */) * (jacobian->seedVars[13] /* gENCLS.id.SeedNLSJac21 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 256
type: SIMPLE_ASSIGN
gENCLS.vq.$pDERNLSJac21.dummyVarNLSJac21 = (-gENCLS.R_a) * gENCLS.iq.SeedNLSJac21 - gENCLS.X_d * gENCLS.id.SeedNLSJac21
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_256(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,256};
  jacobian->tmpVars[16] /* gENCLS.vq.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[186] /* gENCLS.R_a PARAM */)) * (jacobian->seedVars[12] /* gENCLS.iq.SeedNLSJac21 SEED_VAR */) - ((data->simulationInfo->realParameter[189] /* gENCLS.X_d PARAM */) * (jacobian->seedVars[13] /* gENCLS.id.SeedNLSJac21 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 257
type: SIMPLE_ASSIGN
pwLine4.ir.im.$pDERNLSJac21.dummyVarNLSJac21 = (-pwLine1.ir.im.SeedNLSJac21) - gENCLS.p.ii.$pDERNLSJac21.dummyVarNLSJac21
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_257(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,257};
  jacobian->tmpVars[17] /* pwLine4.ir.im.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[11] /* pwLine1.ir.im.SeedNLSJac21 SEED_VAR */) - jacobian->tmpVars[13] /* gENCLS.p.ii.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 258
type: SIMPLE_ASSIGN
pwLine1.ir.re.$pDERNLSJac21.dummyVarNLSJac21 = (-pwLine4.ir.re.SeedNLSJac21) - gENCLS.p.ir.$pDERNLSJac21.dummyVarNLSJac21
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_258(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,258};
  jacobian->tmpVars[18] /* pwLine1.ir.re.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[10] /* pwLine4.ir.re.SeedNLSJac21 SEED_VAR */) - jacobian->tmpVars[14] /* gENCLS.p.ir.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 259
type: SIMPLE_ASSIGN
pwFault.p.ii.$pDERNLSJac21.dummyVarNLSJac21 = (-pwLine3.ir.im.SeedNLSJac21) - pwLine4.is.im.SeedNLSJac21
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_259(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,259};
  jacobian->tmpVars[19] /* pwFault.p.ii.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[7] /* pwLine3.ir.im.SeedNLSJac21 SEED_VAR */) - jacobian->seedVars[6] /* pwLine4.is.im.SeedNLSJac21 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 260
type: SIMPLE_ASSIGN
pwFault.p.ir.$pDERNLSJac21.dummyVarNLSJac21 = (-pwLine3.ir.re.SeedNLSJac21) - pwLine4.is.re.SeedNLSJac21
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_260(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,260};
  jacobian->tmpVars[20] /* pwFault.p.ir.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[4] /* pwLine3.ir.re.SeedNLSJac21 SEED_VAR */) - jacobian->seedVars[5] /* pwLine4.is.re.SeedNLSJac21 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 261
type: SIMPLE_ASSIGN
constantLoad.p.ir.$pDERNLSJac21.dummyVarNLSJac21 = (-pwLine.ir.re.SeedNLSJac21) - pwLine1.is.re.SeedNLSJac21 - pwLine3.is.re.SeedNLSJac21
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_261(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,261};
  jacobian->tmpVars[21] /* constantLoad.p.ir.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[3] /* pwLine.ir.re.SeedNLSJac21 SEED_VAR */) - jacobian->seedVars[2] /* pwLine1.is.re.SeedNLSJac21 SEED_VAR */ - jacobian->seedVars[9] /* pwLine3.is.re.SeedNLSJac21 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 262
type: SIMPLE_ASSIGN
constantLoad.p.ii.$pDERNLSJac21.dummyVarNLSJac21 = (-pwLine.ir.im.SeedNLSJac21) - pwLine1.is.im.SeedNLSJac21 - pwLine3.is.im.SeedNLSJac21
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_262(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,262};
  jacobian->tmpVars[22] /* constantLoad.p.ii.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[1] /* pwLine.ir.im.SeedNLSJac21 SEED_VAR */) - jacobian->seedVars[0] /* pwLine1.is.im.SeedNLSJac21 SEED_VAR */ - jacobian->seedVars[8] /* pwLine3.is.im.SeedNLSJac21 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 263
type: SIMPLE_ASSIGN
$res_NLSJac21_1.$pDERNLSJac21.dummyVarNLSJac21 = $cse2 * gENCLS.vq.$pDERNLSJac21.dummyVarNLSJac21 + $cse1 * gENCLS.vd.$pDERNLSJac21.dummyVarNLSJac21 - pwLine1.vr.re.SeedNLSJac21
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_263(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,263};
  jacobian->resultVars[0] /* $res_NLSJac21_1.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_VAR */ = (data->localData[0]->realVars[27] /* $cse2 variable */) * (jacobian->tmpVars[16] /* gENCLS.vq.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[26] /* $cse1 variable */) * (jacobian->tmpVars[15] /* gENCLS.vd.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */) - jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac21 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 264
type: SIMPLE_ASSIGN
$res_NLSJac21_2.$pDERNLSJac21.dummyVarNLSJac21 = $cse1 * gENCLS.vq.$pDERNLSJac21.dummyVarNLSJac21 + (-$cse2) * gENCLS.vd.$pDERNLSJac21.dummyVarNLSJac21 - pwLine1.vr.im.SeedNLSJac21
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_264(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,264};
  jacobian->resultVars[1] /* $res_NLSJac21_2.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_VAR */ = (data->localData[0]->realVars[26] /* $cse1 variable */) * (jacobian->tmpVars[16] /* gENCLS.vq.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */) + ((-data->localData[0]->realVars[27] /* $cse2 variable */)) * (jacobian->tmpVars[15] /* gENCLS.vd.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */) - jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac21 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 265
type: SIMPLE_ASSIGN
$res_NLSJac21_3.$pDERNLSJac21.dummyVarNLSJac21 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.is.re.$pDERNLSJac21.dummyVarNLSJac21 else pwLine.vs.re.$pDERNLSJac21.dummyVarNLSJac21 - pwLine1.vs.re.SeedNLSJac21 - (pwLine.Z.re * (pwLine.is.re.$pDERNLSJac21.dummyVarNLSJac21 + pwLine.vs.im.$pDERNLSJac21.dummyVarNLSJac21 * pwLine.Y.im - pwLine.vs.re.$pDERNLSJac21.dummyVarNLSJac21 * pwLine.Y.re) - pwLine.Z.im * (pwLine.is.im.$pDERNLSJac21.dummyVarNLSJac21 + (-pwLine.vs.re.$pDERNLSJac21.dummyVarNLSJac21) * pwLine.Y.im - pwLine.vs.im.$pDERNLSJac21.dummyVarNLSJac21 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_265(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,265};
  modelica_boolean tmp48;
  modelica_boolean tmp49;
  RELATIONHYSTERESIS(tmp48, data->localData[0]->timeValue, data->simulationInfo->realParameter[304] /* pwLine.t1 PARAM */, 1, GreaterEq);
  RELATIONHYSTERESIS(tmp49, data->localData[0]->timeValue, data->simulationInfo->realParameter[305] /* pwLine.t2 PARAM */, 2, Less);
  jacobian->resultVars[2] /* $res_NLSJac21_3.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_VAR */ = ((tmp48 && tmp49)?jacobian->tmpVars[7] /* pwLine.is.re.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[12] /* pwLine.vs.re.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac21 SEED_VAR */ - ((data->simulationInfo->realParameter[303] /* pwLine.Z.re PARAM */) * (jacobian->tmpVars[7] /* pwLine.is.re.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ + (jacobian->tmpVars[11] /* pwLine.vs.im.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[300] /* pwLine.Y.im PARAM */) - ((jacobian->tmpVars[12] /* pwLine.vs.re.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[301] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[302] /* pwLine.Z.im PARAM */) * (jacobian->tmpVars[6] /* pwLine.is.im.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ + ((-jacobian->tmpVars[12] /* pwLine.vs.re.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[300] /* pwLine.Y.im PARAM */) - ((jacobian->tmpVars[11] /* pwLine.vs.im.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[301] /* pwLine.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 266
type: SIMPLE_ASSIGN
$res_NLSJac21_4.$pDERNLSJac21.dummyVarNLSJac21 = pwLine1.vs.im * constantLoad.p.ir.$pDERNLSJac21.dummyVarNLSJac21 + pwLine1.vs.im.SeedNLSJac21 * constantLoad.p.ir + (-pwLine1.vs.re.SeedNLSJac21) * constantLoad.p.ii - constantLoad.Q.$pDERNLSJac21.dummyVarNLSJac21 - pwLine1.vs.re * constantLoad.p.ii.$pDERNLSJac21.dummyVarNLSJac21
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_266(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,266};
  jacobian->resultVars[3] /* $res_NLSJac21_4.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_VAR */ = (data->localData[0]->realVars[130] /* pwLine1.vs.im variable */) * (jacobian->tmpVars[21] /* constantLoad.p.ir.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac21 SEED_VAR */) * (data->localData[0]->realVars[54] /* constantLoad.p.ir variable */) + ((-jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac21 SEED_VAR */)) * (data->localData[0]->realVars[53] /* constantLoad.p.ii variable */) - jacobian->tmpVars[3] /* constantLoad.Q.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ - ((data->localData[0]->realVars[131] /* pwLine1.vs.re variable */) * (jacobian->tmpVars[22] /* constantLoad.p.ii.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 267
type: SIMPLE_ASSIGN
$res_NLSJac21_5.$pDERNLSJac21.dummyVarNLSJac21 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.is.im.SeedNLSJac21 else pwLine1.vs.im.SeedNLSJac21 - pwLine3.vr.im.SeedNLSJac21 - (pwLine3.Z.re * (pwLine3.is.im.SeedNLSJac21 + (-pwLine1.vs.re.SeedNLSJac21) * pwLine3.Y.im - pwLine1.vs.im.SeedNLSJac21 * pwLine3.Y.re) + pwLine3.Z.im * (pwLine3.is.re.SeedNLSJac21 + pwLine1.vs.im.SeedNLSJac21 * pwLine3.Y.im - pwLine1.vs.re.SeedNLSJac21 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_267(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,267};
  modelica_boolean tmp50;
  modelica_boolean tmp51;
  RELATIONHYSTERESIS(tmp50, data->localData[0]->timeValue, data->simulationInfo->realParameter[326] /* pwLine3.t1 PARAM */, 7, GreaterEq);
  RELATIONHYSTERESIS(tmp51, data->localData[0]->timeValue, data->simulationInfo->realParameter[327] /* pwLine3.t2 PARAM */, 8, Less);
  jacobian->resultVars[4] /* $res_NLSJac21_5.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_VAR */ = ((tmp50 && tmp51)?jacobian->seedVars[8] /* pwLine3.is.im.SeedNLSJac21 SEED_VAR */:jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac21 SEED_VAR */ - jacobian->seedVars[19] /* pwLine3.vr.im.SeedNLSJac21 SEED_VAR */ - ((data->simulationInfo->realParameter[325] /* pwLine3.Z.re PARAM */) * (jacobian->seedVars[8] /* pwLine3.is.im.SeedNLSJac21 SEED_VAR */ + ((-jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac21 SEED_VAR */)) * (data->simulationInfo->realParameter[322] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[323] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[324] /* pwLine3.Z.im PARAM */) * (jacobian->seedVars[9] /* pwLine3.is.re.SeedNLSJac21 SEED_VAR */ + (jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[322] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[323] /* pwLine3.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 268
type: SIMPLE_ASSIGN
$res_NLSJac21_6.$pDERNLSJac21.dummyVarNLSJac21 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.is.re.SeedNLSJac21 else pwLine1.vs.re.SeedNLSJac21 - pwLine3.vr.re.SeedNLSJac21 - (pwLine3.Z.re * (pwLine3.is.re.SeedNLSJac21 + pwLine1.vs.im.SeedNLSJac21 * pwLine3.Y.im - pwLine1.vs.re.SeedNLSJac21 * pwLine3.Y.re) - pwLine3.Z.im * (pwLine3.is.im.SeedNLSJac21 + (-pwLine1.vs.re.SeedNLSJac21) * pwLine3.Y.im - pwLine1.vs.im.SeedNLSJac21 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_268(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,268};
  modelica_boolean tmp52;
  modelica_boolean tmp53;
  RELATIONHYSTERESIS(tmp52, data->localData[0]->timeValue, data->simulationInfo->realParameter[326] /* pwLine3.t1 PARAM */, 7, GreaterEq);
  RELATIONHYSTERESIS(tmp53, data->localData[0]->timeValue, data->simulationInfo->realParameter[327] /* pwLine3.t2 PARAM */, 8, Less);
  jacobian->resultVars[5] /* $res_NLSJac21_6.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_VAR */ = ((tmp52 && tmp53)?jacobian->seedVars[9] /* pwLine3.is.re.SeedNLSJac21 SEED_VAR */:jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac21 SEED_VAR */ - jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac21 SEED_VAR */ - ((data->simulationInfo->realParameter[325] /* pwLine3.Z.re PARAM */) * (jacobian->seedVars[9] /* pwLine3.is.re.SeedNLSJac21 SEED_VAR */ + (jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[322] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[323] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[324] /* pwLine3.Z.im PARAM */) * (jacobian->seedVars[8] /* pwLine3.is.im.SeedNLSJac21 SEED_VAR */ + ((-jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac21 SEED_VAR */)) * (data->simulationInfo->realParameter[322] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[323] /* pwLine3.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 269
type: SIMPLE_ASSIGN
$res_NLSJac21_7.$pDERNLSJac21.dummyVarNLSJac21 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.ir.re.SeedNLSJac21 else pwLine3.vr.re.SeedNLSJac21 - pwLine1.vs.re.SeedNLSJac21 - (pwLine3.Z.re * (pwLine3.ir.re.SeedNLSJac21 + pwLine3.vr.im.SeedNLSJac21 * pwLine3.Y.im - pwLine3.vr.re.SeedNLSJac21 * pwLine3.Y.re) - pwLine3.Z.im * (pwLine3.ir.im.SeedNLSJac21 + (-pwLine3.vr.re.SeedNLSJac21) * pwLine3.Y.im - pwLine3.vr.im.SeedNLSJac21 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_269(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,269};
  modelica_boolean tmp54;
  modelica_boolean tmp55;
  RELATIONHYSTERESIS(tmp54, data->localData[0]->timeValue, data->simulationInfo->realParameter[326] /* pwLine3.t1 PARAM */, 7, GreaterEq);
  RELATIONHYSTERESIS(tmp55, data->localData[0]->timeValue, data->simulationInfo->realParameter[327] /* pwLine3.t2 PARAM */, 8, Less);
  jacobian->resultVars[6] /* $res_NLSJac21_7.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_VAR */ = ((tmp54 && tmp55)?jacobian->seedVars[4] /* pwLine3.ir.re.SeedNLSJac21 SEED_VAR */:jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac21 SEED_VAR */ - jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac21 SEED_VAR */ - ((data->simulationInfo->realParameter[325] /* pwLine3.Z.re PARAM */) * (jacobian->seedVars[4] /* pwLine3.ir.re.SeedNLSJac21 SEED_VAR */ + (jacobian->seedVars[19] /* pwLine3.vr.im.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[322] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[323] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[324] /* pwLine3.Z.im PARAM */) * (jacobian->seedVars[7] /* pwLine3.ir.im.SeedNLSJac21 SEED_VAR */ + ((-jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac21 SEED_VAR */)) * (data->simulationInfo->realParameter[322] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine3.vr.im.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[323] /* pwLine3.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 270
type: SIMPLE_ASSIGN
$res_NLSJac21_8.$pDERNLSJac21.dummyVarNLSJac21 = if time < pwFault.t1 then pwFault.p.ii.$pDERNLSJac21.dummyVarNLSJac21 else if time < pwFault.t2 and pwFault.ground then pwLine3.vr.re.SeedNLSJac21 else if time < pwFault.t2 then pwFault.p.ii.$pDERNLSJac21.dummyVarNLSJac21 - (pwFault.R * pwLine3.vr.im.SeedNLSJac21 - pwFault.X * pwLine3.vr.re.SeedNLSJac21) * (pwFault.X ^ 2.0 + pwFault.R ^ 2.0) / (pwFault.X ^ 2.0 + pwFault.R ^ 2.0) ^ 2.0 else pwFault.p.ii.$pDERNLSJac21.dummyVarNLSJac21
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_270(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,270};
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
  RELATIONHYSTERESIS(tmp56, data->localData[0]->timeValue, data->simulationInfo->realParameter[293] /* pwFault.t1 PARAM */, 9, Less);
  tmp68 = (modelica_boolean)tmp56;
  if(tmp68)
  {
    tmp69 = jacobian->tmpVars[19] /* pwFault.p.ii.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp57, data->localData[0]->timeValue, data->simulationInfo->realParameter[294] /* pwFault.t2 PARAM */, 10, Less);
    tmp66 = (modelica_boolean)(tmp57 && data->simulationInfo->booleanParameter[68] /* pwFault.ground PARAM */);
    if(tmp66)
    {
      tmp67 = jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac21 SEED_VAR */;
    }
    else
    {
      RELATIONHYSTERESIS(tmp58, data->localData[0]->timeValue, data->simulationInfo->realParameter[294] /* pwFault.t2 PARAM */, 10, Less);
      tmp64 = (modelica_boolean)tmp58;
      if(tmp64)
      {
        tmp59 = data->simulationInfo->realParameter[292] /* pwFault.X PARAM */;
        tmp60 = data->simulationInfo->realParameter[291] /* pwFault.R PARAM */;
        tmp61 = data->simulationInfo->realParameter[292] /* pwFault.X PARAM */;
        tmp62 = data->simulationInfo->realParameter[291] /* pwFault.R PARAM */;
        tmp63 = (tmp61 * tmp61) + (tmp62 * tmp62);
        tmp65 = jacobian->tmpVars[19] /* pwFault.p.ii.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ - (DIVISION(((data->simulationInfo->realParameter[291] /* pwFault.R PARAM */) * (jacobian->seedVars[19] /* pwLine3.vr.im.SeedNLSJac21 SEED_VAR */) - ((data->simulationInfo->realParameter[292] /* pwFault.X PARAM */) * (jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac21 SEED_VAR */))) * ((tmp59 * tmp59) + (tmp60 * tmp60)),(tmp63 * tmp63),"(pwFault.X ^ 2.0 + pwFault.R ^ 2.0) ^ 2.0"));
      }
      else
      {
        tmp65 = jacobian->tmpVars[19] /* pwFault.p.ii.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */;
      }
      tmp67 = tmp65;
    }
    tmp69 = tmp67;
  }
  jacobian->resultVars[7] /* $res_NLSJac21_8.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_VAR */ = tmp69;
  TRACE_POP
}

/*
equation index: 271
type: SIMPLE_ASSIGN
$res_NLSJac21_9.$pDERNLSJac21.dummyVarNLSJac21 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.is.re.SeedNLSJac21 else pwLine3.vr.re.SeedNLSJac21 - pwLine1.vr.re.SeedNLSJac21 - (pwLine4.Z.re * (pwLine4.is.re.SeedNLSJac21 + pwLine3.vr.im.SeedNLSJac21 * pwLine4.Y.im - pwLine3.vr.re.SeedNLSJac21 * pwLine4.Y.re) - pwLine4.Z.im * (pwLine4.is.im.SeedNLSJac21 + (-pwLine3.vr.re.SeedNLSJac21) * pwLine4.Y.im - pwLine3.vr.im.SeedNLSJac21 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_271(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,271};
  modelica_boolean tmp70;
  modelica_boolean tmp71;
  RELATIONHYSTERESIS(tmp70, data->localData[0]->timeValue, data->simulationInfo->realParameter[337] /* pwLine4.t1 PARAM */, 11, GreaterEq);
  RELATIONHYSTERESIS(tmp71, data->localData[0]->timeValue, data->simulationInfo->realParameter[338] /* pwLine4.t2 PARAM */, 12, Less);
  jacobian->resultVars[8] /* $res_NLSJac21_9.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_VAR */ = ((tmp70 && tmp71)?jacobian->seedVars[5] /* pwLine4.is.re.SeedNLSJac21 SEED_VAR */:jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac21 SEED_VAR */ - jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac21 SEED_VAR */ - ((data->simulationInfo->realParameter[336] /* pwLine4.Z.re PARAM */) * (jacobian->seedVars[5] /* pwLine4.is.re.SeedNLSJac21 SEED_VAR */ + (jacobian->seedVars[19] /* pwLine3.vr.im.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[333] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[334] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[335] /* pwLine4.Z.im PARAM */) * (jacobian->seedVars[6] /* pwLine4.is.im.SeedNLSJac21 SEED_VAR */ + ((-jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac21 SEED_VAR */)) * (data->simulationInfo->realParameter[333] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine3.vr.im.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[334] /* pwLine4.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 272
type: SIMPLE_ASSIGN
$res_NLSJac21_10.$pDERNLSJac21.dummyVarNLSJac21 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.is.im.SeedNLSJac21 else pwLine3.vr.im.SeedNLSJac21 - pwLine1.vr.im.SeedNLSJac21 - (pwLine4.Z.re * (pwLine4.is.im.SeedNLSJac21 + (-pwLine3.vr.re.SeedNLSJac21) * pwLine4.Y.im - pwLine3.vr.im.SeedNLSJac21 * pwLine4.Y.re) + pwLine4.Z.im * (pwLine4.is.re.SeedNLSJac21 + pwLine3.vr.im.SeedNLSJac21 * pwLine4.Y.im - pwLine3.vr.re.SeedNLSJac21 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_272(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,272};
  modelica_boolean tmp72;
  modelica_boolean tmp73;
  RELATIONHYSTERESIS(tmp72, data->localData[0]->timeValue, data->simulationInfo->realParameter[337] /* pwLine4.t1 PARAM */, 11, GreaterEq);
  RELATIONHYSTERESIS(tmp73, data->localData[0]->timeValue, data->simulationInfo->realParameter[338] /* pwLine4.t2 PARAM */, 12, Less);
  jacobian->resultVars[9] /* $res_NLSJac21_10.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_VAR */ = ((tmp72 && tmp73)?jacobian->seedVars[6] /* pwLine4.is.im.SeedNLSJac21 SEED_VAR */:jacobian->seedVars[19] /* pwLine3.vr.im.SeedNLSJac21 SEED_VAR */ - jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac21 SEED_VAR */ - ((data->simulationInfo->realParameter[336] /* pwLine4.Z.re PARAM */) * (jacobian->seedVars[6] /* pwLine4.is.im.SeedNLSJac21 SEED_VAR */ + ((-jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac21 SEED_VAR */)) * (data->simulationInfo->realParameter[333] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine3.vr.im.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[334] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[335] /* pwLine4.Z.im PARAM */) * (jacobian->seedVars[5] /* pwLine4.is.re.SeedNLSJac21 SEED_VAR */ + (jacobian->seedVars[19] /* pwLine3.vr.im.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[333] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[334] /* pwLine4.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 273
type: SIMPLE_ASSIGN
$res_NLSJac21_11.$pDERNLSJac21.dummyVarNLSJac21 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.ir.re.SeedNLSJac21 else pwLine1.vr.re.SeedNLSJac21 - pwLine3.vr.re.SeedNLSJac21 - (pwLine4.Z.re * (pwLine4.ir.re.SeedNLSJac21 + pwLine1.vr.im.SeedNLSJac21 * pwLine4.Y.im - pwLine1.vr.re.SeedNLSJac21 * pwLine4.Y.re) - pwLine4.Z.im * (pwLine4.ir.im.$pDERNLSJac21.dummyVarNLSJac21 + (-pwLine1.vr.re.SeedNLSJac21) * pwLine4.Y.im - pwLine1.vr.im.SeedNLSJac21 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_273(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,273};
  modelica_boolean tmp74;
  modelica_boolean tmp75;
  RELATIONHYSTERESIS(tmp74, data->localData[0]->timeValue, data->simulationInfo->realParameter[337] /* pwLine4.t1 PARAM */, 11, GreaterEq);
  RELATIONHYSTERESIS(tmp75, data->localData[0]->timeValue, data->simulationInfo->realParameter[338] /* pwLine4.t2 PARAM */, 12, Less);
  jacobian->resultVars[10] /* $res_NLSJac21_11.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_VAR */ = ((tmp74 && tmp75)?jacobian->seedVars[10] /* pwLine4.ir.re.SeedNLSJac21 SEED_VAR */:jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac21 SEED_VAR */ - jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac21 SEED_VAR */ - ((data->simulationInfo->realParameter[336] /* pwLine4.Z.re PARAM */) * (jacobian->seedVars[10] /* pwLine4.ir.re.SeedNLSJac21 SEED_VAR */ + (jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[333] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[334] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[335] /* pwLine4.Z.im PARAM */) * (jacobian->tmpVars[17] /* pwLine4.ir.im.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac21 SEED_VAR */)) * (data->simulationInfo->realParameter[333] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[334] /* pwLine4.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 274
type: SIMPLE_ASSIGN
$res_NLSJac21_12.$pDERNLSJac21.dummyVarNLSJac21 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.ir.im.$pDERNLSJac21.dummyVarNLSJac21 else pwLine1.vr.im.SeedNLSJac21 - pwLine3.vr.im.SeedNLSJac21 - (pwLine4.Z.re * (pwLine4.ir.im.$pDERNLSJac21.dummyVarNLSJac21 + (-pwLine1.vr.re.SeedNLSJac21) * pwLine4.Y.im - pwLine1.vr.im.SeedNLSJac21 * pwLine4.Y.re) + pwLine4.Z.im * (pwLine4.ir.re.SeedNLSJac21 + pwLine1.vr.im.SeedNLSJac21 * pwLine4.Y.im - pwLine1.vr.re.SeedNLSJac21 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_274(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,274};
  modelica_boolean tmp76;
  modelica_boolean tmp77;
  RELATIONHYSTERESIS(tmp76, data->localData[0]->timeValue, data->simulationInfo->realParameter[337] /* pwLine4.t1 PARAM */, 11, GreaterEq);
  RELATIONHYSTERESIS(tmp77, data->localData[0]->timeValue, data->simulationInfo->realParameter[338] /* pwLine4.t2 PARAM */, 12, Less);
  jacobian->resultVars[11] /* $res_NLSJac21_12.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_VAR */ = ((tmp76 && tmp77)?jacobian->tmpVars[17] /* pwLine4.ir.im.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */:jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac21 SEED_VAR */ - jacobian->seedVars[19] /* pwLine3.vr.im.SeedNLSJac21 SEED_VAR */ - ((data->simulationInfo->realParameter[336] /* pwLine4.Z.re PARAM */) * (jacobian->tmpVars[17] /* pwLine4.ir.im.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac21 SEED_VAR */)) * (data->simulationInfo->realParameter[333] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[334] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[335] /* pwLine4.Z.im PARAM */) * (jacobian->seedVars[10] /* pwLine4.ir.re.SeedNLSJac21 SEED_VAR */ + (jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[333] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[334] /* pwLine4.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 275
type: SIMPLE_ASSIGN
$res_NLSJac21_13.$pDERNLSJac21.dummyVarNLSJac21 = if time < pwFault.t1 then pwFault.p.ir.$pDERNLSJac21.dummyVarNLSJac21 else if time < pwFault.t2 and pwFault.ground then pwLine3.vr.im.SeedNLSJac21 else if time < pwFault.t2 then pwFault.p.ir.$pDERNLSJac21.dummyVarNLSJac21 - (pwFault.R * pwLine3.vr.re.SeedNLSJac21 + pwFault.X * pwLine3.vr.im.SeedNLSJac21) * (pwFault.R ^ 2.0 + pwFault.X ^ 2.0) / (pwFault.R ^ 2.0 + pwFault.X ^ 2.0) ^ 2.0 else pwFault.p.ir.$pDERNLSJac21.dummyVarNLSJac21
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_275(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,275};
  modelica_boolean tmp78;
  modelica_boolean tmp79;
  modelica_boolean tmp80;
  modelica_real tmp81;
  modelica_real tmp82;
  modelica_real tmp83;
  modelica_real tmp84;
  modelica_real tmp85;
  modelica_boolean tmp86;
  modelica_real tmp87;
  modelica_boolean tmp88;
  modelica_real tmp89;
  modelica_boolean tmp90;
  modelica_real tmp91;
  RELATIONHYSTERESIS(tmp78, data->localData[0]->timeValue, data->simulationInfo->realParameter[293] /* pwFault.t1 PARAM */, 9, Less);
  tmp90 = (modelica_boolean)tmp78;
  if(tmp90)
  {
    tmp91 = jacobian->tmpVars[20] /* pwFault.p.ir.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp79, data->localData[0]->timeValue, data->simulationInfo->realParameter[294] /* pwFault.t2 PARAM */, 10, Less);
    tmp88 = (modelica_boolean)(tmp79 && data->simulationInfo->booleanParameter[68] /* pwFault.ground PARAM */);
    if(tmp88)
    {
      tmp89 = jacobian->seedVars[19] /* pwLine3.vr.im.SeedNLSJac21 SEED_VAR */;
    }
    else
    {
      RELATIONHYSTERESIS(tmp80, data->localData[0]->timeValue, data->simulationInfo->realParameter[294] /* pwFault.t2 PARAM */, 10, Less);
      tmp86 = (modelica_boolean)tmp80;
      if(tmp86)
      {
        tmp81 = data->simulationInfo->realParameter[291] /* pwFault.R PARAM */;
        tmp82 = data->simulationInfo->realParameter[292] /* pwFault.X PARAM */;
        tmp83 = data->simulationInfo->realParameter[291] /* pwFault.R PARAM */;
        tmp84 = data->simulationInfo->realParameter[292] /* pwFault.X PARAM */;
        tmp85 = (tmp83 * tmp83) + (tmp84 * tmp84);
        tmp87 = jacobian->tmpVars[20] /* pwFault.p.ir.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ - (DIVISION(((data->simulationInfo->realParameter[291] /* pwFault.R PARAM */) * (jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac21 SEED_VAR */) + (data->simulationInfo->realParameter[292] /* pwFault.X PARAM */) * (jacobian->seedVars[19] /* pwLine3.vr.im.SeedNLSJac21 SEED_VAR */)) * ((tmp81 * tmp81) + (tmp82 * tmp82)),(tmp85 * tmp85),"(pwFault.R ^ 2.0 + pwFault.X ^ 2.0) ^ 2.0"));
      }
      else
      {
        tmp87 = jacobian->tmpVars[20] /* pwFault.p.ir.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */;
      }
      tmp89 = tmp87;
    }
    tmp91 = tmp89;
  }
  jacobian->resultVars[12] /* $res_NLSJac21_13.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_VAR */ = tmp91;
  TRACE_POP
}

/*
equation index: 276
type: SIMPLE_ASSIGN
$res_NLSJac21_14.$pDERNLSJac21.dummyVarNLSJac21 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.ir.im.SeedNLSJac21 else pwLine3.vr.im.SeedNLSJac21 - pwLine1.vs.im.SeedNLSJac21 - (pwLine3.Z.re * (pwLine3.ir.im.SeedNLSJac21 + (-pwLine3.vr.re.SeedNLSJac21) * pwLine3.Y.im - pwLine3.vr.im.SeedNLSJac21 * pwLine3.Y.re) + pwLine3.Z.im * (pwLine3.ir.re.SeedNLSJac21 + pwLine3.vr.im.SeedNLSJac21 * pwLine3.Y.im - pwLine3.vr.re.SeedNLSJac21 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_276(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,276};
  modelica_boolean tmp92;
  modelica_boolean tmp93;
  RELATIONHYSTERESIS(tmp92, data->localData[0]->timeValue, data->simulationInfo->realParameter[326] /* pwLine3.t1 PARAM */, 7, GreaterEq);
  RELATIONHYSTERESIS(tmp93, data->localData[0]->timeValue, data->simulationInfo->realParameter[327] /* pwLine3.t2 PARAM */, 8, Less);
  jacobian->resultVars[13] /* $res_NLSJac21_14.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_VAR */ = ((tmp92 && tmp93)?jacobian->seedVars[7] /* pwLine3.ir.im.SeedNLSJac21 SEED_VAR */:jacobian->seedVars[19] /* pwLine3.vr.im.SeedNLSJac21 SEED_VAR */ - jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac21 SEED_VAR */ - ((data->simulationInfo->realParameter[325] /* pwLine3.Z.re PARAM */) * (jacobian->seedVars[7] /* pwLine3.ir.im.SeedNLSJac21 SEED_VAR */ + ((-jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac21 SEED_VAR */)) * (data->simulationInfo->realParameter[322] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine3.vr.im.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[323] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[324] /* pwLine3.Z.im PARAM */) * (jacobian->seedVars[4] /* pwLine3.ir.re.SeedNLSJac21 SEED_VAR */ + (jacobian->seedVars[19] /* pwLine3.vr.im.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[322] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[323] /* pwLine3.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 277
type: SIMPLE_ASSIGN
$res_NLSJac21_15.$pDERNLSJac21.dummyVarNLSJac21 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.is.im.$pDERNLSJac21.dummyVarNLSJac21 else pwLine.vs.im.$pDERNLSJac21.dummyVarNLSJac21 - pwLine1.vs.im.SeedNLSJac21 - (pwLine.Z.re * (pwLine.is.im.$pDERNLSJac21.dummyVarNLSJac21 + (-pwLine.vs.re.$pDERNLSJac21.dummyVarNLSJac21) * pwLine.Y.im - pwLine.vs.im.$pDERNLSJac21.dummyVarNLSJac21 * pwLine.Y.re) + pwLine.Z.im * (pwLine.is.re.$pDERNLSJac21.dummyVarNLSJac21 + pwLine.vs.im.$pDERNLSJac21.dummyVarNLSJac21 * pwLine.Y.im - pwLine.vs.re.$pDERNLSJac21.dummyVarNLSJac21 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_277(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,277};
  modelica_boolean tmp94;
  modelica_boolean tmp95;
  RELATIONHYSTERESIS(tmp94, data->localData[0]->timeValue, data->simulationInfo->realParameter[304] /* pwLine.t1 PARAM */, 1, GreaterEq);
  RELATIONHYSTERESIS(tmp95, data->localData[0]->timeValue, data->simulationInfo->realParameter[305] /* pwLine.t2 PARAM */, 2, Less);
  jacobian->resultVars[14] /* $res_NLSJac21_15.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_VAR */ = ((tmp94 && tmp95)?jacobian->tmpVars[6] /* pwLine.is.im.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[11] /* pwLine.vs.im.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac21 SEED_VAR */ - ((data->simulationInfo->realParameter[303] /* pwLine.Z.re PARAM */) * (jacobian->tmpVars[6] /* pwLine.is.im.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ + ((-jacobian->tmpVars[12] /* pwLine.vs.re.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[300] /* pwLine.Y.im PARAM */) - ((jacobian->tmpVars[11] /* pwLine.vs.im.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[301] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[302] /* pwLine.Z.im PARAM */) * (jacobian->tmpVars[7] /* pwLine.is.re.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ + (jacobian->tmpVars[11] /* pwLine.vs.im.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[300] /* pwLine.Y.im PARAM */) - ((jacobian->tmpVars[12] /* pwLine.vs.re.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[301] /* pwLine.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 278
type: SIMPLE_ASSIGN
$res_NLSJac21_16.$pDERNLSJac21.dummyVarNLSJac21 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.ir.im.SeedNLSJac21 else pwLine1.vs.im.SeedNLSJac21 - pwLine.vs.im.$pDERNLSJac21.dummyVarNLSJac21 - (pwLine.Z.re * (pwLine.ir.im.SeedNLSJac21 + (-pwLine1.vs.re.SeedNLSJac21) * pwLine.Y.im - pwLine1.vs.im.SeedNLSJac21 * pwLine.Y.re) + pwLine.Z.im * (pwLine.ir.re.SeedNLSJac21 + pwLine1.vs.im.SeedNLSJac21 * pwLine.Y.im - pwLine1.vs.re.SeedNLSJac21 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_278(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,278};
  modelica_boolean tmp96;
  modelica_boolean tmp97;
  RELATIONHYSTERESIS(tmp96, data->localData[0]->timeValue, data->simulationInfo->realParameter[304] /* pwLine.t1 PARAM */, 1, GreaterEq);
  RELATIONHYSTERESIS(tmp97, data->localData[0]->timeValue, data->simulationInfo->realParameter[305] /* pwLine.t2 PARAM */, 2, Less);
  jacobian->resultVars[15] /* $res_NLSJac21_16.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_VAR */ = ((tmp96 && tmp97)?jacobian->seedVars[1] /* pwLine.ir.im.SeedNLSJac21 SEED_VAR */:jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac21 SEED_VAR */ - jacobian->tmpVars[11] /* pwLine.vs.im.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[303] /* pwLine.Z.re PARAM */) * (jacobian->seedVars[1] /* pwLine.ir.im.SeedNLSJac21 SEED_VAR */ + ((-jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac21 SEED_VAR */)) * (data->simulationInfo->realParameter[300] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[301] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[302] /* pwLine.Z.im PARAM */) * (jacobian->seedVars[3] /* pwLine.ir.re.SeedNLSJac21 SEED_VAR */ + (jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[300] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[301] /* pwLine.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 279
type: SIMPLE_ASSIGN
$res_NLSJac21_17.$pDERNLSJac21.dummyVarNLSJac21 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.ir.re.SeedNLSJac21 else pwLine1.vs.re.SeedNLSJac21 - pwLine.vs.re.$pDERNLSJac21.dummyVarNLSJac21 - (pwLine.Z.re * (pwLine.ir.re.SeedNLSJac21 + pwLine1.vs.im.SeedNLSJac21 * pwLine.Y.im - pwLine1.vs.re.SeedNLSJac21 * pwLine.Y.re) - pwLine.Z.im * (pwLine.ir.im.SeedNLSJac21 + (-pwLine1.vs.re.SeedNLSJac21) * pwLine.Y.im - pwLine1.vs.im.SeedNLSJac21 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_279(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,279};
  modelica_boolean tmp98;
  modelica_boolean tmp99;
  RELATIONHYSTERESIS(tmp98, data->localData[0]->timeValue, data->simulationInfo->realParameter[304] /* pwLine.t1 PARAM */, 1, GreaterEq);
  RELATIONHYSTERESIS(tmp99, data->localData[0]->timeValue, data->simulationInfo->realParameter[305] /* pwLine.t2 PARAM */, 2, Less);
  jacobian->resultVars[16] /* $res_NLSJac21_17.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_VAR */ = ((tmp98 && tmp99)?jacobian->seedVars[3] /* pwLine.ir.re.SeedNLSJac21 SEED_VAR */:jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac21 SEED_VAR */ - jacobian->tmpVars[12] /* pwLine.vs.re.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[303] /* pwLine.Z.re PARAM */) * (jacobian->seedVars[3] /* pwLine.ir.re.SeedNLSJac21 SEED_VAR */ + (jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[300] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[301] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[302] /* pwLine.Z.im PARAM */) * (jacobian->seedVars[1] /* pwLine.ir.im.SeedNLSJac21 SEED_VAR */ + ((-jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac21 SEED_VAR */)) * (data->simulationInfo->realParameter[300] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[301] /* pwLine.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 280
type: SIMPLE_ASSIGN
$res_NLSJac21_18.$pDERNLSJac21.dummyVarNLSJac21 = pwLine1.vs.im * constantLoad.p.ii.$pDERNLSJac21.dummyVarNLSJac21 + pwLine1.vs.im.SeedNLSJac21 * constantLoad.p.ii + pwLine1.vs.re * constantLoad.p.ir.$pDERNLSJac21.dummyVarNLSJac21 + pwLine1.vs.re.SeedNLSJac21 * constantLoad.p.ir - constantLoad.P.$pDERNLSJac21.dummyVarNLSJac21
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_280(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,280};
  jacobian->resultVars[17] /* $res_NLSJac21_18.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_VAR */ = (data->localData[0]->realVars[130] /* pwLine1.vs.im variable */) * (jacobian->tmpVars[22] /* constantLoad.p.ii.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac21 SEED_VAR */) * (data->localData[0]->realVars[53] /* constantLoad.p.ii variable */) + (data->localData[0]->realVars[131] /* pwLine1.vs.re variable */) * (jacobian->tmpVars[21] /* constantLoad.p.ir.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac21 SEED_VAR */) * (data->localData[0]->realVars[54] /* constantLoad.p.ir variable */) - jacobian->tmpVars[4] /* constantLoad.P.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 281
type: SIMPLE_ASSIGN
$res_NLSJac21_19.$pDERNLSJac21.dummyVarNLSJac21 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.is.re.SeedNLSJac21 else pwLine1.vs.re.SeedNLSJac21 - pwLine1.vr.re.SeedNLSJac21 - (pwLine1.Z.re * (pwLine1.is.re.SeedNLSJac21 + pwLine1.vs.im.SeedNLSJac21 * pwLine1.Y.im - pwLine1.vs.re.SeedNLSJac21 * pwLine1.Y.re) - pwLine1.Z.im * (pwLine1.is.im.SeedNLSJac21 + (-pwLine1.vs.re.SeedNLSJac21) * pwLine1.Y.im - pwLine1.vs.im.SeedNLSJac21 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_281(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,281};
  modelica_boolean tmp100;
  modelica_boolean tmp101;
  RELATIONHYSTERESIS(tmp100, data->localData[0]->timeValue, data->simulationInfo->realParameter[315] /* pwLine1.t1 PARAM */, 13, GreaterEq);
  RELATIONHYSTERESIS(tmp101, data->localData[0]->timeValue, data->simulationInfo->realParameter[316] /* pwLine1.t2 PARAM */, 14, Less);
  jacobian->resultVars[18] /* $res_NLSJac21_19.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_VAR */ = ((tmp100 && tmp101)?jacobian->seedVars[2] /* pwLine1.is.re.SeedNLSJac21 SEED_VAR */:jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac21 SEED_VAR */ - jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac21 SEED_VAR */ - ((data->simulationInfo->realParameter[314] /* pwLine1.Z.re PARAM */) * (jacobian->seedVars[2] /* pwLine1.is.re.SeedNLSJac21 SEED_VAR */ + (jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[311] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[312] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[313] /* pwLine1.Z.im PARAM */) * (jacobian->seedVars[0] /* pwLine1.is.im.SeedNLSJac21 SEED_VAR */ + ((-jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac21 SEED_VAR */)) * (data->simulationInfo->realParameter[311] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[312] /* pwLine1.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 282
type: SIMPLE_ASSIGN
$res_NLSJac21_20.$pDERNLSJac21.dummyVarNLSJac21 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.is.im.SeedNLSJac21 else pwLine1.vs.im.SeedNLSJac21 - pwLine1.vr.im.SeedNLSJac21 - (pwLine1.Z.re * (pwLine1.is.im.SeedNLSJac21 + (-pwLine1.vs.re.SeedNLSJac21) * pwLine1.Y.im - pwLine1.vs.im.SeedNLSJac21 * pwLine1.Y.re) + pwLine1.Z.im * (pwLine1.is.re.SeedNLSJac21 + pwLine1.vs.im.SeedNLSJac21 * pwLine1.Y.im - pwLine1.vs.re.SeedNLSJac21 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_282(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,282};
  modelica_boolean tmp102;
  modelica_boolean tmp103;
  RELATIONHYSTERESIS(tmp102, data->localData[0]->timeValue, data->simulationInfo->realParameter[315] /* pwLine1.t1 PARAM */, 13, GreaterEq);
  RELATIONHYSTERESIS(tmp103, data->localData[0]->timeValue, data->simulationInfo->realParameter[316] /* pwLine1.t2 PARAM */, 14, Less);
  jacobian->resultVars[19] /* $res_NLSJac21_20.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_VAR */ = ((tmp102 && tmp103)?jacobian->seedVars[0] /* pwLine1.is.im.SeedNLSJac21 SEED_VAR */:jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac21 SEED_VAR */ - jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac21 SEED_VAR */ - ((data->simulationInfo->realParameter[314] /* pwLine1.Z.re PARAM */) * (jacobian->seedVars[0] /* pwLine1.is.im.SeedNLSJac21 SEED_VAR */ + ((-jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac21 SEED_VAR */)) * (data->simulationInfo->realParameter[311] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[312] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[313] /* pwLine1.Z.im PARAM */) * (jacobian->seedVars[2] /* pwLine1.is.re.SeedNLSJac21 SEED_VAR */ + (jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[311] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[312] /* pwLine1.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 283
type: SIMPLE_ASSIGN
$res_NLSJac21_21.$pDERNLSJac21.dummyVarNLSJac21 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.ir.re.$pDERNLSJac21.dummyVarNLSJac21 else pwLine1.vr.re.SeedNLSJac21 - pwLine1.vs.re.SeedNLSJac21 - (pwLine1.Z.re * (pwLine1.ir.re.$pDERNLSJac21.dummyVarNLSJac21 + pwLine1.vr.im.SeedNLSJac21 * pwLine1.Y.im - pwLine1.vr.re.SeedNLSJac21 * pwLine1.Y.re) - pwLine1.Z.im * (pwLine1.ir.im.SeedNLSJac21 + (-pwLine1.vr.re.SeedNLSJac21) * pwLine1.Y.im - pwLine1.vr.im.SeedNLSJac21 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_283(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,283};
  modelica_boolean tmp104;
  modelica_boolean tmp105;
  RELATIONHYSTERESIS(tmp104, data->localData[0]->timeValue, data->simulationInfo->realParameter[315] /* pwLine1.t1 PARAM */, 13, GreaterEq);
  RELATIONHYSTERESIS(tmp105, data->localData[0]->timeValue, data->simulationInfo->realParameter[316] /* pwLine1.t2 PARAM */, 14, Less);
  jacobian->resultVars[20] /* $res_NLSJac21_21.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_VAR */ = ((tmp104 && tmp105)?jacobian->tmpVars[18] /* pwLine1.ir.re.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */:jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac21 SEED_VAR */ - jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac21 SEED_VAR */ - ((data->simulationInfo->realParameter[314] /* pwLine1.Z.re PARAM */) * (jacobian->tmpVars[18] /* pwLine1.ir.re.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[311] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[312] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[313] /* pwLine1.Z.im PARAM */) * (jacobian->seedVars[11] /* pwLine1.ir.im.SeedNLSJac21 SEED_VAR */ + ((-jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac21 SEED_VAR */)) * (data->simulationInfo->realParameter[311] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[312] /* pwLine1.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 284
type: SIMPLE_ASSIGN
$res_NLSJac21_22.$pDERNLSJac21.dummyVarNLSJac21 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.ir.im.SeedNLSJac21 else pwLine1.vr.im.SeedNLSJac21 - pwLine1.vs.im.SeedNLSJac21 - (pwLine1.Z.re * (pwLine1.ir.im.SeedNLSJac21 + (-pwLine1.vr.re.SeedNLSJac21) * pwLine1.Y.im - pwLine1.vr.im.SeedNLSJac21 * pwLine1.Y.re) + pwLine1.Z.im * (pwLine1.ir.re.$pDERNLSJac21.dummyVarNLSJac21 + pwLine1.vr.im.SeedNLSJac21 * pwLine1.Y.im - pwLine1.vr.re.SeedNLSJac21 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_284(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,284};
  modelica_boolean tmp106;
  modelica_boolean tmp107;
  RELATIONHYSTERESIS(tmp106, data->localData[0]->timeValue, data->simulationInfo->realParameter[315] /* pwLine1.t1 PARAM */, 13, GreaterEq);
  RELATIONHYSTERESIS(tmp107, data->localData[0]->timeValue, data->simulationInfo->realParameter[316] /* pwLine1.t2 PARAM */, 14, Less);
  jacobian->resultVars[21] /* $res_NLSJac21_22.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_VAR */ = ((tmp106 && tmp107)?jacobian->seedVars[11] /* pwLine1.ir.im.SeedNLSJac21 SEED_VAR */:jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac21 SEED_VAR */ - jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac21 SEED_VAR */ - ((data->simulationInfo->realParameter[314] /* pwLine1.Z.re PARAM */) * (jacobian->seedVars[11] /* pwLine1.ir.im.SeedNLSJac21 SEED_VAR */ + ((-jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac21 SEED_VAR */)) * (data->simulationInfo->realParameter[311] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[312] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[313] /* pwLine1.Z.im PARAM */) * (jacobian->tmpVars[18] /* pwLine1.ir.re.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[311] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[312] /* pwLine1.Y.re PARAM */)))));
  TRACE_POP
}

OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_functionJacNLSJac21_constantEqns(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_INDEX_JAC_NLSJac21;
  
  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_functionJacNLSJac21_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_INDEX_JAC_NLSJac21;
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_240(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_241(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_242(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_243(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_244(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_245(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_246(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_247(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_248(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_249(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_250(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_251(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_252(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_253(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_254(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_255(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_256(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_257(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_258(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_259(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_260(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_261(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_262(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_263(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_264(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_265(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_266(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_267(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_268(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_269(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_270(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_271(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_272(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_273(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_274(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_275(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_276(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_277(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_278(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_279(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_280(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_281(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_282(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_283(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_284(data, threadData, jacobian, parentJacobian);
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_functionJacF_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_functionJacD_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_functionJacC_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_functionJacB_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
/* constant equations */
/* dynamic equations */

OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_functionJacA_constantEqns(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_INDEX_JAC_A;
  
  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_functionJacA_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_INDEX_JAC_A;
  TRACE_POP
  return 0;
}

OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_initialAnalyticJacobianNLSJac21(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+22] = {0,4,4,4,4,3,3,3,3,4,4,4,4,6,6,7,7,4,4,11,8,8,11};
  const int rowIndex[116] = {3,17,18,19,3,15,16,17,3,17,18,19,3,15,16,17,6,12,13,8,9,12,7,8,9,6,7,13,3,4,5,17,3,4,5,17,10,11,20,21,10,11,20,21,0,1,10,11,20,21,0,1,10,11,20,21,0,8,10,11,18,20,21,1,9,10,11,19,20,21,2,14,15,16,2,14,15,16,3,4,5,13,14,15,16,17,18,19,21,4,6,7,8,9,11,12,13,5,6,7,8,9,10,12,13,2,3,4,5,6,15,16,17,18,19,20};
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
  jacobian->sparsePattern->colorCols[9] = 5;
  jacobian->sparsePattern->colorCols[15] = 5;
  jacobian->sparsePattern->colorCols[8] = 6;
  jacobian->sparsePattern->colorCols[14] = 6;
  jacobian->sparsePattern->colorCols[3] = 7;
  jacobian->sparsePattern->colorCols[13] = 7;
  jacobian->sparsePattern->colorCols[2] = 8;
  jacobian->sparsePattern->colorCols[12] = 8;
  jacobian->sparsePattern->colorCols[17] = 8;
  jacobian->sparsePattern->colorCols[1] = 9;
  jacobian->sparsePattern->colorCols[5] = 9;
  jacobian->sparsePattern->colorCols[7] = 9;
  jacobian->sparsePattern->colorCols[11] = 9;
  jacobian->sparsePattern->colorCols[0] = 10;
  jacobian->sparsePattern->colorCols[4] = 10;
  jacobian->sparsePattern->colorCols[6] = 10;
  jacobian->sparsePattern->colorCols[10] = 10;
  jacobian->sparsePattern->colorCols[16] = 10;
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_initialAnalyticJacobianF(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_initialAnalyticJacobianD(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_initialAnalyticJacobianC(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_initialAnalyticJacobianB(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_initialAnalyticJacobianA(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
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


