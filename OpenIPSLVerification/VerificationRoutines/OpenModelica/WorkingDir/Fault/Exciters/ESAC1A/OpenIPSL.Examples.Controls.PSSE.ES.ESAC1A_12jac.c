/* Jacobians 6 */
#include "OpenIPSL.Examples.Controls.PSSE.ES.ESAC1A_model.h"
#include "OpenIPSL.Examples.Controls.PSSE.ES.ESAC1A_12jac.h"
/* constant equations */
/* dynamic equations */

/*
equation index: 558
type: SIMPLE_ASSIGN
constantLoad.v.$pDERNLSJac4.dummyVarNLSJac4 = (pwLine3.vs.re * pwLine3.vs.re.SeedNLSJac4 + pwLine3.vs.im * pwLine3.vs.im.SeedNLSJac4) / sqrt(pwLine3.vs.re ^ 2.0 + pwLine3.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_558(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,558};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[136] /* pwLine3.vs.re variable */;
  tmp1 = data->localData[0]->realVars[135] /* pwLine3.vs.im variable */;
  jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = DIVISION((data->localData[0]->realVars[136] /* pwLine3.vs.re variable */) * (jacobian->seedVars[19] /* pwLine3.vs.re.SeedNLSJac4 SEED_VAR */) + (data->localData[0]->realVars[135] /* pwLine3.vs.im variable */) * (jacobian->seedVars[18] /* pwLine3.vs.im.SeedNLSJac4 SEED_VAR */),sqrt((tmp0 * tmp0) + (tmp1 * tmp1)),"sqrt(pwLine3.vs.re ^ 2.0 + pwLine3.vs.im ^ 2.0)");
  TRACE_POP
}

/*
equation index: 559
type: SIMPLE_ASSIGN
constantLoad.kP.$pDERNLSJac4.dummyVarNLSJac4 = if constantLoad.v < constantLoad.PQBRAK then constantLoad.a1 * (-sin(constantLoad.v * constantLoad.wp)) * constantLoad.v.$pDERNLSJac4.dummyVarNLSJac4 * constantLoad.wp + constantLoad.b1 * cos(constantLoad.v * constantLoad.wp) * constantLoad.v.$pDERNLSJac4.dummyVarNLSJac4 * constantLoad.wp else 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_559(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,559};
  modelica_boolean tmp2;
  RELATIONHYSTERESIS(tmp2, data->localData[0]->realVars[55] /* constantLoad.v variable */, data->simulationInfo->realParameter[41] /* constantLoad.PQBRAK PARAM */, 2, Less);
  jacobian->tmpVars[1] /* constantLoad.kP.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = (tmp2?(data->simulationInfo->realParameter[61] /* constantLoad.a1 PARAM */) * (((-sin((data->localData[0]->realVars[55] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[81] /* constantLoad.wp PARAM */)))) * ((jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[81] /* constantLoad.wp PARAM */))) + (data->simulationInfo->realParameter[67] /* constantLoad.b1 PARAM */) * ((cos((data->localData[0]->realVars[55] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[81] /* constantLoad.wp PARAM */))) * ((jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[81] /* constantLoad.wp PARAM */))):0.0);
  TRACE_POP
}

/*
equation index: 560
type: SIMPLE_ASSIGN
constantLoad.kI.$pDERNLSJac4.dummyVarNLSJac4 = if constantLoad.v < 0.5 then constantLoad.a2 * constantLoad.b2 * (constantLoad.v ^ (-1.0 + constantLoad.b2) * (-exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2)) * constantLoad.a2 * constantLoad.b2 * constantLoad.v ^ (constantLoad.b2 - 1.0) * constantLoad.v.$pDERNLSJac4.dummyVarNLSJac4 + (if noEvent(constantLoad.v == 0.0) then 0.0 else constantLoad.v ^ (-1.0 + constantLoad.b2 - 1.0) * (-1.0 + constantLoad.b2) * constantLoad.v.$pDERNLSJac4.dummyVarNLSJac4) * exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2)) else 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_560(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,560};
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
  RELATIONHYSTERESIS(tmp3, data->localData[0]->realVars[55] /* constantLoad.v variable */, 0.5, 3, Less);
  tmp42 = (modelica_boolean)tmp3;
  if(tmp42)
  {
    tmp4 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = -1.0 + data->simulationInfo->realParameter[68] /* constantLoad.b2 PARAM */;
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
    tmp12 = data->simulationInfo->realParameter[68] /* constantLoad.b2 PARAM */;
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
    tmp19 = data->simulationInfo->realParameter[68] /* constantLoad.b2 PARAM */ - 1.0;
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
      tmp27 = -1.0 + data->simulationInfo->realParameter[68] /* constantLoad.b2 PARAM */ - 1.0;
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
      tmp34 = (tmp28) * ((-1.0 + data->simulationInfo->realParameter[68] /* constantLoad.b2 PARAM */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */));
    }
    tmp35 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp36 = data->simulationInfo->realParameter[68] /* constantLoad.b2 PARAM */;
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
    tmp43 = (data->simulationInfo->realParameter[62] /* constantLoad.a2 PARAM */) * ((data->simulationInfo->realParameter[68] /* constantLoad.b2 PARAM */) * ((tmp6) * (((-exp(((-data->simulationInfo->realParameter[62] /* constantLoad.a2 PARAM */)) * (tmp13)))) * ((data->simulationInfo->realParameter[62] /* constantLoad.a2 PARAM */) * (((data->simulationInfo->realParameter[68] /* constantLoad.b2 PARAM */) * (tmp20)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */)))) + (tmp34) * (exp(((-data->simulationInfo->realParameter[62] /* constantLoad.a2 PARAM */)) * (tmp37)))));
  }
  else
  {
    tmp43 = 0.0;
  }
  jacobian->tmpVars[2] /* constantLoad.kI.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = tmp43;
  TRACE_POP
}

/*
equation index: 561
type: SIMPLE_ASSIGN
constantLoad.Q.$pDERNLSJac4.dummyVarNLSJac4 = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.S_I.im * (constantLoad.kI * constantLoad.v.$pDERNLSJac4.dummyVarNLSJac4 + constantLoad.kI.$pDERNLSJac4.dummyVarNLSJac4 * constantLoad.v) + constantLoad.S_Y.im * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac4.dummyVarNLSJac4 + constantLoad.kP.$pDERNLSJac4.dummyVarNLSJac4 * (constantLoad.S_P.im + constantLoad.d_Q) else constantLoad.S_I.im * (constantLoad.kI * constantLoad.v.$pDERNLSJac4.dummyVarNLSJac4 + constantLoad.kI.$pDERNLSJac4.dummyVarNLSJac4 * constantLoad.v) + constantLoad.S_Y.im * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac4.dummyVarNLSJac4 + constantLoad.kP.$pDERNLSJac4.dummyVarNLSJac4 * constantLoad.S_P.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_561(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,561};
  modelica_boolean tmp44;
  modelica_boolean tmp45;
  RELATIONHYSTERESIS(tmp44, data->localData[0]->timeValue, data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp45, data->localData[0]->timeValue, data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[71] /* constantLoad.d_t PARAM */, 1, LessEq);
  jacobian->tmpVars[3] /* constantLoad.Q.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = ((tmp44 && tmp45)?(data->simulationInfo->realParameter[44] /* constantLoad.S_I.im PARAM */) * ((data->localData[0]->realVars[51] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[2] /* constantLoad.kI.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[48] /* constantLoad.S_Y.im PARAM */) * (((2.0) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[1] /* constantLoad.kP.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[46] /* constantLoad.S_P.im PARAM */ + data->simulationInfo->realParameter[70] /* constantLoad.d_Q PARAM */):(data->simulationInfo->realParameter[44] /* constantLoad.S_I.im PARAM */) * ((data->localData[0]->realVars[51] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[2] /* constantLoad.kI.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[48] /* constantLoad.S_Y.im PARAM */) * (((2.0) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[1] /* constantLoad.kP.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[46] /* constantLoad.S_P.im PARAM */));
  TRACE_POP
}

/*
equation index: 562
type: SIMPLE_ASSIGN
constantLoad.P.$pDERNLSJac4.dummyVarNLSJac4 = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.S_I.re * (constantLoad.kI * constantLoad.v.$pDERNLSJac4.dummyVarNLSJac4 + constantLoad.kI.$pDERNLSJac4.dummyVarNLSJac4 * constantLoad.v) + constantLoad.S_Y.re * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac4.dummyVarNLSJac4 + constantLoad.kP.$pDERNLSJac4.dummyVarNLSJac4 * (constantLoad.S_P.re + constantLoad.d_P) else constantLoad.S_I.re * (constantLoad.kI * constantLoad.v.$pDERNLSJac4.dummyVarNLSJac4 + constantLoad.kI.$pDERNLSJac4.dummyVarNLSJac4 * constantLoad.v) + constantLoad.S_Y.re * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac4.dummyVarNLSJac4 + constantLoad.kP.$pDERNLSJac4.dummyVarNLSJac4 * constantLoad.S_P.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_562(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,562};
  modelica_boolean tmp46;
  modelica_boolean tmp47;
  RELATIONHYSTERESIS(tmp46, data->localData[0]->timeValue, data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp47, data->localData[0]->timeValue, data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[71] /* constantLoad.d_t PARAM */, 1, LessEq);
  jacobian->tmpVars[4] /* constantLoad.P.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = ((tmp46 && tmp47)?(data->simulationInfo->realParameter[45] /* constantLoad.S_I.re PARAM */) * ((data->localData[0]->realVars[51] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[2] /* constantLoad.kI.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[49] /* constantLoad.S_Y.re PARAM */) * (((2.0) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[1] /* constantLoad.kP.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[47] /* constantLoad.S_P.re PARAM */ + data->simulationInfo->realParameter[69] /* constantLoad.d_P PARAM */):(data->simulationInfo->realParameter[45] /* constantLoad.S_I.re PARAM */) * ((data->localData[0]->realVars[51] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[2] /* constantLoad.kI.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[49] /* constantLoad.S_Y.re PARAM */) * (((2.0) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[1] /* constantLoad.kP.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[47] /* constantLoad.S_P.re PARAM */));
  TRACE_POP
}

/*
equation index: 563
type: SIMPLE_ASSIGN
gENROE.PSId.$pDERNLSJac4.dummyVarNLSJac4 = (-gENROE.Xppd) * gENROE.id.SeedNLSJac4
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_563(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,563};
  jacobian->tmpVars[5] /* gENROE.PSId.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[260] /* gENROE.Xppd PARAM */)) * (jacobian->seedVars[17] /* gENROE.id.SeedNLSJac4 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 564
type: SIMPLE_ASSIGN
pwLine.is.re.$pDERNLSJac4.dummyVarNLSJac4 = gENROE.CoB * ($cse6 * gENROE.id.SeedNLSJac4 + $cse7 * gENROE.iq.SeedNLSJac4)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_564(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,564};
  jacobian->tmpVars[6] /* pwLine.is.re.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[206] /* gENROE.CoB PARAM */) * ((data->localData[0]->realVars[30] /* $cse6 variable */) * (jacobian->seedVars[17] /* gENROE.id.SeedNLSJac4 SEED_VAR */) + (data->localData[0]->realVars[31] /* $cse7 variable */) * (jacobian->seedVars[16] /* gENROE.iq.SeedNLSJac4 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 565
type: SIMPLE_ASSIGN
pwLine.is.im.$pDERNLSJac4.dummyVarNLSJac4 = gENROE.CoB * ($cse6 * gENROE.iq.SeedNLSJac4 - $cse7 * gENROE.id.SeedNLSJac4)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_565(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,565};
  jacobian->tmpVars[7] /* pwLine.is.im.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[206] /* gENROE.CoB PARAM */) * ((data->localData[0]->realVars[30] /* $cse6 variable */) * (jacobian->seedVars[16] /* gENROE.iq.SeedNLSJac4 SEED_VAR */) - ((data->localData[0]->realVars[31] /* $cse7 variable */) * (jacobian->seedVars[17] /* gENROE.id.SeedNLSJac4 SEED_VAR */)));
  TRACE_POP
}

