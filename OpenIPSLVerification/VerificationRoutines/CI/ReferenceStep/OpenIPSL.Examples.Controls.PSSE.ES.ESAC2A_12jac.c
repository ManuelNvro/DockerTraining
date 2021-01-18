/* Jacobians 6 */
#include "OpenIPSL.Examples.Controls.PSSE.ES.ESAC2A_model.h"
#include "OpenIPSL.Examples.Controls.PSSE.ES.ESAC2A_12jac.h"
/* constant equations */
/* dynamic equations */

/*
equation index: 434
type: SIMPLE_ASSIGN
constantLoad.v.$pDERNLSJac7.dummyVarNLSJac7 = (pwLine1.vs.re * pwLine1.vs.re.SeedNLSJac7 + pwLine1.vs.im * pwLine1.vs.im.SeedNLSJac7) / sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_434(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,434};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[143] /* pwLine1.vs.re variable */;
  tmp1 = data->localData[0]->realVars[142] /* pwLine1.vs.im variable */;
  jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = DIVISION((data->localData[0]->realVars[143] /* pwLine1.vs.re variable */) * (jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac7 SEED_VAR */) + (data->localData[0]->realVars[142] /* pwLine1.vs.im variable */) * (jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac7 SEED_VAR */),sqrt((tmp0 * tmp0) + (tmp1 * tmp1)),"sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)");
  TRACE_POP
}

/*
equation index: 435
type: SIMPLE_ASSIGN
constantLoad.kI.$pDERNLSJac7.dummyVarNLSJac7 = if constantLoad.v < 0.5 then constantLoad.a2 * constantLoad.b2 * (constantLoad.v ^ (-1.0 + constantLoad.b2) * (-exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2)) * constantLoad.a2 * constantLoad.b2 * constantLoad.v ^ (constantLoad.b2 - 1.0) * constantLoad.v.$pDERNLSJac7.dummyVarNLSJac7 + (if noEvent(constantLoad.v == 0.0) then 0.0 else constantLoad.v ^ (-1.0 + constantLoad.b2 - 1.0) * (-1.0 + constantLoad.b2) * constantLoad.v.$pDERNLSJac7.dummyVarNLSJac7) * exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2)) else 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_435(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,435};
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
  RELATIONHYSTERESIS(tmp2, data->localData[0]->realVars[55] /* constantLoad.v variable */, 0.5, 3, Less);
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
      tmp33 = (tmp27) * ((-1.0 + data->simulationInfo->realParameter[62] /* constantLoad.b2 PARAM */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */));
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
    tmp42 = (data->simulationInfo->realParameter[56] /* constantLoad.a2 PARAM */) * ((data->simulationInfo->realParameter[62] /* constantLoad.b2 PARAM */) * ((tmp5) * (((-exp(((-data->simulationInfo->realParameter[56] /* constantLoad.a2 PARAM */)) * (tmp12)))) * ((data->simulationInfo->realParameter[56] /* constantLoad.a2 PARAM */) * (((data->simulationInfo->realParameter[62] /* constantLoad.b2 PARAM */) * (tmp19)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */)))) + (tmp33) * (exp(((-data->simulationInfo->realParameter[56] /* constantLoad.a2 PARAM */)) * (tmp36)))));
  }
  else
  {
    tmp42 = 0.0;
  }
  jacobian->tmpVars[1] /* constantLoad.kI.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = tmp42;
  TRACE_POP
}

/*
equation index: 436
type: SIMPLE_ASSIGN
constantLoad.kP.$pDERNLSJac7.dummyVarNLSJac7 = if constantLoad.v < constantLoad.PQBRAK then constantLoad.a1 * (-sin(constantLoad.v * constantLoad.wp)) * constantLoad.v.$pDERNLSJac7.dummyVarNLSJac7 * constantLoad.wp + constantLoad.b1 * cos(constantLoad.v * constantLoad.wp) * constantLoad.v.$pDERNLSJac7.dummyVarNLSJac7 * constantLoad.wp else 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_436(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,436};
  modelica_boolean tmp43;
  RELATIONHYSTERESIS(tmp43, data->localData[0]->realVars[55] /* constantLoad.v variable */, data->simulationInfo->realParameter[35] /* constantLoad.PQBRAK PARAM */, 14, Less);
  jacobian->tmpVars[2] /* constantLoad.kP.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = (tmp43?(data->simulationInfo->realParameter[55] /* constantLoad.a1 PARAM */) * (((-sin((data->localData[0]->realVars[55] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[75] /* constantLoad.wp PARAM */)))) * ((jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[75] /* constantLoad.wp PARAM */))) + (data->simulationInfo->realParameter[61] /* constantLoad.b1 PARAM */) * ((cos((data->localData[0]->realVars[55] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[75] /* constantLoad.wp PARAM */))) * ((jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[75] /* constantLoad.wp PARAM */))):0.0);
  TRACE_POP
}

