/* Non Linear Systems */
#include "OpenIPSL.Examples.Controls.PSSE.ES.EXAC2_model.h"
#include "OpenIPSL.Examples.Controls.PSSE.ES.EXAC2_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* inner equations */

/*
equation index: 387
type: SIMPLE_ASSIGN
constantLoad.v = sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_387(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,387};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[138] /* pwLine1.vs.re variable */;
  tmp1 = data->localData[0]->realVars[137] /* pwLine1.vs.im variable */;
  data->localData[0]->realVars[55] /* constantLoad.v variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 388
type: SIMPLE_ASSIGN
constantLoad.kP = if constantLoad.v < constantLoad.PQBRAK then constantLoad.a0 + constantLoad.a1 * cos(constantLoad.v * constantLoad.wp) + constantLoad.b1 * sin(constantLoad.v * constantLoad.wp) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_388(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,388};
  modelica_boolean tmp0;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[55] /* constantLoad.v variable */, data->simulationInfo->realParameter[35] /* constantLoad.PQBRAK PARAM */, 8, Less);
  data->localData[0]->realVars[52] /* constantLoad.kP variable */ = (tmp0?data->simulationInfo->realParameter[54] /* constantLoad.a0 PARAM */ + (data->simulationInfo->realParameter[55] /* constantLoad.a1 PARAM */) * (cos((data->localData[0]->realVars[55] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[75] /* constantLoad.wp PARAM */))) + (data->simulationInfo->realParameter[61] /* constantLoad.b1 PARAM */) * (sin((data->localData[0]->realVars[55] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[75] /* constantLoad.wp PARAM */))):1.0);
  TRACE_POP
}
/*
equation index: 389
type: SIMPLE_ASSIGN
constantLoad.kI = if constantLoad.v < 0.5 then constantLoad.a2 * constantLoad.b2 * constantLoad.v ^ (-1.0 + constantLoad.b2) * exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_389(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,389};
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
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[55] /* constantLoad.v variable */, 0.5, 7, Less);
  tmp15 = (modelica_boolean)tmp0;
  if(tmp15)
  {
    tmp1 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
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
    }tmp8 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
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
  data->localData[0]->realVars[51] /* constantLoad.kI variable */ = tmp16;
  TRACE_POP
}
/*
equation index: 390
type: SIMPLE_ASSIGN
constantLoad.Q = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.im + constantLoad.d_Q) else constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_390(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,390};
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
    tmp2 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[38] /* constantLoad.S_I.im PARAM */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[42] /* constantLoad.S_Y.im PARAM */) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[40] /* constantLoad.S_P.im PARAM */ + data->simulationInfo->realParameter[64] /* constantLoad.d_Q PARAM */);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[38] /* constantLoad.S_I.im PARAM */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[42] /* constantLoad.S_Y.im PARAM */) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[40] /* constantLoad.S_P.im PARAM */);
  }
  data->localData[0]->realVars[49] /* constantLoad.Q variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 391
type: SIMPLE_ASSIGN
constantLoad.P = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.re + constantLoad.d_P) else constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_391(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,391};
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
    tmp2 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[39] /* constantLoad.S_I.re PARAM */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[43] /* constantLoad.S_Y.re PARAM */) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[41] /* constantLoad.S_P.re PARAM */ + data->simulationInfo->realParameter[63] /* constantLoad.d_P PARAM */);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[39] /* constantLoad.S_I.re PARAM */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[43] /* constantLoad.S_Y.re PARAM */) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[41] /* constantLoad.S_P.re PARAM */);
  }
  data->localData[0]->realVars[48] /* constantLoad.P variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 392
type: SIMPLE_ASSIGN
gENROE.PSId = gENROE.PSIppd - gENROE.Xppd * gENROE.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_392(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,392};
  data->localData[0]->realVars[101] /* gENROE.PSId variable */ = data->localData[0]->realVars[103] /* gENROE.PSIppd variable */ - ((data->simulationInfo->realParameter[279] /* gENROE.Xppd PARAM */) * (data->localData[0]->realVars[111] /* gENROE.id variable */));
  TRACE_POP
}
/*
equation index: 393
type: SIMPLE_ASSIGN
pwLine.is.re = ($cse7 * gENROE.iq - (-$cse6) * gENROE.id) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_393(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,393};
  data->localData[0]->realVars[124] /* pwLine.is.re variable */ = ((data->localData[0]->realVars[31] /* $cse7 variable */) * (data->localData[0]->realVars[112] /* gENROE.iq variable */) - (((-data->localData[0]->realVars[30] /* $cse6 variable */)) * (data->localData[0]->realVars[111] /* gENROE.id variable */))) * (data->simulationInfo->realParameter[225] /* gENROE.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 394
type: SIMPLE_ASSIGN
pwLine.is.im = ($cse6 * gENROE.iq - $cse7 * gENROE.id) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_394(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,394};
  data->localData[0]->realVars[123] /* pwLine.is.im variable */ = ((data->localData[0]->realVars[30] /* $cse6 variable */) * (data->localData[0]->realVars[112] /* gENROE.iq variable */) - ((data->localData[0]->realVars[31] /* $cse7 variable */) * (data->localData[0]->realVars[111] /* gENROE.id variable */))) * (data->simulationInfo->realParameter[225] /* gENROE.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 395
type: SIMPLE_ASSIGN
gENROE.uq = gENROE.PSId - gENROE.R_a * gENROE.iq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_395(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,395};
  data->localData[0]->realVars[114] /* gENROE.uq variable */ = data->localData[0]->realVars[101] /* gENROE.PSId variable */ - ((data->simulationInfo->realParameter[262] /* gENROE.R_a PARAM */) * (data->localData[0]->realVars[112] /* gENROE.iq variable */));
  TRACE_POP
}
/*
equation index: 396
type: SIMPLE_ASSIGN
gENROE.PSIq = (-gENROE.PSIppq) - gENROE.Xppq * gENROE.iq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_396(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,396};
  data->localData[0]->realVars[105] /* gENROE.PSIq variable */ = (-data->localData[0]->realVars[104] /* gENROE.PSIppq variable */) - ((data->simulationInfo->realParameter[280] /* gENROE.Xppq PARAM */) * (data->localData[0]->realVars[112] /* gENROE.iq variable */));
  TRACE_POP
}
/*
equation index: 397
type: SIMPLE_ASSIGN
gENROE.ud = (-gENROE.PSIq) - gENROE.R_a * gENROE.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_397(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,397};
  data->localData[0]->realVars[113] /* gENROE.ud variable */ = (-data->localData[0]->realVars[105] /* gENROE.PSIq variable */) - ((data->simulationInfo->realParameter[262] /* gENROE.R_a PARAM */) * (data->localData[0]->realVars[111] /* gENROE.id variable */));
  TRACE_POP
}
/*
equation index: 398
type: SIMPLE_ASSIGN
pwLine.vs.im = $cse6 * gENROE.uq - $cse7 * gENROE.ud
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_398(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,398};
  data->localData[0]->realVars[125] /* pwLine.vs.im variable */ = (data->localData[0]->realVars[30] /* $cse6 variable */) * (data->localData[0]->realVars[114] /* gENROE.uq variable */) - ((data->localData[0]->realVars[31] /* $cse7 variable */) * (data->localData[0]->realVars[113] /* gENROE.ud variable */));
  TRACE_POP
}
/*
equation index: 399
type: SIMPLE_ASSIGN
pwLine.vs.re = $cse6 * gENROE.ud + $cse7 * gENROE.uq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_399(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,399};
  data->localData[0]->realVars[126] /* pwLine.vs.re variable */ = (data->localData[0]->realVars[30] /* $cse6 variable */) * (data->localData[0]->realVars[113] /* gENROE.ud variable */) + (data->localData[0]->realVars[31] /* $cse7 variable */) * (data->localData[0]->realVars[114] /* gENROE.uq variable */);
  TRACE_POP
}
/*
equation index: 400
type: SIMPLE_ASSIGN
gENCLS.p.ir = ((-$cse1) * gENCLS.id - $cse2 * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_400(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,400};
  data->localData[0]->realVars[95] /* gENCLS.p.ir variable */ = (((-data->localData[0]->realVars[26] /* $cse1 variable */)) * (data->localData[0]->realVars[91] /* gENCLS.id variable */) - ((data->localData[0]->realVars[27] /* $cse2 variable */) * (data->localData[0]->realVars[92] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[199] /* gENCLS.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 401
type: SIMPLE_ASSIGN
gENCLS.p.ii = ($cse2 * gENCLS.id - $cse1 * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_401(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,401};
  data->localData[0]->realVars[94] /* gENCLS.p.ii variable */ = ((data->localData[0]->realVars[27] /* $cse2 variable */) * (data->localData[0]->realVars[91] /* gENCLS.id variable */) - ((data->localData[0]->realVars[26] /* $cse1 variable */) * (data->localData[0]->realVars[92] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[199] /* gENCLS.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 402
type: SIMPLE_ASSIGN
gENCLS.vq = gENCLS.eq + (-gENCLS.R_a) * gENCLS.iq - gENCLS.X_d * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_402(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,402};
  data->localData[0]->realVars[97] /* gENCLS.vq variable */ = data->localData[0]->realVars[6] /* gENCLS.eq STATE(1) */ + ((-data->simulationInfo->realParameter[205] /* gENCLS.R_a PARAM */)) * (data->localData[0]->realVars[92] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[208] /* gENCLS.X_d PARAM */) * (data->localData[0]->realVars[91] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 403
type: SIMPLE_ASSIGN
gENCLS.vd = gENCLS.X_d * gENCLS.iq - gENCLS.R_a * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_403(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,403};
  data->localData[0]->realVars[96] /* gENCLS.vd variable */ = (data->simulationInfo->realParameter[208] /* gENCLS.X_d PARAM */) * (data->localData[0]->realVars[92] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[205] /* gENCLS.R_a PARAM */) * (data->localData[0]->realVars[91] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 404
type: SIMPLE_ASSIGN
pwLine1.ir.re = (-pwLine4.ir.re) - gENCLS.p.ir
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_404(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,404};
  data->localData[0]->realVars[132] /* pwLine1.ir.re variable */ = (-data->localData[0]->realVars[154] /* pwLine4.ir.re variable */) - data->localData[0]->realVars[95] /* gENCLS.p.ir variable */;
  TRACE_POP
}
/*
equation index: 405
type: SIMPLE_ASSIGN
pwLine4.ir.im = (-pwLine1.ir.im) - gENCLS.p.ii
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_405(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,405};
  data->localData[0]->realVars[153] /* pwLine4.ir.im variable */ = (-data->localData[0]->realVars[131] /* pwLine1.ir.im variable */) - data->localData[0]->realVars[94] /* gENCLS.p.ii variable */;
  TRACE_POP
}
/*
equation index: 406
type: SIMPLE_ASSIGN
pwFault.p.ii = (-pwLine3.ir.im) - pwLine4.is.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_406(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,406};
  data->localData[0]->realVars[115] /* pwFault.p.ii variable */ = (-data->localData[0]->realVars[143] /* pwLine3.ir.im variable */) - data->localData[0]->realVars[155] /* pwLine4.is.im variable */;
  TRACE_POP
}
/*
equation index: 407
type: SIMPLE_ASSIGN
pwFault.p.ir = (-pwLine3.ir.re) - pwLine4.is.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_407(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,407};
  data->localData[0]->realVars[116] /* pwFault.p.ir variable */ = (-data->localData[0]->realVars[144] /* pwLine3.ir.re variable */) - data->localData[0]->realVars[156] /* pwLine4.is.re variable */;
  TRACE_POP
}
/*
equation index: 408
type: SIMPLE_ASSIGN
constantLoad.p.ir = (-pwLine.ir.re) - pwLine1.is.re - pwLine3.is.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_408(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,408};
  data->localData[0]->realVars[54] /* constantLoad.p.ir variable */ = (-data->localData[0]->realVars[122] /* pwLine.ir.re variable */) - data->localData[0]->realVars[134] /* pwLine1.is.re variable */ - data->localData[0]->realVars[146] /* pwLine3.is.re variable */;
  TRACE_POP
}
/*
equation index: 409
type: SIMPLE_ASSIGN
pwLine.ir.im = (-pwLine1.is.im) - pwLine3.is.im - constantLoad.p.ii
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_409(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,409};
  data->localData[0]->realVars[121] /* pwLine.ir.im variable */ = (-data->localData[0]->realVars[133] /* pwLine1.is.im variable */) - data->localData[0]->realVars[145] /* pwLine3.is.im variable */ - data->localData[0]->realVars[53] /* constantLoad.p.ii variable */;
  TRACE_POP
}

void residualFunc477(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,477};
  int i;
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_boolean tmp3;
  modelica_boolean tmp4;
  modelica_boolean tmp5;
  modelica_boolean tmp6;
  modelica_boolean tmp7;
  modelica_boolean tmp8;
  modelica_boolean tmp9;
  modelica_boolean tmp10;
  modelica_real tmp11;
  modelica_real tmp12;
  modelica_boolean tmp13;
  modelica_real tmp14;
  modelica_boolean tmp15;
  modelica_real tmp16;
  modelica_boolean tmp17;
  modelica_real tmp18;
  modelica_boolean tmp19;
  modelica_boolean tmp20;
  modelica_boolean tmp21;
  modelica_boolean tmp22;
  modelica_boolean tmp23;
  modelica_real tmp24;
  modelica_real tmp25;
  modelica_boolean tmp26;
  modelica_real tmp27;
  modelica_boolean tmp28;
  modelica_real tmp29;
  modelica_boolean tmp30;
  modelica_real tmp31;
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
  data->localData[0]->realVars[53] /* constantLoad.p.ii variable */ = xloc[0];
  data->localData[0]->realVars[133] /* pwLine1.is.im variable */ = xloc[1];
  data->localData[0]->realVars[122] /* pwLine.ir.re variable */ = xloc[2];
  data->localData[0]->realVars[134] /* pwLine1.is.re variable */ = xloc[3];
  data->localData[0]->realVars[156] /* pwLine4.is.re variable */ = xloc[4];
  data->localData[0]->realVars[144] /* pwLine3.ir.re variable */ = xloc[5];
  data->localData[0]->realVars[155] /* pwLine4.is.im variable */ = xloc[6];
  data->localData[0]->realVars[143] /* pwLine3.ir.im variable */ = xloc[7];
  data->localData[0]->realVars[146] /* pwLine3.is.re variable */ = xloc[8];
  data->localData[0]->realVars[145] /* pwLine3.is.im variable */ = xloc[9];
  data->localData[0]->realVars[131] /* pwLine1.ir.im variable */ = xloc[10];
  data->localData[0]->realVars[154] /* pwLine4.ir.re variable */ = xloc[11];
  data->localData[0]->realVars[92] /* gENCLS.iq variable */ = xloc[12];
  data->localData[0]->realVars[91] /* gENCLS.id variable */ = xloc[13];
  data->localData[0]->realVars[136] /* pwLine1.vr.re variable */ = xloc[14];
  data->localData[0]->realVars[135] /* pwLine1.vr.im variable */ = xloc[15];
  data->localData[0]->realVars[112] /* gENROE.iq variable */ = xloc[16];
  data->localData[0]->realVars[111] /* gENROE.id variable */ = xloc[17];
  data->localData[0]->realVars[137] /* pwLine1.vs.im variable */ = xloc[18];
  data->localData[0]->realVars[138] /* pwLine1.vs.re variable */ = xloc[19];
  data->localData[0]->realVars[148] /* pwLine3.vr.re variable */ = xloc[20];
  data->localData[0]->realVars[147] /* pwLine3.vr.im variable */ = xloc[21];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_387(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_388(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_389(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_390(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_391(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_392(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_393(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_394(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_395(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_396(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_397(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_398(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_399(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_400(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_401(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_402(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_403(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_404(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_405(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_406(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_407(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_408(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_409(data, threadData);
  /* body */
  RELATIONHYSTERESIS(tmp0, data->localData[0]->timeValue, data->simulationInfo->realParameter[345] /* pwLine3.t1 PARAM */, 3, GreaterEq);
  RELATIONHYSTERESIS(tmp1, data->localData[0]->timeValue, data->simulationInfo->realParameter[346] /* pwLine3.t2 PARAM */, 4, Less);
  res[0] = ((tmp0 && tmp1)?data->localData[0]->realVars[146] /* pwLine3.is.re variable */:data->localData[0]->realVars[138] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[148] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[344] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[146] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[137] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[341] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[138] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[342] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[343] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[145] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[138] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[341] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[137] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[342] /* pwLine3.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp2, data->localData[0]->timeValue, data->simulationInfo->realParameter[345] /* pwLine3.t1 PARAM */, 3, GreaterEq);
  RELATIONHYSTERESIS(tmp3, data->localData[0]->timeValue, data->simulationInfo->realParameter[346] /* pwLine3.t2 PARAM */, 4, Less);
  res[1] = ((tmp2 && tmp3)?data->localData[0]->realVars[145] /* pwLine3.is.im variable */:data->localData[0]->realVars[137] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[147] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[344] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[145] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[138] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[341] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[137] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[342] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[343] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[146] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[137] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[341] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[138] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[342] /* pwLine3.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp4, data->localData[0]->timeValue, data->simulationInfo->realParameter[345] /* pwLine3.t1 PARAM */, 3, GreaterEq);
  RELATIONHYSTERESIS(tmp5, data->localData[0]->timeValue, data->simulationInfo->realParameter[346] /* pwLine3.t2 PARAM */, 4, Less);
  res[2] = ((tmp4 && tmp5)?data->localData[0]->realVars[144] /* pwLine3.ir.re variable */:data->localData[0]->realVars[148] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[138] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[344] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[144] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[147] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[341] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[148] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[342] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[343] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[143] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[148] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[341] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[147] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[342] /* pwLine3.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp6, data->localData[0]->timeValue, data->simulationInfo->realParameter[345] /* pwLine3.t1 PARAM */, 3, GreaterEq);
  RELATIONHYSTERESIS(tmp7, data->localData[0]->timeValue, data->simulationInfo->realParameter[346] /* pwLine3.t2 PARAM */, 4, Less);
  res[3] = ((tmp6 && tmp7)?data->localData[0]->realVars[143] /* pwLine3.ir.im variable */:data->localData[0]->realVars[147] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[137] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[344] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[143] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[148] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[341] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[147] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[342] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[343] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[144] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[147] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[341] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[148] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[342] /* pwLine3.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp8, data->localData[0]->timeValue, data->simulationInfo->realParameter[312] /* pwFault.t1 PARAM */, 11, Less);
  tmp17 = (modelica_boolean)tmp8;
  if(tmp17)
  {
    tmp18 = data->localData[0]->realVars[115] /* pwFault.p.ii variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp9, data->localData[0]->timeValue, data->simulationInfo->realParameter[313] /* pwFault.t2 PARAM */, 12, Less);
    tmp15 = (modelica_boolean)(tmp9 && data->simulationInfo->booleanParameter[70] /* pwFault.ground PARAM */);
    if(tmp15)
    {
      tmp16 = data->localData[0]->realVars[148] /* pwLine3.vr.re variable */ - 1e-10;
    }
    else
    {
      RELATIONHYSTERESIS(tmp10, data->localData[0]->timeValue, data->simulationInfo->realParameter[313] /* pwFault.t2 PARAM */, 12, Less);
      tmp13 = (modelica_boolean)tmp10;
      if(tmp13)
      {
        tmp11 = data->simulationInfo->realParameter[311] /* pwFault.X PARAM */;
        tmp12 = data->simulationInfo->realParameter[310] /* pwFault.R PARAM */;
        tmp14 = data->localData[0]->realVars[115] /* pwFault.p.ii variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[310] /* pwFault.R PARAM */) * (data->localData[0]->realVars[147] /* pwLine3.vr.im variable */) - ((data->simulationInfo->realParameter[311] /* pwFault.X PARAM */) * (data->localData[0]->realVars[148] /* pwLine3.vr.re variable */)),(tmp11 * tmp11) + (tmp12 * tmp12),"pwFault.X ^ 2.0 + pwFault.R ^ 2.0",equationIndexes));
      }
      else
      {
        tmp14 = data->localData[0]->realVars[115] /* pwFault.p.ii variable */;
      }
      tmp16 = tmp14;
    }
    tmp18 = tmp16;
  }
  res[4] = tmp18;

  RELATIONHYSTERESIS(tmp19, data->localData[0]->timeValue, data->simulationInfo->realParameter[356] /* pwLine4.t1 PARAM */, 9, GreaterEq);
  RELATIONHYSTERESIS(tmp20, data->localData[0]->timeValue, data->simulationInfo->realParameter[357] /* pwLine4.t2 PARAM */, 10, Less);
  res[5] = ((tmp19 && tmp20)?data->localData[0]->realVars[156] /* pwLine4.is.re variable */:data->localData[0]->realVars[148] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[136] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[355] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[156] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[147] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[352] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[148] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[353] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[354] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[155] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[148] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[352] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[147] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[353] /* pwLine4.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp21, data->localData[0]->timeValue, data->simulationInfo->realParameter[312] /* pwFault.t1 PARAM */, 11, Less);
  tmp30 = (modelica_boolean)tmp21;
  if(tmp30)
  {
    tmp31 = data->localData[0]->realVars[116] /* pwFault.p.ir variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp22, data->localData[0]->timeValue, data->simulationInfo->realParameter[313] /* pwFault.t2 PARAM */, 12, Less);
    tmp28 = (modelica_boolean)(tmp22 && data->simulationInfo->booleanParameter[70] /* pwFault.ground PARAM */);
    if(tmp28)
    {
      tmp29 = data->localData[0]->realVars[147] /* pwLine3.vr.im variable */;
    }
    else
    {
      RELATIONHYSTERESIS(tmp23, data->localData[0]->timeValue, data->simulationInfo->realParameter[313] /* pwFault.t2 PARAM */, 12, Less);
      tmp26 = (modelica_boolean)tmp23;
      if(tmp26)
      {
        tmp24 = data->simulationInfo->realParameter[310] /* pwFault.R PARAM */;
        tmp25 = data->simulationInfo->realParameter[311] /* pwFault.X PARAM */;
        tmp27 = data->localData[0]->realVars[116] /* pwFault.p.ir variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[310] /* pwFault.R PARAM */) * (data->localData[0]->realVars[148] /* pwLine3.vr.re variable */) + (data->simulationInfo->realParameter[311] /* pwFault.X PARAM */) * (data->localData[0]->realVars[147] /* pwLine3.vr.im variable */),(tmp24 * tmp24) + (tmp25 * tmp25),"pwFault.R ^ 2.0 + pwFault.X ^ 2.0",equationIndexes));
      }
      else
      {
        tmp27 = data->localData[0]->realVars[116] /* pwFault.p.ir variable */;
      }
      tmp29 = tmp27;
    }
    tmp31 = tmp29;
  }
  res[6] = tmp31;

  RELATIONHYSTERESIS(tmp32, data->localData[0]->timeValue, data->simulationInfo->realParameter[356] /* pwLine4.t1 PARAM */, 9, GreaterEq);
  RELATIONHYSTERESIS(tmp33, data->localData[0]->timeValue, data->simulationInfo->realParameter[357] /* pwLine4.t2 PARAM */, 10, Less);
  res[7] = ((tmp32 && tmp33)?data->localData[0]->realVars[155] /* pwLine4.is.im variable */:data->localData[0]->realVars[147] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[135] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[355] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[155] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[148] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[352] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[147] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[353] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[354] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[156] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[147] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[352] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[148] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[353] /* pwLine4.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp34, data->localData[0]->timeValue, data->simulationInfo->realParameter[356] /* pwLine4.t1 PARAM */, 9, GreaterEq);
  RELATIONHYSTERESIS(tmp35, data->localData[0]->timeValue, data->simulationInfo->realParameter[357] /* pwLine4.t2 PARAM */, 10, Less);
  res[8] = ((tmp34 && tmp35)?data->localData[0]->realVars[153] /* pwLine4.ir.im variable */:data->localData[0]->realVars[135] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[147] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[355] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[153] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[136] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[352] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[135] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[353] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[354] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[154] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[135] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[352] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[136] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[353] /* pwLine4.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp36, data->localData[0]->timeValue, data->simulationInfo->realParameter[334] /* pwLine1.t1 PARAM */, 13, GreaterEq);
  RELATIONHYSTERESIS(tmp37, data->localData[0]->timeValue, data->simulationInfo->realParameter[335] /* pwLine1.t2 PARAM */, 14, Less);
  res[9] = ((tmp36 && tmp37)?data->localData[0]->realVars[131] /* pwLine1.ir.im variable */:data->localData[0]->realVars[135] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[137] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[333] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[131] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[136] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[330] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[135] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[331] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[332] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[132] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[135] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[330] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[136] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[331] /* pwLine1.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp38, data->localData[0]->timeValue, data->simulationInfo->realParameter[356] /* pwLine4.t1 PARAM */, 9, GreaterEq);
  RELATIONHYSTERESIS(tmp39, data->localData[0]->timeValue, data->simulationInfo->realParameter[357] /* pwLine4.t2 PARAM */, 10, Less);
  res[10] = ((tmp38 && tmp39)?data->localData[0]->realVars[154] /* pwLine4.ir.re variable */:data->localData[0]->realVars[136] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[148] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[355] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[154] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[135] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[352] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[136] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[353] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[354] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[153] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[136] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[352] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[135] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[353] /* pwLine4.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp40, data->localData[0]->timeValue, data->simulationInfo->realParameter[334] /* pwLine1.t1 PARAM */, 13, GreaterEq);
  RELATIONHYSTERESIS(tmp41, data->localData[0]->timeValue, data->simulationInfo->realParameter[335] /* pwLine1.t2 PARAM */, 14, Less);
  res[11] = ((tmp40 && tmp41)?data->localData[0]->realVars[132] /* pwLine1.ir.re variable */:data->localData[0]->realVars[136] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[138] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[333] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[132] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[135] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[330] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[136] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[331] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[332] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[131] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[136] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[330] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[135] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[331] /* pwLine1.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp42, data->localData[0]->timeValue, data->simulationInfo->realParameter[334] /* pwLine1.t1 PARAM */, 13, GreaterEq);
  RELATIONHYSTERESIS(tmp43, data->localData[0]->timeValue, data->simulationInfo->realParameter[335] /* pwLine1.t2 PARAM */, 14, Less);
  res[12] = ((tmp42 && tmp43)?data->localData[0]->realVars[133] /* pwLine1.is.im variable */:data->localData[0]->realVars[137] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[135] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[333] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[133] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[138] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[330] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[137] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[331] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[332] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[134] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[137] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[330] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[138] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[331] /* pwLine1.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp44, data->localData[0]->timeValue, data->simulationInfo->realParameter[323] /* pwLine.t1 PARAM */, 1, GreaterEq);
  RELATIONHYSTERESIS(tmp45, data->localData[0]->timeValue, data->simulationInfo->realParameter[324] /* pwLine.t2 PARAM */, 2, Less);
  res[13] = ((tmp44 && tmp45)?data->localData[0]->realVars[121] /* pwLine.ir.im variable */:data->localData[0]->realVars[137] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[125] /* pwLine.vs.im variable */ - ((data->simulationInfo->realParameter[322] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[121] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[138] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[319] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[137] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[320] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[321] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[122] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[137] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[319] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[138] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[320] /* pwLine.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp46, data->localData[0]->timeValue, data->simulationInfo->realParameter[323] /* pwLine.t1 PARAM */, 1, GreaterEq);
  RELATIONHYSTERESIS(tmp47, data->localData[0]->timeValue, data->simulationInfo->realParameter[324] /* pwLine.t2 PARAM */, 2, Less);
  res[14] = ((tmp46 && tmp47)?data->localData[0]->realVars[123] /* pwLine.is.im variable */:data->localData[0]->realVars[125] /* pwLine.vs.im variable */ - data->localData[0]->realVars[137] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[322] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[123] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[126] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[319] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[125] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[320] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[321] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[124] /* pwLine.is.re variable */ + (data->localData[0]->realVars[125] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[319] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[126] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[320] /* pwLine.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp48, data->localData[0]->timeValue, data->simulationInfo->realParameter[323] /* pwLine.t1 PARAM */, 1, GreaterEq);
  RELATIONHYSTERESIS(tmp49, data->localData[0]->timeValue, data->simulationInfo->realParameter[324] /* pwLine.t2 PARAM */, 2, Less);
  res[15] = ((tmp48 && tmp49)?data->localData[0]->realVars[124] /* pwLine.is.re variable */:data->localData[0]->realVars[126] /* pwLine.vs.re variable */ - data->localData[0]->realVars[138] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[322] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[124] /* pwLine.is.re variable */ + (data->localData[0]->realVars[125] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[319] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[126] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[320] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[321] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[123] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[126] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[319] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[125] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[320] /* pwLine.Y.re PARAM */))))));

  res[16] = (data->localData[0]->realVars[137] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[54] /* constantLoad.p.ir variable */) + ((-data->localData[0]->realVars[138] /* pwLine1.vs.re variable */)) * (data->localData[0]->realVars[53] /* constantLoad.p.ii variable */) - data->localData[0]->realVars[49] /* constantLoad.Q variable */;

  res[17] = (data->localData[0]->realVars[137] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[53] /* constantLoad.p.ii variable */) + (data->localData[0]->realVars[138] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[54] /* constantLoad.p.ir variable */) - data->localData[0]->realVars[48] /* constantLoad.P variable */;

  RELATIONHYSTERESIS(tmp50, data->localData[0]->timeValue, data->simulationInfo->realParameter[323] /* pwLine.t1 PARAM */, 1, GreaterEq);
  RELATIONHYSTERESIS(tmp51, data->localData[0]->timeValue, data->simulationInfo->realParameter[324] /* pwLine.t2 PARAM */, 2, Less);
  res[18] = ((tmp50 && tmp51)?data->localData[0]->realVars[122] /* pwLine.ir.re variable */:data->localData[0]->realVars[138] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[126] /* pwLine.vs.re variable */ - ((data->simulationInfo->realParameter[322] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[122] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[137] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[319] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[138] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[320] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[321] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[121] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[138] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[319] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[137] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[320] /* pwLine.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp52, data->localData[0]->timeValue, data->simulationInfo->realParameter[334] /* pwLine1.t1 PARAM */, 13, GreaterEq);
  RELATIONHYSTERESIS(tmp53, data->localData[0]->timeValue, data->simulationInfo->realParameter[335] /* pwLine1.t2 PARAM */, 14, Less);
  res[19] = ((tmp52 && tmp53)?data->localData[0]->realVars[134] /* pwLine1.is.re variable */:data->localData[0]->realVars[138] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[136] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[333] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[134] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[137] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[330] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[138] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[331] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[332] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[133] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[138] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[330] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[137] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[331] /* pwLine1.Y.re PARAM */))))));

  res[20] = (data->localData[0]->realVars[27] /* $cse2 variable */) * (data->localData[0]->realVars[97] /* gENCLS.vq variable */) + (data->localData[0]->realVars[26] /* $cse1 variable */) * (data->localData[0]->realVars[96] /* gENCLS.vd variable */) - data->localData[0]->realVars[136] /* pwLine1.vr.re variable */;

  res[21] = (data->localData[0]->realVars[26] /* $cse1 variable */) * (data->localData[0]->realVars[97] /* gENCLS.vq variable */) + ((-data->localData[0]->realVars[27] /* $cse2 variable */)) * (data->localData[0]->realVars[96] /* gENCLS.vd variable */) - data->localData[0]->realVars[135] /* pwLine1.vr.im variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS477(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+22] = {0,4,4,4,4,3,3,3,3,4,4,4,4,6,6,7,7,4,4,11,11,8,8};
  const int rowIndex[116] = {13,16,17,18,12,13,18,19,13,16,17,18,12,16,17,19,5,6,7,2,3,6,4,5,7,2,3,4,0,1,16,17,0,1,13,18,8,9,10,11,8,9,10,11,8,9,10,11,20,21,8,9,10,11,20,21,5,8,9,10,11,19,20,7,8,9,10,11,12,21,13,14,15,18,13,14,15,18,0,1,3,9,12,13,14,16,17,18,19,0,1,2,11,12,13,15,16,17,18,19,0,2,3,4,5,6,7,10,1,2,3,4,5,6,7,8};
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
  inSysData->sparsePattern->colorCols[15] = 5;
  inSysData->sparsePattern->colorCols[17] = 5;
  inSysData->sparsePattern->colorCols[14] = 6;
  inSysData->sparsePattern->colorCols[16] = 6;
  inSysData->sparsePattern->colorCols[3] = 7;
  inSysData->sparsePattern->colorCols[9] = 7;
  inSysData->sparsePattern->colorCols[13] = 7;
  inSysData->sparsePattern->colorCols[2] = 8;
  inSysData->sparsePattern->colorCols[12] = 8;
  inSysData->sparsePattern->colorCols[1] = 9;
  inSysData->sparsePattern->colorCols[5] = 9;
  inSysData->sparsePattern->colorCols[6] = 9;
  inSysData->sparsePattern->colorCols[8] = 9;
  inSysData->sparsePattern->colorCols[11] = 9;
  inSysData->sparsePattern->colorCols[0] = 10;
  inSysData->sparsePattern->colorCols[4] = 10;
  inSysData->sparsePattern->colorCols[7] = 10;
  inSysData->sparsePattern->colorCols[10] = 10;
}
void initializeStaticDataNLS477(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for constantLoad.p.ii */
  sysData->nominal[i] = data->modelData->realVarsData[53].attribute /* constantLoad.p.ii */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[53].attribute /* constantLoad.p.ii */.min;
  sysData->max[i++]   = data->modelData->realVarsData[53].attribute /* constantLoad.p.ii */.max;
  /* static nls data for pwLine1.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[133].attribute /* pwLine1.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[133].attribute /* pwLine1.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[133].attribute /* pwLine1.is.im */.max;
  /* static nls data for pwLine.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[122].attribute /* pwLine.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[122].attribute /* pwLine.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[122].attribute /* pwLine.ir.re */.max;
  /* static nls data for pwLine1.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[134].attribute /* pwLine1.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[134].attribute /* pwLine1.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[134].attribute /* pwLine1.is.re */.max;
  /* static nls data for pwLine4.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[156].attribute /* pwLine4.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[156].attribute /* pwLine4.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[156].attribute /* pwLine4.is.re */.max;
  /* static nls data for pwLine3.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[144].attribute /* pwLine3.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[144].attribute /* pwLine3.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[144].attribute /* pwLine3.ir.re */.max;
  /* static nls data for pwLine4.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[155].attribute /* pwLine4.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[155].attribute /* pwLine4.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[155].attribute /* pwLine4.is.im */.max;
  /* static nls data for pwLine3.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[143].attribute /* pwLine3.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[143].attribute /* pwLine3.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[143].attribute /* pwLine3.ir.im */.max;
  /* static nls data for pwLine3.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[146].attribute /* pwLine3.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[146].attribute /* pwLine3.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[146].attribute /* pwLine3.is.re */.max;
  /* static nls data for pwLine3.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[145].attribute /* pwLine3.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[145].attribute /* pwLine3.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[145].attribute /* pwLine3.is.im */.max;
  /* static nls data for pwLine1.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[131].attribute /* pwLine1.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[131].attribute /* pwLine1.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[131].attribute /* pwLine1.ir.im */.max;
  /* static nls data for pwLine4.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[154].attribute /* pwLine4.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[154].attribute /* pwLine4.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[154].attribute /* pwLine4.ir.re */.max;
  /* static nls data for gENCLS.iq */
  sysData->nominal[i] = data->modelData->realVarsData[92].attribute /* gENCLS.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[92].attribute /* gENCLS.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[92].attribute /* gENCLS.iq */.max;
  /* static nls data for gENCLS.id */
  sysData->nominal[i] = data->modelData->realVarsData[91].attribute /* gENCLS.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[91].attribute /* gENCLS.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[91].attribute /* gENCLS.id */.max;
  /* static nls data for pwLine1.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[136].attribute /* pwLine1.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[136].attribute /* pwLine1.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[136].attribute /* pwLine1.vr.re */.max;
  /* static nls data for pwLine1.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[135].attribute /* pwLine1.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[135].attribute /* pwLine1.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[135].attribute /* pwLine1.vr.im */.max;
  /* static nls data for gENROE.iq */
  sysData->nominal[i] = data->modelData->realVarsData[112].attribute /* gENROE.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[112].attribute /* gENROE.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[112].attribute /* gENROE.iq */.max;
  /* static nls data for gENROE.id */
  sysData->nominal[i] = data->modelData->realVarsData[111].attribute /* gENROE.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[111].attribute /* gENROE.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[111].attribute /* gENROE.id */.max;
  /* static nls data for pwLine1.vs.im */
  sysData->nominal[i] = data->modelData->realVarsData[137].attribute /* pwLine1.vs.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[137].attribute /* pwLine1.vs.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[137].attribute /* pwLine1.vs.im */.max;
  /* static nls data for pwLine1.vs.re */
  sysData->nominal[i] = data->modelData->realVarsData[138].attribute /* pwLine1.vs.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[138].attribute /* pwLine1.vs.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[138].attribute /* pwLine1.vs.re */.max;
  /* static nls data for pwLine3.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[148].attribute /* pwLine3.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[148].attribute /* pwLine3.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[148].attribute /* pwLine3.vr.re */.max;
  /* static nls data for pwLine3.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[147].attribute /* pwLine3.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[147].attribute /* pwLine3.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[147].attribute /* pwLine3.vr.im */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS477(sysData);
}

void getIterationVarsNLS477(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[53] /* constantLoad.p.ii variable */;
  array[1] = data->localData[0]->realVars[133] /* pwLine1.is.im variable */;
  array[2] = data->localData[0]->realVars[122] /* pwLine.ir.re variable */;
  array[3] = data->localData[0]->realVars[134] /* pwLine1.is.re variable */;
  array[4] = data->localData[0]->realVars[156] /* pwLine4.is.re variable */;
  array[5] = data->localData[0]->realVars[144] /* pwLine3.ir.re variable */;
  array[6] = data->localData[0]->realVars[155] /* pwLine4.is.im variable */;
  array[7] = data->localData[0]->realVars[143] /* pwLine3.ir.im variable */;
  array[8] = data->localData[0]->realVars[146] /* pwLine3.is.re variable */;
  array[9] = data->localData[0]->realVars[145] /* pwLine3.is.im variable */;
  array[10] = data->localData[0]->realVars[131] /* pwLine1.ir.im variable */;
  array[11] = data->localData[0]->realVars[154] /* pwLine4.ir.re variable */;
  array[12] = data->localData[0]->realVars[92] /* gENCLS.iq variable */;
  array[13] = data->localData[0]->realVars[91] /* gENCLS.id variable */;
  array[14] = data->localData[0]->realVars[136] /* pwLine1.vr.re variable */;
  array[15] = data->localData[0]->realVars[135] /* pwLine1.vr.im variable */;
  array[16] = data->localData[0]->realVars[112] /* gENROE.iq variable */;
  array[17] = data->localData[0]->realVars[111] /* gENROE.id variable */;
  array[18] = data->localData[0]->realVars[137] /* pwLine1.vs.im variable */;
  array[19] = data->localData[0]->realVars[138] /* pwLine1.vs.re variable */;
  array[20] = data->localData[0]->realVars[148] /* pwLine3.vr.re variable */;
  array[21] = data->localData[0]->realVars[147] /* pwLine3.vr.im variable */;
}


/* inner equations */

/*
equation index: 237
type: SIMPLE_ASSIGN
constantLoad.v = sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_237(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,237};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[138] /* pwLine1.vs.re variable */;
  tmp1 = data->localData[0]->realVars[137] /* pwLine1.vs.im variable */;
  data->localData[0]->realVars[55] /* constantLoad.v variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 238
type: SIMPLE_ASSIGN
constantLoad.kP = if constantLoad.v < constantLoad.PQBRAK then constantLoad.a0 + constantLoad.a1 * cos(constantLoad.v * constantLoad.wp) + constantLoad.b1 * sin(constantLoad.v * constantLoad.wp) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_238(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,238};
  modelica_boolean tmp0;
  tmp0 = Less(data->localData[0]->realVars[55] /* constantLoad.v variable */,data->simulationInfo->realParameter[35] /* constantLoad.PQBRAK PARAM */);
  data->localData[0]->realVars[52] /* constantLoad.kP variable */ = (tmp0?data->simulationInfo->realParameter[54] /* constantLoad.a0 PARAM */ + (data->simulationInfo->realParameter[55] /* constantLoad.a1 PARAM */) * (cos((data->localData[0]->realVars[55] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[75] /* constantLoad.wp PARAM */))) + (data->simulationInfo->realParameter[61] /* constantLoad.b1 PARAM */) * (sin((data->localData[0]->realVars[55] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[75] /* constantLoad.wp PARAM */))):1.0);
  TRACE_POP
}
/*
equation index: 239
type: SIMPLE_ASSIGN
constantLoad.kI = if constantLoad.v < 0.5 then constantLoad.a2 * constantLoad.b2 * constantLoad.v ^ (-1.0 + constantLoad.b2) * exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_239(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,239};
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
  tmp0 = Less(data->localData[0]->realVars[55] /* constantLoad.v variable */,0.5);
  tmp15 = (modelica_boolean)tmp0;
  if(tmp15)
  {
    tmp1 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
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
    }tmp8 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
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
  data->localData[0]->realVars[51] /* constantLoad.kI variable */ = tmp16;
  TRACE_POP
}
/*
equation index: 240
type: SIMPLE_ASSIGN
constantLoad.Q = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.im + constantLoad.d_Q) else constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_240(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,240};
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
    tmp2 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[38] /* constantLoad.S_I.im PARAM */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[42] /* constantLoad.S_Y.im PARAM */) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[40] /* constantLoad.S_P.im PARAM */ + data->simulationInfo->realParameter[64] /* constantLoad.d_Q PARAM */);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[38] /* constantLoad.S_I.im PARAM */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[42] /* constantLoad.S_Y.im PARAM */) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[40] /* constantLoad.S_P.im PARAM */);
  }
  data->localData[0]->realVars[49] /* constantLoad.Q variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 241
type: SIMPLE_ASSIGN
constantLoad.P = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.re + constantLoad.d_P) else constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_241(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,241};
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
    tmp2 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[39] /* constantLoad.S_I.re PARAM */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[43] /* constantLoad.S_Y.re PARAM */) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[41] /* constantLoad.S_P.re PARAM */ + data->simulationInfo->realParameter[63] /* constantLoad.d_P PARAM */);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[39] /* constantLoad.S_I.re PARAM */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[43] /* constantLoad.S_Y.re PARAM */) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[41] /* constantLoad.S_P.re PARAM */);
  }
  data->localData[0]->realVars[48] /* constantLoad.P variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 242
type: SIMPLE_ASSIGN
pwLine.is.re = (cos(gENROE.delta) * gENROE.iq - (-sin(gENROE.delta)) * gENROE.id) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_242(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,242};
  data->localData[0]->realVars[124] /* pwLine.is.re variable */ = ((cos(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[112] /* gENROE.iq variable */) - (((-sin(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */))) * (data->localData[0]->realVars[111] /* gENROE.id variable */))) * (data->simulationInfo->realParameter[225] /* gENROE.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 243
type: SIMPLE_ASSIGN
pwLine.is.im = (sin(gENROE.delta) * gENROE.iq - cos(gENROE.delta) * gENROE.id) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_243(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,243};
  data->localData[0]->realVars[123] /* pwLine.is.im variable */ = ((sin(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[112] /* gENROE.iq variable */) - ((cos(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[111] /* gENROE.id variable */))) * (data->simulationInfo->realParameter[225] /* gENROE.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 244
type: SIMPLE_ASSIGN
gENROE.PSIq = (-gENROE.PSIppq) - gENROE.Xppq * gENROE.iq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_244(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,244};
  data->localData[0]->realVars[105] /* gENROE.PSIq variable */ = (-data->localData[0]->realVars[104] /* gENROE.PSIppq variable */) - ((data->simulationInfo->realParameter[280] /* gENROE.Xppq PARAM */) * (data->localData[0]->realVars[112] /* gENROE.iq variable */));
  TRACE_POP
}
/*
equation index: 245
type: SIMPLE_ASSIGN
gENROE.ud = (-gENROE.PSIq) - gENROE.R_a * gENROE.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_245(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,245};
  data->localData[0]->realVars[113] /* gENROE.ud variable */ = (-data->localData[0]->realVars[105] /* gENROE.PSIq variable */) - ((data->simulationInfo->realParameter[262] /* gENROE.R_a PARAM */) * (data->localData[0]->realVars[111] /* gENROE.id variable */));
  TRACE_POP
}
/*
equation index: 246
type: SIMPLE_ASSIGN
pwLine.vs.re = sin(gENROE.delta) * gENROE.ud + cos(gENROE.delta) * gENROE.uq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_246(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,246};
  data->localData[0]->realVars[126] /* pwLine.vs.re variable */ = (sin(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[113] /* gENROE.ud variable */) + (cos(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[114] /* gENROE.uq variable */);
  TRACE_POP
}
/*
equation index: 247
type: SIMPLE_ASSIGN
pwLine.vs.im = sin(gENROE.delta) * gENROE.uq - cos(gENROE.delta) * gENROE.ud
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_247(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,247};
  data->localData[0]->realVars[125] /* pwLine.vs.im variable */ = (sin(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[114] /* gENROE.uq variable */) - ((cos(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[113] /* gENROE.ud variable */));
  TRACE_POP
}
/*
equation index: 248
type: SIMPLE_ASSIGN
gENROE.PSId = gENROE.uq + gENROE.R_a * gENROE.iq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_248(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,248};
  data->localData[0]->realVars[101] /* gENROE.PSId variable */ = data->localData[0]->realVars[114] /* gENROE.uq variable */ + (data->simulationInfo->realParameter[262] /* gENROE.R_a PARAM */) * (data->localData[0]->realVars[112] /* gENROE.iq variable */);
  TRACE_POP
}
/*
equation index: 249
type: SIMPLE_ASSIGN
gENROE.PSIppd = gENROE.PSId + gENROE.Xppd * gENROE.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_249(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,249};
  data->localData[0]->realVars[103] /* gENROE.PSIppd variable */ = data->localData[0]->realVars[101] /* gENROE.PSId variable */ + (data->simulationInfo->realParameter[279] /* gENROE.Xppd PARAM */) * (data->localData[0]->realVars[111] /* gENROE.id variable */);
  TRACE_POP
}
/*
equation index: 250
type: SIMPLE_ASSIGN
gENROE.PSIpp = sqrt(gENROE.PSIppd ^ 2.0 + gENROE.PSIppq ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_250(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,250};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[103] /* gENROE.PSIppd variable */;
  tmp1 = data->localData[0]->realVars[104] /* gENROE.PSIppq variable */;
  data->localData[0]->realVars[102] /* gENROE.PSIpp variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 251
type: SIMPLE_ASSIGN
gENROE.PSIkq = ((gENROE.Epd + (gENROE.Xpq - gENROE.Xl) * gENROE.iq) * gENROE.K1q + gENROE.Epd + gENROE.iq * (gENROE.Xpq - gENROE.Xq) + OpenIPSL.NonElectrical.Functions.SE_exp(gENROE.PSIpp, gENROE.S10, gENROE.S12, 1.0, 1.2) * gENROE.PSIppq * (gENROE.Xq - gENROE.Xl) / (gENROE.Xd - gENROE.Xl) - gENROE.XaqIlq) / gENROE.K1q
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_251(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,251};
  data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */ = DIVISION_SIM((data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */ + (data->simulationInfo->realParameter[281] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[276] /* gENROE.Xl PARAM */) * (data->localData[0]->realVars[112] /* gENROE.iq variable */)) * (data->simulationInfo->realParameter[240] /* gENROE.K1q PARAM */) + data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */ + (data->localData[0]->realVars[112] /* gENROE.iq variable */) * (data->simulationInfo->realParameter[281] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[282] /* gENROE.Xq PARAM */) + (omc_OpenIPSL_NonElectrical_Functions_SE__exp(threadData, data->localData[0]->realVars[102] /* gENROE.PSIpp variable */, data->simulationInfo->realParameter[265] /* gENROE.S10 PARAM */, data->simulationInfo->realParameter[266] /* gENROE.S12 PARAM */, 1.0, 1.2)) * ((data->localData[0]->realVars[104] /* gENROE.PSIppq variable */) * (DIVISION_SIM(data->simulationInfo->realParameter[282] /* gENROE.Xq PARAM */ - data->simulationInfo->realParameter[276] /* gENROE.Xl PARAM */,data->simulationInfo->realParameter[275] /* gENROE.Xd PARAM */ - data->simulationInfo->realParameter[276] /* gENROE.Xl PARAM */,"gENROE.Xd - gENROE.Xl",equationIndexes))) - data->localData[0]->realVars[108] /* gENROE.XaqIlq variable */,data->simulationInfo->realParameter[240] /* gENROE.K1q PARAM */,"gENROE.K1q",equationIndexes);
  TRACE_POP
}
/*
equation index: 252
type: SIMPLE_ASSIGN
gENROE.PSIkd = ((gENROE.Epq + (gENROE.Xl - gENROE.Xpd) * gENROE.id) * gENROE.K1d + gENROE.Epq + gENROE.id * (gENROE.Xd - gENROE.Xpd) + OpenIPSL.NonElectrical.Functions.SE_exp(gENROE.PSIpp, gENROE.S10, gENROE.S12, 1.0, 1.2) * gENROE.PSIppd - eXAC2.XADIFD) / gENROE.K1d
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_252(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,252};
  data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */ = DIVISION_SIM((data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ + (data->simulationInfo->realParameter[276] /* gENROE.Xl PARAM */ - data->simulationInfo->realParameter[277] /* gENROE.Xpd PARAM */) * (data->localData[0]->realVars[111] /* gENROE.id variable */)) * (data->simulationInfo->realParameter[239] /* gENROE.K1d PARAM */) + data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ + (data->localData[0]->realVars[111] /* gENROE.id variable */) * (data->simulationInfo->realParameter[275] /* gENROE.Xd PARAM */ - data->simulationInfo->realParameter[277] /* gENROE.Xpd PARAM */) + (omc_OpenIPSL_NonElectrical_Functions_SE__exp(threadData, data->localData[0]->realVars[102] /* gENROE.PSIpp variable */, data->simulationInfo->realParameter[265] /* gENROE.S10 PARAM */, data->simulationInfo->realParameter[266] /* gENROE.S12 PARAM */, 1.0, 1.2)) * (data->localData[0]->realVars[103] /* gENROE.PSIppd variable */) - data->localData[0]->realVars[66] /* eXAC2.XADIFD variable */,data->simulationInfo->realParameter[239] /* gENROE.K1d PARAM */,"gENROE.K1d",equationIndexes);
  TRACE_POP
}
/*
equation index: 253
type: SIMPLE_ASSIGN
gENCLS.p.ii = (cos(gENCLS.delta) * gENCLS.id - sin(gENCLS.delta) * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_253(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,253};
  data->localData[0]->realVars[94] /* gENCLS.p.ii variable */ = ((cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[91] /* gENCLS.id variable */) - ((sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[92] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[199] /* gENCLS.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 254
type: SIMPLE_ASSIGN
gENCLS.p.ir = ((-sin(gENCLS.delta)) * gENCLS.id - cos(gENCLS.delta) * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_254(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,254};
  data->localData[0]->realVars[95] /* gENCLS.p.ir variable */ = (((-sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */))) * (data->localData[0]->realVars[91] /* gENCLS.id variable */) - ((cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[92] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[199] /* gENCLS.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 255
type: SIMPLE_ASSIGN
gENCLS.vq = gENCLS.eq + (-gENCLS.R_a) * gENCLS.iq - gENCLS.X_d * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_255(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,255};
  data->localData[0]->realVars[97] /* gENCLS.vq variable */ = data->localData[0]->realVars[6] /* gENCLS.eq STATE(1) */ + ((-data->simulationInfo->realParameter[205] /* gENCLS.R_a PARAM */)) * (data->localData[0]->realVars[92] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[208] /* gENCLS.X_d PARAM */) * (data->localData[0]->realVars[91] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 256
type: SIMPLE_ASSIGN
gENCLS.vd = gENCLS.X_d * gENCLS.iq - gENCLS.R_a * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_256(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,256};
  data->localData[0]->realVars[96] /* gENCLS.vd variable */ = (data->simulationInfo->realParameter[208] /* gENCLS.X_d PARAM */) * (data->localData[0]->realVars[92] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[205] /* gENCLS.R_a PARAM */) * (data->localData[0]->realVars[91] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 257
type: SIMPLE_ASSIGN
pwLine4.ir.im = (-pwLine1.ir.im) - gENCLS.p.ii
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_257(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,257};
  data->localData[0]->realVars[153] /* pwLine4.ir.im variable */ = (-data->localData[0]->realVars[131] /* pwLine1.ir.im variable */) - data->localData[0]->realVars[94] /* gENCLS.p.ii variable */;
  TRACE_POP
}
/*
equation index: 258
type: SIMPLE_ASSIGN
pwLine1.ir.re = (-pwLine4.ir.re) - gENCLS.p.ir
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_258(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,258};
  data->localData[0]->realVars[132] /* pwLine1.ir.re variable */ = (-data->localData[0]->realVars[154] /* pwLine4.ir.re variable */) - data->localData[0]->realVars[95] /* gENCLS.p.ir variable */;
  TRACE_POP
}
/*
equation index: 259
type: SIMPLE_ASSIGN
pwFault.p.ii = (-pwLine3.ir.im) - pwLine4.is.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_259(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,259};
  data->localData[0]->realVars[115] /* pwFault.p.ii variable */ = (-data->localData[0]->realVars[143] /* pwLine3.ir.im variable */) - data->localData[0]->realVars[155] /* pwLine4.is.im variable */;
  TRACE_POP
}
/*
equation index: 260
type: SIMPLE_ASSIGN
pwFault.p.ir = (-pwLine3.ir.re) - pwLine4.is.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_260(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,260};
  data->localData[0]->realVars[116] /* pwFault.p.ir variable */ = (-data->localData[0]->realVars[144] /* pwLine3.ir.re variable */) - data->localData[0]->realVars[156] /* pwLine4.is.re variable */;
  TRACE_POP
}
/*
equation index: 261
type: SIMPLE_ASSIGN
constantLoad.p.ir = (-pwLine.ir.re) - pwLine1.is.re - pwLine3.is.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_261(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,261};
  data->localData[0]->realVars[54] /* constantLoad.p.ir variable */ = (-data->localData[0]->realVars[122] /* pwLine.ir.re variable */) - data->localData[0]->realVars[134] /* pwLine1.is.re variable */ - data->localData[0]->realVars[146] /* pwLine3.is.re variable */;
  TRACE_POP
}
/*
equation index: 262
type: SIMPLE_ASSIGN
constantLoad.p.ii = (-pwLine.ir.im) - pwLine1.is.im - pwLine3.is.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_262(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,262};
  data->localData[0]->realVars[53] /* constantLoad.p.ii variable */ = (-data->localData[0]->realVars[121] /* pwLine.ir.im variable */) - data->localData[0]->realVars[133] /* pwLine1.is.im variable */ - data->localData[0]->realVars[145] /* pwLine3.is.im variable */;
  TRACE_POP
}

void residualFunc289(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,289};
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
  modelica_real tmp14;
  modelica_real tmp15;
  modelica_boolean tmp16;
  modelica_real tmp17;
  modelica_boolean tmp18;
  modelica_real tmp19;
  modelica_boolean tmp20;
  modelica_real tmp21;
  modelica_boolean tmp22;
  modelica_boolean tmp23;
  modelica_boolean tmp24;
  modelica_boolean tmp25;
  modelica_boolean tmp26;
  modelica_boolean tmp27;
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
  for (i=0; i<26; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<26; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[121] /* pwLine.ir.im variable */ = xloc[0];
  data->localData[0]->realVars[145] /* pwLine3.is.im variable */ = xloc[1];
  data->localData[0]->realVars[122] /* pwLine.ir.re variable */ = xloc[2];
  data->localData[0]->realVars[146] /* pwLine3.is.re variable */ = xloc[3];
  data->localData[0]->realVars[134] /* pwLine1.is.re variable */ = xloc[4];
  data->localData[0]->realVars[133] /* pwLine1.is.im variable */ = xloc[5];
  data->localData[0]->realVars[156] /* pwLine4.is.re variable */ = xloc[6];
  data->localData[0]->realVars[144] /* pwLine3.ir.re variable */ = xloc[7];
  data->localData[0]->realVars[143] /* pwLine3.ir.im variable */ = xloc[8];
  data->localData[0]->realVars[155] /* pwLine4.is.im variable */ = xloc[9];
  data->localData[0]->realVars[154] /* pwLine4.ir.re variable */ = xloc[10];
  data->localData[0]->realVars[131] /* pwLine1.ir.im variable */ = xloc[11];
  data->localData[0]->realVars[92] /* gENCLS.iq variable */ = xloc[12];
  data->localData[0]->realVars[91] /* gENCLS.id variable */ = xloc[13];
  data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ = xloc[14];
  data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */ = xloc[15];
  data->localData[0]->realVars[114] /* gENROE.uq variable */ = xloc[16];
  data->localData[0]->realVars[104] /* gENROE.PSIppq variable */ = xloc[17];
  data->localData[0]->realVars[112] /* gENROE.iq variable */ = xloc[18];
  data->localData[0]->realVars[111] /* gENROE.id variable */ = xloc[19];
  data->localData[0]->realVars[135] /* pwLine1.vr.im variable */ = xloc[20];
  data->localData[0]->realVars[136] /* pwLine1.vr.re variable */ = xloc[21];
  data->localData[0]->realVars[138] /* pwLine1.vs.re variable */ = xloc[22];
  data->localData[0]->realVars[148] /* pwLine3.vr.re variable */ = xloc[23];
  data->localData[0]->realVars[147] /* pwLine3.vr.im variable */ = xloc[24];
  data->localData[0]->realVars[137] /* pwLine1.vs.im variable */ = xloc[25];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_237(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_238(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_239(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_240(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_241(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_242(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_243(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_244(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_245(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_246(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_247(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_248(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_249(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_250(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_251(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_252(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_253(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_254(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_255(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_256(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_257(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_258(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_259(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_260(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_261(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_262(data, threadData);
  /* body */
  res[0] = (sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[97] /* gENCLS.vq variable */) + ((-cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */))) * (data->localData[0]->realVars[96] /* gENCLS.vd variable */) - data->localData[0]->realVars[135] /* pwLine1.vr.im variable */;

  tmp0 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[312] /* pwFault.t1 PARAM */);
  tmp9 = (modelica_boolean)tmp0;
  if(tmp9)
  {
    tmp10 = data->localData[0]->realVars[115] /* pwFault.p.ii variable */;
  }
  else
  {
    tmp1 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[313] /* pwFault.t2 PARAM */);
    tmp7 = (modelica_boolean)(tmp1 && data->simulationInfo->booleanParameter[70] /* pwFault.ground PARAM */);
    if(tmp7)
    {
      tmp8 = data->localData[0]->realVars[148] /* pwLine3.vr.re variable */ - 1e-10;
    }
    else
    {
      tmp2 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[313] /* pwFault.t2 PARAM */);
      tmp5 = (modelica_boolean)tmp2;
      if(tmp5)
      {
        tmp3 = data->simulationInfo->realParameter[311] /* pwFault.X PARAM */;
        tmp4 = data->simulationInfo->realParameter[310] /* pwFault.R PARAM */;
        tmp6 = data->localData[0]->realVars[115] /* pwFault.p.ii variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[310] /* pwFault.R PARAM */) * (data->localData[0]->realVars[147] /* pwLine3.vr.im variable */) - ((data->simulationInfo->realParameter[311] /* pwFault.X PARAM */) * (data->localData[0]->realVars[148] /* pwLine3.vr.re variable */)),(tmp3 * tmp3) + (tmp4 * tmp4),"pwFault.X ^ 2.0 + pwFault.R ^ 2.0",equationIndexes));
      }
      else
      {
        tmp6 = data->localData[0]->realVars[115] /* pwFault.p.ii variable */;
      }
      tmp8 = tmp6;
    }
    tmp10 = tmp8;
  }
  res[1] = tmp10;

  tmp11 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[312] /* pwFault.t1 PARAM */);
  tmp20 = (modelica_boolean)tmp11;
  if(tmp20)
  {
    tmp21 = data->localData[0]->realVars[116] /* pwFault.p.ir variable */;
  }
  else
  {
    tmp12 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[313] /* pwFault.t2 PARAM */);
    tmp18 = (modelica_boolean)(tmp12 && data->simulationInfo->booleanParameter[70] /* pwFault.ground PARAM */);
    if(tmp18)
    {
      tmp19 = data->localData[0]->realVars[147] /* pwLine3.vr.im variable */;
    }
    else
    {
      tmp13 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[313] /* pwFault.t2 PARAM */);
      tmp16 = (modelica_boolean)tmp13;
      if(tmp16)
      {
        tmp14 = data->simulationInfo->realParameter[310] /* pwFault.R PARAM */;
        tmp15 = data->simulationInfo->realParameter[311] /* pwFault.X PARAM */;
        tmp17 = data->localData[0]->realVars[116] /* pwFault.p.ir variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[310] /* pwFault.R PARAM */) * (data->localData[0]->realVars[148] /* pwLine3.vr.re variable */) + (data->simulationInfo->realParameter[311] /* pwFault.X PARAM */) * (data->localData[0]->realVars[147] /* pwLine3.vr.im variable */),(tmp14 * tmp14) + (tmp15 * tmp15),"pwFault.R ^ 2.0 + pwFault.X ^ 2.0",equationIndexes));
      }
      else
      {
        tmp17 = data->localData[0]->realVars[116] /* pwFault.p.ir variable */;
      }
      tmp19 = tmp17;
    }
    tmp21 = tmp19;
  }
  res[2] = tmp21;

  tmp22 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[345] /* pwLine3.t1 PARAM */);
  tmp23 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[346] /* pwLine3.t2 PARAM */);
  res[3] = ((tmp22 && tmp23)?data->localData[0]->realVars[144] /* pwLine3.ir.re variable */:data->localData[0]->realVars[148] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[138] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[344] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[144] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[147] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[341] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[148] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[342] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[343] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[143] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[148] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[341] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[147] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[342] /* pwLine3.Y.re PARAM */))))));

  tmp24 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[345] /* pwLine3.t1 PARAM */);
  tmp25 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[346] /* pwLine3.t2 PARAM */);
  res[4] = ((tmp24 && tmp25)?data->localData[0]->realVars[143] /* pwLine3.ir.im variable */:data->localData[0]->realVars[147] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[137] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[344] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[143] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[148] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[341] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[147] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[342] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[343] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[144] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[147] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[341] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[148] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[342] /* pwLine3.Y.re PARAM */)))));

  tmp26 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[356] /* pwLine4.t1 PARAM */);
  tmp27 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[357] /* pwLine4.t2 PARAM */);
  res[5] = ((tmp26 && tmp27)?data->localData[0]->realVars[155] /* pwLine4.is.im variable */:data->localData[0]->realVars[147] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[135] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[355] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[155] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[148] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[352] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[147] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[353] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[354] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[156] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[147] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[352] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[148] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[353] /* pwLine4.Y.re PARAM */)))));

  tmp28 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[356] /* pwLine4.t1 PARAM */);
  tmp29 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[357] /* pwLine4.t2 PARAM */);
  res[6] = ((tmp28 && tmp29)?data->localData[0]->realVars[156] /* pwLine4.is.re variable */:data->localData[0]->realVars[148] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[136] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[355] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[156] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[147] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[352] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[148] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[353] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[354] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[155] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[148] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[352] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[147] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[353] /* pwLine4.Y.re PARAM */))))));

  res[7] = (cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[97] /* gENCLS.vq variable */) + (sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[96] /* gENCLS.vd variable */) - data->localData[0]->realVars[136] /* pwLine1.vr.re variable */;

  tmp30 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[356] /* pwLine4.t1 PARAM */);
  tmp31 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[357] /* pwLine4.t2 PARAM */);
  res[8] = ((tmp30 && tmp31)?data->localData[0]->realVars[154] /* pwLine4.ir.re variable */:data->localData[0]->realVars[136] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[148] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[355] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[154] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[135] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[352] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[136] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[353] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[354] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[153] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[136] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[352] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[135] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[353] /* pwLine4.Y.re PARAM */))))));

  tmp32 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[356] /* pwLine4.t1 PARAM */);
  tmp33 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[357] /* pwLine4.t2 PARAM */);
  res[9] = ((tmp32 && tmp33)?data->localData[0]->realVars[153] /* pwLine4.ir.im variable */:data->localData[0]->realVars[135] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[147] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[355] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[153] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[136] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[352] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[135] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[353] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[354] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[154] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[135] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[352] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[136] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[353] /* pwLine4.Y.re PARAM */)))));

  tmp34 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[334] /* pwLine1.t1 PARAM */);
  tmp35 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[335] /* pwLine1.t2 PARAM */);
  res[10] = ((tmp34 && tmp35)?data->localData[0]->realVars[134] /* pwLine1.is.re variable */:data->localData[0]->realVars[138] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[136] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[333] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[134] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[137] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[330] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[138] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[331] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[332] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[133] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[138] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[330] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[137] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[331] /* pwLine1.Y.re PARAM */))))));

  tmp36 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[334] /* pwLine1.t1 PARAM */);
  tmp37 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[335] /* pwLine1.t2 PARAM */);
  res[11] = ((tmp36 && tmp37)?data->localData[0]->realVars[133] /* pwLine1.is.im variable */:data->localData[0]->realVars[137] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[135] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[333] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[133] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[138] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[330] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[137] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[331] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[332] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[134] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[137] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[330] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[138] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[331] /* pwLine1.Y.re PARAM */)))));

  tmp38 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[334] /* pwLine1.t1 PARAM */);
  tmp39 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[335] /* pwLine1.t2 PARAM */);
  res[12] = ((tmp38 && tmp39)?data->localData[0]->realVars[131] /* pwLine1.ir.im variable */:data->localData[0]->realVars[135] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[137] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[333] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[131] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[136] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[330] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[135] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[331] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[332] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[132] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[135] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[330] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[136] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[331] /* pwLine1.Y.re PARAM */)))));

  tmp40 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[334] /* pwLine1.t1 PARAM */);
  tmp41 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[335] /* pwLine1.t2 PARAM */);
  res[13] = ((tmp40 && tmp41)?data->localData[0]->realVars[132] /* pwLine1.ir.re variable */:data->localData[0]->realVars[136] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[138] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[333] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[132] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[135] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[330] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[136] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[331] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[332] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[131] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[136] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[330] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[135] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[331] /* pwLine1.Y.re PARAM */))))));

  tmp42 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[323] /* pwLine.t1 PARAM */);
  tmp43 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[324] /* pwLine.t2 PARAM */);
  res[14] = ((tmp42 && tmp43)?data->localData[0]->realVars[124] /* pwLine.is.re variable */:data->localData[0]->realVars[126] /* pwLine.vs.re variable */ - data->localData[0]->realVars[138] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[322] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[124] /* pwLine.is.re variable */ + (data->localData[0]->realVars[125] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[319] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[126] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[320] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[321] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[123] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[126] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[319] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[125] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[320] /* pwLine.Y.re PARAM */))))));

  tmp44 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[345] /* pwLine3.t1 PARAM */);
  tmp45 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[346] /* pwLine3.t2 PARAM */);
  res[15] = ((tmp44 && tmp45)?data->localData[0]->realVars[146] /* pwLine3.is.re variable */:data->localData[0]->realVars[138] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[148] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[344] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[146] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[137] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[341] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[138] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[342] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[343] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[145] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[138] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[341] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[137] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[342] /* pwLine3.Y.re PARAM */))))));

  tmp46 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[345] /* pwLine3.t1 PARAM */);
  tmp47 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[346] /* pwLine3.t2 PARAM */);
  res[16] = ((tmp46 && tmp47)?data->localData[0]->realVars[145] /* pwLine3.is.im variable */:data->localData[0]->realVars[137] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[147] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[344] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[145] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[138] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[341] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[137] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[342] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[343] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[146] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[137] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[341] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[138] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[342] /* pwLine3.Y.re PARAM */)))));

  res[17] = (data->localData[0]->realVars[137] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[54] /* constantLoad.p.ir variable */) + ((-data->localData[0]->realVars[138] /* pwLine1.vs.re variable */)) * (data->localData[0]->realVars[53] /* constantLoad.p.ii variable */) - data->localData[0]->realVars[49] /* constantLoad.Q variable */;

  res[18] = (data->localData[0]->realVars[137] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[53] /* constantLoad.p.ii variable */) + (data->localData[0]->realVars[138] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[54] /* constantLoad.p.ir variable */) - data->localData[0]->realVars[48] /* constantLoad.P variable */;

  tmp48 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[323] /* pwLine.t1 PARAM */);
  tmp49 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[324] /* pwLine.t2 PARAM */);
  res[19] = ((tmp48 && tmp49)?data->localData[0]->realVars[122] /* pwLine.ir.re variable */:data->localData[0]->realVars[138] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[126] /* pwLine.vs.re variable */ - ((data->simulationInfo->realParameter[322] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[122] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[137] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[319] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[138] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[320] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[321] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[121] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[138] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[319] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[137] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[320] /* pwLine.Y.re PARAM */))))));

  tmp50 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[323] /* pwLine.t1 PARAM */);
  tmp51 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[324] /* pwLine.t2 PARAM */);
  res[20] = ((tmp50 && tmp51)?data->localData[0]->realVars[121] /* pwLine.ir.im variable */:data->localData[0]->realVars[137] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[125] /* pwLine.vs.im variable */ - ((data->simulationInfo->realParameter[322] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[121] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[138] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[319] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[137] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[320] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[321] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[122] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[137] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[319] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[138] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[320] /* pwLine.Y.re PARAM */)))));

  tmp52 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[323] /* pwLine.t1 PARAM */);
  tmp53 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[324] /* pwLine.t2 PARAM */);
  res[21] = ((tmp52 && tmp53)?data->localData[0]->realVars[123] /* pwLine.is.im variable */:data->localData[0]->realVars[125] /* pwLine.vs.im variable */ - data->localData[0]->realVars[137] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[322] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[123] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[126] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[319] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[125] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[320] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[321] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[124] /* pwLine.is.re variable */ + (data->localData[0]->realVars[125] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[319] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[126] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[320] /* pwLine.Y.re PARAM */)))));

  res[22] = (data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */) * (data->simulationInfo->realParameter[245] /* gENROE.K4d PARAM */) + (data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */) * (data->simulationInfo->realParameter[243] /* gENROE.K3d PARAM */) - data->localData[0]->realVars[103] /* gENROE.PSIppd variable */;

  res[23] = data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ + (data->simulationInfo->realParameter[276] /* gENROE.Xl PARAM */ - data->simulationInfo->realParameter[277] /* gENROE.Xpd PARAM */) * (data->localData[0]->realVars[111] /* gENROE.id variable */) + (-data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */) - ((data->localData[0]->realVars[22] /* der(gENROE.PSIkd) STATE_DER */) * (data->simulationInfo->realParameter[269] /* gENROE.Tppd0 PARAM */));

  res[24] = data->localData[0]->realVars[104] /* gENROE.PSIppq variable */ - ((data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */) * (data->simulationInfo->realParameter[244] /* gENROE.K3q PARAM */)) - ((data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */) * (data->simulationInfo->realParameter[246] /* gENROE.K4q PARAM */));

  res[25] = data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */ + (data->simulationInfo->realParameter[281] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[276] /* gENROE.Xl PARAM */) * (data->localData[0]->realVars[112] /* gENROE.iq variable */) + (-data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */) - ((data->localData[0]->realVars[23] /* der(gENROE.PSIkq) STATE_DER */) * (data->simulationInfo->realParameter[270] /* gENROE.Tppq0 PARAM */));
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS289(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+26] = {0,4,4,4,4,4,4,3,3,3,3,4,4,6,6,2,2,8,8,8,8,7,7,11,8,8,11};
  const int rowIndex[144] = {17,18,19,20,15,16,17,18,17,18,19,20,15,16,17,18,10,11,17,18,10,11,17,18,2,5,6,2,3,4,1,3,4,1,5,6,8,9,12,13,8,9,12,13,0,7,8,9,12,13,0,7,8,9,12,13,22,23,24,25,14,19,20,21,22,23,24,25,14,19,20,21,22,23,24,25,14,19,20,21,22,23,24,25,14,19,20,21,22,23,24,25,0,5,8,9,11,12,13,6,7,8,9,10,12,13,3,10,11,13,14,15,16,17,18,19,20,1,2,3,4,5,6,8,15,1,2,3,4,5,6,9,16,4,10,11,12,15,16,17,18,19,20,21};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  inSysData->sparsePattern->leadindex = (unsigned int*) malloc((26+1)*sizeof(int));
  inSysData->sparsePattern->index = (unsigned int*) malloc(144*sizeof(int));
  inSysData->sparsePattern->numberOfNoneZeros = 144;
  inSysData->sparsePattern->colorCols = (unsigned int*) malloc(26*sizeof(int));
  inSysData->sparsePattern->maxColors = 10;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (26+1)*sizeof(int));
  
  for(i=2;i<26+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 144*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern->colorCols[25] = 1;
  inSysData->sparsePattern->colorCols[22] = 2;
  inSysData->sparsePattern->colorCols[21] = 3;
  inSysData->sparsePattern->colorCols[20] = 4;
  inSysData->sparsePattern->colorCols[5] = 5;
  inSysData->sparsePattern->colorCols[19] = 5;
  inSysData->sparsePattern->colorCols[24] = 5;
  inSysData->sparsePattern->colorCols[4] = 6;
  inSysData->sparsePattern->colorCols[18] = 6;
  inSysData->sparsePattern->colorCols[23] = 6;
  inSysData->sparsePattern->colorCols[3] = 7;
  inSysData->sparsePattern->colorCols[13] = 7;
  inSysData->sparsePattern->colorCols[17] = 7;
  inSysData->sparsePattern->colorCols[2] = 8;
  inSysData->sparsePattern->colorCols[12] = 8;
  inSysData->sparsePattern->colorCols[1] = 9;
  inSysData->sparsePattern->colorCols[7] = 9;
  inSysData->sparsePattern->colorCols[9] = 9;
  inSysData->sparsePattern->colorCols[11] = 9;
  inSysData->sparsePattern->colorCols[16] = 9;
  inSysData->sparsePattern->colorCols[0] = 10;
  inSysData->sparsePattern->colorCols[6] = 10;
  inSysData->sparsePattern->colorCols[8] = 10;
  inSysData->sparsePattern->colorCols[10] = 10;
  inSysData->sparsePattern->colorCols[14] = 10;
  inSysData->sparsePattern->colorCols[15] = 10;
}
void initializeStaticDataNLS289(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for pwLine.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[121].attribute /* pwLine.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[121].attribute /* pwLine.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[121].attribute /* pwLine.ir.im */.max;
  /* static nls data for pwLine3.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[145].attribute /* pwLine3.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[145].attribute /* pwLine3.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[145].attribute /* pwLine3.is.im */.max;
  /* static nls data for pwLine.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[122].attribute /* pwLine.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[122].attribute /* pwLine.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[122].attribute /* pwLine.ir.re */.max;
  /* static nls data for pwLine3.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[146].attribute /* pwLine3.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[146].attribute /* pwLine3.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[146].attribute /* pwLine3.is.re */.max;
  /* static nls data for pwLine1.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[134].attribute /* pwLine1.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[134].attribute /* pwLine1.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[134].attribute /* pwLine1.is.re */.max;
  /* static nls data for pwLine1.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[133].attribute /* pwLine1.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[133].attribute /* pwLine1.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[133].attribute /* pwLine1.is.im */.max;
  /* static nls data for pwLine4.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[156].attribute /* pwLine4.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[156].attribute /* pwLine4.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[156].attribute /* pwLine4.is.re */.max;
  /* static nls data for pwLine3.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[144].attribute /* pwLine3.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[144].attribute /* pwLine3.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[144].attribute /* pwLine3.ir.re */.max;
  /* static nls data for pwLine3.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[143].attribute /* pwLine3.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[143].attribute /* pwLine3.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[143].attribute /* pwLine3.ir.im */.max;
  /* static nls data for pwLine4.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[155].attribute /* pwLine4.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[155].attribute /* pwLine4.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[155].attribute /* pwLine4.is.im */.max;
  /* static nls data for pwLine4.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[154].attribute /* pwLine4.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[154].attribute /* pwLine4.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[154].attribute /* pwLine4.ir.re */.max;
  /* static nls data for pwLine1.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[131].attribute /* pwLine1.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[131].attribute /* pwLine1.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[131].attribute /* pwLine1.ir.im */.max;
  /* static nls data for gENCLS.iq */
  sysData->nominal[i] = data->modelData->realVarsData[92].attribute /* gENCLS.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[92].attribute /* gENCLS.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[92].attribute /* gENCLS.iq */.max;
  /* static nls data for gENCLS.id */
  sysData->nominal[i] = data->modelData->realVarsData[91].attribute /* gENCLS.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[91].attribute /* gENCLS.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[91].attribute /* gENCLS.id */.max;
  /* static nls data for gENROE.Epq */
  sysData->nominal[i] = data->modelData->realVarsData[8].attribute /* gENROE.Epq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[8].attribute /* gENROE.Epq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[8].attribute /* gENROE.Epq */.max;
  /* static nls data for gENROE.Epd */
  sysData->nominal[i] = data->modelData->realVarsData[7].attribute /* gENROE.Epd */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[7].attribute /* gENROE.Epd */.min;
  sysData->max[i++]   = data->modelData->realVarsData[7].attribute /* gENROE.Epd */.max;
  /* static nls data for gENROE.uq */
  sysData->nominal[i] = data->modelData->realVarsData[114].attribute /* gENROE.uq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[114].attribute /* gENROE.uq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[114].attribute /* gENROE.uq */.max;
  /* static nls data for gENROE.PSIppq */
  sysData->nominal[i] = data->modelData->realVarsData[104].attribute /* gENROE.PSIppq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[104].attribute /* gENROE.PSIppq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[104].attribute /* gENROE.PSIppq */.max;
  /* static nls data for gENROE.iq */
  sysData->nominal[i] = data->modelData->realVarsData[112].attribute /* gENROE.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[112].attribute /* gENROE.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[112].attribute /* gENROE.iq */.max;
  /* static nls data for gENROE.id */
  sysData->nominal[i] = data->modelData->realVarsData[111].attribute /* gENROE.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[111].attribute /* gENROE.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[111].attribute /* gENROE.id */.max;
  /* static nls data for pwLine1.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[135].attribute /* pwLine1.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[135].attribute /* pwLine1.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[135].attribute /* pwLine1.vr.im */.max;
  /* static nls data for pwLine1.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[136].attribute /* pwLine1.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[136].attribute /* pwLine1.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[136].attribute /* pwLine1.vr.re */.max;
  /* static nls data for pwLine1.vs.re */
  sysData->nominal[i] = data->modelData->realVarsData[138].attribute /* pwLine1.vs.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[138].attribute /* pwLine1.vs.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[138].attribute /* pwLine1.vs.re */.max;
  /* static nls data for pwLine3.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[148].attribute /* pwLine3.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[148].attribute /* pwLine3.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[148].attribute /* pwLine3.vr.re */.max;
  /* static nls data for pwLine3.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[147].attribute /* pwLine3.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[147].attribute /* pwLine3.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[147].attribute /* pwLine3.vr.im */.max;
  /* static nls data for pwLine1.vs.im */
  sysData->nominal[i] = data->modelData->realVarsData[137].attribute /* pwLine1.vs.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[137].attribute /* pwLine1.vs.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[137].attribute /* pwLine1.vs.im */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS289(sysData);
}

