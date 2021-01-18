/* Jacobians 6 */
#include "OpenIPSL.Examples.Controls.PSSE.ES.ESAC1A_model.h"
#include "OpenIPSL.Examples.Controls.PSSE.ES.ESAC1A_12jac.h"
/* constant equations */
/* dynamic equations */

/*
equation index: 420
type: SIMPLE_ASSIGN
constantLoad.v.$pDERNLSJac4.dummyVarNLSJac4 = (pwLine1.vs.re * pwLine1.vs.re.SeedNLSJac4 + pwLine1.vs.im * pwLine1.vs.im.SeedNLSJac4) / sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_420(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,420};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[133] /* pwLine1.vs.re variable */;
  tmp1 = data->localData[0]->realVars[132] /* pwLine1.vs.im variable */;
  jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = DIVISION((data->localData[0]->realVars[133] /* pwLine1.vs.re variable */) * (jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac4 SEED_VAR */) + (data->localData[0]->realVars[132] /* pwLine1.vs.im variable */) * (jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac4 SEED_VAR */),sqrt((tmp0 * tmp0) + (tmp1 * tmp1)),"sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)");
  TRACE_POP
}

/*
equation index: 421
type: SIMPLE_ASSIGN
constantLoad.kP.$pDERNLSJac4.dummyVarNLSJac4 = if constantLoad.v < constantLoad.PQBRAK then constantLoad.a1 * (-sin(constantLoad.v * constantLoad.wp)) * constantLoad.v.$pDERNLSJac4.dummyVarNLSJac4 * constantLoad.wp + constantLoad.b1 * cos(constantLoad.v * constantLoad.wp) * constantLoad.v.$pDERNLSJac4.dummyVarNLSJac4 * constantLoad.wp else 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_421(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,421};
  modelica_boolean tmp2;
  RELATIONHYSTERESIS(tmp2, data->localData[0]->realVars[55] /* constantLoad.v variable */, data->simulationInfo->realParameter[35] /* constantLoad.PQBRAK PARAM */, 8, Less);
  jacobian->tmpVars[1] /* constantLoad.kP.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = (tmp2?(data->simulationInfo->realParameter[55] /* constantLoad.a1 PARAM */) * (((-sin((data->localData[0]->realVars[55] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[75] /* constantLoad.wp PARAM */)))) * ((jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[75] /* constantLoad.wp PARAM */))) + (data->simulationInfo->realParameter[61] /* constantLoad.b1 PARAM */) * ((cos((data->localData[0]->realVars[55] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[75] /* constantLoad.wp PARAM */))) * ((jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[75] /* constantLoad.wp PARAM */))):0.0);
  TRACE_POP
}

