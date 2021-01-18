/* Non Linear Systems */
#include "OpenIPSL.Examples.Controls.PSSE.ES.IEEET1_model.h"
#include "OpenIPSL.Examples.Controls.PSSE.ES.IEEET1_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* inner equations */

/*
equation index: 183
type: SIMPLE_ASSIGN
constantLoad.v = sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_183(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,183};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[123] /* pwLine1.vs.re variable */;
  tmp1 = data->localData[0]->realVars[122] /* pwLine1.vs.im variable */;
  data->localData[0]->realVars[53] /* constantLoad.v variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 184
type: SIMPLE_ASSIGN
constantLoad.kI = if constantLoad.v < 0.5 then constantLoad.a2 * constantLoad.b2 * constantLoad.v ^ (-1.0 + constantLoad.b2) * exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_184(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,184};
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
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[53] /* constantLoad.v variable */, 0.5, 8, Less);
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
equation index: 185
type: SIMPLE_ASSIGN
constantLoad.kP = if constantLoad.v < constantLoad.PQBRAK then constantLoad.a0 + constantLoad.a1 * cos(constantLoad.v * constantLoad.wp) + constantLoad.b1 * sin(constantLoad.v * constantLoad.wp) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_185(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,185};
  modelica_boolean tmp0;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[53] /* constantLoad.v variable */, data->simulationInfo->realParameter[35] /* constantLoad.PQBRAK PARAM */, 7, Less);
  data->localData[0]->realVars[50] /* constantLoad.kP variable */ = (tmp0?data->simulationInfo->realParameter[54] /* constantLoad.a0 PARAM */ + (data->simulationInfo->realParameter[55] /* constantLoad.a1 PARAM */) * (cos((data->localData[0]->realVars[53] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[75] /* constantLoad.wp PARAM */))) + (data->simulationInfo->realParameter[61] /* constantLoad.b1 PARAM */) * (sin((data->localData[0]->realVars[53] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[75] /* constantLoad.wp PARAM */))):1.0);
  TRACE_POP
}
/*
equation index: 186
type: SIMPLE_ASSIGN
constantLoad.Q = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.im + constantLoad.d_Q) else constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_186(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,186};
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
equation index: 187
type: SIMPLE_ASSIGN
constantLoad.P = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.re + constantLoad.d_P) else constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_187(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,187};
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
equation index: 188
type: SIMPLE_ASSIGN
gENROE.PSId = gENROE.PSIppd - gENROE.Xppd * gENROE.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_188(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,188};
  data->localData[0]->realVars[68] /* gENROE.PSId variable */ = data->localData[0]->realVars[70] /* gENROE.PSIppd variable */ - ((data->simulationInfo->realParameter[156] /* gENROE.Xppd PARAM */) * (data->localData[0]->realVars[79] /* gENROE.id variable */));
  TRACE_POP
}
/*
equation index: 189
type: SIMPLE_ASSIGN
pwLine.is.re = ($cse7 * gENROE.iq - (-$cse6) * gENROE.id) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_189(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,189};
  data->localData[0]->realVars[109] /* pwLine.is.re variable */ = ((data->localData[0]->realVars[29] /* $cse7 variable */) * (data->localData[0]->realVars[80] /* gENROE.iq variable */) - (((-data->localData[0]->realVars[28] /* $cse6 variable */)) * (data->localData[0]->realVars[79] /* gENROE.id variable */))) * (data->simulationInfo->realParameter[102] /* gENROE.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 190
type: SIMPLE_ASSIGN
pwLine.is.im = ($cse6 * gENROE.iq - $cse7 * gENROE.id) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_190(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,190};
  data->localData[0]->realVars[108] /* pwLine.is.im variable */ = ((data->localData[0]->realVars[28] /* $cse6 variable */) * (data->localData[0]->realVars[80] /* gENROE.iq variable */) - ((data->localData[0]->realVars[29] /* $cse7 variable */) * (data->localData[0]->realVars[79] /* gENROE.id variable */))) * (data->simulationInfo->realParameter[102] /* gENROE.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 191
type: SIMPLE_ASSIGN
gENROE.uq = gENROE.PSId - gENROE.R_a * gENROE.iq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_191(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,191};
  data->localData[0]->realVars[82] /* gENROE.uq variable */ = data->localData[0]->realVars[68] /* gENROE.PSId variable */ - ((data->simulationInfo->realParameter[139] /* gENROE.R_a PARAM */) * (data->localData[0]->realVars[80] /* gENROE.iq variable */));
  TRACE_POP
}
/*
equation index: 192
type: SIMPLE_ASSIGN
gENROE.PSIq = (-gENROE.PSIppq) - gENROE.Xppq * gENROE.iq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_192(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,192};
  data->localData[0]->realVars[72] /* gENROE.PSIq variable */ = (-data->localData[0]->realVars[71] /* gENROE.PSIppq variable */) - ((data->simulationInfo->realParameter[157] /* gENROE.Xppq PARAM */) * (data->localData[0]->realVars[80] /* gENROE.iq variable */));
  TRACE_POP
}
/*
equation index: 193
type: SIMPLE_ASSIGN
gENROE.ud = (-gENROE.PSIq) - gENROE.R_a * gENROE.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_193(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,193};
  data->localData[0]->realVars[81] /* gENROE.ud variable */ = (-data->localData[0]->realVars[72] /* gENROE.PSIq variable */) - ((data->simulationInfo->realParameter[139] /* gENROE.R_a PARAM */) * (data->localData[0]->realVars[79] /* gENROE.id variable */));
  TRACE_POP
}
/*
equation index: 194
type: SIMPLE_ASSIGN
pwLine.vs.re = $cse6 * gENROE.ud + $cse7 * gENROE.uq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_194(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,194};
  data->localData[0]->realVars[111] /* pwLine.vs.re variable */ = (data->localData[0]->realVars[28] /* $cse6 variable */) * (data->localData[0]->realVars[81] /* gENROE.ud variable */) + (data->localData[0]->realVars[29] /* $cse7 variable */) * (data->localData[0]->realVars[82] /* gENROE.uq variable */);
  TRACE_POP
}
/*
equation index: 195
type: SIMPLE_ASSIGN
pwLine.vs.im = $cse6 * gENROE.uq - $cse7 * gENROE.ud
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_195(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,195};
  data->localData[0]->realVars[110] /* pwLine.vs.im variable */ = (data->localData[0]->realVars[28] /* $cse6 variable */) * (data->localData[0]->realVars[82] /* gENROE.uq variable */) - ((data->localData[0]->realVars[29] /* $cse7 variable */) * (data->localData[0]->realVars[81] /* gENROE.ud variable */));
  TRACE_POP
}
/*
equation index: 196
type: SIMPLE_ASSIGN
gENCLS.p.ii = ($cse2 * gENCLS.id - $cse1 * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_196(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,196};
  data->localData[0]->realVars[61] /* gENCLS.p.ii variable */ = ((data->localData[0]->realVars[25] /* $cse2 variable */) * (data->localData[0]->realVars[58] /* gENCLS.id variable */) - ((data->localData[0]->realVars[24] /* $cse1 variable */) * (data->localData[0]->realVars[59] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[76] /* gENCLS.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 197
type: SIMPLE_ASSIGN
gENCLS.p.ir = ((-$cse1) * gENCLS.id - $cse2 * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_197(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,197};
  data->localData[0]->realVars[62] /* gENCLS.p.ir variable */ = (((-data->localData[0]->realVars[24] /* $cse1 variable */)) * (data->localData[0]->realVars[58] /* gENCLS.id variable */) - ((data->localData[0]->realVars[25] /* $cse2 variable */) * (data->localData[0]->realVars[59] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[76] /* gENCLS.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 198
type: SIMPLE_ASSIGN
gENCLS.vq = gENCLS.eq + (-gENCLS.R_a) * gENCLS.iq - gENCLS.X_d * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_198(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,198};
  data->localData[0]->realVars[64] /* gENCLS.vq variable */ = data->localData[0]->realVars[1] /* gENCLS.eq STATE(1) */ + ((-data->simulationInfo->realParameter[82] /* gENCLS.R_a PARAM */)) * (data->localData[0]->realVars[59] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[85] /* gENCLS.X_d PARAM */) * (data->localData[0]->realVars[58] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 199
type: SIMPLE_ASSIGN
gENCLS.vd = gENCLS.X_d * gENCLS.iq - gENCLS.R_a * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_199(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,199};
  data->localData[0]->realVars[63] /* gENCLS.vd variable */ = (data->simulationInfo->realParameter[85] /* gENCLS.X_d PARAM */) * (data->localData[0]->realVars[59] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[82] /* gENCLS.R_a PARAM */) * (data->localData[0]->realVars[58] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 200
type: SIMPLE_ASSIGN
pwLine4.ir.re = (-pwLine1.ir.re) - gENCLS.p.ir
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_200(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,200};
  data->localData[0]->realVars[139] /* pwLine4.ir.re variable */ = (-data->localData[0]->realVars[117] /* pwLine1.ir.re variable */) - data->localData[0]->realVars[62] /* gENCLS.p.ir variable */;
  TRACE_POP
}
/*
equation index: 201
type: SIMPLE_ASSIGN
pwLine4.ir.im = (-pwLine1.ir.im) - gENCLS.p.ii
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_201(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,201};
  data->localData[0]->realVars[138] /* pwLine4.ir.im variable */ = (-data->localData[0]->realVars[116] /* pwLine1.ir.im variable */) - data->localData[0]->realVars[61] /* gENCLS.p.ii variable */;
  TRACE_POP
}
/*
equation index: 202
type: SIMPLE_ASSIGN
pwFault.p.ii = (-pwLine3.ir.im) - pwLine4.is.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_202(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,202};
  data->localData[0]->realVars[100] /* pwFault.p.ii variable */ = (-data->localData[0]->realVars[128] /* pwLine3.ir.im variable */) - data->localData[0]->realVars[140] /* pwLine4.is.im variable */;
  TRACE_POP
}
/*
equation index: 203
type: SIMPLE_ASSIGN
pwFault.p.ir = (-pwLine3.ir.re) - pwLine4.is.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_203(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,203};
  data->localData[0]->realVars[101] /* pwFault.p.ir variable */ = (-data->localData[0]->realVars[129] /* pwLine3.ir.re variable */) - data->localData[0]->realVars[141] /* pwLine4.is.re variable */;
  TRACE_POP
}
/*
equation index: 204
type: SIMPLE_ASSIGN
constantLoad.p.ii = (-pwLine.ir.im) - pwLine1.is.im - pwLine3.is.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_204(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,204};
  data->localData[0]->realVars[51] /* constantLoad.p.ii variable */ = (-data->localData[0]->realVars[106] /* pwLine.ir.im variable */) - data->localData[0]->realVars[118] /* pwLine1.is.im variable */ - data->localData[0]->realVars[130] /* pwLine3.is.im variable */;
  TRACE_POP
}
/*
equation index: 205
type: SIMPLE_ASSIGN
constantLoad.p.ir = (-pwLine.ir.re) - pwLine1.is.re - pwLine3.is.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_205(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,205};
  data->localData[0]->realVars[52] /* constantLoad.p.ir variable */ = (-data->localData[0]->realVars[107] /* pwLine.ir.re variable */) - data->localData[0]->realVars[119] /* pwLine1.is.re variable */ - data->localData[0]->realVars[131] /* pwLine3.is.re variable */;
  TRACE_POP
}

void residualFunc273(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,273};
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
  for (i=0; i<22; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<22; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[119] /* pwLine1.is.re variable */ = xloc[0];
  data->localData[0]->realVars[131] /* pwLine3.is.re variable */ = xloc[1];
  data->localData[0]->realVars[118] /* pwLine1.is.im variable */ = xloc[2];
  data->localData[0]->realVars[130] /* pwLine3.is.im variable */ = xloc[3];
  data->localData[0]->realVars[106] /* pwLine.ir.im variable */ = xloc[4];
  data->localData[0]->realVars[107] /* pwLine.ir.re variable */ = xloc[5];
  data->localData[0]->realVars[129] /* pwLine3.ir.re variable */ = xloc[6];
  data->localData[0]->realVars[141] /* pwLine4.is.re variable */ = xloc[7];
  data->localData[0]->realVars[140] /* pwLine4.is.im variable */ = xloc[8];
  data->localData[0]->realVars[128] /* pwLine3.ir.im variable */ = xloc[9];
  data->localData[0]->realVars[116] /* pwLine1.ir.im variable */ = xloc[10];
  data->localData[0]->realVars[117] /* pwLine1.ir.re variable */ = xloc[11];
  data->localData[0]->realVars[59] /* gENCLS.iq variable */ = xloc[12];
  data->localData[0]->realVars[58] /* gENCLS.id variable */ = xloc[13];
  data->localData[0]->realVars[120] /* pwLine1.vr.im variable */ = xloc[14];
  data->localData[0]->realVars[121] /* pwLine1.vr.re variable */ = xloc[15];
  data->localData[0]->realVars[80] /* gENROE.iq variable */ = xloc[16];
  data->localData[0]->realVars[79] /* gENROE.id variable */ = xloc[17];
  data->localData[0]->realVars[132] /* pwLine3.vr.im variable */ = xloc[18];
  data->localData[0]->realVars[133] /* pwLine3.vr.re variable */ = xloc[19];
  data->localData[0]->realVars[123] /* pwLine1.vs.re variable */ = xloc[20];
  data->localData[0]->realVars[122] /* pwLine1.vs.im variable */ = xloc[21];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_183(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_184(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_185(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_186(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_187(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_188(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_189(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_190(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_191(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_192(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_193(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_194(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_195(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_196(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_197(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_198(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_199(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_200(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_201(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_202(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_203(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_204(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_205(data, threadData);
  /* body */
  RELATIONHYSTERESIS(tmp0, data->localData[0]->timeValue, data->simulationInfo->realParameter[267] /* pwFault.t1 PARAM */, 11, Less);
  tmp9 = (modelica_boolean)tmp0;
  if(tmp9)
  {
    tmp10 = data->localData[0]->realVars[100] /* pwFault.p.ii variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp1, data->localData[0]->timeValue, data->simulationInfo->realParameter[268] /* pwFault.t2 PARAM */, 12, Less);
    tmp7 = (modelica_boolean)(tmp1 && data->simulationInfo->booleanParameter[66] /* pwFault.ground PARAM */);
    if(tmp7)
    {
      tmp8 = data->localData[0]->realVars[133] /* pwLine3.vr.re variable */ - 1e-10;
    }
    else
    {
      RELATIONHYSTERESIS(tmp2, data->localData[0]->timeValue, data->simulationInfo->realParameter[268] /* pwFault.t2 PARAM */, 12, Less);
      tmp5 = (modelica_boolean)tmp2;
      if(tmp5)
      {
        tmp3 = data->simulationInfo->realParameter[266] /* pwFault.X PARAM */;
        tmp4 = data->simulationInfo->realParameter[265] /* pwFault.R PARAM */;
        tmp6 = data->localData[0]->realVars[100] /* pwFault.p.ii variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[265] /* pwFault.R PARAM */) * (data->localData[0]->realVars[132] /* pwLine3.vr.im variable */) - ((data->simulationInfo->realParameter[266] /* pwFault.X PARAM */) * (data->localData[0]->realVars[133] /* pwLine3.vr.re variable */)),(tmp3 * tmp3) + (tmp4 * tmp4),"pwFault.X ^ 2.0 + pwFault.R ^ 2.0",equationIndexes));
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

  RELATIONHYSTERESIS(tmp11, data->localData[0]->timeValue, data->simulationInfo->realParameter[267] /* pwFault.t1 PARAM */, 11, Less);
  tmp20 = (modelica_boolean)tmp11;
  if(tmp20)
  {
    tmp21 = data->localData[0]->realVars[101] /* pwFault.p.ir variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp12, data->localData[0]->timeValue, data->simulationInfo->realParameter[268] /* pwFault.t2 PARAM */, 12, Less);
    tmp18 = (modelica_boolean)(tmp12 && data->simulationInfo->booleanParameter[66] /* pwFault.ground PARAM */);
    if(tmp18)
    {
      tmp19 = data->localData[0]->realVars[132] /* pwLine3.vr.im variable */;
    }
    else
    {
      RELATIONHYSTERESIS(tmp13, data->localData[0]->timeValue, data->simulationInfo->realParameter[268] /* pwFault.t2 PARAM */, 12, Less);
      tmp16 = (modelica_boolean)tmp13;
      if(tmp16)
      {
        tmp14 = data->simulationInfo->realParameter[265] /* pwFault.R PARAM */;
        tmp15 = data->simulationInfo->realParameter[266] /* pwFault.X PARAM */;
        tmp17 = data->localData[0]->realVars[101] /* pwFault.p.ir variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[265] /* pwFault.R PARAM */) * (data->localData[0]->realVars[133] /* pwLine3.vr.re variable */) + (data->simulationInfo->realParameter[266] /* pwFault.X PARAM */) * (data->localData[0]->realVars[132] /* pwLine3.vr.im variable */),(tmp14 * tmp14) + (tmp15 * tmp15),"pwFault.R ^ 2.0 + pwFault.X ^ 2.0",equationIndexes));
      }
      else
      {
        tmp17 = data->localData[0]->realVars[101] /* pwFault.p.ir variable */;
      }
      tmp19 = tmp17;
    }
    tmp21 = tmp19;
  }
  res[1] = tmp21;

  RELATIONHYSTERESIS(tmp22, data->localData[0]->timeValue, data->simulationInfo->realParameter[300] /* pwLine3.t1 PARAM */, 9, GreaterEq);
  RELATIONHYSTERESIS(tmp23, data->localData[0]->timeValue, data->simulationInfo->realParameter[301] /* pwLine3.t2 PARAM */, 10, Less);
  res[2] = ((tmp22 && tmp23)?data->localData[0]->realVars[129] /* pwLine3.ir.re variable */:data->localData[0]->realVars[133] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[123] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[299] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[129] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[132] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[296] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[133] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[297] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[298] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[128] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[133] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[296] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[132] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[297] /* pwLine3.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp24, data->localData[0]->timeValue, data->simulationInfo->realParameter[278] /* pwLine.t1 PARAM */, 1, GreaterEq);
  RELATIONHYSTERESIS(tmp25, data->localData[0]->timeValue, data->simulationInfo->realParameter[279] /* pwLine.t2 PARAM */, 2, Less);
  res[3] = ((tmp24 && tmp25)?data->localData[0]->realVars[106] /* pwLine.ir.im variable */:data->localData[0]->realVars[122] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[110] /* pwLine.vs.im variable */ - ((data->simulationInfo->realParameter[277] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[106] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[123] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[274] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[122] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[275] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[276] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[107] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[122] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[274] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[123] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[275] /* pwLine.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp26, data->localData[0]->timeValue, data->simulationInfo->realParameter[300] /* pwLine3.t1 PARAM */, 9, GreaterEq);
  RELATIONHYSTERESIS(tmp27, data->localData[0]->timeValue, data->simulationInfo->realParameter[301] /* pwLine3.t2 PARAM */, 10, Less);
  res[4] = ((tmp26 && tmp27)?data->localData[0]->realVars[131] /* pwLine3.is.re variable */:data->localData[0]->realVars[123] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[133] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[299] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[131] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[122] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[296] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[123] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[297] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[298] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[130] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[123] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[296] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[122] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[297] /* pwLine3.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp28, data->localData[0]->timeValue, data->simulationInfo->realParameter[300] /* pwLine3.t1 PARAM */, 9, GreaterEq);
  RELATIONHYSTERESIS(tmp29, data->localData[0]->timeValue, data->simulationInfo->realParameter[301] /* pwLine3.t2 PARAM */, 10, Less);
  res[5] = ((tmp28 && tmp29)?data->localData[0]->realVars[130] /* pwLine3.is.im variable */:data->localData[0]->realVars[122] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[132] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[299] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[130] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[123] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[296] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[122] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[297] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[298] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[131] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[122] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[296] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[123] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[297] /* pwLine3.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp30, data->localData[0]->timeValue, data->simulationInfo->realParameter[278] /* pwLine.t1 PARAM */, 1, GreaterEq);
  RELATIONHYSTERESIS(tmp31, data->localData[0]->timeValue, data->simulationInfo->realParameter[279] /* pwLine.t2 PARAM */, 2, Less);
  res[6] = ((tmp30 && tmp31)?data->localData[0]->realVars[108] /* pwLine.is.im variable */:data->localData[0]->realVars[110] /* pwLine.vs.im variable */ - data->localData[0]->realVars[122] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[277] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[108] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[111] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[274] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[110] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[275] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[276] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[109] /* pwLine.is.re variable */ + (data->localData[0]->realVars[110] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[274] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[111] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[275] /* pwLine.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp32, data->localData[0]->timeValue, data->simulationInfo->realParameter[278] /* pwLine.t1 PARAM */, 1, GreaterEq);
  RELATIONHYSTERESIS(tmp33, data->localData[0]->timeValue, data->simulationInfo->realParameter[279] /* pwLine.t2 PARAM */, 2, Less);
  res[7] = ((tmp32 && tmp33)?data->localData[0]->realVars[109] /* pwLine.is.re variable */:data->localData[0]->realVars[111] /* pwLine.vs.re variable */ - data->localData[0]->realVars[123] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[277] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[109] /* pwLine.is.re variable */ + (data->localData[0]->realVars[110] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[274] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[111] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[275] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[276] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[108] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[111] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[274] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[110] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[275] /* pwLine.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp34, data->localData[0]->timeValue, data->simulationInfo->realParameter[278] /* pwLine.t1 PARAM */, 1, GreaterEq);
  RELATIONHYSTERESIS(tmp35, data->localData[0]->timeValue, data->simulationInfo->realParameter[279] /* pwLine.t2 PARAM */, 2, Less);
  res[8] = ((tmp34 && tmp35)?data->localData[0]->realVars[107] /* pwLine.ir.re variable */:data->localData[0]->realVars[123] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[111] /* pwLine.vs.re variable */ - ((data->simulationInfo->realParameter[277] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[107] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[122] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[274] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[123] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[275] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[276] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[106] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[123] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[274] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[122] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[275] /* pwLine.Y.re PARAM */))))));

  res[9] = (data->localData[0]->realVars[122] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[52] /* constantLoad.p.ir variable */) + ((-data->localData[0]->realVars[123] /* pwLine1.vs.re variable */)) * (data->localData[0]->realVars[51] /* constantLoad.p.ii variable */) - data->localData[0]->realVars[47] /* constantLoad.Q variable */;

  res[10] = (data->localData[0]->realVars[122] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[51] /* constantLoad.p.ii variable */) + (data->localData[0]->realVars[123] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[52] /* constantLoad.p.ir variable */) - data->localData[0]->realVars[46] /* constantLoad.P variable */;

  RELATIONHYSTERESIS(tmp36, data->localData[0]->timeValue, data->simulationInfo->realParameter[289] /* pwLine1.t1 PARAM */, 3, GreaterEq);
  RELATIONHYSTERESIS(tmp37, data->localData[0]->timeValue, data->simulationInfo->realParameter[290] /* pwLine1.t2 PARAM */, 4, Less);
  res[11] = ((tmp36 && tmp37)?data->localData[0]->realVars[118] /* pwLine1.is.im variable */:data->localData[0]->realVars[122] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[120] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[288] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[118] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[123] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[285] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[122] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[286] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[287] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[119] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[122] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[285] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[123] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[286] /* pwLine1.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp38, data->localData[0]->timeValue, data->simulationInfo->realParameter[289] /* pwLine1.t1 PARAM */, 3, GreaterEq);
  RELATIONHYSTERESIS(tmp39, data->localData[0]->timeValue, data->simulationInfo->realParameter[290] /* pwLine1.t2 PARAM */, 4, Less);
  res[12] = ((tmp38 && tmp39)?data->localData[0]->realVars[119] /* pwLine1.is.re variable */:data->localData[0]->realVars[123] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[121] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[288] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[119] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[122] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[285] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[123] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[286] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[287] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[118] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[123] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[285] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[122] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[286] /* pwLine1.Y.re PARAM */))))));

  res[13] = (data->localData[0]->realVars[25] /* $cse2 variable */) * (data->localData[0]->realVars[64] /* gENCLS.vq variable */) + (data->localData[0]->realVars[24] /* $cse1 variable */) * (data->localData[0]->realVars[63] /* gENCLS.vd variable */) - data->localData[0]->realVars[121] /* pwLine1.vr.re variable */;

  RELATIONHYSTERESIS(tmp40, data->localData[0]->timeValue, data->simulationInfo->realParameter[311] /* pwLine4.t1 PARAM */, 13, GreaterEq);
  RELATIONHYSTERESIS(tmp41, data->localData[0]->timeValue, data->simulationInfo->realParameter[312] /* pwLine4.t2 PARAM */, 14, Less);
  res[14] = ((tmp40 && tmp41)?data->localData[0]->realVars[141] /* pwLine4.is.re variable */:data->localData[0]->realVars[133] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[121] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[310] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[141] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[132] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[307] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[133] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[308] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[309] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[140] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[133] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[307] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[132] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[308] /* pwLine4.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp42, data->localData[0]->timeValue, data->simulationInfo->realParameter[311] /* pwLine4.t1 PARAM */, 13, GreaterEq);
  RELATIONHYSTERESIS(tmp43, data->localData[0]->timeValue, data->simulationInfo->realParameter[312] /* pwLine4.t2 PARAM */, 14, Less);
  res[15] = ((tmp42 && tmp43)?data->localData[0]->realVars[140] /* pwLine4.is.im variable */:data->localData[0]->realVars[132] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[120] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[310] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[140] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[133] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[307] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[132] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[308] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[309] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[141] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[132] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[307] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[133] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[308] /* pwLine4.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp44, data->localData[0]->timeValue, data->simulationInfo->realParameter[311] /* pwLine4.t1 PARAM */, 13, GreaterEq);
  RELATIONHYSTERESIS(tmp45, data->localData[0]->timeValue, data->simulationInfo->realParameter[312] /* pwLine4.t2 PARAM */, 14, Less);
  res[16] = ((tmp44 && tmp45)?data->localData[0]->realVars[139] /* pwLine4.ir.re variable */:data->localData[0]->realVars[121] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[133] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[310] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[139] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[120] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[307] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[121] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[308] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[309] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[138] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[121] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[307] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[120] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[308] /* pwLine4.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp46, data->localData[0]->timeValue, data->simulationInfo->realParameter[300] /* pwLine3.t1 PARAM */, 9, GreaterEq);
  RELATIONHYSTERESIS(tmp47, data->localData[0]->timeValue, data->simulationInfo->realParameter[301] /* pwLine3.t2 PARAM */, 10, Less);
  res[17] = ((tmp46 && tmp47)?data->localData[0]->realVars[128] /* pwLine3.ir.im variable */:data->localData[0]->realVars[132] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[122] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[299] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[128] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[133] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[296] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[132] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[297] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[298] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[129] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[132] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[296] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[133] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[297] /* pwLine3.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp48, data->localData[0]->timeValue, data->simulationInfo->realParameter[311] /* pwLine4.t1 PARAM */, 13, GreaterEq);
  RELATIONHYSTERESIS(tmp49, data->localData[0]->timeValue, data->simulationInfo->realParameter[312] /* pwLine4.t2 PARAM */, 14, Less);
  res[18] = ((tmp48 && tmp49)?data->localData[0]->realVars[138] /* pwLine4.ir.im variable */:data->localData[0]->realVars[120] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[132] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[310] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[138] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[121] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[307] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[120] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[308] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[309] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[139] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[120] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[307] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[121] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[308] /* pwLine4.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp50, data->localData[0]->timeValue, data->simulationInfo->realParameter[289] /* pwLine1.t1 PARAM */, 3, GreaterEq);
  RELATIONHYSTERESIS(tmp51, data->localData[0]->timeValue, data->simulationInfo->realParameter[290] /* pwLine1.t2 PARAM */, 4, Less);
  res[19] = ((tmp50 && tmp51)?data->localData[0]->realVars[116] /* pwLine1.ir.im variable */:data->localData[0]->realVars[120] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[122] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[288] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[116] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[121] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[285] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[120] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[286] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[287] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[117] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[120] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[285] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[121] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[286] /* pwLine1.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp52, data->localData[0]->timeValue, data->simulationInfo->realParameter[289] /* pwLine1.t1 PARAM */, 3, GreaterEq);
  RELATIONHYSTERESIS(tmp53, data->localData[0]->timeValue, data->simulationInfo->realParameter[290] /* pwLine1.t2 PARAM */, 4, Less);
  res[20] = ((tmp52 && tmp53)?data->localData[0]->realVars[117] /* pwLine1.ir.re variable */:data->localData[0]->realVars[121] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[123] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[288] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[117] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[120] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[285] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[121] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[286] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[287] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[116] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[121] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[285] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[120] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[286] /* pwLine1.Y.re PARAM */))))));

  res[21] = (data->localData[0]->realVars[24] /* $cse1 variable */) * (data->localData[0]->realVars[64] /* gENCLS.vq variable */) + ((-data->localData[0]->realVars[25] /* $cse2 variable */)) * (data->localData[0]->realVars[63] /* gENCLS.vd variable */) - data->localData[0]->realVars[120] /* pwLine1.vr.im variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS273(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+22] = {0,4,4,4,4,4,4,3,3,3,3,4,4,4,4,7,7,4,4,8,8,11,11};
  const int rowIndex[112] = {9,10,11,12,4,5,9,10,9,10,11,12,4,5,9,10,3,8,9,10,3,8,9,10,1,2,17,1,14,15,0,14,15,0,2,17,16,18,19,20,16,18,19,20,13,16,18,21,13,16,18,21,11,15,16,18,19,20,21,12,13,14,16,18,19,20,3,6,7,8,3,6,7,8,0,1,2,5,14,15,17,18,0,1,2,4,14,15,16,17,2,3,4,5,7,8,9,10,11,12,20,3,4,5,6,8,9,10,11,12,17,19};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  inSysData->sparsePattern->leadindex = (unsigned int*) malloc((22+1)*sizeof(int));
  inSysData->sparsePattern->index = (unsigned int*) malloc(112*sizeof(int));
  inSysData->sparsePattern->numberOfNoneZeros = 112;
  inSysData->sparsePattern->colorCols = (unsigned int*) malloc(22*sizeof(int));
  inSysData->sparsePattern->maxColors = 10;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (22+1)*sizeof(int));
  
  for(i=2;i<22+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 112*sizeof(int));
  
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
  inSysData->sparsePattern->colorCols[1] = 9;
  inSysData->sparsePattern->colorCols[7] = 9;
  inSysData->sparsePattern->colorCols[9] = 9;
  inSysData->sparsePattern->colorCols[11] = 9;
  inSysData->sparsePattern->colorCols[17] = 9;
  inSysData->sparsePattern->colorCols[0] = 10;
  inSysData->sparsePattern->colorCols[6] = 10;
  inSysData->sparsePattern->colorCols[8] = 10;
  inSysData->sparsePattern->colorCols[10] = 10;
  inSysData->sparsePattern->colorCols[16] = 10;
}
void initializeStaticDataNLS273(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for pwLine1.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[119].attribute /* pwLine1.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[119].attribute /* pwLine1.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[119].attribute /* pwLine1.is.re */.max;
  /* static nls data for pwLine3.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[131].attribute /* pwLine3.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[131].attribute /* pwLine3.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[131].attribute /* pwLine3.is.re */.max;
  /* static nls data for pwLine1.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[118].attribute /* pwLine1.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[118].attribute /* pwLine1.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[118].attribute /* pwLine1.is.im */.max;
  /* static nls data for pwLine3.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[130].attribute /* pwLine3.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[130].attribute /* pwLine3.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[130].attribute /* pwLine3.is.im */.max;
  /* static nls data for pwLine.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[106].attribute /* pwLine.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[106].attribute /* pwLine.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[106].attribute /* pwLine.ir.im */.max;
  /* static nls data for pwLine.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[107].attribute /* pwLine.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[107].attribute /* pwLine.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[107].attribute /* pwLine.ir.re */.max;
  /* static nls data for pwLine3.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[129].attribute /* pwLine3.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[129].attribute /* pwLine3.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[129].attribute /* pwLine3.ir.re */.max;
  /* static nls data for pwLine4.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[141].attribute /* pwLine4.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[141].attribute /* pwLine4.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[141].attribute /* pwLine4.is.re */.max;
  /* static nls data for pwLine4.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[140].attribute /* pwLine4.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[140].attribute /* pwLine4.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[140].attribute /* pwLine4.is.im */.max;
  /* static nls data for pwLine3.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[128].attribute /* pwLine3.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[128].attribute /* pwLine3.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[128].attribute /* pwLine3.ir.im */.max;
  /* static nls data for pwLine1.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[116].attribute /* pwLine1.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[116].attribute /* pwLine1.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[116].attribute /* pwLine1.ir.im */.max;
  /* static nls data for pwLine1.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[117].attribute /* pwLine1.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[117].attribute /* pwLine1.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[117].attribute /* pwLine1.ir.re */.max;
  /* static nls data for gENCLS.iq */
  sysData->nominal[i] = data->modelData->realVarsData[59].attribute /* gENCLS.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[59].attribute /* gENCLS.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[59].attribute /* gENCLS.iq */.max;
  /* static nls data for gENCLS.id */
  sysData->nominal[i] = data->modelData->realVarsData[58].attribute /* gENCLS.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[58].attribute /* gENCLS.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[58].attribute /* gENCLS.id */.max;
  /* static nls data for pwLine1.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[120].attribute /* pwLine1.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[120].attribute /* pwLine1.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[120].attribute /* pwLine1.vr.im */.max;
  /* static nls data for pwLine1.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[121].attribute /* pwLine1.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[121].attribute /* pwLine1.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[121].attribute /* pwLine1.vr.re */.max;
  /* static nls data for gENROE.iq */
  sysData->nominal[i] = data->modelData->realVarsData[80].attribute /* gENROE.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[80].attribute /* gENROE.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[80].attribute /* gENROE.iq */.max;
  /* static nls data for gENROE.id */
  sysData->nominal[i] = data->modelData->realVarsData[79].attribute /* gENROE.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[79].attribute /* gENROE.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[79].attribute /* gENROE.id */.max;
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
  /* static nls data for pwLine1.vs.im */
  sysData->nominal[i] = data->modelData->realVarsData[122].attribute /* pwLine1.vs.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[122].attribute /* pwLine1.vs.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[122].attribute /* pwLine1.vs.im */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS273(sysData);
}

void getIterationVarsNLS273(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[119] /* pwLine1.is.re variable */;
  array[1] = data->localData[0]->realVars[131] /* pwLine3.is.re variable */;
  array[2] = data->localData[0]->realVars[118] /* pwLine1.is.im variable */;
  array[3] = data->localData[0]->realVars[130] /* pwLine3.is.im variable */;
  array[4] = data->localData[0]->realVars[106] /* pwLine.ir.im variable */;
  array[5] = data->localData[0]->realVars[107] /* pwLine.ir.re variable */;
  array[6] = data->localData[0]->realVars[129] /* pwLine3.ir.re variable */;
  array[7] = data->localData[0]->realVars[141] /* pwLine4.is.re variable */;
  array[8] = data->localData[0]->realVars[140] /* pwLine4.is.im variable */;
  array[9] = data->localData[0]->realVars[128] /* pwLine3.ir.im variable */;
  array[10] = data->localData[0]->realVars[116] /* pwLine1.ir.im variable */;
  array[11] = data->localData[0]->realVars[117] /* pwLine1.ir.re variable */;
  array[12] = data->localData[0]->realVars[59] /* gENCLS.iq variable */;
  array[13] = data->localData[0]->realVars[58] /* gENCLS.id variable */;
  array[14] = data->localData[0]->realVars[120] /* pwLine1.vr.im variable */;
  array[15] = data->localData[0]->realVars[121] /* pwLine1.vr.re variable */;
  array[16] = data->localData[0]->realVars[80] /* gENROE.iq variable */;
  array[17] = data->localData[0]->realVars[79] /* gENROE.id variable */;
  array[18] = data->localData[0]->realVars[132] /* pwLine3.vr.im variable */;
  array[19] = data->localData[0]->realVars[133] /* pwLine3.vr.re variable */;
  array[20] = data->localData[0]->realVars[123] /* pwLine1.vs.re variable */;
  array[21] = data->localData[0]->realVars[122] /* pwLine1.vs.im variable */;
}


/* inner equations */

/*
equation index: 38
type: SIMPLE_ASSIGN
constantLoad.v = sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_38(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,38};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[123] /* pwLine1.vs.re variable */;
  tmp1 = data->localData[0]->realVars[122] /* pwLine1.vs.im variable */;
  data->localData[0]->realVars[53] /* constantLoad.v variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 39
type: SIMPLE_ASSIGN
constantLoad.kP = if constantLoad.v < constantLoad.PQBRAK then constantLoad.a0 + constantLoad.a1 * cos(constantLoad.v * constantLoad.wp) + constantLoad.b1 * sin(constantLoad.v * constantLoad.wp) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_39(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,39};
  modelica_boolean tmp0;
  tmp0 = Less(data->localData[0]->realVars[53] /* constantLoad.v variable */,data->simulationInfo->realParameter[35] /* constantLoad.PQBRAK PARAM */);
  data->localData[0]->realVars[50] /* constantLoad.kP variable */ = (tmp0?data->simulationInfo->realParameter[54] /* constantLoad.a0 PARAM */ + (data->simulationInfo->realParameter[55] /* constantLoad.a1 PARAM */) * (cos((data->localData[0]->realVars[53] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[75] /* constantLoad.wp PARAM */))) + (data->simulationInfo->realParameter[61] /* constantLoad.b1 PARAM */) * (sin((data->localData[0]->realVars[53] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[75] /* constantLoad.wp PARAM */))):1.0);
  TRACE_POP
}
/*
equation index: 40
type: SIMPLE_ASSIGN
constantLoad.kI = if constantLoad.v < 0.5 then constantLoad.a2 * constantLoad.b2 * constantLoad.v ^ (-1.0 + constantLoad.b2) * exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_40(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,40};
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
equation index: 41
type: SIMPLE_ASSIGN
constantLoad.Q = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.im + constantLoad.d_Q) else constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_41(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,41};
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
equation index: 42
type: SIMPLE_ASSIGN
constantLoad.P = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.re + constantLoad.d_P) else constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_42(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,42};
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
equation index: 43
type: SIMPLE_ASSIGN
pwLine.is.im = (sin(gENROE.delta) * gENROE.iq - cos(gENROE.delta) * gENROE.id) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_43(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,43};
  data->localData[0]->realVars[108] /* pwLine.is.im variable */ = ((sin(data->localData[0]->realVars[6] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[80] /* gENROE.iq variable */) - ((cos(data->localData[0]->realVars[6] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[79] /* gENROE.id variable */))) * (data->simulationInfo->realParameter[102] /* gENROE.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 44
type: SIMPLE_ASSIGN
pwLine.is.re = (cos(gENROE.delta) * gENROE.iq - (-sin(gENROE.delta)) * gENROE.id) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_44(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,44};
  data->localData[0]->realVars[109] /* pwLine.is.re variable */ = ((cos(data->localData[0]->realVars[6] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[80] /* gENROE.iq variable */) - (((-sin(data->localData[0]->realVars[6] /* gENROE.delta STATE(1) */))) * (data->localData[0]->realVars[79] /* gENROE.id variable */))) * (data->simulationInfo->realParameter[102] /* gENROE.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 45
type: SIMPLE_ASSIGN
gENROE.PSIq = (-gENROE.PSIppq) - gENROE.Xppq * gENROE.iq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_45(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,45};
  data->localData[0]->realVars[72] /* gENROE.PSIq variable */ = (-data->localData[0]->realVars[71] /* gENROE.PSIppq variable */) - ((data->simulationInfo->realParameter[157] /* gENROE.Xppq PARAM */) * (data->localData[0]->realVars[80] /* gENROE.iq variable */));
  TRACE_POP
}
/*
equation index: 46
type: SIMPLE_ASSIGN
gENROE.ud = (-gENROE.PSIq) - gENROE.R_a * gENROE.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_46(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,46};
  data->localData[0]->realVars[81] /* gENROE.ud variable */ = (-data->localData[0]->realVars[72] /* gENROE.PSIq variable */) - ((data->simulationInfo->realParameter[139] /* gENROE.R_a PARAM */) * (data->localData[0]->realVars[79] /* gENROE.id variable */));
  TRACE_POP
}
/*
equation index: 47
type: SIMPLE_ASSIGN
pwLine.vs.re = sin(gENROE.delta) * gENROE.ud + cos(gENROE.delta) * gENROE.uq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_47(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,47};
  data->localData[0]->realVars[111] /* pwLine.vs.re variable */ = (sin(data->localData[0]->realVars[6] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[81] /* gENROE.ud variable */) + (cos(data->localData[0]->realVars[6] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[82] /* gENROE.uq variable */);
  TRACE_POP
}
/*
equation index: 48
type: SIMPLE_ASSIGN
pwLine.vs.im = sin(gENROE.delta) * gENROE.uq - cos(gENROE.delta) * gENROE.ud
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_48(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,48};
  data->localData[0]->realVars[110] /* pwLine.vs.im variable */ = (sin(data->localData[0]->realVars[6] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[82] /* gENROE.uq variable */) - ((cos(data->localData[0]->realVars[6] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[81] /* gENROE.ud variable */));
  TRACE_POP
}
/*
equation index: 49
type: SIMPLE_ASSIGN
gENROE.PSId = gENROE.uq + gENROE.R_a * gENROE.iq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_49(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,49};
  data->localData[0]->realVars[68] /* gENROE.PSId variable */ = data->localData[0]->realVars[82] /* gENROE.uq variable */ + (data->simulationInfo->realParameter[139] /* gENROE.R_a PARAM */) * (data->localData[0]->realVars[80] /* gENROE.iq variable */);
  TRACE_POP
}
/*
equation index: 50
type: SIMPLE_ASSIGN
gENROE.PSIppd = gENROE.PSId + gENROE.Xppd * gENROE.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_50(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,50};
  data->localData[0]->realVars[70] /* gENROE.PSIppd variable */ = data->localData[0]->realVars[68] /* gENROE.PSId variable */ + (data->simulationInfo->realParameter[156] /* gENROE.Xppd PARAM */) * (data->localData[0]->realVars[79] /* gENROE.id variable */);
  TRACE_POP
}
/*
equation index: 51
type: SIMPLE_ASSIGN
gENROE.PSIpp = sqrt(gENROE.PSIppd ^ 2.0 + gENROE.PSIppq ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_51(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,51};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[70] /* gENROE.PSIppd variable */;
  tmp1 = data->localData[0]->realVars[71] /* gENROE.PSIppq variable */;
  data->localData[0]->realVars[69] /* gENROE.PSIpp variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 52
type: SIMPLE_ASSIGN
gENROE.Epd = (gENROE.XaqIlq - (((gENROE.Xpq - gENROE.Xl) * gENROE.iq - gENROE.PSIkq) * gENROE.K1q + gENROE.iq * (gENROE.Xpq - gENROE.Xq) + OpenIPSL.NonElectrical.Functions.SE_exp(gENROE.PSIpp, gENROE.S10, gENROE.S12, 1.0, 1.2) * gENROE.PSIppq * (gENROE.Xq - gENROE.Xl) / (gENROE.Xd - gENROE.Xl))) / (1.0 + gENROE.K1q)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_52(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,52};
  data->localData[0]->realVars[2] /* gENROE.Epd STATE(1) */ = DIVISION_SIM(data->localData[0]->realVars[76] /* gENROE.XaqIlq variable */ - (((data->simulationInfo->realParameter[158] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[153] /* gENROE.Xl PARAM */) * (data->localData[0]->realVars[80] /* gENROE.iq variable */) - data->localData[0]->realVars[5] /* gENROE.PSIkq STATE(1) */) * (data->simulationInfo->realParameter[117] /* gENROE.K1q PARAM */) + (data->localData[0]->realVars[80] /* gENROE.iq variable */) * (data->simulationInfo->realParameter[158] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[159] /* gENROE.Xq PARAM */) + (omc_OpenIPSL_NonElectrical_Functions_SE__exp(threadData, data->localData[0]->realVars[69] /* gENROE.PSIpp variable */, data->simulationInfo->realParameter[142] /* gENROE.S10 PARAM */, data->simulationInfo->realParameter[143] /* gENROE.S12 PARAM */, 1.0, 1.2)) * ((data->localData[0]->realVars[71] /* gENROE.PSIppq variable */) * (DIVISION_SIM(data->simulationInfo->realParameter[159] /* gENROE.Xq PARAM */ - data->simulationInfo->realParameter[153] /* gENROE.Xl PARAM */,data->simulationInfo->realParameter[152] /* gENROE.Xd PARAM */ - data->simulationInfo->realParameter[153] /* gENROE.Xl PARAM */,"gENROE.Xd - gENROE.Xl",equationIndexes)))),1.0 + data->simulationInfo->realParameter[117] /* gENROE.K1q PARAM */,"1.0 + gENROE.K1q",equationIndexes);
  TRACE_POP
}
/*
equation index: 53
type: SIMPLE_ASSIGN
gENROE.Epq = (gENROE.XADIFD - (((gENROE.Xl - gENROE.Xpd) * gENROE.id - gENROE.PSIkd) * gENROE.K1d + gENROE.id * (gENROE.Xd - gENROE.Xpd) + OpenIPSL.NonElectrical.Functions.SE_exp(gENROE.PSIpp, gENROE.S10, gENROE.S12, 1.0, 1.2) * gENROE.PSIppd)) / (1.0 + gENROE.K1d)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_53(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,53};
  data->localData[0]->realVars[3] /* gENROE.Epq STATE(1) */ = DIVISION_SIM(data->localData[0]->realVars[75] /* gENROE.XADIFD variable */ - (((data->simulationInfo->realParameter[153] /* gENROE.Xl PARAM */ - data->simulationInfo->realParameter[154] /* gENROE.Xpd PARAM */) * (data->localData[0]->realVars[79] /* gENROE.id variable */) - data->localData[0]->realVars[4] /* gENROE.PSIkd STATE(1) */) * (data->simulationInfo->realParameter[116] /* gENROE.K1d PARAM */) + (data->localData[0]->realVars[79] /* gENROE.id variable */) * (data->simulationInfo->realParameter[152] /* gENROE.Xd PARAM */ - data->simulationInfo->realParameter[154] /* gENROE.Xpd PARAM */) + (omc_OpenIPSL_NonElectrical_Functions_SE__exp(threadData, data->localData[0]->realVars[69] /* gENROE.PSIpp variable */, data->simulationInfo->realParameter[142] /* gENROE.S10 PARAM */, data->simulationInfo->realParameter[143] /* gENROE.S12 PARAM */, 1.0, 1.2)) * (data->localData[0]->realVars[70] /* gENROE.PSIppd variable */)),1.0 + data->simulationInfo->realParameter[116] /* gENROE.K1d PARAM */,"1.0 + gENROE.K1d",equationIndexes);
  TRACE_POP
}
/*
equation index: 54
type: SIMPLE_ASSIGN
gENCLS.p.ir = ((-sin(gENCLS.delta)) * gENCLS.id - cos(gENCLS.delta) * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_54(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,54};
  data->localData[0]->realVars[62] /* gENCLS.p.ir variable */ = (((-sin(data->localData[0]->realVars[0] /* gENCLS.delta STATE(1) */))) * (data->localData[0]->realVars[58] /* gENCLS.id variable */) - ((cos(data->localData[0]->realVars[0] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[59] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[76] /* gENCLS.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 55
type: SIMPLE_ASSIGN
gENCLS.p.ii = (cos(gENCLS.delta) * gENCLS.id - sin(gENCLS.delta) * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_55(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,55};
  data->localData[0]->realVars[61] /* gENCLS.p.ii variable */ = ((cos(data->localData[0]->realVars[0] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[58] /* gENCLS.id variable */) - ((sin(data->localData[0]->realVars[0] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[59] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[76] /* gENCLS.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 56
type: SIMPLE_ASSIGN
gENCLS.vd = gENCLS.X_d * gENCLS.iq - gENCLS.R_a * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_56(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,56};
  data->localData[0]->realVars[63] /* gENCLS.vd variable */ = (data->simulationInfo->realParameter[85] /* gENCLS.X_d PARAM */) * (data->localData[0]->realVars[59] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[82] /* gENCLS.R_a PARAM */) * (data->localData[0]->realVars[58] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 57
type: SIMPLE_ASSIGN
gENCLS.vq = gENCLS.eq + (-gENCLS.R_a) * gENCLS.iq - gENCLS.X_d * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_57(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,57};
  data->localData[0]->realVars[64] /* gENCLS.vq variable */ = data->localData[0]->realVars[1] /* gENCLS.eq STATE(1) */ + ((-data->simulationInfo->realParameter[82] /* gENCLS.R_a PARAM */)) * (data->localData[0]->realVars[59] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[85] /* gENCLS.X_d PARAM */) * (data->localData[0]->realVars[58] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 58
type: SIMPLE_ASSIGN
pwLine1.ir.re = (-pwLine4.ir.re) - gENCLS.p.ir
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_58(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,58};
  data->localData[0]->realVars[117] /* pwLine1.ir.re variable */ = (-data->localData[0]->realVars[139] /* pwLine4.ir.re variable */) - data->localData[0]->realVars[62] /* gENCLS.p.ir variable */;
  TRACE_POP
}
/*
equation index: 59
type: SIMPLE_ASSIGN
pwLine1.ir.im = (-pwLine4.ir.im) - gENCLS.p.ii
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_59(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,59};
  data->localData[0]->realVars[116] /* pwLine1.ir.im variable */ = (-data->localData[0]->realVars[138] /* pwLine4.ir.im variable */) - data->localData[0]->realVars[61] /* gENCLS.p.ii variable */;
  TRACE_POP
}
/*
equation index: 60
type: SIMPLE_ASSIGN
pwFault.p.ii = (-pwLine3.ir.im) - pwLine4.is.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_60(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,60};
  data->localData[0]->realVars[100] /* pwFault.p.ii variable */ = (-data->localData[0]->realVars[128] /* pwLine3.ir.im variable */) - data->localData[0]->realVars[140] /* pwLine4.is.im variable */;
  TRACE_POP
}
/*
equation index: 61
type: SIMPLE_ASSIGN
pwFault.p.ir = (-pwLine3.ir.re) - pwLine4.is.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_61(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,61};
  data->localData[0]->realVars[101] /* pwFault.p.ir variable */ = (-data->localData[0]->realVars[129] /* pwLine3.ir.re variable */) - data->localData[0]->realVars[141] /* pwLine4.is.re variable */;
  TRACE_POP
}
/*
equation index: 62
type: SIMPLE_ASSIGN
pwLine1.is.re = (-pwLine.ir.re) - pwLine3.is.re - constantLoad.p.ir
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_62(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,62};
  data->localData[0]->realVars[119] /* pwLine1.is.re variable */ = (-data->localData[0]->realVars[107] /* pwLine.ir.re variable */) - data->localData[0]->realVars[131] /* pwLine3.is.re variable */ - data->localData[0]->realVars[52] /* constantLoad.p.ir variable */;
  TRACE_POP
}
/*
equation index: 63
type: SIMPLE_ASSIGN
pwLine3.is.im = (-pwLine.ir.im) - pwLine1.is.im - constantLoad.p.ii
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_63(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,63};
  data->localData[0]->realVars[130] /* pwLine3.is.im variable */ = (-data->localData[0]->realVars[106] /* pwLine.ir.im variable */) - data->localData[0]->realVars[118] /* pwLine1.is.im variable */ - data->localData[0]->realVars[51] /* constantLoad.p.ii variable */;
  TRACE_POP
}

void residualFunc90(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,90};
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
  data->localData[0]->realVars[106] /* pwLine.ir.im variable */ = xloc[0];
  data->localData[0]->realVars[118] /* pwLine1.is.im variable */ = xloc[1];
  data->localData[0]->realVars[107] /* pwLine.ir.re variable */ = xloc[2];
  data->localData[0]->realVars[131] /* pwLine3.is.re variable */ = xloc[3];
  data->localData[0]->realVars[129] /* pwLine3.ir.re variable */ = xloc[4];
  data->localData[0]->realVars[141] /* pwLine4.is.re variable */ = xloc[5];
  data->localData[0]->realVars[128] /* pwLine3.ir.im variable */ = xloc[6];
  data->localData[0]->realVars[140] /* pwLine4.is.im variable */ = xloc[7];
  data->localData[0]->realVars[52] /* constantLoad.p.ir variable */ = xloc[8];
  data->localData[0]->realVars[51] /* constantLoad.p.ii variable */ = xloc[9];
  data->localData[0]->realVars[138] /* pwLine4.ir.im variable */ = xloc[10];
  data->localData[0]->realVars[139] /* pwLine4.ir.re variable */ = xloc[11];
  data->localData[0]->realVars[58] /* gENCLS.id variable */ = xloc[12];
  data->localData[0]->realVars[59] /* gENCLS.iq variable */ = xloc[13];
  data->localData[0]->realVars[4] /* gENROE.PSIkd STATE(1) */ = xloc[14];
  data->localData[0]->realVars[5] /* gENROE.PSIkq STATE(1) */ = xloc[15];
  data->localData[0]->realVars[82] /* gENROE.uq variable */ = xloc[16];
  data->localData[0]->realVars[71] /* gENROE.PSIppq variable */ = xloc[17];
  data->localData[0]->realVars[80] /* gENROE.iq variable */ = xloc[18];
  data->localData[0]->realVars[79] /* gENROE.id variable */ = xloc[19];
  data->localData[0]->realVars[120] /* pwLine1.vr.im variable */ = xloc[20];
  data->localData[0]->realVars[121] /* pwLine1.vr.re variable */ = xloc[21];
  data->localData[0]->realVars[122] /* pwLine1.vs.im variable */ = xloc[22];
  data->localData[0]->realVars[123] /* pwLine1.vs.re variable */ = xloc[23];
  data->localData[0]->realVars[133] /* pwLine3.vr.re variable */ = xloc[24];
  data->localData[0]->realVars[132] /* pwLine3.vr.im variable */ = xloc[25];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_38(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_39(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_40(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_41(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_42(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_43(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_44(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_45(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_46(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_47(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_48(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_49(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_50(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_51(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_52(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_53(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_54(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_55(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_56(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_57(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_58(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_59(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_60(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_61(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_62(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_63(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[122] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[52] /* constantLoad.p.ir variable */) + ((-data->localData[0]->realVars[123] /* pwLine1.vs.re variable */)) * (data->localData[0]->realVars[51] /* constantLoad.p.ii variable */) - data->localData[0]->realVars[47] /* constantLoad.Q variable */;

  res[1] = (data->localData[0]->realVars[122] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[51] /* constantLoad.p.ii variable */) + (data->localData[0]->realVars[123] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[52] /* constantLoad.p.ir variable */) - data->localData[0]->realVars[46] /* constantLoad.P variable */;

  tmp0 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[267] /* pwFault.t1 PARAM */);
  tmp9 = (modelica_boolean)tmp0;
  if(tmp9)
  {
    tmp10 = data->localData[0]->realVars[100] /* pwFault.p.ii variable */;
  }
  else
  {
    tmp1 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[268] /* pwFault.t2 PARAM */);
    tmp7 = (modelica_boolean)(tmp1 && data->simulationInfo->booleanParameter[66] /* pwFault.ground PARAM */);
    if(tmp7)
    {
      tmp8 = data->localData[0]->realVars[133] /* pwLine3.vr.re variable */ - 1e-10;
    }
    else
    {
      tmp2 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[268] /* pwFault.t2 PARAM */);
      tmp5 = (modelica_boolean)tmp2;
      if(tmp5)
      {
        tmp3 = data->simulationInfo->realParameter[266] /* pwFault.X PARAM */;
        tmp4 = data->simulationInfo->realParameter[265] /* pwFault.R PARAM */;
        tmp6 = data->localData[0]->realVars[100] /* pwFault.p.ii variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[265] /* pwFault.R PARAM */) * (data->localData[0]->realVars[132] /* pwLine3.vr.im variable */) - ((data->simulationInfo->realParameter[266] /* pwFault.X PARAM */) * (data->localData[0]->realVars[133] /* pwLine3.vr.re variable */)),(tmp3 * tmp3) + (tmp4 * tmp4),"pwFault.X ^ 2.0 + pwFault.R ^ 2.0",equationIndexes));
      }
      else
      {
        tmp6 = data->localData[0]->realVars[100] /* pwFault.p.ii variable */;
      }
      tmp8 = tmp6;
    }
    tmp10 = tmp8;
  }
  res[2] = tmp10;

  tmp11 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[267] /* pwFault.t1 PARAM */);
  tmp20 = (modelica_boolean)tmp11;
  if(tmp20)
  {
    tmp21 = data->localData[0]->realVars[101] /* pwFault.p.ir variable */;
  }
  else
  {
    tmp12 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[268] /* pwFault.t2 PARAM */);
    tmp18 = (modelica_boolean)(tmp12 && data->simulationInfo->booleanParameter[66] /* pwFault.ground PARAM */);
    if(tmp18)
    {
      tmp19 = data->localData[0]->realVars[132] /* pwLine3.vr.im variable */;
    }
    else
    {
      tmp13 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[268] /* pwFault.t2 PARAM */);
      tmp16 = (modelica_boolean)tmp13;
      if(tmp16)
      {
        tmp14 = data->simulationInfo->realParameter[265] /* pwFault.R PARAM */;
        tmp15 = data->simulationInfo->realParameter[266] /* pwFault.X PARAM */;
        tmp17 = data->localData[0]->realVars[101] /* pwFault.p.ir variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[265] /* pwFault.R PARAM */) * (data->localData[0]->realVars[133] /* pwLine3.vr.re variable */) + (data->simulationInfo->realParameter[266] /* pwFault.X PARAM */) * (data->localData[0]->realVars[132] /* pwLine3.vr.im variable */),(tmp14 * tmp14) + (tmp15 * tmp15),"pwFault.R ^ 2.0 + pwFault.X ^ 2.0",equationIndexes));
      }
      else
      {
        tmp17 = data->localData[0]->realVars[101] /* pwFault.p.ir variable */;
      }
      tmp19 = tmp17;
    }
    tmp21 = tmp19;
  }
  res[3] = tmp21;

  res[4] = (sin(data->localData[0]->realVars[0] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[64] /* gENCLS.vq variable */) + ((-cos(data->localData[0]->realVars[0] /* gENCLS.delta STATE(1) */))) * (data->localData[0]->realVars[63] /* gENCLS.vd variable */) - data->localData[0]->realVars[120] /* pwLine1.vr.im variable */;

  res[5] = (cos(data->localData[0]->realVars[0] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[64] /* gENCLS.vq variable */) + (sin(data->localData[0]->realVars[0] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[63] /* gENCLS.vd variable */) - data->localData[0]->realVars[121] /* pwLine1.vr.re variable */;

  tmp22 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[311] /* pwLine4.t1 PARAM */);
  tmp23 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[312] /* pwLine4.t2 PARAM */);
  res[6] = ((tmp22 && tmp23)?data->localData[0]->realVars[141] /* pwLine4.is.re variable */:data->localData[0]->realVars[133] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[121] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[310] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[141] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[132] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[307] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[133] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[308] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[309] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[140] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[133] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[307] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[132] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[308] /* pwLine4.Y.re PARAM */))))));

  tmp24 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[311] /* pwLine4.t1 PARAM */);
  tmp25 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[312] /* pwLine4.t2 PARAM */);
  res[7] = ((tmp24 && tmp25)?data->localData[0]->realVars[139] /* pwLine4.ir.re variable */:data->localData[0]->realVars[121] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[133] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[310] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[139] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[120] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[307] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[121] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[308] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[309] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[138] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[121] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[307] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[120] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[308] /* pwLine4.Y.re PARAM */))))));

  tmp26 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[311] /* pwLine4.t1 PARAM */);
  tmp27 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[312] /* pwLine4.t2 PARAM */);
  res[8] = ((tmp26 && tmp27)?data->localData[0]->realVars[138] /* pwLine4.ir.im variable */:data->localData[0]->realVars[120] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[132] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[310] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[138] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[121] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[307] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[120] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[308] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[309] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[139] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[120] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[307] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[121] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[308] /* pwLine4.Y.re PARAM */)))));

  tmp28 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[311] /* pwLine4.t1 PARAM */);
  tmp29 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[312] /* pwLine4.t2 PARAM */);
  res[9] = ((tmp28 && tmp29)?data->localData[0]->realVars[140] /* pwLine4.is.im variable */:data->localData[0]->realVars[132] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[120] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[310] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[140] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[133] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[307] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[132] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[308] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[309] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[141] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[132] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[307] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[133] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[308] /* pwLine4.Y.re PARAM */)))));

  tmp30 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[300] /* pwLine3.t1 PARAM */);
  tmp31 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[301] /* pwLine3.t2 PARAM */);
  res[10] = ((tmp30 && tmp31)?data->localData[0]->realVars[129] /* pwLine3.ir.re variable */:data->localData[0]->realVars[133] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[123] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[299] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[129] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[132] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[296] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[133] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[297] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[298] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[128] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[133] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[296] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[132] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[297] /* pwLine3.Y.re PARAM */))))));

  tmp32 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[300] /* pwLine3.t1 PARAM */);
  tmp33 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[301] /* pwLine3.t2 PARAM */);
  res[11] = ((tmp32 && tmp33)?data->localData[0]->realVars[128] /* pwLine3.ir.im variable */:data->localData[0]->realVars[132] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[122] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[299] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[128] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[133] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[296] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[132] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[297] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[298] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[129] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[132] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[296] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[133] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[297] /* pwLine3.Y.re PARAM */)))));

  tmp34 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[300] /* pwLine3.t1 PARAM */);
  tmp35 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[301] /* pwLine3.t2 PARAM */);
  res[12] = ((tmp34 && tmp35)?data->localData[0]->realVars[131] /* pwLine3.is.re variable */:data->localData[0]->realVars[123] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[133] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[299] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[131] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[122] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[296] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[123] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[297] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[298] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[130] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[123] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[296] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[122] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[297] /* pwLine3.Y.re PARAM */))))));

  tmp36 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[289] /* pwLine1.t1 PARAM */);
  tmp37 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[290] /* pwLine1.t2 PARAM */);
  res[13] = ((tmp36 && tmp37)?data->localData[0]->realVars[119] /* pwLine1.is.re variable */:data->localData[0]->realVars[123] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[121] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[288] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[119] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[122] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[285] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[123] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[286] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[287] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[118] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[123] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[285] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[122] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[286] /* pwLine1.Y.re PARAM */))))));

  tmp38 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[289] /* pwLine1.t1 PARAM */);
  tmp39 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[290] /* pwLine1.t2 PARAM */);
  res[14] = ((tmp38 && tmp39)?data->localData[0]->realVars[118] /* pwLine1.is.im variable */:data->localData[0]->realVars[122] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[120] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[288] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[118] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[123] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[285] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[122] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[286] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[287] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[119] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[122] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[285] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[123] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[286] /* pwLine1.Y.re PARAM */)))));

  tmp40 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[289] /* pwLine1.t1 PARAM */);
  tmp41 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[290] /* pwLine1.t2 PARAM */);
  res[15] = ((tmp40 && tmp41)?data->localData[0]->realVars[117] /* pwLine1.ir.re variable */:data->localData[0]->realVars[121] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[123] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[288] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[117] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[120] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[285] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[121] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[286] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[287] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[116] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[121] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[285] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[120] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[286] /* pwLine1.Y.re PARAM */))))));

  tmp42 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[289] /* pwLine1.t1 PARAM */);
  tmp43 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[290] /* pwLine1.t2 PARAM */);
  res[16] = ((tmp42 && tmp43)?data->localData[0]->realVars[116] /* pwLine1.ir.im variable */:data->localData[0]->realVars[120] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[122] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[288] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[116] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[121] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[285] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[120] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[286] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[287] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[117] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[120] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[285] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[121] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[286] /* pwLine1.Y.re PARAM */)))));

  res[17] = (data->localData[0]->realVars[4] /* gENROE.PSIkd STATE(1) */) * (data->simulationInfo->realParameter[122] /* gENROE.K4d PARAM */) + (data->localData[0]->realVars[3] /* gENROE.Epq STATE(1) */) * (data->simulationInfo->realParameter[120] /* gENROE.K3d PARAM */) - data->localData[0]->realVars[70] /* gENROE.PSIppd variable */;

  res[18] = data->localData[0]->realVars[3] /* gENROE.Epq STATE(1) */ + (data->simulationInfo->realParameter[153] /* gENROE.Xl PARAM */ - data->simulationInfo->realParameter[154] /* gENROE.Xpd PARAM */) * (data->localData[0]->realVars[79] /* gENROE.id variable */) + (-data->localData[0]->realVars[4] /* gENROE.PSIkd STATE(1) */) - ((data->localData[0]->realVars[16] /* der(gENROE.PSIkd) STATE_DER */) * (data->simulationInfo->realParameter[146] /* gENROE.Tppd0 PARAM */));

  tmp44 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[278] /* pwLine.t1 PARAM */);
  tmp45 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[279] /* pwLine.t2 PARAM */);
  res[19] = ((tmp44 && tmp45)?data->localData[0]->realVars[109] /* pwLine.is.re variable */:data->localData[0]->realVars[111] /* pwLine.vs.re variable */ - data->localData[0]->realVars[123] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[277] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[109] /* pwLine.is.re variable */ + (data->localData[0]->realVars[110] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[274] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[111] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[275] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[276] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[108] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[111] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[274] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[110] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[275] /* pwLine.Y.re PARAM */))))));

  tmp46 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[278] /* pwLine.t1 PARAM */);
  tmp47 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[279] /* pwLine.t2 PARAM */);
  res[20] = ((tmp46 && tmp47)?data->localData[0]->realVars[108] /* pwLine.is.im variable */:data->localData[0]->realVars[110] /* pwLine.vs.im variable */ - data->localData[0]->realVars[122] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[277] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[108] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[111] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[274] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[110] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[275] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[276] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[109] /* pwLine.is.re variable */ + (data->localData[0]->realVars[110] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[274] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[111] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[275] /* pwLine.Y.re PARAM */)))));

  tmp48 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[300] /* pwLine3.t1 PARAM */);
  tmp49 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[301] /* pwLine3.t2 PARAM */);
  res[21] = ((tmp48 && tmp49)?data->localData[0]->realVars[130] /* pwLine3.is.im variable */:data->localData[0]->realVars[122] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[132] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[299] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[130] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[123] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[296] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[122] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[297] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[298] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[131] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[122] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[296] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[123] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[297] /* pwLine3.Y.re PARAM */)))));

  tmp50 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[278] /* pwLine.t1 PARAM */);
  tmp51 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[279] /* pwLine.t2 PARAM */);
  res[22] = ((tmp50 && tmp51)?data->localData[0]->realVars[106] /* pwLine.ir.im variable */:data->localData[0]->realVars[122] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[110] /* pwLine.vs.im variable */ - ((data->simulationInfo->realParameter[277] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[106] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[123] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[274] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[122] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[275] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[276] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[107] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[122] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[274] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[123] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[275] /* pwLine.Y.re PARAM */)))));

  tmp52 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[278] /* pwLine.t1 PARAM */);
  tmp53 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[279] /* pwLine.t2 PARAM */);
  res[23] = ((tmp52 && tmp53)?data->localData[0]->realVars[107] /* pwLine.ir.re variable */:data->localData[0]->realVars[123] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[111] /* pwLine.vs.re variable */ - ((data->simulationInfo->realParameter[277] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[107] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[122] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[274] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[123] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[275] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[276] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[106] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[123] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[274] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[122] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[275] /* pwLine.Y.re PARAM */))))));

  res[24] = data->localData[0]->realVars[71] /* gENROE.PSIppq variable */ - ((data->localData[0]->realVars[2] /* gENROE.Epd STATE(1) */) * (data->simulationInfo->realParameter[121] /* gENROE.K3q PARAM */)) - ((data->localData[0]->realVars[5] /* gENROE.PSIkq STATE(1) */) * (data->simulationInfo->realParameter[123] /* gENROE.K4q PARAM */));

  res[25] = data->localData[0]->realVars[2] /* gENROE.Epd STATE(1) */ + (data->simulationInfo->realParameter[158] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[153] /* gENROE.Xl PARAM */) * (data->localData[0]->realVars[80] /* gENROE.iq variable */) + (-data->localData[0]->realVars[5] /* gENROE.PSIkq STATE(1) */) - ((data->localData[0]->realVars[17] /* der(gENROE.PSIkq) STATE_DER */) * (data->simulationInfo->realParameter[147] /* gENROE.Tppq0 PARAM */));
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS90(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+26] = {0,4,4,4,4,3,3,3,3,4,4,4,4,4,4,2,2,8,8,8,8,7,7,11,11,8,8};
  const int rowIndex[140] = {12,21,22,23,12,13,14,21,13,14,22,23,12,13,14,21,3,10,11,3,6,9,2,10,11,2,6,9,0,1,13,14,0,1,12,21,7,8,15,16,7,8,15,16,4,5,15,16,4,5,15,16,17,18,24,25,17,18,19,20,22,23,24,25,17,18,19,20,22,23,24,25,17,18,19,20,22,23,24,25,17,18,19,20,22,23,24,25,4,7,8,9,14,15,16,5,6,7,8,13,15,16,0,1,11,12,13,14,16,20,21,22,23,0,1,10,12,13,14,15,19,21,22,23,2,3,6,7,9,10,11,12,2,3,6,8,9,10,11,21};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  inSysData->sparsePattern->leadindex = (unsigned int*) malloc((26+1)*sizeof(int));
  inSysData->sparsePattern->index = (unsigned int*) malloc(140*sizeof(int));
  inSysData->sparsePattern->numberOfNoneZeros = 140;
  inSysData->sparsePattern->colorCols = (unsigned int*) malloc(26*sizeof(int));
  inSysData->sparsePattern->maxColors = 10;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (26+1)*sizeof(int));
  
  for(i=2;i<26+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 140*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern->colorCols[25] = 1;
  inSysData->sparsePattern->colorCols[24] = 2;
  inSysData->sparsePattern->colorCols[23] = 3;
  inSysData->sparsePattern->colorCols[22] = 4;
  inSysData->sparsePattern->colorCols[19] = 5;
  inSysData->sparsePattern->colorCols[21] = 5;
  inSysData->sparsePattern->colorCols[18] = 6;
  inSysData->sparsePattern->colorCols[20] = 6;
  inSysData->sparsePattern->colorCols[3] = 7;
  inSysData->sparsePattern->colorCols[13] = 7;
  inSysData->sparsePattern->colorCols[17] = 7;
  inSysData->sparsePattern->colorCols[2] = 8;
  inSysData->sparsePattern->colorCols[9] = 8;
  inSysData->sparsePattern->colorCols[12] = 8;
  inSysData->sparsePattern->colorCols[1] = 9;
  inSysData->sparsePattern->colorCols[5] = 9;
  inSysData->sparsePattern->colorCols[6] = 9;
  inSysData->sparsePattern->colorCols[11] = 9;
  inSysData->sparsePattern->colorCols[16] = 9;
  inSysData->sparsePattern->colorCols[0] = 10;
  inSysData->sparsePattern->colorCols[4] = 10;
  inSysData->sparsePattern->colorCols[7] = 10;
  inSysData->sparsePattern->colorCols[8] = 10;
  inSysData->sparsePattern->colorCols[10] = 10;
  inSysData->sparsePattern->colorCols[14] = 10;
  inSysData->sparsePattern->colorCols[15] = 10;
}
void initializeStaticDataNLS90(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for pwLine.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[106].attribute /* pwLine.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[106].attribute /* pwLine.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[106].attribute /* pwLine.ir.im */.max;
  /* static nls data for pwLine1.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[118].attribute /* pwLine1.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[118].attribute /* pwLine1.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[118].attribute /* pwLine1.is.im */.max;
  /* static nls data for pwLine.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[107].attribute /* pwLine.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[107].attribute /* pwLine.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[107].attribute /* pwLine.ir.re */.max;
  /* static nls data for pwLine3.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[131].attribute /* pwLine3.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[131].attribute /* pwLine3.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[131].attribute /* pwLine3.is.re */.max;
  /* static nls data for pwLine3.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[129].attribute /* pwLine3.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[129].attribute /* pwLine3.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[129].attribute /* pwLine3.ir.re */.max;
  /* static nls data for pwLine4.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[141].attribute /* pwLine4.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[141].attribute /* pwLine4.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[141].attribute /* pwLine4.is.re */.max;
  /* static nls data for pwLine3.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[128].attribute /* pwLine3.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[128].attribute /* pwLine3.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[128].attribute /* pwLine3.ir.im */.max;
  /* static nls data for pwLine4.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[140].attribute /* pwLine4.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[140].attribute /* pwLine4.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[140].attribute /* pwLine4.is.im */.max;
  /* static nls data for constantLoad.p.ir */
  sysData->nominal[i] = data->modelData->realVarsData[52].attribute /* constantLoad.p.ir */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[52].attribute /* constantLoad.p.ir */.min;
  sysData->max[i++]   = data->modelData->realVarsData[52].attribute /* constantLoad.p.ir */.max;
  /* static nls data for constantLoad.p.ii */
  sysData->nominal[i] = data->modelData->realVarsData[51].attribute /* constantLoad.p.ii */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[51].attribute /* constantLoad.p.ii */.min;
  sysData->max[i++]   = data->modelData->realVarsData[51].attribute /* constantLoad.p.ii */.max;
  /* static nls data for pwLine4.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[138].attribute /* pwLine4.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[138].attribute /* pwLine4.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[138].attribute /* pwLine4.ir.im */.max;
  /* static nls data for pwLine4.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[139].attribute /* pwLine4.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[139].attribute /* pwLine4.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[139].attribute /* pwLine4.ir.re */.max;
  /* static nls data for gENCLS.id */
  sysData->nominal[i] = data->modelData->realVarsData[58].attribute /* gENCLS.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[58].attribute /* gENCLS.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[58].attribute /* gENCLS.id */.max;
  /* static nls data for gENCLS.iq */
  sysData->nominal[i] = data->modelData->realVarsData[59].attribute /* gENCLS.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[59].attribute /* gENCLS.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[59].attribute /* gENCLS.iq */.max;
  /* static nls data for gENROE.PSIkd */
  sysData->nominal[i] = data->modelData->realVarsData[4].attribute /* gENROE.PSIkd */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[4].attribute /* gENROE.PSIkd */.min;
  sysData->max[i++]   = data->modelData->realVarsData[4].attribute /* gENROE.PSIkd */.max;
  /* static nls data for gENROE.PSIkq */
  sysData->nominal[i] = data->modelData->realVarsData[5].attribute /* gENROE.PSIkq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[5].attribute /* gENROE.PSIkq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[5].attribute /* gENROE.PSIkq */.max;
  /* static nls data for gENROE.uq */
  sysData->nominal[i] = data->modelData->realVarsData[82].attribute /* gENROE.uq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[82].attribute /* gENROE.uq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[82].attribute /* gENROE.uq */.max;
  /* static nls data for gENROE.PSIppq */
  sysData->nominal[i] = data->modelData->realVarsData[71].attribute /* gENROE.PSIppq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[71].attribute /* gENROE.PSIppq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[71].attribute /* gENROE.PSIppq */.max;
  /* static nls data for gENROE.iq */
  sysData->nominal[i] = data->modelData->realVarsData[80].attribute /* gENROE.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[80].attribute /* gENROE.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[80].attribute /* gENROE.iq */.max;
  /* static nls data for gENROE.id */
  sysData->nominal[i] = data->modelData->realVarsData[79].attribute /* gENROE.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[79].attribute /* gENROE.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[79].attribute /* gENROE.id */.max;
  /* static nls data for pwLine1.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[120].attribute /* pwLine1.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[120].attribute /* pwLine1.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[120].attribute /* pwLine1.vr.im */.max;
  /* static nls data for pwLine1.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[121].attribute /* pwLine1.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[121].attribute /* pwLine1.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[121].attribute /* pwLine1.vr.re */.max;
  /* static nls data for pwLine1.vs.im */
  sysData->nominal[i] = data->modelData->realVarsData[122].attribute /* pwLine1.vs.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[122].attribute /* pwLine1.vs.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[122].attribute /* pwLine1.vs.im */.max;
  /* static nls data for pwLine1.vs.re */
  sysData->nominal[i] = data->modelData->realVarsData[123].attribute /* pwLine1.vs.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[123].attribute /* pwLine1.vs.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[123].attribute /* pwLine1.vs.re */.max;
  /* static nls data for pwLine3.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[133].attribute /* pwLine3.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[133].attribute /* pwLine3.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[133].attribute /* pwLine3.vr.re */.max;
  /* static nls data for pwLine3.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[132].attribute /* pwLine3.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[132].attribute /* pwLine3.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[132].attribute /* pwLine3.vr.im */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS90(sysData);
}