void getIterationVarsNLS289(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[121] /* pwLine.ir.im variable */;
  array[1] = data->localData[0]->realVars[145] /* pwLine3.is.im variable */;
  array[2] = data->localData[0]->realVars[122] /* pwLine.ir.re variable */;
  array[3] = data->localData[0]->realVars[146] /* pwLine3.is.re variable */;
  array[4] = data->localData[0]->realVars[134] /* pwLine1.is.re variable */;
  array[5] = data->localData[0]->realVars[133] /* pwLine1.is.im variable */;
  array[6] = data->localData[0]->realVars[156] /* pwLine4.is.re variable */;
  array[7] = data->localData[0]->realVars[144] /* pwLine3.ir.re variable */;
  array[8] = data->localData[0]->realVars[143] /* pwLine3.ir.im variable */;
  array[9] = data->localData[0]->realVars[155] /* pwLine4.is.im variable */;
  array[10] = data->localData[0]->realVars[154] /* pwLine4.ir.re variable */;
  array[11] = data->localData[0]->realVars[131] /* pwLine1.ir.im variable */;
  array[12] = data->localData[0]->realVars[92] /* gENCLS.iq variable */;
  array[13] = data->localData[0]->realVars[91] /* gENCLS.id variable */;
  array[14] = data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */;
  array[15] = data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */;
  array[16] = data->localData[0]->realVars[114] /* gENROE.uq variable */;
  array[17] = data->localData[0]->realVars[104] /* gENROE.PSIppq variable */;
  array[18] = data->localData[0]->realVars[112] /* gENROE.iq variable */;
  array[19] = data->localData[0]->realVars[111] /* gENROE.id variable */;
  array[20] = data->localData[0]->realVars[135] /* pwLine1.vr.im variable */;
  array[21] = data->localData[0]->realVars[136] /* pwLine1.vr.re variable */;
  array[22] = data->localData[0]->realVars[138] /* pwLine1.vs.re variable */;
  array[23] = data->localData[0]->realVars[148] /* pwLine3.vr.re variable */;
  array[24] = data->localData[0]->realVars[147] /* pwLine3.vr.im variable */;
  array[25] = data->localData[0]->realVars[137] /* pwLine1.vs.im variable */;
}