/*
equation index: 422
type: SIMPLE_ASSIGN
constantLoad.kI.$pDERNLSJac4.dummyVarNLSJac4 = if constantLoad.v < 0.5 then constantLoad.a2 * constantLoad.b2 * (constantLoad.v ^ (-1.0 + constantLoad.b2) * (-exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2)) * constantLoad.a2 * constantLoad.b2 * constantLoad.v ^ (constantLoad.b2 - 1.0) * constantLoad.v.$pDERNLSJac4.dummyVarNLSJac4 + (if noEvent(constantLoad.v == 0.0) then 0.0 else constantLoad.v ^ (-1.0 + constantLoad.b2 - 1.0) * (-1.0 + constantLoad.b2) * constantLoad.v.$pDERNLSJac4.dummyVarNLSJac4) * exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2)) else 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_422(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,422};
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
  RELATIONHYSTERESIS(tmp3, data->localData[0]->realVars[55] /* constantLoad.v variable */, 0.5, 5, Less);
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
      tmp34 = (tmp28) * ((-1.0 + data->simulationInfo->realParameter[62] /* constantLoad.b2 PARAM */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */));
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
    tmp43 = (data->simulationInfo->realParameter[56] /* constantLoad.a2 PARAM */) * ((data->simulationInfo->realParameter[62] /* constantLoad.b2 PARAM */) * ((tmp6) * (((-exp(((-data->simulationInfo->realParameter[56] /* constantLoad.a2 PARAM */)) * (tmp13)))) * ((data->simulationInfo->realParameter[56] /* constantLoad.a2 PARAM */) * (((data->simulationInfo->realParameter[62] /* constantLoad.b2 PARAM */) * (tmp20)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */)))) + (tmp34) * (exp(((-data->simulationInfo->realParameter[56] /* constantLoad.a2 PARAM */)) * (tmp37)))));
  }
  else
  {
    tmp43 = 0.0;
  }
  jacobian->tmpVars[2] /* constantLoad.kI.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = tmp43;
  TRACE_POP
}

/*
equation index: 423
type: SIMPLE_ASSIGN
constantLoad.Q.$pDERNLSJac4.dummyVarNLSJac4 = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.S_I.im * (constantLoad.kI * constantLoad.v.$pDERNLSJac4.dummyVarNLSJac4 + constantLoad.kI.$pDERNLSJac4.dummyVarNLSJac4 * constantLoad.v) + constantLoad.S_Y.im * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac4.dummyVarNLSJac4 + constantLoad.kP.$pDERNLSJac4.dummyVarNLSJac4 * (constantLoad.S_P.im + constantLoad.d_Q) else constantLoad.S_I.im * (constantLoad.kI * constantLoad.v.$pDERNLSJac4.dummyVarNLSJac4 + constantLoad.kI.$pDERNLSJac4.dummyVarNLSJac4 * constantLoad.v) + constantLoad.S_Y.im * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac4.dummyVarNLSJac4 + constantLoad.kP.$pDERNLSJac4.dummyVarNLSJac4 * constantLoad.S_P.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_423(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,423};
  modelica_boolean tmp44;
  modelica_boolean tmp45;
  RELATIONHYSTERESIS(tmp44, data->localData[0]->timeValue, data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */, 6, GreaterEq);
  RELATIONHYSTERESIS(tmp45, data->localData[0]->timeValue, data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[65] /* constantLoad.d_t PARAM */, 7, LessEq);
  jacobian->tmpVars[3] /* constantLoad.Q.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = ((tmp44 && tmp45)?(data->simulationInfo->realParameter[38] /* constantLoad.S_I.im PARAM */) * ((data->localData[0]->realVars[51] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[2] /* constantLoad.kI.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[42] /* constantLoad.S_Y.im PARAM */) * (((2.0) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[1] /* constantLoad.kP.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[40] /* constantLoad.S_P.im PARAM */ + data->simulationInfo->realParameter[64] /* constantLoad.d_Q PARAM */):(data->simulationInfo->realParameter[38] /* constantLoad.S_I.im PARAM */) * ((data->localData[0]->realVars[51] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[2] /* constantLoad.kI.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[42] /* constantLoad.S_Y.im PARAM */) * (((2.0) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[1] /* constantLoad.kP.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[40] /* constantLoad.S_P.im PARAM */));
  TRACE_POP
}

/*
equation index: 424
type: SIMPLE_ASSIGN
constantLoad.P.$pDERNLSJac4.dummyVarNLSJac4 = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.S_I.re * (constantLoad.kI * constantLoad.v.$pDERNLSJac4.dummyVarNLSJac4 + constantLoad.kI.$pDERNLSJac4.dummyVarNLSJac4 * constantLoad.v) + constantLoad.S_Y.re * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac4.dummyVarNLSJac4 + constantLoad.kP.$pDERNLSJac4.dummyVarNLSJac4 * (constantLoad.S_P.re + constantLoad.d_P) else constantLoad.S_I.re * (constantLoad.kI * constantLoad.v.$pDERNLSJac4.dummyVarNLSJac4 + constantLoad.kI.$pDERNLSJac4.dummyVarNLSJac4 * constantLoad.v) + constantLoad.S_Y.re * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac4.dummyVarNLSJac4 + constantLoad.kP.$pDERNLSJac4.dummyVarNLSJac4 * constantLoad.S_P.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_424(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,424};
  modelica_boolean tmp46;
  modelica_boolean tmp47;
  RELATIONHYSTERESIS(tmp46, data->localData[0]->timeValue, data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */, 6, GreaterEq);
  RELATIONHYSTERESIS(tmp47, data->localData[0]->timeValue, data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[65] /* constantLoad.d_t PARAM */, 7, LessEq);
  jacobian->tmpVars[4] /* constantLoad.P.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = ((tmp46 && tmp47)?(data->simulationInfo->realParameter[39] /* constantLoad.S_I.re PARAM */) * ((data->localData[0]->realVars[51] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[2] /* constantLoad.kI.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[43] /* constantLoad.S_Y.re PARAM */) * (((2.0) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[1] /* constantLoad.kP.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[41] /* constantLoad.S_P.re PARAM */ + data->simulationInfo->realParameter[63] /* constantLoad.d_P PARAM */):(data->simulationInfo->realParameter[39] /* constantLoad.S_I.re PARAM */) * ((data->localData[0]->realVars[51] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[2] /* constantLoad.kI.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[43] /* constantLoad.S_Y.re PARAM */) * (((2.0) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[1] /* constantLoad.kP.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[41] /* constantLoad.S_P.re PARAM */));
  TRACE_POP
}

/*
equation index: 425
type: SIMPLE_ASSIGN
gENROE.PSId.$pDERNLSJac4.dummyVarNLSJac4 = (-gENROE.Xppd) * gENROE.id.SeedNLSJac4
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_425(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,425};
  jacobian->tmpVars[5] /* gENROE.PSId.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[261] /* gENROE.Xppd PARAM */)) * (jacobian->seedVars[17] /* gENROE.id.SeedNLSJac4 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 426
type: SIMPLE_ASSIGN
pwLine.is.re.$pDERNLSJac4.dummyVarNLSJac4 = ($cse7 * gENROE.iq.SeedNLSJac4 + $cse6 * gENROE.id.SeedNLSJac4) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_426(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,426};
  jacobian->tmpVars[6] /* pwLine.is.re.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[31] /* $cse7 variable */) * (jacobian->seedVars[16] /* gENROE.iq.SeedNLSJac4 SEED_VAR */) + (data->localData[0]->realVars[30] /* $cse6 variable */) * (jacobian->seedVars[17] /* gENROE.id.SeedNLSJac4 SEED_VAR */)) * (data->simulationInfo->realParameter[207] /* gENROE.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 427
type: SIMPLE_ASSIGN
pwLine.is.im.$pDERNLSJac4.dummyVarNLSJac4 = ($cse6 * gENROE.iq.SeedNLSJac4 - $cse7 * gENROE.id.SeedNLSJac4) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_427(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,427};
  jacobian->tmpVars[7] /* pwLine.is.im.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[30] /* $cse6 variable */) * (jacobian->seedVars[16] /* gENROE.iq.SeedNLSJac4 SEED_VAR */) - ((data->localData[0]->realVars[31] /* $cse7 variable */) * (jacobian->seedVars[17] /* gENROE.id.SeedNLSJac4 SEED_VAR */))) * (data->simulationInfo->realParameter[207] /* gENROE.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 428
type: SIMPLE_ASSIGN
gENROE.uq.$pDERNLSJac4.dummyVarNLSJac4 = gENROE.PSId.$pDERNLSJac4.dummyVarNLSJac4 - gENROE.R_a * gENROE.iq.SeedNLSJac4
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_428(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,428};
  jacobian->tmpVars[8] /* gENROE.uq.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[5] /* gENROE.PSId.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[244] /* gENROE.R_a PARAM */) * (jacobian->seedVars[16] /* gENROE.iq.SeedNLSJac4 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 429
type: SIMPLE_ASSIGN
gENROE.PSIq.$pDERNLSJac4.dummyVarNLSJac4 = (-gENROE.Xppq) * gENROE.iq.SeedNLSJac4
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_429(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,429};
  jacobian->tmpVars[9] /* gENROE.PSIq.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[262] /* gENROE.Xppq PARAM */)) * (jacobian->seedVars[16] /* gENROE.iq.SeedNLSJac4 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 430
type: SIMPLE_ASSIGN
gENROE.ud.$pDERNLSJac4.dummyVarNLSJac4 = (-gENROE.PSIq.$pDERNLSJac4.dummyVarNLSJac4) - gENROE.R_a * gENROE.id.SeedNLSJac4
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_430(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,430};
  jacobian->tmpVars[10] /* gENROE.ud.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = (-jacobian->tmpVars[9] /* gENROE.PSIq.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) - ((data->simulationInfo->realParameter[244] /* gENROE.R_a PARAM */) * (jacobian->seedVars[17] /* gENROE.id.SeedNLSJac4 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 431
type: SIMPLE_ASSIGN
pwLine.vs.re.$pDERNLSJac4.dummyVarNLSJac4 = $cse6 * gENROE.ud.$pDERNLSJac4.dummyVarNLSJac4 + $cse7 * gENROE.uq.$pDERNLSJac4.dummyVarNLSJac4
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_431(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,431};
  jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[30] /* $cse6 variable */) * (jacobian->tmpVars[10] /* gENROE.ud.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[31] /* $cse7 variable */) * (jacobian->tmpVars[8] /* gENROE.uq.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 432
type: SIMPLE_ASSIGN
pwLine.vs.im.$pDERNLSJac4.dummyVarNLSJac4 = $cse6 * gENROE.uq.$pDERNLSJac4.dummyVarNLSJac4 - $cse7 * gENROE.ud.$pDERNLSJac4.dummyVarNLSJac4
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_432(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,432};
  jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[30] /* $cse6 variable */) * (jacobian->tmpVars[8] /* gENROE.uq.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) - ((data->localData[0]->realVars[31] /* $cse7 variable */) * (jacobian->tmpVars[10] /* gENROE.ud.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 433
type: SIMPLE_ASSIGN
gENCLS.p.ir.$pDERNLSJac4.dummyVarNLSJac4 = ((-$cse1) * gENCLS.id.SeedNLSJac4 - $cse2 * gENCLS.iq.SeedNLSJac4) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_433(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,433};
  jacobian->tmpVars[13] /* gENCLS.p.ir.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = (((-data->localData[0]->realVars[26] /* $cse1 variable */)) * (jacobian->seedVars[13] /* gENCLS.id.SeedNLSJac4 SEED_VAR */) - ((data->localData[0]->realVars[27] /* $cse2 variable */) * (jacobian->seedVars[12] /* gENCLS.iq.SeedNLSJac4 SEED_VAR */))) * (data->simulationInfo->realParameter[181] /* gENCLS.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 434
type: SIMPLE_ASSIGN
gENCLS.p.ii.$pDERNLSJac4.dummyVarNLSJac4 = ($cse2 * gENCLS.id.SeedNLSJac4 - $cse1 * gENCLS.iq.SeedNLSJac4) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_434(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,434};
  jacobian->tmpVars[14] /* gENCLS.p.ii.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[27] /* $cse2 variable */) * (jacobian->seedVars[13] /* gENCLS.id.SeedNLSJac4 SEED_VAR */) - ((data->localData[0]->realVars[26] /* $cse1 variable */) * (jacobian->seedVars[12] /* gENCLS.iq.SeedNLSJac4 SEED_VAR */))) * (data->simulationInfo->realParameter[181] /* gENCLS.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 435
type: SIMPLE_ASSIGN
gENCLS.vq.$pDERNLSJac4.dummyVarNLSJac4 = (-gENCLS.R_a) * gENCLS.iq.SeedNLSJac4 - gENCLS.X_d * gENCLS.id.SeedNLSJac4
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_435(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,435};
  jacobian->tmpVars[15] /* gENCLS.vq.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[187] /* gENCLS.R_a PARAM */)) * (jacobian->seedVars[12] /* gENCLS.iq.SeedNLSJac4 SEED_VAR */) - ((data->simulationInfo->realParameter[190] /* gENCLS.X_d PARAM */) * (jacobian->seedVars[13] /* gENCLS.id.SeedNLSJac4 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 436
type: SIMPLE_ASSIGN
gENCLS.vd.$pDERNLSJac4.dummyVarNLSJac4 = gENCLS.X_d * gENCLS.iq.SeedNLSJac4 - gENCLS.R_a * gENCLS.id.SeedNLSJac4
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_436(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,436};
  jacobian->tmpVars[16] /* gENCLS.vd.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[190] /* gENCLS.X_d PARAM */) * (jacobian->seedVars[12] /* gENCLS.iq.SeedNLSJac4 SEED_VAR */) - ((data->simulationInfo->realParameter[187] /* gENCLS.R_a PARAM */) * (jacobian->seedVars[13] /* gENCLS.id.SeedNLSJac4 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 437
type: SIMPLE_ASSIGN
pwLine4.ir.re.$pDERNLSJac4.dummyVarNLSJac4 = (-pwLine1.ir.re.SeedNLSJac4) - gENCLS.p.ir.$pDERNLSJac4.dummyVarNLSJac4
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_437(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,437};
  jacobian->tmpVars[17] /* pwLine4.ir.re.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[11] /* pwLine1.ir.re.SeedNLSJac4 SEED_VAR */) - jacobian->tmpVars[13] /* gENCLS.p.ir.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 438
type: SIMPLE_ASSIGN
pwLine4.ir.im.$pDERNLSJac4.dummyVarNLSJac4 = (-pwLine1.ir.im.SeedNLSJac4) - gENCLS.p.ii.$pDERNLSJac4.dummyVarNLSJac4
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_438(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,438};
  jacobian->tmpVars[18] /* pwLine4.ir.im.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[10] /* pwLine1.ir.im.SeedNLSJac4 SEED_VAR */) - jacobian->tmpVars[14] /* gENCLS.p.ii.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 439
type: SIMPLE_ASSIGN
pwLine1.is.re.$pDERNLSJac4.dummyVarNLSJac4 = (-pwLine.ir.re.SeedNLSJac4) - pwLine3.is.re.SeedNLSJac4 - constantLoad.p.ir.SeedNLSJac4
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_439(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,439};
  jacobian->tmpVars[19] /* pwLine1.is.re.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[6] /* pwLine.ir.re.SeedNLSJac4 SEED_VAR */) - jacobian->seedVars[7] /* pwLine3.is.re.SeedNLSJac4 SEED_VAR */ - jacobian->seedVars[8] /* constantLoad.p.ir.SeedNLSJac4 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 440
type: SIMPLE_ASSIGN
pwLine1.is.im.$pDERNLSJac4.dummyVarNLSJac4 = (-pwLine.ir.im.SeedNLSJac4) - pwLine3.is.im.SeedNLSJac4 - constantLoad.p.ii.SeedNLSJac4
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_440(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,440};
  jacobian->tmpVars[20] /* pwLine1.is.im.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[4] /* pwLine.ir.im.SeedNLSJac4 SEED_VAR */) - jacobian->seedVars[5] /* pwLine3.is.im.SeedNLSJac4 SEED_VAR */ - jacobian->seedVars[9] /* constantLoad.p.ii.SeedNLSJac4 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 441
type: SIMPLE_ASSIGN
pwFault.p.ir.$pDERNLSJac4.dummyVarNLSJac4 = (-pwLine3.ir.re.SeedNLSJac4) - pwLine4.is.re.SeedNLSJac4
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_441(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,441};
  jacobian->tmpVars[21] /* pwFault.p.ir.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[3] /* pwLine3.ir.re.SeedNLSJac4 SEED_VAR */) - jacobian->seedVars[2] /* pwLine4.is.re.SeedNLSJac4 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 442
type: SIMPLE_ASSIGN
pwFault.p.ii.$pDERNLSJac4.dummyVarNLSJac4 = (-pwLine3.ir.im.SeedNLSJac4) - pwLine4.is.im.SeedNLSJac4
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_442(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,442};
  jacobian->tmpVars[22] /* pwFault.p.ii.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[0] /* pwLine3.ir.im.SeedNLSJac4 SEED_VAR */) - jacobian->seedVars[1] /* pwLine4.is.im.SeedNLSJac4 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 443
type: SIMPLE_ASSIGN
$res_NLSJac4_1.$pDERNLSJac4.dummyVarNLSJac4 = pwLine1.vs.im * constantLoad.p.ir.SeedNLSJac4 + pwLine1.vs.im.SeedNLSJac4 * constantLoad.p.ir + (-pwLine1.vs.re.SeedNLSJac4) * constantLoad.p.ii - constantLoad.Q.$pDERNLSJac4.dummyVarNLSJac4 - pwLine1.vs.re * constantLoad.p.ii.SeedNLSJac4
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_443(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,443};
  jacobian->resultVars[0] /* $res_NLSJac4_1.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = (data->localData[0]->realVars[132] /* pwLine1.vs.im variable */) * (jacobian->seedVars[8] /* constantLoad.p.ir.SeedNLSJac4 SEED_VAR */) + (jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac4 SEED_VAR */) * (data->localData[0]->realVars[54] /* constantLoad.p.ir variable */) + ((-jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac4 SEED_VAR */)) * (data->localData[0]->realVars[53] /* constantLoad.p.ii variable */) - jacobian->tmpVars[3] /* constantLoad.Q.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ - ((data->localData[0]->realVars[133] /* pwLine1.vs.re variable */) * (jacobian->seedVars[9] /* constantLoad.p.ii.SeedNLSJac4 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 444
type: SIMPLE_ASSIGN
$res_NLSJac4_2.$pDERNLSJac4.dummyVarNLSJac4 = pwLine1.vs.im * constantLoad.p.ii.SeedNLSJac4 + pwLine1.vs.im.SeedNLSJac4 * constantLoad.p.ii + pwLine1.vs.re * constantLoad.p.ir.SeedNLSJac4 + pwLine1.vs.re.SeedNLSJac4 * constantLoad.p.ir - constantLoad.P.$pDERNLSJac4.dummyVarNLSJac4
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_444(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,444};
  jacobian->resultVars[1] /* $res_NLSJac4_2.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = (data->localData[0]->realVars[132] /* pwLine1.vs.im variable */) * (jacobian->seedVars[9] /* constantLoad.p.ii.SeedNLSJac4 SEED_VAR */) + (jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac4 SEED_VAR */) * (data->localData[0]->realVars[53] /* constantLoad.p.ii variable */) + (data->localData[0]->realVars[133] /* pwLine1.vs.re variable */) * (jacobian->seedVars[8] /* constantLoad.p.ir.SeedNLSJac4 SEED_VAR */) + (jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac4 SEED_VAR */) * (data->localData[0]->realVars[54] /* constantLoad.p.ir variable */) - jacobian->tmpVars[4] /* constantLoad.P.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 445
type: SIMPLE_ASSIGN
$res_NLSJac4_3.$pDERNLSJac4.dummyVarNLSJac4 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.is.re.SeedNLSJac4 else pwLine1.vs.re.SeedNLSJac4 - pwLine3.vr.re.SeedNLSJac4 - (pwLine3.Z.re * (pwLine3.is.re.SeedNLSJac4 + pwLine1.vs.im.SeedNLSJac4 * pwLine3.Y.im - pwLine1.vs.re.SeedNLSJac4 * pwLine3.Y.re) - pwLine3.Z.im * (pwLine3.is.im.SeedNLSJac4 + (-pwLine1.vs.re.SeedNLSJac4) * pwLine3.Y.im - pwLine1.vs.im.SeedNLSJac4 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_445(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,445};
  modelica_boolean tmp48;
  modelica_boolean tmp49;
  RELATIONHYSTERESIS(tmp48, data->localData[0]->timeValue, data->simulationInfo->realParameter[331] /* pwLine3.t1 PARAM */, 3, GreaterEq);
  RELATIONHYSTERESIS(tmp49, data->localData[0]->timeValue, data->simulationInfo->realParameter[332] /* pwLine3.t2 PARAM */, 4, Less);
  jacobian->resultVars[2] /* $res_NLSJac4_3.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = ((tmp48 && tmp49)?jacobian->seedVars[7] /* pwLine3.is.re.SeedNLSJac4 SEED_VAR */:jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac4 SEED_VAR */ - jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac4 SEED_VAR */ - ((data->simulationInfo->realParameter[330] /* pwLine3.Z.re PARAM */) * (jacobian->seedVars[7] /* pwLine3.is.re.SeedNLSJac4 SEED_VAR */ + (jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[327] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[328] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[329] /* pwLine3.Z.im PARAM */) * (jacobian->seedVars[5] /* pwLine3.is.im.SeedNLSJac4 SEED_VAR */ + ((-jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac4 SEED_VAR */)) * (data->simulationInfo->realParameter[327] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[328] /* pwLine3.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 446
type: SIMPLE_ASSIGN
$res_NLSJac4_4.$pDERNLSJac4.dummyVarNLSJac4 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.is.im.SeedNLSJac4 else pwLine1.vs.im.SeedNLSJac4 - pwLine3.vr.im.SeedNLSJac4 - (pwLine3.Z.re * (pwLine3.is.im.SeedNLSJac4 + (-pwLine1.vs.re.SeedNLSJac4) * pwLine3.Y.im - pwLine1.vs.im.SeedNLSJac4 * pwLine3.Y.re) + pwLine3.Z.im * (pwLine3.is.re.SeedNLSJac4 + pwLine1.vs.im.SeedNLSJac4 * pwLine3.Y.im - pwLine1.vs.re.SeedNLSJac4 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_446(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,446};
  modelica_boolean tmp50;
  modelica_boolean tmp51;
  RELATIONHYSTERESIS(tmp50, data->localData[0]->timeValue, data->simulationInfo->realParameter[331] /* pwLine3.t1 PARAM */, 3, GreaterEq);
  RELATIONHYSTERESIS(tmp51, data->localData[0]->timeValue, data->simulationInfo->realParameter[332] /* pwLine3.t2 PARAM */, 4, Less);
  jacobian->resultVars[3] /* $res_NLSJac4_4.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = ((tmp50 && tmp51)?jacobian->seedVars[5] /* pwLine3.is.im.SeedNLSJac4 SEED_VAR */:jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac4 SEED_VAR */ - jacobian->seedVars[21] /* pwLine3.vr.im.SeedNLSJac4 SEED_VAR */ - ((data->simulationInfo->realParameter[330] /* pwLine3.Z.re PARAM */) * (jacobian->seedVars[5] /* pwLine3.is.im.SeedNLSJac4 SEED_VAR */ + ((-jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac4 SEED_VAR */)) * (data->simulationInfo->realParameter[327] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[328] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[329] /* pwLine3.Z.im PARAM */) * (jacobian->seedVars[7] /* pwLine3.is.re.SeedNLSJac4 SEED_VAR */ + (jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[327] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[328] /* pwLine3.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 447
type: SIMPLE_ASSIGN
$res_NLSJac4_5.$pDERNLSJac4.dummyVarNLSJac4 = if time < pwFault.t1 then pwFault.p.ii.$pDERNLSJac4.dummyVarNLSJac4 else if time < pwFault.t2 and pwFault.ground then pwLine3.vr.re.SeedNLSJac4 else if time < pwFault.t2 then pwFault.p.ii.$pDERNLSJac4.dummyVarNLSJac4 - (pwFault.R * pwLine3.vr.im.SeedNLSJac4 - pwFault.X * pwLine3.vr.re.SeedNLSJac4) * (pwFault.X ^ 2.0 + pwFault.R ^ 2.0) / (pwFault.X ^ 2.0 + pwFault.R ^ 2.0) ^ 2.0 else pwFault.p.ii.$pDERNLSJac4.dummyVarNLSJac4
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_447(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,447};
  modelica_boolean tmp52;
  modelica_boolean tmp53;
  modelica_boolean tmp54;
  modelica_real tmp55;
  modelica_real tmp56;
  modelica_real tmp57;
  modelica_real tmp58;
  modelica_real tmp59;
  modelica_boolean tmp60;
  modelica_real tmp61;
  modelica_boolean tmp62;
  modelica_real tmp63;
  modelica_boolean tmp64;
  modelica_real tmp65;
  RELATIONHYSTERESIS(tmp52, data->localData[0]->timeValue, data->simulationInfo->realParameter[298] /* pwFault.t1 PARAM */, 9, Less);
  tmp64 = (modelica_boolean)tmp52;
  if(tmp64)
  {
    tmp65 = jacobian->tmpVars[22] /* pwFault.p.ii.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp53, data->localData[0]->timeValue, data->simulationInfo->realParameter[299] /* pwFault.t2 PARAM */, 10, Less);
    tmp62 = (modelica_boolean)(tmp53 && data->simulationInfo->booleanParameter[70] /* pwFault.ground PARAM */);
    if(tmp62)
    {
      tmp63 = jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac4 SEED_VAR */;
    }
    else
    {
      RELATIONHYSTERESIS(tmp54, data->localData[0]->timeValue, data->simulationInfo->realParameter[299] /* pwFault.t2 PARAM */, 10, Less);
      tmp60 = (modelica_boolean)tmp54;
      if(tmp60)
      {
        tmp55 = data->simulationInfo->realParameter[297] /* pwFault.X PARAM */;
        tmp56 = data->simulationInfo->realParameter[296] /* pwFault.R PARAM */;
        tmp57 = data->simulationInfo->realParameter[297] /* pwFault.X PARAM */;
        tmp58 = data->simulationInfo->realParameter[296] /* pwFault.R PARAM */;
        tmp59 = (tmp57 * tmp57) + (tmp58 * tmp58);
        tmp61 = jacobian->tmpVars[22] /* pwFault.p.ii.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ - (DIVISION(((data->simulationInfo->realParameter[296] /* pwFault.R PARAM */) * (jacobian->seedVars[21] /* pwLine3.vr.im.SeedNLSJac4 SEED_VAR */) - ((data->simulationInfo->realParameter[297] /* pwFault.X PARAM */) * (jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac4 SEED_VAR */))) * ((tmp55 * tmp55) + (tmp56 * tmp56)),(tmp59 * tmp59),"(pwFault.X ^ 2.0 + pwFault.R ^ 2.0) ^ 2.0"));
      }
      else
      {
        tmp61 = jacobian->tmpVars[22] /* pwFault.p.ii.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */;
      }
      tmp63 = tmp61;
    }
    tmp65 = tmp63;
  }
  jacobian->resultVars[4] /* $res_NLSJac4_5.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = tmp65;
  TRACE_POP
}

/*
equation index: 448
type: SIMPLE_ASSIGN
$res_NLSJac4_6.$pDERNLSJac4.dummyVarNLSJac4 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.ir.im.SeedNLSJac4 else pwLine3.vr.im.SeedNLSJac4 - pwLine1.vs.im.SeedNLSJac4 - (pwLine3.Z.re * (pwLine3.ir.im.SeedNLSJac4 + (-pwLine3.vr.re.SeedNLSJac4) * pwLine3.Y.im - pwLine3.vr.im.SeedNLSJac4 * pwLine3.Y.re) + pwLine3.Z.im * (pwLine3.ir.re.SeedNLSJac4 + pwLine3.vr.im.SeedNLSJac4 * pwLine3.Y.im - pwLine3.vr.re.SeedNLSJac4 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_448(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,448};
  modelica_boolean tmp66;
  modelica_boolean tmp67;
  RELATIONHYSTERESIS(tmp66, data->localData[0]->timeValue, data->simulationInfo->realParameter[331] /* pwLine3.t1 PARAM */, 3, GreaterEq);
  RELATIONHYSTERESIS(tmp67, data->localData[0]->timeValue, data->simulationInfo->realParameter[332] /* pwLine3.t2 PARAM */, 4, Less);
  jacobian->resultVars[5] /* $res_NLSJac4_6.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = ((tmp66 && tmp67)?jacobian->seedVars[0] /* pwLine3.ir.im.SeedNLSJac4 SEED_VAR */:jacobian->seedVars[21] /* pwLine3.vr.im.SeedNLSJac4 SEED_VAR */ - jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac4 SEED_VAR */ - ((data->simulationInfo->realParameter[330] /* pwLine3.Z.re PARAM */) * (jacobian->seedVars[0] /* pwLine3.ir.im.SeedNLSJac4 SEED_VAR */ + ((-jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac4 SEED_VAR */)) * (data->simulationInfo->realParameter[327] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine3.vr.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[328] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[329] /* pwLine3.Z.im PARAM */) * (jacobian->seedVars[3] /* pwLine3.ir.re.SeedNLSJac4 SEED_VAR */ + (jacobian->seedVars[21] /* pwLine3.vr.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[327] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[328] /* pwLine3.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 449
type: SIMPLE_ASSIGN
$res_NLSJac4_7.$pDERNLSJac4.dummyVarNLSJac4 = if time < pwFault.t1 then pwFault.p.ir.$pDERNLSJac4.dummyVarNLSJac4 else if time < pwFault.t2 and pwFault.ground then pwLine3.vr.im.SeedNLSJac4 else if time < pwFault.t2 then pwFault.p.ir.$pDERNLSJac4.dummyVarNLSJac4 - (pwFault.R * pwLine3.vr.re.SeedNLSJac4 + pwFault.X * pwLine3.vr.im.SeedNLSJac4) * (pwFault.R ^ 2.0 + pwFault.X ^ 2.0) / (pwFault.R ^ 2.0 + pwFault.X ^ 2.0) ^ 2.0 else pwFault.p.ir.$pDERNLSJac4.dummyVarNLSJac4
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_449(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,449};
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
  RELATIONHYSTERESIS(tmp68, data->localData[0]->timeValue, data->simulationInfo->realParameter[298] /* pwFault.t1 PARAM */, 9, Less);
  tmp80 = (modelica_boolean)tmp68;
  if(tmp80)
  {
    tmp81 = jacobian->tmpVars[21] /* pwFault.p.ir.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp69, data->localData[0]->timeValue, data->simulationInfo->realParameter[299] /* pwFault.t2 PARAM */, 10, Less);
    tmp78 = (modelica_boolean)(tmp69 && data->simulationInfo->booleanParameter[70] /* pwFault.ground PARAM */);
    if(tmp78)
    {
      tmp79 = jacobian->seedVars[21] /* pwLine3.vr.im.SeedNLSJac4 SEED_VAR */;
    }
    else
    {
      RELATIONHYSTERESIS(tmp70, data->localData[0]->timeValue, data->simulationInfo->realParameter[299] /* pwFault.t2 PARAM */, 10, Less);
      tmp76 = (modelica_boolean)tmp70;
      if(tmp76)
      {
        tmp71 = data->simulationInfo->realParameter[296] /* pwFault.R PARAM */;
        tmp72 = data->simulationInfo->realParameter[297] /* pwFault.X PARAM */;
        tmp73 = data->simulationInfo->realParameter[296] /* pwFault.R PARAM */;
        tmp74 = data->simulationInfo->realParameter[297] /* pwFault.X PARAM */;
        tmp75 = (tmp73 * tmp73) + (tmp74 * tmp74);
        tmp77 = jacobian->tmpVars[21] /* pwFault.p.ir.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ - (DIVISION(((data->simulationInfo->realParameter[296] /* pwFault.R PARAM */) * (jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac4 SEED_VAR */) + (data->simulationInfo->realParameter[297] /* pwFault.X PARAM */) * (jacobian->seedVars[21] /* pwLine3.vr.im.SeedNLSJac4 SEED_VAR */)) * ((tmp71 * tmp71) + (tmp72 * tmp72)),(tmp75 * tmp75),"(pwFault.R ^ 2.0 + pwFault.X ^ 2.0) ^ 2.0"));
      }
      else
      {
        tmp77 = jacobian->tmpVars[21] /* pwFault.p.ir.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */;
      }
      tmp79 = tmp77;
    }
    tmp81 = tmp79;
  }
  jacobian->resultVars[6] /* $res_NLSJac4_7.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = tmp81;
  TRACE_POP
}

/*
equation index: 450
type: SIMPLE_ASSIGN
$res_NLSJac4_8.$pDERNLSJac4.dummyVarNLSJac4 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.is.re.SeedNLSJac4 else pwLine3.vr.re.SeedNLSJac4 - pwLine1.vr.re.SeedNLSJac4 - (pwLine4.Z.re * (pwLine4.is.re.SeedNLSJac4 + pwLine3.vr.im.SeedNLSJac4 * pwLine4.Y.im - pwLine3.vr.re.SeedNLSJac4 * pwLine4.Y.re) - pwLine4.Z.im * (pwLine4.is.im.SeedNLSJac4 + (-pwLine3.vr.re.SeedNLSJac4) * pwLine4.Y.im - pwLine3.vr.im.SeedNLSJac4 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_450(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,450};
  modelica_boolean tmp82;
  modelica_boolean tmp83;
  RELATIONHYSTERESIS(tmp82, data->localData[0]->timeValue, data->simulationInfo->realParameter[342] /* pwLine4.t1 PARAM */, 11, GreaterEq);
  RELATIONHYSTERESIS(tmp83, data->localData[0]->timeValue, data->simulationInfo->realParameter[343] /* pwLine4.t2 PARAM */, 12, Less);
  jacobian->resultVars[7] /* $res_NLSJac4_8.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = ((tmp82 && tmp83)?jacobian->seedVars[2] /* pwLine4.is.re.SeedNLSJac4 SEED_VAR */:jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac4 SEED_VAR */ - jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac4 SEED_VAR */ - ((data->simulationInfo->realParameter[341] /* pwLine4.Z.re PARAM */) * (jacobian->seedVars[2] /* pwLine4.is.re.SeedNLSJac4 SEED_VAR */ + (jacobian->seedVars[21] /* pwLine3.vr.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[338] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[339] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[340] /* pwLine4.Z.im PARAM */) * (jacobian->seedVars[1] /* pwLine4.is.im.SeedNLSJac4 SEED_VAR */ + ((-jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac4 SEED_VAR */)) * (data->simulationInfo->realParameter[338] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine3.vr.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[339] /* pwLine4.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 451
type: SIMPLE_ASSIGN
$res_NLSJac4_9.$pDERNLSJac4.dummyVarNLSJac4 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.is.im.SeedNLSJac4 else pwLine3.vr.im.SeedNLSJac4 - pwLine1.vr.im.SeedNLSJac4 - (pwLine4.Z.re * (pwLine4.is.im.SeedNLSJac4 + (-pwLine3.vr.re.SeedNLSJac4) * pwLine4.Y.im - pwLine3.vr.im.SeedNLSJac4 * pwLine4.Y.re) + pwLine4.Z.im * (pwLine4.is.re.SeedNLSJac4 + pwLine3.vr.im.SeedNLSJac4 * pwLine4.Y.im - pwLine3.vr.re.SeedNLSJac4 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_451(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,451};
  modelica_boolean tmp84;
  modelica_boolean tmp85;
  RELATIONHYSTERESIS(tmp84, data->localData[0]->timeValue, data->simulationInfo->realParameter[342] /* pwLine4.t1 PARAM */, 11, GreaterEq);
  RELATIONHYSTERESIS(tmp85, data->localData[0]->timeValue, data->simulationInfo->realParameter[343] /* pwLine4.t2 PARAM */, 12, Less);
  jacobian->resultVars[8] /* $res_NLSJac4_9.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = ((tmp84 && tmp85)?jacobian->seedVars[1] /* pwLine4.is.im.SeedNLSJac4 SEED_VAR */:jacobian->seedVars[21] /* pwLine3.vr.im.SeedNLSJac4 SEED_VAR */ - jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac4 SEED_VAR */ - ((data->simulationInfo->realParameter[341] /* pwLine4.Z.re PARAM */) * (jacobian->seedVars[1] /* pwLine4.is.im.SeedNLSJac4 SEED_VAR */ + ((-jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac4 SEED_VAR */)) * (data->simulationInfo->realParameter[338] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine3.vr.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[339] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[340] /* pwLine4.Z.im PARAM */) * (jacobian->seedVars[2] /* pwLine4.is.re.SeedNLSJac4 SEED_VAR */ + (jacobian->seedVars[21] /* pwLine3.vr.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[338] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[339] /* pwLine4.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 452
type: SIMPLE_ASSIGN
$res_NLSJac4_10.$pDERNLSJac4.dummyVarNLSJac4 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.ir.re.SeedNLSJac4 else pwLine3.vr.re.SeedNLSJac4 - pwLine1.vs.re.SeedNLSJac4 - (pwLine3.Z.re * (pwLine3.ir.re.SeedNLSJac4 + pwLine3.vr.im.SeedNLSJac4 * pwLine3.Y.im - pwLine3.vr.re.SeedNLSJac4 * pwLine3.Y.re) - pwLine3.Z.im * (pwLine3.ir.im.SeedNLSJac4 + (-pwLine3.vr.re.SeedNLSJac4) * pwLine3.Y.im - pwLine3.vr.im.SeedNLSJac4 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_452(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,452};
  modelica_boolean tmp86;
  modelica_boolean tmp87;
  RELATIONHYSTERESIS(tmp86, data->localData[0]->timeValue, data->simulationInfo->realParameter[331] /* pwLine3.t1 PARAM */, 3, GreaterEq);
  RELATIONHYSTERESIS(tmp87, data->localData[0]->timeValue, data->simulationInfo->realParameter[332] /* pwLine3.t2 PARAM */, 4, Less);
  jacobian->resultVars[9] /* $res_NLSJac4_10.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = ((tmp86 && tmp87)?jacobian->seedVars[3] /* pwLine3.ir.re.SeedNLSJac4 SEED_VAR */:jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac4 SEED_VAR */ - jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac4 SEED_VAR */ - ((data->simulationInfo->realParameter[330] /* pwLine3.Z.re PARAM */) * (jacobian->seedVars[3] /* pwLine3.ir.re.SeedNLSJac4 SEED_VAR */ + (jacobian->seedVars[21] /* pwLine3.vr.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[327] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[328] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[329] /* pwLine3.Z.im PARAM */) * (jacobian->seedVars[0] /* pwLine3.ir.im.SeedNLSJac4 SEED_VAR */ + ((-jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac4 SEED_VAR */)) * (data->simulationInfo->realParameter[327] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine3.vr.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[328] /* pwLine3.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 453
type: SIMPLE_ASSIGN
$res_NLSJac4_11.$pDERNLSJac4.dummyVarNLSJac4 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.ir.im.SeedNLSJac4 else pwLine1.vs.im.SeedNLSJac4 - pwLine.vs.im.$pDERNLSJac4.dummyVarNLSJac4 - (pwLine.Z.re * (pwLine.ir.im.SeedNLSJac4 + (-pwLine1.vs.re.SeedNLSJac4) * pwLine.Y.im - pwLine1.vs.im.SeedNLSJac4 * pwLine.Y.re) + pwLine.Z.im * (pwLine.ir.re.SeedNLSJac4 + pwLine1.vs.im.SeedNLSJac4 * pwLine.Y.im - pwLine1.vs.re.SeedNLSJac4 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_453(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,453};
  modelica_boolean tmp88;
  modelica_boolean tmp89;
  RELATIONHYSTERESIS(tmp88, data->localData[0]->timeValue, data->simulationInfo->realParameter[309] /* pwLine.t1 PARAM */, 1, GreaterEq);
  RELATIONHYSTERESIS(tmp89, data->localData[0]->timeValue, data->simulationInfo->realParameter[310] /* pwLine.t2 PARAM */, 2, Less);
  jacobian->resultVars[10] /* $res_NLSJac4_11.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = ((tmp88 && tmp89)?jacobian->seedVars[4] /* pwLine.ir.im.SeedNLSJac4 SEED_VAR */:jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac4 SEED_VAR */ - jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[308] /* pwLine.Z.re PARAM */) * (jacobian->seedVars[4] /* pwLine.ir.im.SeedNLSJac4 SEED_VAR */ + ((-jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac4 SEED_VAR */)) * (data->simulationInfo->realParameter[305] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[306] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[307] /* pwLine.Z.im PARAM */) * (jacobian->seedVars[6] /* pwLine.ir.re.SeedNLSJac4 SEED_VAR */ + (jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[305] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[306] /* pwLine.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 454
type: SIMPLE_ASSIGN
$res_NLSJac4_12.$pDERNLSJac4.dummyVarNLSJac4 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.is.im.$pDERNLSJac4.dummyVarNLSJac4 else pwLine.vs.im.$pDERNLSJac4.dummyVarNLSJac4 - pwLine1.vs.im.SeedNLSJac4 - (pwLine.Z.re * (pwLine.is.im.$pDERNLSJac4.dummyVarNLSJac4 + (-pwLine.vs.re.$pDERNLSJac4.dummyVarNLSJac4) * pwLine.Y.im - pwLine.vs.im.$pDERNLSJac4.dummyVarNLSJac4 * pwLine.Y.re) + pwLine.Z.im * (pwLine.is.re.$pDERNLSJac4.dummyVarNLSJac4 + pwLine.vs.im.$pDERNLSJac4.dummyVarNLSJac4 * pwLine.Y.im - pwLine.vs.re.$pDERNLSJac4.dummyVarNLSJac4 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_454(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,454};
  modelica_boolean tmp90;
  modelica_boolean tmp91;
  RELATIONHYSTERESIS(tmp90, data->localData[0]->timeValue, data->simulationInfo->realParameter[309] /* pwLine.t1 PARAM */, 1, GreaterEq);
  RELATIONHYSTERESIS(tmp91, data->localData[0]->timeValue, data->simulationInfo->realParameter[310] /* pwLine.t2 PARAM */, 2, Less);
  jacobian->resultVars[11] /* $res_NLSJac4_12.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = ((tmp90 && tmp91)?jacobian->tmpVars[7] /* pwLine.is.im.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac4 SEED_VAR */ - ((data->simulationInfo->realParameter[308] /* pwLine.Z.re PARAM */) * (jacobian->tmpVars[7] /* pwLine.is.im.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ + ((-jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[305] /* pwLine.Y.im PARAM */) - ((jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[306] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[307] /* pwLine.Z.im PARAM */) * (jacobian->tmpVars[6] /* pwLine.is.re.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ + (jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[305] /* pwLine.Y.im PARAM */) - ((jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[306] /* pwLine.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 455
type: SIMPLE_ASSIGN
$res_NLSJac4_13.$pDERNLSJac4.dummyVarNLSJac4 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.is.re.$pDERNLSJac4.dummyVarNLSJac4 else pwLine.vs.re.$pDERNLSJac4.dummyVarNLSJac4 - pwLine1.vs.re.SeedNLSJac4 - (pwLine.Z.re * (pwLine.is.re.$pDERNLSJac4.dummyVarNLSJac4 + pwLine.vs.im.$pDERNLSJac4.dummyVarNLSJac4 * pwLine.Y.im - pwLine.vs.re.$pDERNLSJac4.dummyVarNLSJac4 * pwLine.Y.re) - pwLine.Z.im * (pwLine.is.im.$pDERNLSJac4.dummyVarNLSJac4 + (-pwLine.vs.re.$pDERNLSJac4.dummyVarNLSJac4) * pwLine.Y.im - pwLine.vs.im.$pDERNLSJac4.dummyVarNLSJac4 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_455(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,455};
  modelica_boolean tmp92;
  modelica_boolean tmp93;
  RELATIONHYSTERESIS(tmp92, data->localData[0]->timeValue, data->simulationInfo->realParameter[309] /* pwLine.t1 PARAM */, 1, GreaterEq);
  RELATIONHYSTERESIS(tmp93, data->localData[0]->timeValue, data->simulationInfo->realParameter[310] /* pwLine.t2 PARAM */, 2, Less);
  jacobian->resultVars[12] /* $res_NLSJac4_13.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = ((tmp92 && tmp93)?jacobian->tmpVars[6] /* pwLine.is.re.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac4 SEED_VAR */ - ((data->simulationInfo->realParameter[308] /* pwLine.Z.re PARAM */) * (jacobian->tmpVars[6] /* pwLine.is.re.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ + (jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[305] /* pwLine.Y.im PARAM */) - ((jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[306] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[307] /* pwLine.Z.im PARAM */) * (jacobian->tmpVars[7] /* pwLine.is.im.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ + ((-jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[305] /* pwLine.Y.im PARAM */) - ((jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[306] /* pwLine.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 456
type: SIMPLE_ASSIGN
$res_NLSJac4_14.$pDERNLSJac4.dummyVarNLSJac4 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.is.im.$pDERNLSJac4.dummyVarNLSJac4 else pwLine1.vs.im.SeedNLSJac4 - pwLine1.vr.im.SeedNLSJac4 - (pwLine1.Z.re * (pwLine1.is.im.$pDERNLSJac4.dummyVarNLSJac4 + (-pwLine1.vs.re.SeedNLSJac4) * pwLine1.Y.im - pwLine1.vs.im.SeedNLSJac4 * pwLine1.Y.re) + pwLine1.Z.im * (pwLine1.is.re.$pDERNLSJac4.dummyVarNLSJac4 + pwLine1.vs.im.SeedNLSJac4 * pwLine1.Y.im - pwLine1.vs.re.SeedNLSJac4 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_456(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,456};
  modelica_boolean tmp94;
  modelica_boolean tmp95;
  RELATIONHYSTERESIS(tmp94, data->localData[0]->timeValue, data->simulationInfo->realParameter[320] /* pwLine1.t1 PARAM */, 13, GreaterEq);
  RELATIONHYSTERESIS(tmp95, data->localData[0]->timeValue, data->simulationInfo->realParameter[321] /* pwLine1.t2 PARAM */, 14, Less);
  jacobian->resultVars[13] /* $res_NLSJac4_14.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = ((tmp94 && tmp95)?jacobian->tmpVars[20] /* pwLine1.is.im.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */:jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac4 SEED_VAR */ - jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac4 SEED_VAR */ - ((data->simulationInfo->realParameter[319] /* pwLine1.Z.re PARAM */) * (jacobian->tmpVars[20] /* pwLine1.is.im.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac4 SEED_VAR */)) * (data->simulationInfo->realParameter[316] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[317] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[318] /* pwLine1.Z.im PARAM */) * (jacobian->tmpVars[19] /* pwLine1.is.re.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[316] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[317] /* pwLine1.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 457
type: SIMPLE_ASSIGN
$res_NLSJac4_15.$pDERNLSJac4.dummyVarNLSJac4 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.ir.re.SeedNLSJac4 else pwLine1.vs.re.SeedNLSJac4 - pwLine.vs.re.$pDERNLSJac4.dummyVarNLSJac4 - (pwLine.Z.re * (pwLine.ir.re.SeedNLSJac4 + pwLine1.vs.im.SeedNLSJac4 * pwLine.Y.im - pwLine1.vs.re.SeedNLSJac4 * pwLine.Y.re) - pwLine.Z.im * (pwLine.ir.im.SeedNLSJac4 + (-pwLine1.vs.re.SeedNLSJac4) * pwLine.Y.im - pwLine1.vs.im.SeedNLSJac4 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_457(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,457};
  modelica_boolean tmp96;
  modelica_boolean tmp97;
  RELATIONHYSTERESIS(tmp96, data->localData[0]->timeValue, data->simulationInfo->realParameter[309] /* pwLine.t1 PARAM */, 1, GreaterEq);
  RELATIONHYSTERESIS(tmp97, data->localData[0]->timeValue, data->simulationInfo->realParameter[310] /* pwLine.t2 PARAM */, 2, Less);
  jacobian->resultVars[14] /* $res_NLSJac4_15.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = ((tmp96 && tmp97)?jacobian->seedVars[6] /* pwLine.ir.re.SeedNLSJac4 SEED_VAR */:jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac4 SEED_VAR */ - jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[308] /* pwLine.Z.re PARAM */) * (jacobian->seedVars[6] /* pwLine.ir.re.SeedNLSJac4 SEED_VAR */ + (jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[305] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[306] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[307] /* pwLine.Z.im PARAM */) * (jacobian->seedVars[4] /* pwLine.ir.im.SeedNLSJac4 SEED_VAR */ + ((-jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac4 SEED_VAR */)) * (data->simulationInfo->realParameter[305] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[306] /* pwLine.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 458
type: SIMPLE_ASSIGN
$res_NLSJac4_16.$pDERNLSJac4.dummyVarNLSJac4 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.is.re.$pDERNLSJac4.dummyVarNLSJac4 else pwLine1.vs.re.SeedNLSJac4 - pwLine1.vr.re.SeedNLSJac4 - (pwLine1.Z.re * (pwLine1.is.re.$pDERNLSJac4.dummyVarNLSJac4 + pwLine1.vs.im.SeedNLSJac4 * pwLine1.Y.im - pwLine1.vs.re.SeedNLSJac4 * pwLine1.Y.re) - pwLine1.Z.im * (pwLine1.is.im.$pDERNLSJac4.dummyVarNLSJac4 + (-pwLine1.vs.re.SeedNLSJac4) * pwLine1.Y.im - pwLine1.vs.im.SeedNLSJac4 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_458(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,458};
  modelica_boolean tmp98;
  modelica_boolean tmp99;
  RELATIONHYSTERESIS(tmp98, data->localData[0]->timeValue, data->simulationInfo->realParameter[320] /* pwLine1.t1 PARAM */, 13, GreaterEq);
  RELATIONHYSTERESIS(tmp99, data->localData[0]->timeValue, data->simulationInfo->realParameter[321] /* pwLine1.t2 PARAM */, 14, Less);
  jacobian->resultVars[15] /* $res_NLSJac4_16.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = ((tmp98 && tmp99)?jacobian->tmpVars[19] /* pwLine1.is.re.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */:jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac4 SEED_VAR */ - jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac4 SEED_VAR */ - ((data->simulationInfo->realParameter[319] /* pwLine1.Z.re PARAM */) * (jacobian->tmpVars[19] /* pwLine1.is.re.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[316] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[317] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[318] /* pwLine1.Z.im PARAM */) * (jacobian->tmpVars[20] /* pwLine1.is.im.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac4 SEED_VAR */)) * (data->simulationInfo->realParameter[316] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[317] /* pwLine1.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 459
type: SIMPLE_ASSIGN
$res_NLSJac4_17.$pDERNLSJac4.dummyVarNLSJac4 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.ir.re.$pDERNLSJac4.dummyVarNLSJac4 else pwLine1.vr.re.SeedNLSJac4 - pwLine3.vr.re.SeedNLSJac4 - (pwLine4.Z.re * (pwLine4.ir.re.$pDERNLSJac4.dummyVarNLSJac4 + pwLine1.vr.im.SeedNLSJac4 * pwLine4.Y.im - pwLine1.vr.re.SeedNLSJac4 * pwLine4.Y.re) - pwLine4.Z.im * (pwLine4.ir.im.$pDERNLSJac4.dummyVarNLSJac4 + (-pwLine1.vr.re.SeedNLSJac4) * pwLine4.Y.im - pwLine1.vr.im.SeedNLSJac4 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_459(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,459};
  modelica_boolean tmp100;
  modelica_boolean tmp101;
  RELATIONHYSTERESIS(tmp100, data->localData[0]->timeValue, data->simulationInfo->realParameter[342] /* pwLine4.t1 PARAM */, 11, GreaterEq);
  RELATIONHYSTERESIS(tmp101, data->localData[0]->timeValue, data->simulationInfo->realParameter[343] /* pwLine4.t2 PARAM */, 12, Less);
  jacobian->resultVars[16] /* $res_NLSJac4_17.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = ((tmp100 && tmp101)?jacobian->tmpVars[17] /* pwLine4.ir.re.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */:jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac4 SEED_VAR */ - jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac4 SEED_VAR */ - ((data->simulationInfo->realParameter[341] /* pwLine4.Z.re PARAM */) * (jacobian->tmpVars[17] /* pwLine4.ir.re.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[338] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[339] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[340] /* pwLine4.Z.im PARAM */) * (jacobian->tmpVars[18] /* pwLine4.ir.im.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac4 SEED_VAR */)) * (data->simulationInfo->realParameter[338] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[339] /* pwLine4.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 460
type: SIMPLE_ASSIGN
$res_NLSJac4_18.$pDERNLSJac4.dummyVarNLSJac4 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.ir.im.$pDERNLSJac4.dummyVarNLSJac4 else pwLine1.vr.im.SeedNLSJac4 - pwLine3.vr.im.SeedNLSJac4 - (pwLine4.Z.re * (pwLine4.ir.im.$pDERNLSJac4.dummyVarNLSJac4 + (-pwLine1.vr.re.SeedNLSJac4) * pwLine4.Y.im - pwLine1.vr.im.SeedNLSJac4 * pwLine4.Y.re) + pwLine4.Z.im * (pwLine4.ir.re.$pDERNLSJac4.dummyVarNLSJac4 + pwLine1.vr.im.SeedNLSJac4 * pwLine4.Y.im - pwLine1.vr.re.SeedNLSJac4 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_460(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,460};
  modelica_boolean tmp102;
  modelica_boolean tmp103;
  RELATIONHYSTERESIS(tmp102, data->localData[0]->timeValue, data->simulationInfo->realParameter[342] /* pwLine4.t1 PARAM */, 11, GreaterEq);
  RELATIONHYSTERESIS(tmp103, data->localData[0]->timeValue, data->simulationInfo->realParameter[343] /* pwLine4.t2 PARAM */, 12, Less);
  jacobian->resultVars[17] /* $res_NLSJac4_18.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = ((tmp102 && tmp103)?jacobian->tmpVars[18] /* pwLine4.ir.im.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */:jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac4 SEED_VAR */ - jacobian->seedVars[21] /* pwLine3.vr.im.SeedNLSJac4 SEED_VAR */ - ((data->simulationInfo->realParameter[341] /* pwLine4.Z.re PARAM */) * (jacobian->tmpVars[18] /* pwLine4.ir.im.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac4 SEED_VAR */)) * (data->simulationInfo->realParameter[338] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[339] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[340] /* pwLine4.Z.im PARAM */) * (jacobian->tmpVars[17] /* pwLine4.ir.re.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[338] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[339] /* pwLine4.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 461
type: SIMPLE_ASSIGN
$res_NLSJac4_19.$pDERNLSJac4.dummyVarNLSJac4 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.ir.re.SeedNLSJac4 else pwLine1.vr.re.SeedNLSJac4 - pwLine1.vs.re.SeedNLSJac4 - (pwLine1.Z.re * (pwLine1.ir.re.SeedNLSJac4 + pwLine1.vr.im.SeedNLSJac4 * pwLine1.Y.im - pwLine1.vr.re.SeedNLSJac4 * pwLine1.Y.re) - pwLine1.Z.im * (pwLine1.ir.im.SeedNLSJac4 + (-pwLine1.vr.re.SeedNLSJac4) * pwLine1.Y.im - pwLine1.vr.im.SeedNLSJac4 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_461(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,461};
  modelica_boolean tmp104;
  modelica_boolean tmp105;
  RELATIONHYSTERESIS(tmp104, data->localData[0]->timeValue, data->simulationInfo->realParameter[320] /* pwLine1.t1 PARAM */, 13, GreaterEq);
  RELATIONHYSTERESIS(tmp105, data->localData[0]->timeValue, data->simulationInfo->realParameter[321] /* pwLine1.t2 PARAM */, 14, Less);
  jacobian->resultVars[18] /* $res_NLSJac4_19.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = ((tmp104 && tmp105)?jacobian->seedVars[11] /* pwLine1.ir.re.SeedNLSJac4 SEED_VAR */:jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac4 SEED_VAR */ - jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac4 SEED_VAR */ - ((data->simulationInfo->realParameter[319] /* pwLine1.Z.re PARAM */) * (jacobian->seedVars[11] /* pwLine1.ir.re.SeedNLSJac4 SEED_VAR */ + (jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[316] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[317] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[318] /* pwLine1.Z.im PARAM */) * (jacobian->seedVars[10] /* pwLine1.ir.im.SeedNLSJac4 SEED_VAR */ + ((-jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac4 SEED_VAR */)) * (data->simulationInfo->realParameter[316] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[317] /* pwLine1.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 462
type: SIMPLE_ASSIGN
$res_NLSJac4_20.$pDERNLSJac4.dummyVarNLSJac4 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.ir.im.SeedNLSJac4 else pwLine1.vr.im.SeedNLSJac4 - pwLine1.vs.im.SeedNLSJac4 - (pwLine1.Z.re * (pwLine1.ir.im.SeedNLSJac4 + (-pwLine1.vr.re.SeedNLSJac4) * pwLine1.Y.im - pwLine1.vr.im.SeedNLSJac4 * pwLine1.Y.re) + pwLine1.Z.im * (pwLine1.ir.re.SeedNLSJac4 + pwLine1.vr.im.SeedNLSJac4 * pwLine1.Y.im - pwLine1.vr.re.SeedNLSJac4 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_462(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,462};
  modelica_boolean tmp106;
  modelica_boolean tmp107;
  RELATIONHYSTERESIS(tmp106, data->localData[0]->timeValue, data->simulationInfo->realParameter[320] /* pwLine1.t1 PARAM */, 13, GreaterEq);
  RELATIONHYSTERESIS(tmp107, data->localData[0]->timeValue, data->simulationInfo->realParameter[321] /* pwLine1.t2 PARAM */, 14, Less);
  jacobian->resultVars[19] /* $res_NLSJac4_20.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = ((tmp106 && tmp107)?jacobian->seedVars[10] /* pwLine1.ir.im.SeedNLSJac4 SEED_VAR */:jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac4 SEED_VAR */ - jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac4 SEED_VAR */ - ((data->simulationInfo->realParameter[319] /* pwLine1.Z.re PARAM */) * (jacobian->seedVars[10] /* pwLine1.ir.im.SeedNLSJac4 SEED_VAR */ + ((-jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac4 SEED_VAR */)) * (data->simulationInfo->realParameter[316] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[317] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[318] /* pwLine1.Z.im PARAM */) * (jacobian->seedVars[11] /* pwLine1.ir.re.SeedNLSJac4 SEED_VAR */ + (jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[316] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[317] /* pwLine1.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 463
type: SIMPLE_ASSIGN
$res_NLSJac4_21.$pDERNLSJac4.dummyVarNLSJac4 = $cse1 * gENCLS.vq.$pDERNLSJac4.dummyVarNLSJac4 + (-$cse2) * gENCLS.vd.$pDERNLSJac4.dummyVarNLSJac4 - pwLine1.vr.im.SeedNLSJac4
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_463(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,463};
  jacobian->resultVars[20] /* $res_NLSJac4_21.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = (data->localData[0]->realVars[26] /* $cse1 variable */) * (jacobian->tmpVars[15] /* gENCLS.vq.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) + ((-data->localData[0]->realVars[27] /* $cse2 variable */)) * (jacobian->tmpVars[16] /* gENCLS.vd.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) - jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac4 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 464
type: SIMPLE_ASSIGN
$res_NLSJac4_22.$pDERNLSJac4.dummyVarNLSJac4 = $cse2 * gENCLS.vq.$pDERNLSJac4.dummyVarNLSJac4 + $cse1 * gENCLS.vd.$pDERNLSJac4.dummyVarNLSJac4 - pwLine1.vr.re.SeedNLSJac4
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_464(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,464};
  jacobian->resultVars[21] /* $res_NLSJac4_22.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = (data->localData[0]->realVars[27] /* $cse2 variable */) * (jacobian->tmpVars[15] /* gENCLS.vq.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[26] /* $cse1 variable */) * (jacobian->tmpVars[16] /* gENCLS.vd.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) - jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac4 SEED_VAR */;
  TRACE_POP
}

OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_functionJacNLSJac4_constantEqns(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_INDEX_JAC_NLSJac4;
  
  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_functionJacNLSJac4_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_INDEX_JAC_NLSJac4;
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_420(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_421(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_422(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_423(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_424(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_425(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_426(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_427(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_428(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_429(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_430(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_431(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_432(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_433(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_434(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_435(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_436(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_437(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_438(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_439(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_440(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_441(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_442(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_443(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_444(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_445(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_446(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_447(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_448(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_449(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_450(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_451(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_452(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_453(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_454(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_455(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_456(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_457(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_458(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_459(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_460(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_461(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_462(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_463(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_464(data, threadData, jacobian, parentJacobian);
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_functionJacF_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_functionJacD_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_functionJacC_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_functionJacB_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
/* constant equations */
/* dynamic equations */

OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_functionJacA_constantEqns(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_INDEX_JAC_A;
  
  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_functionJacA_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_INDEX_JAC_A;
  TRACE_POP
  return 0;
}

OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_initialAnalyticJacobianNLSJac4(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+22] = {0,3,3,3,3,4,4,4,4,4,4,4,4,4,4,7,7,4,4,11,11,8,8};
  const int rowIndex[112] = {4,5,9,4,7,8,6,7,8,5,6,9,10,13,14,15,2,3,13,15,10,13,14,15,2,3,13,15,0,1,13,15,0,1,13,15,16,17,18,19,16,17,18,19,16,17,20,21,16,17,20,21,8,13,16,17,18,19,20,7,15,16,17,18,19,21,10,11,12,14,10,11,12,14,0,1,2,3,5,10,11,13,14,15,19,0,1,2,3,9,10,12,13,14,15,18,2,4,5,6,7,8,9,16,3,4,5,6,7,8,9,17};
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
  jacobian->sparsePattern->colorCols[19] = 1;
  jacobian->sparsePattern->colorCols[18] = 2;
  jacobian->sparsePattern->colorCols[15] = 3;
  jacobian->sparsePattern->colorCols[14] = 4;
  jacobian->sparsePattern->colorCols[9] = 5;
  jacobian->sparsePattern->colorCols[21] = 5;
  jacobian->sparsePattern->colorCols[8] = 6;
  jacobian->sparsePattern->colorCols[20] = 6;
  jacobian->sparsePattern->colorCols[7] = 7;
  jacobian->sparsePattern->colorCols[13] = 7;
  jacobian->sparsePattern->colorCols[17] = 7;
  jacobian->sparsePattern->colorCols[6] = 8;
  jacobian->sparsePattern->colorCols[12] = 8;
  jacobian->sparsePattern->colorCols[1] = 9;
  jacobian->sparsePattern->colorCols[3] = 9;
  jacobian->sparsePattern->colorCols[5] = 9;
  jacobian->sparsePattern->colorCols[11] = 9;
  jacobian->sparsePattern->colorCols[16] = 9;
  jacobian->sparsePattern->colorCols[0] = 10;
  jacobian->sparsePattern->colorCols[2] = 10;
  jacobian->sparsePattern->colorCols[4] = 10;
  jacobian->sparsePattern->colorCols[10] = 10;
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_initialAnalyticJacobianF(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_initialAnalyticJacobianD(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_initialAnalyticJacobianC(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_initialAnalyticJacobianB(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_initialAnalyticJacobianA(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+13] = {0,4,3,4,5,2,10,10,10,10,10,10,10,2};
  const int rowIndex[90] = {0,1,3,4,1,3,4,1,2,3,4,0,1,3,4,8,3,4,0,1,2,3,4,7,8,9,10,12,0,1,2,3,4,7,8,9,10,12,0,1,2,3,4,7,8,9,10,12,0,1,2,3,4,7,8,9,10,12,0,1,2,3,4,7,8,9,10,12,0,1,2,3,4,7,8,9,10,12,0,1,2,3,4,7,8,9,10,12,11,12};
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
  jacobian->sparsePattern->colorCols[3] = 1;
  jacobian->sparsePattern->colorCols[0] = 2;
  jacobian->sparsePattern->colorCols[4] = 3;
  jacobian->sparsePattern->colorCols[2] = 4;
  jacobian->sparsePattern->colorCols[10] = 5;
  jacobian->sparsePattern->colorCols[9] = 6;
  jacobian->sparsePattern->colorCols[8] = 7;
  jacobian->sparsePattern->colorCols[7] = 8;
  jacobian->sparsePattern->colorCols[11] = 9;
  jacobian->sparsePattern->colorCols[12] = 10;
  jacobian->sparsePattern->colorCols[1] = 10;
  jacobian->sparsePattern->colorCols[6] = 11;
  jacobian->sparsePattern->colorCols[5] = 12;
  TRACE_POP
  return 0;
}