void getIterationVarsNLS90(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[106] /* pwLine.ir.im variable */;
  array[1] = data->localData[0]->realVars[118] /* pwLine1.is.im variable */;
  array[2] = data->localData[0]->realVars[107] /* pwLine.ir.re variable */;
  array[3] = data->localData[0]->realVars[131] /* pwLine3.is.re variable */;
  array[4] = data->localData[0]->realVars[129] /* pwLine3.ir.re variable */;
  array[5] = data->localData[0]->realVars[141] /* pwLine4.is.re variable */;
  array[6] = data->localData[0]->realVars[128] /* pwLine3.ir.im variable */;
  array[7] = data->localData[0]->realVars[140] /* pwLine4.is.im variable */;
  array[8] = data->localData[0]->realVars[52] /* constantLoad.p.ir variable */;
  array[9] = data->localData[0]->realVars[51] /* constantLoad.p.ii variable */;
  array[10] = data->localData[0]->realVars[138] /* pwLine4.ir.im variable */;
  array[11] = data->localData[0]->realVars[139] /* pwLine4.ir.re variable */;
  array[12] = data->localData[0]->realVars[58] /* gENCLS.id variable */;
  array[13] = data->localData[0]->realVars[59] /* gENCLS.iq variable */;
  array[14] = data->localData[0]->realVars[4] /* gENROE.PSIkd STATE(1) */;
  array[15] = data->localData[0]->realVars[5] /* gENROE.PSIkq STATE(1) */;
  array[16] = data->localData[0]->realVars[82] /* gENROE.uq variable */;
  array[17] = data->localData[0]->realVars[71] /* gENROE.PSIppq variable */;
  array[18] = data->localData[0]->realVars[80] /* gENROE.iq variable */;
  array[19] = data->localData[0]->realVars[79] /* gENROE.id variable */;
  array[20] = data->localData[0]->realVars[120] /* pwLine1.vr.im variable */;
  array[21] = data->localData[0]->realVars[121] /* pwLine1.vr.re variable */;
  array[22] = data->localData[0]->realVars[122] /* pwLine1.vs.im variable */;
  array[23] = data->localData[0]->realVars[123] /* pwLine1.vs.re variable */;
  array[24] = data->localData[0]->realVars[133] /* pwLine3.vr.re variable */;
  array[25] = data->localData[0]->realVars[132] /* pwLine3.vr.im variable */;
}