/* inner equations */

/*
equation index: 200
type: SIMPLE_ASSIGN
eXAC2.rectifierCommutationVoltageDrop.division.u1 = eXAC2.rectifierCommutationVoltageDrop.gain2.k * eXAC2.XADIFD
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_200(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,200};
  data->localData[0]->realVars[79] /* eXAC2.rectifierCommutationVoltageDrop.division.u1 variable */ = (data->simulationInfo->realParameter[177] /* eXAC2.rectifierCommutationVoltageDrop.gain2.k PARAM */) * (data->localData[0]->realVars[66] /* eXAC2.XADIFD variable */);
  TRACE_POP
}
/*
equation index: 201
type: SIMPLE_ASSIGN
eXAC2.EFD = eXAC2.XADIFD + $DER.gENROE.Epq * gENROE.Tpd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_201(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,201};
  data->localData[0]->realVars[63] /* eXAC2.EFD variable */ = data->localData[0]->realVars[66] /* eXAC2.XADIFD variable */ + (data->localData[0]->realVars[21] /* der(gENROE.Epq) STATE_DER */) * (data->simulationInfo->realParameter[268] /* gENROE.Tpd0 PARAM */);
  TRACE_POP
}
/*
equation index: 202
type: SIMPLE_ASSIGN
eXAC2.Ifd0 = eXAC2.XADIFD
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_202(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,202};
  data->simulationInfo->realParameter[84] /* eXAC2.Ifd0 PARAM */ = data->localData[0]->realVars[66] /* eXAC2.XADIFD variable */;
  TRACE_POP
}
/*
equation index: 203
type: SIMPLE_ASSIGN
eXAC2.VE0 = OpenIPSL.Electrical.Controls.PSSE.ES.BaseClasses.invFEX(eXAC2.K_C, eXAC2.Efd0, eXAC2.Ifd0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_203(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,203};
  data->simulationInfo->realParameter[107] /* eXAC2.VE0 PARAM */ = omc_OpenIPSL_Electrical_Controls_PSSE_ES_BaseClasses_invFEX(threadData, data->simulationInfo->realParameter[87] /* eXAC2.K_C PARAM */, data->simulationInfo->realParameter[83] /* eXAC2.Efd0 PARAM */, data->simulationInfo->realParameter[84] /* eXAC2.Ifd0 PARAM */);
  TRACE_POP
}
/*
equation index: 204
type: SIMPLE_ASSIGN
eXAC2.rotatingExciterWithDemagnetizationLimited.Efd0 = eXAC2.VE0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_204(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,204};
  data->simulationInfo->realParameter[180] /* eXAC2.rotatingExciterWithDemagnetizationLimited.Efd0 PARAM */ = data->simulationInfo->realParameter[107] /* eXAC2.VE0 PARAM */;
  TRACE_POP
}
/*
equation index: 205
type: SIMPLE_ASSIGN
eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.y_start = eXAC2.rotatingExciterWithDemagnetizationLimited.Efd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_205(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,205};
  data->simulationInfo->realParameter[193] /* eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.y_start PARAM */ = data->simulationInfo->realParameter[180] /* eXAC2.rotatingExciterWithDemagnetizationLimited.Efd0 PARAM */;
  TRACE_POP
}
/*
equation index: 206
type: SIMPLE_ASSIGN
$START.eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.y = eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_206(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,206};
  data->modelData->realVarsData[4].attribute /* eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.y STATE(1) */.start = data->simulationInfo->realParameter[193] /* eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.y_start PARAM */;
    data->localData[0]->realVars[4] /* eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.y STATE(1) */ = data->modelData->realVarsData[4].attribute /* eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.y STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[4].info /* eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.y */.name, (modelica_real) data->localData[0]->realVars[4] /* eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.y STATE(1) */);
  TRACE_POP
}
/*
equation index: 207
type: SIMPLE_ASSIGN
eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.y = eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_207(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,207};
  data->localData[0]->realVars[4] /* eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.y STATE(1) */ = data->simulationInfo->realParameter[193] /* eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.y_start PARAM */;
  TRACE_POP
}
/*
equation index: 208
type: SIMPLE_ASSIGN
eXAC2.rectifierCommutationVoltageDrop.division.y = eXAC2.rectifierCommutationVoltageDrop.division.u1 / eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_208(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,208};
  data->localData[0]->realVars[80] /* eXAC2.rectifierCommutationVoltageDrop.division.y variable */ = DIVISION_SIM(data->localData[0]->realVars[79] /* eXAC2.rectifierCommutationVoltageDrop.division.u1 variable */,data->localData[0]->realVars[4] /* eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.y STATE(1) */,"eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.y",equationIndexes);
  TRACE_POP
}
/*
equation index: 209
type: SIMPLE_ASSIGN
eXAC2.rectifierCommutationVoltageDrop.fEX.y = if eXAC2.rectifierCommutationVoltageDrop.division.y <= 0.0 then 1.0 else if eXAC2.rectifierCommutationVoltageDrop.division.y > 0.0 and eXAC2.rectifierCommutationVoltageDrop.division.y <= 0.433 then 1.0 + (-0.577) * eXAC2.rectifierCommutationVoltageDrop.division.y else if eXAC2.rectifierCommutationVoltageDrop.division.y > 0.433 and eXAC2.rectifierCommutationVoltageDrop.division.y < 0.75 then sqrt(0.75 - eXAC2.rectifierCommutationVoltageDrop.division.y ^ 2.0) else if eXAC2.rectifierCommutationVoltageDrop.division.y >= 0.75 and eXAC2.rectifierCommutationVoltageDrop.division.y <= 1.0 then 1.732 * (1.0 - eXAC2.rectifierCommutationVoltageDrop.division.y) else 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_209(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,209};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_boolean tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_boolean tmp7;
  modelica_boolean tmp8;
  modelica_boolean tmp9;
  modelica_real tmp10;
  modelica_boolean tmp11;
  modelica_real tmp12;
  modelica_boolean tmp13;
  modelica_real tmp14;
  tmp0 = LessEq(data->localData[0]->realVars[80] /* eXAC2.rectifierCommutationVoltageDrop.division.y variable */,0.0);
  tmp13 = (modelica_boolean)tmp0;
  if(tmp13)
  {
    tmp14 = 1.0;
  }
  else
  {
    tmp1 = Greater(data->localData[0]->realVars[80] /* eXAC2.rectifierCommutationVoltageDrop.division.y variable */,0.0);
    tmp2 = LessEq(data->localData[0]->realVars[80] /* eXAC2.rectifierCommutationVoltageDrop.division.y variable */,0.433);
    tmp11 = (modelica_boolean)(tmp1 && tmp2);
    if(tmp11)
    {
      tmp12 = 1.0 + (-0.577) * (data->localData[0]->realVars[80] /* eXAC2.rectifierCommutationVoltageDrop.division.y variable */);
    }
    else
    {
      tmp3 = Greater(data->localData[0]->realVars[80] /* eXAC2.rectifierCommutationVoltageDrop.division.y variable */,0.433);
      tmp4 = Less(data->localData[0]->realVars[80] /* eXAC2.rectifierCommutationVoltageDrop.division.y variable */,0.75);
      tmp9 = (modelica_boolean)(tmp3 && tmp4);
      if(tmp9)
      {
        tmp5 = data->localData[0]->realVars[80] /* eXAC2.rectifierCommutationVoltageDrop.division.y variable */;
        tmp6 = 0.75 - ((tmp5 * tmp5));
        if(!(tmp6 >= 0.0))
        {
          FILE_INFO info = {"",0,0,0,0,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of sqrt(0.75 - eXAC2.rectifierCommutationVoltageDrop.division.y ^ 2.0) was %g should be >= 0", tmp6);
        }
        tmp10 = sqrt(tmp6);
      }
      else
      {
        tmp7 = GreaterEq(data->localData[0]->realVars[80] /* eXAC2.rectifierCommutationVoltageDrop.division.y variable */,0.75);
        tmp8 = LessEq(data->localData[0]->realVars[80] /* eXAC2.rectifierCommutationVoltageDrop.division.y variable */,1.0);
        tmp10 = ((tmp7 && tmp8)?(1.732) * (1.0 - data->localData[0]->realVars[80] /* eXAC2.rectifierCommutationVoltageDrop.division.y variable */):0.0);
      }
      tmp12 = tmp10;
    }
    tmp14 = tmp12;
  }
  data->localData[0]->realVars[81] /* eXAC2.rectifierCommutationVoltageDrop.fEX.y variable */ = tmp14;
  TRACE_POP
}

