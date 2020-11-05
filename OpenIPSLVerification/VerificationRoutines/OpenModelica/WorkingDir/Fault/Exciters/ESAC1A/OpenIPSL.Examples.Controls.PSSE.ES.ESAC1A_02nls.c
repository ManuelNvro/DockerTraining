/* Non Linear Systems */
#include "OpenIPSL.Examples.Controls.PSSE.ES.ESAC1A_model.h"
#include "OpenIPSL.Examples.Controls.PSSE.ES.ESAC1A_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* inner equations */

/*
equation index: 513
type: SIMPLE_ASSIGN
constantLoad.v = sqrt(pwLine3.vs.re ^ 2.0 + pwLine3.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_513(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,513};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[136] /* pwLine3.vs.re variable */;
  tmp1 = data->localData[0]->realVars[135] /* pwLine3.vs.im variable */;
  data->localData[0]->realVars[55] /* constantLoad.v variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 514
type: SIMPLE_ASSIGN
constantLoad.kP = if constantLoad.v < constantLoad.PQBRAK then constantLoad.a0 + constantLoad.a1 * cos(constantLoad.v * constantLoad.wp) + constantLoad.b1 * sin(constantLoad.v * constantLoad.wp) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_514(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,514};
  modelica_boolean tmp0;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[55] /* constantLoad.v variable */, data->simulationInfo->realParameter[41] /* constantLoad.PQBRAK PARAM */, 2, Less);
  data->localData[0]->realVars[52] /* constantLoad.kP variable */ = (tmp0?data->simulationInfo->realParameter[60] /* constantLoad.a0 PARAM */ + (data->simulationInfo->realParameter[61] /* constantLoad.a1 PARAM */) * (cos((data->localData[0]->realVars[55] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[81] /* constantLoad.wp PARAM */))) + (data->simulationInfo->realParameter[67] /* constantLoad.b1 PARAM */) * (sin((data->localData[0]->realVars[55] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[81] /* constantLoad.wp PARAM */))):1.0);
  TRACE_POP
}
/*
equation index: 515
type: SIMPLE_ASSIGN
constantLoad.kI = if constantLoad.v < 0.5 then constantLoad.a2 * constantLoad.b2 * constantLoad.v ^ (-1.0 + constantLoad.b2) * exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_515(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,515};
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
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[55] /* constantLoad.v variable */, 0.5, 3, Less);
  tmp15 = (modelica_boolean)tmp0;
  if(tmp15)
  {
    tmp1 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp2 = -1.0 + data->simulationInfo->realParameter[68] /* constantLoad.b2 PARAM */;
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
    tmp9 = data->simulationInfo->realParameter[68] /* constantLoad.b2 PARAM */;
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
    tmp16 = (data->simulationInfo->realParameter[62] /* constantLoad.a2 PARAM */) * ((data->simulationInfo->realParameter[68] /* constantLoad.b2 PARAM */) * ((tmp3) * (exp(((-data->simulationInfo->realParameter[62] /* constantLoad.a2 PARAM */)) * (tmp10)))));
  }
  else
  {
    tmp16 = 1.0;
  }
  data->localData[0]->realVars[51] /* constantLoad.kI variable */ = tmp16;
  TRACE_POP
}
/*
equation index: 516
type: SIMPLE_ASSIGN
constantLoad.Q = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.im + constantLoad.d_Q) else constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_516(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,516};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->timeValue, data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp1, data->localData[0]->timeValue, data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[71] /* constantLoad.d_t PARAM */, 1, LessEq);
  tmp4 = (modelica_boolean)(tmp0 && tmp1);
  if(tmp4)
  {
    tmp2 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[44] /* constantLoad.S_I.im PARAM */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[48] /* constantLoad.S_Y.im PARAM */) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[46] /* constantLoad.S_P.im PARAM */ + data->simulationInfo->realParameter[70] /* constantLoad.d_Q PARAM */);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[44] /* constantLoad.S_I.im PARAM */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[48] /* constantLoad.S_Y.im PARAM */) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[46] /* constantLoad.S_P.im PARAM */);
  }
  data->localData[0]->realVars[49] /* constantLoad.Q variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 517
type: SIMPLE_ASSIGN
constantLoad.P = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.re + constantLoad.d_P) else constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_517(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,517};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->timeValue, data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp1, data->localData[0]->timeValue, data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[71] /* constantLoad.d_t PARAM */, 1, LessEq);
  tmp4 = (modelica_boolean)(tmp0 && tmp1);
  if(tmp4)
  {
    tmp2 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[45] /* constantLoad.S_I.re PARAM */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[49] /* constantLoad.S_Y.re PARAM */) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[47] /* constantLoad.S_P.re PARAM */ + data->simulationInfo->realParameter[69] /* constantLoad.d_P PARAM */);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[45] /* constantLoad.S_I.re PARAM */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[49] /* constantLoad.S_Y.re PARAM */) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[47] /* constantLoad.S_P.re PARAM */);
  }
  data->localData[0]->realVars[48] /* constantLoad.P variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 518
type: SIMPLE_ASSIGN
gENROE.PSId = gENROE.PSIppd - gENROE.Xppd * gENROE.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_518(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,518};
  data->localData[0]->realVars[93] /* gENROE.PSId variable */ = data->localData[0]->realVars[95] /* gENROE.PSIppd variable */ - ((data->simulationInfo->realParameter[260] /* gENROE.Xppd PARAM */) * (data->localData[0]->realVars[103] /* gENROE.id variable */));
  TRACE_POP
}
/*
equation index: 519
type: SIMPLE_ASSIGN
pwLine.is.re = gENROE.CoB * ($cse6 * gENROE.id + $cse7 * gENROE.iq)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_519(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,519};
  data->localData[0]->realVars[116] /* pwLine.is.re variable */ = (data->simulationInfo->realParameter[206] /* gENROE.CoB PARAM */) * ((data->localData[0]->realVars[30] /* $cse6 variable */) * (data->localData[0]->realVars[103] /* gENROE.id variable */) + (data->localData[0]->realVars[31] /* $cse7 variable */) * (data->localData[0]->realVars[104] /* gENROE.iq variable */));
  TRACE_POP
}
/*
equation index: 520
type: SIMPLE_ASSIGN
pwLine.is.im = (-gENROE.CoB) * ($cse7 * gENROE.id - $cse6 * gENROE.iq)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_520(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,520};
  data->localData[0]->realVars[115] /* pwLine.is.im variable */ = ((-data->simulationInfo->realParameter[206] /* gENROE.CoB PARAM */)) * ((data->localData[0]->realVars[31] /* $cse7 variable */) * (data->localData[0]->realVars[103] /* gENROE.id variable */) - ((data->localData[0]->realVars[30] /* $cse6 variable */) * (data->localData[0]->realVars[104] /* gENROE.iq variable */)));
  TRACE_POP
}
/*
equation index: 521
type: SIMPLE_ASSIGN
gENROE.uq = gENROE.PSId - gENROE.R_a * gENROE.iq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_521(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,521};
  data->localData[0]->realVars[106] /* gENROE.uq variable */ = data->localData[0]->realVars[93] /* gENROE.PSId variable */ - ((data->simulationInfo->realParameter[243] /* gENROE.R_a PARAM */) * (data->localData[0]->realVars[104] /* gENROE.iq variable */));
  TRACE_POP
}
/*
equation index: 522
type: SIMPLE_ASSIGN
gENROE.PSIq = (-gENROE.PSIppq) - gENROE.Xppq * gENROE.iq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_522(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,522};
  data->localData[0]->realVars[97] /* gENROE.PSIq variable */ = (-data->localData[0]->realVars[96] /* gENROE.PSIppq variable */) - ((data->simulationInfo->realParameter[261] /* gENROE.Xppq PARAM */) * (data->localData[0]->realVars[104] /* gENROE.iq variable */));
  TRACE_POP
}
/*
equation index: 523
type: SIMPLE_ASSIGN
gENROE.ud = (-gENROE.PSIq) - gENROE.R_a * gENROE.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_523(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,523};
  data->localData[0]->realVars[105] /* gENROE.ud variable */ = (-data->localData[0]->realVars[97] /* gENROE.PSIq variable */) - ((data->simulationInfo->realParameter[243] /* gENROE.R_a PARAM */) * (data->localData[0]->realVars[103] /* gENROE.id variable */));
  TRACE_POP
}
/*
equation index: 524
type: SIMPLE_ASSIGN
pwLine.vs.im = $cse6 * gENROE.uq - $cse7 * gENROE.ud
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_524(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,524};
  data->localData[0]->realVars[117] /* pwLine.vs.im variable */ = (data->localData[0]->realVars[30] /* $cse6 variable */) * (data->localData[0]->realVars[106] /* gENROE.uq variable */) - ((data->localData[0]->realVars[31] /* $cse7 variable */) * (data->localData[0]->realVars[105] /* gENROE.ud variable */));
  TRACE_POP
}
/*
equation index: 525
type: SIMPLE_ASSIGN
pwLine.vs.re = $cse6 * gENROE.ud + $cse7 * gENROE.uq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_525(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,525};
  data->localData[0]->realVars[118] /* pwLine.vs.re variable */ = (data->localData[0]->realVars[30] /* $cse6 variable */) * (data->localData[0]->realVars[105] /* gENROE.ud variable */) + (data->localData[0]->realVars[31] /* $cse7 variable */) * (data->localData[0]->realVars[106] /* gENROE.uq variable */);
  TRACE_POP
}
/*
equation index: 526
type: SIMPLE_ASSIGN
gENCLS.p.ir = (-gENCLS.CoB) * ($cse1 * gENCLS.id + $cse2 * gENCLS.iq)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_526(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,526};
  data->localData[0]->realVars[87] /* gENCLS.p.ir variable */ = ((-data->simulationInfo->realParameter[180] /* gENCLS.CoB PARAM */)) * ((data->localData[0]->realVars[26] /* $cse1 variable */) * (data->localData[0]->realVars[83] /* gENCLS.id variable */) + (data->localData[0]->realVars[27] /* $cse2 variable */) * (data->localData[0]->realVars[84] /* gENCLS.iq variable */));
  TRACE_POP
}
/*
equation index: 527
type: SIMPLE_ASSIGN
gENCLS.p.ii = gENCLS.CoB * ($cse2 * gENCLS.id - $cse1 * gENCLS.iq)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_527(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,527};
  data->localData[0]->realVars[86] /* gENCLS.p.ii variable */ = (data->simulationInfo->realParameter[180] /* gENCLS.CoB PARAM */) * ((data->localData[0]->realVars[27] /* $cse2 variable */) * (data->localData[0]->realVars[83] /* gENCLS.id variable */) - ((data->localData[0]->realVars[26] /* $cse1 variable */) * (data->localData[0]->realVars[84] /* gENCLS.iq variable */)));
  TRACE_POP
}
/*
equation index: 528
type: SIMPLE_ASSIGN
gENCLS.vq = gENCLS.eq + (-gENCLS.R_a) * gENCLS.iq - gENCLS.X_d * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_528(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,528};
  data->localData[0]->realVars[89] /* gENCLS.vq variable */ = data->localData[0]->realVars[6] /* gENCLS.eq STATE(1) */ + ((-data->simulationInfo->realParameter[186] /* gENCLS.R_a PARAM */)) * (data->localData[0]->realVars[84] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[189] /* gENCLS.X_d PARAM */) * (data->localData[0]->realVars[83] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 529
type: SIMPLE_ASSIGN
gENCLS.vd = gENCLS.X_d * gENCLS.iq - gENCLS.R_a * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_529(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,529};
  data->localData[0]->realVars[88] /* gENCLS.vd variable */ = (data->simulationInfo->realParameter[189] /* gENCLS.X_d PARAM */) * (data->localData[0]->realVars[84] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[186] /* gENCLS.R_a PARAM */) * (data->localData[0]->realVars[83] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 530
type: SIMPLE_ASSIGN
pwLine4.ir.re = (-gENCLS.p.ir) - pwLine1.ir.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_530(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,530};
  data->localData[0]->realVars[142] /* pwLine4.ir.re variable */ = (-data->localData[0]->realVars[87] /* gENCLS.p.ir variable */) - data->localData[0]->realVars[124] /* pwLine1.ir.re variable */;
  TRACE_POP
}
/*
equation index: 531
type: SIMPLE_ASSIGN
pwLine4.ir.im = (-gENCLS.p.ii) - pwLine1.ir.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_531(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,531};
  data->localData[0]->realVars[141] /* pwLine4.ir.im variable */ = (-data->localData[0]->realVars[86] /* gENCLS.p.ii variable */) - data->localData[0]->realVars[123] /* pwLine1.ir.im variable */;
  TRACE_POP
}
/*
equation index: 532
type: SIMPLE_ASSIGN
pwFault.p.ii = (-pwLine4.is.im) - pwLine3.ir.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_532(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,532};
  data->localData[0]->realVars[107] /* pwFault.p.ii variable */ = (-data->localData[0]->realVars[143] /* pwLine4.is.im variable */) - data->localData[0]->realVars[131] /* pwLine3.ir.im variable */;
  TRACE_POP
}
/*
equation index: 533
type: SIMPLE_ASSIGN
pwFault.p.ir = (-pwLine4.is.re) - pwLine3.ir.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_533(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,533};
  data->localData[0]->realVars[108] /* pwFault.p.ir variable */ = (-data->localData[0]->realVars[144] /* pwLine4.is.re variable */) - data->localData[0]->realVars[132] /* pwLine3.ir.re variable */;
  TRACE_POP
}
/*
equation index: 534
type: SIMPLE_ASSIGN
pwLine.ir.im = (-constantLoad.p.ii) - pwLine3.is.im - pwLine1.is.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_534(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,534};
  data->localData[0]->realVars[113] /* pwLine.ir.im variable */ = (-data->localData[0]->realVars[53] /* constantLoad.p.ii variable */) - data->localData[0]->realVars[133] /* pwLine3.is.im variable */ - data->localData[0]->realVars[125] /* pwLine1.is.im variable */;
  TRACE_POP
}
/*
equation index: 535
type: SIMPLE_ASSIGN
constantLoad.p.ir = (-pwLine3.is.re) - pwLine1.is.re - pwLine.ir.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_535(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,535};
  data->localData[0]->realVars[54] /* constantLoad.p.ir variable */ = (-data->localData[0]->realVars[134] /* pwLine3.is.re variable */) - data->localData[0]->realVars[126] /* pwLine1.is.re variable */ - data->localData[0]->realVars[114] /* pwLine.ir.re variable */;
  TRACE_POP
}