/*
equation index: 437
type: SIMPLE_ASSIGN
constantLoad.Q.$pDERNLSJac7.dummyVarNLSJac7 = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.S_I.im * (constantLoad.kI * constantLoad.v.$pDERNLSJac7.dummyVarNLSJac7 + constantLoad.kI.$pDERNLSJac7.dummyVarNLSJac7 * constantLoad.v) + constantLoad.S_Y.im * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac7.dummyVarNLSJac7 + constantLoad.kP.$pDERNLSJac7.dummyVarNLSJac7 * (constantLoad.S_P.im + constantLoad.d_Q) else constantLoad.S_I.im * (constantLoad.kI * constantLoad.v.$pDERNLSJac7.dummyVarNLSJac7 + constantLoad.kI.$pDERNLSJac7.dummyVarNLSJac7 * constantLoad.v) + constantLoad.S_Y.im * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac7.dummyVarNLSJac7 + constantLoad.kP.$pDERNLSJac7.dummyVarNLSJac7 * constantLoad.S_P.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_437(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,437};
  modelica_boolean tmp44;
  modelica_boolean tmp45;
  RELATIONHYSTERESIS(tmp44, data->localData[0]->timeValue, data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */, 4, GreaterEq);
  RELATIONHYSTERESIS(tmp45, data->localData[0]->timeValue, data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[65] /* constantLoad.d_t PARAM */, 5, LessEq);
  jacobian->tmpVars[3] /* constantLoad.Q.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = ((tmp44 && tmp45)?(data->simulationInfo->realParameter[38] /* constantLoad.S_I.im PARAM */) * ((data->localData[0]->realVars[51] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[1] /* constantLoad.kI.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[42] /* constantLoad.S_Y.im PARAM */) * (((2.0) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[2] /* constantLoad.kP.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[40] /* constantLoad.S_P.im PARAM */ + data->simulationInfo->realParameter[64] /* constantLoad.d_Q PARAM */):(data->simulationInfo->realParameter[38] /* constantLoad.S_I.im PARAM */) * ((data->localData[0]->realVars[51] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[1] /* constantLoad.kI.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[42] /* constantLoad.S_Y.im PARAM */) * (((2.0) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[2] /* constantLoad.kP.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[40] /* constantLoad.S_P.im PARAM */));
  TRACE_POP
}

/*
equation index: 438
type: SIMPLE_ASSIGN
constantLoad.P.$pDERNLSJac7.dummyVarNLSJac7 = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.S_I.re * (constantLoad.kI * constantLoad.v.$pDERNLSJac7.dummyVarNLSJac7 + constantLoad.kI.$pDERNLSJac7.dummyVarNLSJac7 * constantLoad.v) + constantLoad.S_Y.re * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac7.dummyVarNLSJac7 + constantLoad.kP.$pDERNLSJac7.dummyVarNLSJac7 * (constantLoad.S_P.re + constantLoad.d_P) else constantLoad.S_I.re * (constantLoad.kI * constantLoad.v.$pDERNLSJac7.dummyVarNLSJac7 + constantLoad.kI.$pDERNLSJac7.dummyVarNLSJac7 * constantLoad.v) + constantLoad.S_Y.re * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac7.dummyVarNLSJac7 + constantLoad.kP.$pDERNLSJac7.dummyVarNLSJac7 * constantLoad.S_P.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_438(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,438};
  modelica_boolean tmp46;
  modelica_boolean tmp47;
  RELATIONHYSTERESIS(tmp46, data->localData[0]->timeValue, data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */, 4, GreaterEq);
  RELATIONHYSTERESIS(tmp47, data->localData[0]->timeValue, data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[65] /* constantLoad.d_t PARAM */, 5, LessEq);
  jacobian->tmpVars[4] /* constantLoad.P.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = ((tmp46 && tmp47)?(data->simulationInfo->realParameter[39] /* constantLoad.S_I.re PARAM */) * ((data->localData[0]->realVars[51] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[1] /* constantLoad.kI.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[43] /* constantLoad.S_Y.re PARAM */) * (((2.0) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[2] /* constantLoad.kP.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[41] /* constantLoad.S_P.re PARAM */ + data->simulationInfo->realParameter[63] /* constantLoad.d_P PARAM */):(data->simulationInfo->realParameter[39] /* constantLoad.S_I.re PARAM */) * ((data->localData[0]->realVars[51] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[1] /* constantLoad.kI.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[43] /* constantLoad.S_Y.re PARAM */) * (((2.0) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[2] /* constantLoad.kP.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[41] /* constantLoad.S_P.re PARAM */));
  TRACE_POP
}

/*
equation index: 439
type: SIMPLE_ASSIGN
gENROU.PSIq.$pDERNLSJac7.dummyVarNLSJac7 = (-gENROU.Xppq) * gENROU.iq.SeedNLSJac7
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_439(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,439};
  jacobian->tmpVars[5] /* gENROU.PSIq.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[284] /* gENROU.Xppq PARAM */)) * (jacobian->seedVars[17] /* gENROU.iq.SeedNLSJac7 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 440
type: SIMPLE_ASSIGN
pwLine.is.im.$pDERNLSJac7.dummyVarNLSJac7 = ($cse6 * gENROU.iq.SeedNLSJac7 - $cse7 * gENROU.id.SeedNLSJac7) * gENROU.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_440(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,440};
  jacobian->tmpVars[6] /* pwLine.is.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[30] /* $cse6 variable */) * (jacobian->seedVars[17] /* gENROU.iq.SeedNLSJac7 SEED_VAR */) - ((data->localData[0]->realVars[31] /* $cse7 variable */) * (jacobian->seedVars[16] /* gENROU.id.SeedNLSJac7 SEED_VAR */))) * (data->simulationInfo->realParameter[229] /* gENROU.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 441
type: SIMPLE_ASSIGN
pwLine.is.re.$pDERNLSJac7.dummyVarNLSJac7 = ($cse7 * gENROU.iq.SeedNLSJac7 + $cse6 * gENROU.id.SeedNLSJac7) * gENROU.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_441(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,441};
  jacobian->tmpVars[7] /* pwLine.is.re.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[31] /* $cse7 variable */) * (jacobian->seedVars[17] /* gENROU.iq.SeedNLSJac7 SEED_VAR */) + (data->localData[0]->realVars[30] /* $cse6 variable */) * (jacobian->seedVars[16] /* gENROU.id.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[229] /* gENROU.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 442
type: SIMPLE_ASSIGN
gENROU.ud.$pDERNLSJac7.dummyVarNLSJac7 = (-gENROU.PSIq.$pDERNLSJac7.dummyVarNLSJac7) - gENROU.R_a * gENROU.id.SeedNLSJac7
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_442(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,442};
  jacobian->tmpVars[8] /* gENROU.ud.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = (-jacobian->tmpVars[5] /* gENROU.PSIq.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */) - ((data->simulationInfo->realParameter[266] /* gENROU.R_a PARAM */) * (jacobian->seedVars[16] /* gENROU.id.SeedNLSJac7 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 443
type: SIMPLE_ASSIGN
gENROU.PSId.$pDERNLSJac7.dummyVarNLSJac7 = (-gENROU.Xppd) * gENROU.id.SeedNLSJac7
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_443(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,443};
  jacobian->tmpVars[9] /* gENROU.PSId.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[283] /* gENROU.Xppd PARAM */)) * (jacobian->seedVars[16] /* gENROU.id.SeedNLSJac7 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 444
type: SIMPLE_ASSIGN
gENROU.uq.$pDERNLSJac7.dummyVarNLSJac7 = gENROU.PSId.$pDERNLSJac7.dummyVarNLSJac7 - gENROU.R_a * gENROU.iq.SeedNLSJac7
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_444(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,444};
  jacobian->tmpVars[10] /* gENROU.uq.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[9] /* gENROU.PSId.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[266] /* gENROU.R_a PARAM */) * (jacobian->seedVars[17] /* gENROU.iq.SeedNLSJac7 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 445
type: SIMPLE_ASSIGN
pwLine.vs.re.$pDERNLSJac7.dummyVarNLSJac7 = $cse6 * gENROU.ud.$pDERNLSJac7.dummyVarNLSJac7 + $cse7 * gENROU.uq.$pDERNLSJac7.dummyVarNLSJac7
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_445(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,445};
  jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[30] /* $cse6 variable */) * (jacobian->tmpVars[8] /* gENROU.ud.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[31] /* $cse7 variable */) * (jacobian->tmpVars[10] /* gENROU.uq.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 446
type: SIMPLE_ASSIGN
pwLine.vs.im.$pDERNLSJac7.dummyVarNLSJac7 = $cse6 * gENROU.uq.$pDERNLSJac7.dummyVarNLSJac7 - $cse7 * gENROU.ud.$pDERNLSJac7.dummyVarNLSJac7
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_446(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,446};
  jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[30] /* $cse6 variable */) * (jacobian->tmpVars[10] /* gENROU.uq.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */) - ((data->localData[0]->realVars[31] /* $cse7 variable */) * (jacobian->tmpVars[8] /* gENROU.ud.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 447
type: SIMPLE_ASSIGN
gENCLS.p.ii.$pDERNLSJac7.dummyVarNLSJac7 = ($cse2 * gENCLS.id.SeedNLSJac7 - $cse1 * gENCLS.iq.SeedNLSJac7) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_447(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,447};
  jacobian->tmpVars[13] /* gENCLS.p.ii.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[27] /* $cse2 variable */) * (jacobian->seedVars[13] /* gENCLS.id.SeedNLSJac7 SEED_VAR */) - ((data->localData[0]->realVars[26] /* $cse1 variable */) * (jacobian->seedVars[12] /* gENCLS.iq.SeedNLSJac7 SEED_VAR */))) * (data->simulationInfo->realParameter[203] /* gENCLS.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 448
type: SIMPLE_ASSIGN
gENCLS.p.ir.$pDERNLSJac7.dummyVarNLSJac7 = ((-$cse1) * gENCLS.id.SeedNLSJac7 - $cse2 * gENCLS.iq.SeedNLSJac7) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_448(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,448};
  jacobian->tmpVars[14] /* gENCLS.p.ir.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = (((-data->localData[0]->realVars[26] /* $cse1 variable */)) * (jacobian->seedVars[13] /* gENCLS.id.SeedNLSJac7 SEED_VAR */) - ((data->localData[0]->realVars[27] /* $cse2 variable */) * (jacobian->seedVars[12] /* gENCLS.iq.SeedNLSJac7 SEED_VAR */))) * (data->simulationInfo->realParameter[203] /* gENCLS.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 449
type: SIMPLE_ASSIGN
gENCLS.vq.$pDERNLSJac7.dummyVarNLSJac7 = (-gENCLS.R_a) * gENCLS.iq.SeedNLSJac7 - gENCLS.X_d * gENCLS.id.SeedNLSJac7
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_449(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,449};
  jacobian->tmpVars[15] /* gENCLS.vq.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[209] /* gENCLS.R_a PARAM */)) * (jacobian->seedVars[12] /* gENCLS.iq.SeedNLSJac7 SEED_VAR */) - ((data->simulationInfo->realParameter[212] /* gENCLS.X_d PARAM */) * (jacobian->seedVars[13] /* gENCLS.id.SeedNLSJac7 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 450
type: SIMPLE_ASSIGN
gENCLS.vd.$pDERNLSJac7.dummyVarNLSJac7 = gENCLS.X_d * gENCLS.iq.SeedNLSJac7 - gENCLS.R_a * gENCLS.id.SeedNLSJac7
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_450(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,450};
  jacobian->tmpVars[16] /* gENCLS.vd.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[212] /* gENCLS.X_d PARAM */) * (jacobian->seedVars[12] /* gENCLS.iq.SeedNLSJac7 SEED_VAR */) - ((data->simulationInfo->realParameter[209] /* gENCLS.R_a PARAM */) * (jacobian->seedVars[13] /* gENCLS.id.SeedNLSJac7 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 451
type: SIMPLE_ASSIGN
pwLine4.ir.im.$pDERNLSJac7.dummyVarNLSJac7 = (-pwLine1.ir.im.SeedNLSJac7) - gENCLS.p.ii.$pDERNLSJac7.dummyVarNLSJac7
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_451(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,451};
  jacobian->tmpVars[17] /* pwLine4.ir.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[11] /* pwLine1.ir.im.SeedNLSJac7 SEED_VAR */) - jacobian->tmpVars[13] /* gENCLS.p.ii.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 452
type: SIMPLE_ASSIGN
pwLine4.ir.re.$pDERNLSJac7.dummyVarNLSJac7 = (-pwLine1.ir.re.SeedNLSJac7) - gENCLS.p.ir.$pDERNLSJac7.dummyVarNLSJac7
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_452(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,452};
  jacobian->tmpVars[18] /* pwLine4.ir.re.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[10] /* pwLine1.ir.re.SeedNLSJac7 SEED_VAR */) - jacobian->tmpVars[14] /* gENCLS.p.ir.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 453
type: SIMPLE_ASSIGN
pwFault.p.ii.$pDERNLSJac7.dummyVarNLSJac7 = (-pwLine3.ir.im.SeedNLSJac7) - pwLine4.is.im.SeedNLSJac7
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_453(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,453};
  jacobian->tmpVars[19] /* pwFault.p.ii.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[7] /* pwLine3.ir.im.SeedNLSJac7 SEED_VAR */) - jacobian->seedVars[6] /* pwLine4.is.im.SeedNLSJac7 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 454
type: SIMPLE_ASSIGN
pwFault.p.ir.$pDERNLSJac7.dummyVarNLSJac7 = (-pwLine3.ir.re.SeedNLSJac7) - pwLine4.is.re.SeedNLSJac7
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_454(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,454};
  jacobian->tmpVars[20] /* pwFault.p.ir.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[4] /* pwLine3.ir.re.SeedNLSJac7 SEED_VAR */) - jacobian->seedVars[5] /* pwLine4.is.re.SeedNLSJac7 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 455
type: SIMPLE_ASSIGN
constantLoad.p.ir.$pDERNLSJac7.dummyVarNLSJac7 = (-pwLine.ir.re.SeedNLSJac7) - pwLine1.is.re.SeedNLSJac7 - pwLine3.is.re.SeedNLSJac7
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_455(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,455};
  jacobian->tmpVars[21] /* constantLoad.p.ir.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[3] /* pwLine.ir.re.SeedNLSJac7 SEED_VAR */) - jacobian->seedVars[2] /* pwLine1.is.re.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[8] /* pwLine3.is.re.SeedNLSJac7 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 456
type: SIMPLE_ASSIGN
pwLine.ir.im.$pDERNLSJac7.dummyVarNLSJac7 = (-pwLine1.is.im.SeedNLSJac7) - pwLine3.is.im.SeedNLSJac7 - constantLoad.p.ii.SeedNLSJac7
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_456(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,456};
  jacobian->tmpVars[22] /* pwLine.ir.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[0] /* pwLine1.is.im.SeedNLSJac7 SEED_VAR */) - jacobian->seedVars[9] /* pwLine3.is.im.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[1] /* constantLoad.p.ii.SeedNLSJac7 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 457
type: SIMPLE_ASSIGN
$res_NLSJac7_1.$pDERNLSJac7.dummyVarNLSJac7 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.is.re.SeedNLSJac7 else pwLine1.vs.re.SeedNLSJac7 - pwLine3.vr.re.SeedNLSJac7 - (pwLine3.Z.re * (pwLine3.is.re.SeedNLSJac7 + pwLine1.vs.im.SeedNLSJac7 * pwLine3.Y.im - pwLine1.vs.re.SeedNLSJac7 * pwLine3.Y.re) - pwLine3.Z.im * (pwLine3.is.im.SeedNLSJac7 + (-pwLine1.vs.re.SeedNLSJac7) * pwLine3.Y.im - pwLine1.vs.im.SeedNLSJac7 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_457(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,457};
  modelica_boolean tmp48;
  modelica_boolean tmp49;
  RELATIONHYSTERESIS(tmp48, data->localData[0]->timeValue, data->simulationInfo->realParameter[353] /* pwLine3.t1 PARAM */, 6, GreaterEq);
  RELATIONHYSTERESIS(tmp49, data->localData[0]->timeValue, data->simulationInfo->realParameter[354] /* pwLine3.t2 PARAM */, 7, Less);
  jacobian->resultVars[0] /* $res_NLSJac7_1.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp48 && tmp49)?jacobian->seedVars[8] /* pwLine3.is.re.SeedNLSJac7 SEED_VAR */:jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[352] /* pwLine3.Z.re PARAM */) * (jacobian->seedVars[8] /* pwLine3.is.re.SeedNLSJac7 SEED_VAR */ + (jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[349] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[350] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[351] /* pwLine3.Z.im PARAM */) * (jacobian->seedVars[9] /* pwLine3.is.im.SeedNLSJac7 SEED_VAR */ + ((-jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[349] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[350] /* pwLine3.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 458
type: SIMPLE_ASSIGN
$res_NLSJac7_2.$pDERNLSJac7.dummyVarNLSJac7 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.is.im.SeedNLSJac7 else pwLine1.vs.im.SeedNLSJac7 - pwLine3.vr.im.SeedNLSJac7 - (pwLine3.Z.re * (pwLine3.is.im.SeedNLSJac7 + (-pwLine1.vs.re.SeedNLSJac7) * pwLine3.Y.im - pwLine1.vs.im.SeedNLSJac7 * pwLine3.Y.re) + pwLine3.Z.im * (pwLine3.is.re.SeedNLSJac7 + pwLine1.vs.im.SeedNLSJac7 * pwLine3.Y.im - pwLine1.vs.re.SeedNLSJac7 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_458(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,458};
  modelica_boolean tmp50;
  modelica_boolean tmp51;
  RELATIONHYSTERESIS(tmp50, data->localData[0]->timeValue, data->simulationInfo->realParameter[353] /* pwLine3.t1 PARAM */, 6, GreaterEq);
  RELATIONHYSTERESIS(tmp51, data->localData[0]->timeValue, data->simulationInfo->realParameter[354] /* pwLine3.t2 PARAM */, 7, Less);
  jacobian->resultVars[1] /* $res_NLSJac7_2.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp50 && tmp51)?jacobian->seedVars[9] /* pwLine3.is.im.SeedNLSJac7 SEED_VAR */:jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[21] /* pwLine3.vr.im.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[352] /* pwLine3.Z.re PARAM */) * (jacobian->seedVars[9] /* pwLine3.is.im.SeedNLSJac7 SEED_VAR */ + ((-jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[349] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[350] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[351] /* pwLine3.Z.im PARAM */) * (jacobian->seedVars[8] /* pwLine3.is.re.SeedNLSJac7 SEED_VAR */ + (jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[349] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[350] /* pwLine3.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 459
type: SIMPLE_ASSIGN
$res_NLSJac7_3.$pDERNLSJac7.dummyVarNLSJac7 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.ir.re.SeedNLSJac7 else pwLine3.vr.re.SeedNLSJac7 - pwLine1.vs.re.SeedNLSJac7 - (pwLine3.Z.re * (pwLine3.ir.re.SeedNLSJac7 + pwLine3.vr.im.SeedNLSJac7 * pwLine3.Y.im - pwLine3.vr.re.SeedNLSJac7 * pwLine3.Y.re) - pwLine3.Z.im * (pwLine3.ir.im.SeedNLSJac7 + (-pwLine3.vr.re.SeedNLSJac7) * pwLine3.Y.im - pwLine3.vr.im.SeedNLSJac7 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_459(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,459};
  modelica_boolean tmp52;
  modelica_boolean tmp53;
  RELATIONHYSTERESIS(tmp52, data->localData[0]->timeValue, data->simulationInfo->realParameter[353] /* pwLine3.t1 PARAM */, 6, GreaterEq);
  RELATIONHYSTERESIS(tmp53, data->localData[0]->timeValue, data->simulationInfo->realParameter[354] /* pwLine3.t2 PARAM */, 7, Less);
  jacobian->resultVars[2] /* $res_NLSJac7_3.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp52 && tmp53)?jacobian->seedVars[4] /* pwLine3.ir.re.SeedNLSJac7 SEED_VAR */:jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[352] /* pwLine3.Z.re PARAM */) * (jacobian->seedVars[4] /* pwLine3.ir.re.SeedNLSJac7 SEED_VAR */ + (jacobian->seedVars[21] /* pwLine3.vr.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[349] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[350] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[351] /* pwLine3.Z.im PARAM */) * (jacobian->seedVars[7] /* pwLine3.ir.im.SeedNLSJac7 SEED_VAR */ + ((-jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[349] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine3.vr.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[350] /* pwLine3.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 460
type: SIMPLE_ASSIGN
$res_NLSJac7_4.$pDERNLSJac7.dummyVarNLSJac7 = if time < pwFault.t1 then pwFault.p.ii.$pDERNLSJac7.dummyVarNLSJac7 else if time < pwFault.t2 and pwFault.ground then pwLine3.vr.re.SeedNLSJac7 else if time < pwFault.t2 then pwFault.p.ii.$pDERNLSJac7.dummyVarNLSJac7 - (pwFault.R * pwLine3.vr.im.SeedNLSJac7 - pwFault.X * pwLine3.vr.re.SeedNLSJac7) * (pwFault.X ^ 2.0 + pwFault.R ^ 2.0) / (pwFault.X ^ 2.0 + pwFault.R ^ 2.0) ^ 2.0 else pwFault.p.ii.$pDERNLSJac7.dummyVarNLSJac7
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_460(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,460};
  modelica_boolean tmp54;
  modelica_boolean tmp55;
  modelica_boolean tmp56;
  modelica_real tmp57;
  modelica_real tmp58;
  modelica_real tmp59;
  modelica_real tmp60;
  modelica_real tmp61;
  modelica_boolean tmp62;
  modelica_real tmp63;
  modelica_boolean tmp64;
  modelica_real tmp65;
  modelica_boolean tmp66;
  modelica_real tmp67;
  RELATIONHYSTERESIS(tmp54, data->localData[0]->timeValue, data->simulationInfo->realParameter[320] /* pwFault.t1 PARAM */, 8, Less);
  tmp66 = (modelica_boolean)tmp54;
  if(tmp66)
  {
    tmp67 = jacobian->tmpVars[19] /* pwFault.p.ii.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp55, data->localData[0]->timeValue, data->simulationInfo->realParameter[321] /* pwFault.t2 PARAM */, 9, Less);
    tmp64 = (modelica_boolean)(tmp55 && data->simulationInfo->booleanParameter[66] /* pwFault.ground PARAM */);
    if(tmp64)
    {
      tmp65 = jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac7 SEED_VAR */;
    }
    else
    {
      RELATIONHYSTERESIS(tmp56, data->localData[0]->timeValue, data->simulationInfo->realParameter[321] /* pwFault.t2 PARAM */, 9, Less);
      tmp62 = (modelica_boolean)tmp56;
      if(tmp62)
      {
        tmp57 = data->simulationInfo->realParameter[319] /* pwFault.X PARAM */;
        tmp58 = data->simulationInfo->realParameter[318] /* pwFault.R PARAM */;
        tmp59 = data->simulationInfo->realParameter[319] /* pwFault.X PARAM */;
        tmp60 = data->simulationInfo->realParameter[318] /* pwFault.R PARAM */;
        tmp61 = (tmp59 * tmp59) + (tmp60 * tmp60);
        tmp63 = jacobian->tmpVars[19] /* pwFault.p.ii.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ - (DIVISION(((data->simulationInfo->realParameter[318] /* pwFault.R PARAM */) * (jacobian->seedVars[21] /* pwLine3.vr.im.SeedNLSJac7 SEED_VAR */) - ((data->simulationInfo->realParameter[319] /* pwFault.X PARAM */) * (jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac7 SEED_VAR */))) * ((tmp57 * tmp57) + (tmp58 * tmp58)),(tmp61 * tmp61),"(pwFault.X ^ 2.0 + pwFault.R ^ 2.0) ^ 2.0"));
      }
      else
      {
        tmp63 = jacobian->tmpVars[19] /* pwFault.p.ii.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */;
      }
      tmp65 = tmp63;
    }
    tmp67 = tmp65;
  }
  jacobian->resultVars[3] /* $res_NLSJac7_4.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = tmp67;
  TRACE_POP
}

/*
equation index: 461
type: SIMPLE_ASSIGN
$res_NLSJac7_5.$pDERNLSJac7.dummyVarNLSJac7 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.is.im.SeedNLSJac7 else pwLine3.vr.im.SeedNLSJac7 - pwLine1.vr.im.SeedNLSJac7 - (pwLine4.Z.re * (pwLine4.is.im.SeedNLSJac7 + (-pwLine3.vr.re.SeedNLSJac7) * pwLine4.Y.im - pwLine3.vr.im.SeedNLSJac7 * pwLine4.Y.re) + pwLine4.Z.im * (pwLine4.is.re.SeedNLSJac7 + pwLine3.vr.im.SeedNLSJac7 * pwLine4.Y.im - pwLine3.vr.re.SeedNLSJac7 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_461(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,461};
  modelica_boolean tmp68;
  modelica_boolean tmp69;
  RELATIONHYSTERESIS(tmp68, data->localData[0]->timeValue, data->simulationInfo->realParameter[364] /* pwLine4.t1 PARAM */, 10, GreaterEq);
  RELATIONHYSTERESIS(tmp69, data->localData[0]->timeValue, data->simulationInfo->realParameter[365] /* pwLine4.t2 PARAM */, 11, Less);
  jacobian->resultVars[4] /* $res_NLSJac7_5.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp68 && tmp69)?jacobian->seedVars[6] /* pwLine4.is.im.SeedNLSJac7 SEED_VAR */:jacobian->seedVars[21] /* pwLine3.vr.im.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[363] /* pwLine4.Z.re PARAM */) * (jacobian->seedVars[6] /* pwLine4.is.im.SeedNLSJac7 SEED_VAR */ + ((-jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[360] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine3.vr.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[361] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[362] /* pwLine4.Z.im PARAM */) * (jacobian->seedVars[5] /* pwLine4.is.re.SeedNLSJac7 SEED_VAR */ + (jacobian->seedVars[21] /* pwLine3.vr.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[360] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[361] /* pwLine4.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 462
type: SIMPLE_ASSIGN
$res_NLSJac7_6.$pDERNLSJac7.dummyVarNLSJac7 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.is.re.SeedNLSJac7 else pwLine3.vr.re.SeedNLSJac7 - pwLine1.vr.re.SeedNLSJac7 - (pwLine4.Z.re * (pwLine4.is.re.SeedNLSJac7 + pwLine3.vr.im.SeedNLSJac7 * pwLine4.Y.im - pwLine3.vr.re.SeedNLSJac7 * pwLine4.Y.re) - pwLine4.Z.im * (pwLine4.is.im.SeedNLSJac7 + (-pwLine3.vr.re.SeedNLSJac7) * pwLine4.Y.im - pwLine3.vr.im.SeedNLSJac7 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_462(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,462};
  modelica_boolean tmp70;
  modelica_boolean tmp71;
  RELATIONHYSTERESIS(tmp70, data->localData[0]->timeValue, data->simulationInfo->realParameter[364] /* pwLine4.t1 PARAM */, 10, GreaterEq);
  RELATIONHYSTERESIS(tmp71, data->localData[0]->timeValue, data->simulationInfo->realParameter[365] /* pwLine4.t2 PARAM */, 11, Less);
  jacobian->resultVars[5] /* $res_NLSJac7_6.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp70 && tmp71)?jacobian->seedVars[5] /* pwLine4.is.re.SeedNLSJac7 SEED_VAR */:jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[363] /* pwLine4.Z.re PARAM */) * (jacobian->seedVars[5] /* pwLine4.is.re.SeedNLSJac7 SEED_VAR */ + (jacobian->seedVars[21] /* pwLine3.vr.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[360] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[361] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[362] /* pwLine4.Z.im PARAM */) * (jacobian->seedVars[6] /* pwLine4.is.im.SeedNLSJac7 SEED_VAR */ + ((-jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[360] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine3.vr.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[361] /* pwLine4.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 463
type: SIMPLE_ASSIGN
$res_NLSJac7_7.$pDERNLSJac7.dummyVarNLSJac7 = $cse2 * gENCLS.vq.$pDERNLSJac7.dummyVarNLSJac7 + $cse1 * gENCLS.vd.$pDERNLSJac7.dummyVarNLSJac7 - pwLine1.vr.re.SeedNLSJac7
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_463(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,463};
  jacobian->resultVars[6] /* $res_NLSJac7_7.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = (data->localData[0]->realVars[27] /* $cse2 variable */) * (jacobian->tmpVars[15] /* gENCLS.vq.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[26] /* $cse1 variable */) * (jacobian->tmpVars[16] /* gENCLS.vd.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */) - jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac7 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 464
type: SIMPLE_ASSIGN
$res_NLSJac7_8.$pDERNLSJac7.dummyVarNLSJac7 = $cse1 * gENCLS.vq.$pDERNLSJac7.dummyVarNLSJac7 + (-$cse2) * gENCLS.vd.$pDERNLSJac7.dummyVarNLSJac7 - pwLine1.vr.im.SeedNLSJac7
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_464(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,464};
  jacobian->resultVars[7] /* $res_NLSJac7_8.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = (data->localData[0]->realVars[26] /* $cse1 variable */) * (jacobian->tmpVars[15] /* gENCLS.vq.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */) + ((-data->localData[0]->realVars[27] /* $cse2 variable */)) * (jacobian->tmpVars[16] /* gENCLS.vd.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */) - jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac7 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 465
type: SIMPLE_ASSIGN
$res_NLSJac7_9.$pDERNLSJac7.dummyVarNLSJac7 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.ir.im.$pDERNLSJac7.dummyVarNLSJac7 else pwLine1.vr.im.SeedNLSJac7 - pwLine3.vr.im.SeedNLSJac7 - (pwLine4.Z.re * (pwLine4.ir.im.$pDERNLSJac7.dummyVarNLSJac7 + (-pwLine1.vr.re.SeedNLSJac7) * pwLine4.Y.im - pwLine1.vr.im.SeedNLSJac7 * pwLine4.Y.re) + pwLine4.Z.im * (pwLine4.ir.re.$pDERNLSJac7.dummyVarNLSJac7 + pwLine1.vr.im.SeedNLSJac7 * pwLine4.Y.im - pwLine1.vr.re.SeedNLSJac7 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_465(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,465};
  modelica_boolean tmp72;
  modelica_boolean tmp73;
  RELATIONHYSTERESIS(tmp72, data->localData[0]->timeValue, data->simulationInfo->realParameter[364] /* pwLine4.t1 PARAM */, 10, GreaterEq);
  RELATIONHYSTERESIS(tmp73, data->localData[0]->timeValue, data->simulationInfo->realParameter[365] /* pwLine4.t2 PARAM */, 11, Less);
  jacobian->resultVars[8] /* $res_NLSJac7_9.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp72 && tmp73)?jacobian->tmpVars[17] /* pwLine4.ir.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */:jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[21] /* pwLine3.vr.im.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[363] /* pwLine4.Z.re PARAM */) * (jacobian->tmpVars[17] /* pwLine4.ir.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[360] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[361] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[362] /* pwLine4.Z.im PARAM */) * (jacobian->tmpVars[18] /* pwLine4.ir.re.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[360] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[361] /* pwLine4.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 466
type: SIMPLE_ASSIGN
$res_NLSJac7_10.$pDERNLSJac7.dummyVarNLSJac7 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.ir.re.$pDERNLSJac7.dummyVarNLSJac7 else pwLine1.vr.re.SeedNLSJac7 - pwLine3.vr.re.SeedNLSJac7 - (pwLine4.Z.re * (pwLine4.ir.re.$pDERNLSJac7.dummyVarNLSJac7 + pwLine1.vr.im.SeedNLSJac7 * pwLine4.Y.im - pwLine1.vr.re.SeedNLSJac7 * pwLine4.Y.re) - pwLine4.Z.im * (pwLine4.ir.im.$pDERNLSJac7.dummyVarNLSJac7 + (-pwLine1.vr.re.SeedNLSJac7) * pwLine4.Y.im - pwLine1.vr.im.SeedNLSJac7 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_466(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,466};
  modelica_boolean tmp74;
  modelica_boolean tmp75;
  RELATIONHYSTERESIS(tmp74, data->localData[0]->timeValue, data->simulationInfo->realParameter[364] /* pwLine4.t1 PARAM */, 10, GreaterEq);
  RELATIONHYSTERESIS(tmp75, data->localData[0]->timeValue, data->simulationInfo->realParameter[365] /* pwLine4.t2 PARAM */, 11, Less);
  jacobian->resultVars[9] /* $res_NLSJac7_10.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp74 && tmp75)?jacobian->tmpVars[18] /* pwLine4.ir.re.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */:jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[363] /* pwLine4.Z.re PARAM */) * (jacobian->tmpVars[18] /* pwLine4.ir.re.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[360] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[361] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[362] /* pwLine4.Z.im PARAM */) * (jacobian->tmpVars[17] /* pwLine4.ir.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[360] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[361] /* pwLine4.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 467
type: SIMPLE_ASSIGN
$res_NLSJac7_11.$pDERNLSJac7.dummyVarNLSJac7 = if time < pwFault.t1 then pwFault.p.ir.$pDERNLSJac7.dummyVarNLSJac7 else if time < pwFault.t2 and pwFault.ground then pwLine3.vr.im.SeedNLSJac7 else if time < pwFault.t2 then pwFault.p.ir.$pDERNLSJac7.dummyVarNLSJac7 - (pwFault.R * pwLine3.vr.re.SeedNLSJac7 + pwFault.X * pwLine3.vr.im.SeedNLSJac7) * (pwFault.R ^ 2.0 + pwFault.X ^ 2.0) / (pwFault.R ^ 2.0 + pwFault.X ^ 2.0) ^ 2.0 else pwFault.p.ir.$pDERNLSJac7.dummyVarNLSJac7
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_467(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,467};
  modelica_boolean tmp76;
  modelica_boolean tmp77;
  modelica_boolean tmp78;
  modelica_real tmp79;
  modelica_real tmp80;
  modelica_real tmp81;
  modelica_real tmp82;
  modelica_real tmp83;
  modelica_boolean tmp84;
  modelica_real tmp85;
  modelica_boolean tmp86;
  modelica_real tmp87;
  modelica_boolean tmp88;
  modelica_real tmp89;
  RELATIONHYSTERESIS(tmp76, data->localData[0]->timeValue, data->simulationInfo->realParameter[320] /* pwFault.t1 PARAM */, 8, Less);
  tmp88 = (modelica_boolean)tmp76;
  if(tmp88)
  {
    tmp89 = jacobian->tmpVars[20] /* pwFault.p.ir.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp77, data->localData[0]->timeValue, data->simulationInfo->realParameter[321] /* pwFault.t2 PARAM */, 9, Less);
    tmp86 = (modelica_boolean)(tmp77 && data->simulationInfo->booleanParameter[66] /* pwFault.ground PARAM */);
    if(tmp86)
    {
      tmp87 = jacobian->seedVars[21] /* pwLine3.vr.im.SeedNLSJac7 SEED_VAR */;
    }
    else
    {
      RELATIONHYSTERESIS(tmp78, data->localData[0]->timeValue, data->simulationInfo->realParameter[321] /* pwFault.t2 PARAM */, 9, Less);
      tmp84 = (modelica_boolean)tmp78;
      if(tmp84)
      {
        tmp79 = data->simulationInfo->realParameter[318] /* pwFault.R PARAM */;
        tmp80 = data->simulationInfo->realParameter[319] /* pwFault.X PARAM */;
        tmp81 = data->simulationInfo->realParameter[318] /* pwFault.R PARAM */;
        tmp82 = data->simulationInfo->realParameter[319] /* pwFault.X PARAM */;
        tmp83 = (tmp81 * tmp81) + (tmp82 * tmp82);
        tmp85 = jacobian->tmpVars[20] /* pwFault.p.ir.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ - (DIVISION(((data->simulationInfo->realParameter[318] /* pwFault.R PARAM */) * (jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac7 SEED_VAR */) + (data->simulationInfo->realParameter[319] /* pwFault.X PARAM */) * (jacobian->seedVars[21] /* pwLine3.vr.im.SeedNLSJac7 SEED_VAR */)) * ((tmp79 * tmp79) + (tmp80 * tmp80)),(tmp83 * tmp83),"(pwFault.R ^ 2.0 + pwFault.X ^ 2.0) ^ 2.0"));
      }
      else
      {
        tmp85 = jacobian->tmpVars[20] /* pwFault.p.ir.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */;
      }
      tmp87 = tmp85;
    }
    tmp89 = tmp87;
  }
  jacobian->resultVars[10] /* $res_NLSJac7_11.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = tmp89;
  TRACE_POP
}

/*
equation index: 468
type: SIMPLE_ASSIGN
$res_NLSJac7_12.$pDERNLSJac7.dummyVarNLSJac7 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.ir.im.SeedNLSJac7 else pwLine3.vr.im.SeedNLSJac7 - pwLine1.vs.im.SeedNLSJac7 - (pwLine3.Z.re * (pwLine3.ir.im.SeedNLSJac7 + (-pwLine3.vr.re.SeedNLSJac7) * pwLine3.Y.im - pwLine3.vr.im.SeedNLSJac7 * pwLine3.Y.re) + pwLine3.Z.im * (pwLine3.ir.re.SeedNLSJac7 + pwLine3.vr.im.SeedNLSJac7 * pwLine3.Y.im - pwLine3.vr.re.SeedNLSJac7 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_468(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,468};
  modelica_boolean tmp90;
  modelica_boolean tmp91;
  RELATIONHYSTERESIS(tmp90, data->localData[0]->timeValue, data->simulationInfo->realParameter[353] /* pwLine3.t1 PARAM */, 6, GreaterEq);
  RELATIONHYSTERESIS(tmp91, data->localData[0]->timeValue, data->simulationInfo->realParameter[354] /* pwLine3.t2 PARAM */, 7, Less);
  jacobian->resultVars[11] /* $res_NLSJac7_12.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp90 && tmp91)?jacobian->seedVars[7] /* pwLine3.ir.im.SeedNLSJac7 SEED_VAR */:jacobian->seedVars[21] /* pwLine3.vr.im.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[352] /* pwLine3.Z.re PARAM */) * (jacobian->seedVars[7] /* pwLine3.ir.im.SeedNLSJac7 SEED_VAR */ + ((-jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[349] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine3.vr.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[350] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[351] /* pwLine3.Z.im PARAM */) * (jacobian->seedVars[4] /* pwLine3.ir.re.SeedNLSJac7 SEED_VAR */ + (jacobian->seedVars[21] /* pwLine3.vr.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[349] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[350] /* pwLine3.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 469
type: SIMPLE_ASSIGN
$res_NLSJac7_13.$pDERNLSJac7.dummyVarNLSJac7 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.ir.im.$pDERNLSJac7.dummyVarNLSJac7 else pwLine1.vs.im.SeedNLSJac7 - pwLine.vs.im.$pDERNLSJac7.dummyVarNLSJac7 - (pwLine.Z.re * (pwLine.ir.im.$pDERNLSJac7.dummyVarNLSJac7 + (-pwLine1.vs.re.SeedNLSJac7) * pwLine.Y.im - pwLine1.vs.im.SeedNLSJac7 * pwLine.Y.re) + pwLine.Z.im * (pwLine.ir.re.SeedNLSJac7 + pwLine1.vs.im.SeedNLSJac7 * pwLine.Y.im - pwLine1.vs.re.SeedNLSJac7 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_469(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,469};
  modelica_boolean tmp92;
  modelica_boolean tmp93;
  RELATIONHYSTERESIS(tmp92, data->localData[0]->timeValue, data->simulationInfo->realParameter[331] /* pwLine.t1 PARAM */, 1, GreaterEq);
  RELATIONHYSTERESIS(tmp93, data->localData[0]->timeValue, data->simulationInfo->realParameter[332] /* pwLine.t2 PARAM */, 2, Less);
  jacobian->resultVars[12] /* $res_NLSJac7_13.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp92 && tmp93)?jacobian->tmpVars[22] /* pwLine.ir.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */:jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac7 SEED_VAR */ - jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[330] /* pwLine.Z.re PARAM */) * (jacobian->tmpVars[22] /* pwLine.ir.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[327] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[328] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[329] /* pwLine.Z.im PARAM */) * (jacobian->seedVars[3] /* pwLine.ir.re.SeedNLSJac7 SEED_VAR */ + (jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[327] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[328] /* pwLine.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 470
type: SIMPLE_ASSIGN
$res_NLSJac7_14.$pDERNLSJac7.dummyVarNLSJac7 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.is.re.$pDERNLSJac7.dummyVarNLSJac7 else pwLine.vs.re.$pDERNLSJac7.dummyVarNLSJac7 - pwLine1.vs.re.SeedNLSJac7 - (pwLine.Z.re * (pwLine.is.re.$pDERNLSJac7.dummyVarNLSJac7 + pwLine.vs.im.$pDERNLSJac7.dummyVarNLSJac7 * pwLine.Y.im - pwLine.vs.re.$pDERNLSJac7.dummyVarNLSJac7 * pwLine.Y.re) - pwLine.Z.im * (pwLine.is.im.$pDERNLSJac7.dummyVarNLSJac7 + (-pwLine.vs.re.$pDERNLSJac7.dummyVarNLSJac7) * pwLine.Y.im - pwLine.vs.im.$pDERNLSJac7.dummyVarNLSJac7 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_470(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,470};
  modelica_boolean tmp94;
  modelica_boolean tmp95;
  RELATIONHYSTERESIS(tmp94, data->localData[0]->timeValue, data->simulationInfo->realParameter[331] /* pwLine.t1 PARAM */, 1, GreaterEq);
  RELATIONHYSTERESIS(tmp95, data->localData[0]->timeValue, data->simulationInfo->realParameter[332] /* pwLine.t2 PARAM */, 2, Less);
  jacobian->resultVars[13] /* $res_NLSJac7_14.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp94 && tmp95)?jacobian->tmpVars[7] /* pwLine.is.re.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[330] /* pwLine.Z.re PARAM */) * (jacobian->tmpVars[7] /* pwLine.is.re.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ + (jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[327] /* pwLine.Y.im PARAM */) - ((jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[328] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[329] /* pwLine.Z.im PARAM */) * (jacobian->tmpVars[6] /* pwLine.is.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ + ((-jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[327] /* pwLine.Y.im PARAM */) - ((jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[328] /* pwLine.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 471
type: SIMPLE_ASSIGN
$res_NLSJac7_15.$pDERNLSJac7.dummyVarNLSJac7 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.is.im.$pDERNLSJac7.dummyVarNLSJac7 else pwLine.vs.im.$pDERNLSJac7.dummyVarNLSJac7 - pwLine1.vs.im.SeedNLSJac7 - (pwLine.Z.re * (pwLine.is.im.$pDERNLSJac7.dummyVarNLSJac7 + (-pwLine.vs.re.$pDERNLSJac7.dummyVarNLSJac7) * pwLine.Y.im - pwLine.vs.im.$pDERNLSJac7.dummyVarNLSJac7 * pwLine.Y.re) + pwLine.Z.im * (pwLine.is.re.$pDERNLSJac7.dummyVarNLSJac7 + pwLine.vs.im.$pDERNLSJac7.dummyVarNLSJac7 * pwLine.Y.im - pwLine.vs.re.$pDERNLSJac7.dummyVarNLSJac7 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_471(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,471};
  modelica_boolean tmp96;
  modelica_boolean tmp97;
  RELATIONHYSTERESIS(tmp96, data->localData[0]->timeValue, data->simulationInfo->realParameter[331] /* pwLine.t1 PARAM */, 1, GreaterEq);
  RELATIONHYSTERESIS(tmp97, data->localData[0]->timeValue, data->simulationInfo->realParameter[332] /* pwLine.t2 PARAM */, 2, Less);
  jacobian->resultVars[14] /* $res_NLSJac7_15.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp96 && tmp97)?jacobian->tmpVars[6] /* pwLine.is.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[330] /* pwLine.Z.re PARAM */) * (jacobian->tmpVars[6] /* pwLine.is.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ + ((-jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[327] /* pwLine.Y.im PARAM */) - ((jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[328] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[329] /* pwLine.Z.im PARAM */) * (jacobian->tmpVars[7] /* pwLine.is.re.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ + (jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[327] /* pwLine.Y.im PARAM */) - ((jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[328] /* pwLine.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 472
type: SIMPLE_ASSIGN
$res_NLSJac7_16.$pDERNLSJac7.dummyVarNLSJac7 = pwLine1.vs.im * constantLoad.p.ir.$pDERNLSJac7.dummyVarNLSJac7 + pwLine1.vs.im.SeedNLSJac7 * constantLoad.p.ir + (-pwLine1.vs.re.SeedNLSJac7) * constantLoad.p.ii - constantLoad.Q.$pDERNLSJac7.dummyVarNLSJac7 - pwLine1.vs.re * constantLoad.p.ii.SeedNLSJac7
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_472(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,472};
  jacobian->resultVars[15] /* $res_NLSJac7_16.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = (data->localData[0]->realVars[142] /* pwLine1.vs.im variable */) * (jacobian->tmpVars[21] /* constantLoad.p.ir.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac7 SEED_VAR */) * (data->localData[0]->realVars[54] /* constantLoad.p.ir variable */) + ((-jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac7 SEED_VAR */)) * (data->localData[0]->realVars[53] /* constantLoad.p.ii variable */) - jacobian->tmpVars[3] /* constantLoad.Q.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ - ((data->localData[0]->realVars[143] /* pwLine1.vs.re variable */) * (jacobian->seedVars[1] /* constantLoad.p.ii.SeedNLSJac7 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 473
type: SIMPLE_ASSIGN
$res_NLSJac7_17.$pDERNLSJac7.dummyVarNLSJac7 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.ir.re.SeedNLSJac7 else pwLine1.vs.re.SeedNLSJac7 - pwLine.vs.re.$pDERNLSJac7.dummyVarNLSJac7 - (pwLine.Z.re * (pwLine.ir.re.SeedNLSJac7 + pwLine1.vs.im.SeedNLSJac7 * pwLine.Y.im - pwLine1.vs.re.SeedNLSJac7 * pwLine.Y.re) - pwLine.Z.im * (pwLine.ir.im.$pDERNLSJac7.dummyVarNLSJac7 + (-pwLine1.vs.re.SeedNLSJac7) * pwLine.Y.im - pwLine1.vs.im.SeedNLSJac7 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_473(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,473};
  modelica_boolean tmp98;
  modelica_boolean tmp99;
  RELATIONHYSTERESIS(tmp98, data->localData[0]->timeValue, data->simulationInfo->realParameter[331] /* pwLine.t1 PARAM */, 1, GreaterEq);
  RELATIONHYSTERESIS(tmp99, data->localData[0]->timeValue, data->simulationInfo->realParameter[332] /* pwLine.t2 PARAM */, 2, Less);
  jacobian->resultVars[16] /* $res_NLSJac7_17.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp98 && tmp99)?jacobian->seedVars[3] /* pwLine.ir.re.SeedNLSJac7 SEED_VAR */:jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac7 SEED_VAR */ - jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[330] /* pwLine.Z.re PARAM */) * (jacobian->seedVars[3] /* pwLine.ir.re.SeedNLSJac7 SEED_VAR */ + (jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[327] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[328] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[329] /* pwLine.Z.im PARAM */) * (jacobian->tmpVars[22] /* pwLine.ir.im.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[327] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[328] /* pwLine.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 474
type: SIMPLE_ASSIGN
$res_NLSJac7_18.$pDERNLSJac7.dummyVarNLSJac7 = pwLine1.vs.im * constantLoad.p.ii.SeedNLSJac7 + pwLine1.vs.im.SeedNLSJac7 * constantLoad.p.ii + pwLine1.vs.re * constantLoad.p.ir.$pDERNLSJac7.dummyVarNLSJac7 + pwLine1.vs.re.SeedNLSJac7 * constantLoad.p.ir - constantLoad.P.$pDERNLSJac7.dummyVarNLSJac7
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_474(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,474};
  jacobian->resultVars[17] /* $res_NLSJac7_18.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = (data->localData[0]->realVars[142] /* pwLine1.vs.im variable */) * (jacobian->seedVars[1] /* constantLoad.p.ii.SeedNLSJac7 SEED_VAR */) + (jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac7 SEED_VAR */) * (data->localData[0]->realVars[53] /* constantLoad.p.ii variable */) + (data->localData[0]->realVars[143] /* pwLine1.vs.re variable */) * (jacobian->tmpVars[21] /* constantLoad.p.ir.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac7 SEED_VAR */) * (data->localData[0]->realVars[54] /* constantLoad.p.ir variable */) - jacobian->tmpVars[4] /* constantLoad.P.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 475
type: SIMPLE_ASSIGN
$res_NLSJac7_19.$pDERNLSJac7.dummyVarNLSJac7 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.is.re.SeedNLSJac7 else pwLine1.vs.re.SeedNLSJac7 - pwLine1.vr.re.SeedNLSJac7 - (pwLine1.Z.re * (pwLine1.is.re.SeedNLSJac7 + pwLine1.vs.im.SeedNLSJac7 * pwLine1.Y.im - pwLine1.vs.re.SeedNLSJac7 * pwLine1.Y.re) - pwLine1.Z.im * (pwLine1.is.im.SeedNLSJac7 + (-pwLine1.vs.re.SeedNLSJac7) * pwLine1.Y.im - pwLine1.vs.im.SeedNLSJac7 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_475(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,475};
  modelica_boolean tmp100;
  modelica_boolean tmp101;
  RELATIONHYSTERESIS(tmp100, data->localData[0]->timeValue, data->simulationInfo->realParameter[342] /* pwLine1.t1 PARAM */, 12, GreaterEq);
  RELATIONHYSTERESIS(tmp101, data->localData[0]->timeValue, data->simulationInfo->realParameter[343] /* pwLine1.t2 PARAM */, 13, Less);
  jacobian->resultVars[18] /* $res_NLSJac7_19.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp100 && tmp101)?jacobian->seedVars[2] /* pwLine1.is.re.SeedNLSJac7 SEED_VAR */:jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[341] /* pwLine1.Z.re PARAM */) * (jacobian->seedVars[2] /* pwLine1.is.re.SeedNLSJac7 SEED_VAR */ + (jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[338] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[339] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[340] /* pwLine1.Z.im PARAM */) * (jacobian->seedVars[0] /* pwLine1.is.im.SeedNLSJac7 SEED_VAR */ + ((-jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[338] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[339] /* pwLine1.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 476
type: SIMPLE_ASSIGN
$res_NLSJac7_20.$pDERNLSJac7.dummyVarNLSJac7 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.is.im.SeedNLSJac7 else pwLine1.vs.im.SeedNLSJac7 - pwLine1.vr.im.SeedNLSJac7 - (pwLine1.Z.re * (pwLine1.is.im.SeedNLSJac7 + (-pwLine1.vs.re.SeedNLSJac7) * pwLine1.Y.im - pwLine1.vs.im.SeedNLSJac7 * pwLine1.Y.re) + pwLine1.Z.im * (pwLine1.is.re.SeedNLSJac7 + pwLine1.vs.im.SeedNLSJac7 * pwLine1.Y.im - pwLine1.vs.re.SeedNLSJac7 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_476(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,476};
  modelica_boolean tmp102;
  modelica_boolean tmp103;
  RELATIONHYSTERESIS(tmp102, data->localData[0]->timeValue, data->simulationInfo->realParameter[342] /* pwLine1.t1 PARAM */, 12, GreaterEq);
  RELATIONHYSTERESIS(tmp103, data->localData[0]->timeValue, data->simulationInfo->realParameter[343] /* pwLine1.t2 PARAM */, 13, Less);
  jacobian->resultVars[19] /* $res_NLSJac7_20.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp102 && tmp103)?jacobian->seedVars[0] /* pwLine1.is.im.SeedNLSJac7 SEED_VAR */:jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[341] /* pwLine1.Z.re PARAM */) * (jacobian->seedVars[0] /* pwLine1.is.im.SeedNLSJac7 SEED_VAR */ + ((-jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[338] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[339] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[340] /* pwLine1.Z.im PARAM */) * (jacobian->seedVars[2] /* pwLine1.is.re.SeedNLSJac7 SEED_VAR */ + (jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[338] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[339] /* pwLine1.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 477
type: SIMPLE_ASSIGN
$res_NLSJac7_21.$pDERNLSJac7.dummyVarNLSJac7 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.ir.re.SeedNLSJac7 else pwLine1.vr.re.SeedNLSJac7 - pwLine1.vs.re.SeedNLSJac7 - (pwLine1.Z.re * (pwLine1.ir.re.SeedNLSJac7 + pwLine1.vr.im.SeedNLSJac7 * pwLine1.Y.im - pwLine1.vr.re.SeedNLSJac7 * pwLine1.Y.re) - pwLine1.Z.im * (pwLine1.ir.im.SeedNLSJac7 + (-pwLine1.vr.re.SeedNLSJac7) * pwLine1.Y.im - pwLine1.vr.im.SeedNLSJac7 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_477(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,477};
  modelica_boolean tmp104;
  modelica_boolean tmp105;
  RELATIONHYSTERESIS(tmp104, data->localData[0]->timeValue, data->simulationInfo->realParameter[342] /* pwLine1.t1 PARAM */, 12, GreaterEq);
  RELATIONHYSTERESIS(tmp105, data->localData[0]->timeValue, data->simulationInfo->realParameter[343] /* pwLine1.t2 PARAM */, 13, Less);
  jacobian->resultVars[20] /* $res_NLSJac7_21.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp104 && tmp105)?jacobian->seedVars[10] /* pwLine1.ir.re.SeedNLSJac7 SEED_VAR */:jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[341] /* pwLine1.Z.re PARAM */) * (jacobian->seedVars[10] /* pwLine1.ir.re.SeedNLSJac7 SEED_VAR */ + (jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[338] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[339] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[340] /* pwLine1.Z.im PARAM */) * (jacobian->seedVars[11] /* pwLine1.ir.im.SeedNLSJac7 SEED_VAR */ + ((-jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[338] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[339] /* pwLine1.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 478
type: SIMPLE_ASSIGN
$res_NLSJac7_22.$pDERNLSJac7.dummyVarNLSJac7 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.ir.im.SeedNLSJac7 else pwLine1.vr.im.SeedNLSJac7 - pwLine1.vs.im.SeedNLSJac7 - (pwLine1.Z.re * (pwLine1.ir.im.SeedNLSJac7 + (-pwLine1.vr.re.SeedNLSJac7) * pwLine1.Y.im - pwLine1.vr.im.SeedNLSJac7 * pwLine1.Y.re) + pwLine1.Z.im * (pwLine1.ir.re.SeedNLSJac7 + pwLine1.vr.im.SeedNLSJac7 * pwLine1.Y.im - pwLine1.vr.re.SeedNLSJac7 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_478(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,478};
  modelica_boolean tmp106;
  modelica_boolean tmp107;
  RELATIONHYSTERESIS(tmp106, data->localData[0]->timeValue, data->simulationInfo->realParameter[342] /* pwLine1.t1 PARAM */, 12, GreaterEq);
  RELATIONHYSTERESIS(tmp107, data->localData[0]->timeValue, data->simulationInfo->realParameter[343] /* pwLine1.t2 PARAM */, 13, Less);
  jacobian->resultVars[21] /* $res_NLSJac7_22.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = ((tmp106 && tmp107)?jacobian->seedVars[11] /* pwLine1.ir.im.SeedNLSJac7 SEED_VAR */:jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac7 SEED_VAR */ - jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac7 SEED_VAR */ - ((data->simulationInfo->realParameter[341] /* pwLine1.Z.re PARAM */) * (jacobian->seedVars[11] /* pwLine1.ir.im.SeedNLSJac7 SEED_VAR */ + ((-jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac7 SEED_VAR */)) * (data->simulationInfo->realParameter[338] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[339] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[340] /* pwLine1.Z.im PARAM */) * (jacobian->seedVars[10] /* pwLine1.ir.re.SeedNLSJac7 SEED_VAR */ + (jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[338] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac7 SEED_VAR */) * (data->simulationInfo->realParameter[339] /* pwLine1.Y.re PARAM */)))));
  TRACE_POP
}

OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_functionJacNLSJac7_constantEqns(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_INDEX_JAC_NLSJac7;
  
  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_functionJacNLSJac7_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_INDEX_JAC_NLSJac7;
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_434(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_435(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_436(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_437(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_438(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_439(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_440(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_441(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_442(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_443(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_444(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_445(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_446(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_447(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_448(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_449(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_450(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_451(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_452(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_453(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_454(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_455(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_456(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_457(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_458(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_459(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_460(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_461(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_462(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_463(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_464(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_465(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_466(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_467(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_468(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_469(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_470(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_471(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_472(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_473(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_474(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_475(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_476(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_477(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_478(data, threadData, jacobian, parentJacobian);
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_functionJacF_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_functionJacD_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_functionJacC_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_functionJacB_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
/* constant equations */
/* dynamic equations */

OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_functionJacA_constantEqns(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_INDEX_JAC_A;
  
  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_functionJacA_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_INDEX_JAC_A;
  TRACE_POP
  return 0;
}

OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_initialAnalyticJacobianNLSJac7(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+22] = {0,4,4,4,4,3,3,3,3,4,4,4,4,4,4,7,7,4,4,11,11,8,8};
  const int rowIndex[112] = {12,16,18,19,12,15,16,17,15,17,18,19,12,15,16,17,2,10,11,4,5,10,3,4,5,2,3,11,0,1,15,17,0,1,12,16,8,9,20,21,8,9,20,21,6,7,8,9,6,7,8,9,4,7,8,9,19,20,21,5,6,8,9,18,20,21,12,13,14,16,12,13,14,16,0,1,2,12,13,15,16,17,18,19,20,0,1,11,12,14,15,16,17,18,19,21,0,2,3,4,5,9,10,11,1,2,3,4,5,8,10,11};
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
  jacobian->sparsePattern->colorCols[15] = 5;
  jacobian->sparsePattern->colorCols[17] = 5;
  jacobian->sparsePattern->colorCols[14] = 6;
  jacobian->sparsePattern->colorCols[16] = 6;
  jacobian->sparsePattern->colorCols[3] = 7;
  jacobian->sparsePattern->colorCols[13] = 7;
  jacobian->sparsePattern->colorCols[2] = 8;
  jacobian->sparsePattern->colorCols[9] = 8;
  jacobian->sparsePattern->colorCols[12] = 8;
  jacobian->sparsePattern->colorCols[1] = 9;
  jacobian->sparsePattern->colorCols[5] = 9;
  jacobian->sparsePattern->colorCols[7] = 9;
  jacobian->sparsePattern->colorCols[11] = 9;
  jacobian->sparsePattern->colorCols[0] = 10;
  jacobian->sparsePattern->colorCols[4] = 10;
  jacobian->sparsePattern->colorCols[6] = 10;
  jacobian->sparsePattern->colorCols[8] = 10;
  jacobian->sparsePattern->colorCols[10] = 10;
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_initialAnalyticJacobianF(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_initialAnalyticJacobianD(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_initialAnalyticJacobianC(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_initialAnalyticJacobianB(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_initialAnalyticJacobianA(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+13] = {0,5,5,6,5,5,10,10,10,10,10,10,10,2};
  const int rowIndex[98] = {0,1,3,4,8,0,1,3,4,8,0,1,2,3,4,8,0,1,3,4,8,0,1,3,4,8,0,1,2,3,4,7,8,9,10,12,0,1,2,3,4,7,8,9,10,12,0,1,2,3,4,7,8,9,10,12,0,1,2,3,4,7,8,9,10,12,0,1,2,3,4,7,8,9,10,12,0,1,2,3,4,7,8,9,10,12,0,1,2,3,4,7,8,9,10,12,11,12};
  int i = 0;
  
  jacobian->sizeCols = 13;
  jacobian->sizeRows = 13;
  jacobian->sizeTmpVars = 0;
  jacobian->seedVars = (modelica_real*) calloc(13,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(13,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(0,sizeof(modelica_real));
  jacobian->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  jacobian->sparsePattern->leadindex = (unsigned int*) malloc((13+1)*sizeof(int));
  jacobian->sparsePattern->index = (unsigned int*) malloc(98*sizeof(int));
  jacobian->sparsePattern->numberOfNoneZeros = 98;
  jacobian->sparsePattern->colorCols = (unsigned int*) malloc(13*sizeof(int));
  jacobian->sparsePattern->maxColors = 12;
  jacobian->constantEqns = NULL;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern->leadindex, colPtrIndex, (13+1)*sizeof(int));
  
  for(i=2;i<13+1;++i)
    jacobian->sparsePattern->leadindex[i] += jacobian->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern->index, rowIndex, 98*sizeof(int));
  
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