void residualFunc211(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,211};
  int i;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[66] /* eXAC2.XADIFD variable */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_200(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_201(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_202(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_203(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_204(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_205(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_206(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_207(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_208(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_209(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[4] /* eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.y STATE(1) */) * (data->localData[0]->realVars[81] /* eXAC2.rectifierCommutationVoltageDrop.fEX.y variable */) - data->localData[0]->realVars[63] /* eXAC2.EFD variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS211(NONLINEAR_SYSTEM_DATA* inSysData)
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
void initializeStaticDataNLS211(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for eXAC2.XADIFD */
  sysData->nominal[i] = data->modelData->realVarsData[66].attribute /* eXAC2.XADIFD */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[66].attribute /* eXAC2.XADIFD */.min;
  sysData->max[i++]   = data->modelData->realVarsData[66].attribute /* eXAC2.XADIFD */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS211(sysData);
}

void getIterationVarsNLS211(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[66] /* eXAC2.XADIFD variable */;
}


/* inner equations */

/*
equation index: 53
type: SIMPLE_ASSIGN
constantLoad.v = sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_53(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,53};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[138] /* pwLine1.vs.re variable */;
  tmp1 = data->localData[0]->realVars[137] /* pwLine1.vs.im variable */;
  data->localData[0]->realVars[55] /* constantLoad.v variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 54
type: SIMPLE_ASSIGN
constantLoad.kP = if constantLoad.v < constantLoad.PQBRAK then constantLoad.a0 + constantLoad.a1 * cos(constantLoad.v * constantLoad.wp) + constantLoad.b1 * sin(constantLoad.v * constantLoad.wp) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_54(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,54};
  modelica_boolean tmp0;
  tmp0 = Less(data->localData[0]->realVars[55] /* constantLoad.v variable */,data->simulationInfo->realParameter[35] /* constantLoad.PQBRAK PARAM */);
  data->localData[0]->realVars[52] /* constantLoad.kP variable */ = (tmp0?data->simulationInfo->realParameter[54] /* constantLoad.a0 PARAM */ + (data->simulationInfo->realParameter[55] /* constantLoad.a1 PARAM */) * (cos((data->localData[0]->realVars[55] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[75] /* constantLoad.wp PARAM */))) + (data->simulationInfo->realParameter[61] /* constantLoad.b1 PARAM */) * (sin((data->localData[0]->realVars[55] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[75] /* constantLoad.wp PARAM */))):1.0);
  TRACE_POP
}
/*
equation index: 55
type: SIMPLE_ASSIGN
constantLoad.kI = if constantLoad.v < 0.5 then constantLoad.a2 * constantLoad.b2 * constantLoad.v ^ (-1.0 + constantLoad.b2) * exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_55(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,55};
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
  tmp0 = Less(data->localData[0]->realVars[55] /* constantLoad.v variable */,0.5);
  tmp15 = (modelica_boolean)tmp0;
  if(tmp15)
  {
    tmp1 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
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
    }tmp8 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
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
  data->localData[0]->realVars[51] /* constantLoad.kI variable */ = tmp16;
  TRACE_POP
}
/*
equation index: 56
type: SIMPLE_ASSIGN
constantLoad.Q = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.im + constantLoad.d_Q) else constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_56(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,56};
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
    tmp2 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[38] /* constantLoad.S_I.im PARAM */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[42] /* constantLoad.S_Y.im PARAM */) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[40] /* constantLoad.S_P.im PARAM */ + data->simulationInfo->realParameter[64] /* constantLoad.d_Q PARAM */);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[38] /* constantLoad.S_I.im PARAM */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[42] /* constantLoad.S_Y.im PARAM */) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[40] /* constantLoad.S_P.im PARAM */);
  }
  data->localData[0]->realVars[49] /* constantLoad.Q variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 57
type: SIMPLE_ASSIGN
constantLoad.P = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.re + constantLoad.d_P) else constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_57(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,57};
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
    tmp2 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[39] /* constantLoad.S_I.re PARAM */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[43] /* constantLoad.S_Y.re PARAM */) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[41] /* constantLoad.S_P.re PARAM */ + data->simulationInfo->realParameter[63] /* constantLoad.d_P PARAM */);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[39] /* constantLoad.S_I.re PARAM */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[43] /* constantLoad.S_Y.re PARAM */) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[41] /* constantLoad.S_P.re PARAM */);
  }
  data->localData[0]->realVars[48] /* constantLoad.P variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 58
type: SIMPLE_ASSIGN
pwLine.is.re = (cos(gENROE.delta) * gENROE.iq - (-sin(gENROE.delta)) * gENROE.id) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_58(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,58};
  data->localData[0]->realVars[124] /* pwLine.is.re variable */ = ((cos(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[112] /* gENROE.iq variable */) - (((-sin(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */))) * (data->localData[0]->realVars[111] /* gENROE.id variable */))) * (data->simulationInfo->realParameter[225] /* gENROE.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 59
type: SIMPLE_ASSIGN
pwLine.is.im = (sin(gENROE.delta) * gENROE.iq - cos(gENROE.delta) * gENROE.id) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_59(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,59};
  data->localData[0]->realVars[123] /* pwLine.is.im variable */ = ((sin(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[112] /* gENROE.iq variable */) - ((cos(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[111] /* gENROE.id variable */))) * (data->simulationInfo->realParameter[225] /* gENROE.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 60
type: SIMPLE_ASSIGN
gENROE.PSIq = (-gENROE.PSIppq) - gENROE.Xppq * gENROE.iq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_60(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,60};
  data->localData[0]->realVars[105] /* gENROE.PSIq variable */ = (-data->localData[0]->realVars[104] /* gENROE.PSIppq variable */) - ((data->simulationInfo->realParameter[280] /* gENROE.Xppq PARAM */) * (data->localData[0]->realVars[112] /* gENROE.iq variable */));
  TRACE_POP
}
/*
equation index: 61
type: SIMPLE_ASSIGN
gENROE.ud = (-gENROE.PSIq) - gENROE.R_a * gENROE.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_61(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,61};
  data->localData[0]->realVars[113] /* gENROE.ud variable */ = (-data->localData[0]->realVars[105] /* gENROE.PSIq variable */) - ((data->simulationInfo->realParameter[262] /* gENROE.R_a PARAM */) * (data->localData[0]->realVars[111] /* gENROE.id variable */));
  TRACE_POP
}
/*
equation index: 62
type: SIMPLE_ASSIGN
pwLine.vs.re = sin(gENROE.delta) * gENROE.ud + cos(gENROE.delta) * gENROE.uq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_62(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,62};
  data->localData[0]->realVars[126] /* pwLine.vs.re variable */ = (sin(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[113] /* gENROE.ud variable */) + (cos(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[114] /* gENROE.uq variable */);
  TRACE_POP
}
/*
equation index: 63
type: SIMPLE_ASSIGN
pwLine.vs.im = sin(gENROE.delta) * gENROE.uq - cos(gENROE.delta) * gENROE.ud
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_63(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,63};
  data->localData[0]->realVars[125] /* pwLine.vs.im variable */ = (sin(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[114] /* gENROE.uq variable */) - ((cos(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[113] /* gENROE.ud variable */));
  TRACE_POP
}
/*
equation index: 64
type: SIMPLE_ASSIGN
gENROE.PSId = gENROE.uq + gENROE.R_a * gENROE.iq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_64(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,64};
  data->localData[0]->realVars[101] /* gENROE.PSId variable */ = data->localData[0]->realVars[114] /* gENROE.uq variable */ + (data->simulationInfo->realParameter[262] /* gENROE.R_a PARAM */) * (data->localData[0]->realVars[112] /* gENROE.iq variable */);
  TRACE_POP
}
/*
equation index: 65
type: SIMPLE_ASSIGN
gENROE.PSIppd = gENROE.PSId + gENROE.Xppd * gENROE.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_65(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,65};
  data->localData[0]->realVars[103] /* gENROE.PSIppd variable */ = data->localData[0]->realVars[101] /* gENROE.PSId variable */ + (data->simulationInfo->realParameter[279] /* gENROE.Xppd PARAM */) * (data->localData[0]->realVars[111] /* gENROE.id variable */);
  TRACE_POP
}
/*
equation index: 66
type: SIMPLE_ASSIGN
gENROE.PSIpp = sqrt(gENROE.PSIppd ^ 2.0 + gENROE.PSIppq ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_66(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,66};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[103] /* gENROE.PSIppd variable */;
  tmp1 = data->localData[0]->realVars[104] /* gENROE.PSIppq variable */;
  data->localData[0]->realVars[102] /* gENROE.PSIpp variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 67
type: SIMPLE_ASSIGN
gENROE.PSIkq = ((gENROE.Epd + (gENROE.Xpq - gENROE.Xl) * gENROE.iq) * gENROE.K1q + gENROE.Epd + gENROE.iq * (gENROE.Xpq - gENROE.Xq) + OpenIPSL.NonElectrical.Functions.SE_exp(gENROE.PSIpp, gENROE.S10, gENROE.S12, 1.0, 1.2) * gENROE.PSIppq * (gENROE.Xq - gENROE.Xl) / (gENROE.Xd - gENROE.Xl) - gENROE.XaqIlq) / gENROE.K1q
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_67(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,67};
  data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */ = DIVISION_SIM((data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */ + (data->simulationInfo->realParameter[281] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[276] /* gENROE.Xl PARAM */) * (data->localData[0]->realVars[112] /* gENROE.iq variable */)) * (data->simulationInfo->realParameter[240] /* gENROE.K1q PARAM */) + data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */ + (data->localData[0]->realVars[112] /* gENROE.iq variable */) * (data->simulationInfo->realParameter[281] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[282] /* gENROE.Xq PARAM */) + (omc_OpenIPSL_NonElectrical_Functions_SE__exp(threadData, data->localData[0]->realVars[102] /* gENROE.PSIpp variable */, data->simulationInfo->realParameter[265] /* gENROE.S10 PARAM */, data->simulationInfo->realParameter[266] /* gENROE.S12 PARAM */, 1.0, 1.2)) * ((data->localData[0]->realVars[104] /* gENROE.PSIppq variable */) * (DIVISION_SIM(data->simulationInfo->realParameter[282] /* gENROE.Xq PARAM */ - data->simulationInfo->realParameter[276] /* gENROE.Xl PARAM */,data->simulationInfo->realParameter[275] /* gENROE.Xd PARAM */ - data->simulationInfo->realParameter[276] /* gENROE.Xl PARAM */,"gENROE.Xd - gENROE.Xl",equationIndexes))) - data->localData[0]->realVars[108] /* gENROE.XaqIlq variable */,data->simulationInfo->realParameter[240] /* gENROE.K1q PARAM */,"gENROE.K1q",equationIndexes);
  TRACE_POP
}
/*
equation index: 68
type: SIMPLE_ASSIGN
gENROE.PSIkd = ((gENROE.Epq + (gENROE.Xl - gENROE.Xpd) * gENROE.id) * gENROE.K1d + gENROE.Epq + gENROE.id * (gENROE.Xd - gENROE.Xpd) + OpenIPSL.NonElectrical.Functions.SE_exp(gENROE.PSIpp, gENROE.S10, gENROE.S12, 1.0, 1.2) * gENROE.PSIppd - eXAC2.XADIFD) / gENROE.K1d
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_68(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,68};
  data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */ = DIVISION_SIM((data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ + (data->simulationInfo->realParameter[276] /* gENROE.Xl PARAM */ - data->simulationInfo->realParameter[277] /* gENROE.Xpd PARAM */) * (data->localData[0]->realVars[111] /* gENROE.id variable */)) * (data->simulationInfo->realParameter[239] /* gENROE.K1d PARAM */) + data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ + (data->localData[0]->realVars[111] /* gENROE.id variable */) * (data->simulationInfo->realParameter[275] /* gENROE.Xd PARAM */ - data->simulationInfo->realParameter[277] /* gENROE.Xpd PARAM */) + (omc_OpenIPSL_NonElectrical_Functions_SE__exp(threadData, data->localData[0]->realVars[102] /* gENROE.PSIpp variable */, data->simulationInfo->realParameter[265] /* gENROE.S10 PARAM */, data->simulationInfo->realParameter[266] /* gENROE.S12 PARAM */, 1.0, 1.2)) * (data->localData[0]->realVars[103] /* gENROE.PSIppd variable */) - data->localData[0]->realVars[66] /* eXAC2.XADIFD variable */,data->simulationInfo->realParameter[239] /* gENROE.K1d PARAM */,"gENROE.K1d",equationIndexes);
  TRACE_POP
}
/*
equation index: 69
type: SIMPLE_ASSIGN
gENCLS.p.ii = (cos(gENCLS.delta) * gENCLS.id - sin(gENCLS.delta) * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_69(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,69};
  data->localData[0]->realVars[94] /* gENCLS.p.ii variable */ = ((cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[91] /* gENCLS.id variable */) - ((sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[92] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[199] /* gENCLS.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 70
type: SIMPLE_ASSIGN
gENCLS.p.ir = ((-sin(gENCLS.delta)) * gENCLS.id - cos(gENCLS.delta) * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_70(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,70};
  data->localData[0]->realVars[95] /* gENCLS.p.ir variable */ = (((-sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */))) * (data->localData[0]->realVars[91] /* gENCLS.id variable */) - ((cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[92] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[199] /* gENCLS.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 71
type: SIMPLE_ASSIGN
gENCLS.vq = gENCLS.eq + (-gENCLS.R_a) * gENCLS.iq - gENCLS.X_d * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_71(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,71};
  data->localData[0]->realVars[97] /* gENCLS.vq variable */ = data->localData[0]->realVars[6] /* gENCLS.eq STATE(1) */ + ((-data->simulationInfo->realParameter[205] /* gENCLS.R_a PARAM */)) * (data->localData[0]->realVars[92] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[208] /* gENCLS.X_d PARAM */) * (data->localData[0]->realVars[91] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 72
type: SIMPLE_ASSIGN
gENCLS.vd = gENCLS.X_d * gENCLS.iq - gENCLS.R_a * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_72(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,72};
  data->localData[0]->realVars[96] /* gENCLS.vd variable */ = (data->simulationInfo->realParameter[208] /* gENCLS.X_d PARAM */) * (data->localData[0]->realVars[92] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[205] /* gENCLS.R_a PARAM */) * (data->localData[0]->realVars[91] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 73
type: SIMPLE_ASSIGN
pwLine4.ir.im = (-pwLine1.ir.im) - gENCLS.p.ii
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_73(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,73};
  data->localData[0]->realVars[153] /* pwLine4.ir.im variable */ = (-data->localData[0]->realVars[131] /* pwLine1.ir.im variable */) - data->localData[0]->realVars[94] /* gENCLS.p.ii variable */;
  TRACE_POP
}
/*
equation index: 74
type: SIMPLE_ASSIGN
pwLine1.ir.re = (-pwLine4.ir.re) - gENCLS.p.ir
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_74(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,74};
  data->localData[0]->realVars[132] /* pwLine1.ir.re variable */ = (-data->localData[0]->realVars[154] /* pwLine4.ir.re variable */) - data->localData[0]->realVars[95] /* gENCLS.p.ir variable */;
  TRACE_POP
}
/*
equation index: 75
type: SIMPLE_ASSIGN
pwFault.p.ii = (-pwLine3.ir.im) - pwLine4.is.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_75(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,75};
  data->localData[0]->realVars[115] /* pwFault.p.ii variable */ = (-data->localData[0]->realVars[143] /* pwLine3.ir.im variable */) - data->localData[0]->realVars[155] /* pwLine4.is.im variable */;
  TRACE_POP
}
/*
equation index: 76
type: SIMPLE_ASSIGN
pwFault.p.ir = (-pwLine3.ir.re) - pwLine4.is.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_76(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,76};
  data->localData[0]->realVars[116] /* pwFault.p.ir variable */ = (-data->localData[0]->realVars[144] /* pwLine3.ir.re variable */) - data->localData[0]->realVars[156] /* pwLine4.is.re variable */;
  TRACE_POP
}
/*
equation index: 77
type: SIMPLE_ASSIGN
constantLoad.p.ir = (-pwLine.ir.re) - pwLine1.is.re - pwLine3.is.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_77(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,77};
  data->localData[0]->realVars[54] /* constantLoad.p.ir variable */ = (-data->localData[0]->realVars[122] /* pwLine.ir.re variable */) - data->localData[0]->realVars[134] /* pwLine1.is.re variable */ - data->localData[0]->realVars[146] /* pwLine3.is.re variable */;
  TRACE_POP
}
/*
equation index: 78
type: SIMPLE_ASSIGN
constantLoad.p.ii = (-pwLine.ir.im) - pwLine1.is.im - pwLine3.is.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_78(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,78};
  data->localData[0]->realVars[53] /* constantLoad.p.ii variable */ = (-data->localData[0]->realVars[121] /* pwLine.ir.im variable */) - data->localData[0]->realVars[133] /* pwLine1.is.im variable */ - data->localData[0]->realVars[145] /* pwLine3.is.im variable */;
  TRACE_POP
}

void residualFunc105(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,105};
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
  modelica_real tmp14;
  modelica_real tmp15;
  modelica_boolean tmp16;
  modelica_real tmp17;
  modelica_boolean tmp18;
  modelica_real tmp19;
  modelica_boolean tmp20;
  modelica_real tmp21;
  modelica_boolean tmp22;
  modelica_boolean tmp23;
  modelica_boolean tmp24;
  modelica_boolean tmp25;
  modelica_boolean tmp26;
  modelica_boolean tmp27;
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
  for (i=0; i<26; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<26; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[121] /* pwLine.ir.im variable */ = xloc[0];
  data->localData[0]->realVars[145] /* pwLine3.is.im variable */ = xloc[1];
  data->localData[0]->realVars[122] /* pwLine.ir.re variable */ = xloc[2];
  data->localData[0]->realVars[146] /* pwLine3.is.re variable */ = xloc[3];
  data->localData[0]->realVars[134] /* pwLine1.is.re variable */ = xloc[4];
  data->localData[0]->realVars[133] /* pwLine1.is.im variable */ = xloc[5];
  data->localData[0]->realVars[156] /* pwLine4.is.re variable */ = xloc[6];
  data->localData[0]->realVars[144] /* pwLine3.ir.re variable */ = xloc[7];
  data->localData[0]->realVars[143] /* pwLine3.ir.im variable */ = xloc[8];
  data->localData[0]->realVars[155] /* pwLine4.is.im variable */ = xloc[9];
  data->localData[0]->realVars[154] /* pwLine4.ir.re variable */ = xloc[10];
  data->localData[0]->realVars[131] /* pwLine1.ir.im variable */ = xloc[11];
  data->localData[0]->realVars[92] /* gENCLS.iq variable */ = xloc[12];
  data->localData[0]->realVars[91] /* gENCLS.id variable */ = xloc[13];
  data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ = xloc[14];
  data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */ = xloc[15];
  data->localData[0]->realVars[114] /* gENROE.uq variable */ = xloc[16];
  data->localData[0]->realVars[104] /* gENROE.PSIppq variable */ = xloc[17];
  data->localData[0]->realVars[112] /* gENROE.iq variable */ = xloc[18];
  data->localData[0]->realVars[111] /* gENROE.id variable */ = xloc[19];
  data->localData[0]->realVars[135] /* pwLine1.vr.im variable */ = xloc[20];
  data->localData[0]->realVars[136] /* pwLine1.vr.re variable */ = xloc[21];
  data->localData[0]->realVars[138] /* pwLine1.vs.re variable */ = xloc[22];
  data->localData[0]->realVars[148] /* pwLine3.vr.re variable */ = xloc[23];
  data->localData[0]->realVars[147] /* pwLine3.vr.im variable */ = xloc[24];
  data->localData[0]->realVars[137] /* pwLine1.vs.im variable */ = xloc[25];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_53(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_54(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_55(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_56(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_57(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_58(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_59(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_60(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_61(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_62(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_63(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_64(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_65(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_66(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_67(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_68(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_69(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_70(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_71(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_72(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_73(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_74(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_75(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_76(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_77(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_78(data, threadData);
  /* body */
  res[0] = (sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[97] /* gENCLS.vq variable */) + ((-cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */))) * (data->localData[0]->realVars[96] /* gENCLS.vd variable */) - data->localData[0]->realVars[135] /* pwLine1.vr.im variable */;

  tmp0 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[312] /* pwFault.t1 PARAM */);
  tmp9 = (modelica_boolean)tmp0;
  if(tmp9)
  {
    tmp10 = data->localData[0]->realVars[115] /* pwFault.p.ii variable */;
  }
  else
  {
    tmp1 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[313] /* pwFault.t2 PARAM */);
    tmp7 = (modelica_boolean)(tmp1 && data->simulationInfo->booleanParameter[70] /* pwFault.ground PARAM */);
    if(tmp7)
    {
      tmp8 = data->localData[0]->realVars[148] /* pwLine3.vr.re variable */ - 1e-10;
    }
    else
    {
      tmp2 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[313] /* pwFault.t2 PARAM */);
      tmp5 = (modelica_boolean)tmp2;
      if(tmp5)
      {
        tmp3 = data->simulationInfo->realParameter[311] /* pwFault.X PARAM */;
        tmp4 = data->simulationInfo->realParameter[310] /* pwFault.R PARAM */;
        tmp6 = data->localData[0]->realVars[115] /* pwFault.p.ii variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[310] /* pwFault.R PARAM */) * (data->localData[0]->realVars[147] /* pwLine3.vr.im variable */) - ((data->simulationInfo->realParameter[311] /* pwFault.X PARAM */) * (data->localData[0]->realVars[148] /* pwLine3.vr.re variable */)),(tmp3 * tmp3) + (tmp4 * tmp4),"pwFault.X ^ 2.0 + pwFault.R ^ 2.0",equationIndexes));
      }
      else
      {
        tmp6 = data->localData[0]->realVars[115] /* pwFault.p.ii variable */;
      }
      tmp8 = tmp6;
    }
    tmp10 = tmp8;
  }
  res[1] = tmp10;

  tmp11 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[312] /* pwFault.t1 PARAM */);
  tmp20 = (modelica_boolean)tmp11;
  if(tmp20)
  {
    tmp21 = data->localData[0]->realVars[116] /* pwFault.p.ir variable */;
  }
  else
  {
    tmp12 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[313] /* pwFault.t2 PARAM */);
    tmp18 = (modelica_boolean)(tmp12 && data->simulationInfo->booleanParameter[70] /* pwFault.ground PARAM */);
    if(tmp18)
    {
      tmp19 = data->localData[0]->realVars[147] /* pwLine3.vr.im variable */;
    }
    else
    {
      tmp13 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[313] /* pwFault.t2 PARAM */);
      tmp16 = (modelica_boolean)tmp13;
      if(tmp16)
      {
        tmp14 = data->simulationInfo->realParameter[310] /* pwFault.R PARAM */;
        tmp15 = data->simulationInfo->realParameter[311] /* pwFault.X PARAM */;
        tmp17 = data->localData[0]->realVars[116] /* pwFault.p.ir variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[310] /* pwFault.R PARAM */) * (data->localData[0]->realVars[148] /* pwLine3.vr.re variable */) + (data->simulationInfo->realParameter[311] /* pwFault.X PARAM */) * (data->localData[0]->realVars[147] /* pwLine3.vr.im variable */),(tmp14 * tmp14) + (tmp15 * tmp15),"pwFault.R ^ 2.0 + pwFault.X ^ 2.0",equationIndexes));
      }
      else
      {
        tmp17 = data->localData[0]->realVars[116] /* pwFault.p.ir variable */;
      }
      tmp19 = tmp17;
    }
    tmp21 = tmp19;
  }
  res[2] = tmp21;

  tmp22 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[345] /* pwLine3.t1 PARAM */);
  tmp23 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[346] /* pwLine3.t2 PARAM */);
  res[3] = ((tmp22 && tmp23)?data->localData[0]->realVars[144] /* pwLine3.ir.re variable */:data->localData[0]->realVars[148] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[138] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[344] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[144] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[147] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[341] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[148] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[342] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[343] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[143] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[148] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[341] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[147] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[342] /* pwLine3.Y.re PARAM */))))));

  tmp24 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[345] /* pwLine3.t1 PARAM */);
  tmp25 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[346] /* pwLine3.t2 PARAM */);
  res[4] = ((tmp24 && tmp25)?data->localData[0]->realVars[143] /* pwLine3.ir.im variable */:data->localData[0]->realVars[147] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[137] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[344] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[143] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[148] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[341] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[147] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[342] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[343] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[144] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[147] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[341] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[148] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[342] /* pwLine3.Y.re PARAM */)))));

  tmp26 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[356] /* pwLine4.t1 PARAM */);
  tmp27 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[357] /* pwLine4.t2 PARAM */);
  res[5] = ((tmp26 && tmp27)?data->localData[0]->realVars[155] /* pwLine4.is.im variable */:data->localData[0]->realVars[147] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[135] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[355] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[155] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[148] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[352] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[147] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[353] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[354] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[156] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[147] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[352] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[148] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[353] /* pwLine4.Y.re PARAM */)))));

  tmp28 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[356] /* pwLine4.t1 PARAM */);
  tmp29 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[357] /* pwLine4.t2 PARAM */);
  res[6] = ((tmp28 && tmp29)?data->localData[0]->realVars[156] /* pwLine4.is.re variable */:data->localData[0]->realVars[148] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[136] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[355] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[156] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[147] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[352] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[148] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[353] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[354] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[155] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[148] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[352] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[147] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[353] /* pwLine4.Y.re PARAM */))))));

  res[7] = (cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[97] /* gENCLS.vq variable */) + (sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[96] /* gENCLS.vd variable */) - data->localData[0]->realVars[136] /* pwLine1.vr.re variable */;

  tmp30 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[356] /* pwLine4.t1 PARAM */);
  tmp31 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[357] /* pwLine4.t2 PARAM */);
  res[8] = ((tmp30 && tmp31)?data->localData[0]->realVars[154] /* pwLine4.ir.re variable */:data->localData[0]->realVars[136] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[148] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[355] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[154] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[135] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[352] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[136] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[353] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[354] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[153] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[136] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[352] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[135] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[353] /* pwLine4.Y.re PARAM */))))));

  tmp32 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[356] /* pwLine4.t1 PARAM */);
  tmp33 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[357] /* pwLine4.t2 PARAM */);
  res[9] = ((tmp32 && tmp33)?data->localData[0]->realVars[153] /* pwLine4.ir.im variable */:data->localData[0]->realVars[135] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[147] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[355] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[153] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[136] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[352] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[135] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[353] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[354] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[154] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[135] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[352] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[136] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[353] /* pwLine4.Y.re PARAM */)))));

  tmp34 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[334] /* pwLine1.t1 PARAM */);
  tmp35 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[335] /* pwLine1.t2 PARAM */);
  res[10] = ((tmp34 && tmp35)?data->localData[0]->realVars[134] /* pwLine1.is.re variable */:data->localData[0]->realVars[138] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[136] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[333] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[134] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[137] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[330] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[138] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[331] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[332] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[133] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[138] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[330] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[137] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[331] /* pwLine1.Y.re PARAM */))))));

  tmp36 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[334] /* pwLine1.t1 PARAM */);
  tmp37 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[335] /* pwLine1.t2 PARAM */);
  res[11] = ((tmp36 && tmp37)?data->localData[0]->realVars[133] /* pwLine1.is.im variable */:data->localData[0]->realVars[137] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[135] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[333] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[133] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[138] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[330] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[137] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[331] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[332] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[134] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[137] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[330] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[138] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[331] /* pwLine1.Y.re PARAM */)))));

  tmp38 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[334] /* pwLine1.t1 PARAM */);
  tmp39 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[335] /* pwLine1.t2 PARAM */);
  res[12] = ((tmp38 && tmp39)?data->localData[0]->realVars[131] /* pwLine1.ir.im variable */:data->localData[0]->realVars[135] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[137] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[333] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[131] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[136] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[330] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[135] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[331] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[332] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[132] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[135] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[330] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[136] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[331] /* pwLine1.Y.re PARAM */)))));

  tmp40 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[334] /* pwLine1.t1 PARAM */);
  tmp41 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[335] /* pwLine1.t2 PARAM */);
  res[13] = ((tmp40 && tmp41)?data->localData[0]->realVars[132] /* pwLine1.ir.re variable */:data->localData[0]->realVars[136] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[138] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[333] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[132] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[135] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[330] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[136] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[331] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[332] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[131] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[136] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[330] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[135] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[331] /* pwLine1.Y.re PARAM */))))));

  tmp42 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[323] /* pwLine.t1 PARAM */);
  tmp43 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[324] /* pwLine.t2 PARAM */);
  res[14] = ((tmp42 && tmp43)?data->localData[0]->realVars[124] /* pwLine.is.re variable */:data->localData[0]->realVars[126] /* pwLine.vs.re variable */ - data->localData[0]->realVars[138] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[322] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[124] /* pwLine.is.re variable */ + (data->localData[0]->realVars[125] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[319] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[126] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[320] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[321] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[123] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[126] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[319] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[125] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[320] /* pwLine.Y.re PARAM */))))));

  tmp44 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[345] /* pwLine3.t1 PARAM */);
  tmp45 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[346] /* pwLine3.t2 PARAM */);
  res[15] = ((tmp44 && tmp45)?data->localData[0]->realVars[146] /* pwLine3.is.re variable */:data->localData[0]->realVars[138] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[148] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[344] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[146] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[137] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[341] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[138] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[342] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[343] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[145] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[138] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[341] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[137] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[342] /* pwLine3.Y.re PARAM */))))));

  tmp46 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[345] /* pwLine3.t1 PARAM */);
  tmp47 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[346] /* pwLine3.t2 PARAM */);
  res[16] = ((tmp46 && tmp47)?data->localData[0]->realVars[145] /* pwLine3.is.im variable */:data->localData[0]->realVars[137] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[147] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[344] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[145] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[138] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[341] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[137] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[342] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[343] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[146] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[137] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[341] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[138] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[342] /* pwLine3.Y.re PARAM */)))));

  res[17] = (data->localData[0]->realVars[137] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[54] /* constantLoad.p.ir variable */) + ((-data->localData[0]->realVars[138] /* pwLine1.vs.re variable */)) * (data->localData[0]->realVars[53] /* constantLoad.p.ii variable */) - data->localData[0]->realVars[49] /* constantLoad.Q variable */;

  res[18] = (data->localData[0]->realVars[137] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[53] /* constantLoad.p.ii variable */) + (data->localData[0]->realVars[138] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[54] /* constantLoad.p.ir variable */) - data->localData[0]->realVars[48] /* constantLoad.P variable */;

  tmp48 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[323] /* pwLine.t1 PARAM */);
  tmp49 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[324] /* pwLine.t2 PARAM */);
  res[19] = ((tmp48 && tmp49)?data->localData[0]->realVars[122] /* pwLine.ir.re variable */:data->localData[0]->realVars[138] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[126] /* pwLine.vs.re variable */ - ((data->simulationInfo->realParameter[322] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[122] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[137] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[319] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[138] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[320] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[321] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[121] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[138] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[319] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[137] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[320] /* pwLine.Y.re PARAM */))))));

  tmp50 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[323] /* pwLine.t1 PARAM */);
  tmp51 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[324] /* pwLine.t2 PARAM */);
  res[20] = ((tmp50 && tmp51)?data->localData[0]->realVars[121] /* pwLine.ir.im variable */:data->localData[0]->realVars[137] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[125] /* pwLine.vs.im variable */ - ((data->simulationInfo->realParameter[322] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[121] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[138] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[319] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[137] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[320] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[321] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[122] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[137] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[319] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[138] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[320] /* pwLine.Y.re PARAM */)))));

  tmp52 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[323] /* pwLine.t1 PARAM */);
  tmp53 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[324] /* pwLine.t2 PARAM */);
  res[21] = ((tmp52 && tmp53)?data->localData[0]->realVars[123] /* pwLine.is.im variable */:data->localData[0]->realVars[125] /* pwLine.vs.im variable */ - data->localData[0]->realVars[137] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[322] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[123] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[126] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[319] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[125] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[320] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[321] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[124] /* pwLine.is.re variable */ + (data->localData[0]->realVars[125] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[319] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[126] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[320] /* pwLine.Y.re PARAM */)))));

  res[22] = (data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */) * (data->simulationInfo->realParameter[245] /* gENROE.K4d PARAM */) + (data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */) * (data->simulationInfo->realParameter[243] /* gENROE.K3d PARAM */) - data->localData[0]->realVars[103] /* gENROE.PSIppd variable */;

  res[23] = data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ + (data->simulationInfo->realParameter[276] /* gENROE.Xl PARAM */ - data->simulationInfo->realParameter[277] /* gENROE.Xpd PARAM */) * (data->localData[0]->realVars[111] /* gENROE.id variable */) + (-data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */) - ((data->localData[0]->realVars[22] /* der(gENROE.PSIkd) STATE_DER */) * (data->simulationInfo->realParameter[269] /* gENROE.Tppd0 PARAM */));

  res[24] = data->localData[0]->realVars[104] /* gENROE.PSIppq variable */ - ((data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */) * (data->simulationInfo->realParameter[244] /* gENROE.K3q PARAM */)) - ((data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */) * (data->simulationInfo->realParameter[246] /* gENROE.K4q PARAM */));

  res[25] = data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */ + (data->simulationInfo->realParameter[281] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[276] /* gENROE.Xl PARAM */) * (data->localData[0]->realVars[112] /* gENROE.iq variable */) + (-data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */) - ((data->localData[0]->realVars[23] /* der(gENROE.PSIkq) STATE_DER */) * (data->simulationInfo->realParameter[270] /* gENROE.Tppq0 PARAM */));
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS105(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+26] = {0,4,4,4,4,4,4,3,3,3,3,4,4,6,6,2,2,8,8,8,8,7,7,11,8,8,11};
  const int rowIndex[144] = {17,18,19,20,15,16,17,18,17,18,19,20,15,16,17,18,10,11,17,18,10,11,17,18,2,5,6,2,3,4,1,3,4,1,5,6,8,9,12,13,8,9,12,13,0,7,8,9,12,13,0,7,8,9,12,13,22,23,24,25,14,19,20,21,22,23,24,25,14,19,20,21,22,23,24,25,14,19,20,21,22,23,24,25,14,19,20,21,22,23,24,25,0,5,8,9,11,12,13,6,7,8,9,10,12,13,3,10,11,13,14,15,16,17,18,19,20,1,2,3,4,5,6,8,15,1,2,3,4,5,6,9,16,4,10,11,12,15,16,17,18,19,20,21};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  inSysData->sparsePattern->leadindex = (unsigned int*) malloc((26+1)*sizeof(int));
  inSysData->sparsePattern->index = (unsigned int*) malloc(144*sizeof(int));
  inSysData->sparsePattern->numberOfNoneZeros = 144;
  inSysData->sparsePattern->colorCols = (unsigned int*) malloc(26*sizeof(int));
  inSysData->sparsePattern->maxColors = 10;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (26+1)*sizeof(int));
  
  for(i=2;i<26+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 144*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern->colorCols[25] = 1;
  inSysData->sparsePattern->colorCols[22] = 2;
  inSysData->sparsePattern->colorCols[21] = 3;
  inSysData->sparsePattern->colorCols[20] = 4;
  inSysData->sparsePattern->colorCols[5] = 5;
  inSysData->sparsePattern->colorCols[19] = 5;
  inSysData->sparsePattern->colorCols[24] = 5;
  inSysData->sparsePattern->colorCols[4] = 6;
  inSysData->sparsePattern->colorCols[18] = 6;
  inSysData->sparsePattern->colorCols[23] = 6;
  inSysData->sparsePattern->colorCols[3] = 7;
  inSysData->sparsePattern->colorCols[13] = 7;
  inSysData->sparsePattern->colorCols[17] = 7;
  inSysData->sparsePattern->colorCols[2] = 8;
  inSysData->sparsePattern->colorCols[12] = 8;
  inSysData->sparsePattern->colorCols[1] = 9;
  inSysData->sparsePattern->colorCols[7] = 9;
  inSysData->sparsePattern->colorCols[9] = 9;
  inSysData->sparsePattern->colorCols[11] = 9;
  inSysData->sparsePattern->colorCols[16] = 9;
  inSysData->sparsePattern->colorCols[0] = 10;
  inSysData->sparsePattern->colorCols[6] = 10;
  inSysData->sparsePattern->colorCols[8] = 10;
  inSysData->sparsePattern->colorCols[10] = 10;
  inSysData->sparsePattern->colorCols[14] = 10;
  inSysData->sparsePattern->colorCols[15] = 10;
}
void initializeStaticDataNLS105(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for pwLine.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[121].attribute /* pwLine.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[121].attribute /* pwLine.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[121].attribute /* pwLine.ir.im */.max;
  /* static nls data for pwLine3.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[145].attribute /* pwLine3.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[145].attribute /* pwLine3.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[145].attribute /* pwLine3.is.im */.max;
  /* static nls data for pwLine.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[122].attribute /* pwLine.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[122].attribute /* pwLine.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[122].attribute /* pwLine.ir.re */.max;
  /* static nls data for pwLine3.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[146].attribute /* pwLine3.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[146].attribute /* pwLine3.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[146].attribute /* pwLine3.is.re */.max;
  /* static nls data for pwLine1.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[134].attribute /* pwLine1.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[134].attribute /* pwLine1.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[134].attribute /* pwLine1.is.re */.max;
  /* static nls data for pwLine1.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[133].attribute /* pwLine1.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[133].attribute /* pwLine1.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[133].attribute /* pwLine1.is.im */.max;
  /* static nls data for pwLine4.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[156].attribute /* pwLine4.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[156].attribute /* pwLine4.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[156].attribute /* pwLine4.is.re */.max;
  /* static nls data for pwLine3.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[144].attribute /* pwLine3.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[144].attribute /* pwLine3.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[144].attribute /* pwLine3.ir.re */.max;
  /* static nls data for pwLine3.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[143].attribute /* pwLine3.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[143].attribute /* pwLine3.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[143].attribute /* pwLine3.ir.im */.max;
  /* static nls data for pwLine4.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[155].attribute /* pwLine4.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[155].attribute /* pwLine4.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[155].attribute /* pwLine4.is.im */.max;
  /* static nls data for pwLine4.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[154].attribute /* pwLine4.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[154].attribute /* pwLine4.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[154].attribute /* pwLine4.ir.re */.max;
  /* static nls data for pwLine1.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[131].attribute /* pwLine1.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[131].attribute /* pwLine1.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[131].attribute /* pwLine1.ir.im */.max;
  /* static nls data for gENCLS.iq */
  sysData->nominal[i] = data->modelData->realVarsData[92].attribute /* gENCLS.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[92].attribute /* gENCLS.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[92].attribute /* gENCLS.iq */.max;
  /* static nls data for gENCLS.id */
  sysData->nominal[i] = data->modelData->realVarsData[91].attribute /* gENCLS.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[91].attribute /* gENCLS.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[91].attribute /* gENCLS.id */.max;
  /* static nls data for gENROE.Epq */
  sysData->nominal[i] = data->modelData->realVarsData[8].attribute /* gENROE.Epq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[8].attribute /* gENROE.Epq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[8].attribute /* gENROE.Epq */.max;
  /* static nls data for gENROE.Epd */
  sysData->nominal[i] = data->modelData->realVarsData[7].attribute /* gENROE.Epd */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[7].attribute /* gENROE.Epd */.min;
  sysData->max[i++]   = data->modelData->realVarsData[7].attribute /* gENROE.Epd */.max;
  /* static nls data for gENROE.uq */
  sysData->nominal[i] = data->modelData->realVarsData[114].attribute /* gENROE.uq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[114].attribute /* gENROE.uq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[114].attribute /* gENROE.uq */.max;
  /* static nls data for gENROE.PSIppq */
  sysData->nominal[i] = data->modelData->realVarsData[104].attribute /* gENROE.PSIppq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[104].attribute /* gENROE.PSIppq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[104].attribute /* gENROE.PSIppq */.max;
  /* static nls data for gENROE.iq */
  sysData->nominal[i] = data->modelData->realVarsData[112].attribute /* gENROE.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[112].attribute /* gENROE.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[112].attribute /* gENROE.iq */.max;
  /* static nls data for gENROE.id */
  sysData->nominal[i] = data->modelData->realVarsData[111].attribute /* gENROE.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[111].attribute /* gENROE.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[111].attribute /* gENROE.id */.max;
  /* static nls data for pwLine1.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[135].attribute /* pwLine1.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[135].attribute /* pwLine1.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[135].attribute /* pwLine1.vr.im */.max;
  /* static nls data for pwLine1.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[136].attribute /* pwLine1.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[136].attribute /* pwLine1.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[136].attribute /* pwLine1.vr.re */.max;
  /* static nls data for pwLine1.vs.re */
  sysData->nominal[i] = data->modelData->realVarsData[138].attribute /* pwLine1.vs.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[138].attribute /* pwLine1.vs.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[138].attribute /* pwLine1.vs.re */.max;
  /* static nls data for pwLine3.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[148].attribute /* pwLine3.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[148].attribute /* pwLine3.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[148].attribute /* pwLine3.vr.re */.max;
  /* static nls data for pwLine3.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[147].attribute /* pwLine3.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[147].attribute /* pwLine3.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[147].attribute /* pwLine3.vr.im */.max;
  /* static nls data for pwLine1.vs.im */
  sysData->nominal[i] = data->modelData->realVarsData[137].attribute /* pwLine1.vs.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[137].attribute /* pwLine1.vs.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[137].attribute /* pwLine1.vs.im */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS105(sysData);
}