void residualFunc603(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,603};
  int i;
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_boolean tmp3;
  modelica_boolean tmp4;
  modelica_boolean tmp5;
  modelica_boolean tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_boolean tmp9;
  modelica_real tmp10;
  modelica_boolean tmp11;
  modelica_real tmp12;
  modelica_boolean tmp13;
  modelica_real tmp14;
  modelica_boolean tmp15;
  modelica_boolean tmp16;
  modelica_boolean tmp17;
  modelica_boolean tmp18;
  modelica_boolean tmp19;
  modelica_real tmp20;
  modelica_real tmp21;
  modelica_boolean tmp22;
  modelica_real tmp23;
  modelica_boolean tmp24;
  modelica_real tmp25;
  modelica_boolean tmp26;
  modelica_real tmp27;
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
  data->localData[0]->realVars[126] /* pwLine1.is.re variable */ = xloc[0];
  data->localData[0]->realVars[114] /* pwLine.ir.re variable */ = xloc[1];
  data->localData[0]->realVars[125] /* pwLine1.is.im variable */ = xloc[2];
  data->localData[0]->realVars[53] /* constantLoad.p.ii variable */ = xloc[3];
  data->localData[0]->realVars[144] /* pwLine4.is.re variable */ = xloc[4];
  data->localData[0]->realVars[132] /* pwLine3.ir.re variable */ = xloc[5];
  data->localData[0]->realVars[131] /* pwLine3.ir.im variable */ = xloc[6];
  data->localData[0]->realVars[143] /* pwLine4.is.im variable */ = xloc[7];
  data->localData[0]->realVars[134] /* pwLine3.is.re variable */ = xloc[8];
  data->localData[0]->realVars[133] /* pwLine3.is.im variable */ = xloc[9];
  data->localData[0]->realVars[123] /* pwLine1.ir.im variable */ = xloc[10];
  data->localData[0]->realVars[124] /* pwLine1.ir.re variable */ = xloc[11];
  data->localData[0]->realVars[83] /* gENCLS.id variable */ = xloc[12];
  data->localData[0]->realVars[84] /* gENCLS.iq variable */ = xloc[13];
  data->localData[0]->realVars[146] /* pwLine4.vr.re variable */ = xloc[14];
  data->localData[0]->realVars[145] /* pwLine4.vr.im variable */ = xloc[15];
  data->localData[0]->realVars[104] /* gENROE.iq variable */ = xloc[16];
  data->localData[0]->realVars[103] /* gENROE.id variable */ = xloc[17];
  data->localData[0]->realVars[135] /* pwLine3.vs.im variable */ = xloc[18];
  data->localData[0]->realVars[136] /* pwLine3.vs.re variable */ = xloc[19];
  data->localData[0]->realVars[148] /* pwLine4.vs.re variable */ = xloc[20];
  data->localData[0]->realVars[147] /* pwLine4.vs.im variable */ = xloc[21];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_513(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_514(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_515(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_516(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_517(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_518(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_519(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_520(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_521(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_522(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_523(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_524(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_525(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_526(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_527(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_528(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_529(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_530(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_531(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_532(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_533(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_534(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_535(data, threadData);
  /* body */
  RELATIONHYSTERESIS(tmp0, data->localData[0]->timeValue, data->simulationInfo->realParameter[326] /* pwLine3.t1 PARAM */, 4, GreaterEq);
  RELATIONHYSTERESIS(tmp1, data->localData[0]->timeValue, data->simulationInfo->realParameter[327] /* pwLine3.t2 PARAM */, 5, Less);
  res[0] = ((tmp0 && tmp1)?data->localData[0]->realVars[134] /* pwLine3.is.re variable */:data->localData[0]->realVars[136] /* pwLine3.vs.re variable */ - data->localData[0]->realVars[148] /* pwLine4.vs.re variable */ - ((data->simulationInfo->realParameter[325] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[134] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[135] /* pwLine3.vs.im variable */) * (data->simulationInfo->realParameter[322] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[136] /* pwLine3.vs.re variable */) * (data->simulationInfo->realParameter[323] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[324] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[133] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[136] /* pwLine3.vs.re variable */)) * (data->simulationInfo->realParameter[322] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[135] /* pwLine3.vs.im variable */) * (data->simulationInfo->realParameter[323] /* pwLine3.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp2, data->localData[0]->timeValue, data->simulationInfo->realParameter[326] /* pwLine3.t1 PARAM */, 4, GreaterEq);
  RELATIONHYSTERESIS(tmp3, data->localData[0]->timeValue, data->simulationInfo->realParameter[327] /* pwLine3.t2 PARAM */, 5, Less);
  res[1] = ((tmp2 && tmp3)?data->localData[0]->realVars[133] /* pwLine3.is.im variable */:data->localData[0]->realVars[135] /* pwLine3.vs.im variable */ - data->localData[0]->realVars[147] /* pwLine4.vs.im variable */ - ((data->simulationInfo->realParameter[325] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[133] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[136] /* pwLine3.vs.re variable */)) * (data->simulationInfo->realParameter[322] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[135] /* pwLine3.vs.im variable */) * (data->simulationInfo->realParameter[323] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[324] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[134] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[135] /* pwLine3.vs.im variable */) * (data->simulationInfo->realParameter[322] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[136] /* pwLine3.vs.re variable */) * (data->simulationInfo->realParameter[323] /* pwLine3.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp4, data->localData[0]->timeValue, data->simulationInfo->realParameter[293] /* pwFault.t1 PARAM */, 8, Less);
  tmp13 = (modelica_boolean)tmp4;
  if(tmp13)
  {
    tmp14 = data->localData[0]->realVars[107] /* pwFault.p.ii variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp5, data->localData[0]->timeValue, data->simulationInfo->realParameter[294] /* pwFault.t2 PARAM */, 9, Less);
    tmp11 = (modelica_boolean)(tmp5 && data->simulationInfo->booleanParameter[68] /* pwFault.ground PARAM */);
    if(tmp11)
    {
      tmp12 = data->localData[0]->realVars[148] /* pwLine4.vs.re variable */ - 1e-10;
    }
    else
    {
      RELATIONHYSTERESIS(tmp6, data->localData[0]->timeValue, data->simulationInfo->realParameter[294] /* pwFault.t2 PARAM */, 9, Less);
      tmp9 = (modelica_boolean)tmp6;
      if(tmp9)
      {
        tmp7 = data->simulationInfo->realParameter[292] /* pwFault.X PARAM */;
        tmp8 = data->simulationInfo->realParameter[291] /* pwFault.R PARAM */;
        tmp10 = data->localData[0]->realVars[107] /* pwFault.p.ii variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[291] /* pwFault.R PARAM */) * (data->localData[0]->realVars[147] /* pwLine4.vs.im variable */) - ((data->simulationInfo->realParameter[292] /* pwFault.X PARAM */) * (data->localData[0]->realVars[148] /* pwLine4.vs.re variable */)),(tmp7 * tmp7) + (tmp8 * tmp8),"pwFault.X ^ 2.0 + pwFault.R ^ 2.0",equationIndexes));
      }
      else
      {
        tmp10 = data->localData[0]->realVars[107] /* pwFault.p.ii variable */;
      }
      tmp12 = tmp10;
    }
    tmp14 = tmp12;
  }
  res[2] = tmp14;

  RELATIONHYSTERESIS(tmp15, data->localData[0]->timeValue, data->simulationInfo->realParameter[326] /* pwLine3.t1 PARAM */, 4, GreaterEq);
  RELATIONHYSTERESIS(tmp16, data->localData[0]->timeValue, data->simulationInfo->realParameter[327] /* pwLine3.t2 PARAM */, 5, Less);
  res[3] = ((tmp15 && tmp16)?data->localData[0]->realVars[131] /* pwLine3.ir.im variable */:data->localData[0]->realVars[147] /* pwLine4.vs.im variable */ - data->localData[0]->realVars[135] /* pwLine3.vs.im variable */ - ((data->simulationInfo->realParameter[325] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[131] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[148] /* pwLine4.vs.re variable */)) * (data->simulationInfo->realParameter[322] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[147] /* pwLine4.vs.im variable */) * (data->simulationInfo->realParameter[323] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[324] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[132] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[147] /* pwLine4.vs.im variable */) * (data->simulationInfo->realParameter[322] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[148] /* pwLine4.vs.re variable */) * (data->simulationInfo->realParameter[323] /* pwLine3.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp17, data->localData[0]->timeValue, data->simulationInfo->realParameter[293] /* pwFault.t1 PARAM */, 8, Less);
  tmp26 = (modelica_boolean)tmp17;
  if(tmp26)
  {
    tmp27 = data->localData[0]->realVars[108] /* pwFault.p.ir variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp18, data->localData[0]->timeValue, data->simulationInfo->realParameter[294] /* pwFault.t2 PARAM */, 9, Less);
    tmp24 = (modelica_boolean)(tmp18 && data->simulationInfo->booleanParameter[68] /* pwFault.ground PARAM */);
    if(tmp24)
    {
      tmp25 = data->localData[0]->realVars[147] /* pwLine4.vs.im variable */;
    }
    else
    {
      RELATIONHYSTERESIS(tmp19, data->localData[0]->timeValue, data->simulationInfo->realParameter[294] /* pwFault.t2 PARAM */, 9, Less);
      tmp22 = (modelica_boolean)tmp19;
      if(tmp22)
      {
        tmp20 = data->simulationInfo->realParameter[291] /* pwFault.R PARAM */;
        tmp21 = data->simulationInfo->realParameter[292] /* pwFault.X PARAM */;
        tmp23 = data->localData[0]->realVars[108] /* pwFault.p.ir variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[291] /* pwFault.R PARAM */) * (data->localData[0]->realVars[148] /* pwLine4.vs.re variable */) + (data->simulationInfo->realParameter[292] /* pwFault.X PARAM */) * (data->localData[0]->realVars[147] /* pwLine4.vs.im variable */),(tmp20 * tmp20) + (tmp21 * tmp21),"pwFault.R ^ 2.0 + pwFault.X ^ 2.0",equationIndexes));
      }
      else
      {
        tmp23 = data->localData[0]->realVars[108] /* pwFault.p.ir variable */;
      }
      tmp25 = tmp23;
    }
    tmp27 = tmp25;
  }
  res[4] = tmp27;

  RELATIONHYSTERESIS(tmp28, data->localData[0]->timeValue, data->simulationInfo->realParameter[337] /* pwLine4.t1 PARAM */, 10, GreaterEq);
  RELATIONHYSTERESIS(tmp29, data->localData[0]->timeValue, data->simulationInfo->realParameter[338] /* pwLine4.t2 PARAM */, 11, Less);
  res[5] = ((tmp28 && tmp29)?data->localData[0]->realVars[144] /* pwLine4.is.re variable */:data->localData[0]->realVars[148] /* pwLine4.vs.re variable */ - data->localData[0]->realVars[146] /* pwLine4.vr.re variable */ - ((data->simulationInfo->realParameter[336] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[144] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[147] /* pwLine4.vs.im variable */) * (data->simulationInfo->realParameter[333] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[148] /* pwLine4.vs.re variable */) * (data->simulationInfo->realParameter[334] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[335] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[143] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[148] /* pwLine4.vs.re variable */)) * (data->simulationInfo->realParameter[333] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[147] /* pwLine4.vs.im variable */) * (data->simulationInfo->realParameter[334] /* pwLine4.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp30, data->localData[0]->timeValue, data->simulationInfo->realParameter[337] /* pwLine4.t1 PARAM */, 10, GreaterEq);
  RELATIONHYSTERESIS(tmp31, data->localData[0]->timeValue, data->simulationInfo->realParameter[338] /* pwLine4.t2 PARAM */, 11, Less);
  res[6] = ((tmp30 && tmp31)?data->localData[0]->realVars[143] /* pwLine4.is.im variable */:data->localData[0]->realVars[147] /* pwLine4.vs.im variable */ - data->localData[0]->realVars[145] /* pwLine4.vr.im variable */ - ((data->simulationInfo->realParameter[336] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[143] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[148] /* pwLine4.vs.re variable */)) * (data->simulationInfo->realParameter[333] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[147] /* pwLine4.vs.im variable */) * (data->simulationInfo->realParameter[334] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[335] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[144] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[147] /* pwLine4.vs.im variable */) * (data->simulationInfo->realParameter[333] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[148] /* pwLine4.vs.re variable */) * (data->simulationInfo->realParameter[334] /* pwLine4.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp32, data->localData[0]->timeValue, data->simulationInfo->realParameter[337] /* pwLine4.t1 PARAM */, 10, GreaterEq);
  RELATIONHYSTERESIS(tmp33, data->localData[0]->timeValue, data->simulationInfo->realParameter[338] /* pwLine4.t2 PARAM */, 11, Less);
  res[7] = ((tmp32 && tmp33)?data->localData[0]->realVars[141] /* pwLine4.ir.im variable */:data->localData[0]->realVars[145] /* pwLine4.vr.im variable */ - data->localData[0]->realVars[147] /* pwLine4.vs.im variable */ - ((data->simulationInfo->realParameter[336] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[141] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[146] /* pwLine4.vr.re variable */)) * (data->simulationInfo->realParameter[333] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[145] /* pwLine4.vr.im variable */) * (data->simulationInfo->realParameter[334] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[335] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[142] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[145] /* pwLine4.vr.im variable */) * (data->simulationInfo->realParameter[333] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[146] /* pwLine4.vr.re variable */) * (data->simulationInfo->realParameter[334] /* pwLine4.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp34, data->localData[0]->timeValue, data->simulationInfo->realParameter[337] /* pwLine4.t1 PARAM */, 10, GreaterEq);
  RELATIONHYSTERESIS(tmp35, data->localData[0]->timeValue, data->simulationInfo->realParameter[338] /* pwLine4.t2 PARAM */, 11, Less);
  res[8] = ((tmp34 && tmp35)?data->localData[0]->realVars[142] /* pwLine4.ir.re variable */:data->localData[0]->realVars[146] /* pwLine4.vr.re variable */ - data->localData[0]->realVars[148] /* pwLine4.vs.re variable */ - ((data->simulationInfo->realParameter[336] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[142] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[145] /* pwLine4.vr.im variable */) * (data->simulationInfo->realParameter[333] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[146] /* pwLine4.vr.re variable */) * (data->simulationInfo->realParameter[334] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[335] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[141] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[146] /* pwLine4.vr.re variable */)) * (data->simulationInfo->realParameter[333] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[145] /* pwLine4.vr.im variable */) * (data->simulationInfo->realParameter[334] /* pwLine4.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp36, data->localData[0]->timeValue, data->simulationInfo->realParameter[326] /* pwLine3.t1 PARAM */, 4, GreaterEq);
  RELATIONHYSTERESIS(tmp37, data->localData[0]->timeValue, data->simulationInfo->realParameter[327] /* pwLine3.t2 PARAM */, 5, Less);
  res[9] = ((tmp36 && tmp37)?data->localData[0]->realVars[132] /* pwLine3.ir.re variable */:data->localData[0]->realVars[148] /* pwLine4.vs.re variable */ - data->localData[0]->realVars[136] /* pwLine3.vs.re variable */ - ((data->simulationInfo->realParameter[325] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[132] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[147] /* pwLine4.vs.im variable */) * (data->simulationInfo->realParameter[322] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[148] /* pwLine4.vs.re variable */) * (data->simulationInfo->realParameter[323] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[324] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[131] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[148] /* pwLine4.vs.re variable */)) * (data->simulationInfo->realParameter[322] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[147] /* pwLine4.vs.im variable */) * (data->simulationInfo->realParameter[323] /* pwLine3.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp38, data->localData[0]->timeValue, data->simulationInfo->realParameter[304] /* pwLine.t1 PARAM */, 6, GreaterEq);
  RELATIONHYSTERESIS(tmp39, data->localData[0]->timeValue, data->simulationInfo->realParameter[305] /* pwLine.t2 PARAM */, 7, Less);
  res[10] = ((tmp38 && tmp39)?data->localData[0]->realVars[115] /* pwLine.is.im variable */:data->localData[0]->realVars[117] /* pwLine.vs.im variable */ - data->localData[0]->realVars[135] /* pwLine3.vs.im variable */ - ((data->simulationInfo->realParameter[303] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[115] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[118] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[300] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[117] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[301] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[302] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[116] /* pwLine.is.re variable */ + (data->localData[0]->realVars[117] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[300] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[118] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[301] /* pwLine.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp40, data->localData[0]->timeValue, data->simulationInfo->realParameter[304] /* pwLine.t1 PARAM */, 6, GreaterEq);
  RELATIONHYSTERESIS(tmp41, data->localData[0]->timeValue, data->simulationInfo->realParameter[305] /* pwLine.t2 PARAM */, 7, Less);
  res[11] = ((tmp40 && tmp41)?data->localData[0]->realVars[116] /* pwLine.is.re variable */:data->localData[0]->realVars[118] /* pwLine.vs.re variable */ - data->localData[0]->realVars[136] /* pwLine3.vs.re variable */ - ((data->simulationInfo->realParameter[303] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[116] /* pwLine.is.re variable */ + (data->localData[0]->realVars[117] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[300] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[118] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[301] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[302] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[115] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[118] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[300] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[117] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[301] /* pwLine.Y.re PARAM */))))));

  res[12] = (data->localData[0]->realVars[135] /* pwLine3.vs.im variable */) * (data->localData[0]->realVars[54] /* constantLoad.p.ir variable */) + ((-data->localData[0]->realVars[136] /* pwLine3.vs.re variable */)) * (data->localData[0]->realVars[53] /* constantLoad.p.ii variable */) - data->localData[0]->realVars[49] /* constantLoad.Q variable */;

  RELATIONHYSTERESIS(tmp42, data->localData[0]->timeValue, data->simulationInfo->realParameter[304] /* pwLine.t1 PARAM */, 6, GreaterEq);
  RELATIONHYSTERESIS(tmp43, data->localData[0]->timeValue, data->simulationInfo->realParameter[305] /* pwLine.t2 PARAM */, 7, Less);
  res[13] = ((tmp42 && tmp43)?data->localData[0]->realVars[114] /* pwLine.ir.re variable */:data->localData[0]->realVars[136] /* pwLine3.vs.re variable */ - data->localData[0]->realVars[118] /* pwLine.vs.re variable */ - ((data->simulationInfo->realParameter[303] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[114] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[135] /* pwLine3.vs.im variable */) * (data->simulationInfo->realParameter[300] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[136] /* pwLine3.vs.re variable */) * (data->simulationInfo->realParameter[301] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[302] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[113] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[136] /* pwLine3.vs.re variable */)) * (data->simulationInfo->realParameter[300] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[135] /* pwLine3.vs.im variable */) * (data->simulationInfo->realParameter[301] /* pwLine.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp44, data->localData[0]->timeValue, data->simulationInfo->realParameter[304] /* pwLine.t1 PARAM */, 6, GreaterEq);
  RELATIONHYSTERESIS(tmp45, data->localData[0]->timeValue, data->simulationInfo->realParameter[305] /* pwLine.t2 PARAM */, 7, Less);
  res[14] = ((tmp44 && tmp45)?data->localData[0]->realVars[113] /* pwLine.ir.im variable */:data->localData[0]->realVars[135] /* pwLine3.vs.im variable */ - data->localData[0]->realVars[117] /* pwLine.vs.im variable */ - ((data->simulationInfo->realParameter[303] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[113] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[136] /* pwLine3.vs.re variable */)) * (data->simulationInfo->realParameter[300] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[135] /* pwLine3.vs.im variable */) * (data->simulationInfo->realParameter[301] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[302] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[114] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[135] /* pwLine3.vs.im variable */) * (data->simulationInfo->realParameter[300] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[136] /* pwLine3.vs.re variable */) * (data->simulationInfo->realParameter[301] /* pwLine.Y.re PARAM */)))));

  res[15] = (data->localData[0]->realVars[135] /* pwLine3.vs.im variable */) * (data->localData[0]->realVars[53] /* constantLoad.p.ii variable */) + (data->localData[0]->realVars[136] /* pwLine3.vs.re variable */) * (data->localData[0]->realVars[54] /* constantLoad.p.ir variable */) - data->localData[0]->realVars[48] /* constantLoad.P variable */;

  RELATIONHYSTERESIS(tmp46, data->localData[0]->timeValue, data->simulationInfo->realParameter[315] /* pwLine1.t1 PARAM */, 12, GreaterEq);
  RELATIONHYSTERESIS(tmp47, data->localData[0]->timeValue, data->simulationInfo->realParameter[316] /* pwLine1.t2 PARAM */, 13, Less);
  res[16] = ((tmp46 && tmp47)?data->localData[0]->realVars[126] /* pwLine1.is.re variable */:data->localData[0]->realVars[136] /* pwLine3.vs.re variable */ - data->localData[0]->realVars[146] /* pwLine4.vr.re variable */ - ((data->simulationInfo->realParameter[314] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[126] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[135] /* pwLine3.vs.im variable */) * (data->simulationInfo->realParameter[311] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[136] /* pwLine3.vs.re variable */) * (data->simulationInfo->realParameter[312] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[313] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[125] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[136] /* pwLine3.vs.re variable */)) * (data->simulationInfo->realParameter[311] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[135] /* pwLine3.vs.im variable */) * (data->simulationInfo->realParameter[312] /* pwLine1.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp48, data->localData[0]->timeValue, data->simulationInfo->realParameter[315] /* pwLine1.t1 PARAM */, 12, GreaterEq);
  RELATIONHYSTERESIS(tmp49, data->localData[0]->timeValue, data->simulationInfo->realParameter[316] /* pwLine1.t2 PARAM */, 13, Less);
  res[17] = ((tmp48 && tmp49)?data->localData[0]->realVars[125] /* pwLine1.is.im variable */:data->localData[0]->realVars[135] /* pwLine3.vs.im variable */ - data->localData[0]->realVars[145] /* pwLine4.vr.im variable */ - ((data->simulationInfo->realParameter[314] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[125] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[136] /* pwLine3.vs.re variable */)) * (data->simulationInfo->realParameter[311] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[135] /* pwLine3.vs.im variable */) * (data->simulationInfo->realParameter[312] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[313] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[126] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[135] /* pwLine3.vs.im variable */) * (data->simulationInfo->realParameter[311] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[136] /* pwLine3.vs.re variable */) * (data->simulationInfo->realParameter[312] /* pwLine1.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp50, data->localData[0]->timeValue, data->simulationInfo->realParameter[315] /* pwLine1.t1 PARAM */, 12, GreaterEq);
  RELATIONHYSTERESIS(tmp51, data->localData[0]->timeValue, data->simulationInfo->realParameter[316] /* pwLine1.t2 PARAM */, 13, Less);
  res[18] = ((tmp50 && tmp51)?data->localData[0]->realVars[124] /* pwLine1.ir.re variable */:data->localData[0]->realVars[146] /* pwLine4.vr.re variable */ - data->localData[0]->realVars[136] /* pwLine3.vs.re variable */ - ((data->simulationInfo->realParameter[314] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[124] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[145] /* pwLine4.vr.im variable */) * (data->simulationInfo->realParameter[311] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[146] /* pwLine4.vr.re variable */) * (data->simulationInfo->realParameter[312] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[313] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[123] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[146] /* pwLine4.vr.re variable */)) * (data->simulationInfo->realParameter[311] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[145] /* pwLine4.vr.im variable */) * (data->simulationInfo->realParameter[312] /* pwLine1.Y.re PARAM */))))));

  res[19] = (data->localData[0]->realVars[27] /* $cse2 variable */) * (data->localData[0]->realVars[89] /* gENCLS.vq variable */) + (data->localData[0]->realVars[26] /* $cse1 variable */) * (data->localData[0]->realVars[88] /* gENCLS.vd variable */) - data->localData[0]->realVars[146] /* pwLine4.vr.re variable */;

  res[20] = (data->localData[0]->realVars[26] /* $cse1 variable */) * (data->localData[0]->realVars[89] /* gENCLS.vq variable */) + ((-data->localData[0]->realVars[27] /* $cse2 variable */)) * (data->localData[0]->realVars[88] /* gENCLS.vd variable */) - data->localData[0]->realVars[145] /* pwLine4.vr.im variable */;

  RELATIONHYSTERESIS(tmp52, data->localData[0]->timeValue, data->simulationInfo->realParameter[315] /* pwLine1.t1 PARAM */, 12, GreaterEq);
  RELATIONHYSTERESIS(tmp53, data->localData[0]->timeValue, data->simulationInfo->realParameter[316] /* pwLine1.t2 PARAM */, 13, Less);
  res[21] = ((tmp52 && tmp53)?data->localData[0]->realVars[123] /* pwLine1.ir.im variable */:data->localData[0]->realVars[145] /* pwLine4.vr.im variable */ - data->localData[0]->realVars[135] /* pwLine3.vs.im variable */ - ((data->simulationInfo->realParameter[314] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[123] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[146] /* pwLine4.vr.re variable */)) * (data->simulationInfo->realParameter[311] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[145] /* pwLine4.vr.im variable */) * (data->simulationInfo->realParameter[312] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[313] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[124] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[145] /* pwLine4.vr.im variable */) * (data->simulationInfo->realParameter[311] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[146] /* pwLine4.vr.re variable */) * (data->simulationInfo->realParameter[312] /* pwLine1.Y.re PARAM */)))));
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS603(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+22] = {0,4,4,4,4,3,3,3,3,4,4,4,4,4,4,7,7,4,4,11,11,8,8};
  const int rowIndex[112] = {12,15,16,17,12,13,14,15,13,14,16,17,12,13,14,15,4,5,6,3,4,9,2,3,9,2,5,6,0,1,12,15,0,1,13,14,7,8,18,21,7,8,18,21,7,8,19,20,7,8,19,20,5,7,8,16,18,19,21,6,7,8,17,18,20,21,10,11,13,14,10,11,13,14,0,1,3,10,12,13,14,15,16,17,21,0,1,9,11,12,13,14,15,16,17,18,0,2,3,4,5,6,8,9,1,2,3,4,5,6,7,9};
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
  inSysData->sparsePattern->colorCols[15] = 5;
  inSysData->sparsePattern->colorCols[17] = 5;
  inSysData->sparsePattern->colorCols[14] = 6;
  inSysData->sparsePattern->colorCols[16] = 6;
  inSysData->sparsePattern->colorCols[3] = 7;
  inSysData->sparsePattern->colorCols[13] = 7;
  inSysData->sparsePattern->colorCols[2] = 8;
  inSysData->sparsePattern->colorCols[8] = 8;
  inSysData->sparsePattern->colorCols[12] = 8;
  inSysData->sparsePattern->colorCols[1] = 9;
  inSysData->sparsePattern->colorCols[5] = 9;
  inSysData->sparsePattern->colorCols[7] = 9;
  inSysData->sparsePattern->colorCols[11] = 9;
  inSysData->sparsePattern->colorCols[0] = 10;
  inSysData->sparsePattern->colorCols[4] = 10;
  inSysData->sparsePattern->colorCols[6] = 10;
  inSysData->sparsePattern->colorCols[9] = 10;
  inSysData->sparsePattern->colorCols[10] = 10;
}
void initializeStaticDataNLS603(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for pwLine1.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[126].attribute /* pwLine1.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[126].attribute /* pwLine1.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[126].attribute /* pwLine1.is.re */.max;
  /* static nls data for pwLine.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[114].attribute /* pwLine.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[114].attribute /* pwLine.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[114].attribute /* pwLine.ir.re */.max;
  /* static nls data for pwLine1.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[125].attribute /* pwLine1.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[125].attribute /* pwLine1.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[125].attribute /* pwLine1.is.im */.max;
  /* static nls data for constantLoad.p.ii */
  sysData->nominal[i] = data->modelData->realVarsData[53].attribute /* constantLoad.p.ii */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[53].attribute /* constantLoad.p.ii */.min;
  sysData->max[i++]   = data->modelData->realVarsData[53].attribute /* constantLoad.p.ii */.max;
  /* static nls data for pwLine4.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[144].attribute /* pwLine4.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[144].attribute /* pwLine4.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[144].attribute /* pwLine4.is.re */.max;
  /* static nls data for pwLine3.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[132].attribute /* pwLine3.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[132].attribute /* pwLine3.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[132].attribute /* pwLine3.ir.re */.max;
  /* static nls data for pwLine3.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[131].attribute /* pwLine3.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[131].attribute /* pwLine3.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[131].attribute /* pwLine3.ir.im */.max;
  /* static nls data for pwLine4.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[143].attribute /* pwLine4.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[143].attribute /* pwLine4.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[143].attribute /* pwLine4.is.im */.max;
  /* static nls data for pwLine3.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[134].attribute /* pwLine3.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[134].attribute /* pwLine3.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[134].attribute /* pwLine3.is.re */.max;
  /* static nls data for pwLine3.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[133].attribute /* pwLine3.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[133].attribute /* pwLine3.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[133].attribute /* pwLine3.is.im */.max;
  /* static nls data for pwLine1.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[123].attribute /* pwLine1.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[123].attribute /* pwLine1.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[123].attribute /* pwLine1.ir.im */.max;
  /* static nls data for pwLine1.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[124].attribute /* pwLine1.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[124].attribute /* pwLine1.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[124].attribute /* pwLine1.ir.re */.max;
  /* static nls data for gENCLS.id */
  sysData->nominal[i] = data->modelData->realVarsData[83].attribute /* gENCLS.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[83].attribute /* gENCLS.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[83].attribute /* gENCLS.id */.max;
  /* static nls data for gENCLS.iq */
  sysData->nominal[i] = data->modelData->realVarsData[84].attribute /* gENCLS.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[84].attribute /* gENCLS.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[84].attribute /* gENCLS.iq */.max;
  /* static nls data for pwLine4.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[146].attribute /* pwLine4.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[146].attribute /* pwLine4.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[146].attribute /* pwLine4.vr.re */.max;
  /* static nls data for pwLine4.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[145].attribute /* pwLine4.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[145].attribute /* pwLine4.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[145].attribute /* pwLine4.vr.im */.max;
  /* static nls data for gENROE.iq */
  sysData->nominal[i] = data->modelData->realVarsData[104].attribute /* gENROE.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[104].attribute /* gENROE.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[104].attribute /* gENROE.iq */.max;
  /* static nls data for gENROE.id */
  sysData->nominal[i] = data->modelData->realVarsData[103].attribute /* gENROE.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[103].attribute /* gENROE.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[103].attribute /* gENROE.id */.max;
  /* static nls data for pwLine3.vs.im */
  sysData->nominal[i] = data->modelData->realVarsData[135].attribute /* pwLine3.vs.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[135].attribute /* pwLine3.vs.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[135].attribute /* pwLine3.vs.im */.max;
  /* static nls data for pwLine3.vs.re */
  sysData->nominal[i] = data->modelData->realVarsData[136].attribute /* pwLine3.vs.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[136].attribute /* pwLine3.vs.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[136].attribute /* pwLine3.vs.re */.max;
  /* static nls data for pwLine4.vs.re */
  sysData->nominal[i] = data->modelData->realVarsData[148].attribute /* pwLine4.vs.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[148].attribute /* pwLine4.vs.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[148].attribute /* pwLine4.vs.re */.max;
  /* static nls data for pwLine4.vs.im */
  sysData->nominal[i] = data->modelData->realVarsData[147].attribute /* pwLine4.vs.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[147].attribute /* pwLine4.vs.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[147].attribute /* pwLine4.vs.im */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS603(sysData);
}

void getIterationVarsNLS603(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[126] /* pwLine1.is.re variable */;
  array[1] = data->localData[0]->realVars[114] /* pwLine.ir.re variable */;
  array[2] = data->localData[0]->realVars[125] /* pwLine1.is.im variable */;
  array[3] = data->localData[0]->realVars[53] /* constantLoad.p.ii variable */;
  array[4] = data->localData[0]->realVars[144] /* pwLine4.is.re variable */;
  array[5] = data->localData[0]->realVars[132] /* pwLine3.ir.re variable */;
  array[6] = data->localData[0]->realVars[131] /* pwLine3.ir.im variable */;
  array[7] = data->localData[0]->realVars[143] /* pwLine4.is.im variable */;
  array[8] = data->localData[0]->realVars[134] /* pwLine3.is.re variable */;
  array[9] = data->localData[0]->realVars[133] /* pwLine3.is.im variable */;
  array[10] = data->localData[0]->realVars[123] /* pwLine1.ir.im variable */;
  array[11] = data->localData[0]->realVars[124] /* pwLine1.ir.re variable */;
  array[12] = data->localData[0]->realVars[83] /* gENCLS.id variable */;
  array[13] = data->localData[0]->realVars[84] /* gENCLS.iq variable */;
  array[14] = data->localData[0]->realVars[146] /* pwLine4.vr.re variable */;
  array[15] = data->localData[0]->realVars[145] /* pwLine4.vr.im variable */;
  array[16] = data->localData[0]->realVars[104] /* gENROE.iq variable */;
  array[17] = data->localData[0]->realVars[103] /* gENROE.id variable */;
  array[18] = data->localData[0]->realVars[135] /* pwLine3.vs.im variable */;
  array[19] = data->localData[0]->realVars[136] /* pwLine3.vs.re variable */;
  array[20] = data->localData[0]->realVars[148] /* pwLine4.vs.re variable */;
  array[21] = data->localData[0]->realVars[147] /* pwLine4.vs.im variable */;
}


/* inner equations */

/*
equation index: 377
type: SIMPLE_ASSIGN
constantLoad.v = sqrt(pwLine3.vs.re ^ 2.0 + pwLine3.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_377(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,377};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[136] /* pwLine3.vs.re variable */;
  tmp1 = data->localData[0]->realVars[135] /* pwLine3.vs.im variable */;
  data->localData[0]->realVars[55] /* constantLoad.v variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 378
type: SIMPLE_ASSIGN
constantLoad.kI = if constantLoad.v < 0.5 then constantLoad.a2 * constantLoad.b2 * constantLoad.v ^ (-1.0 + constantLoad.b2) * exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_378(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,378};
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
    tmp2 = -1.0 + data->simulationInfo->realParameter[68] /* constantLoad.b2 PARAM */;
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
    tmp9 = data->simulationInfo->realParameter[68] /* constantLoad.b2 PARAM */;
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
    tmp16 = (data->simulationInfo->realParameter[62] /* constantLoad.a2 PARAM */) * ((data->simulationInfo->realParameter[68] /* constantLoad.b2 PARAM */) * ((tmp3) * (exp(((-data->simulationInfo->realParameter[62] /* constantLoad.a2 PARAM */)) * (tmp10)))));
  }
  else
  {
    tmp16 = 1.0;
  }
  data->localData[0]->realVars[51] /* constantLoad.kI variable */ = tmp16;
  TRACE_POP
}
/*
equation index: 379
type: SIMPLE_ASSIGN
constantLoad.kP = if constantLoad.v < constantLoad.PQBRAK then constantLoad.a0 + constantLoad.a1 * cos(constantLoad.v * constantLoad.wp) + constantLoad.b1 * sin(constantLoad.v * constantLoad.wp) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_379(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,379};
  modelica_boolean tmp0;
  tmp0 = Less(data->localData[0]->realVars[55] /* constantLoad.v variable */,data->simulationInfo->realParameter[41] /* constantLoad.PQBRAK PARAM */);
  data->localData[0]->realVars[52] /* constantLoad.kP variable */ = (tmp0?data->simulationInfo->realParameter[60] /* constantLoad.a0 PARAM */ + (data->simulationInfo->realParameter[61] /* constantLoad.a1 PARAM */) * (cos((data->localData[0]->realVars[55] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[81] /* constantLoad.wp PARAM */))) + (data->simulationInfo->realParameter[67] /* constantLoad.b1 PARAM */) * (sin((data->localData[0]->realVars[55] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[81] /* constantLoad.wp PARAM */))):1.0);
  TRACE_POP
}
/*
equation index: 380
type: SIMPLE_ASSIGN
constantLoad.Q = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.im + constantLoad.d_Q) else constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_380(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,380};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  tmp0 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */);
  tmp1 = LessEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[71] /* constantLoad.d_t PARAM */);
  tmp4 = (modelica_boolean)(tmp0 && tmp1);
  if(tmp4)
  {
    tmp2 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[44] /* constantLoad.S_I.im PARAM */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[48] /* constantLoad.S_Y.im PARAM */) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[46] /* constantLoad.S_P.im PARAM */ + data->simulationInfo->realParameter[70] /* constantLoad.d_Q PARAM */);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[44] /* constantLoad.S_I.im PARAM */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[48] /* constantLoad.S_Y.im PARAM */) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[46] /* constantLoad.S_P.im PARAM */);
  }
  data->localData[0]->realVars[49] /* constantLoad.Q variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 381
type: SIMPLE_ASSIGN
constantLoad.P = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.re + constantLoad.d_P) else constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_381(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,381};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  tmp0 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */);
  tmp1 = LessEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[71] /* constantLoad.d_t PARAM */);
  tmp4 = (modelica_boolean)(tmp0 && tmp1);
  if(tmp4)
  {
    tmp2 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[45] /* constantLoad.S_I.re PARAM */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[49] /* constantLoad.S_Y.re PARAM */) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[47] /* constantLoad.S_P.re PARAM */ + data->simulationInfo->realParameter[69] /* constantLoad.d_P PARAM */);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[45] /* constantLoad.S_I.re PARAM */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[49] /* constantLoad.S_Y.re PARAM */) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[47] /* constantLoad.S_P.re PARAM */);
  }
  data->localData[0]->realVars[48] /* constantLoad.P variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 382
type: SIMPLE_ASSIGN
pwLine.is.im = (-gENROE.CoB) * (cos(gENROE.delta) * gENROE.id - sin(gENROE.delta) * gENROE.iq)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_382(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,382};
  data->localData[0]->realVars[115] /* pwLine.is.im variable */ = ((-data->simulationInfo->realParameter[206] /* gENROE.CoB PARAM */)) * ((cos(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[103] /* gENROE.id variable */) - ((sin(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[104] /* gENROE.iq variable */)));
  TRACE_POP
}
/*
equation index: 383
type: SIMPLE_ASSIGN
pwLine.is.re = gENROE.CoB * (sin(gENROE.delta) * gENROE.id + cos(gENROE.delta) * gENROE.iq)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_383(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,383};
  data->localData[0]->realVars[116] /* pwLine.is.re variable */ = (data->simulationInfo->realParameter[206] /* gENROE.CoB PARAM */) * ((sin(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[103] /* gENROE.id variable */) + (cos(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[104] /* gENROE.iq variable */));
  TRACE_POP
}
/*
equation index: 384
type: SIMPLE_ASSIGN
gENROE.PSIq = (-gENROE.PSIppq) - gENROE.Xppq * gENROE.iq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_384(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,384};
  data->localData[0]->realVars[97] /* gENROE.PSIq variable */ = (-data->localData[0]->realVars[96] /* gENROE.PSIppq variable */) - ((data->simulationInfo->realParameter[261] /* gENROE.Xppq PARAM */) * (data->localData[0]->realVars[104] /* gENROE.iq variable */));
  TRACE_POP
}
/*
equation index: 385
type: SIMPLE_ASSIGN
gENROE.ud = (-gENROE.PSIq) - gENROE.R_a * gENROE.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_385(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,385};
  data->localData[0]->realVars[105] /* gENROE.ud variable */ = (-data->localData[0]->realVars[97] /* gENROE.PSIq variable */) - ((data->simulationInfo->realParameter[243] /* gENROE.R_a PARAM */) * (data->localData[0]->realVars[103] /* gENROE.id variable */));
  TRACE_POP
}
/*
equation index: 386
type: SIMPLE_ASSIGN
pwLine.vs.re = sin(gENROE.delta) * gENROE.ud + cos(gENROE.delta) * gENROE.uq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_386(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,386};
  data->localData[0]->realVars[118] /* pwLine.vs.re variable */ = (sin(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[105] /* gENROE.ud variable */) + (cos(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[106] /* gENROE.uq variable */);
  TRACE_POP
}
/*
equation index: 387
type: SIMPLE_ASSIGN
pwLine.vs.im = sin(gENROE.delta) * gENROE.uq - cos(gENROE.delta) * gENROE.ud
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_387(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,387};
  data->localData[0]->realVars[117] /* pwLine.vs.im variable */ = (sin(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[106] /* gENROE.uq variable */) - ((cos(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[105] /* gENROE.ud variable */));
  TRACE_POP
}
/*
equation index: 388
type: SIMPLE_ASSIGN
gENROE.PSId = gENROE.uq + gENROE.R_a * gENROE.iq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_388(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,388};
  data->localData[0]->realVars[93] /* gENROE.PSId variable */ = data->localData[0]->realVars[106] /* gENROE.uq variable */ + (data->simulationInfo->realParameter[243] /* gENROE.R_a PARAM */) * (data->localData[0]->realVars[104] /* gENROE.iq variable */);
  TRACE_POP
}
/*
equation index: 389
type: SIMPLE_ASSIGN
gENROE.PSIppd = gENROE.PSId + gENROE.Xppd * gENROE.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_389(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,389};
  data->localData[0]->realVars[95] /* gENROE.PSIppd variable */ = data->localData[0]->realVars[93] /* gENROE.PSId variable */ + (data->simulationInfo->realParameter[260] /* gENROE.Xppd PARAM */) * (data->localData[0]->realVars[103] /* gENROE.id variable */);
  TRACE_POP
}
/*
equation index: 390
type: SIMPLE_ASSIGN
gENROE.PSIpp = sqrt(gENROE.PSIppd ^ 2.0 + gENROE.PSIppq ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_390(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,390};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[95] /* gENROE.PSIppd variable */;
  tmp1 = data->localData[0]->realVars[96] /* gENROE.PSIppq variable */;
  data->localData[0]->realVars[94] /* gENROE.PSIpp variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 391
type: SIMPLE_ASSIGN
gENROE.Epd = (gENROE.XaqIlq - (((gENROE.Xpq - gENROE.Xl) * gENROE.iq - gENROE.PSIkq) * gENROE.K1q + gENROE.iq * (gENROE.Xpq - gENROE.Xq) + OpenIPSL.NonElectrical.Functions.SE_exp(gENROE.PSIpp, gENROE.S10, gENROE.S12, 1.0, 1.2) * gENROE.PSIppq * (gENROE.Xq - gENROE.Xl) / (gENROE.Xd - gENROE.Xl))) / (1.0 + gENROE.K1q)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_391(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,391};
  data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */ = DIVISION_SIM(data->localData[0]->realVars[100] /* gENROE.XaqIlq variable */ - (((data->simulationInfo->realParameter[262] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[257] /* gENROE.Xl PARAM */) * (data->localData[0]->realVars[104] /* gENROE.iq variable */) - data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */) * (data->simulationInfo->realParameter[221] /* gENROE.K1q PARAM */) + (data->localData[0]->realVars[104] /* gENROE.iq variable */) * (data->simulationInfo->realParameter[262] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[263] /* gENROE.Xq PARAM */) + (omc_OpenIPSL_NonElectrical_Functions_SE__exp(threadData, data->localData[0]->realVars[94] /* gENROE.PSIpp variable */, data->simulationInfo->realParameter[246] /* gENROE.S10 PARAM */, data->simulationInfo->realParameter[247] /* gENROE.S12 PARAM */, 1.0, 1.2)) * ((data->localData[0]->realVars[96] /* gENROE.PSIppq variable */) * (DIVISION_SIM(data->simulationInfo->realParameter[263] /* gENROE.Xq PARAM */ - data->simulationInfo->realParameter[257] /* gENROE.Xl PARAM */,data->simulationInfo->realParameter[256] /* gENROE.Xd PARAM */ - data->simulationInfo->realParameter[257] /* gENROE.Xl PARAM */,"gENROE.Xd - gENROE.Xl",equationIndexes)))),1.0 + data->simulationInfo->realParameter[221] /* gENROE.K1q PARAM */,"1.0 + gENROE.K1q",equationIndexes);
  TRACE_POP
}
/*
equation index: 392
type: SIMPLE_ASSIGN
gENROE.Epq = (eSAC1A.XADIFD - (((gENROE.Xl - gENROE.Xpd) * gENROE.id - gENROE.PSIkd) * gENROE.K1d + gENROE.id * (gENROE.Xd - gENROE.Xpd) + OpenIPSL.NonElectrical.Functions.SE_exp(gENROE.PSIpp, gENROE.S10, gENROE.S12, 1.0, 1.2) * gENROE.PSIppd)) / (1.0 + gENROE.K1d)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_392(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,392};
  data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ = DIVISION_SIM(data->localData[0]->realVars[60] /* eSAC1A.XADIFD variable */ - (((data->simulationInfo->realParameter[257] /* gENROE.Xl PARAM */ - data->simulationInfo->realParameter[258] /* gENROE.Xpd PARAM */) * (data->localData[0]->realVars[103] /* gENROE.id variable */) - data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */) * (data->simulationInfo->realParameter[220] /* gENROE.K1d PARAM */) + (data->localData[0]->realVars[103] /* gENROE.id variable */) * (data->simulationInfo->realParameter[256] /* gENROE.Xd PARAM */ - data->simulationInfo->realParameter[258] /* gENROE.Xpd PARAM */) + (omc_OpenIPSL_NonElectrical_Functions_SE__exp(threadData, data->localData[0]->realVars[94] /* gENROE.PSIpp variable */, data->simulationInfo->realParameter[246] /* gENROE.S10 PARAM */, data->simulationInfo->realParameter[247] /* gENROE.S12 PARAM */, 1.0, 1.2)) * (data->localData[0]->realVars[95] /* gENROE.PSIppd variable */)),1.0 + data->simulationInfo->realParameter[220] /* gENROE.K1d PARAM */,"1.0 + gENROE.K1d",equationIndexes);
  TRACE_POP
}
/*
equation index: 393
type: SIMPLE_ASSIGN
gENCLS.p.ir = (-gENCLS.CoB) * (sin(gENCLS.delta) * gENCLS.id + cos(gENCLS.delta) * gENCLS.iq)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_393(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,393};
  data->localData[0]->realVars[87] /* gENCLS.p.ir variable */ = ((-data->simulationInfo->realParameter[180] /* gENCLS.CoB PARAM */)) * ((sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[83] /* gENCLS.id variable */) + (cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[84] /* gENCLS.iq variable */));
  TRACE_POP
}
/*
equation index: 394
type: SIMPLE_ASSIGN
gENCLS.p.ii = gENCLS.CoB * (cos(gENCLS.delta) * gENCLS.id - sin(gENCLS.delta) * gENCLS.iq)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_394(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,394};
  data->localData[0]->realVars[86] /* gENCLS.p.ii variable */ = (data->simulationInfo->realParameter[180] /* gENCLS.CoB PARAM */) * ((cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[83] /* gENCLS.id variable */) - ((sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[84] /* gENCLS.iq variable */)));
  TRACE_POP
}
/*
equation index: 395
type: SIMPLE_ASSIGN
gENCLS.vq = gENCLS.eq + (-gENCLS.R_a) * gENCLS.iq - gENCLS.X_d * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_395(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,395};
  data->localData[0]->realVars[89] /* gENCLS.vq variable */ = data->localData[0]->realVars[6] /* gENCLS.eq STATE(1) */ + ((-data->simulationInfo->realParameter[186] /* gENCLS.R_a PARAM */)) * (data->localData[0]->realVars[84] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[189] /* gENCLS.X_d PARAM */) * (data->localData[0]->realVars[83] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 396
type: SIMPLE_ASSIGN
gENCLS.vd = gENCLS.X_d * gENCLS.iq - gENCLS.R_a * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_396(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,396};
  data->localData[0]->realVars[88] /* gENCLS.vd variable */ = (data->simulationInfo->realParameter[189] /* gENCLS.X_d PARAM */) * (data->localData[0]->realVars[84] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[186] /* gENCLS.R_a PARAM */) * (data->localData[0]->realVars[83] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 397
type: SIMPLE_ASSIGN
pwLine4.ir.im = (-gENCLS.p.ii) - pwLine1.ir.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_397(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,397};
  data->localData[0]->realVars[141] /* pwLine4.ir.im variable */ = (-data->localData[0]->realVars[86] /* gENCLS.p.ii variable */) - data->localData[0]->realVars[123] /* pwLine1.ir.im variable */;
  TRACE_POP
}
/*
equation index: 398
type: SIMPLE_ASSIGN
pwLine1.ir.re = (-gENCLS.p.ir) - pwLine4.ir.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_398(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,398};
  data->localData[0]->realVars[124] /* pwLine1.ir.re variable */ = (-data->localData[0]->realVars[87] /* gENCLS.p.ir variable */) - data->localData[0]->realVars[142] /* pwLine4.ir.re variable */;
  TRACE_POP
}
/*
equation index: 399
type: SIMPLE_ASSIGN
pwFault.p.ii = (-pwLine4.is.im) - pwLine3.ir.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_399(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,399};
  data->localData[0]->realVars[107] /* pwFault.p.ii variable */ = (-data->localData[0]->realVars[143] /* pwLine4.is.im variable */) - data->localData[0]->realVars[131] /* pwLine3.ir.im variable */;
  TRACE_POP
}
/*
equation index: 400
type: SIMPLE_ASSIGN
pwFault.p.ir = (-pwLine4.is.re) - pwLine3.ir.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_400(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,400};
  data->localData[0]->realVars[108] /* pwFault.p.ir variable */ = (-data->localData[0]->realVars[144] /* pwLine4.is.re variable */) - data->localData[0]->realVars[132] /* pwLine3.ir.re variable */;
  TRACE_POP
}
/*
equation index: 401
type: SIMPLE_ASSIGN
constantLoad.p.ii = (-pwLine3.is.im) - pwLine1.is.im - pwLine.ir.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_401(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,401};
  data->localData[0]->realVars[53] /* constantLoad.p.ii variable */ = (-data->localData[0]->realVars[133] /* pwLine3.is.im variable */) - data->localData[0]->realVars[125] /* pwLine1.is.im variable */ - data->localData[0]->realVars[113] /* pwLine.ir.im variable */;
  TRACE_POP
}
/*
equation index: 402
type: SIMPLE_ASSIGN
pwLine.ir.re = (-constantLoad.p.ir) - pwLine3.is.re - pwLine1.is.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_402(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,402};
  data->localData[0]->realVars[114] /* pwLine.ir.re variable */ = (-data->localData[0]->realVars[54] /* constantLoad.p.ir variable */) - data->localData[0]->realVars[134] /* pwLine3.is.re variable */ - data->localData[0]->realVars[126] /* pwLine1.is.re variable */;
  TRACE_POP
}