/* Prototypes for the strict sets (Dynamic Tearing) */

/* Global constraints for the casual sets */
/* function initialize non-linear systems */
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_initialNonLinearSystem(int nNonLinearSystems, NONLINEAR_SYSTEM_DATA* nonLinearSystemData)
{
  
  nonLinearSystemData[1].equationIndex = 273;
  nonLinearSystemData[1].size = 22;
  nonLinearSystemData[1].homotopySupport = 0;
  nonLinearSystemData[1].mixedSystem = 1;
  nonLinearSystemData[1].residualFunc = residualFunc273;
  nonLinearSystemData[1].strictTearingFunctionCall = NULL;
  nonLinearSystemData[1].analyticalJacobianColumn = OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_functionJacNLSJac33_column;
  nonLinearSystemData[1].initialAnalyticalJacobian = OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_initialAnalyticJacobianNLSJac33;
  nonLinearSystemData[1].jacobianIndex = 0 /*jacInx*/;
  nonLinearSystemData[1].initializeStaticNLSData = initializeStaticDataNLS273;
  nonLinearSystemData[1].getIterationVars = getIterationVarsNLS273;
  nonLinearSystemData[1].checkConstraints = NULL;
  
  
  nonLinearSystemData[0].equationIndex = 90;
  nonLinearSystemData[0].size = 26;
  nonLinearSystemData[0].homotopySupport = 0;
  nonLinearSystemData[0].mixedSystem = 1;
  nonLinearSystemData[0].residualFunc = residualFunc90;
  nonLinearSystemData[0].strictTearingFunctionCall = NULL;
  nonLinearSystemData[0].analyticalJacobianColumn = NULL;
  nonLinearSystemData[0].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[0].jacobianIndex = -1;
  nonLinearSystemData[0].initializeStaticNLSData = initializeStaticDataNLS90;
  nonLinearSystemData[0].getIterationVars = getIterationVarsNLS90;
  nonLinearSystemData[0].checkConstraints = NULL;
}

#if defined(__cplusplus)
}
#endif