void getIterationVarsNLS105(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[121] /* pwLine.ir.im variable */;
  array[1] = data->localData[0]->realVars[145] /* pwLine3.is.im variable */;
  array[2] = data->localData[0]->realVars[122] /* pwLine.ir.re variable */;
  array[3] = data->localData[0]->realVars[146] /* pwLine3.is.re variable */;
  array[4] = data->localData[0]->realVars[134] /* pwLine1.is.re variable */;
  array[5] = data->localData[0]->realVars[133] /* pwLine1.is.im variable */;
  array[6] = data->localData[0]->realVars[156] /* pwLine4.is.re variable */;
  array[7] = data->localData[0]->realVars[144] /* pwLine3.ir.re variable */;
  array[8] = data->localData[0]->realVars[143] /* pwLine3.ir.im variable */;
  array[9] = data->localData[0]->realVars[155] /* pwLine4.is.im variable */;
  array[10] = data->localData[0]->realVars[154] /* pwLine4.ir.re variable */;
  array[11] = data->localData[0]->realVars[131] /* pwLine1.ir.im variable */;
  array[12] = data->localData[0]->realVars[92] /* gENCLS.iq variable */;
  array[13] = data->localData[0]->realVars[91] /* gENCLS.id variable */;
  array[14] = data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */;
  array[15] = data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */;
  array[16] = data->localData[0]->realVars[114] /* gENROE.uq variable */;
  array[17] = data->localData[0]->realVars[104] /* gENROE.PSIppq variable */;
  array[18] = data->localData[0]->realVars[112] /* gENROE.iq variable */;
  array[19] = data->localData[0]->realVars[111] /* gENROE.id variable */;
  array[20] = data->localData[0]->realVars[135] /* pwLine1.vr.im variable */;
  array[21] = data->localData[0]->realVars[136] /* pwLine1.vr.re variable */;
  array[22] = data->localData[0]->realVars[138] /* pwLine1.vs.re variable */;
  array[23] = data->localData[0]->realVars[148] /* pwLine3.vr.re variable */;
  array[24] = data->localData[0]->realVars[147] /* pwLine3.vr.im variable */;
  array[25] = data->localData[0]->realVars[137] /* pwLine1.vs.im variable */;
}