void residualFunc429(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,429};
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
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_boolean tmp11;
  modelica_real tmp12;
  modelica_boolean tmp13;
  modelica_real tmp14;
  modelica_boolean tmp15;
  modelica_real tmp16;
  modelica_boolean tmp17;
  modelica_boolean tmp18;
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
  for (i=0; i<26; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<26; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[54] /* constantLoad.p.ir variable */ = xloc[0];
  data->localData[0]->realVars[126] /* pwLine1.is.re variable */ = xloc[1];
  data->localData[0]->realVars[113] /* pwLine.ir.im variable */ = xloc[2];
  data->localData[0]->realVars[125] /* pwLine1.is.im variable */ = xloc[3];
  data->localData[0]->realVars[144] /* pwLine4.is.re variable */ = xloc[4];
  data->localData[0]->realVars[132] /* pwLine3.ir.re variable */ = xloc[5];
  data->localData[0]->realVars[134] /* pwLine3.is.re variable */ = xloc[6];
  data->localData[0]->realVars[133] /* pwLine3.is.im variable */ = xloc[7];
  data->localData[0]->realVars[131] /* pwLine3.ir.im variable */ = xloc[8];
  data->localData[0]->realVars[143] /* pwLine4.is.im variable */ = xloc[9];
  data->localData[0]->realVars[142] /* pwLine4.ir.re variable */ = xloc[10];
  data->localData[0]->realVars[123] /* pwLine1.ir.im variable */ = xloc[11];
  data->localData[0]->realVars[84] /* gENCLS.iq variable */ = xloc[12];
  data->localData[0]->realVars[83] /* gENCLS.id variable */ = xloc[13];
  data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */ = xloc[14];
  data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */ = xloc[15];
  data->localData[0]->realVars[106] /* gENROE.uq variable */ = xloc[16];
  data->localData[0]->realVars[96] /* gENROE.PSIppq variable */ = xloc[17];
  data->localData[0]->realVars[104] /* gENROE.iq variable */ = xloc[18];
  data->localData[0]->realVars[103] /* gENROE.id variable */ = xloc[19];
  data->localData[0]->realVars[145] /* pwLine4.vr.im variable */ = xloc[20];
  data->localData[0]->realVars[146] /* pwLine4.vr.re variable */ = xloc[21];
  data->localData[0]->realVars[136] /* pwLine3.vs.re variable */ = xloc[22];
  data->localData[0]->realVars[135] /* pwLine3.vs.im variable */ = xloc[23];
  data->localData[0]->realVars[148] /* pwLine4.vs.re variable */ = xloc[24];
  data->localData[0]->realVars[147] /* pwLine4.vs.im variable */ = xloc[25];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_377(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_378(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_379(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_380(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_381(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_382(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_383(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_384(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_385(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_386(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_387(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_388(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_389(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_390(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_391(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_392(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_393(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_394(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_395(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_396(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_397(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_398(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_399(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_400(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_401(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_402(data, threadData);
  /* body */
  tmp0 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[337] /* pwLine4.t1 PARAM */);
  tmp1 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[338] /* pwLine4.t2 PARAM */);
  res[0] = ((tmp0 && tmp1)?data->localData[0]->realVars[143] /* pwLine4.is.im variable */:data->localData[0]->realVars[147] /* pwLine4.vs.im variable */ - data->localData[0]->realVars[145] /* pwLine4.vr.im variable */ - ((data->simulationInfo->realParameter[336] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[143] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[148] /* pwLine4.vs.re variable */)) * (data->simulationInfo->realParameter[333] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[147] /* pwLine4.vs.im variable */) * (data->simulationInfo->realParameter[334] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[335] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[144] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[147] /* pwLine4.vs.im variable */) * (data->simulationInfo->realParameter[333] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[148] /* pwLine4.vs.re variable */) * (data->simulationInfo->realParameter[334] /* pwLine4.Y.re PARAM */)))));

  tmp2 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[326] /* pwLine3.t1 PARAM */);
  tmp3 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[327] /* pwLine3.t2 PARAM */);
  res[1] = ((tmp2 && tmp3)?data->localData[0]->realVars[134] /* pwLine3.is.re variable */:data->localData[0]->realVars[136] /* pwLine3.vs.re variable */ - data->localData[0]->realVars[148] /* pwLine4.vs.re variable */ - ((data->simulationInfo->realParameter[325] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[134] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[135] /* pwLine3.vs.im variable */) * (data->simulationInfo->realParameter[322] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[136] /* pwLine3.vs.re variable */) * (data->simulationInfo->realParameter[323] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[324] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[133] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[136] /* pwLine3.vs.re variable */)) * (data->simulationInfo->realParameter[322] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[135] /* pwLine3.vs.im variable */) * (data->simulationInfo->realParameter[323] /* pwLine3.Y.re PARAM */))))));

  tmp4 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[326] /* pwLine3.t1 PARAM */);
  tmp5 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[327] /* pwLine3.t2 PARAM */);
  res[2] = ((tmp4 && tmp5)?data->localData[0]->realVars[133] /* pwLine3.is.im variable */:data->localData[0]->realVars[135] /* pwLine3.vs.im variable */ - data->localData[0]->realVars[147] /* pwLine4.vs.im variable */ - ((data->simulationInfo->realParameter[325] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[133] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[136] /* pwLine3.vs.re variable */)) * (data->simulationInfo->realParameter[322] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[135] /* pwLine3.vs.im variable */) * (data->simulationInfo->realParameter[323] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[324] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[134] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[135] /* pwLine3.vs.im variable */) * (data->simulationInfo->realParameter[322] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[136] /* pwLine3.vs.re variable */) * (data->simulationInfo->realParameter[323] /* pwLine3.Y.re PARAM */)))));

  tmp6 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[293] /* pwFault.t1 PARAM */);
  tmp15 = (modelica_boolean)tmp6;
  if(tmp15)
  {
    tmp16 = data->localData[0]->realVars[107] /* pwFault.p.ii variable */;
  }
  else
  {
    tmp7 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[294] /* pwFault.t2 PARAM */);
    tmp13 = (modelica_boolean)(tmp7 && data->simulationInfo->booleanParameter[68] /* pwFault.ground PARAM */);
    if(tmp13)
    {
      tmp14 = data->localData[0]->realVars[148] /* pwLine4.vs.re variable */ - 1e-10;
    }
    else
    {
      tmp8 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[294] /* pwFault.t2 PARAM */);
      tmp11 = (modelica_boolean)tmp8;
      if(tmp11)
      {
        tmp9 = data->simulationInfo->realParameter[292] /* pwFault.X PARAM */;
        tmp10 = data->simulationInfo->realParameter[291] /* pwFault.R PARAM */;
        tmp12 = data->localData[0]->realVars[107] /* pwFault.p.ii variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[291] /* pwFault.R PARAM */) * (data->localData[0]->realVars[147] /* pwLine4.vs.im variable */) - ((data->simulationInfo->realParameter[292] /* pwFault.X PARAM */) * (data->localData[0]->realVars[148] /* pwLine4.vs.re variable */)),(tmp9 * tmp9) + (tmp10 * tmp10),"pwFault.X ^ 2.0 + pwFault.R ^ 2.0",equationIndexes));
      }
      else
      {
        tmp12 = data->localData[0]->realVars[107] /* pwFault.p.ii variable */;
      }
      tmp14 = tmp12;
    }
    tmp16 = tmp14;
  }
  res[3] = tmp16;

  tmp17 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[326] /* pwLine3.t1 PARAM */);
  tmp18 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[327] /* pwLine3.t2 PARAM */);
  res[4] = ((tmp17 && tmp18)?data->localData[0]->realVars[132] /* pwLine3.ir.re variable */:data->localData[0]->realVars[148] /* pwLine4.vs.re variable */ - data->localData[0]->realVars[136] /* pwLine3.vs.re variable */ - ((data->simulationInfo->realParameter[325] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[132] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[147] /* pwLine4.vs.im variable */) * (data->simulationInfo->realParameter[322] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[148] /* pwLine4.vs.re variable */) * (data->simulationInfo->realParameter[323] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[324] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[131] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[148] /* pwLine4.vs.re variable */)) * (data->simulationInfo->realParameter[322] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[147] /* pwLine4.vs.im variable */) * (data->simulationInfo->realParameter[323] /* pwLine3.Y.re PARAM */))))));

  tmp19 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[326] /* pwLine3.t1 PARAM */);
  tmp20 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[327] /* pwLine3.t2 PARAM */);
  res[5] = ((tmp19 && tmp20)?data->localData[0]->realVars[131] /* pwLine3.ir.im variable */:data->localData[0]->realVars[147] /* pwLine4.vs.im variable */ - data->localData[0]->realVars[135] /* pwLine3.vs.im variable */ - ((data->simulationInfo->realParameter[325] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[131] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[148] /* pwLine4.vs.re variable */)) * (data->simulationInfo->realParameter[322] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[147] /* pwLine4.vs.im variable */) * (data->simulationInfo->realParameter[323] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[324] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[132] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[147] /* pwLine4.vs.im variable */) * (data->simulationInfo->realParameter[322] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[148] /* pwLine4.vs.re variable */) * (data->simulationInfo->realParameter[323] /* pwLine3.Y.re PARAM */)))));

  tmp21 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[293] /* pwFault.t1 PARAM */);
  tmp30 = (modelica_boolean)tmp21;
  if(tmp30)
  {
    tmp31 = data->localData[0]->realVars[108] /* pwFault.p.ir variable */;
  }
  else
  {
    tmp22 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[294] /* pwFault.t2 PARAM */);
    tmp28 = (modelica_boolean)(tmp22 && data->simulationInfo->booleanParameter[68] /* pwFault.ground PARAM */);
    if(tmp28)
    {
      tmp29 = data->localData[0]->realVars[147] /* pwLine4.vs.im variable */;
    }
    else
    {
      tmp23 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[294] /* pwFault.t2 PARAM */);
      tmp26 = (modelica_boolean)tmp23;
      if(tmp26)
      {
        tmp24 = data->simulationInfo->realParameter[291] /* pwFault.R PARAM */;
        tmp25 = data->simulationInfo->realParameter[292] /* pwFault.X PARAM */;
        tmp27 = data->localData[0]->realVars[108] /* pwFault.p.ir variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[291] /* pwFault.R PARAM */) * (data->localData[0]->realVars[148] /* pwLine4.vs.re variable */) + (data->simulationInfo->realParameter[292] /* pwFault.X PARAM */) * (data->localData[0]->realVars[147] /* pwLine4.vs.im variable */),(tmp24 * tmp24) + (tmp25 * tmp25),"pwFault.R ^ 2.0 + pwFault.X ^ 2.0",equationIndexes));
      }
      else
      {
        tmp27 = data->localData[0]->realVars[108] /* pwFault.p.ir variable */;
      }
      tmp29 = tmp27;
    }
    tmp31 = tmp29;
  }
  res[6] = tmp31;

  tmp32 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[337] /* pwLine4.t1 PARAM */);
  tmp33 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[338] /* pwLine4.t2 PARAM */);
  res[7] = ((tmp32 && tmp33)?data->localData[0]->realVars[144] /* pwLine4.is.re variable */:data->localData[0]->realVars[148] /* pwLine4.vs.re variable */ - data->localData[0]->realVars[146] /* pwLine4.vr.re variable */ - ((data->simulationInfo->realParameter[336] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[144] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[147] /* pwLine4.vs.im variable */) * (data->simulationInfo->realParameter[333] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[148] /* pwLine4.vs.re variable */) * (data->simulationInfo->realParameter[334] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[335] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[143] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[148] /* pwLine4.vs.re variable */)) * (data->simulationInfo->realParameter[333] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[147] /* pwLine4.vs.im variable */) * (data->simulationInfo->realParameter[334] /* pwLine4.Y.re PARAM */))))));

  tmp34 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[337] /* pwLine4.t1 PARAM */);
  tmp35 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[338] /* pwLine4.t2 PARAM */);
  res[8] = ((tmp34 && tmp35)?data->localData[0]->realVars[142] /* pwLine4.ir.re variable */:data->localData[0]->realVars[146] /* pwLine4.vr.re variable */ - data->localData[0]->realVars[148] /* pwLine4.vs.re variable */ - ((data->simulationInfo->realParameter[336] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[142] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[145] /* pwLine4.vr.im variable */) * (data->simulationInfo->realParameter[333] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[146] /* pwLine4.vr.re variable */) * (data->simulationInfo->realParameter[334] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[335] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[141] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[146] /* pwLine4.vr.re variable */)) * (data->simulationInfo->realParameter[333] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[145] /* pwLine4.vr.im variable */) * (data->simulationInfo->realParameter[334] /* pwLine4.Y.re PARAM */))))));

  tmp36 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[315] /* pwLine1.t1 PARAM */);
  tmp37 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[316] /* pwLine1.t2 PARAM */);
  res[9] = ((tmp36 && tmp37)?data->localData[0]->realVars[126] /* pwLine1.is.re variable */:data->localData[0]->realVars[136] /* pwLine3.vs.re variable */ - data->localData[0]->realVars[146] /* pwLine4.vr.re variable */ - ((data->simulationInfo->realParameter[314] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[126] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[135] /* pwLine3.vs.im variable */) * (data->simulationInfo->realParameter[311] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[136] /* pwLine3.vs.re variable */) * (data->simulationInfo->realParameter[312] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[313] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[125] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[136] /* pwLine3.vs.re variable */)) * (data->simulationInfo->realParameter[311] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[135] /* pwLine3.vs.im variable */) * (data->simulationInfo->realParameter[312] /* pwLine1.Y.re PARAM */))))));

  tmp38 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[315] /* pwLine1.t1 PARAM */);
  tmp39 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[316] /* pwLine1.t2 PARAM */);
  res[10] = ((tmp38 && tmp39)?data->localData[0]->realVars[125] /* pwLine1.is.im variable */:data->localData[0]->realVars[135] /* pwLine3.vs.im variable */ - data->localData[0]->realVars[145] /* pwLine4.vr.im variable */ - ((data->simulationInfo->realParameter[314] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[125] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[136] /* pwLine3.vs.re variable */)) * (data->simulationInfo->realParameter[311] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[135] /* pwLine3.vs.im variable */) * (data->simulationInfo->realParameter[312] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[313] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[126] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[135] /* pwLine3.vs.im variable */) * (data->simulationInfo->realParameter[311] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[136] /* pwLine3.vs.re variable */) * (data->simulationInfo->realParameter[312] /* pwLine1.Y.re PARAM */)))));

  tmp40 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[315] /* pwLine1.t1 PARAM */);
  tmp41 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[316] /* pwLine1.t2 PARAM */);
  res[11] = ((tmp40 && tmp41)?data->localData[0]->realVars[124] /* pwLine1.ir.re variable */:data->localData[0]->realVars[146] /* pwLine4.vr.re variable */ - data->localData[0]->realVars[136] /* pwLine3.vs.re variable */ - ((data->simulationInfo->realParameter[314] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[124] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[145] /* pwLine4.vr.im variable */) * (data->simulationInfo->realParameter[311] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[146] /* pwLine4.vr.re variable */) * (data->simulationInfo->realParameter[312] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[313] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[123] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[146] /* pwLine4.vr.re variable */)) * (data->simulationInfo->realParameter[311] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[145] /* pwLine4.vr.im variable */) * (data->simulationInfo->realParameter[312] /* pwLine1.Y.re PARAM */))))));

  res[12] = (sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[89] /* gENCLS.vq variable */) + ((-cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */))) * (data->localData[0]->realVars[88] /* gENCLS.vd variable */) - data->localData[0]->realVars[145] /* pwLine4.vr.im variable */;

  res[13] = (cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[89] /* gENCLS.vq variable */) + (sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[88] /* gENCLS.vd variable */) - data->localData[0]->realVars[146] /* pwLine4.vr.re variable */;

  tmp42 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[337] /* pwLine4.t1 PARAM */);
  tmp43 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[338] /* pwLine4.t2 PARAM */);
  res[14] = ((tmp42 && tmp43)?data->localData[0]->realVars[141] /* pwLine4.ir.im variable */:data->localData[0]->realVars[145] /* pwLine4.vr.im variable */ - data->localData[0]->realVars[147] /* pwLine4.vs.im variable */ - ((data->simulationInfo->realParameter[336] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[141] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[146] /* pwLine4.vr.re variable */)) * (data->simulationInfo->realParameter[333] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[145] /* pwLine4.vr.im variable */) * (data->simulationInfo->realParameter[334] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[335] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[142] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[145] /* pwLine4.vr.im variable */) * (data->simulationInfo->realParameter[333] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[146] /* pwLine4.vr.re variable */) * (data->simulationInfo->realParameter[334] /* pwLine4.Y.re PARAM */)))));

  tmp44 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[315] /* pwLine1.t1 PARAM */);
  tmp45 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[316] /* pwLine1.t2 PARAM */);
  res[15] = ((tmp44 && tmp45)?data->localData[0]->realVars[123] /* pwLine1.ir.im variable */:data->localData[0]->realVars[145] /* pwLine4.vr.im variable */ - data->localData[0]->realVars[135] /* pwLine3.vs.im variable */ - ((data->simulationInfo->realParameter[314] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[123] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[146] /* pwLine4.vr.re variable */)) * (data->simulationInfo->realParameter[311] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[145] /* pwLine4.vr.im variable */) * (data->simulationInfo->realParameter[312] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[313] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[124] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[145] /* pwLine4.vr.im variable */) * (data->simulationInfo->realParameter[311] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[146] /* pwLine4.vr.re variable */) * (data->simulationInfo->realParameter[312] /* pwLine1.Y.re PARAM */)))));

  res[16] = data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ + (data->simulationInfo->realParameter[257] /* gENROE.Xl PARAM */ - data->simulationInfo->realParameter[258] /* gENROE.Xpd PARAM */) * (data->localData[0]->realVars[103] /* gENROE.id variable */) + (-data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */) - ((data->localData[0]->realVars[22] /* der(gENROE.PSIkd) STATE_DER */) * (data->simulationInfo->realParameter[250] /* gENROE.Tppd0 PARAM */));

  res[17] = (data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */) * (data->simulationInfo->realParameter[226] /* gENROE.K4d PARAM */) + (data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */) * (data->simulationInfo->realParameter[224] /* gENROE.K3d PARAM */) - data->localData[0]->realVars[95] /* gENROE.PSIppd variable */;

  res[18] = data->localData[0]->realVars[96] /* gENROE.PSIppq variable */ - ((data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */) * (data->simulationInfo->realParameter[225] /* gENROE.K3q PARAM */)) - ((data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */) * (data->simulationInfo->realParameter[227] /* gENROE.K4q PARAM */));

  res[19] = data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */ + (data->simulationInfo->realParameter[262] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[257] /* gENROE.Xl PARAM */) * (data->localData[0]->realVars[104] /* gENROE.iq variable */) + (-data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */) - ((data->localData[0]->realVars[23] /* der(gENROE.PSIkq) STATE_DER */) * (data->simulationInfo->realParameter[251] /* gENROE.Tppq0 PARAM */));

  tmp46 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[304] /* pwLine.t1 PARAM */);
  tmp47 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[305] /* pwLine.t2 PARAM */);
  res[20] = ((tmp46 && tmp47)?data->localData[0]->realVars[116] /* pwLine.is.re variable */:data->localData[0]->realVars[118] /* pwLine.vs.re variable */ - data->localData[0]->realVars[136] /* pwLine3.vs.re variable */ - ((data->simulationInfo->realParameter[303] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[116] /* pwLine.is.re variable */ + (data->localData[0]->realVars[117] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[300] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[118] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[301] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[302] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[115] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[118] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[300] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[117] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[301] /* pwLine.Y.re PARAM */))))));

  tmp48 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[304] /* pwLine.t1 PARAM */);
  tmp49 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[305] /* pwLine.t2 PARAM */);
  res[21] = ((tmp48 && tmp49)?data->localData[0]->realVars[115] /* pwLine.is.im variable */:data->localData[0]->realVars[117] /* pwLine.vs.im variable */ - data->localData[0]->realVars[135] /* pwLine3.vs.im variable */ - ((data->simulationInfo->realParameter[303] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[115] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[118] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[300] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[117] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[301] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[302] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[116] /* pwLine.is.re variable */ + (data->localData[0]->realVars[117] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[300] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[118] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[301] /* pwLine.Y.re PARAM */)))));

  tmp50 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[304] /* pwLine.t1 PARAM */);
  tmp51 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[305] /* pwLine.t2 PARAM */);
  res[22] = ((tmp50 && tmp51)?data->localData[0]->realVars[114] /* pwLine.ir.re variable */:data->localData[0]->realVars[136] /* pwLine3.vs.re variable */ - data->localData[0]->realVars[118] /* pwLine.vs.re variable */ - ((data->simulationInfo->realParameter[303] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[114] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[135] /* pwLine3.vs.im variable */) * (data->simulationInfo->realParameter[300] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[136] /* pwLine3.vs.re variable */) * (data->simulationInfo->realParameter[301] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[302] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[113] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[136] /* pwLine3.vs.re variable */)) * (data->simulationInfo->realParameter[300] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[135] /* pwLine3.vs.im variable */) * (data->simulationInfo->realParameter[301] /* pwLine.Y.re PARAM */))))));

  res[23] = (data->localData[0]->realVars[135] /* pwLine3.vs.im variable */) * (data->localData[0]->realVars[54] /* constantLoad.p.ir variable */) + ((-data->localData[0]->realVars[136] /* pwLine3.vs.re variable */)) * (data->localData[0]->realVars[53] /* constantLoad.p.ii variable */) - data->localData[0]->realVars[49] /* constantLoad.Q variable */;

  tmp52 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[304] /* pwLine.t1 PARAM */);
  tmp53 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[305] /* pwLine.t2 PARAM */);
  res[24] = ((tmp52 && tmp53)?data->localData[0]->realVars[113] /* pwLine.ir.im variable */:data->localData[0]->realVars[135] /* pwLine3.vs.im variable */ - data->localData[0]->realVars[117] /* pwLine.vs.im variable */ - ((data->simulationInfo->realParameter[303] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[113] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[136] /* pwLine3.vs.re variable */)) * (data->simulationInfo->realParameter[300] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[135] /* pwLine3.vs.im variable */) * (data->simulationInfo->realParameter[301] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[302] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[114] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[135] /* pwLine3.vs.im variable */) * (data->simulationInfo->realParameter[300] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[136] /* pwLine3.vs.re variable */) * (data->simulationInfo->realParameter[301] /* pwLine.Y.re PARAM */)))));

  res[25] = (data->localData[0]->realVars[135] /* pwLine3.vs.im variable */) * (data->localData[0]->realVars[53] /* constantLoad.p.ii variable */) + (data->localData[0]->realVars[136] /* pwLine3.vs.re variable */) * (data->localData[0]->realVars[54] /* constantLoad.p.ir variable */) - data->localData[0]->realVars[48] /* constantLoad.P variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS429(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+26] = {0,4,4,4,4,3,3,4,4,3,3,4,4,6,6,2,2,8,8,8,8,7,7,11,11,8,8};
  const int rowIndex[144] = {22,23,24,25,9,10,22,24,22,23,24,25,9,10,23,25,0,6,7,4,5,6,1,2,22,24,1,2,23,25,3,4,5,0,3,7,8,11,14,15,8,11,14,15,8,11,12,13,14,15,8,11,12,13,14,15,16,17,18,19,16,17,18,19,20,21,22,24,16,17,18,19,20,21,22,24,16,17,18,19,20,21,22,24,16,17,18,19,20,21,22,24,0,8,10,11,12,14,15,7,8,9,11,13,14,15,1,2,4,9,10,11,20,22,23,24,25,1,2,5,9,10,15,21,22,23,24,25,0,1,3,4,5,6,7,8,0,2,3,4,5,6,7,14};
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
  inSysData->sparsePattern->colorCols[23] = 1;
  inSysData->sparsePattern->colorCols[22] = 2;
  inSysData->sparsePattern->colorCols[19] = 3;
  inSysData->sparsePattern->colorCols[25] = 3;
  inSysData->sparsePattern->colorCols[18] = 4;
  inSysData->sparsePattern->colorCols[24] = 4;
  inSysData->sparsePattern->colorCols[17] = 5;
  inSysData->sparsePattern->colorCols[21] = 5;
  inSysData->sparsePattern->colorCols[16] = 6;
  inSysData->sparsePattern->colorCols[20] = 6;
  inSysData->sparsePattern->colorCols[3] = 7;
  inSysData->sparsePattern->colorCols[6] = 7;
  inSysData->sparsePattern->colorCols[13] = 7;
  inSysData->sparsePattern->colorCols[2] = 8;
  inSysData->sparsePattern->colorCols[12] = 8;
  inSysData->sparsePattern->colorCols[1] = 9;
  inSysData->sparsePattern->colorCols[5] = 9;
  inSysData->sparsePattern->colorCols[7] = 9;
  inSysData->sparsePattern->colorCols[9] = 9;
  inSysData->sparsePattern->colorCols[11] = 9;
  inSysData->sparsePattern->colorCols[0] = 10;
  inSysData->sparsePattern->colorCols[4] = 10;
  inSysData->sparsePattern->colorCols[8] = 10;
  inSysData->sparsePattern->colorCols[10] = 10;
  inSysData->sparsePattern->colorCols[14] = 10;
  inSysData->sparsePattern->colorCols[15] = 10;
}
void initializeStaticDataNLS429(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for constantLoad.p.ir */
  sysData->nominal[i] = data->modelData->realVarsData[54].attribute /* constantLoad.p.ir */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[54].attribute /* constantLoad.p.ir */.min;
  sysData->max[i++]   = data->modelData->realVarsData[54].attribute /* constantLoad.p.ir */.max;
  /* static nls data for pwLine1.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[126].attribute /* pwLine1.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[126].attribute /* pwLine1.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[126].attribute /* pwLine1.is.re */.max;
  /* static nls data for pwLine.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[113].attribute /* pwLine.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[113].attribute /* pwLine.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[113].attribute /* pwLine.ir.im */.max;
  /* static nls data for pwLine1.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[125].attribute /* pwLine1.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[125].attribute /* pwLine1.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[125].attribute /* pwLine1.is.im */.max;
  /* static nls data for pwLine4.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[144].attribute /* pwLine4.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[144].attribute /* pwLine4.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[144].attribute /* pwLine4.is.re */.max;
  /* static nls data for pwLine3.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[132].attribute /* pwLine3.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[132].attribute /* pwLine3.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[132].attribute /* pwLine3.ir.re */.max;
  /* static nls data for pwLine3.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[134].attribute /* pwLine3.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[134].attribute /* pwLine3.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[134].attribute /* pwLine3.is.re */.max;
  /* static nls data for pwLine3.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[133].attribute /* pwLine3.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[133].attribute /* pwLine3.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[133].attribute /* pwLine3.is.im */.max;
  /* static nls data for pwLine3.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[131].attribute /* pwLine3.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[131].attribute /* pwLine3.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[131].attribute /* pwLine3.ir.im */.max;
  /* static nls data for pwLine4.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[143].attribute /* pwLine4.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[143].attribute /* pwLine4.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[143].attribute /* pwLine4.is.im */.max;
  /* static nls data for pwLine4.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[142].attribute /* pwLine4.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[142].attribute /* pwLine4.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[142].attribute /* pwLine4.ir.re */.max;
  /* static nls data for pwLine1.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[123].attribute /* pwLine1.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[123].attribute /* pwLine1.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[123].attribute /* pwLine1.ir.im */.max;
  /* static nls data for gENCLS.iq */
  sysData->nominal[i] = data->modelData->realVarsData[84].attribute /* gENCLS.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[84].attribute /* gENCLS.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[84].attribute /* gENCLS.iq */.max;
  /* static nls data for gENCLS.id */
  sysData->nominal[i] = data->modelData->realVarsData[83].attribute /* gENCLS.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[83].attribute /* gENCLS.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[83].attribute /* gENCLS.id */.max;
  /* static nls data for gENROE.PSIkd */
  sysData->nominal[i] = data->modelData->realVarsData[9].attribute /* gENROE.PSIkd */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[9].attribute /* gENROE.PSIkd */.min;
  sysData->max[i++]   = data->modelData->realVarsData[9].attribute /* gENROE.PSIkd */.max;
  /* static nls data for gENROE.PSIkq */
  sysData->nominal[i] = data->modelData->realVarsData[10].attribute /* gENROE.PSIkq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[10].attribute /* gENROE.PSIkq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[10].attribute /* gENROE.PSIkq */.max;
  /* static nls data for gENROE.uq */
  sysData->nominal[i] = data->modelData->realVarsData[106].attribute /* gENROE.uq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[106].attribute /* gENROE.uq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[106].attribute /* gENROE.uq */.max;
  /* static nls data for gENROE.PSIppq */
  sysData->nominal[i] = data->modelData->realVarsData[96].attribute /* gENROE.PSIppq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[96].attribute /* gENROE.PSIppq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[96].attribute /* gENROE.PSIppq */.max;
  /* static nls data for gENROE.iq */
  sysData->nominal[i] = data->modelData->realVarsData[104].attribute /* gENROE.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[104].attribute /* gENROE.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[104].attribute /* gENROE.iq */.max;
  /* static nls data for gENROE.id */
  sysData->nominal[i] = data->modelData->realVarsData[103].attribute /* gENROE.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[103].attribute /* gENROE.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[103].attribute /* gENROE.id */.max;
  /* static nls data for pwLine4.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[145].attribute /* pwLine4.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[145].attribute /* pwLine4.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[145].attribute /* pwLine4.vr.im */.max;
  /* static nls data for pwLine4.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[146].attribute /* pwLine4.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[146].attribute /* pwLine4.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[146].attribute /* pwLine4.vr.re */.max;
  /* static nls data for pwLine3.vs.re */
  sysData->nominal[i] = data->modelData->realVarsData[136].attribute /* pwLine3.vs.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[136].attribute /* pwLine3.vs.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[136].attribute /* pwLine3.vs.re */.max;
  /* static nls data for pwLine3.vs.im */
  sysData->nominal[i] = data->modelData->realVarsData[135].attribute /* pwLine3.vs.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[135].attribute /* pwLine3.vs.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[135].attribute /* pwLine3.vs.im */.max;
  /* static nls data for pwLine4.vs.re */
  sysData->nominal[i] = data->modelData->realVarsData[148].attribute /* pwLine4.vs.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[148].attribute /* pwLine4.vs.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[148].attribute /* pwLine4.vs.re */.max;
  /* static nls data for pwLine4.vs.im */
  sysData->nominal[i] = data->modelData->realVarsData[147].attribute /* pwLine4.vs.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[147].attribute /* pwLine4.vs.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[147].attribute /* pwLine4.vs.im */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS429(sysData);
}

