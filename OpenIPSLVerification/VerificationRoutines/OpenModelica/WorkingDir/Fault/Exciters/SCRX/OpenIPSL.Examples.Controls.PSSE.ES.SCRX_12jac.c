/* Jacobians 6 */
#include "OpenIPSL.Examples.Controls.PSSE.ES.SCRX_model.h"
#include "OpenIPSL.Examples.Controls.PSSE.ES.SCRX_12jac.h"
/* constant equations */
/* dynamic equations */

/*
equation index: 205
type: SIMPLE_ASSIGN
constantLoad.v.$pDERNLSJac43.dummyVarNLSJac43 = (pwLine1.vs.re * pwLine1.vs.re.SeedNLSJac43 + pwLine1.vs.im * pwLine1.vs.im.SeedNLSJac43) / sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_205(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,205};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[103] /* pwLine1.vs.re variable */;
  tmp1 = data->localData[0]->realVars[102] /* pwLine1.vs.im variable */;
  jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac43.dummyVarNLSJac43 JACOBIAN_DIFF_VAR */ = DIVISION((data->localData[0]->realVars[103] /* pwLine1.vs.re variable */) * (jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac43 SEED_VAR */) + (data->localData[0]->realVars[102] /* pwLine1.vs.im variable */) * (jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac43 SEED_VAR */),sqrt((tmp0 * tmp0) + (tmp1 * tmp1)),"sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)");
  TRACE_POP
}

/*
equation index: 206
type: SIMPLE_ASSIGN
constantLoad.kP.$pDERNLSJac43.dummyVarNLSJac43 = if constantLoad.v < constantLoad.PQBRAK then constantLoad.a1 * (-sin(constantLoad.v * constantLoad.wp)) * constantLoad.v.$pDERNLSJac43.dummyVarNLSJac43 * constantLoad.wp + constantLoad.b1 * cos(constantLoad.v * constantLoad.wp) * constantLoad.v.$pDERNLSJac43.dummyVarNLSJac43 * constantLoad.wp else 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_206(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,206};
  modelica_boolean tmp2;
  RELATIONHYSTERESIS(tmp2, data->localData[0]->realVars[49] /* constantLoad.v variable */, data->simulationInfo->realParameter[39] /* constantLoad.PQBRAK PARAM */, 6, Less);
  jacobian->tmpVars[1] /* constantLoad.kP.$pDERNLSJac43.dummyVarNLSJac43 JACOBIAN_DIFF_VAR */ = (tmp2?(data->simulationInfo->realParameter[59] /* constantLoad.a1 PARAM */) * (((-sin((data->localData[0]->realVars[49] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[79] /* constantLoad.wp PARAM */)))) * ((jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac43.dummyVarNLSJac43 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[79] /* constantLoad.wp PARAM */))) + (data->simulationInfo->realParameter[65] /* constantLoad.b1 PARAM */) * ((cos((data->localData[0]->realVars[49] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[79] /* constantLoad.wp PARAM */))) * ((jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac43.dummyVarNLSJac43 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[79] /* constantLoad.wp PARAM */))):0.0);
  TRACE_POP
}

/*
equation index: 207
type: SIMPLE_ASSIGN
constantLoad.kI.$pDERNLSJac43.dummyVarNLSJac43 = if constantLoad.v < 0.5 then constantLoad.a2 * constantLoad.b2 * (constantLoad.v ^ (-1.0 + constantLoad.b2) * (-exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2)) * constantLoad.a2 * constantLoad.b2 * constantLoad.v ^ (constantLoad.b2 - 1.0) * constantLoad.v.$pDERNLSJac43.dummyVarNLSJac43 + (if noEvent(constantLoad.v == 0.0) then 0.0 else constantLoad.v ^ (-1.0 + constantLoad.b2 - 1.0) * (-1.0 + constantLoad.b2) * constantLoad.v.$pDERNLSJac43.dummyVarNLSJac43) * exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2)) else 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_207(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,207};
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
  RELATIONHYSTERESIS(tmp3, data->localData[0]->realVars[49] /* constantLoad.v variable */, 0.5, 7, Less);
  tmp42 = (modelica_boolean)tmp3;
  if(tmp42)
  {
    tmp4 = data->localData[0]->realVars[49] /* constantLoad.v variable */;
    tmp5 = -1.0 + data->simulationInfo->realParameter[66] /* constantLoad.b2 PARAM */;
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
    }tmp11 = data->localData[0]->realVars[49] /* constantLoad.v variable */;
    tmp12 = data->simulationInfo->realParameter[66] /* constantLoad.b2 PARAM */;
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
    }tmp18 = data->localData[0]->realVars[49] /* constantLoad.v variable */;
    tmp19 = data->simulationInfo->realParameter[66] /* constantLoad.b2 PARAM */ - 1.0;
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
    }tmp33 = (modelica_boolean)(data->localData[0]->realVars[49] /* constantLoad.v variable */ == 0.0);
    if(tmp33)
    {
      tmp34 = 0.0;
    }
    else
    {
      tmp26 = data->localData[0]->realVars[49] /* constantLoad.v variable */;
      tmp27 = -1.0 + data->simulationInfo->realParameter[66] /* constantLoad.b2 PARAM */ - 1.0;
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
      tmp34 = (tmp28) * ((-1.0 + data->simulationInfo->realParameter[66] /* constantLoad.b2 PARAM */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac43.dummyVarNLSJac43 JACOBIAN_DIFF_VAR */));
    }
    tmp35 = data->localData[0]->realVars[49] /* constantLoad.v variable */;
    tmp36 = data->simulationInfo->realParameter[66] /* constantLoad.b2 PARAM */;
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
    tmp43 = (data->simulationInfo->realParameter[60] /* constantLoad.a2 PARAM */) * ((data->simulationInfo->realParameter[66] /* constantLoad.b2 PARAM */) * ((tmp6) * (((-exp(((-data->simulationInfo->realParameter[60] /* constantLoad.a2 PARAM */)) * (tmp13)))) * ((data->simulationInfo->realParameter[60] /* constantLoad.a2 PARAM */) * (((data->simulationInfo->realParameter[66] /* constantLoad.b2 PARAM */) * (tmp20)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac43.dummyVarNLSJac43 JACOBIAN_DIFF_VAR */)))) + (tmp34) * (exp(((-data->simulationInfo->realParameter[60] /* constantLoad.a2 PARAM */)) * (tmp37)))));
  }
  else
  {
    tmp43 = 0.0;
  }
  jacobian->tmpVars[2] /* constantLoad.kI.$pDERNLSJac43.dummyVarNLSJac43 JACOBIAN_DIFF_VAR */ = tmp43;
  TRACE_POP
}