/* inner equations */

/*
equation index: 16
type: SIMPLE_ASSIGN
eXAC2.rectifierCommutationVoltageDrop.division.u1 = eXAC2.rectifierCommutationVoltageDrop.gain2.k * eXAC2.XADIFD
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_16(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,16};
  data->localData[0]->realVars[79] /* eXAC2.rectifierCommutationVoltageDrop.division.u1 variable */ = (data->simulationInfo->realParameter[177] /* eXAC2.rectifierCommutationVoltageDrop.gain2.k PARAM */) * (data->localData[0]->realVars[66] /* eXAC2.XADIFD variable */);
  TRACE_POP
}
/*
equation index: 17
type: SIMPLE_ASSIGN
eXAC2.EFD = eXAC2.XADIFD + $DER.gENROE.Epq * gENROE.Tpd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_17(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,17};
  data->localData[0]->realVars[63] /* eXAC2.EFD variable */ = data->localData[0]->realVars[66] /* eXAC2.XADIFD variable */ + (data->localData[0]->realVars[21] /* der(gENROE.Epq) STATE_DER */) * (data->simulationInfo->realParameter[268] /* gENROE.Tpd0 PARAM */);
  TRACE_POP
}
/*
equation index: 18
type: SIMPLE_ASSIGN
eXAC2.Ifd0 = eXAC2.XADIFD
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_18(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,18};
  data->simulationInfo->realParameter[84] /* eXAC2.Ifd0 PARAM */ = data->localData[0]->realVars[66] /* eXAC2.XADIFD variable */;
  TRACE_POP
}
/*
equation index: 19
type: SIMPLE_ASSIGN
eXAC2.VE0 = OpenIPSL.Electrical.Controls.PSSE.ES.BaseClasses.invFEX(eXAC2.K_C, eXAC2.Efd0, eXAC2.Ifd0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_19(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,19};
  data->simulationInfo->realParameter[107] /* eXAC2.VE0 PARAM */ = omc_OpenIPSL_Electrical_Controls_PSSE_ES_BaseClasses_invFEX(threadData, data->simulationInfo->realParameter[87] /* eXAC2.K_C PARAM */, data->simulationInfo->realParameter[83] /* eXAC2.Efd0 PARAM */, data->simulationInfo->realParameter[84] /* eXAC2.Ifd0 PARAM */);
  TRACE_POP
}
/*
equation index: 20
type: SIMPLE_ASSIGN
eXAC2.rotatingExciterWithDemagnetizationLimited.Efd0 = eXAC2.VE0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_20(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,20};
  data->simulationInfo->realParameter[180] /* eXAC2.rotatingExciterWithDemagnetizationLimited.Efd0 PARAM */ = data->simulationInfo->realParameter[107] /* eXAC2.VE0 PARAM */;
  TRACE_POP
}
/*
equation index: 21
type: SIMPLE_ASSIGN
eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.y_start = eXAC2.rotatingExciterWithDemagnetizationLimited.Efd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_21(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,21};
  data->simulationInfo->realParameter[193] /* eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.y_start PARAM */ = data->simulationInfo->realParameter[180] /* eXAC2.rotatingExciterWithDemagnetizationLimited.Efd0 PARAM */;
  TRACE_POP
}
/*
equation index: 22
type: SIMPLE_ASSIGN
$START.eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.y = eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_22(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,22};
  data->modelData->realVarsData[4].attribute /* eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.y STATE(1) */.start = data->simulationInfo->realParameter[193] /* eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.y_start PARAM */;
    data->localData[0]->realVars[4] /* eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.y STATE(1) */ = data->modelData->realVarsData[4].attribute /* eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.y STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[4].info /* eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.y */.name, (modelica_real) data->localData[0]->realVars[4] /* eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.y STATE(1) */);
  TRACE_POP
}
/*
equation index: 23
type: SIMPLE_ASSIGN
eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.y = eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_23(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,23};
  data->localData[0]->realVars[4] /* eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.y STATE(1) */ = data->simulationInfo->realParameter[193] /* eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.y_start PARAM */;
  TRACE_POP
}
/*
equation index: 24
type: SIMPLE_ASSIGN
eXAC2.rectifierCommutationVoltageDrop.division.y = eXAC2.rectifierCommutationVoltageDrop.division.u1 / eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_24(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,24};
  data->localData[0]->realVars[80] /* eXAC2.rectifierCommutationVoltageDrop.division.y variable */ = DIVISION_SIM(data->localData[0]->realVars[79] /* eXAC2.rectifierCommutationVoltageDrop.division.u1 variable */,data->localData[0]->realVars[4] /* eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.y STATE(1) */,"eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.y",equationIndexes);
  TRACE_POP
}
/*
equation index: 25
type: SIMPLE_ASSIGN
eXAC2.rectifierCommutationVoltageDrop.fEX.y = if eXAC2.rectifierCommutationVoltageDrop.division.y <= 0.0 then 1.0 else if eXAC2.rectifierCommutationVoltageDrop.division.y > 0.0 and eXAC2.rectifierCommutationVoltageDrop.division.y <= 0.433 then 1.0 + (-0.577) * eXAC2.rectifierCommutationVoltageDrop.division.y else if eXAC2.rectifierCommutationVoltageDrop.division.y > 0.433 and eXAC2.rectifierCommutationVoltageDrop.division.y < 0.75 then sqrt(0.75 - eXAC2.rectifierCommutationVoltageDrop.division.y ^ 2.0) else if eXAC2.rectifierCommutationVoltageDrop.division.y >= 0.75 and eXAC2.rectifierCommutationVoltageDrop.division.y <= 1.0 then 1.732 * (1.0 - eXAC2.rectifierCommutationVoltageDrop.division.y) else 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_25(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,25};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_boolean tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_boolean tmp7;
  modelica_boolean tmp8;
  modelica_boolean tmp9;
  modelica_real tmp10;
  modelica_boolean tmp11;
  modelica_real tmp12;
  modelica_boolean tmp13;
  modelica_real tmp14;
  tmp0 = LessEq(data->localData[0]->realVars[80] /* eXAC2.rectifierCommutationVoltageDrop.division.y variable */,0.0);
  tmp13 = (modelica_boolean)tmp0;
  if(tmp13)
  {
    tmp14 = 1.0;
  }
  else
  {
    tmp1 = Greater(data->localData[0]->realVars[80] /* eXAC2.rectifierCommutationVoltageDrop.division.y variable */,0.0);
    tmp2 = LessEq(data->localData[0]->realVars[80] /* eXAC2.rectifierCommutationVoltageDrop.division.y variable */,0.433);
    tmp11 = (modelica_boolean)(tmp1 && tmp2);
    if(tmp11)
    {
      tmp12 = 1.0 + (-0.577) * (data->localData[0]->realVars[80] /* eXAC2.rectifierCommutationVoltageDrop.division.y variable */);
    }
    else
    {
      tmp3 = Greater(data->localData[0]->realVars[80] /* eXAC2.rectifierCommutationVoltageDrop.division.y variable */,0.433);
      tmp4 = Less(data->localData[0]->realVars[80] /* eXAC2.rectifierCommutationVoltageDrop.division.y variable */,0.75);
      tmp9 = (modelica_boolean)(tmp3 && tmp4);
      if(tmp9)
      {
        tmp5 = data->localData[0]->realVars[80] /* eXAC2.rectifierCommutationVoltageDrop.division.y variable */;
        tmp6 = 0.75 - ((tmp5 * tmp5));
        if(!(tmp6 >= 0.0))
        {
          FILE_INFO info = {"",0,0,0,0,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of sqrt(0.75 - eXAC2.rectifierCommutationVoltageDrop.division.y ^ 2.0) was %g should be >= 0", tmp6);
        }
        tmp10 = sqrt(tmp6);
      }
      else
      {
        tmp7 = GreaterEq(data->localData[0]->realVars[80] /* eXAC2.rectifierCommutationVoltageDrop.division.y variable */,0.75);
        tmp8 = LessEq(data->localData[0]->realVars[80] /* eXAC2.rectifierCommutationVoltageDrop.division.y variable */,1.0);
        tmp10 = ((tmp7 && tmp8)?(1.732) * (1.0 - data->localData[0]->realVars[80] /* eXAC2.rectifierCommutationVoltageDrop.division.y variable */):0.0);
      }
      tmp12 = tmp10;
    }
    tmp14 = tmp12;
  }
  data->localData[0]->realVars[81] /* eXAC2.rectifierCommutationVoltageDrop.fEX.y variable */ = tmp14;
  TRACE_POP
}