void getIterationVarsNLS429(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[54] /* constantLoad.p.ir variable */;
  array[1] = data->localData[0]->realVars[126] /* pwLine1.is.re variable */;
  array[2] = data->localData[0]->realVars[113] /* pwLine.ir.im variable */;
  array[3] = data->localData[0]->realVars[125] /* pwLine1.is.im variable */;
  array[4] = data->localData[0]->realVars[144] /* pwLine4.is.re variable */;
  array[5] = data->localData[0]->realVars[132] /* pwLine3.ir.re variable */;
  array[6] = data->localData[0]->realVars[134] /* pwLine3.is.re variable */;
  array[7] = data->localData[0]->realVars[133] /* pwLine3.is.im variable */;
  array[8] = data->localData[0]->realVars[131] /* pwLine3.ir.im variable */;
  array[9] = data->localData[0]->realVars[143] /* pwLine4.is.im variable */;
  array[10] = data->localData[0]->realVars[142] /* pwLine4.ir.re variable */;
  array[11] = data->localData[0]->realVars[123] /* pwLine1.ir.im variable */;
  array[12] = data->localData[0]->realVars[84] /* gENCLS.iq variable */;
  array[13] = data->localData[0]->realVars[83] /* gENCLS.id variable */;
  array[14] = data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */;
  array[15] = data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */;
  array[16] = data->localData[0]->realVars[106] /* gENROE.uq variable */;
  array[17] = data->localData[0]->realVars[96] /* gENROE.PSIppq variable */;
  array[18] = data->localData[0]->realVars[104] /* gENROE.iq variable */;
  array[19] = data->localData[0]->realVars[103] /* gENROE.id variable */;
  array[20] = data->localData[0]->realVars[145] /* pwLine4.vr.im variable */;
  array[21] = data->localData[0]->realVars[146] /* pwLine4.vr.re variable */;
  array[22] = data->localData[0]->realVars[136] /* pwLine3.vs.re variable */;
  array[23] = data->localData[0]->realVars[135] /* pwLine3.vs.im variable */;
  array[24] = data->localData[0]->realVars[148] /* pwLine4.vs.re variable */;
  array[25] = data->localData[0]->realVars[147] /* pwLine4.vs.im variable */;
}