/*
equation index: 566
type: SIMPLE_ASSIGN
gENROE.uq.$pDERNLSJac4.dummyVarNLSJac4 = gENROE.PSId.$pDERNLSJac4.dummyVarNLSJac4 - gENROE.R_a * gENROE.iq.SeedNLSJac4
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_566(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,566};
  jacobian->tmpVars[8] /* gENROE.uq.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[5] /* gENROE.PSId.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[243] /* gENROE.R_a PARAM */) * (jacobian->seedVars[16] /* gENROE.iq.SeedNLSJac4 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 567
type: SIMPLE_ASSIGN
gENROE.PSIq.$pDERNLSJac4.dummyVarNLSJac4 = (-gENROE.Xppq) * gENROE.iq.SeedNLSJac4
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_567(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,567};
  jacobian->tmpVars[9] /* gENROE.PSIq.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[261] /* gENROE.Xppq PARAM */)) * (jacobian->seedVars[16] /* gENROE.iq.SeedNLSJac4 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 568
type: SIMPLE_ASSIGN
gENROE.ud.$pDERNLSJac4.dummyVarNLSJac4 = (-gENROE.PSIq.$pDERNLSJac4.dummyVarNLSJac4) - gENROE.R_a * gENROE.id.SeedNLSJac4
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_568(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,568};
  jacobian->tmpVars[10] /* gENROE.ud.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = (-jacobian->tmpVars[9] /* gENROE.PSIq.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) - ((data->simulationInfo->realParameter[243] /* gENROE.R_a PARAM */) * (jacobian->seedVars[17] /* gENROE.id.SeedNLSJac4 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 569
type: SIMPLE_ASSIGN
pwLine.vs.im.$pDERNLSJac4.dummyVarNLSJac4 = $cse6 * gENROE.uq.$pDERNLSJac4.dummyVarNLSJac4 - $cse7 * gENROE.ud.$pDERNLSJac4.dummyVarNLSJac4
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_569(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,569};
  jacobian->tmpVars[11] /* pwLine.vs.im.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[30] /* $cse6 variable */) * (jacobian->tmpVars[8] /* gENROE.uq.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) - ((data->localData[0]->realVars[31] /* $cse7 variable */) * (jacobian->tmpVars[10] /* gENROE.ud.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 570
type: SIMPLE_ASSIGN
pwLine.vs.re.$pDERNLSJac4.dummyVarNLSJac4 = $cse6 * gENROE.ud.$pDERNLSJac4.dummyVarNLSJac4 + $cse7 * gENROE.uq.$pDERNLSJac4.dummyVarNLSJac4
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_570(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,570};
  jacobian->tmpVars[12] /* pwLine.vs.re.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[30] /* $cse6 variable */) * (jacobian->tmpVars[10] /* gENROE.ud.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[31] /* $cse7 variable */) * (jacobian->tmpVars[8] /* gENROE.uq.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 571
type: SIMPLE_ASSIGN
gENCLS.p.ir.$pDERNLSJac4.dummyVarNLSJac4 = (-gENCLS.CoB) * ($cse1 * gENCLS.id.SeedNLSJac4 + $cse2 * gENCLS.iq.SeedNLSJac4)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_571(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,571};
  jacobian->tmpVars[13] /* gENCLS.p.ir.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[180] /* gENCLS.CoB PARAM */)) * ((data->localData[0]->realVars[26] /* $cse1 variable */) * (jacobian->seedVars[12] /* gENCLS.id.SeedNLSJac4 SEED_VAR */) + (data->localData[0]->realVars[27] /* $cse2 variable */) * (jacobian->seedVars[13] /* gENCLS.iq.SeedNLSJac4 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 572
type: SIMPLE_ASSIGN
gENCLS.p.ii.$pDERNLSJac4.dummyVarNLSJac4 = gENCLS.CoB * ($cse2 * gENCLS.id.SeedNLSJac4 - $cse1 * gENCLS.iq.SeedNLSJac4)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_572(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,572};
  jacobian->tmpVars[14] /* gENCLS.p.ii.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[180] /* gENCLS.CoB PARAM */) * ((data->localData[0]->realVars[27] /* $cse2 variable */) * (jacobian->seedVars[12] /* gENCLS.id.SeedNLSJac4 SEED_VAR */) - ((data->localData[0]->realVars[26] /* $cse1 variable */) * (jacobian->seedVars[13] /* gENCLS.iq.SeedNLSJac4 SEED_VAR */)));
  TRACE_POP
}