/*
equation index: 208
type: SIMPLE_ASSIGN
constantLoad.Q.$pDERNLSJac43.dummyVarNLSJac43 = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.S_I.im * (constantLoad.kI * constantLoad.v.$pDERNLSJac43.dummyVarNLSJac43 + constantLoad.kI.$pDERNLSJac43.dummyVarNLSJac43 * constantLoad.v) + constantLoad.S_Y.im * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac43.dummyVarNLSJac43 + constantLoad.kP.$pDERNLSJac43.dummyVarNLSJac43 * (constantLoad.S_P.im + constantLoad.d_Q) else constantLoad.S_I.im * (constantLoad.kI * constantLoad.v.$pDERNLSJac43.dummyVarNLSJac43 + constantLoad.kI.$pDERNLSJac43.dummyVarNLSJac43 * constantLoad.v) + constantLoad.S_Y.im * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac43.dummyVarNLSJac43 + constantLoad.kP.$pDERNLSJac43.dummyVarNLSJac43 * constantLoad.S_P.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_208(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,208};
  modelica_boolean tmp44;
  modelica_boolean tmp45;
  RELATIONHYSTERESIS(tmp44, data->localData[0]->timeValue, data->simulationInfo->realParameter[75] /* constantLoad.t1 PARAM */, 4, GreaterEq);
  RELATIONHYSTERESIS(tmp45, data->localData[0]->timeValue, data->simulationInfo->realParameter[75] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[69] /* constantLoad.d_t PARAM */, 5, LessEq);
  jacobian->tmpVars[3] /* constantLoad.Q.$pDERNLSJac43.dummyVarNLSJac43 JACOBIAN_DIFF_VAR */ = ((tmp44 && tmp45)?(data->simulationInfo->realParameter[42] /* constantLoad.S_I.im PARAM */) * ((data->localData[0]->realVars[45] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac43.dummyVarNLSJac43 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[2] /* constantLoad.kI.$pDERNLSJac43.dummyVarNLSJac43 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[49] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[46] /* constantLoad.S_Y.im PARAM */) * (((2.0) * (data->localData[0]->realVars[49] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac43.dummyVarNLSJac43 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[1] /* constantLoad.kP.$pDERNLSJac43.dummyVarNLSJac43 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[44] /* constantLoad.S_P.im PARAM */ + data->simulationInfo->realParameter[68] /* constantLoad.d_Q PARAM */):(data->simulationInfo->realParameter[42] /* constantLoad.S_I.im PARAM */) * ((data->localData[0]->realVars[45] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac43.dummyVarNLSJac43 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[2] /* constantLoad.kI.$pDERNLSJac43.dummyVarNLSJac43 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[49] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[46] /* constantLoad.S_Y.im PARAM */) * (((2.0) * (data->localData[0]->realVars[49] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac43.dummyVarNLSJac43 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[1] /* constantLoad.kP.$pDERNLSJac43.dummyVarNLSJac43 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[44] /* constantLoad.S_P.im PARAM */));
  TRACE_POP
}

/*
equation index: 209
type: SIMPLE_ASSIGN
constantLoad.P.$pDERNLSJac43.dummyVarNLSJac43 = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.S_I.re * (constantLoad.kI * constantLoad.v.$pDERNLSJac43.dummyVarNLSJac43 + constantLoad.kI.$pDERNLSJac43.dummyVarNLSJac43 * constantLoad.v) + constantLoad.S_Y.re * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac43.dummyVarNLSJac43 + constantLoad.kP.$pDERNLSJac43.dummyVarNLSJac43 * (constantLoad.S_P.re + constantLoad.d_P) else constantLoad.S_I.re * (constantLoad.kI * constantLoad.v.$pDERNLSJac43.dummyVarNLSJac43 + constantLoad.kI.$pDERNLSJac43.dummyVarNLSJac43 * constantLoad.v) + constantLoad.S_Y.re * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac43.dummyVarNLSJac43 + constantLoad.kP.$pDERNLSJac43.dummyVarNLSJac43 * constantLoad.S_P.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_209(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,209};
  modelica_boolean tmp46;
  modelica_boolean tmp47;
  RELATIONHYSTERESIS(tmp46, data->localData[0]->timeValue, data->simulationInfo->realParameter[75] /* constantLoad.t1 PARAM */, 4, GreaterEq);
  RELATIONHYSTERESIS(tmp47, data->localData[0]->timeValue, data->simulationInfo->realParameter[75] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[69] /* constantLoad.d_t PARAM */, 5, LessEq);
  jacobian->tmpVars[4] /* constantLoad.P.$pDERNLSJac43.dummyVarNLSJac43 JACOBIAN_DIFF_VAR */ = ((tmp46 && tmp47)?(data->simulationInfo->realParameter[43] /* constantLoad.S_I.re PARAM */) * ((data->localData[0]->realVars[45] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac43.dummyVarNLSJac43 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[2] /* constantLoad.kI.$pDERNLSJac43.dummyVarNLSJac43 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[49] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[47] /* constantLoad.S_Y.re PARAM */) * (((2.0) * (data->localData[0]->realVars[49] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac43.dummyVarNLSJac43 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[1] /* constantLoad.kP.$pDERNLSJac43.dummyVarNLSJac43 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[45] /* constantLoad.S_P.re PARAM */ + data->simulationInfo->realParameter[67] /* constantLoad.d_P PARAM */):(data->simulationInfo->realParameter[43] /* constantLoad.S_I.re PARAM */) * ((data->localData[0]->realVars[45] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac43.dummyVarNLSJac43 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[2] /* constantLoad.kI.$pDERNLSJac43.dummyVarNLSJac43 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[49] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[47] /* constantLoad.S_Y.re PARAM */) * (((2.0) * (data->localData[0]->realVars[49] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac43.dummyVarNLSJac43 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[1] /* constantLoad.kP.$pDERNLSJac43.dummyVarNLSJac43 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[45] /* constantLoad.S_P.re PARAM */));
  TRACE_POP
}

/*
equation index: 210
type: SIMPLE_ASSIGN
gENROU.PSId.$pDERNLSJac43.dummyVarNLSJac43 = (-gENROU.Xppd) * gENROU.id.SeedNLSJac43
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_210(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,210};
  jacobian->tmpVars[5] /* gENROU.PSId.$pDERNLSJac43.dummyVarNLSJac43 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[160] /* gENROU.Xppd PARAM */)) * (jacobian->seedVars[17] /* gENROU.id.SeedNLSJac43 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 211
type: SIMPLE_ASSIGN
pwLine.is.im.$pDERNLSJac43.dummyVarNLSJac43 = ($cse6 * gENROU.iq.SeedNLSJac43 - $cse7 * gENROU.id.SeedNLSJac43) * gENROU.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_211(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,211};
  jacobian->tmpVars[6] /* pwLine.is.im.$pDERNLSJac43.dummyVarNLSJac43 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[24] /* $cse6 variable */) * (jacobian->seedVars[16] /* gENROU.iq.SeedNLSJac43 SEED_VAR */) - ((data->localData[0]->realVars[25] /* $cse7 variable */) * (jacobian->seedVars[17] /* gENROU.id.SeedNLSJac43 SEED_VAR */))) * (data->simulationInfo->realParameter[106] /* gENROU.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 212
type: SIMPLE_ASSIGN
pwLine.is.re.$pDERNLSJac43.dummyVarNLSJac43 = ($cse7 * gENROU.iq.SeedNLSJac43 + $cse6 * gENROU.id.SeedNLSJac43) * gENROU.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_212(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,212};
  jacobian->tmpVars[7] /* pwLine.is.re.$pDERNLSJac43.dummyVarNLSJac43 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[25] /* $cse7 variable */) * (jacobian->seedVars[16] /* gENROU.iq.SeedNLSJac43 SEED_VAR */) + (data->localData[0]->realVars[24] /* $cse6 variable */) * (jacobian->seedVars[17] /* gENROU.id.SeedNLSJac43 SEED_VAR */)) * (data->simulationInfo->realParameter[106] /* gENROU.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 213
type: SIMPLE_ASSIGN
gENROU.uq.$pDERNLSJac43.dummyVarNLSJac43 = gENROU.PSId.$pDERNLSJac43.dummyVarNLSJac43 - gENROU.R_a * gENROU.iq.SeedNLSJac43
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_213(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,213};
  jacobian->tmpVars[8] /* gENROU.uq.$pDERNLSJac43.dummyVarNLSJac43 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[5] /* gENROU.PSId.$pDERNLSJac43.dummyVarNLSJac43 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[143] /* gENROU.R_a PARAM */) * (jacobian->seedVars[16] /* gENROU.iq.SeedNLSJac43 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 214
type: SIMPLE_ASSIGN
gENROU.PSIq.$pDERNLSJac43.dummyVarNLSJac43 = (-gENROU.Xppq) * gENROU.iq.SeedNLSJac43
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_214(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,214};
  jacobian->tmpVars[9] /* gENROU.PSIq.$pDERNLSJac43.dummyVarNLSJac43 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[161] /* gENROU.Xppq PARAM */)) * (jacobian->seedVars[16] /* gENROU.iq.SeedNLSJac43 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 215
type: SIMPLE_ASSIGN
gENROU.ud.$pDERNLSJac43.dummyVarNLSJac43 = (-gENROU.PSIq.$pDERNLSJac43.dummyVarNLSJac43) - gENROU.R_a * gENROU.id.SeedNLSJac43
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_215(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,215};
  jacobian->tmpVars[10] /* gENROU.ud.$pDERNLSJac43.dummyVarNLSJac43 JACOBIAN_DIFF_VAR */ = (-jacobian->tmpVars[9] /* gENROU.PSIq.$pDERNLSJac43.dummyVarNLSJac43 JACOBIAN_DIFF_VAR */) - ((data->simulationInfo->realParameter[143] /* gENROU.R_a PARAM */) * (jacobian->seedVars[17] /* gENROU.id.SeedNLSJac43 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 216
type: SIMPLE_ASSIGN
pwLine.vs.re.$pDERNLSJac43.dummyVarNLSJac43 = $cse6 * gENROU.ud.$pDERNLSJac43.dummyVarNLSJac43 + $cse7 * gENROU.uq.$pDERNLSJac43.dummyVarNLSJac43
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_216(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,216};
  jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac43.dummyVarNLSJac43 JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[24] /* $cse6 variable */) * (jacobian->tmpVars[10] /* gENROU.ud.$pDERNLSJac43.dummyVarNLSJac43 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[25] /* $cse7 variable */) * (jacobian->tmpVars[8] /* gENROU.uq.$pDERNLSJac43.dummyVarNLSJac43 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 217
type: SIMPLE_ASSIGN
pwLine.vs.im.$pDERNLSJac43.dummyVarNLSJac43 = $cse6 * gENROU.uq.$pDERNLSJac43.dummyVarNLSJac43 - $cse7 * gENROU.ud.$pDERNLSJac43.dummyVarNLSJac43
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_217(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,217};
  jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac43.dummyVarNLSJac43 JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[24] /* $cse6 variable */) * (jacobian->tmpVars[8] /* gENROU.uq.$pDERNLSJac43.dummyVarNLSJac43 JACOBIAN_DIFF_VAR */) - ((data->localData[0]->realVars[25] /* $cse7 variable */) * (jacobian->tmpVars[10] /* gENROU.ud.$pDERNLSJac43.dummyVarNLSJac43 JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 218
type: SIMPLE_ASSIGN
gENCLS.p.ir.$pDERNLSJac43.dummyVarNLSJac43 = ((-$cse1) * gENCLS.id.SeedNLSJac43 - $cse2 * gENCLS.iq.SeedNLSJac43) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_218(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,218};
  jacobian->tmpVars[13] /* gENCLS.p.ir.$pDERNLSJac43.dummyVarNLSJac43 JACOBIAN_DIFF_VAR */ = (((-data->localData[0]->realVars[20] /* $cse1 variable */)) * (jacobian->seedVars[13] /* gENCLS.id.SeedNLSJac43 SEED_VAR */) - ((data->localData[0]->realVars[21] /* $cse2 variable */) * (jacobian->seedVars[12] /* gENCLS.iq.SeedNLSJac43 SEED_VAR */))) * (data->simulationInfo->realParameter[80] /* gENCLS.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 219
type: SIMPLE_ASSIGN
gENCLS.p.ii.$pDERNLSJac43.dummyVarNLSJac43 = ($cse2 * gENCLS.id.SeedNLSJac43 - $cse1 * gENCLS.iq.SeedNLSJac43) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_219(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,219};
  jacobian->tmpVars[14] /* gENCLS.p.ii.$pDERNLSJac43.dummyVarNLSJac43 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[21] /* $cse2 variable */) * (jacobian->seedVars[13] /* gENCLS.id.SeedNLSJac43 SEED_VAR */) - ((data->localData[0]->realVars[20] /* $cse1 variable */) * (jacobian->seedVars[12] /* gENCLS.iq.SeedNLSJac43 SEED_VAR */))) * (data->simulationInfo->realParameter[80] /* gENCLS.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 220
type: SIMPLE_ASSIGN
gENCLS.vd.$pDERNLSJac43.dummyVarNLSJac43 = gENCLS.X_d * gENCLS.iq.SeedNLSJac43 - gENCLS.R_a * gENCLS.id.SeedNLSJac43
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_220(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,220};
  jacobian->tmpVars[15] /* gENCLS.vd.$pDERNLSJac43.dummyVarNLSJac43 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[89] /* gENCLS.X_d PARAM */) * (jacobian->seedVars[12] /* gENCLS.iq.SeedNLSJac43 SEED_VAR */) - ((data->simulationInfo->realParameter[86] /* gENCLS.R_a PARAM */) * (jacobian->seedVars[13] /* gENCLS.id.SeedNLSJac43 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 221
type: SIMPLE_ASSIGN
gENCLS.vq.$pDERNLSJac43.dummyVarNLSJac43 = (-gENCLS.R_a) * gENCLS.iq.SeedNLSJac43 - gENCLS.X_d * gENCLS.id.SeedNLSJac43
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_221(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,221};
  jacobian->tmpVars[16] /* gENCLS.vq.$pDERNLSJac43.dummyVarNLSJac43 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[86] /* gENCLS.R_a PARAM */)) * (jacobian->seedVars[12] /* gENCLS.iq.SeedNLSJac43 SEED_VAR */) - ((data->simulationInfo->realParameter[89] /* gENCLS.X_d PARAM */) * (jacobian->seedVars[13] /* gENCLS.id.SeedNLSJac43 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 222
type: SIMPLE_ASSIGN
pwLine1.ir.im.$pDERNLSJac43.dummyVarNLSJac43 = (-pwLine4.ir.im.SeedNLSJac43) - gENCLS.p.ii.$pDERNLSJac43.dummyVarNLSJac43
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_222(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,222};
  jacobian->tmpVars[17] /* pwLine1.ir.im.$pDERNLSJac43.dummyVarNLSJac43 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[11] /* pwLine4.ir.im.SeedNLSJac43 SEED_VAR */) - jacobian->tmpVars[14] /* gENCLS.p.ii.$pDERNLSJac43.dummyVarNLSJac43 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 223
type: SIMPLE_ASSIGN
pwLine4.ir.re.$pDERNLSJac43.dummyVarNLSJac43 = (-pwLine1.ir.re.SeedNLSJac43) - gENCLS.p.ir.$pDERNLSJac43.dummyVarNLSJac43
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_223(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,223};
  jacobian->tmpVars[18] /* pwLine4.ir.re.$pDERNLSJac43.dummyVarNLSJac43 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[10] /* pwLine1.ir.re.SeedNLSJac43 SEED_VAR */) - jacobian->tmpVars[13] /* gENCLS.p.ir.$pDERNLSJac43.dummyVarNLSJac43 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 224
type: SIMPLE_ASSIGN
pwFault.p.ir.$pDERNLSJac43.dummyVarNLSJac43 = (-pwLine3.ir.re.SeedNLSJac43) - pwLine4.is.re.SeedNLSJac43
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_224(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,224};
  jacobian->tmpVars[19] /* pwFault.p.ir.$pDERNLSJac43.dummyVarNLSJac43 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[7] /* pwLine3.ir.re.SeedNLSJac43 SEED_VAR */) - jacobian->seedVars[6] /* pwLine4.is.re.SeedNLSJac43 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 225
type: SIMPLE_ASSIGN
pwFault.p.ii.$pDERNLSJac43.dummyVarNLSJac43 = (-pwLine3.ir.im.SeedNLSJac43) - pwLine4.is.im.SeedNLSJac43
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_225(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,225};
  jacobian->tmpVars[20] /* pwFault.p.ii.$pDERNLSJac43.dummyVarNLSJac43 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[4] /* pwLine3.ir.im.SeedNLSJac43 SEED_VAR */) - jacobian->seedVars[5] /* pwLine4.is.im.SeedNLSJac43 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 226
type: SIMPLE_ASSIGN
pwLine1.is.re.$pDERNLSJac43.dummyVarNLSJac43 = (-pwLine.ir.re.SeedNLSJac43) - pwLine3.is.re.SeedNLSJac43 - constantLoad.p.ir.SeedNLSJac43
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_226(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,226};
  jacobian->tmpVars[21] /* pwLine1.is.re.$pDERNLSJac43.dummyVarNLSJac43 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[3] /* pwLine.ir.re.SeedNLSJac43 SEED_VAR */) - jacobian->seedVars[8] /* pwLine3.is.re.SeedNLSJac43 SEED_VAR */ - jacobian->seedVars[2] /* constantLoad.p.ir.SeedNLSJac43 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 227
type: SIMPLE_ASSIGN
constantLoad.p.ii.$pDERNLSJac43.dummyVarNLSJac43 = (-pwLine.ir.im.SeedNLSJac43) - pwLine1.is.im.SeedNLSJac43 - pwLine3.is.im.SeedNLSJac43
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_227(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,227};
  jacobian->tmpVars[22] /* constantLoad.p.ii.$pDERNLSJac43.dummyVarNLSJac43 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[0] /* pwLine.ir.im.SeedNLSJac43 SEED_VAR */) - jacobian->seedVars[1] /* pwLine1.is.im.SeedNLSJac43 SEED_VAR */ - jacobian->seedVars[9] /* pwLine3.is.im.SeedNLSJac43 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 228
type: SIMPLE_ASSIGN
$res_NLSJac43_1.$pDERNLSJac43.dummyVarNLSJac43 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.is.im.SeedNLSJac43 else pwLine1.vs.im.SeedNLSJac43 - pwLine3.vr.im.SeedNLSJac43 - (pwLine3.Z.re * (pwLine3.is.im.SeedNLSJac43 + (-pwLine1.vs.re.SeedNLSJac43) * pwLine3.Y.im - pwLine1.vs.im.SeedNLSJac43 * pwLine3.Y.re) + pwLine3.Z.im * (pwLine3.is.re.SeedNLSJac43 + pwLine1.vs.im.SeedNLSJac43 * pwLine3.Y.im - pwLine1.vs.re.SeedNLSJac43 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_228(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,228};
  modelica_boolean tmp48;
  modelica_boolean tmp49;
  RELATIONHYSTERESIS(tmp48, data->localData[0]->timeValue, data->simulationInfo->realParameter[226] /* pwLine3.t1 PARAM */, 8, GreaterEq);
  RELATIONHYSTERESIS(tmp49, data->localData[0]->timeValue, data->simulationInfo->realParameter[227] /* pwLine3.t2 PARAM */, 9, Less);
  jacobian->resultVars[0] /* $res_NLSJac43_1.$pDERNLSJac43.dummyVarNLSJac43 JACOBIAN_VAR */ = ((tmp48 && tmp49)?jacobian->seedVars[9] /* pwLine3.is.im.SeedNLSJac43 SEED_VAR */:jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac43 SEED_VAR */ - jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac43 SEED_VAR */ - ((data->simulationInfo->realParameter[225] /* pwLine3.Z.re PARAM */) * (jacobian->seedVars[9] /* pwLine3.is.im.SeedNLSJac43 SEED_VAR */ + ((-jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac43 SEED_VAR */)) * (data->simulationInfo->realParameter[222] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac43 SEED_VAR */) * (data->simulationInfo->realParameter[223] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[224] /* pwLine3.Z.im PARAM */) * (jacobian->seedVars[8] /* pwLine3.is.re.SeedNLSJac43 SEED_VAR */ + (jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac43 SEED_VAR */) * (data->simulationInfo->realParameter[222] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac43 SEED_VAR */) * (data->simulationInfo->realParameter[223] /* pwLine3.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 229
type: SIMPLE_ASSIGN
$res_NLSJac43_2.$pDERNLSJac43.dummyVarNLSJac43 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.is.re.SeedNLSJac43 else pwLine1.vs.re.SeedNLSJac43 - pwLine3.vr.re.SeedNLSJac43 - (pwLine3.Z.re * (pwLine3.is.re.SeedNLSJac43 + pwLine1.vs.im.SeedNLSJac43 * pwLine3.Y.im - pwLine1.vs.re.SeedNLSJac43 * pwLine3.Y.re) - pwLine3.Z.im * (pwLine3.is.im.SeedNLSJac43 + (-pwLine1.vs.re.SeedNLSJac43) * pwLine3.Y.im - pwLine1.vs.im.SeedNLSJac43 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_229(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,229};
  modelica_boolean tmp50;
  modelica_boolean tmp51;
  RELATIONHYSTERESIS(tmp50, data->localData[0]->timeValue, data->simulationInfo->realParameter[226] /* pwLine3.t1 PARAM */, 8, GreaterEq);
  RELATIONHYSTERESIS(tmp51, data->localData[0]->timeValue, data->simulationInfo->realParameter[227] /* pwLine3.t2 PARAM */, 9, Less);
  jacobian->resultVars[1] /* $res_NLSJac43_2.$pDERNLSJac43.dummyVarNLSJac43 JACOBIAN_VAR */ = ((tmp50 && tmp51)?jacobian->seedVars[8] /* pwLine3.is.re.SeedNLSJac43 SEED_VAR */:jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac43 SEED_VAR */ - jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac43 SEED_VAR */ - ((data->simulationInfo->realParameter[225] /* pwLine3.Z.re PARAM */) * (jacobian->seedVars[8] /* pwLine3.is.re.SeedNLSJac43 SEED_VAR */ + (jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac43 SEED_VAR */) * (data->simulationInfo->realParameter[222] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac43 SEED_VAR */) * (data->simulationInfo->realParameter[223] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[224] /* pwLine3.Z.im PARAM */) * (jacobian->seedVars[9] /* pwLine3.is.im.SeedNLSJac43 SEED_VAR */ + ((-jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac43 SEED_VAR */)) * (data->simulationInfo->realParameter[222] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac43 SEED_VAR */) * (data->simulationInfo->realParameter[223] /* pwLine3.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 230
type: SIMPLE_ASSIGN
$res_NLSJac43_3.$pDERNLSJac43.dummyVarNLSJac43 = if time < pwFault.t1 then pwFault.p.ir.$pDERNLSJac43.dummyVarNLSJac43 else if time < pwFault.t2 and pwFault.ground then pwLine3.vr.im.SeedNLSJac43 else if time < pwFault.t2 then pwFault.p.ir.$pDERNLSJac43.dummyVarNLSJac43 - (pwFault.R * pwLine3.vr.re.SeedNLSJac43 + pwFault.X * pwLine3.vr.im.SeedNLSJac43) * (pwFault.R ^ 2.0 + pwFault.X ^ 2.0) / (pwFault.R ^ 2.0 + pwFault.X ^ 2.0) ^ 2.0 else pwFault.p.ir.$pDERNLSJac43.dummyVarNLSJac43
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_230(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,230};
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
  RELATIONHYSTERESIS(tmp52, data->localData[0]->timeValue, data->simulationInfo->realParameter[193] /* pwFault.t1 PARAM */, 12, Less);
  tmp64 = (modelica_boolean)tmp52;
  if(tmp64)
  {
    tmp65 = jacobian->tmpVars[19] /* pwFault.p.ir.$pDERNLSJac43.dummyVarNLSJac43 JACOBIAN_DIFF_VAR */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp53, data->localData[0]->timeValue, data->simulationInfo->realParameter[194] /* pwFault.t2 PARAM */, 13, Less);
    tmp62 = (modelica_boolean)(tmp53 && data->simulationInfo->booleanParameter[63] /* pwFault.ground PARAM */);
    if(tmp62)
    {
      tmp63 = jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac43 SEED_VAR */;
    }
    else
    {
      RELATIONHYSTERESIS(tmp54, data->localData[0]->timeValue, data->simulationInfo->realParameter[194] /* pwFault.t2 PARAM */, 13, Less);
      tmp60 = (modelica_boolean)tmp54;
      if(tmp60)
      {
        tmp55 = data->simulationInfo->realParameter[191] /* pwFault.R PARAM */;
        tmp56 = data->simulationInfo->realParameter[192] /* pwFault.X PARAM */;
        tmp57 = data->simulationInfo->realParameter[191] /* pwFault.R PARAM */;
        tmp58 = data->simulationInfo->realParameter[192] /* pwFault.X PARAM */;
        tmp59 = (tmp57 * tmp57) + (tmp58 * tmp58);
        tmp61 = jacobian->tmpVars[19] /* pwFault.p.ir.$pDERNLSJac43.dummyVarNLSJac43 JACOBIAN_DIFF_VAR */ - (DIVISION(((data->simulationInfo->realParameter[191] /* pwFault.R PARAM */) * (jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac43 SEED_VAR */) + (data->simulationInfo->realParameter[192] /* pwFault.X PARAM */) * (jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac43 SEED_VAR */)) * ((tmp55 * tmp55) + (tmp56 * tmp56)),(tmp59 * tmp59),"(pwFault.R ^ 2.0 + pwFault.X ^ 2.0) ^ 2.0"));
      }
      else
      {
        tmp61 = jacobian->tmpVars[19] /* pwFault.p.ir.$pDERNLSJac43.dummyVarNLSJac43 JACOBIAN_DIFF_VAR */;
      }
      tmp63 = tmp61;
    }
    tmp65 = tmp63;
  }
  jacobian->resultVars[2] /* $res_NLSJac43_3.$pDERNLSJac43.dummyVarNLSJac43 JACOBIAN_VAR */ = tmp65;
  TRACE_POP
}

/*
equation index: 231
type: SIMPLE_ASSIGN
$res_NLSJac43_4.$pDERNLSJac43.dummyVarNLSJac43 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.is.re.SeedNLSJac43 else pwLine3.vr.re.SeedNLSJac43 - pwLine1.vr.re.SeedNLSJac43 - (pwLine4.Z.re * (pwLine4.is.re.SeedNLSJac43 + pwLine3.vr.im.SeedNLSJac43 * pwLine4.Y.im - pwLine3.vr.re.SeedNLSJac43 * pwLine4.Y.re) - pwLine4.Z.im * (pwLine4.is.im.SeedNLSJac43 + (-pwLine3.vr.re.SeedNLSJac43) * pwLine4.Y.im - pwLine3.vr.im.SeedNLSJac43 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_231(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,231};
  modelica_boolean tmp66;
  modelica_boolean tmp67;
  RELATIONHYSTERESIS(tmp66, data->localData[0]->timeValue, data->simulationInfo->realParameter[237] /* pwLine4.t1 PARAM */, 10, GreaterEq);
  RELATIONHYSTERESIS(tmp67, data->localData[0]->timeValue, data->simulationInfo->realParameter[238] /* pwLine4.t2 PARAM */, 11, Less);
  jacobian->resultVars[3] /* $res_NLSJac43_4.$pDERNLSJac43.dummyVarNLSJac43 JACOBIAN_VAR */ = ((tmp66 && tmp67)?jacobian->seedVars[6] /* pwLine4.is.re.SeedNLSJac43 SEED_VAR */:jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac43 SEED_VAR */ - jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac43 SEED_VAR */ - ((data->simulationInfo->realParameter[236] /* pwLine4.Z.re PARAM */) * (jacobian->seedVars[6] /* pwLine4.is.re.SeedNLSJac43 SEED_VAR */ + (jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac43 SEED_VAR */) * (data->simulationInfo->realParameter[233] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac43 SEED_VAR */) * (data->simulationInfo->realParameter[234] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[235] /* pwLine4.Z.im PARAM */) * (jacobian->seedVars[5] /* pwLine4.is.im.SeedNLSJac43 SEED_VAR */ + ((-jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac43 SEED_VAR */)) * (data->simulationInfo->realParameter[233] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac43 SEED_VAR */) * (data->simulationInfo->realParameter[234] /* pwLine4.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 232
type: SIMPLE_ASSIGN
$res_NLSJac43_5.$pDERNLSJac43.dummyVarNLSJac43 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.is.im.SeedNLSJac43 else pwLine3.vr.im.SeedNLSJac43 - pwLine1.vr.im.SeedNLSJac43 - (pwLine4.Z.re * (pwLine4.is.im.SeedNLSJac43 + (-pwLine3.vr.re.SeedNLSJac43) * pwLine4.Y.im - pwLine3.vr.im.SeedNLSJac43 * pwLine4.Y.re) + pwLine4.Z.im * (pwLine4.is.re.SeedNLSJac43 + pwLine3.vr.im.SeedNLSJac43 * pwLine4.Y.im - pwLine3.vr.re.SeedNLSJac43 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_232(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,232};
  modelica_boolean tmp68;
  modelica_boolean tmp69;
  RELATIONHYSTERESIS(tmp68, data->localData[0]->timeValue, data->simulationInfo->realParameter[237] /* pwLine4.t1 PARAM */, 10, GreaterEq);
  RELATIONHYSTERESIS(tmp69, data->localData[0]->timeValue, data->simulationInfo->realParameter[238] /* pwLine4.t2 PARAM */, 11, Less);
  jacobian->resultVars[4] /* $res_NLSJac43_5.$pDERNLSJac43.dummyVarNLSJac43 JACOBIAN_VAR */ = ((tmp68 && tmp69)?jacobian->seedVars[5] /* pwLine4.is.im.SeedNLSJac43 SEED_VAR */:jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac43 SEED_VAR */ - jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac43 SEED_VAR */ - ((data->simulationInfo->realParameter[236] /* pwLine4.Z.re PARAM */) * (jacobian->seedVars[5] /* pwLine4.is.im.SeedNLSJac43 SEED_VAR */ + ((-jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac43 SEED_VAR */)) * (data->simulationInfo->realParameter[233] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac43 SEED_VAR */) * (data->simulationInfo->realParameter[234] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[235] /* pwLine4.Z.im PARAM */) * (jacobian->seedVars[6] /* pwLine4.is.re.SeedNLSJac43 SEED_VAR */ + (jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac43 SEED_VAR */) * (data->simulationInfo->realParameter[233] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac43 SEED_VAR */) * (data->simulationInfo->realParameter[234] /* pwLine4.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 233
type: SIMPLE_ASSIGN
$res_NLSJac43_6.$pDERNLSJac43.dummyVarNLSJac43 = if time < pwFault.t1 then pwFault.p.ii.$pDERNLSJac43.dummyVarNLSJac43 else if time < pwFault.t2 and pwFault.ground then pwLine3.vr.re.SeedNLSJac43 else if time < pwFault.t2 then pwFault.p.ii.$pDERNLSJac43.dummyVarNLSJac43 - (pwFault.R * pwLine3.vr.im.SeedNLSJac43 - pwFault.X * pwLine3.vr.re.SeedNLSJac43) * (pwFault.X ^ 2.0 + pwFault.R ^ 2.0) / (pwFault.X ^ 2.0 + pwFault.R ^ 2.0) ^ 2.0 else pwFault.p.ii.$pDERNLSJac43.dummyVarNLSJac43
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_233(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,233};
  modelica_boolean tmp70;
  modelica_boolean tmp71;
  modelica_boolean tmp72;
  modelica_real tmp73;
  modelica_real tmp74;
  modelica_real tmp75;
  modelica_real tmp76;
  modelica_real tmp77;
  modelica_boolean tmp78;
  modelica_real tmp79;
  modelica_boolean tmp80;
  modelica_real tmp81;
  modelica_boolean tmp82;
  modelica_real tmp83;
  RELATIONHYSTERESIS(tmp70, data->localData[0]->timeValue, data->simulationInfo->realParameter[193] /* pwFault.t1 PARAM */, 12, Less);
  tmp82 = (modelica_boolean)tmp70;
  if(tmp82)
  {
    tmp83 = jacobian->tmpVars[20] /* pwFault.p.ii.$pDERNLSJac43.dummyVarNLSJac43 JACOBIAN_DIFF_VAR */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp71, data->localData[0]->timeValue, data->simulationInfo->realParameter[194] /* pwFault.t2 PARAM */, 13, Less);
    tmp80 = (modelica_boolean)(tmp71 && data->simulationInfo->booleanParameter[63] /* pwFault.ground PARAM */);
    if(tmp80)
    {
      tmp81 = jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac43 SEED_VAR */;
    }
    else
    {
      RELATIONHYSTERESIS(tmp72, data->localData[0]->timeValue, data->simulationInfo->realParameter[194] /* pwFault.t2 PARAM */, 13, Less);
      tmp78 = (modelica_boolean)tmp72;
      if(tmp78)
      {
        tmp73 = data->simulationInfo->realParameter[192] /* pwFault.X PARAM */;
        tmp74 = data->simulationInfo->realParameter[191] /* pwFault.R PARAM */;
        tmp75 = data->simulationInfo->realParameter[192] /* pwFault.X PARAM */;
        tmp76 = data->simulationInfo->realParameter[191] /* pwFault.R PARAM */;
        tmp77 = (tmp75 * tmp75) + (tmp76 * tmp76);
        tmp79 = jacobian->tmpVars[20] /* pwFault.p.ii.$pDERNLSJac43.dummyVarNLSJac43 JACOBIAN_DIFF_VAR */ - (DIVISION(((data->simulationInfo->realParameter[191] /* pwFault.R PARAM */) * (jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac43 SEED_VAR */) - ((data->simulationInfo->realParameter[192] /* pwFault.X PARAM */) * (jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac43 SEED_VAR */))) * ((tmp73 * tmp73) + (tmp74 * tmp74)),(tmp77 * tmp77),"(pwFault.X ^ 2.0 + pwFault.R ^ 2.0) ^ 2.0"));
      }
      else
      {
        tmp79 = jacobian->tmpVars[20] /* pwFault.p.ii.$pDERNLSJac43.dummyVarNLSJac43 JACOBIAN_DIFF_VAR */;
      }
      tmp81 = tmp79;
    }
    tmp83 = tmp81;
  }
  jacobian->resultVars[5] /* $res_NLSJac43_6.$pDERNLSJac43.dummyVarNLSJac43 JACOBIAN_VAR */ = tmp83;
  TRACE_POP
}

/*
equation index: 234
type: SIMPLE_ASSIGN
$res_NLSJac43_7.$pDERNLSJac43.dummyVarNLSJac43 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.ir.im.SeedNLSJac43 else pwLine3.vr.im.SeedNLSJac43 - pwLine1.vs.im.SeedNLSJac43 - (pwLine3.Z.re * (pwLine3.ir.im.SeedNLSJac43 + (-pwLine3.vr.re.SeedNLSJac43) * pwLine3.Y.im - pwLine3.vr.im.SeedNLSJac43 * pwLine3.Y.re) + pwLine3.Z.im * (pwLine3.ir.re.SeedNLSJac43 + pwLine3.vr.im.SeedNLSJac43 * pwLine3.Y.im - pwLine3.vr.re.SeedNLSJac43 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_234(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,234};
  modelica_boolean tmp84;
  modelica_boolean tmp85;
  RELATIONHYSTERESIS(tmp84, data->localData[0]->timeValue, data->simulationInfo->realParameter[226] /* pwLine3.t1 PARAM */, 8, GreaterEq);
  RELATIONHYSTERESIS(tmp85, data->localData[0]->timeValue, data->simulationInfo->realParameter[227] /* pwLine3.t2 PARAM */, 9, Less);
  jacobian->resultVars[6] /* $res_NLSJac43_7.$pDERNLSJac43.dummyVarNLSJac43 JACOBIAN_VAR */ = ((tmp84 && tmp85)?jacobian->seedVars[4] /* pwLine3.ir.im.SeedNLSJac43 SEED_VAR */:jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac43 SEED_VAR */ - jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac43 SEED_VAR */ - ((data->simulationInfo->realParameter[225] /* pwLine3.Z.re PARAM */) * (jacobian->seedVars[4] /* pwLine3.ir.im.SeedNLSJac43 SEED_VAR */ + ((-jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac43 SEED_VAR */)) * (data->simulationInfo->realParameter[222] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac43 SEED_VAR */) * (data->simulationInfo->realParameter[223] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[224] /* pwLine3.Z.im PARAM */) * (jacobian->seedVars[7] /* pwLine3.ir.re.SeedNLSJac43 SEED_VAR */ + (jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac43 SEED_VAR */) * (data->simulationInfo->realParameter[222] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac43 SEED_VAR */) * (data->simulationInfo->realParameter[223] /* pwLine3.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 235
type: SIMPLE_ASSIGN
$res_NLSJac43_8.$pDERNLSJac43.dummyVarNLSJac43 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.ir.re.SeedNLSJac43 else pwLine3.vr.re.SeedNLSJac43 - pwLine1.vs.re.SeedNLSJac43 - (pwLine3.Z.re * (pwLine3.ir.re.SeedNLSJac43 + pwLine3.vr.im.SeedNLSJac43 * pwLine3.Y.im - pwLine3.vr.re.SeedNLSJac43 * pwLine3.Y.re) - pwLine3.Z.im * (pwLine3.ir.im.SeedNLSJac43 + (-pwLine3.vr.re.SeedNLSJac43) * pwLine3.Y.im - pwLine3.vr.im.SeedNLSJac43 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_235(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,235};
  modelica_boolean tmp86;
  modelica_boolean tmp87;
  RELATIONHYSTERESIS(tmp86, data->localData[0]->timeValue, data->simulationInfo->realParameter[226] /* pwLine3.t1 PARAM */, 8, GreaterEq);
  RELATIONHYSTERESIS(tmp87, data->localData[0]->timeValue, data->simulationInfo->realParameter[227] /* pwLine3.t2 PARAM */, 9, Less);
  jacobian->resultVars[7] /* $res_NLSJac43_8.$pDERNLSJac43.dummyVarNLSJac43 JACOBIAN_VAR */ = ((tmp86 && tmp87)?jacobian->seedVars[7] /* pwLine3.ir.re.SeedNLSJac43 SEED_VAR */:jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac43 SEED_VAR */ - jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac43 SEED_VAR */ - ((data->simulationInfo->realParameter[225] /* pwLine3.Z.re PARAM */) * (jacobian->seedVars[7] /* pwLine3.ir.re.SeedNLSJac43 SEED_VAR */ + (jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac43 SEED_VAR */) * (data->simulationInfo->realParameter[222] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac43 SEED_VAR */) * (data->simulationInfo->realParameter[223] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[224] /* pwLine3.Z.im PARAM */) * (jacobian->seedVars[4] /* pwLine3.ir.im.SeedNLSJac43 SEED_VAR */ + ((-jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac43 SEED_VAR */)) * (data->simulationInfo->realParameter[222] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac43 SEED_VAR */) * (data->simulationInfo->realParameter[223] /* pwLine3.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 236
type: SIMPLE_ASSIGN
$res_NLSJac43_9.$pDERNLSJac43.dummyVarNLSJac43 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.ir.im.SeedNLSJac43 else pwLine1.vs.im.SeedNLSJac43 - pwLine.vs.im.$pDERNLSJac43.dummyVarNLSJac43 - (pwLine.Z.re * (pwLine.ir.im.SeedNLSJac43 + (-pwLine1.vs.re.SeedNLSJac43) * pwLine.Y.im - pwLine1.vs.im.SeedNLSJac43 * pwLine.Y.re) + pwLine.Z.im * (pwLine.ir.re.SeedNLSJac43 + pwLine1.vs.im.SeedNLSJac43 * pwLine.Y.im - pwLine1.vs.re.SeedNLSJac43 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_236(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,236};
  modelica_boolean tmp88;
  modelica_boolean tmp89;
  RELATIONHYSTERESIS(tmp88, data->localData[0]->timeValue, data->simulationInfo->realParameter[204] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp89, data->localData[0]->timeValue, data->simulationInfo->realParameter[205] /* pwLine.t2 PARAM */, 1, Less);
  jacobian->resultVars[8] /* $res_NLSJac43_9.$pDERNLSJac43.dummyVarNLSJac43 JACOBIAN_VAR */ = ((tmp88 && tmp89)?jacobian->seedVars[0] /* pwLine.ir.im.SeedNLSJac43 SEED_VAR */:jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac43 SEED_VAR */ - jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac43.dummyVarNLSJac43 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[203] /* pwLine.Z.re PARAM */) * (jacobian->seedVars[0] /* pwLine.ir.im.SeedNLSJac43 SEED_VAR */ + ((-jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac43 SEED_VAR */)) * (data->simulationInfo->realParameter[200] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac43 SEED_VAR */) * (data->simulationInfo->realParameter[201] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[202] /* pwLine.Z.im PARAM */) * (jacobian->seedVars[3] /* pwLine.ir.re.SeedNLSJac43 SEED_VAR */ + (jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac43 SEED_VAR */) * (data->simulationInfo->realParameter[200] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac43 SEED_VAR */) * (data->simulationInfo->realParameter[201] /* pwLine.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 237
type: SIMPLE_ASSIGN
$res_NLSJac43_10.$pDERNLSJac43.dummyVarNLSJac43 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.is.im.$pDERNLSJac43.dummyVarNLSJac43 else pwLine.vs.im.$pDERNLSJac43.dummyVarNLSJac43 - pwLine1.vs.im.SeedNLSJac43 - (pwLine.Z.re * (pwLine.is.im.$pDERNLSJac43.dummyVarNLSJac43 + (-pwLine.vs.re.$pDERNLSJac43.dummyVarNLSJac43) * pwLine.Y.im - pwLine.vs.im.$pDERNLSJac43.dummyVarNLSJac43 * pwLine.Y.re) + pwLine.Z.im * (pwLine.is.re.$pDERNLSJac43.dummyVarNLSJac43 + pwLine.vs.im.$pDERNLSJac43.dummyVarNLSJac43 * pwLine.Y.im - pwLine.vs.re.$pDERNLSJac43.dummyVarNLSJac43 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_237(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,237};
  modelica_boolean tmp90;
  modelica_boolean tmp91;
  RELATIONHYSTERESIS(tmp90, data->localData[0]->timeValue, data->simulationInfo->realParameter[204] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp91, data->localData[0]->timeValue, data->simulationInfo->realParameter[205] /* pwLine.t2 PARAM */, 1, Less);
  jacobian->resultVars[9] /* $res_NLSJac43_10.$pDERNLSJac43.dummyVarNLSJac43 JACOBIAN_VAR */ = ((tmp90 && tmp91)?jacobian->tmpVars[6] /* pwLine.is.im.$pDERNLSJac43.dummyVarNLSJac43 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac43.dummyVarNLSJac43 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac43 SEED_VAR */ - ((data->simulationInfo->realParameter[203] /* pwLine.Z.re PARAM */) * (jacobian->tmpVars[6] /* pwLine.is.im.$pDERNLSJac43.dummyVarNLSJac43 JACOBIAN_DIFF_VAR */ + ((-jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac43.dummyVarNLSJac43 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[200] /* pwLine.Y.im PARAM */) - ((jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac43.dummyVarNLSJac43 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[201] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[202] /* pwLine.Z.im PARAM */) * (jacobian->tmpVars[7] /* pwLine.is.re.$pDERNLSJac43.dummyVarNLSJac43 JACOBIAN_DIFF_VAR */ + (jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac43.dummyVarNLSJac43 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[200] /* pwLine.Y.im PARAM */) - ((jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac43.dummyVarNLSJac43 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[201] /* pwLine.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 238
type: SIMPLE_ASSIGN
$res_NLSJac43_11.$pDERNLSJac43.dummyVarNLSJac43 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.is.re.$pDERNLSJac43.dummyVarNLSJac43 else pwLine.vs.re.$pDERNLSJac43.dummyVarNLSJac43 - pwLine1.vs.re.SeedNLSJac43 - (pwLine.Z.re * (pwLine.is.re.$pDERNLSJac43.dummyVarNLSJac43 + pwLine.vs.im.$pDERNLSJac43.dummyVarNLSJac43 * pwLine.Y.im - pwLine.vs.re.$pDERNLSJac43.dummyVarNLSJac43 * pwLine.Y.re) - pwLine.Z.im * (pwLine.is.im.$pDERNLSJac43.dummyVarNLSJac43 + (-pwLine.vs.re.$pDERNLSJac43.dummyVarNLSJac43) * pwLine.Y.im - pwLine.vs.im.$pDERNLSJac43.dummyVarNLSJac43 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_238(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,238};
  modelica_boolean tmp92;
  modelica_boolean tmp93;
  RELATIONHYSTERESIS(tmp92, data->localData[0]->timeValue, data->simulationInfo->realParameter[204] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp93, data->localData[0]->timeValue, data->simulationInfo->realParameter[205] /* pwLine.t2 PARAM */, 1, Less);
  jacobian->resultVars[10] /* $res_NLSJac43_11.$pDERNLSJac43.dummyVarNLSJac43 JACOBIAN_VAR */ = ((tmp92 && tmp93)?jacobian->tmpVars[7] /* pwLine.is.re.$pDERNLSJac43.dummyVarNLSJac43 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac43.dummyVarNLSJac43 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac43 SEED_VAR */ - ((data->simulationInfo->realParameter[203] /* pwLine.Z.re PARAM */) * (jacobian->tmpVars[7] /* pwLine.is.re.$pDERNLSJac43.dummyVarNLSJac43 JACOBIAN_DIFF_VAR */ + (jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac43.dummyVarNLSJac43 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[200] /* pwLine.Y.im PARAM */) - ((jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac43.dummyVarNLSJac43 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[201] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[202] /* pwLine.Z.im PARAM */) * (jacobian->tmpVars[6] /* pwLine.is.im.$pDERNLSJac43.dummyVarNLSJac43 JACOBIAN_DIFF_VAR */ + ((-jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac43.dummyVarNLSJac43 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[200] /* pwLine.Y.im PARAM */) - ((jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac43.dummyVarNLSJac43 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[201] /* pwLine.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 239
type: SIMPLE_ASSIGN
$res_NLSJac43_12.$pDERNLSJac43.dummyVarNLSJac43 = pwLine1.vs.im * constantLoad.p.ir.SeedNLSJac43 + pwLine1.vs.im.SeedNLSJac43 * constantLoad.p.ir + (-pwLine1.vs.re.SeedNLSJac43) * constantLoad.p.ii - constantLoad.Q.$pDERNLSJac43.dummyVarNLSJac43 - pwLine1.vs.re * constantLoad.p.ii.$pDERNLSJac43.dummyVarNLSJac43
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_239(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,239};
  jacobian->resultVars[11] /* $res_NLSJac43_12.$pDERNLSJac43.dummyVarNLSJac43 JACOBIAN_VAR */ = (data->localData[0]->realVars[102] /* pwLine1.vs.im variable */) * (jacobian->seedVars[2] /* constantLoad.p.ir.SeedNLSJac43 SEED_VAR */) + (jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac43 SEED_VAR */) * (data->localData[0]->realVars[48] /* constantLoad.p.ir variable */) + ((-jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac43 SEED_VAR */)) * (data->localData[0]->realVars[47] /* constantLoad.p.ii variable */) - jacobian->tmpVars[3] /* constantLoad.Q.$pDERNLSJac43.dummyVarNLSJac43 JACOBIAN_DIFF_VAR */ - ((data->localData[0]->realVars[103] /* pwLine1.vs.re variable */) * (jacobian->tmpVars[22] /* constantLoad.p.ii.$pDERNLSJac43.dummyVarNLSJac43 JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 240
type: SIMPLE_ASSIGN
$res_NLSJac43_13.$pDERNLSJac43.dummyVarNLSJac43 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.is.re.$pDERNLSJac43.dummyVarNLSJac43 else pwLine1.vs.re.SeedNLSJac43 - pwLine1.vr.re.SeedNLSJac43 - (pwLine1.Z.re * (pwLine1.is.re.$pDERNLSJac43.dummyVarNLSJac43 + pwLine1.vs.im.SeedNLSJac43 * pwLine1.Y.im - pwLine1.vs.re.SeedNLSJac43 * pwLine1.Y.re) - pwLine1.Z.im * (pwLine1.is.im.SeedNLSJac43 + (-pwLine1.vs.re.SeedNLSJac43) * pwLine1.Y.im - pwLine1.vs.im.SeedNLSJac43 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_240(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,240};
  modelica_boolean tmp94;
  modelica_boolean tmp95;
  RELATIONHYSTERESIS(tmp94, data->localData[0]->timeValue, data->simulationInfo->realParameter[215] /* pwLine1.t1 PARAM */, 2, GreaterEq);
  RELATIONHYSTERESIS(tmp95, data->localData[0]->timeValue, data->simulationInfo->realParameter[216] /* pwLine1.t2 PARAM */, 3, Less);
  jacobian->resultVars[12] /* $res_NLSJac43_13.$pDERNLSJac43.dummyVarNLSJac43 JACOBIAN_VAR */ = ((tmp94 && tmp95)?jacobian->tmpVars[21] /* pwLine1.is.re.$pDERNLSJac43.dummyVarNLSJac43 JACOBIAN_DIFF_VAR */:jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac43 SEED_VAR */ - jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac43 SEED_VAR */ - ((data->simulationInfo->realParameter[214] /* pwLine1.Z.re PARAM */) * (jacobian->tmpVars[21] /* pwLine1.is.re.$pDERNLSJac43.dummyVarNLSJac43 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac43 SEED_VAR */) * (data->simulationInfo->realParameter[211] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac43 SEED_VAR */) * (data->simulationInfo->realParameter[212] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[213] /* pwLine1.Z.im PARAM */) * (jacobian->seedVars[1] /* pwLine1.is.im.SeedNLSJac43 SEED_VAR */ + ((-jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac43 SEED_VAR */)) * (data->simulationInfo->realParameter[211] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac43 SEED_VAR */) * (data->simulationInfo->realParameter[212] /* pwLine1.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 241
type: SIMPLE_ASSIGN
$res_NLSJac43_14.$pDERNLSJac43.dummyVarNLSJac43 = pwLine1.vs.im * constantLoad.p.ii.$pDERNLSJac43.dummyVarNLSJac43 + pwLine1.vs.im.SeedNLSJac43 * constantLoad.p.ii + pwLine1.vs.re * constantLoad.p.ir.SeedNLSJac43 + pwLine1.vs.re.SeedNLSJac43 * constantLoad.p.ir - constantLoad.P.$pDERNLSJac43.dummyVarNLSJac43
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_241(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,241};
  jacobian->resultVars[13] /* $res_NLSJac43_14.$pDERNLSJac43.dummyVarNLSJac43 JACOBIAN_VAR */ = (data->localData[0]->realVars[102] /* pwLine1.vs.im variable */) * (jacobian->tmpVars[22] /* constantLoad.p.ii.$pDERNLSJac43.dummyVarNLSJac43 JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac43 SEED_VAR */) * (data->localData[0]->realVars[47] /* constantLoad.p.ii variable */) + (data->localData[0]->realVars[103] /* pwLine1.vs.re variable */) * (jacobian->seedVars[2] /* constantLoad.p.ir.SeedNLSJac43 SEED_VAR */) + (jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac43 SEED_VAR */) * (data->localData[0]->realVars[48] /* constantLoad.p.ir variable */) - jacobian->tmpVars[4] /* constantLoad.P.$pDERNLSJac43.dummyVarNLSJac43 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 242
type: SIMPLE_ASSIGN
$res_NLSJac43_15.$pDERNLSJac43.dummyVarNLSJac43 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.ir.re.SeedNLSJac43 else pwLine1.vs.re.SeedNLSJac43 - pwLine.vs.re.$pDERNLSJac43.dummyVarNLSJac43 - (pwLine.Z.re * (pwLine.ir.re.SeedNLSJac43 + pwLine1.vs.im.SeedNLSJac43 * pwLine.Y.im - pwLine1.vs.re.SeedNLSJac43 * pwLine.Y.re) - pwLine.Z.im * (pwLine.ir.im.SeedNLSJac43 + (-pwLine1.vs.re.SeedNLSJac43) * pwLine.Y.im - pwLine1.vs.im.SeedNLSJac43 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_242(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,242};
  modelica_boolean tmp96;
  modelica_boolean tmp97;
  RELATIONHYSTERESIS(tmp96, data->localData[0]->timeValue, data->simulationInfo->realParameter[204] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp97, data->localData[0]->timeValue, data->simulationInfo->realParameter[205] /* pwLine.t2 PARAM */, 1, Less);
  jacobian->resultVars[14] /* $res_NLSJac43_15.$pDERNLSJac43.dummyVarNLSJac43 JACOBIAN_VAR */ = ((tmp96 && tmp97)?jacobian->seedVars[3] /* pwLine.ir.re.SeedNLSJac43 SEED_VAR */:jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac43 SEED_VAR */ - jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac43.dummyVarNLSJac43 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[203] /* pwLine.Z.re PARAM */) * (jacobian->seedVars[3] /* pwLine.ir.re.SeedNLSJac43 SEED_VAR */ + (jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac43 SEED_VAR */) * (data->simulationInfo->realParameter[200] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac43 SEED_VAR */) * (data->simulationInfo->realParameter[201] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[202] /* pwLine.Z.im PARAM */) * (jacobian->seedVars[0] /* pwLine.ir.im.SeedNLSJac43 SEED_VAR */ + ((-jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac43 SEED_VAR */)) * (data->simulationInfo->realParameter[200] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac43 SEED_VAR */) * (data->simulationInfo->realParameter[201] /* pwLine.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 243
type: SIMPLE_ASSIGN
$res_NLSJac43_16.$pDERNLSJac43.dummyVarNLSJac43 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.is.im.SeedNLSJac43 else pwLine1.vs.im.SeedNLSJac43 - pwLine1.vr.im.SeedNLSJac43 - (pwLine1.Z.re * (pwLine1.is.im.SeedNLSJac43 + (-pwLine1.vs.re.SeedNLSJac43) * pwLine1.Y.im - pwLine1.vs.im.SeedNLSJac43 * pwLine1.Y.re) + pwLine1.Z.im * (pwLine1.is.re.$pDERNLSJac43.dummyVarNLSJac43 + pwLine1.vs.im.SeedNLSJac43 * pwLine1.Y.im - pwLine1.vs.re.SeedNLSJac43 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_243(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,243};
  modelica_boolean tmp98;
  modelica_boolean tmp99;
  RELATIONHYSTERESIS(tmp98, data->localData[0]->timeValue, data->simulationInfo->realParameter[215] /* pwLine1.t1 PARAM */, 2, GreaterEq);
  RELATIONHYSTERESIS(tmp99, data->localData[0]->timeValue, data->simulationInfo->realParameter[216] /* pwLine1.t2 PARAM */, 3, Less);
  jacobian->resultVars[15] /* $res_NLSJac43_16.$pDERNLSJac43.dummyVarNLSJac43 JACOBIAN_VAR */ = ((tmp98 && tmp99)?jacobian->seedVars[1] /* pwLine1.is.im.SeedNLSJac43 SEED_VAR */:jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac43 SEED_VAR */ - jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac43 SEED_VAR */ - ((data->simulationInfo->realParameter[214] /* pwLine1.Z.re PARAM */) * (jacobian->seedVars[1] /* pwLine1.is.im.SeedNLSJac43 SEED_VAR */ + ((-jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac43 SEED_VAR */)) * (data->simulationInfo->realParameter[211] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac43 SEED_VAR */) * (data->simulationInfo->realParameter[212] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[213] /* pwLine1.Z.im PARAM */) * (jacobian->tmpVars[21] /* pwLine1.is.re.$pDERNLSJac43.dummyVarNLSJac43 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac43 SEED_VAR */) * (data->simulationInfo->realParameter[211] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac43 SEED_VAR */) * (data->simulationInfo->realParameter[212] /* pwLine1.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 244
type: SIMPLE_ASSIGN
$res_NLSJac43_17.$pDERNLSJac43.dummyVarNLSJac43 = $cse1 * gENCLS.vq.$pDERNLSJac43.dummyVarNLSJac43 + (-$cse2) * gENCLS.vd.$pDERNLSJac43.dummyVarNLSJac43 - pwLine1.vr.im.SeedNLSJac43
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_244(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,244};
  jacobian->resultVars[16] /* $res_NLSJac43_17.$pDERNLSJac43.dummyVarNLSJac43 JACOBIAN_VAR */ = (data->localData[0]->realVars[20] /* $cse1 variable */) * (jacobian->tmpVars[16] /* gENCLS.vq.$pDERNLSJac43.dummyVarNLSJac43 JACOBIAN_DIFF_VAR */) + ((-data->localData[0]->realVars[21] /* $cse2 variable */)) * (jacobian->tmpVars[15] /* gENCLS.vd.$pDERNLSJac43.dummyVarNLSJac43 JACOBIAN_DIFF_VAR */) - jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac43 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 245
type: SIMPLE_ASSIGN
$res_NLSJac43_18.$pDERNLSJac43.dummyVarNLSJac43 = $cse2 * gENCLS.vq.$pDERNLSJac43.dummyVarNLSJac43 + $cse1 * gENCLS.vd.$pDERNLSJac43.dummyVarNLSJac43 - pwLine1.vr.re.SeedNLSJac43
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_245(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,245};
  jacobian->resultVars[17] /* $res_NLSJac43_18.$pDERNLSJac43.dummyVarNLSJac43 JACOBIAN_VAR */ = (data->localData[0]->realVars[21] /* $cse2 variable */) * (jacobian->tmpVars[16] /* gENCLS.vq.$pDERNLSJac43.dummyVarNLSJac43 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[20] /* $cse1 variable */) * (jacobian->tmpVars[15] /* gENCLS.vd.$pDERNLSJac43.dummyVarNLSJac43 JACOBIAN_DIFF_VAR */) - jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac43 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 246
type: SIMPLE_ASSIGN
$res_NLSJac43_19.$pDERNLSJac43.dummyVarNLSJac43 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.ir.re.$pDERNLSJac43.dummyVarNLSJac43 else pwLine1.vr.re.SeedNLSJac43 - pwLine3.vr.re.SeedNLSJac43 - (pwLine4.Z.re * (pwLine4.ir.re.$pDERNLSJac43.dummyVarNLSJac43 + pwLine1.vr.im.SeedNLSJac43 * pwLine4.Y.im - pwLine1.vr.re.SeedNLSJac43 * pwLine4.Y.re) - pwLine4.Z.im * (pwLine4.ir.im.SeedNLSJac43 + (-pwLine1.vr.re.SeedNLSJac43) * pwLine4.Y.im - pwLine1.vr.im.SeedNLSJac43 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_246(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,246};
  modelica_boolean tmp100;
  modelica_boolean tmp101;
  RELATIONHYSTERESIS(tmp100, data->localData[0]->timeValue, data->simulationInfo->realParameter[237] /* pwLine4.t1 PARAM */, 10, GreaterEq);
  RELATIONHYSTERESIS(tmp101, data->localData[0]->timeValue, data->simulationInfo->realParameter[238] /* pwLine4.t2 PARAM */, 11, Less);
  jacobian->resultVars[18] /* $res_NLSJac43_19.$pDERNLSJac43.dummyVarNLSJac43 JACOBIAN_VAR */ = ((tmp100 && tmp101)?jacobian->tmpVars[18] /* pwLine4.ir.re.$pDERNLSJac43.dummyVarNLSJac43 JACOBIAN_DIFF_VAR */:jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac43 SEED_VAR */ - jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac43 SEED_VAR */ - ((data->simulationInfo->realParameter[236] /* pwLine4.Z.re PARAM */) * (jacobian->tmpVars[18] /* pwLine4.ir.re.$pDERNLSJac43.dummyVarNLSJac43 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac43 SEED_VAR */) * (data->simulationInfo->realParameter[233] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac43 SEED_VAR */) * (data->simulationInfo->realParameter[234] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[235] /* pwLine4.Z.im PARAM */) * (jacobian->seedVars[11] /* pwLine4.ir.im.SeedNLSJac43 SEED_VAR */ + ((-jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac43 SEED_VAR */)) * (data->simulationInfo->realParameter[233] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac43 SEED_VAR */) * (data->simulationInfo->realParameter[234] /* pwLine4.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 247
type: SIMPLE_ASSIGN
$res_NLSJac43_20.$pDERNLSJac43.dummyVarNLSJac43 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.ir.re.SeedNLSJac43 else pwLine1.vr.re.SeedNLSJac43 - pwLine1.vs.re.SeedNLSJac43 - (pwLine1.Z.re * (pwLine1.ir.re.SeedNLSJac43 + pwLine1.vr.im.SeedNLSJac43 * pwLine1.Y.im - pwLine1.vr.re.SeedNLSJac43 * pwLine1.Y.re) - pwLine1.Z.im * (pwLine1.ir.im.$pDERNLSJac43.dummyVarNLSJac43 + (-pwLine1.vr.re.SeedNLSJac43) * pwLine1.Y.im - pwLine1.vr.im.SeedNLSJac43 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_247(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,247};
  modelica_boolean tmp102;
  modelica_boolean tmp103;
  RELATIONHYSTERESIS(tmp102, data->localData[0]->timeValue, data->simulationInfo->realParameter[215] /* pwLine1.t1 PARAM */, 2, GreaterEq);
  RELATIONHYSTERESIS(tmp103, data->localData[0]->timeValue, data->simulationInfo->realParameter[216] /* pwLine1.t2 PARAM */, 3, Less);
  jacobian->resultVars[19] /* $res_NLSJac43_20.$pDERNLSJac43.dummyVarNLSJac43 JACOBIAN_VAR */ = ((tmp102 && tmp103)?jacobian->seedVars[10] /* pwLine1.ir.re.SeedNLSJac43 SEED_VAR */:jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac43 SEED_VAR */ - jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac43 SEED_VAR */ - ((data->simulationInfo->realParameter[214] /* pwLine1.Z.re PARAM */) * (jacobian->seedVars[10] /* pwLine1.ir.re.SeedNLSJac43 SEED_VAR */ + (jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac43 SEED_VAR */) * (data->simulationInfo->realParameter[211] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac43 SEED_VAR */) * (data->simulationInfo->realParameter[212] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[213] /* pwLine1.Z.im PARAM */) * (jacobian->tmpVars[17] /* pwLine1.ir.im.$pDERNLSJac43.dummyVarNLSJac43 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac43 SEED_VAR */)) * (data->simulationInfo->realParameter[211] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac43 SEED_VAR */) * (data->simulationInfo->realParameter[212] /* pwLine1.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 248
type: SIMPLE_ASSIGN
$res_NLSJac43_21.$pDERNLSJac43.dummyVarNLSJac43 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.ir.im.$pDERNLSJac43.dummyVarNLSJac43 else pwLine1.vr.im.SeedNLSJac43 - pwLine1.vs.im.SeedNLSJac43 - (pwLine1.Z.re * (pwLine1.ir.im.$pDERNLSJac43.dummyVarNLSJac43 + (-pwLine1.vr.re.SeedNLSJac43) * pwLine1.Y.im - pwLine1.vr.im.SeedNLSJac43 * pwLine1.Y.re) + pwLine1.Z.im * (pwLine1.ir.re.SeedNLSJac43 + pwLine1.vr.im.SeedNLSJac43 * pwLine1.Y.im - pwLine1.vr.re.SeedNLSJac43 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_248(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,248};
  modelica_boolean tmp104;
  modelica_boolean tmp105;
  RELATIONHYSTERESIS(tmp104, data->localData[0]->timeValue, data->simulationInfo->realParameter[215] /* pwLine1.t1 PARAM */, 2, GreaterEq);
  RELATIONHYSTERESIS(tmp105, data->localData[0]->timeValue, data->simulationInfo->realParameter[216] /* pwLine1.t2 PARAM */, 3, Less);
  jacobian->resultVars[20] /* $res_NLSJac43_21.$pDERNLSJac43.dummyVarNLSJac43 JACOBIAN_VAR */ = ((tmp104 && tmp105)?jacobian->tmpVars[17] /* pwLine1.ir.im.$pDERNLSJac43.dummyVarNLSJac43 JACOBIAN_DIFF_VAR */:jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac43 SEED_VAR */ - jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac43 SEED_VAR */ - ((data->simulationInfo->realParameter[214] /* pwLine1.Z.re PARAM */) * (jacobian->tmpVars[17] /* pwLine1.ir.im.$pDERNLSJac43.dummyVarNLSJac43 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac43 SEED_VAR */)) * (data->simulationInfo->realParameter[211] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac43 SEED_VAR */) * (data->simulationInfo->realParameter[212] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[213] /* pwLine1.Z.im PARAM */) * (jacobian->seedVars[10] /* pwLine1.ir.re.SeedNLSJac43 SEED_VAR */ + (jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac43 SEED_VAR */) * (data->simulationInfo->realParameter[211] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac43 SEED_VAR */) * (data->simulationInfo->realParameter[212] /* pwLine1.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 249
type: SIMPLE_ASSIGN
$res_NLSJac43_22.$pDERNLSJac43.dummyVarNLSJac43 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.ir.im.SeedNLSJac43 else pwLine1.vr.im.SeedNLSJac43 - pwLine3.vr.im.SeedNLSJac43 - (pwLine4.Z.re * (pwLine4.ir.im.SeedNLSJac43 + (-pwLine1.vr.re.SeedNLSJac43) * pwLine4.Y.im - pwLine1.vr.im.SeedNLSJac43 * pwLine4.Y.re) + pwLine4.Z.im * (pwLine4.ir.re.$pDERNLSJac43.dummyVarNLSJac43 + pwLine1.vr.im.SeedNLSJac43 * pwLine4.Y.im - pwLine1.vr.re.SeedNLSJac43 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_249(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,249};
  modelica_boolean tmp106;
  modelica_boolean tmp107;
  RELATIONHYSTERESIS(tmp106, data->localData[0]->timeValue, data->simulationInfo->realParameter[237] /* pwLine4.t1 PARAM */, 10, GreaterEq);
  RELATIONHYSTERESIS(tmp107, data->localData[0]->timeValue, data->simulationInfo->realParameter[238] /* pwLine4.t2 PARAM */, 11, Less);
  jacobian->resultVars[21] /* $res_NLSJac43_22.$pDERNLSJac43.dummyVarNLSJac43 JACOBIAN_VAR */ = ((tmp106 && tmp107)?jacobian->seedVars[11] /* pwLine4.ir.im.SeedNLSJac43 SEED_VAR */:jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac43 SEED_VAR */ - jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac43 SEED_VAR */ - ((data->simulationInfo->realParameter[236] /* pwLine4.Z.re PARAM */) * (jacobian->seedVars[11] /* pwLine4.ir.im.SeedNLSJac43 SEED_VAR */ + ((-jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac43 SEED_VAR */)) * (data->simulationInfo->realParameter[233] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac43 SEED_VAR */) * (data->simulationInfo->realParameter[234] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[235] /* pwLine4.Z.im PARAM */) * (jacobian->tmpVars[18] /* pwLine4.ir.re.$pDERNLSJac43.dummyVarNLSJac43 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac43 SEED_VAR */) * (data->simulationInfo->realParameter[233] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac43 SEED_VAR */) * (data->simulationInfo->realParameter[234] /* pwLine4.Y.re PARAM */)))));
  TRACE_POP
}

OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_SCRX_functionJacNLSJac43_constantEqns(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Controls_PSSE_ES_SCRX_INDEX_JAC_NLSJac43;
  
  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_SCRX_functionJacNLSJac43_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Controls_PSSE_ES_SCRX_INDEX_JAC_NLSJac43;
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_205(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_206(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_207(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_208(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_209(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_210(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_211(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_212(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_213(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_214(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_215(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_216(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_217(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_218(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_219(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_220(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_221(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_222(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_223(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_224(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_225(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_226(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_227(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_228(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_229(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_230(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_231(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_232(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_233(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_234(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_235(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_236(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_237(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_238(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_239(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_240(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_241(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_242(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_243(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_244(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_245(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_246(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_247(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_248(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_249(data, threadData, jacobian, parentJacobian);
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_ES_SCRX_functionJacF_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_ES_SCRX_functionJacD_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_ES_SCRX_functionJacC_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_ES_SCRX_functionJacB_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
/* constant equations */
/* dynamic equations */

OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_SCRX_functionJacA_constantEqns(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Controls_PSSE_ES_SCRX_INDEX_JAC_A;
  
  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_SCRX_functionJacA_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Controls_PSSE_ES_SCRX_INDEX_JAC_A;
  TRACE_POP
  return 0;
}

OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_SCRX_initialAnalyticJacobianNLSJac43(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+22] = {0,4,4,4,4,3,3,3,3,4,4,4,4,6,6,7,7,4,4,11,11,8,8};
  const int rowIndex[116] = {8,11,13,14,11,12,13,15,11,12,13,15,8,12,14,15,5,6,7,3,4,5,2,3,4,2,6,7,0,1,12,15,0,1,11,13,18,19,20,21,18,19,20,21,16,17,18,19,20,21,16,17,18,19,20,21,3,12,17,18,19,20,21,4,15,16,18,19,20,21,8,9,10,14,8,9,10,14,0,1,6,8,9,11,12,13,14,15,20,0,1,7,8,10,11,12,13,14,15,19,0,2,3,4,5,6,7,21,1,2,3,4,5,6,7,18};
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
  jacobian->sparsePattern->colorCols[14] = 6;
  jacobian->sparsePattern->colorCols[3] = 7;
  jacobian->sparsePattern->colorCols[9] = 7;
  jacobian->sparsePattern->colorCols[13] = 7;
  jacobian->sparsePattern->colorCols[2] = 8;
  jacobian->sparsePattern->colorCols[12] = 8;
  jacobian->sparsePattern->colorCols[17] = 8;
  jacobian->sparsePattern->colorCols[1] = 9;
  jacobian->sparsePattern->colorCols[5] = 9;
  jacobian->sparsePattern->colorCols[7] = 9;
  jacobian->sparsePattern->colorCols[11] = 9;
  jacobian->sparsePattern->colorCols[16] = 9;
  jacobian->sparsePattern->colorCols[0] = 10;
  jacobian->sparsePattern->colorCols[4] = 10;
  jacobian->sparsePattern->colorCols[6] = 10;
  jacobian->sparsePattern->colorCols[8] = 10;
  jacobian->sparsePattern->colorCols[10] = 10;
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_ES_SCRX_initialAnalyticJacobianF(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int OpenIPSL_Examples_Controls_PSSE_ES_SCRX_initialAnalyticJacobianD(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int OpenIPSL_Examples_Controls_PSSE_ES_SCRX_initialAnalyticJacobianC(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int OpenIPSL_Examples_Controls_PSSE_ES_SCRX_initialAnalyticJacobianB(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_SCRX_initialAnalyticJacobianA(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+10] = {0,7,7,7,7,7,7,7,2,3,2};
  const int rowIndex[56] = {2,3,4,5,7,8,9,2,3,4,5,7,8,9,2,3,4,5,7,8,9,2,3,4,5,7,8,9,2,3,4,5,7,8,9,2,3,4,5,7,8,9,2,3,4,5,7,8,9,6,7,3,8,9,3,9};
  int i = 0;
  
  jacobian->sizeCols = 10;
  jacobian->sizeRows = 10;
  jacobian->sizeTmpVars = 0;
  jacobian->seedVars = (modelica_real*) calloc(10,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(10,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(0,sizeof(modelica_real));
  jacobian->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  jacobian->sparsePattern->leadindex = (unsigned int*) malloc((10+1)*sizeof(int));
  jacobian->sparsePattern->index = (unsigned int*) malloc(56*sizeof(int));
  jacobian->sparsePattern->numberOfNoneZeros = 56;
  jacobian->sparsePattern->colorCols = (unsigned int*) malloc(10*sizeof(int));
  jacobian->sparsePattern->maxColors = 9;
  jacobian->constantEqns = NULL;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern->leadindex, colPtrIndex, (10+1)*sizeof(int));
  
  for(i=2;i<10+1;++i)
    jacobian->sparsePattern->leadindex[i] += jacobian->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern->index, rowIndex, 56*sizeof(int));
  
  /* write color array */
  jacobian->sparsePattern->colorCols[9] = 1;
  jacobian->sparsePattern->colorCols[5] = 2;
  jacobian->sparsePattern->colorCols[4] = 3;
  jacobian->sparsePattern->colorCols[3] = 4;
  jacobian->sparsePattern->colorCols[2] = 5;
  jacobian->sparsePattern->colorCols[6] = 6;
  jacobian->sparsePattern->colorCols[7] = 7;
  jacobian->sparsePattern->colorCols[8] = 7;
  jacobian->sparsePattern->colorCols[1] = 8;
  jacobian->sparsePattern->colorCols[0] = 9;
  TRACE_POP
  return 0;
}