/* inner equations */

/*
equation index: 304
type: SIMPLE_ASSIGN
eSAC1A.rectifierCommutationVoltageDrop.gain2.y = eSAC1A.rectifierCommutationVoltageDrop.gain2.k * eSAC1A.XADIFD
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_304(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,304};
  data->localData[0]->realVars[73] /* eSAC1A.rectifierCommutationVoltageDrop.gain2.y variable */ = (data->simulationInfo->realParameter[152] /* eSAC1A.rectifierCommutationVoltageDrop.gain2.k PARAM */) * (data->localData[0]->realVars[60] /* eSAC1A.XADIFD variable */);
  TRACE_POP
}
/*
equation index: 305
type: SIMPLE_ASSIGN
eSAC1A.EFD = eSAC1A.XADIFD + $DER.gENROE.Epq * gENROE.Tpd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_305(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,305};
  data->localData[0]->realVars[58] /* eSAC1A.EFD variable */ = data->localData[0]->realVars[60] /* eSAC1A.XADIFD variable */ + (data->localData[0]->realVars[21] /* der(gENROE.Epq) STATE_DER */) * (data->simulationInfo->realParameter[249] /* gENROE.Tpd0 PARAM */);
  TRACE_POP
}
/*
equation index: 306
type: SIMPLE_ASSIGN
eSAC1A.Ifd0 = eSAC1A.XADIFD
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_306(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,306};
  data->simulationInfo->realParameter[89] /* eSAC1A.Ifd0 PARAM */ = data->localData[0]->realVars[60] /* eSAC1A.XADIFD variable */;
  TRACE_POP
}
/*
equation index: 307
type: SIMPLE_ASSIGN
eSAC1A.VE0 = OpenIPSL.Electrical.Controls.PSSE.ES.BaseClasses.invFEX(eSAC1A.K_C, eSAC1A.Efd0, eSAC1A.Ifd0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_307(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,307};
  data->simulationInfo->realParameter[103] /* eSAC1A.VE0 PARAM */ = omc_OpenIPSL_Electrical_Controls_PSSE_ES_BaseClasses_invFEX(threadData, data->simulationInfo->realParameter[91] /* eSAC1A.K_C PARAM */, data->simulationInfo->realParameter[88] /* eSAC1A.Efd0 PARAM */, data->simulationInfo->realParameter[89] /* eSAC1A.Ifd0 PARAM */);
  TRACE_POP
}
/*
equation index: 308
type: SIMPLE_ASSIGN
eSAC1A.rotatingExciterWithDemagnetization.Efd0 = eSAC1A.VE0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_308(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,308};
  data->simulationInfo->realParameter[155] /* eSAC1A.rotatingExciterWithDemagnetization.Efd0 PARAM */ = data->simulationInfo->realParameter[103] /* eSAC1A.VE0 PARAM */;
  TRACE_POP
}
/*
equation index: 309
type: SIMPLE_ASSIGN
eSAC1A.rotatingExciterWithDemagnetization.sISO.y_start = eSAC1A.rotatingExciterWithDemagnetization.Efd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_309(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,309};
  data->simulationInfo->realParameter[168] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y_start PARAM */ = data->simulationInfo->realParameter[155] /* eSAC1A.rotatingExciterWithDemagnetization.Efd0 PARAM */;
  TRACE_POP
}
/*
equation index: 310
type: SIMPLE_ASSIGN
$START.eSAC1A.rotatingExciterWithDemagnetization.sISO.y = eSAC1A.rotatingExciterWithDemagnetization.sISO.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_310(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,310};
  data->modelData->realVarsData[3].attribute /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */.start = data->simulationInfo->realParameter[168] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y_start PARAM */;
    data->localData[0]->realVars[3] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */ = data->modelData->realVarsData[3].attribute /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[3].info /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y */.name, (modelica_real) data->localData[0]->realVars[3] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */);
  TRACE_POP
}
/*
equation index: 311
type: SIMPLE_ASSIGN
eSAC1A.rotatingExciterWithDemagnetization.sISO.y = eSAC1A.rotatingExciterWithDemagnetization.sISO.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_311(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,311};
  data->localData[0]->realVars[3] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */ = data->simulationInfo->realParameter[168] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y_start PARAM */;
  TRACE_POP
}
/*
equation index: 312
type: SIMPLE_ASSIGN
eSAC1A.rectifierCommutationVoltageDrop.division.y = eSAC1A.rectifierCommutationVoltageDrop.gain2.y / eSAC1A.rotatingExciterWithDemagnetization.sISO.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_312(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,312};
  data->localData[0]->realVars[71] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */ = DIVISION_SIM(data->localData[0]->realVars[73] /* eSAC1A.rectifierCommutationVoltageDrop.gain2.y variable */,data->localData[0]->realVars[3] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */,"eSAC1A.rotatingExciterWithDemagnetization.sISO.y",equationIndexes);
  TRACE_POP
}
/*
equation index: 313
type: SIMPLE_ASSIGN
eSAC1A.rectifierCommutationVoltageDrop.fEX.y = if eSAC1A.rectifierCommutationVoltageDrop.division.y <= 0.0 then 1.0 else if eSAC1A.rectifierCommutationVoltageDrop.division.y > 0.0 and eSAC1A.rectifierCommutationVoltageDrop.division.y <= 0.433 then 1.0 + (-0.577) * eSAC1A.rectifierCommutationVoltageDrop.division.y else if eSAC1A.rectifierCommutationVoltageDrop.division.y > 0.433 and eSAC1A.rectifierCommutationVoltageDrop.division.y < 0.75 then sqrt(0.75 - eSAC1A.rectifierCommutationVoltageDrop.division.y ^ 2.0) else if eSAC1A.rectifierCommutationVoltageDrop.division.y >= 0.75 and eSAC1A.rectifierCommutationVoltageDrop.division.y <= 1.0 then 1.732 * (1.0 - eSAC1A.rectifierCommutationVoltageDrop.division.y) else 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_313(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,313};
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
  tmp0 = LessEq(data->localData[0]->realVars[71] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */,0.0);
  tmp13 = (modelica_boolean)tmp0;
  if(tmp13)
  {
    tmp14 = 1.0;
  }
  else
  {
    tmp1 = Greater(data->localData[0]->realVars[71] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */,0.0);
    tmp2 = LessEq(data->localData[0]->realVars[71] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */,0.433);
    tmp11 = (modelica_boolean)(tmp1 && tmp2);
    if(tmp11)
    {
      tmp12 = 1.0 + (-0.577) * (data->localData[0]->realVars[71] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */);
    }
    else
    {
      tmp3 = Greater(data->localData[0]->realVars[71] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */,0.433);
      tmp4 = Less(data->localData[0]->realVars[71] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */,0.75);
      tmp9 = (modelica_boolean)(tmp3 && tmp4);
      if(tmp9)
      {
        tmp5 = data->localData[0]->realVars[71] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */;
        tmp6 = 0.75 - ((tmp5 * tmp5));
        if(!(tmp6 >= 0.0))
        {
          FILE_INFO info = {"",0,0,0,0,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of sqrt(0.75 - eSAC1A.rectifierCommutationVoltageDrop.division.y ^ 2.0) was %g should be >= 0", tmp6);
        }
        tmp10 = sqrt(tmp6);
      }
      else
      {
        tmp7 = GreaterEq(data->localData[0]->realVars[71] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */,0.75);
        tmp8 = LessEq(data->localData[0]->realVars[71] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */,1.0);
        tmp10 = ((tmp7 && tmp8)?(1.732) * (1.0 - data->localData[0]->realVars[71] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */):0.0);
      }
      tmp12 = tmp10;
    }
    tmp14 = tmp12;
  }
  data->localData[0]->realVars[72] /* eSAC1A.rectifierCommutationVoltageDrop.fEX.y variable */ = tmp14;
  TRACE_POP
}