/*
equation index: 573
type: SIMPLE_ASSIGN
gENCLS.vq.$pDERNLSJac4.dummyVarNLSJac4 = (-gENCLS.R_a) * gENCLS.iq.SeedNLSJac4 - gENCLS.X_d * gENCLS.id.SeedNLSJac4
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_573(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,573};
  jacobian->tmpVars[15] /* gENCLS.vq.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[186] /* gENCLS.R_a PARAM */)) * (jacobian->seedVars[13] /* gENCLS.iq.SeedNLSJac4 SEED_VAR */) - ((data->simulationInfo->realParameter[189] /* gENCLS.X_d PARAM */) * (jacobian->seedVars[12] /* gENCLS.id.SeedNLSJac4 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 574
type: SIMPLE_ASSIGN
gENCLS.vd.$pDERNLSJac4.dummyVarNLSJac4 = gENCLS.X_d * gENCLS.iq.SeedNLSJac4 - gENCLS.R_a * gENCLS.id.SeedNLSJac4
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_574(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,574};
  jacobian->tmpVars[16] /* gENCLS.vd.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[189] /* gENCLS.X_d PARAM */) * (jacobian->seedVars[13] /* gENCLS.iq.SeedNLSJac4 SEED_VAR */) - ((data->simulationInfo->realParameter[186] /* gENCLS.R_a PARAM */) * (jacobian->seedVars[12] /* gENCLS.id.SeedNLSJac4 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 575
type: SIMPLE_ASSIGN
pwLine4.ir.re.$pDERNLSJac4.dummyVarNLSJac4 = (-gENCLS.p.ir.$pDERNLSJac4.dummyVarNLSJac4) - pwLine1.ir.re.SeedNLSJac4
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_575(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,575};
  jacobian->tmpVars[17] /* pwLine4.ir.re.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = (-jacobian->tmpVars[13] /* gENCLS.p.ir.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) - jacobian->seedVars[11] /* pwLine1.ir.re.SeedNLSJac4 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 576
type: SIMPLE_ASSIGN
pwLine4.ir.im.$pDERNLSJac4.dummyVarNLSJac4 = (-gENCLS.p.ii.$pDERNLSJac4.dummyVarNLSJac4) - pwLine1.ir.im.SeedNLSJac4
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_576(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,576};
  jacobian->tmpVars[18] /* pwLine4.ir.im.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = (-jacobian->tmpVars[14] /* gENCLS.p.ii.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) - jacobian->seedVars[10] /* pwLine1.ir.im.SeedNLSJac4 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 577
type: SIMPLE_ASSIGN
pwFault.p.ii.$pDERNLSJac4.dummyVarNLSJac4 = (-pwLine4.is.im.SeedNLSJac4) - pwLine3.ir.im.SeedNLSJac4
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_577(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,577};
  jacobian->tmpVars[19] /* pwFault.p.ii.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[7] /* pwLine4.is.im.SeedNLSJac4 SEED_VAR */) - jacobian->seedVars[6] /* pwLine3.ir.im.SeedNLSJac4 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 578
type: SIMPLE_ASSIGN
pwFault.p.ir.$pDERNLSJac4.dummyVarNLSJac4 = (-pwLine4.is.re.SeedNLSJac4) - pwLine3.ir.re.SeedNLSJac4
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_578(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,578};
  jacobian->tmpVars[20] /* pwFault.p.ir.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[4] /* pwLine4.is.re.SeedNLSJac4 SEED_VAR */) - jacobian->seedVars[5] /* pwLine3.ir.re.SeedNLSJac4 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 579
type: SIMPLE_ASSIGN
pwLine.ir.im.$pDERNLSJac4.dummyVarNLSJac4 = (-constantLoad.p.ii.SeedNLSJac4) - pwLine3.is.im.SeedNLSJac4 - pwLine1.is.im.SeedNLSJac4
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_579(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,579};
  jacobian->tmpVars[21] /* pwLine.ir.im.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[3] /* constantLoad.p.ii.SeedNLSJac4 SEED_VAR */) - jacobian->seedVars[9] /* pwLine3.is.im.SeedNLSJac4 SEED_VAR */ - jacobian->seedVars[2] /* pwLine1.is.im.SeedNLSJac4 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 580
type: SIMPLE_ASSIGN
constantLoad.p.ir.$pDERNLSJac4.dummyVarNLSJac4 = (-pwLine3.is.re.SeedNLSJac4) - pwLine1.is.re.SeedNLSJac4 - pwLine.ir.re.SeedNLSJac4
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_580(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,580};
  jacobian->tmpVars[22] /* constantLoad.p.ir.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[8] /* pwLine3.is.re.SeedNLSJac4 SEED_VAR */) - jacobian->seedVars[0] /* pwLine1.is.re.SeedNLSJac4 SEED_VAR */ - jacobian->seedVars[1] /* pwLine.ir.re.SeedNLSJac4 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 581
type: SIMPLE_ASSIGN
$res_NLSJac4_1.$pDERNLSJac4.dummyVarNLSJac4 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.is.re.SeedNLSJac4 else pwLine3.vs.re.SeedNLSJac4 - pwLine4.vs.re.SeedNLSJac4 - (pwLine3.Z.re * (pwLine3.is.re.SeedNLSJac4 + pwLine3.vs.im.SeedNLSJac4 * pwLine3.Y.im - pwLine3.vs.re.SeedNLSJac4 * pwLine3.Y.re) - pwLine3.Z.im * (pwLine3.is.im.SeedNLSJac4 + (-pwLine3.vs.re.SeedNLSJac4) * pwLine3.Y.im - pwLine3.vs.im.SeedNLSJac4 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_581(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,581};
  modelica_boolean tmp48;
  modelica_boolean tmp49;
  RELATIONHYSTERESIS(tmp48, data->localData[0]->timeValue, data->simulationInfo->realParameter[326] /* pwLine3.t1 PARAM */, 4, GreaterEq);
  RELATIONHYSTERESIS(tmp49, data->localData[0]->timeValue, data->simulationInfo->realParameter[327] /* pwLine3.t2 PARAM */, 5, Less);
  jacobian->resultVars[0] /* $res_NLSJac4_1.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = ((tmp48 && tmp49)?jacobian->seedVars[8] /* pwLine3.is.re.SeedNLSJac4 SEED_VAR */:jacobian->seedVars[19] /* pwLine3.vs.re.SeedNLSJac4 SEED_VAR */ - jacobian->seedVars[20] /* pwLine4.vs.re.SeedNLSJac4 SEED_VAR */ - ((data->simulationInfo->realParameter[325] /* pwLine3.Z.re PARAM */) * (jacobian->seedVars[8] /* pwLine3.is.re.SeedNLSJac4 SEED_VAR */ + (jacobian->seedVars[18] /* pwLine3.vs.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[322] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine3.vs.re.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[323] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[324] /* pwLine3.Z.im PARAM */) * (jacobian->seedVars[9] /* pwLine3.is.im.SeedNLSJac4 SEED_VAR */ + ((-jacobian->seedVars[19] /* pwLine3.vs.re.SeedNLSJac4 SEED_VAR */)) * (data->simulationInfo->realParameter[322] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine3.vs.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[323] /* pwLine3.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 582
type: SIMPLE_ASSIGN
$res_NLSJac4_2.$pDERNLSJac4.dummyVarNLSJac4 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.is.im.SeedNLSJac4 else pwLine3.vs.im.SeedNLSJac4 - pwLine4.vs.im.SeedNLSJac4 - (pwLine3.Z.re * (pwLine3.is.im.SeedNLSJac4 + (-pwLine3.vs.re.SeedNLSJac4) * pwLine3.Y.im - pwLine3.vs.im.SeedNLSJac4 * pwLine3.Y.re) + pwLine3.Z.im * (pwLine3.is.re.SeedNLSJac4 + pwLine3.vs.im.SeedNLSJac4 * pwLine3.Y.im - pwLine3.vs.re.SeedNLSJac4 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_582(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,582};
  modelica_boolean tmp50;
  modelica_boolean tmp51;
  RELATIONHYSTERESIS(tmp50, data->localData[0]->timeValue, data->simulationInfo->realParameter[326] /* pwLine3.t1 PARAM */, 4, GreaterEq);
  RELATIONHYSTERESIS(tmp51, data->localData[0]->timeValue, data->simulationInfo->realParameter[327] /* pwLine3.t2 PARAM */, 5, Less);
  jacobian->resultVars[1] /* $res_NLSJac4_2.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = ((tmp50 && tmp51)?jacobian->seedVars[9] /* pwLine3.is.im.SeedNLSJac4 SEED_VAR */:jacobian->seedVars[18] /* pwLine3.vs.im.SeedNLSJac4 SEED_VAR */ - jacobian->seedVars[21] /* pwLine4.vs.im.SeedNLSJac4 SEED_VAR */ - ((data->simulationInfo->realParameter[325] /* pwLine3.Z.re PARAM */) * (jacobian->seedVars[9] /* pwLine3.is.im.SeedNLSJac4 SEED_VAR */ + ((-jacobian->seedVars[19] /* pwLine3.vs.re.SeedNLSJac4 SEED_VAR */)) * (data->simulationInfo->realParameter[322] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine3.vs.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[323] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[324] /* pwLine3.Z.im PARAM */) * (jacobian->seedVars[8] /* pwLine3.is.re.SeedNLSJac4 SEED_VAR */ + (jacobian->seedVars[18] /* pwLine3.vs.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[322] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine3.vs.re.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[323] /* pwLine3.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 583
type: SIMPLE_ASSIGN
$res_NLSJac4_3.$pDERNLSJac4.dummyVarNLSJac4 = if time < pwFault.t1 then pwFault.p.ii.$pDERNLSJac4.dummyVarNLSJac4 else if time < pwFault.t2 and pwFault.ground then pwLine4.vs.re.SeedNLSJac4 else if time < pwFault.t2 then pwFault.p.ii.$pDERNLSJac4.dummyVarNLSJac4 - (pwFault.R * pwLine4.vs.im.SeedNLSJac4 - pwFault.X * pwLine4.vs.re.SeedNLSJac4) * (pwFault.X ^ 2.0 + pwFault.R ^ 2.0) / (pwFault.X ^ 2.0 + pwFault.R ^ 2.0) ^ 2.0 else pwFault.p.ii.$pDERNLSJac4.dummyVarNLSJac4
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_583(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,583};
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
  RELATIONHYSTERESIS(tmp52, data->localData[0]->timeValue, data->simulationInfo->realParameter[293] /* pwFault.t1 PARAM */, 8, Less);
  tmp64 = (modelica_boolean)tmp52;
  if(tmp64)
  {
    tmp65 = jacobian->tmpVars[19] /* pwFault.p.ii.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp53, data->localData[0]->timeValue, data->simulationInfo->realParameter[294] /* pwFault.t2 PARAM */, 9, Less);
    tmp62 = (modelica_boolean)(tmp53 && data->simulationInfo->booleanParameter[68] /* pwFault.ground PARAM */);
    if(tmp62)
    {
      tmp63 = jacobian->seedVars[20] /* pwLine4.vs.re.SeedNLSJac4 SEED_VAR */;
    }
    else
    {
      RELATIONHYSTERESIS(tmp54, data->localData[0]->timeValue, data->simulationInfo->realParameter[294] /* pwFault.t2 PARAM */, 9, Less);
      tmp60 = (modelica_boolean)tmp54;
      if(tmp60)
      {
        tmp55 = data->simulationInfo->realParameter[292] /* pwFault.X PARAM */;
        tmp56 = data->simulationInfo->realParameter[291] /* pwFault.R PARAM */;
        tmp57 = data->simulationInfo->realParameter[292] /* pwFault.X PARAM */;
        tmp58 = data->simulationInfo->realParameter[291] /* pwFault.R PARAM */;
        tmp59 = (tmp57 * tmp57) + (tmp58 * tmp58);
        tmp61 = jacobian->tmpVars[19] /* pwFault.p.ii.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ - (DIVISION(((data->simulationInfo->realParameter[291] /* pwFault.R PARAM */) * (jacobian->seedVars[21] /* pwLine4.vs.im.SeedNLSJac4 SEED_VAR */) - ((data->simulationInfo->realParameter[292] /* pwFault.X PARAM */) * (jacobian->seedVars[20] /* pwLine4.vs.re.SeedNLSJac4 SEED_VAR */))) * ((tmp55 * tmp55) + (tmp56 * tmp56)),(tmp59 * tmp59),"(pwFault.X ^ 2.0 + pwFault.R ^ 2.0) ^ 2.0"));
      }
      else
      {
        tmp61 = jacobian->tmpVars[19] /* pwFault.p.ii.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */;
      }
      tmp63 = tmp61;
    }
    tmp65 = tmp63;
  }
  jacobian->resultVars[2] /* $res_NLSJac4_3.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = tmp65;
  TRACE_POP
}

/*
equation index: 584
type: SIMPLE_ASSIGN
$res_NLSJac4_4.$pDERNLSJac4.dummyVarNLSJac4 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.ir.im.SeedNLSJac4 else pwLine4.vs.im.SeedNLSJac4 - pwLine3.vs.im.SeedNLSJac4 - (pwLine3.Z.re * (pwLine3.ir.im.SeedNLSJac4 + (-pwLine4.vs.re.SeedNLSJac4) * pwLine3.Y.im - pwLine4.vs.im.SeedNLSJac4 * pwLine3.Y.re) + pwLine3.Z.im * (pwLine3.ir.re.SeedNLSJac4 + pwLine4.vs.im.SeedNLSJac4 * pwLine3.Y.im - pwLine4.vs.re.SeedNLSJac4 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_584(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,584};
  modelica_boolean tmp66;
  modelica_boolean tmp67;
  RELATIONHYSTERESIS(tmp66, data->localData[0]->timeValue, data->simulationInfo->realParameter[326] /* pwLine3.t1 PARAM */, 4, GreaterEq);
  RELATIONHYSTERESIS(tmp67, data->localData[0]->timeValue, data->simulationInfo->realParameter[327] /* pwLine3.t2 PARAM */, 5, Less);
  jacobian->resultVars[3] /* $res_NLSJac4_4.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = ((tmp66 && tmp67)?jacobian->seedVars[6] /* pwLine3.ir.im.SeedNLSJac4 SEED_VAR */:jacobian->seedVars[21] /* pwLine4.vs.im.SeedNLSJac4 SEED_VAR */ - jacobian->seedVars[18] /* pwLine3.vs.im.SeedNLSJac4 SEED_VAR */ - ((data->simulationInfo->realParameter[325] /* pwLine3.Z.re PARAM */) * (jacobian->seedVars[6] /* pwLine3.ir.im.SeedNLSJac4 SEED_VAR */ + ((-jacobian->seedVars[20] /* pwLine4.vs.re.SeedNLSJac4 SEED_VAR */)) * (data->simulationInfo->realParameter[322] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine4.vs.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[323] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[324] /* pwLine3.Z.im PARAM */) * (jacobian->seedVars[5] /* pwLine3.ir.re.SeedNLSJac4 SEED_VAR */ + (jacobian->seedVars[21] /* pwLine4.vs.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[322] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine4.vs.re.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[323] /* pwLine3.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 585
type: SIMPLE_ASSIGN
$res_NLSJac4_5.$pDERNLSJac4.dummyVarNLSJac4 = if time < pwFault.t1 then pwFault.p.ir.$pDERNLSJac4.dummyVarNLSJac4 else if time < pwFault.t2 and pwFault.ground then pwLine4.vs.im.SeedNLSJac4 else if time < pwFault.t2 then pwFault.p.ir.$pDERNLSJac4.dummyVarNLSJac4 - (pwFault.R * pwLine4.vs.re.SeedNLSJac4 + pwFault.X * pwLine4.vs.im.SeedNLSJac4) * (pwFault.R ^ 2.0 + pwFault.X ^ 2.0) / (pwFault.R ^ 2.0 + pwFault.X ^ 2.0) ^ 2.0 else pwFault.p.ir.$pDERNLSJac4.dummyVarNLSJac4
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_585(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,585};
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
  RELATIONHYSTERESIS(tmp68, data->localData[0]->timeValue, data->simulationInfo->realParameter[293] /* pwFault.t1 PARAM */, 8, Less);
  tmp80 = (modelica_boolean)tmp68;
  if(tmp80)
  {
    tmp81 = jacobian->tmpVars[20] /* pwFault.p.ir.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp69, data->localData[0]->timeValue, data->simulationInfo->realParameter[294] /* pwFault.t2 PARAM */, 9, Less);
    tmp78 = (modelica_boolean)(tmp69 && data->simulationInfo->booleanParameter[68] /* pwFault.ground PARAM */);
    if(tmp78)
    {
      tmp79 = jacobian->seedVars[21] /* pwLine4.vs.im.SeedNLSJac4 SEED_VAR */;
    }
    else
    {
      RELATIONHYSTERESIS(tmp70, data->localData[0]->timeValue, data->simulationInfo->realParameter[294] /* pwFault.t2 PARAM */, 9, Less);
      tmp76 = (modelica_boolean)tmp70;
      if(tmp76)
      {
        tmp71 = data->simulationInfo->realParameter[291] /* pwFault.R PARAM */;
        tmp72 = data->simulationInfo->realParameter[292] /* pwFault.X PARAM */;
        tmp73 = data->simulationInfo->realParameter[291] /* pwFault.R PARAM */;
        tmp74 = data->simulationInfo->realParameter[292] /* pwFault.X PARAM */;
        tmp75 = (tmp73 * tmp73) + (tmp74 * tmp74);
        tmp77 = jacobian->tmpVars[20] /* pwFault.p.ir.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ - (DIVISION(((data->simulationInfo->realParameter[291] /* pwFault.R PARAM */) * (jacobian->seedVars[20] /* pwLine4.vs.re.SeedNLSJac4 SEED_VAR */) + (data->simulationInfo->realParameter[292] /* pwFault.X PARAM */) * (jacobian->seedVars[21] /* pwLine4.vs.im.SeedNLSJac4 SEED_VAR */)) * ((tmp71 * tmp71) + (tmp72 * tmp72)),(tmp75 * tmp75),"(pwFault.R ^ 2.0 + pwFault.X ^ 2.0) ^ 2.0"));
      }
      else
      {
        tmp77 = jacobian->tmpVars[20] /* pwFault.p.ir.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */;
      }
      tmp79 = tmp77;
    }
    tmp81 = tmp79;
  }
  jacobian->resultVars[4] /* $res_NLSJac4_5.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = tmp81;
  TRACE_POP
}

/*
equation index: 586
type: SIMPLE_ASSIGN
$res_NLSJac4_6.$pDERNLSJac4.dummyVarNLSJac4 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.is.re.SeedNLSJac4 else pwLine4.vs.re.SeedNLSJac4 - pwLine4.vr.re.SeedNLSJac4 - (pwLine4.Z.re * (pwLine4.is.re.SeedNLSJac4 + pwLine4.vs.im.SeedNLSJac4 * pwLine4.Y.im - pwLine4.vs.re.SeedNLSJac4 * pwLine4.Y.re) - pwLine4.Z.im * (pwLine4.is.im.SeedNLSJac4 + (-pwLine4.vs.re.SeedNLSJac4) * pwLine4.Y.im - pwLine4.vs.im.SeedNLSJac4 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_586(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,586};
  modelica_boolean tmp82;
  modelica_boolean tmp83;
  RELATIONHYSTERESIS(tmp82, data->localData[0]->timeValue, data->simulationInfo->realParameter[337] /* pwLine4.t1 PARAM */, 10, GreaterEq);
  RELATIONHYSTERESIS(tmp83, data->localData[0]->timeValue, data->simulationInfo->realParameter[338] /* pwLine4.t2 PARAM */, 11, Less);
  jacobian->resultVars[5] /* $res_NLSJac4_6.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = ((tmp82 && tmp83)?jacobian->seedVars[4] /* pwLine4.is.re.SeedNLSJac4 SEED_VAR */:jacobian->seedVars[20] /* pwLine4.vs.re.SeedNLSJac4 SEED_VAR */ - jacobian->seedVars[14] /* pwLine4.vr.re.SeedNLSJac4 SEED_VAR */ - ((data->simulationInfo->realParameter[336] /* pwLine4.Z.re PARAM */) * (jacobian->seedVars[4] /* pwLine4.is.re.SeedNLSJac4 SEED_VAR */ + (jacobian->seedVars[21] /* pwLine4.vs.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[333] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine4.vs.re.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[334] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[335] /* pwLine4.Z.im PARAM */) * (jacobian->seedVars[7] /* pwLine4.is.im.SeedNLSJac4 SEED_VAR */ + ((-jacobian->seedVars[20] /* pwLine4.vs.re.SeedNLSJac4 SEED_VAR */)) * (data->simulationInfo->realParameter[333] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine4.vs.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[334] /* pwLine4.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 587
type: SIMPLE_ASSIGN
$res_NLSJac4_7.$pDERNLSJac4.dummyVarNLSJac4 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.is.im.SeedNLSJac4 else pwLine4.vs.im.SeedNLSJac4 - pwLine4.vr.im.SeedNLSJac4 - (pwLine4.Z.re * (pwLine4.is.im.SeedNLSJac4 + (-pwLine4.vs.re.SeedNLSJac4) * pwLine4.Y.im - pwLine4.vs.im.SeedNLSJac4 * pwLine4.Y.re) + pwLine4.Z.im * (pwLine4.is.re.SeedNLSJac4 + pwLine4.vs.im.SeedNLSJac4 * pwLine4.Y.im - pwLine4.vs.re.SeedNLSJac4 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_587(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,587};
  modelica_boolean tmp84;
  modelica_boolean tmp85;
  RELATIONHYSTERESIS(tmp84, data->localData[0]->timeValue, data->simulationInfo->realParameter[337] /* pwLine4.t1 PARAM */, 10, GreaterEq);
  RELATIONHYSTERESIS(tmp85, data->localData[0]->timeValue, data->simulationInfo->realParameter[338] /* pwLine4.t2 PARAM */, 11, Less);
  jacobian->resultVars[6] /* $res_NLSJac4_7.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = ((tmp84 && tmp85)?jacobian->seedVars[7] /* pwLine4.is.im.SeedNLSJac4 SEED_VAR */:jacobian->seedVars[21] /* pwLine4.vs.im.SeedNLSJac4 SEED_VAR */ - jacobian->seedVars[15] /* pwLine4.vr.im.SeedNLSJac4 SEED_VAR */ - ((data->simulationInfo->realParameter[336] /* pwLine4.Z.re PARAM */) * (jacobian->seedVars[7] /* pwLine4.is.im.SeedNLSJac4 SEED_VAR */ + ((-jacobian->seedVars[20] /* pwLine4.vs.re.SeedNLSJac4 SEED_VAR */)) * (data->simulationInfo->realParameter[333] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine4.vs.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[334] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[335] /* pwLine4.Z.im PARAM */) * (jacobian->seedVars[4] /* pwLine4.is.re.SeedNLSJac4 SEED_VAR */ + (jacobian->seedVars[21] /* pwLine4.vs.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[333] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine4.vs.re.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[334] /* pwLine4.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 588
type: SIMPLE_ASSIGN
$res_NLSJac4_8.$pDERNLSJac4.dummyVarNLSJac4 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.ir.im.$pDERNLSJac4.dummyVarNLSJac4 else pwLine4.vr.im.SeedNLSJac4 - pwLine4.vs.im.SeedNLSJac4 - (pwLine4.Z.re * (pwLine4.ir.im.$pDERNLSJac4.dummyVarNLSJac4 + (-pwLine4.vr.re.SeedNLSJac4) * pwLine4.Y.im - pwLine4.vr.im.SeedNLSJac4 * pwLine4.Y.re) + pwLine4.Z.im * (pwLine4.ir.re.$pDERNLSJac4.dummyVarNLSJac4 + pwLine4.vr.im.SeedNLSJac4 * pwLine4.Y.im - pwLine4.vr.re.SeedNLSJac4 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_588(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,588};
  modelica_boolean tmp86;
  modelica_boolean tmp87;
  RELATIONHYSTERESIS(tmp86, data->localData[0]->timeValue, data->simulationInfo->realParameter[337] /* pwLine4.t1 PARAM */, 10, GreaterEq);
  RELATIONHYSTERESIS(tmp87, data->localData[0]->timeValue, data->simulationInfo->realParameter[338] /* pwLine4.t2 PARAM */, 11, Less);
  jacobian->resultVars[7] /* $res_NLSJac4_8.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = ((tmp86 && tmp87)?jacobian->tmpVars[18] /* pwLine4.ir.im.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */:jacobian->seedVars[15] /* pwLine4.vr.im.SeedNLSJac4 SEED_VAR */ - jacobian->seedVars[21] /* pwLine4.vs.im.SeedNLSJac4 SEED_VAR */ - ((data->simulationInfo->realParameter[336] /* pwLine4.Z.re PARAM */) * (jacobian->tmpVars[18] /* pwLine4.ir.im.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[14] /* pwLine4.vr.re.SeedNLSJac4 SEED_VAR */)) * (data->simulationInfo->realParameter[333] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine4.vr.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[334] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[335] /* pwLine4.Z.im PARAM */) * (jacobian->tmpVars[17] /* pwLine4.ir.re.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[15] /* pwLine4.vr.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[333] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine4.vr.re.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[334] /* pwLine4.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 589
type: SIMPLE_ASSIGN
$res_NLSJac4_9.$pDERNLSJac4.dummyVarNLSJac4 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.ir.re.$pDERNLSJac4.dummyVarNLSJac4 else pwLine4.vr.re.SeedNLSJac4 - pwLine4.vs.re.SeedNLSJac4 - (pwLine4.Z.re * (pwLine4.ir.re.$pDERNLSJac4.dummyVarNLSJac4 + pwLine4.vr.im.SeedNLSJac4 * pwLine4.Y.im - pwLine4.vr.re.SeedNLSJac4 * pwLine4.Y.re) - pwLine4.Z.im * (pwLine4.ir.im.$pDERNLSJac4.dummyVarNLSJac4 + (-pwLine4.vr.re.SeedNLSJac4) * pwLine4.Y.im - pwLine4.vr.im.SeedNLSJac4 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_589(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,589};
  modelica_boolean tmp88;
  modelica_boolean tmp89;
  RELATIONHYSTERESIS(tmp88, data->localData[0]->timeValue, data->simulationInfo->realParameter[337] /* pwLine4.t1 PARAM */, 10, GreaterEq);
  RELATIONHYSTERESIS(tmp89, data->localData[0]->timeValue, data->simulationInfo->realParameter[338] /* pwLine4.t2 PARAM */, 11, Less);
  jacobian->resultVars[8] /* $res_NLSJac4_9.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = ((tmp88 && tmp89)?jacobian->tmpVars[17] /* pwLine4.ir.re.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */:jacobian->seedVars[14] /* pwLine4.vr.re.SeedNLSJac4 SEED_VAR */ - jacobian->seedVars[20] /* pwLine4.vs.re.SeedNLSJac4 SEED_VAR */ - ((data->simulationInfo->realParameter[336] /* pwLine4.Z.re PARAM */) * (jacobian->tmpVars[17] /* pwLine4.ir.re.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[15] /* pwLine4.vr.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[333] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine4.vr.re.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[334] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[335] /* pwLine4.Z.im PARAM */) * (jacobian->tmpVars[18] /* pwLine4.ir.im.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[14] /* pwLine4.vr.re.SeedNLSJac4 SEED_VAR */)) * (data->simulationInfo->realParameter[333] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine4.vr.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[334] /* pwLine4.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 590
type: SIMPLE_ASSIGN
$res_NLSJac4_10.$pDERNLSJac4.dummyVarNLSJac4 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.ir.re.SeedNLSJac4 else pwLine4.vs.re.SeedNLSJac4 - pwLine3.vs.re.SeedNLSJac4 - (pwLine3.Z.re * (pwLine3.ir.re.SeedNLSJac4 + pwLine4.vs.im.SeedNLSJac4 * pwLine3.Y.im - pwLine4.vs.re.SeedNLSJac4 * pwLine3.Y.re) - pwLine3.Z.im * (pwLine3.ir.im.SeedNLSJac4 + (-pwLine4.vs.re.SeedNLSJac4) * pwLine3.Y.im - pwLine4.vs.im.SeedNLSJac4 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_590(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,590};
  modelica_boolean tmp90;
  modelica_boolean tmp91;
  RELATIONHYSTERESIS(tmp90, data->localData[0]->timeValue, data->simulationInfo->realParameter[326] /* pwLine3.t1 PARAM */, 4, GreaterEq);
  RELATIONHYSTERESIS(tmp91, data->localData[0]->timeValue, data->simulationInfo->realParameter[327] /* pwLine3.t2 PARAM */, 5, Less);
  jacobian->resultVars[9] /* $res_NLSJac4_10.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = ((tmp90 && tmp91)?jacobian->seedVars[5] /* pwLine3.ir.re.SeedNLSJac4 SEED_VAR */:jacobian->seedVars[20] /* pwLine4.vs.re.SeedNLSJac4 SEED_VAR */ - jacobian->seedVars[19] /* pwLine3.vs.re.SeedNLSJac4 SEED_VAR */ - ((data->simulationInfo->realParameter[325] /* pwLine3.Z.re PARAM */) * (jacobian->seedVars[5] /* pwLine3.ir.re.SeedNLSJac4 SEED_VAR */ + (jacobian->seedVars[21] /* pwLine4.vs.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[322] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine4.vs.re.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[323] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[324] /* pwLine3.Z.im PARAM */) * (jacobian->seedVars[6] /* pwLine3.ir.im.SeedNLSJac4 SEED_VAR */ + ((-jacobian->seedVars[20] /* pwLine4.vs.re.SeedNLSJac4 SEED_VAR */)) * (data->simulationInfo->realParameter[322] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine4.vs.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[323] /* pwLine3.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 591
type: SIMPLE_ASSIGN
$res_NLSJac4_11.$pDERNLSJac4.dummyVarNLSJac4 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.is.im.$pDERNLSJac4.dummyVarNLSJac4 else pwLine.vs.im.$pDERNLSJac4.dummyVarNLSJac4 - pwLine3.vs.im.SeedNLSJac4 - (pwLine.Z.re * (pwLine.is.im.$pDERNLSJac4.dummyVarNLSJac4 + (-pwLine.vs.re.$pDERNLSJac4.dummyVarNLSJac4) * pwLine.Y.im - pwLine.vs.im.$pDERNLSJac4.dummyVarNLSJac4 * pwLine.Y.re) + pwLine.Z.im * (pwLine.is.re.$pDERNLSJac4.dummyVarNLSJac4 + pwLine.vs.im.$pDERNLSJac4.dummyVarNLSJac4 * pwLine.Y.im - pwLine.vs.re.$pDERNLSJac4.dummyVarNLSJac4 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_591(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,591};
  modelica_boolean tmp92;
  modelica_boolean tmp93;
  RELATIONHYSTERESIS(tmp92, data->localData[0]->timeValue, data->simulationInfo->realParameter[304] /* pwLine.t1 PARAM */, 6, GreaterEq);
  RELATIONHYSTERESIS(tmp93, data->localData[0]->timeValue, data->simulationInfo->realParameter[305] /* pwLine.t2 PARAM */, 7, Less);
  jacobian->resultVars[10] /* $res_NLSJac4_11.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = ((tmp92 && tmp93)?jacobian->tmpVars[7] /* pwLine.is.im.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[11] /* pwLine.vs.im.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[18] /* pwLine3.vs.im.SeedNLSJac4 SEED_VAR */ - ((data->simulationInfo->realParameter[303] /* pwLine.Z.re PARAM */) * (jacobian->tmpVars[7] /* pwLine.is.im.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ + ((-jacobian->tmpVars[12] /* pwLine.vs.re.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[300] /* pwLine.Y.im PARAM */) - ((jacobian->tmpVars[11] /* pwLine.vs.im.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[301] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[302] /* pwLine.Z.im PARAM */) * (jacobian->tmpVars[6] /* pwLine.is.re.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ + (jacobian->tmpVars[11] /* pwLine.vs.im.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[300] /* pwLine.Y.im PARAM */) - ((jacobian->tmpVars[12] /* pwLine.vs.re.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[301] /* pwLine.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 592
type: SIMPLE_ASSIGN
$res_NLSJac4_12.$pDERNLSJac4.dummyVarNLSJac4 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.is.re.$pDERNLSJac4.dummyVarNLSJac4 else pwLine.vs.re.$pDERNLSJac4.dummyVarNLSJac4 - pwLine3.vs.re.SeedNLSJac4 - (pwLine.Z.re * (pwLine.is.re.$pDERNLSJac4.dummyVarNLSJac4 + pwLine.vs.im.$pDERNLSJac4.dummyVarNLSJac4 * pwLine.Y.im - pwLine.vs.re.$pDERNLSJac4.dummyVarNLSJac4 * pwLine.Y.re) - pwLine.Z.im * (pwLine.is.im.$pDERNLSJac4.dummyVarNLSJac4 + (-pwLine.vs.re.$pDERNLSJac4.dummyVarNLSJac4) * pwLine.Y.im - pwLine.vs.im.$pDERNLSJac4.dummyVarNLSJac4 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_592(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,592};
  modelica_boolean tmp94;
  modelica_boolean tmp95;
  RELATIONHYSTERESIS(tmp94, data->localData[0]->timeValue, data->simulationInfo->realParameter[304] /* pwLine.t1 PARAM */, 6, GreaterEq);
  RELATIONHYSTERESIS(tmp95, data->localData[0]->timeValue, data->simulationInfo->realParameter[305] /* pwLine.t2 PARAM */, 7, Less);
  jacobian->resultVars[11] /* $res_NLSJac4_12.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = ((tmp94 && tmp95)?jacobian->tmpVars[6] /* pwLine.is.re.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[12] /* pwLine.vs.re.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[19] /* pwLine3.vs.re.SeedNLSJac4 SEED_VAR */ - ((data->simulationInfo->realParameter[303] /* pwLine.Z.re PARAM */) * (jacobian->tmpVars[6] /* pwLine.is.re.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ + (jacobian->tmpVars[11] /* pwLine.vs.im.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[300] /* pwLine.Y.im PARAM */) - ((jacobian->tmpVars[12] /* pwLine.vs.re.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[301] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[302] /* pwLine.Z.im PARAM */) * (jacobian->tmpVars[7] /* pwLine.is.im.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ + ((-jacobian->tmpVars[12] /* pwLine.vs.re.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[300] /* pwLine.Y.im PARAM */) - ((jacobian->tmpVars[11] /* pwLine.vs.im.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[301] /* pwLine.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 593
type: SIMPLE_ASSIGN
$res_NLSJac4_13.$pDERNLSJac4.dummyVarNLSJac4 = pwLine3.vs.im * constantLoad.p.ir.$pDERNLSJac4.dummyVarNLSJac4 + pwLine3.vs.im.SeedNLSJac4 * constantLoad.p.ir + (-pwLine3.vs.re.SeedNLSJac4) * constantLoad.p.ii - constantLoad.Q.$pDERNLSJac4.dummyVarNLSJac4 - pwLine3.vs.re * constantLoad.p.ii.SeedNLSJac4
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_593(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,593};
  jacobian->resultVars[12] /* $res_NLSJac4_13.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = (data->localData[0]->realVars[135] /* pwLine3.vs.im variable */) * (jacobian->tmpVars[22] /* constantLoad.p.ir.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[18] /* pwLine3.vs.im.SeedNLSJac4 SEED_VAR */) * (data->localData[0]->realVars[54] /* constantLoad.p.ir variable */) + ((-jacobian->seedVars[19] /* pwLine3.vs.re.SeedNLSJac4 SEED_VAR */)) * (data->localData[0]->realVars[53] /* constantLoad.p.ii variable */) - jacobian->tmpVars[3] /* constantLoad.Q.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ - ((data->localData[0]->realVars[136] /* pwLine3.vs.re variable */) * (jacobian->seedVars[3] /* constantLoad.p.ii.SeedNLSJac4 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 594
type: SIMPLE_ASSIGN
$res_NLSJac4_14.$pDERNLSJac4.dummyVarNLSJac4 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.ir.re.SeedNLSJac4 else pwLine3.vs.re.SeedNLSJac4 - pwLine.vs.re.$pDERNLSJac4.dummyVarNLSJac4 - (pwLine.Z.re * (pwLine.ir.re.SeedNLSJac4 + pwLine3.vs.im.SeedNLSJac4 * pwLine.Y.im - pwLine3.vs.re.SeedNLSJac4 * pwLine.Y.re) - pwLine.Z.im * (pwLine.ir.im.$pDERNLSJac4.dummyVarNLSJac4 + (-pwLine3.vs.re.SeedNLSJac4) * pwLine.Y.im - pwLine3.vs.im.SeedNLSJac4 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_594(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,594};
  modelica_boolean tmp96;
  modelica_boolean tmp97;
  RELATIONHYSTERESIS(tmp96, data->localData[0]->timeValue, data->simulationInfo->realParameter[304] /* pwLine.t1 PARAM */, 6, GreaterEq);
  RELATIONHYSTERESIS(tmp97, data->localData[0]->timeValue, data->simulationInfo->realParameter[305] /* pwLine.t2 PARAM */, 7, Less);
  jacobian->resultVars[13] /* $res_NLSJac4_14.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = ((tmp96 && tmp97)?jacobian->seedVars[1] /* pwLine.ir.re.SeedNLSJac4 SEED_VAR */:jacobian->seedVars[19] /* pwLine3.vs.re.SeedNLSJac4 SEED_VAR */ - jacobian->tmpVars[12] /* pwLine.vs.re.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[303] /* pwLine.Z.re PARAM */) * (jacobian->seedVars[1] /* pwLine.ir.re.SeedNLSJac4 SEED_VAR */ + (jacobian->seedVars[18] /* pwLine3.vs.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[300] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine3.vs.re.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[301] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[302] /* pwLine.Z.im PARAM */) * (jacobian->tmpVars[21] /* pwLine.ir.im.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[19] /* pwLine3.vs.re.SeedNLSJac4 SEED_VAR */)) * (data->simulationInfo->realParameter[300] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine3.vs.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[301] /* pwLine.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 595
type: SIMPLE_ASSIGN
$res_NLSJac4_15.$pDERNLSJac4.dummyVarNLSJac4 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.ir.im.$pDERNLSJac4.dummyVarNLSJac4 else pwLine3.vs.im.SeedNLSJac4 - pwLine.vs.im.$pDERNLSJac4.dummyVarNLSJac4 - (pwLine.Z.re * (pwLine.ir.im.$pDERNLSJac4.dummyVarNLSJac4 + (-pwLine3.vs.re.SeedNLSJac4) * pwLine.Y.im - pwLine3.vs.im.SeedNLSJac4 * pwLine.Y.re) + pwLine.Z.im * (pwLine.ir.re.SeedNLSJac4 + pwLine3.vs.im.SeedNLSJac4 * pwLine.Y.im - pwLine3.vs.re.SeedNLSJac4 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_595(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,595};
  modelica_boolean tmp98;
  modelica_boolean tmp99;
  RELATIONHYSTERESIS(tmp98, data->localData[0]->timeValue, data->simulationInfo->realParameter[304] /* pwLine.t1 PARAM */, 6, GreaterEq);
  RELATIONHYSTERESIS(tmp99, data->localData[0]->timeValue, data->simulationInfo->realParameter[305] /* pwLine.t2 PARAM */, 7, Less);
  jacobian->resultVars[14] /* $res_NLSJac4_15.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = ((tmp98 && tmp99)?jacobian->tmpVars[21] /* pwLine.ir.im.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */:jacobian->seedVars[18] /* pwLine3.vs.im.SeedNLSJac4 SEED_VAR */ - jacobian->tmpVars[11] /* pwLine.vs.im.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[303] /* pwLine.Z.re PARAM */) * (jacobian->tmpVars[21] /* pwLine.ir.im.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[19] /* pwLine3.vs.re.SeedNLSJac4 SEED_VAR */)) * (data->simulationInfo->realParameter[300] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine3.vs.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[301] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[302] /* pwLine.Z.im PARAM */) * (jacobian->seedVars[1] /* pwLine.ir.re.SeedNLSJac4 SEED_VAR */ + (jacobian->seedVars[18] /* pwLine3.vs.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[300] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine3.vs.re.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[301] /* pwLine.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 596
type: SIMPLE_ASSIGN
$res_NLSJac4_16.$pDERNLSJac4.dummyVarNLSJac4 = pwLine3.vs.im * constantLoad.p.ii.SeedNLSJac4 + pwLine3.vs.im.SeedNLSJac4 * constantLoad.p.ii + pwLine3.vs.re * constantLoad.p.ir.$pDERNLSJac4.dummyVarNLSJac4 + pwLine3.vs.re.SeedNLSJac4 * constantLoad.p.ir - constantLoad.P.$pDERNLSJac4.dummyVarNLSJac4
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_596(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,596};
  jacobian->resultVars[15] /* $res_NLSJac4_16.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = (data->localData[0]->realVars[135] /* pwLine3.vs.im variable */) * (jacobian->seedVars[3] /* constantLoad.p.ii.SeedNLSJac4 SEED_VAR */) + (jacobian->seedVars[18] /* pwLine3.vs.im.SeedNLSJac4 SEED_VAR */) * (data->localData[0]->realVars[53] /* constantLoad.p.ii variable */) + (data->localData[0]->realVars[136] /* pwLine3.vs.re variable */) * (jacobian->tmpVars[22] /* constantLoad.p.ir.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[19] /* pwLine3.vs.re.SeedNLSJac4 SEED_VAR */) * (data->localData[0]->realVars[54] /* constantLoad.p.ir variable */) - jacobian->tmpVars[4] /* constantLoad.P.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 597
type: SIMPLE_ASSIGN
$res_NLSJac4_17.$pDERNLSJac4.dummyVarNLSJac4 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.is.re.SeedNLSJac4 else pwLine3.vs.re.SeedNLSJac4 - pwLine4.vr.re.SeedNLSJac4 - (pwLine1.Z.re * (pwLine1.is.re.SeedNLSJac4 + pwLine3.vs.im.SeedNLSJac4 * pwLine1.Y.im - pwLine3.vs.re.SeedNLSJac4 * pwLine1.Y.re) - pwLine1.Z.im * (pwLine1.is.im.SeedNLSJac4 + (-pwLine3.vs.re.SeedNLSJac4) * pwLine1.Y.im - pwLine3.vs.im.SeedNLSJac4 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_597(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,597};
  modelica_boolean tmp100;
  modelica_boolean tmp101;
  RELATIONHYSTERESIS(tmp100, data->localData[0]->timeValue, data->simulationInfo->realParameter[315] /* pwLine1.t1 PARAM */, 12, GreaterEq);
  RELATIONHYSTERESIS(tmp101, data->localData[0]->timeValue, data->simulationInfo->realParameter[316] /* pwLine1.t2 PARAM */, 13, Less);
  jacobian->resultVars[16] /* $res_NLSJac4_17.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = ((tmp100 && tmp101)?jacobian->seedVars[0] /* pwLine1.is.re.SeedNLSJac4 SEED_VAR */:jacobian->seedVars[19] /* pwLine3.vs.re.SeedNLSJac4 SEED_VAR */ - jacobian->seedVars[14] /* pwLine4.vr.re.SeedNLSJac4 SEED_VAR */ - ((data->simulationInfo->realParameter[314] /* pwLine1.Z.re PARAM */) * (jacobian->seedVars[0] /* pwLine1.is.re.SeedNLSJac4 SEED_VAR */ + (jacobian->seedVars[18] /* pwLine3.vs.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[311] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine3.vs.re.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[312] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[313] /* pwLine1.Z.im PARAM */) * (jacobian->seedVars[2] /* pwLine1.is.im.SeedNLSJac4 SEED_VAR */ + ((-jacobian->seedVars[19] /* pwLine3.vs.re.SeedNLSJac4 SEED_VAR */)) * (data->simulationInfo->realParameter[311] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine3.vs.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[312] /* pwLine1.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 598
type: SIMPLE_ASSIGN
$res_NLSJac4_18.$pDERNLSJac4.dummyVarNLSJac4 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.is.im.SeedNLSJac4 else pwLine3.vs.im.SeedNLSJac4 - pwLine4.vr.im.SeedNLSJac4 - (pwLine1.Z.re * (pwLine1.is.im.SeedNLSJac4 + (-pwLine3.vs.re.SeedNLSJac4) * pwLine1.Y.im - pwLine3.vs.im.SeedNLSJac4 * pwLine1.Y.re) + pwLine1.Z.im * (pwLine1.is.re.SeedNLSJac4 + pwLine3.vs.im.SeedNLSJac4 * pwLine1.Y.im - pwLine3.vs.re.SeedNLSJac4 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_598(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,598};
  modelica_boolean tmp102;
  modelica_boolean tmp103;
  RELATIONHYSTERESIS(tmp102, data->localData[0]->timeValue, data->simulationInfo->realParameter[315] /* pwLine1.t1 PARAM */, 12, GreaterEq);
  RELATIONHYSTERESIS(tmp103, data->localData[0]->timeValue, data->simulationInfo->realParameter[316] /* pwLine1.t2 PARAM */, 13, Less);
  jacobian->resultVars[17] /* $res_NLSJac4_18.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = ((tmp102 && tmp103)?jacobian->seedVars[2] /* pwLine1.is.im.SeedNLSJac4 SEED_VAR */:jacobian->seedVars[18] /* pwLine3.vs.im.SeedNLSJac4 SEED_VAR */ - jacobian->seedVars[15] /* pwLine4.vr.im.SeedNLSJac4 SEED_VAR */ - ((data->simulationInfo->realParameter[314] /* pwLine1.Z.re PARAM */) * (jacobian->seedVars[2] /* pwLine1.is.im.SeedNLSJac4 SEED_VAR */ + ((-jacobian->seedVars[19] /* pwLine3.vs.re.SeedNLSJac4 SEED_VAR */)) * (data->simulationInfo->realParameter[311] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine3.vs.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[312] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[313] /* pwLine1.Z.im PARAM */) * (jacobian->seedVars[0] /* pwLine1.is.re.SeedNLSJac4 SEED_VAR */ + (jacobian->seedVars[18] /* pwLine3.vs.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[311] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine3.vs.re.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[312] /* pwLine1.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 599
type: SIMPLE_ASSIGN
$res_NLSJac4_19.$pDERNLSJac4.dummyVarNLSJac4 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.ir.re.SeedNLSJac4 else pwLine4.vr.re.SeedNLSJac4 - pwLine3.vs.re.SeedNLSJac4 - (pwLine1.Z.re * (pwLine1.ir.re.SeedNLSJac4 + pwLine4.vr.im.SeedNLSJac4 * pwLine1.Y.im - pwLine4.vr.re.SeedNLSJac4 * pwLine1.Y.re) - pwLine1.Z.im * (pwLine1.ir.im.SeedNLSJac4 + (-pwLine4.vr.re.SeedNLSJac4) * pwLine1.Y.im - pwLine4.vr.im.SeedNLSJac4 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_599(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,599};
  modelica_boolean tmp104;
  modelica_boolean tmp105;
  RELATIONHYSTERESIS(tmp104, data->localData[0]->timeValue, data->simulationInfo->realParameter[315] /* pwLine1.t1 PARAM */, 12, GreaterEq);
  RELATIONHYSTERESIS(tmp105, data->localData[0]->timeValue, data->simulationInfo->realParameter[316] /* pwLine1.t2 PARAM */, 13, Less);
  jacobian->resultVars[18] /* $res_NLSJac4_19.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = ((tmp104 && tmp105)?jacobian->seedVars[11] /* pwLine1.ir.re.SeedNLSJac4 SEED_VAR */:jacobian->seedVars[14] /* pwLine4.vr.re.SeedNLSJac4 SEED_VAR */ - jacobian->seedVars[19] /* pwLine3.vs.re.SeedNLSJac4 SEED_VAR */ - ((data->simulationInfo->realParameter[314] /* pwLine1.Z.re PARAM */) * (jacobian->seedVars[11] /* pwLine1.ir.re.SeedNLSJac4 SEED_VAR */ + (jacobian->seedVars[15] /* pwLine4.vr.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[311] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine4.vr.re.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[312] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[313] /* pwLine1.Z.im PARAM */) * (jacobian->seedVars[10] /* pwLine1.ir.im.SeedNLSJac4 SEED_VAR */ + ((-jacobian->seedVars[14] /* pwLine4.vr.re.SeedNLSJac4 SEED_VAR */)) * (data->simulationInfo->realParameter[311] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine4.vr.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[312] /* pwLine1.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 600
type: SIMPLE_ASSIGN
$res_NLSJac4_20.$pDERNLSJac4.dummyVarNLSJac4 = $cse2 * gENCLS.vq.$pDERNLSJac4.dummyVarNLSJac4 + $cse1 * gENCLS.vd.$pDERNLSJac4.dummyVarNLSJac4 - pwLine4.vr.re.SeedNLSJac4
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_600(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,600};
  jacobian->resultVars[19] /* $res_NLSJac4_20.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = (data->localData[0]->realVars[27] /* $cse2 variable */) * (jacobian->tmpVars[15] /* gENCLS.vq.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[26] /* $cse1 variable */) * (jacobian->tmpVars[16] /* gENCLS.vd.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) - jacobian->seedVars[14] /* pwLine4.vr.re.SeedNLSJac4 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 601
type: SIMPLE_ASSIGN
$res_NLSJac4_21.$pDERNLSJac4.dummyVarNLSJac4 = $cse1 * gENCLS.vq.$pDERNLSJac4.dummyVarNLSJac4 + (-$cse2) * gENCLS.vd.$pDERNLSJac4.dummyVarNLSJac4 - pwLine4.vr.im.SeedNLSJac4
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_601(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,601};
  jacobian->resultVars[20] /* $res_NLSJac4_21.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = (data->localData[0]->realVars[26] /* $cse1 variable */) * (jacobian->tmpVars[15] /* gENCLS.vq.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) + ((-data->localData[0]->realVars[27] /* $cse2 variable */)) * (jacobian->tmpVars[16] /* gENCLS.vd.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) - jacobian->seedVars[15] /* pwLine4.vr.im.SeedNLSJac4 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 602
type: SIMPLE_ASSIGN
$res_NLSJac4_22.$pDERNLSJac4.dummyVarNLSJac4 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.ir.im.SeedNLSJac4 else pwLine4.vr.im.SeedNLSJac4 - pwLine3.vs.im.SeedNLSJac4 - (pwLine1.Z.re * (pwLine1.ir.im.SeedNLSJac4 + (-pwLine4.vr.re.SeedNLSJac4) * pwLine1.Y.im - pwLine4.vr.im.SeedNLSJac4 * pwLine1.Y.re) + pwLine1.Z.im * (pwLine1.ir.re.SeedNLSJac4 + pwLine4.vr.im.SeedNLSJac4 * pwLine1.Y.im - pwLine4.vr.re.SeedNLSJac4 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_602(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,602};
  modelica_boolean tmp106;
  modelica_boolean tmp107;
  RELATIONHYSTERESIS(tmp106, data->localData[0]->timeValue, data->simulationInfo->realParameter[315] /* pwLine1.t1 PARAM */, 12, GreaterEq);
  RELATIONHYSTERESIS(tmp107, data->localData[0]->timeValue, data->simulationInfo->realParameter[316] /* pwLine1.t2 PARAM */, 13, Less);
  jacobian->resultVars[21] /* $res_NLSJac4_22.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = ((tmp106 && tmp107)?jacobian->seedVars[10] /* pwLine1.ir.im.SeedNLSJac4 SEED_VAR */:jacobian->seedVars[15] /* pwLine4.vr.im.SeedNLSJac4 SEED_VAR */ - jacobian->seedVars[18] /* pwLine3.vs.im.SeedNLSJac4 SEED_VAR */ - ((data->simulationInfo->realParameter[314] /* pwLine1.Z.re PARAM */) * (jacobian->seedVars[10] /* pwLine1.ir.im.SeedNLSJac4 SEED_VAR */ + ((-jacobian->seedVars[14] /* pwLine4.vr.re.SeedNLSJac4 SEED_VAR */)) * (data->simulationInfo->realParameter[311] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine4.vr.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[312] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[313] /* pwLine1.Z.im PARAM */) * (jacobian->seedVars[11] /* pwLine1.ir.re.SeedNLSJac4 SEED_VAR */ + (jacobian->seedVars[15] /* pwLine4.vr.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[311] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine4.vr.re.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[312] /* pwLine1.Y.re PARAM */)))));
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
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_558(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_559(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_560(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_561(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_562(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_563(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_564(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_565(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_566(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_567(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_568(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_569(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_570(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_571(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_572(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_573(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_574(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_575(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_576(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_577(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_578(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_579(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_580(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_581(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_582(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_583(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_584(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_585(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_586(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_587(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_588(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_589(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_590(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_591(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_592(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_593(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_594(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_595(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_596(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_597(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_598(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_599(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_600(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_601(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_602(data, threadData, jacobian, parentJacobian);
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
  const int colPtrIndex[1+22] = {0,4,4,4,4,3,3,3,3,4,4,4,4,4,4,7,7,4,4,11,11,8,8};
  const int rowIndex[112] = {12,15,16,17,12,13,14,15,13,14,16,17,12,13,14,15,4,5,6,3,4,9,2,3,9,2,5,6,0,1,12,15,0,1,13,14,7,8,18,21,7,8,18,21,7,8,19,20,7,8,19,20,5,7,8,16,18,19,21,6,7,8,17,18,20,21,10,11,13,14,10,11,13,14,0,1,3,10,12,13,14,15,16,17,21,0,1,9,11,12,13,14,15,16,17,18,0,2,3,4,5,6,8,9,1,2,3,4,5,6,7,9};
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
  jacobian->sparsePattern->colorCols[8] = 8;
  jacobian->sparsePattern->colorCols[12] = 8;
  jacobian->sparsePattern->colorCols[1] = 9;
  jacobian->sparsePattern->colorCols[5] = 9;
  jacobian->sparsePattern->colorCols[7] = 9;
  jacobian->sparsePattern->colorCols[11] = 9;
  jacobian->sparsePattern->colorCols[0] = 10;
  jacobian->sparsePattern->colorCols[4] = 10;
  jacobian->sparsePattern->colorCols[6] = 10;
  jacobian->sparsePattern->colorCols[9] = 10;
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