void residualFunc27(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,27};
  int i;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[66] /* eXAC2.XADIFD variable */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_16(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_17(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_18(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_19(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_20(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_21(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_22(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_23(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_24(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_25(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[4] /* eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.y STATE(1) */) * (data->localData[0]->realVars[81] /* eXAC2.rectifierCommutationVoltageDrop.fEX.y variable */) - data->localData[0]->realVars[63] /* eXAC2.EFD variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS27(NONLINEAR_SYSTEM_DATA* inSysData)
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
void initializeStaticDataNLS27(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for eXAC2.XADIFD */
  sysData->nominal[i] = data->modelData->realVarsData[66].attribute /* eXAC2.XADIFD */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[66].attribute /* eXAC2.XADIFD */.min;
  sysData->max[i++]   = data->modelData->realVarsData[66].attribute /* eXAC2.XADIFD */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS27(sysData);
}

void getIterationVarsNLS27(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[66] /* eXAC2.XADIFD variable */;
}

/* Prototypes for the strict sets (Dynamic Tearing) */

/* Global constraints for the casual sets */
/* function initialize non-linear systems */
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_initialNonLinearSystem(int nNonLinearSystems, NONLINEAR_SYSTEM_DATA* nonLinearSystemData)
{
  
  nonLinearSystemData[4].equationIndex = 477;
  nonLinearSystemData[4].size = 22;
  nonLinearSystemData[4].homotopySupport = 0;
  nonLinearSystemData[4].mixedSystem = 1;
  nonLinearSystemData[4].residualFunc = residualFunc477;
  nonLinearSystemData[4].strictTearingFunctionCall = NULL;
  nonLinearSystemData[4].analyticalJacobianColumn = OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_functionJacNLSJac26_column;
  nonLinearSystemData[4].initialAnalyticalJacobian = OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_initialAnalyticJacobianNLSJac26;
  nonLinearSystemData[4].jacobianIndex = 0 /*jacInx*/;
  nonLinearSystemData[4].initializeStaticNLSData = initializeStaticDataNLS477;
  nonLinearSystemData[4].getIterationVars = getIterationVarsNLS477;
  nonLinearSystemData[4].checkConstraints = NULL;
  
  
  nonLinearSystemData[3].equationIndex = 289;
  nonLinearSystemData[3].size = 26;
  nonLinearSystemData[3].homotopySupport = 0;
  nonLinearSystemData[3].mixedSystem = 1;
  nonLinearSystemData[3].residualFunc = residualFunc289;
  nonLinearSystemData[3].strictTearingFunctionCall = NULL;
  nonLinearSystemData[3].analyticalJacobianColumn = NULL;
  nonLinearSystemData[3].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[3].jacobianIndex = -1;
  nonLinearSystemData[3].initializeStaticNLSData = initializeStaticDataNLS289;
  nonLinearSystemData[3].getIterationVars = getIterationVarsNLS289;
  nonLinearSystemData[3].checkConstraints = NULL;
  
  
  nonLinearSystemData[2].equationIndex = 211;
  nonLinearSystemData[2].size = 1;
  nonLinearSystemData[2].homotopySupport = 0;
  nonLinearSystemData[2].mixedSystem = 1;
  nonLinearSystemData[2].residualFunc = residualFunc211;
  nonLinearSystemData[2].strictTearingFunctionCall = NULL;
  nonLinearSystemData[2].analyticalJacobianColumn = NULL;
  nonLinearSystemData[2].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[2].jacobianIndex = -1;
  nonLinearSystemData[2].initializeStaticNLSData = initializeStaticDataNLS211;
  nonLinearSystemData[2].getIterationVars = getIterationVarsNLS211;
  nonLinearSystemData[2].checkConstraints = NULL;
  
  
  nonLinearSystemData[1].equationIndex = 105;
  nonLinearSystemData[1].size = 26;
  nonLinearSystemData[1].homotopySupport = 0;
  nonLinearSystemData[1].mixedSystem = 1;
  nonLinearSystemData[1].residualFunc = residualFunc105;
  nonLinearSystemData[1].strictTearingFunctionCall = NULL;
  nonLinearSystemData[1].analyticalJacobianColumn = NULL;
  nonLinearSystemData[1].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[1].jacobianIndex = -1;
  nonLinearSystemData[1].initializeStaticNLSData = initializeStaticDataNLS105;
  nonLinearSystemData[1].getIterationVars = getIterationVarsNLS105;
  nonLinearSystemData[1].checkConstraints = NULL;
  
  
  nonLinearSystemData[0].equationIndex = 27;
  nonLinearSystemData[0].size = 1;
  nonLinearSystemData[0].homotopySupport = 0;
  nonLinearSystemData[0].mixedSystem = 1;
  nonLinearSystemData[0].residualFunc = residualFunc27;
  nonLinearSystemData[0].strictTearingFunctionCall = NULL;
  nonLinearSystemData[0].analyticalJacobianColumn = NULL;
  nonLinearSystemData[0].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[0].jacobianIndex = -1;
  nonLinearSystemData[0].initializeStaticNLSData = initializeStaticDataNLS27;
  nonLinearSystemData[0].getIterationVars = getIterationVarsNLS27;
  nonLinearSystemData[0].checkConstraints = NULL;
}

#if defined(__cplusplus)
}
#endif