void residualFunc315(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,315};
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
  data->localData[0]->realVars[60] /* eSAC1A.XADIFD variable */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_304(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_305(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_306(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_307(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_308(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_309(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_310(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_311(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_312(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_313(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[3] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */) * (data->localData[0]->realVars[72] /* eSAC1A.rectifierCommutationVoltageDrop.fEX.y variable */) - data->localData[0]->realVars[58] /* eSAC1A.EFD variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS315(NONLINEAR_SYSTEM_DATA* inSysData)
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
void initializeStaticDataNLS315(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for eSAC1A.XADIFD */
  sysData->nominal[i] = data->modelData->realVarsData[60].attribute /* eSAC1A.XADIFD */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[60].attribute /* eSAC1A.XADIFD */.min;
  sysData->max[i++]   = data->modelData->realVarsData[60].attribute /* eSAC1A.XADIFD */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS315(sysData);
}

void getIterationVarsNLS315(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[60] /* eSAC1A.XADIFD variable */;
}


/* inner equations */

/*
equation index: 129
type: SIMPLE_ASSIGN
constantLoad.v = sqrt(pwLine3.vs.re ^ 2.0 + pwLine3.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_129(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,129};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[136] /* pwLine3.vs.re variable */;
  tmp1 = data->localData[0]->realVars[135] /* pwLine3.vs.im variable */;
  data->localData[0]->realVars[55] /* constantLoad.v variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 130
type: SIMPLE_ASSIGN
constantLoad.kI = if constantLoad.v < 0.5 then constantLoad.a2 * constantLoad.b2 * constantLoad.v ^ (-1.0 + constantLoad.b2) * exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_130(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,130};
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
    tmp2 = -1.0 + data->simulationInfo->realParameter[68] /* constantLoad.b2 PARAM */;
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
    tmp9 = data->simulationInfo->realParameter[68] /* constantLoad.b2 PARAM */;
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
    tmp16 = (data->simulationInfo->realParameter[62] /* constantLoad.a2 PARAM */) * ((data->simulationInfo->realParameter[68] /* constantLoad.b2 PARAM */) * ((tmp3) * (exp(((-data->simulationInfo->realParameter[62] /* constantLoad.a2 PARAM */)) * (tmp10)))));
  }
  else
  {
    tmp16 = 1.0;
  }
  data->localData[0]->realVars[51] /* constantLoad.kI variable */ = tmp16;
  TRACE_POP
}
/*
equation index: 131
type: SIMPLE_ASSIGN
constantLoad.kP = if constantLoad.v < constantLoad.PQBRAK then constantLoad.a0 + constantLoad.a1 * cos(constantLoad.v * constantLoad.wp) + constantLoad.b1 * sin(constantLoad.v * constantLoad.wp) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_131(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,131};
  modelica_boolean tmp0;
  tmp0 = Less(data->localData[0]->realVars[55] /* constantLoad.v variable */,data->simulationInfo->realParameter[41] /* constantLoad.PQBRAK PARAM */);
  data->localData[0]->realVars[52] /* constantLoad.kP variable */ = (tmp0?data->simulationInfo->realParameter[60] /* constantLoad.a0 PARAM */ + (data->simulationInfo->realParameter[61] /* constantLoad.a1 PARAM */) * (cos((data->localData[0]->realVars[55] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[81] /* constantLoad.wp PARAM */))) + (data->simulationInfo->realParameter[67] /* constantLoad.b1 PARAM */) * (sin((data->localData[0]->realVars[55] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[81] /* constantLoad.wp PARAM */))):1.0);
  TRACE_POP
}
/*
equation index: 132
type: SIMPLE_ASSIGN
constantLoad.Q = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.im + constantLoad.d_Q) else constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_132(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,132};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  tmp0 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */);
  tmp1 = LessEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[71] /* constantLoad.d_t PARAM */);
  tmp4 = (modelica_boolean)(tmp0 && tmp1);
  if(tmp4)
  {
    tmp2 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[44] /* constantLoad.S_I.im PARAM */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[48] /* constantLoad.S_Y.im PARAM */) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[46] /* constantLoad.S_P.im PARAM */ + data->simulationInfo->realParameter[70] /* constantLoad.d_Q PARAM */);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[44] /* constantLoad.S_I.im PARAM */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[48] /* constantLoad.S_Y.im PARAM */) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[46] /* constantLoad.S_P.im PARAM */);
  }
  data->localData[0]->realVars[49] /* constantLoad.Q variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 133
type: SIMPLE_ASSIGN
constantLoad.P = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.re + constantLoad.d_P) else constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_133(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,133};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  tmp0 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */);
  tmp1 = LessEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[71] /* constantLoad.d_t PARAM */);
  tmp4 = (modelica_boolean)(tmp0 && tmp1);
  if(tmp4)
  {
    tmp2 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[45] /* constantLoad.S_I.re PARAM */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[49] /* constantLoad.S_Y.re PARAM */) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[47] /* constantLoad.S_P.re PARAM */ + data->simulationInfo->realParameter[69] /* constantLoad.d_P PARAM */);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[45] /* constantLoad.S_I.re PARAM */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[49] /* constantLoad.S_Y.re PARAM */) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[47] /* constantLoad.S_P.re PARAM */);
  }
  data->localData[0]->realVars[48] /* constantLoad.P variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 134
type: SIMPLE_ASSIGN
pwLine.is.im = (-gENROE.CoB) * (cos(gENROE.delta) * gENROE.id - sin(gENROE.delta) * gENROE.iq)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_134(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,134};
  data->localData[0]->realVars[115] /* pwLine.is.im variable */ = ((-data->simulationInfo->realParameter[206] /* gENROE.CoB PARAM */)) * ((cos(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[103] /* gENROE.id variable */) - ((sin(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[104] /* gENROE.iq variable */)));
  TRACE_POP
}
/*
equation index: 135
type: SIMPLE_ASSIGN
pwLine.is.re = gENROE.CoB * (sin(gENROE.delta) * gENROE.id + cos(gENROE.delta) * gENROE.iq)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_135(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,135};
  data->localData[0]->realVars[116] /* pwLine.is.re variable */ = (data->simulationInfo->realParameter[206] /* gENROE.CoB PARAM */) * ((sin(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[103] /* gENROE.id variable */) + (cos(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[104] /* gENROE.iq variable */));
  TRACE_POP
}
/*
equation index: 136
type: SIMPLE_ASSIGN
gENROE.PSIq = (-gENROE.PSIppq) - gENROE.Xppq * gENROE.iq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_136(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,136};
  data->localData[0]->realVars[97] /* gENROE.PSIq variable */ = (-data->localData[0]->realVars[96] /* gENROE.PSIppq variable */) - ((data->simulationInfo->realParameter[261] /* gENROE.Xppq PARAM */) * (data->localData[0]->realVars[104] /* gENROE.iq variable */));
  TRACE_POP
}
/*
equation index: 137
type: SIMPLE_ASSIGN
gENROE.ud = (-gENROE.PSIq) - gENROE.R_a * gENROE.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_137(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,137};
  data->localData[0]->realVars[105] /* gENROE.ud variable */ = (-data->localData[0]->realVars[97] /* gENROE.PSIq variable */) - ((data->simulationInfo->realParameter[243] /* gENROE.R_a PARAM */) * (data->localData[0]->realVars[103] /* gENROE.id variable */));
  TRACE_POP
}
/*
equation index: 138
type: SIMPLE_ASSIGN
pwLine.vs.re = sin(gENROE.delta) * gENROE.ud + cos(gENROE.delta) * gENROE.uq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_138(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,138};
  data->localData[0]->realVars[118] /* pwLine.vs.re variable */ = (sin(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[105] /* gENROE.ud variable */) + (cos(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[106] /* gENROE.uq variable */);
  TRACE_POP
}
/*
equation index: 139
type: SIMPLE_ASSIGN
pwLine.vs.im = sin(gENROE.delta) * gENROE.uq - cos(gENROE.delta) * gENROE.ud
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_139(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,139};
  data->localData[0]->realVars[117] /* pwLine.vs.im variable */ = (sin(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[106] /* gENROE.uq variable */) - ((cos(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[105] /* gENROE.ud variable */));
  TRACE_POP
}
/*
equation index: 140
type: SIMPLE_ASSIGN
gENROE.PSId = gENROE.uq + gENROE.R_a * gENROE.iq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_140(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,140};
  data->localData[0]->realVars[93] /* gENROE.PSId variable */ = data->localData[0]->realVars[106] /* gENROE.uq variable */ + (data->simulationInfo->realParameter[243] /* gENROE.R_a PARAM */) * (data->localData[0]->realVars[104] /* gENROE.iq variable */);
  TRACE_POP
}
/*
equation index: 141
type: SIMPLE_ASSIGN
gENROE.PSIppd = gENROE.PSId + gENROE.Xppd * gENROE.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_141(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,141};
  data->localData[0]->realVars[95] /* gENROE.PSIppd variable */ = data->localData[0]->realVars[93] /* gENROE.PSId variable */ + (data->simulationInfo->realParameter[260] /* gENROE.Xppd PARAM */) * (data->localData[0]->realVars[103] /* gENROE.id variable */);
  TRACE_POP
}
/*
equation index: 142
type: SIMPLE_ASSIGN
gENROE.PSIpp = sqrt(gENROE.PSIppd ^ 2.0 + gENROE.PSIppq ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_142(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,142};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[95] /* gENROE.PSIppd variable */;
  tmp1 = data->localData[0]->realVars[96] /* gENROE.PSIppq variable */;
  data->localData[0]->realVars[94] /* gENROE.PSIpp variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 143
type: SIMPLE_ASSIGN
gENROE.Epd = (gENROE.XaqIlq - (((gENROE.Xpq - gENROE.Xl) * gENROE.iq - gENROE.PSIkq) * gENROE.K1q + gENROE.iq * (gENROE.Xpq - gENROE.Xq) + OpenIPSL.NonElectrical.Functions.SE_exp(gENROE.PSIpp, gENROE.S10, gENROE.S12, 1.0, 1.2) * gENROE.PSIppq * (gENROE.Xq - gENROE.Xl) / (gENROE.Xd - gENROE.Xl))) / (1.0 + gENROE.K1q)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_143(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,143};
  data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */ = DIVISION_SIM(data->localData[0]->realVars[100] /* gENROE.XaqIlq variable */ - (((data->simulationInfo->realParameter[262] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[257] /* gENROE.Xl PARAM */) * (data->localData[0]->realVars[104] /* gENROE.iq variable */) - data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */) * (data->simulationInfo->realParameter[221] /* gENROE.K1q PARAM */) + (data->localData[0]->realVars[104] /* gENROE.iq variable */) * (data->simulationInfo->realParameter[262] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[263] /* gENROE.Xq PARAM */) + (omc_OpenIPSL_NonElectrical_Functions_SE__exp(threadData, data->localData[0]->realVars[94] /* gENROE.PSIpp variable */, data->simulationInfo->realParameter[246] /* gENROE.S10 PARAM */, data->simulationInfo->realParameter[247] /* gENROE.S12 PARAM */, 1.0, 1.2)) * ((data->localData[0]->realVars[96] /* gENROE.PSIppq variable */) * (DIVISION_SIM(data->simulationInfo->realParameter[263] /* gENROE.Xq PARAM */ - data->simulationInfo->realParameter[257] /* gENROE.Xl PARAM */,data->simulationInfo->realParameter[256] /* gENROE.Xd PARAM */ - data->simulationInfo->realParameter[257] /* gENROE.Xl PARAM */,"gENROE.Xd - gENROE.Xl",equationIndexes)))),1.0 + data->simulationInfo->realParameter[221] /* gENROE.K1q PARAM */,"1.0 + gENROE.K1q",equationIndexes);
  TRACE_POP
}
/*
equation index: 144
type: SIMPLE_ASSIGN
gENROE.Epq = (eSAC1A.XADIFD - (((gENROE.Xl - gENROE.Xpd) * gENROE.id - gENROE.PSIkd) * gENROE.K1d + gENROE.id * (gENROE.Xd - gENROE.Xpd) + OpenIPSL.NonElectrical.Functions.SE_exp(gENROE.PSIpp, gENROE.S10, gENROE.S12, 1.0, 1.2) * gENROE.PSIppd)) / (1.0 + gENROE.K1d)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_144(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,144};
  data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ = DIVISION_SIM(data->localData[0]->realVars[60] /* eSAC1A.XADIFD variable */ - (((data->simulationInfo->realParameter[257] /* gENROE.Xl PARAM */ - data->simulationInfo->realParameter[258] /* gENROE.Xpd PARAM */) * (data->localData[0]->realVars[103] /* gENROE.id variable */) - data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */) * (data->simulationInfo->realParameter[220] /* gENROE.K1d PARAM */) + (data->localData[0]->realVars[103] /* gENROE.id variable */) * (data->simulationInfo->realParameter[256] /* gENROE.Xd PARAM */ - data->simulationInfo->realParameter[258] /* gENROE.Xpd PARAM */) + (omc_OpenIPSL_NonElectrical_Functions_SE__exp(threadData, data->localData[0]->realVars[94] /* gENROE.PSIpp variable */, data->simulationInfo->realParameter[246] /* gENROE.S10 PARAM */, data->simulationInfo->realParameter[247] /* gENROE.S12 PARAM */, 1.0, 1.2)) * (data->localData[0]->realVars[95] /* gENROE.PSIppd variable */)),1.0 + data->simulationInfo->realParameter[220] /* gENROE.K1d PARAM */,"1.0 + gENROE.K1d",equationIndexes);
  TRACE_POP
}
/*
equation index: 145
type: SIMPLE_ASSIGN
gENCLS.p.ir = (-gENCLS.CoB) * (sin(gENCLS.delta) * gENCLS.id + cos(gENCLS.delta) * gENCLS.iq)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_145(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,145};
  data->localData[0]->realVars[87] /* gENCLS.p.ir variable */ = ((-data->simulationInfo->realParameter[180] /* gENCLS.CoB PARAM */)) * ((sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[83] /* gENCLS.id variable */) + (cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[84] /* gENCLS.iq variable */));
  TRACE_POP
}
/*
equation index: 146
type: SIMPLE_ASSIGN
gENCLS.p.ii = gENCLS.CoB * (cos(gENCLS.delta) * gENCLS.id - sin(gENCLS.delta) * gENCLS.iq)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_146(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,146};
  data->localData[0]->realVars[86] /* gENCLS.p.ii variable */ = (data->simulationInfo->realParameter[180] /* gENCLS.CoB PARAM */) * ((cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[83] /* gENCLS.id variable */) - ((sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[84] /* gENCLS.iq variable */)));
  TRACE_POP
}
/*
equation index: 147
type: SIMPLE_ASSIGN
gENCLS.vq = gENCLS.eq + (-gENCLS.R_a) * gENCLS.iq - gENCLS.X_d * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_147(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,147};
  data->localData[0]->realVars[89] /* gENCLS.vq variable */ = data->localData[0]->realVars[6] /* gENCLS.eq STATE(1) */ + ((-data->simulationInfo->realParameter[186] /* gENCLS.R_a PARAM */)) * (data->localData[0]->realVars[84] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[189] /* gENCLS.X_d PARAM */) * (data->localData[0]->realVars[83] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 148
type: SIMPLE_ASSIGN
gENCLS.vd = gENCLS.X_d * gENCLS.iq - gENCLS.R_a * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_148(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,148};
  data->localData[0]->realVars[88] /* gENCLS.vd variable */ = (data->simulationInfo->realParameter[189] /* gENCLS.X_d PARAM */) * (data->localData[0]->realVars[84] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[186] /* gENCLS.R_a PARAM */) * (data->localData[0]->realVars[83] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 149
type: SIMPLE_ASSIGN
pwLine4.ir.im = (-gENCLS.p.ii) - pwLine1.ir.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_149(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,149};
  data->localData[0]->realVars[141] /* pwLine4.ir.im variable */ = (-data->localData[0]->realVars[86] /* gENCLS.p.ii variable */) - data->localData[0]->realVars[123] /* pwLine1.ir.im variable */;
  TRACE_POP
}
/*
equation index: 150
type: SIMPLE_ASSIGN
pwLine1.ir.re = (-gENCLS.p.ir) - pwLine4.ir.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_150(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,150};
  data->localData[0]->realVars[124] /* pwLine1.ir.re variable */ = (-data->localData[0]->realVars[87] /* gENCLS.p.ir variable */) - data->localData[0]->realVars[142] /* pwLine4.ir.re variable */;
  TRACE_POP
}
/*
equation index: 151
type: SIMPLE_ASSIGN
pwFault.p.ii = (-pwLine4.is.im) - pwLine3.ir.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_151(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,151};
  data->localData[0]->realVars[107] /* pwFault.p.ii variable */ = (-data->localData[0]->realVars[143] /* pwLine4.is.im variable */) - data->localData[0]->realVars[131] /* pwLine3.ir.im variable */;
  TRACE_POP
}
/*
equation index: 152
type: SIMPLE_ASSIGN
pwFault.p.ir = (-pwLine4.is.re) - pwLine3.ir.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_152(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,152};
  data->localData[0]->realVars[108] /* pwFault.p.ir variable */ = (-data->localData[0]->realVars[144] /* pwLine4.is.re variable */) - data->localData[0]->realVars[132] /* pwLine3.ir.re variable */;
  TRACE_POP
}
/*
equation index: 153
type: SIMPLE_ASSIGN
constantLoad.p.ii = (-pwLine3.is.im) - pwLine1.is.im - pwLine.ir.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_153(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,153};
  data->localData[0]->realVars[53] /* constantLoad.p.ii variable */ = (-data->localData[0]->realVars[133] /* pwLine3.is.im variable */) - data->localData[0]->realVars[125] /* pwLine1.is.im variable */ - data->localData[0]->realVars[113] /* pwLine.ir.im variable */;
  TRACE_POP
}
/*
equation index: 154
type: SIMPLE_ASSIGN
pwLine.ir.re = (-constantLoad.p.ir) - pwLine3.is.re - pwLine1.is.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_154(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,154};
  data->localData[0]->realVars[114] /* pwLine.ir.re variable */ = (-data->localData[0]->realVars[54] /* constantLoad.p.ir variable */) - data->localData[0]->realVars[134] /* pwLine3.is.re variable */ - data->localData[0]->realVars[126] /* pwLine1.is.re variable */;
  TRACE_POP
}

void residualFunc181(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,181};
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
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_boolean tmp11;
  modelica_real tmp12;
  modelica_boolean tmp13;
  modelica_real tmp14;
  modelica_boolean tmp15;
  modelica_real tmp16;
  modelica_boolean tmp17;
  modelica_boolean tmp18;
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
  for (i=0; i<26; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<26; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[54] /* constantLoad.p.ir variable */ = xloc[0];
  data->localData[0]->realVars[126] /* pwLine1.is.re variable */ = xloc[1];
  data->localData[0]->realVars[113] /* pwLine.ir.im variable */ = xloc[2];
  data->localData[0]->realVars[125] /* pwLine1.is.im variable */ = xloc[3];
  data->localData[0]->realVars[144] /* pwLine4.is.re variable */ = xloc[4];
  data->localData[0]->realVars[132] /* pwLine3.ir.re variable */ = xloc[5];
  data->localData[0]->realVars[134] /* pwLine3.is.re variable */ = xloc[6];
  data->localData[0]->realVars[133] /* pwLine3.is.im variable */ = xloc[7];
  data->localData[0]->realVars[131] /* pwLine3.ir.im variable */ = xloc[8];
  data->localData[0]->realVars[143] /* pwLine4.is.im variable */ = xloc[9];
  data->localData[0]->realVars[142] /* pwLine4.ir.re variable */ = xloc[10];
  data->localData[0]->realVars[123] /* pwLine1.ir.im variable */ = xloc[11];
  data->localData[0]->realVars[84] /* gENCLS.iq variable */ = xloc[12];
  data->localData[0]->realVars[83] /* gENCLS.id variable */ = xloc[13];
  data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */ = xloc[14];
  data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */ = xloc[15];
  data->localData[0]->realVars[106] /* gENROE.uq variable */ = xloc[16];
  data->localData[0]->realVars[96] /* gENROE.PSIppq variable */ = xloc[17];
  data->localData[0]->realVars[104] /* gENROE.iq variable */ = xloc[18];
  data->localData[0]->realVars[103] /* gENROE.id variable */ = xloc[19];
  data->localData[0]->realVars[145] /* pwLine4.vr.im variable */ = xloc[20];
  data->localData[0]->realVars[146] /* pwLine4.vr.re variable */ = xloc[21];
  data->localData[0]->realVars[136] /* pwLine3.vs.re variable */ = xloc[22];
  data->localData[0]->realVars[135] /* pwLine3.vs.im variable */ = xloc[23];
  data->localData[0]->realVars[148] /* pwLine4.vs.re variable */ = xloc[24];
  data->localData[0]->realVars[147] /* pwLine4.vs.im variable */ = xloc[25];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_129(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_130(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_131(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_132(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_133(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_134(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_135(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_136(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_137(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_138(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_139(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_140(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_141(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_142(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_143(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_144(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_145(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_146(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_147(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_148(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_149(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_150(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_151(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_152(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_153(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_154(data, threadData);
  /* body */
  tmp0 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[337] /* pwLine4.t1 PARAM */);
  tmp1 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[338] /* pwLine4.t2 PARAM */);
  res[0] = ((tmp0 && tmp1)?data->localData[0]->realVars[143] /* pwLine4.is.im variable */:data->localData[0]->realVars[147] /* pwLine4.vs.im variable */ - data->localData[0]->realVars[145] /* pwLine4.vr.im variable */ - ((data->simulationInfo->realParameter[336] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[143] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[148] /* pwLine4.vs.re variable */)) * (data->simulationInfo->realParameter[333] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[147] /* pwLine4.vs.im variable */) * (data->simulationInfo->realParameter[334] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[335] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[144] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[147] /* pwLine4.vs.im variable */) * (data->simulationInfo->realParameter[333] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[148] /* pwLine4.vs.re variable */) * (data->simulationInfo->realParameter[334] /* pwLine4.Y.re PARAM */)))));

  tmp2 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[326] /* pwLine3.t1 PARAM */);
  tmp3 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[327] /* pwLine3.t2 PARAM */);
  res[1] = ((tmp2 && tmp3)?data->localData[0]->realVars[134] /* pwLine3.is.re variable */:data->localData[0]->realVars[136] /* pwLine3.vs.re variable */ - data->localData[0]->realVars[148] /* pwLine4.vs.re variable */ - ((data->simulationInfo->realParameter[325] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[134] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[135] /* pwLine3.vs.im variable */) * (data->simulationInfo->realParameter[322] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[136] /* pwLine3.vs.re variable */) * (data->simulationInfo->realParameter[323] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[324] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[133] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[136] /* pwLine3.vs.re variable */)) * (data->simulationInfo->realParameter[322] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[135] /* pwLine3.vs.im variable */) * (data->simulationInfo->realParameter[323] /* pwLine3.Y.re PARAM */))))));

  tmp4 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[326] /* pwLine3.t1 PARAM */);
  tmp5 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[327] /* pwLine3.t2 PARAM */);
  res[2] = ((tmp4 && tmp5)?data->localData[0]->realVars[133] /* pwLine3.is.im variable */:data->localData[0]->realVars[135] /* pwLine3.vs.im variable */ - data->localData[0]->realVars[147] /* pwLine4.vs.im variable */ - ((data->simulationInfo->realParameter[325] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[133] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[136] /* pwLine3.vs.re variable */)) * (data->simulationInfo->realParameter[322] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[135] /* pwLine3.vs.im variable */) * (data->simulationInfo->realParameter[323] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[324] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[134] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[135] /* pwLine3.vs.im variable */) * (data->simulationInfo->realParameter[322] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[136] /* pwLine3.vs.re variable */) * (data->simulationInfo->realParameter[323] /* pwLine3.Y.re PARAM */)))));

  tmp6 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[293] /* pwFault.t1 PARAM */);
  tmp15 = (modelica_boolean)tmp6;
  if(tmp15)
  {
    tmp16 = data->localData[0]->realVars[107] /* pwFault.p.ii variable */;
  }
  else
  {
    tmp7 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[294] /* pwFault.t2 PARAM */);
    tmp13 = (modelica_boolean)(tmp7 && data->simulationInfo->booleanParameter[68] /* pwFault.ground PARAM */);
    if(tmp13)
    {
      tmp14 = data->localData[0]->realVars[148] /* pwLine4.vs.re variable */ - 1e-10;
    }
    else
    {
      tmp8 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[294] /* pwFault.t2 PARAM */);
      tmp11 = (modelica_boolean)tmp8;
      if(tmp11)
      {
        tmp9 = data->simulationInfo->realParameter[292] /* pwFault.X PARAM */;
        tmp10 = data->simulationInfo->realParameter[291] /* pwFault.R PARAM */;
        tmp12 = data->localData[0]->realVars[107] /* pwFault.p.ii variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[291] /* pwFault.R PARAM */) * (data->localData[0]->realVars[147] /* pwLine4.vs.im variable */) - ((data->simulationInfo->realParameter[292] /* pwFault.X PARAM */) * (data->localData[0]->realVars[148] /* pwLine4.vs.re variable */)),(tmp9 * tmp9) + (tmp10 * tmp10),"pwFault.X ^ 2.0 + pwFault.R ^ 2.0",equationIndexes));
      }
      else
      {
        tmp12 = data->localData[0]->realVars[107] /* pwFault.p.ii variable */;
      }
      tmp14 = tmp12;
    }
    tmp16 = tmp14;
  }
  res[3] = tmp16;

  tmp17 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[326] /* pwLine3.t1 PARAM */);
  tmp18 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[327] /* pwLine3.t2 PARAM */);
  res[4] = ((tmp17 && tmp18)?data->localData[0]->realVars[132] /* pwLine3.ir.re variable */:data->localData[0]->realVars[148] /* pwLine4.vs.re variable */ - data->localData[0]->realVars[136] /* pwLine3.vs.re variable */ - ((data->simulationInfo->realParameter[325] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[132] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[147] /* pwLine4.vs.im variable */) * (data->simulationInfo->realParameter[322] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[148] /* pwLine4.vs.re variable */) * (data->simulationInfo->realParameter[323] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[324] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[131] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[148] /* pwLine4.vs.re variable */)) * (data->simulationInfo->realParameter[322] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[147] /* pwLine4.vs.im variable */) * (data->simulationInfo->realParameter[323] /* pwLine3.Y.re PARAM */))))));

  tmp19 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[326] /* pwLine3.t1 PARAM */);
  tmp20 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[327] /* pwLine3.t2 PARAM */);
  res[5] = ((tmp19 && tmp20)?data->localData[0]->realVars[131] /* pwLine3.ir.im variable */:data->localData[0]->realVars[147] /* pwLine4.vs.im variable */ - data->localData[0]->realVars[135] /* pwLine3.vs.im variable */ - ((data->simulationInfo->realParameter[325] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[131] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[148] /* pwLine4.vs.re variable */)) * (data->simulationInfo->realParameter[322] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[147] /* pwLine4.vs.im variable */) * (data->simulationInfo->realParameter[323] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[324] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[132] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[147] /* pwLine4.vs.im variable */) * (data->simulationInfo->realParameter[322] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[148] /* pwLine4.vs.re variable */) * (data->simulationInfo->realParameter[323] /* pwLine3.Y.re PARAM */)))));

  tmp21 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[293] /* pwFault.t1 PARAM */);
  tmp30 = (modelica_boolean)tmp21;
  if(tmp30)
  {
    tmp31 = data->localData[0]->realVars[108] /* pwFault.p.ir variable */;
  }
  else
  {
    tmp22 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[294] /* pwFault.t2 PARAM */);
    tmp28 = (modelica_boolean)(tmp22 && data->simulationInfo->booleanParameter[68] /* pwFault.ground PARAM */);
    if(tmp28)
    {
      tmp29 = data->localData[0]->realVars[147] /* pwLine4.vs.im variable */;
    }
    else
    {
      tmp23 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[294] /* pwFault.t2 PARAM */);
      tmp26 = (modelica_boolean)tmp23;
      if(tmp26)
      {
        tmp24 = data->simulationInfo->realParameter[291] /* pwFault.R PARAM */;
        tmp25 = data->simulationInfo->realParameter[292] /* pwFault.X PARAM */;
        tmp27 = data->localData[0]->realVars[108] /* pwFault.p.ir variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[291] /* pwFault.R PARAM */) * (data->localData[0]->realVars[148] /* pwLine4.vs.re variable */) + (data->simulationInfo->realParameter[292] /* pwFault.X PARAM */) * (data->localData[0]->realVars[147] /* pwLine4.vs.im variable */),(tmp24 * tmp24) + (tmp25 * tmp25),"pwFault.R ^ 2.0 + pwFault.X ^ 2.0",equationIndexes));
      }
      else
      {
        tmp27 = data->localData[0]->realVars[108] /* pwFault.p.ir variable */;
      }
      tmp29 = tmp27;
    }
    tmp31 = tmp29;
  }
  res[6] = tmp31;

  tmp32 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[337] /* pwLine4.t1 PARAM */);
  tmp33 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[338] /* pwLine4.t2 PARAM */);
  res[7] = ((tmp32 && tmp33)?data->localData[0]->realVars[144] /* pwLine4.is.re variable */:data->localData[0]->realVars[148] /* pwLine4.vs.re variable */ - data->localData[0]->realVars[146] /* pwLine4.vr.re variable */ - ((data->simulationInfo->realParameter[336] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[144] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[147] /* pwLine4.vs.im variable */) * (data->simulationInfo->realParameter[333] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[148] /* pwLine4.vs.re variable */) * (data->simulationInfo->realParameter[334] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[335] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[143] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[148] /* pwLine4.vs.re variable */)) * (data->simulationInfo->realParameter[333] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[147] /* pwLine4.vs.im variable */) * (data->simulationInfo->realParameter[334] /* pwLine4.Y.re PARAM */))))));

  tmp34 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[337] /* pwLine4.t1 PARAM */);
  tmp35 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[338] /* pwLine4.t2 PARAM */);
  res[8] = ((tmp34 && tmp35)?data->localData[0]->realVars[142] /* pwLine4.ir.re variable */:data->localData[0]->realVars[146] /* pwLine4.vr.re variable */ - data->localData[0]->realVars[148] /* pwLine4.vs.re variable */ - ((data->simulationInfo->realParameter[336] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[142] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[145] /* pwLine4.vr.im variable */) * (data->simulationInfo->realParameter[333] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[146] /* pwLine4.vr.re variable */) * (data->simulationInfo->realParameter[334] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[335] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[141] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[146] /* pwLine4.vr.re variable */)) * (data->simulationInfo->realParameter[333] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[145] /* pwLine4.vr.im variable */) * (data->simulationInfo->realParameter[334] /* pwLine4.Y.re PARAM */))))));

  tmp36 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[315] /* pwLine1.t1 PARAM */);
  tmp37 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[316] /* pwLine1.t2 PARAM */);
  res[9] = ((tmp36 && tmp37)?data->localData[0]->realVars[126] /* pwLine1.is.re variable */:data->localData[0]->realVars[136] /* pwLine3.vs.re variable */ - data->localData[0]->realVars[146] /* pwLine4.vr.re variable */ - ((data->simulationInfo->realParameter[314] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[126] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[135] /* pwLine3.vs.im variable */) * (data->simulationInfo->realParameter[311] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[136] /* pwLine3.vs.re variable */) * (data->simulationInfo->realParameter[312] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[313] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[125] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[136] /* pwLine3.vs.re variable */)) * (data->simulationInfo->realParameter[311] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[135] /* pwLine3.vs.im variable */) * (data->simulationInfo->realParameter[312] /* pwLine1.Y.re PARAM */))))));

  tmp38 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[315] /* pwLine1.t1 PARAM */);
  tmp39 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[316] /* pwLine1.t2 PARAM */);
  res[10] = ((tmp38 && tmp39)?data->localData[0]->realVars[125] /* pwLine1.is.im variable */:data->localData[0]->realVars[135] /* pwLine3.vs.im variable */ - data->localData[0]->realVars[145] /* pwLine4.vr.im variable */ - ((data->simulationInfo->realParameter[314] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[125] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[136] /* pwLine3.vs.re variable */)) * (data->simulationInfo->realParameter[311] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[135] /* pwLine3.vs.im variable */) * (data->simulationInfo->realParameter[312] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[313] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[126] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[135] /* pwLine3.vs.im variable */) * (data->simulationInfo->realParameter[311] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[136] /* pwLine3.vs.re variable */) * (data->simulationInfo->realParameter[312] /* pwLine1.Y.re PARAM */)))));

  tmp40 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[315] /* pwLine1.t1 PARAM */);
  tmp41 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[316] /* pwLine1.t2 PARAM */);
  res[11] = ((tmp40 && tmp41)?data->localData[0]->realVars[124] /* pwLine1.ir.re variable */:data->localData[0]->realVars[146] /* pwLine4.vr.re variable */ - data->localData[0]->realVars[136] /* pwLine3.vs.re variable */ - ((data->simulationInfo->realParameter[314] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[124] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[145] /* pwLine4.vr.im variable */) * (data->simulationInfo->realParameter[311] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[146] /* pwLine4.vr.re variable */) * (data->simulationInfo->realParameter[312] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[313] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[123] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[146] /* pwLine4.vr.re variable */)) * (data->simulationInfo->realParameter[311] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[145] /* pwLine4.vr.im variable */) * (data->simulationInfo->realParameter[312] /* pwLine1.Y.re PARAM */))))));

  res[12] = (sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[89] /* gENCLS.vq variable */) + ((-cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */))) * (data->localData[0]->realVars[88] /* gENCLS.vd variable */) - data->localData[0]->realVars[145] /* pwLine4.vr.im variable */;

  res[13] = (cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[89] /* gENCLS.vq variable */) + (sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[88] /* gENCLS.vd variable */) - data->localData[0]->realVars[146] /* pwLine4.vr.re variable */;

  tmp42 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[337] /* pwLine4.t1 PARAM */);
  tmp43 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[338] /* pwLine4.t2 PARAM */);
  res[14] = ((tmp42 && tmp43)?data->localData[0]->realVars[141] /* pwLine4.ir.im variable */:data->localData[0]->realVars[145] /* pwLine4.vr.im variable */ - data->localData[0]->realVars[147] /* pwLine4.vs.im variable */ - ((data->simulationInfo->realParameter[336] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[141] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[146] /* pwLine4.vr.re variable */)) * (data->simulationInfo->realParameter[333] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[145] /* pwLine4.vr.im variable */) * (data->simulationInfo->realParameter[334] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[335] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[142] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[145] /* pwLine4.vr.im variable */) * (data->simulationInfo->realParameter[333] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[146] /* pwLine4.vr.re variable */) * (data->simulationInfo->realParameter[334] /* pwLine4.Y.re PARAM */)))));

  tmp44 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[315] /* pwLine1.t1 PARAM */);
  tmp45 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[316] /* pwLine1.t2 PARAM */);
  res[15] = ((tmp44 && tmp45)?data->localData[0]->realVars[123] /* pwLine1.ir.im variable */:data->localData[0]->realVars[145] /* pwLine4.vr.im variable */ - data->localData[0]->realVars[135] /* pwLine3.vs.im variable */ - ((data->simulationInfo->realParameter[314] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[123] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[146] /* pwLine4.vr.re variable */)) * (data->simulationInfo->realParameter[311] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[145] /* pwLine4.vr.im variable */) * (data->simulationInfo->realParameter[312] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[313] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[124] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[145] /* pwLine4.vr.im variable */) * (data->simulationInfo->realParameter[311] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[146] /* pwLine4.vr.re variable */) * (data->simulationInfo->realParameter[312] /* pwLine1.Y.re PARAM */)))));

  res[16] = data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ + (data->simulationInfo->realParameter[257] /* gENROE.Xl PARAM */ - data->simulationInfo->realParameter[258] /* gENROE.Xpd PARAM */) * (data->localData[0]->realVars[103] /* gENROE.id variable */) + (-data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */) - ((data->localData[0]->realVars[22] /* der(gENROE.PSIkd) STATE_DER */) * (data->simulationInfo->realParameter[250] /* gENROE.Tppd0 PARAM */));

  res[17] = (data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */) * (data->simulationInfo->realParameter[226] /* gENROE.K4d PARAM */) + (data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */) * (data->simulationInfo->realParameter[224] /* gENROE.K3d PARAM */) - data->localData[0]->realVars[95] /* gENROE.PSIppd variable */;

  res[18] = data->localData[0]->realVars[96] /* gENROE.PSIppq variable */ - ((data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */) * (data->simulationInfo->realParameter[225] /* gENROE.K3q PARAM */)) - ((data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */) * (data->simulationInfo->realParameter[227] /* gENROE.K4q PARAM */));

  res[19] = data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */ + (data->simulationInfo->realParameter[262] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[257] /* gENROE.Xl PARAM */) * (data->localData[0]->realVars[104] /* gENROE.iq variable */) + (-data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */) - ((data->localData[0]->realVars[23] /* der(gENROE.PSIkq) STATE_DER */) * (data->simulationInfo->realParameter[251] /* gENROE.Tppq0 PARAM */));

  tmp46 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[304] /* pwLine.t1 PARAM */);
  tmp47 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[305] /* pwLine.t2 PARAM */);
  res[20] = ((tmp46 && tmp47)?data->localData[0]->realVars[116] /* pwLine.is.re variable */:data->localData[0]->realVars[118] /* pwLine.vs.re variable */ - data->localData[0]->realVars[136] /* pwLine3.vs.re variable */ - ((data->simulationInfo->realParameter[303] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[116] /* pwLine.is.re variable */ + (data->localData[0]->realVars[117] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[300] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[118] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[301] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[302] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[115] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[118] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[300] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[117] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[301] /* pwLine.Y.re PARAM */))))));

  tmp48 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[304] /* pwLine.t1 PARAM */);
  tmp49 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[305] /* pwLine.t2 PARAM */);
  res[21] = ((tmp48 && tmp49)?data->localData[0]->realVars[115] /* pwLine.is.im variable */:data->localData[0]->realVars[117] /* pwLine.vs.im variable */ - data->localData[0]->realVars[135] /* pwLine3.vs.im variable */ - ((data->simulationInfo->realParameter[303] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[115] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[118] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[300] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[117] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[301] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[302] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[116] /* pwLine.is.re variable */ + (data->localData[0]->realVars[117] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[300] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[118] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[301] /* pwLine.Y.re PARAM */)))));

  tmp50 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[304] /* pwLine.t1 PARAM */);
  tmp51 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[305] /* pwLine.t2 PARAM */);
  res[22] = ((tmp50 && tmp51)?data->localData[0]->realVars[114] /* pwLine.ir.re variable */:data->localData[0]->realVars[136] /* pwLine3.vs.re variable */ - data->localData[0]->realVars[118] /* pwLine.vs.re variable */ - ((data->simulationInfo->realParameter[303] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[114] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[135] /* pwLine3.vs.im variable */) * (data->simulationInfo->realParameter[300] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[136] /* pwLine3.vs.re variable */) * (data->simulationInfo->realParameter[301] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[302] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[113] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[136] /* pwLine3.vs.re variable */)) * (data->simulationInfo->realParameter[300] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[135] /* pwLine3.vs.im variable */) * (data->simulationInfo->realParameter[301] /* pwLine.Y.re PARAM */))))));

  res[23] = (data->localData[0]->realVars[135] /* pwLine3.vs.im variable */) * (data->localData[0]->realVars[54] /* constantLoad.p.ir variable */) + ((-data->localData[0]->realVars[136] /* pwLine3.vs.re variable */)) * (data->localData[0]->realVars[53] /* constantLoad.p.ii variable */) - data->localData[0]->realVars[49] /* constantLoad.Q variable */;

  tmp52 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[304] /* pwLine.t1 PARAM */);
  tmp53 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[305] /* pwLine.t2 PARAM */);
  res[24] = ((tmp52 && tmp53)?data->localData[0]->realVars[113] /* pwLine.ir.im variable */:data->localData[0]->realVars[135] /* pwLine3.vs.im variable */ - data->localData[0]->realVars[117] /* pwLine.vs.im variable */ - ((data->simulationInfo->realParameter[303] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[113] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[136] /* pwLine3.vs.re variable */)) * (data->simulationInfo->realParameter[300] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[135] /* pwLine3.vs.im variable */) * (data->simulationInfo->realParameter[301] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[302] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[114] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[135] /* pwLine3.vs.im variable */) * (data->simulationInfo->realParameter[300] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[136] /* pwLine3.vs.re variable */) * (data->simulationInfo->realParameter[301] /* pwLine.Y.re PARAM */)))));

  res[25] = (data->localData[0]->realVars[135] /* pwLine3.vs.im variable */) * (data->localData[0]->realVars[53] /* constantLoad.p.ii variable */) + (data->localData[0]->realVars[136] /* pwLine3.vs.re variable */) * (data->localData[0]->realVars[54] /* constantLoad.p.ir variable */) - data->localData[0]->realVars[48] /* constantLoad.P variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS181(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+26] = {0,4,4,4,4,3,3,4,4,3,3,4,4,6,6,2,2,8,8,8,8,7,7,11,11,8,8};
  const int rowIndex[144] = {22,23,24,25,9,10,22,24,22,23,24,25,9,10,23,25,0,6,7,4,5,6,1,2,22,24,1,2,23,25,3,4,5,0,3,7,8,11,14,15,8,11,14,15,8,11,12,13,14,15,8,11,12,13,14,15,16,17,18,19,16,17,18,19,20,21,22,24,16,17,18,19,20,21,22,24,16,17,18,19,20,21,22,24,16,17,18,19,20,21,22,24,0,8,10,11,12,14,15,7,8,9,11,13,14,15,1,2,4,9,10,11,20,22,23,24,25,1,2,5,9,10,15,21,22,23,24,25,0,1,3,4,5,6,7,8,0,2,3,4,5,6,7,14};
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
  inSysData->sparsePattern->colorCols[23] = 1;
  inSysData->sparsePattern->colorCols[22] = 2;
  inSysData->sparsePattern->colorCols[19] = 3;
  inSysData->sparsePattern->colorCols[25] = 3;
  inSysData->sparsePattern->colorCols[18] = 4;
  inSysData->sparsePattern->colorCols[24] = 4;
  inSysData->sparsePattern->colorCols[17] = 5;
  inSysData->sparsePattern->colorCols[21] = 5;
  inSysData->sparsePattern->colorCols[16] = 6;
  inSysData->sparsePattern->colorCols[20] = 6;
  inSysData->sparsePattern->colorCols[3] = 7;
  inSysData->sparsePattern->colorCols[6] = 7;
  inSysData->sparsePattern->colorCols[13] = 7;
  inSysData->sparsePattern->colorCols[2] = 8;
  inSysData->sparsePattern->colorCols[12] = 8;
  inSysData->sparsePattern->colorCols[1] = 9;
  inSysData->sparsePattern->colorCols[5] = 9;
  inSysData->sparsePattern->colorCols[7] = 9;
  inSysData->sparsePattern->colorCols[9] = 9;
  inSysData->sparsePattern->colorCols[11] = 9;
  inSysData->sparsePattern->colorCols[0] = 10;
  inSysData->sparsePattern->colorCols[4] = 10;
  inSysData->sparsePattern->colorCols[8] = 10;
  inSysData->sparsePattern->colorCols[10] = 10;
  inSysData->sparsePattern->colorCols[14] = 10;
  inSysData->sparsePattern->colorCols[15] = 10;
}
void initializeStaticDataNLS181(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for constantLoad.p.ir */
  sysData->nominal[i] = data->modelData->realVarsData[54].attribute /* constantLoad.p.ir */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[54].attribute /* constantLoad.p.ir */.min;
  sysData->max[i++]   = data->modelData->realVarsData[54].attribute /* constantLoad.p.ir */.max;
  /* static nls data for pwLine1.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[126].attribute /* pwLine1.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[126].attribute /* pwLine1.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[126].attribute /* pwLine1.is.re */.max;
  /* static nls data for pwLine.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[113].attribute /* pwLine.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[113].attribute /* pwLine.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[113].attribute /* pwLine.ir.im */.max;
  /* static nls data for pwLine1.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[125].attribute /* pwLine1.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[125].attribute /* pwLine1.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[125].attribute /* pwLine1.is.im */.max;
  /* static nls data for pwLine4.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[144].attribute /* pwLine4.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[144].attribute /* pwLine4.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[144].attribute /* pwLine4.is.re */.max;
  /* static nls data for pwLine3.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[132].attribute /* pwLine3.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[132].attribute /* pwLine3.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[132].attribute /* pwLine3.ir.re */.max;
  /* static nls data for pwLine3.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[134].attribute /* pwLine3.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[134].attribute /* pwLine3.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[134].attribute /* pwLine3.is.re */.max;
  /* static nls data for pwLine3.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[133].attribute /* pwLine3.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[133].attribute /* pwLine3.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[133].attribute /* pwLine3.is.im */.max;
  /* static nls data for pwLine3.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[131].attribute /* pwLine3.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[131].attribute /* pwLine3.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[131].attribute /* pwLine3.ir.im */.max;
  /* static nls data for pwLine4.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[143].attribute /* pwLine4.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[143].attribute /* pwLine4.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[143].attribute /* pwLine4.is.im */.max;
  /* static nls data for pwLine4.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[142].attribute /* pwLine4.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[142].attribute /* pwLine4.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[142].attribute /* pwLine4.ir.re */.max;
  /* static nls data for pwLine1.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[123].attribute /* pwLine1.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[123].attribute /* pwLine1.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[123].attribute /* pwLine1.ir.im */.max;
  /* static nls data for gENCLS.iq */
  sysData->nominal[i] = data->modelData->realVarsData[84].attribute /* gENCLS.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[84].attribute /* gENCLS.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[84].attribute /* gENCLS.iq */.max;
  /* static nls data for gENCLS.id */
  sysData->nominal[i] = data->modelData->realVarsData[83].attribute /* gENCLS.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[83].attribute /* gENCLS.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[83].attribute /* gENCLS.id */.max;
  /* static nls data for gENROE.PSIkd */
  sysData->nominal[i] = data->modelData->realVarsData[9].attribute /* gENROE.PSIkd */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[9].attribute /* gENROE.PSIkd */.min;
  sysData->max[i++]   = data->modelData->realVarsData[9].attribute /* gENROE.PSIkd */.max;
  /* static nls data for gENROE.PSIkq */
  sysData->nominal[i] = data->modelData->realVarsData[10].attribute /* gENROE.PSIkq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[10].attribute /* gENROE.PSIkq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[10].attribute /* gENROE.PSIkq */.max;
  /* static nls data for gENROE.uq */
  sysData->nominal[i] = data->modelData->realVarsData[106].attribute /* gENROE.uq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[106].attribute /* gENROE.uq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[106].attribute /* gENROE.uq */.max;
  /* static nls data for gENROE.PSIppq */
  sysData->nominal[i] = data->modelData->realVarsData[96].attribute /* gENROE.PSIppq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[96].attribute /* gENROE.PSIppq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[96].attribute /* gENROE.PSIppq */.max;
  /* static nls data for gENROE.iq */
  sysData->nominal[i] = data->modelData->realVarsData[104].attribute /* gENROE.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[104].attribute /* gENROE.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[104].attribute /* gENROE.iq */.max;
  /* static nls data for gENROE.id */
  sysData->nominal[i] = data->modelData->realVarsData[103].attribute /* gENROE.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[103].attribute /* gENROE.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[103].attribute /* gENROE.id */.max;
  /* static nls data for pwLine4.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[145].attribute /* pwLine4.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[145].attribute /* pwLine4.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[145].attribute /* pwLine4.vr.im */.max;
  /* static nls data for pwLine4.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[146].attribute /* pwLine4.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[146].attribute /* pwLine4.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[146].attribute /* pwLine4.vr.re */.max;
  /* static nls data for pwLine3.vs.re */
  sysData->nominal[i] = data->modelData->realVarsData[136].attribute /* pwLine3.vs.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[136].attribute /* pwLine3.vs.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[136].attribute /* pwLine3.vs.re */.max;
  /* static nls data for pwLine3.vs.im */
  sysData->nominal[i] = data->modelData->realVarsData[135].attribute /* pwLine3.vs.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[135].attribute /* pwLine3.vs.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[135].attribute /* pwLine3.vs.im */.max;
  /* static nls data for pwLine4.vs.re */
  sysData->nominal[i] = data->modelData->realVarsData[148].attribute /* pwLine4.vs.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[148].attribute /* pwLine4.vs.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[148].attribute /* pwLine4.vs.re */.max;
  /* static nls data for pwLine4.vs.im */
  sysData->nominal[i] = data->modelData->realVarsData[147].attribute /* pwLine4.vs.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[147].attribute /* pwLine4.vs.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[147].attribute /* pwLine4.vs.im */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS181(sysData);
}

void getIterationVarsNLS181(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[54] /* constantLoad.p.ir variable */;
  array[1] = data->localData[0]->realVars[126] /* pwLine1.is.re variable */;
  array[2] = data->localData[0]->realVars[113] /* pwLine.ir.im variable */;
  array[3] = data->localData[0]->realVars[125] /* pwLine1.is.im variable */;
  array[4] = data->localData[0]->realVars[144] /* pwLine4.is.re variable */;
  array[5] = data->localData[0]->realVars[132] /* pwLine3.ir.re variable */;
  array[6] = data->localData[0]->realVars[134] /* pwLine3.is.re variable */;
  array[7] = data->localData[0]->realVars[133] /* pwLine3.is.im variable */;
  array[8] = data->localData[0]->realVars[131] /* pwLine3.ir.im variable */;
  array[9] = data->localData[0]->realVars[143] /* pwLine4.is.im variable */;
  array[10] = data->localData[0]->realVars[142] /* pwLine4.ir.re variable */;
  array[11] = data->localData[0]->realVars[123] /* pwLine1.ir.im variable */;
  array[12] = data->localData[0]->realVars[84] /* gENCLS.iq variable */;
  array[13] = data->localData[0]->realVars[83] /* gENCLS.id variable */;
  array[14] = data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */;
  array[15] = data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */;
  array[16] = data->localData[0]->realVars[106] /* gENROE.uq variable */;
  array[17] = data->localData[0]->realVars[96] /* gENROE.PSIppq variable */;
  array[18] = data->localData[0]->realVars[104] /* gENROE.iq variable */;
  array[19] = data->localData[0]->realVars[103] /* gENROE.id variable */;
  array[20] = data->localData[0]->realVars[145] /* pwLine4.vr.im variable */;
  array[21] = data->localData[0]->realVars[146] /* pwLine4.vr.re variable */;
  array[22] = data->localData[0]->realVars[136] /* pwLine3.vs.re variable */;
  array[23] = data->localData[0]->realVars[135] /* pwLine3.vs.im variable */;
  array[24] = data->localData[0]->realVars[148] /* pwLine4.vs.re variable */;
  array[25] = data->localData[0]->realVars[147] /* pwLine4.vs.im variable */;
}


/* inner equations */

/*
equation index: 56
type: SIMPLE_ASSIGN
eSAC1A.rectifierCommutationVoltageDrop.gain2.y = eSAC1A.rectifierCommutationVoltageDrop.gain2.k * eSAC1A.XADIFD
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_56(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,56};
  data->localData[0]->realVars[73] /* eSAC1A.rectifierCommutationVoltageDrop.gain2.y variable */ = (data->simulationInfo->realParameter[152] /* eSAC1A.rectifierCommutationVoltageDrop.gain2.k PARAM */) * (data->localData[0]->realVars[60] /* eSAC1A.XADIFD variable */);
  TRACE_POP
}
/*
equation index: 57
type: SIMPLE_ASSIGN
eSAC1A.EFD = eSAC1A.XADIFD + $DER.gENROE.Epq * gENROE.Tpd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_57(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,57};
  data->localData[0]->realVars[58] /* eSAC1A.EFD variable */ = data->localData[0]->realVars[60] /* eSAC1A.XADIFD variable */ + (data->localData[0]->realVars[21] /* der(gENROE.Epq) STATE_DER */) * (data->simulationInfo->realParameter[249] /* gENROE.Tpd0 PARAM */);
  TRACE_POP
}
/*
equation index: 58
type: SIMPLE_ASSIGN
eSAC1A.Ifd0 = eSAC1A.XADIFD
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_58(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,58};
  data->simulationInfo->realParameter[89] /* eSAC1A.Ifd0 PARAM */ = data->localData[0]->realVars[60] /* eSAC1A.XADIFD variable */;
  TRACE_POP
}
/*
equation index: 59
type: SIMPLE_ASSIGN
eSAC1A.VE0 = OpenIPSL.Electrical.Controls.PSSE.ES.BaseClasses.invFEX(eSAC1A.K_C, eSAC1A.Efd0, eSAC1A.Ifd0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_59(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,59};
  data->simulationInfo->realParameter[103] /* eSAC1A.VE0 PARAM */ = omc_OpenIPSL_Electrical_Controls_PSSE_ES_BaseClasses_invFEX(threadData, data->simulationInfo->realParameter[91] /* eSAC1A.K_C PARAM */, data->simulationInfo->realParameter[88] /* eSAC1A.Efd0 PARAM */, data->simulationInfo->realParameter[89] /* eSAC1A.Ifd0 PARAM */);
  TRACE_POP
}
/*
equation index: 60
type: SIMPLE_ASSIGN
eSAC1A.rotatingExciterWithDemagnetization.Efd0 = eSAC1A.VE0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_60(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,60};
  data->simulationInfo->realParameter[155] /* eSAC1A.rotatingExciterWithDemagnetization.Efd0 PARAM */ = data->simulationInfo->realParameter[103] /* eSAC1A.VE0 PARAM */;
  TRACE_POP
}
/*
equation index: 61
type: SIMPLE_ASSIGN
eSAC1A.rotatingExciterWithDemagnetization.sISO.y_start = eSAC1A.rotatingExciterWithDemagnetization.Efd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_61(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,61};
  data->simulationInfo->realParameter[168] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y_start PARAM */ = data->simulationInfo->realParameter[155] /* eSAC1A.rotatingExciterWithDemagnetization.Efd0 PARAM */;
  TRACE_POP
}
/*
equation index: 62
type: SIMPLE_ASSIGN
$START.eSAC1A.rotatingExciterWithDemagnetization.sISO.y = eSAC1A.rotatingExciterWithDemagnetization.sISO.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_62(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,62};
  data->modelData->realVarsData[3].attribute /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */.start = data->simulationInfo->realParameter[168] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y_start PARAM */;
    data->localData[0]->realVars[3] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */ = data->modelData->realVarsData[3].attribute /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[3].info /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y */.name, (modelica_real) data->localData[0]->realVars[3] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */);
  TRACE_POP
}
/*
equation index: 63
type: SIMPLE_ASSIGN
eSAC1A.rotatingExciterWithDemagnetization.sISO.y = eSAC1A.rotatingExciterWithDemagnetization.sISO.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_63(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,63};
  data->localData[0]->realVars[3] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */ = data->simulationInfo->realParameter[168] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y_start PARAM */;
  TRACE_POP
}
/*
equation index: 64
type: SIMPLE_ASSIGN
eSAC1A.rectifierCommutationVoltageDrop.division.y = eSAC1A.rectifierCommutationVoltageDrop.gain2.y / eSAC1A.rotatingExciterWithDemagnetization.sISO.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_64(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,64};
  data->localData[0]->realVars[71] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */ = DIVISION_SIM(data->localData[0]->realVars[73] /* eSAC1A.rectifierCommutationVoltageDrop.gain2.y variable */,data->localData[0]->realVars[3] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */,"eSAC1A.rotatingExciterWithDemagnetization.sISO.y",equationIndexes);
  TRACE_POP
}
/*
equation index: 65
type: SIMPLE_ASSIGN
eSAC1A.rectifierCommutationVoltageDrop.fEX.y = if eSAC1A.rectifierCommutationVoltageDrop.division.y <= 0.0 then 1.0 else if eSAC1A.rectifierCommutationVoltageDrop.division.y > 0.0 and eSAC1A.rectifierCommutationVoltageDrop.division.y <= 0.433 then 1.0 + (-0.577) * eSAC1A.rectifierCommutationVoltageDrop.division.y else if eSAC1A.rectifierCommutationVoltageDrop.division.y > 0.433 and eSAC1A.rectifierCommutationVoltageDrop.division.y < 0.75 then sqrt(0.75 - eSAC1A.rectifierCommutationVoltageDrop.division.y ^ 2.0) else if eSAC1A.rectifierCommutationVoltageDrop.division.y >= 0.75 and eSAC1A.rectifierCommutationVoltageDrop.division.y <= 1.0 then 1.732 * (1.0 - eSAC1A.rectifierCommutationVoltageDrop.division.y) else 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_65(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,65};
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
  tmp0 = LessEq(data->localData[0]->realVars[71] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */,0.0);
  tmp13 = (modelica_boolean)tmp0;
  if(tmp13)
  {
    tmp14 = 1.0;
  }
  else
  {
    tmp1 = Greater(data->localData[0]->realVars[71] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */,0.0);
    tmp2 = LessEq(data->localData[0]->realVars[71] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */,0.433);
    tmp11 = (modelica_boolean)(tmp1 && tmp2);
    if(tmp11)
    {
      tmp12 = 1.0 + (-0.577) * (data->localData[0]->realVars[71] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */);
    }
    else
    {
      tmp3 = Greater(data->localData[0]->realVars[71] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */,0.433);
      tmp4 = Less(data->localData[0]->realVars[71] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */,0.75);
      tmp9 = (modelica_boolean)(tmp3 && tmp4);
      if(tmp9)
      {
        tmp5 = data->localData[0]->realVars[71] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */;
        tmp6 = 0.75 - ((tmp5 * tmp5));
        if(!(tmp6 >= 0.0))
        {
          FILE_INFO info = {"",0,0,0,0,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of sqrt(0.75 - eSAC1A.rectifierCommutationVoltageDrop.division.y ^ 2.0) was %g should be >= 0", tmp6);
        }
        tmp10 = sqrt(tmp6);
      }
      else
      {
        tmp7 = GreaterEq(data->localData[0]->realVars[71] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */,0.75);
        tmp8 = LessEq(data->localData[0]->realVars[71] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */,1.0);
        tmp10 = ((tmp7 && tmp8)?(1.732) * (1.0 - data->localData[0]->realVars[71] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */):0.0);
      }
      tmp12 = tmp10;
    }
    tmp14 = tmp12;
  }
  data->localData[0]->realVars[72] /* eSAC1A.rectifierCommutationVoltageDrop.fEX.y variable */ = tmp14;
  TRACE_POP
}

void residualFunc67(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,67};
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
  data->localData[0]->realVars[60] /* eSAC1A.XADIFD variable */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_56(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_57(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_58(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_59(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_60(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_61(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_62(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_63(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_64(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_65(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[3] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */) * (data->localData[0]->realVars[72] /* eSAC1A.rectifierCommutationVoltageDrop.fEX.y variable */) - data->localData[0]->realVars[58] /* eSAC1A.EFD variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS67(NONLINEAR_SYSTEM_DATA* inSysData)
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
void initializeStaticDataNLS67(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for eSAC1A.XADIFD */
  sysData->nominal[i] = data->modelData->realVarsData[60].attribute /* eSAC1A.XADIFD */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[60].attribute /* eSAC1A.XADIFD */.min;
  sysData->max[i++]   = data->modelData->realVarsData[60].attribute /* eSAC1A.XADIFD */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS67(sysData);
}

void getIterationVarsNLS67(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[60] /* eSAC1A.XADIFD variable */;
}

/* Prototypes for the strict sets (Dynamic Tearing) */

/* Global constraints for the casual sets */
/* function initialize non-linear systems */
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_initialNonLinearSystem(int nNonLinearSystems, NONLINEAR_SYSTEM_DATA* nonLinearSystemData)
{
  
  nonLinearSystemData[4].equationIndex = 603;
  nonLinearSystemData[4].size = 22;
  nonLinearSystemData[4].homotopySupport = 0;
  nonLinearSystemData[4].mixedSystem = 1;
  nonLinearSystemData[4].residualFunc = residualFunc603;
  nonLinearSystemData[4].strictTearingFunctionCall = NULL;
  nonLinearSystemData[4].analyticalJacobianColumn = OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_functionJacNLSJac4_column;
  nonLinearSystemData[4].initialAnalyticalJacobian = OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_initialAnalyticJacobianNLSJac4;
  nonLinearSystemData[4].jacobianIndex = 0 /*jacInx*/;
  nonLinearSystemData[4].initializeStaticNLSData = initializeStaticDataNLS603;
  nonLinearSystemData[4].getIterationVars = getIterationVarsNLS603;
  nonLinearSystemData[4].checkConstraints = NULL;
  
  
  nonLinearSystemData[3].equationIndex = 429;
  nonLinearSystemData[3].size = 26;
  nonLinearSystemData[3].homotopySupport = 0;
  nonLinearSystemData[3].mixedSystem = 1;
  nonLinearSystemData[3].residualFunc = residualFunc429;
  nonLinearSystemData[3].strictTearingFunctionCall = NULL;
  nonLinearSystemData[3].analyticalJacobianColumn = NULL;
  nonLinearSystemData[3].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[3].jacobianIndex = -1;
  nonLinearSystemData[3].initializeStaticNLSData = initializeStaticDataNLS429;
  nonLinearSystemData[3].getIterationVars = getIterationVarsNLS429;
  nonLinearSystemData[3].checkConstraints = NULL;
  
  
  nonLinearSystemData[2].equationIndex = 315;
  nonLinearSystemData[2].size = 1;
  nonLinearSystemData[2].homotopySupport = 0;
  nonLinearSystemData[2].mixedSystem = 1;
  nonLinearSystemData[2].residualFunc = residualFunc315;
  nonLinearSystemData[2].strictTearingFunctionCall = NULL;
  nonLinearSystemData[2].analyticalJacobianColumn = NULL;
  nonLinearSystemData[2].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[2].jacobianIndex = -1;
  nonLinearSystemData[2].initializeStaticNLSData = initializeStaticDataNLS315;
  nonLinearSystemData[2].getIterationVars = getIterationVarsNLS315;
  nonLinearSystemData[2].checkConstraints = NULL;
  
  
  nonLinearSystemData[1].equationIndex = 181;
  nonLinearSystemData[1].size = 26;
  nonLinearSystemData[1].homotopySupport = 0;
  nonLinearSystemData[1].mixedSystem = 1;
  nonLinearSystemData[1].residualFunc = residualFunc181;
  nonLinearSystemData[1].strictTearingFunctionCall = NULL;
  nonLinearSystemData[1].analyticalJacobianColumn = NULL;
  nonLinearSystemData[1].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[1].jacobianIndex = -1;
  nonLinearSystemData[1].initializeStaticNLSData = initializeStaticDataNLS181;
  nonLinearSystemData[1].getIterationVars = getIterationVarsNLS181;
  nonLinearSystemData[1].checkConstraints = NULL;
  
  
  nonLinearSystemData[0].equationIndex = 67;
  nonLinearSystemData[0].size = 1;
  nonLinearSystemData[0].homotopySupport = 0;
  nonLinearSystemData[0].mixedSystem = 1;
  nonLinearSystemData[0].residualFunc = residualFunc67;
  nonLinearSystemData[0].strictTearingFunctionCall = NULL;
  nonLinearSystemData[0].analyticalJacobianColumn = NULL;
  nonLinearSystemData[0].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[0].jacobianIndex = -1;
  nonLinearSystemData[0].initializeStaticNLSData = initializeStaticDataNLS67;
  nonLinearSystemData[0].getIterationVars = getIterationVarsNLS67;
  nonLinearSystemData[0].checkConstraints = NULL;
}

#if defined(__cplusplus)
}
#endif

