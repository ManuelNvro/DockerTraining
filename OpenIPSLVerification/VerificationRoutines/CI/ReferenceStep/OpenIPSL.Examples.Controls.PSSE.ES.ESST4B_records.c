/* Additional record code for OpenIPSL.Examples.Controls.PSSE.ES.ESST4B generated by the OpenModelica Compiler OpenModelica 1.16.0~dev-612-g65daa7a. */

#include "omc_simulation_settings.h"
#include "meta/meta_modelica.h"
#include "OpenIPSL.Examples.Controls.PSSE.ES.ESST4B_functions.h"

#ifdef __cplusplus
extern "C" {
#endif

#define Complex__desc_added 1
const char* Complex__desc__fields[2] = {"re","im"};
struct record_description Complex__desc = {
  "Complex", /* package_record__X */
  "Complex", /* package.record_X */
  Complex__desc__fields
};

void Complex_construct_p(threadData_t *threadData, void* v_ths ) {
  Complex* ths = (Complex*)(v_ths);
  // ths->_re has no default value.
  // ths->_im has no default value.
}
// This function should eventualy replace the default 'modelica' record constructor funcition
// that omc used to generate, i.e., replace functionBodyRecordConstructor template.
/*
Complex omc_Complex(threadData_t *threadData , modelica_real  in_re, modelica_real  in_im) {
  Complex dst;
  // TODO Improve me. No need to initalize the record memebers with defaults in Complex_construct
  // We should just do the allocs here and then copy the input parameters as default values instead.
  Complex_construct(threadData, dst);
  dst._re =  in_re;
  dst._im =  in_im;
  return dst;
}
*/

void Complex_copy_p(void* v_src, void* v_dst) {
  Complex* src = (Complex*)(v_src);
  Complex* dst = (Complex*)(v_dst);
  dst->_re = src->_re;
  dst->_im = src->_im;
}

#define OpenIPSL_Electrical_SystemBase__desc_added 1
const char* OpenIPSL_Electrical_SystemBase__desc__fields[2] = {"S_b","fn"};
struct record_description OpenIPSL_Electrical_SystemBase__desc = {
  "OpenIPSL_Electrical_SystemBase", /* package_record__X */
  "OpenIPSL.Electrical.SystemBase", /* package.record_X */
  OpenIPSL_Electrical_SystemBase__desc__fields
};

void OpenIPSL_Electrical_SystemBase_construct_p(threadData_t *threadData, void* v_ths ) {
  OpenIPSL_Electrical_SystemBase* ths = (OpenIPSL_Electrical_SystemBase*)(v_ths);
  ths->_S_b = 100000000.0;
  ths->_fn = 50.0;
}
// This function should eventualy replace the default 'modelica' record constructor funcition
// that omc used to generate, i.e., replace functionBodyRecordConstructor template.
/*
OpenIPSL_Electrical_SystemBase omc_OpenIPSL_Electrical_SystemBase(threadData_t *threadData , modelica_real  in_S_b, modelica_real  in_fn) {
  OpenIPSL_Electrical_SystemBase dst;
  // TODO Improve me. No need to initalize the record memebers with defaults in OpenIPSL_Electrical_SystemBase_construct
  // We should just do the allocs here and then copy the input parameters as default values instead.
  OpenIPSL_Electrical_SystemBase_construct(threadData, dst);
  dst._S_b =  in_S_b;
  dst._fn =  in_fn;
  return dst;
}
*/

void OpenIPSL_Electrical_SystemBase_copy_p(void* v_src, void* v_dst) {
  OpenIPSL_Electrical_SystemBase* src = (OpenIPSL_Electrical_SystemBase*)(v_src);
  OpenIPSL_Electrical_SystemBase* dst = (OpenIPSL_Electrical_SystemBase*)(v_dst);
  dst->_S_b = src->_S_b;
  dst->_fn = src->_fn;
}

#define Modelica_SIunits_ComplexPower__desc_added 1
const char* Modelica_SIunits_ComplexPower__desc__fields[2] = {"re","im"};
struct record_description Modelica_SIunits_ComplexPower__desc = {
  "Modelica_SIunits_ComplexPower", /* package_record__X */
  "Modelica.SIunits.ComplexPower", /* package.record_X */
  Modelica_SIunits_ComplexPower__desc__fields
};

void Modelica_SIunits_ComplexPower_construct_p(threadData_t *threadData, void* v_ths ) {
  Modelica_SIunits_ComplexPower* ths = (Modelica_SIunits_ComplexPower*)(v_ths);
  // ths->_re has no default value.
  // ths->_im has no default value.
}
// This function should eventualy replace the default 'modelica' record constructor funcition
// that omc used to generate, i.e., replace functionBodyRecordConstructor template.
/*
Modelica_SIunits_ComplexPower omc_Modelica_SIunits_ComplexPower(threadData_t *threadData , modelica_real  in_re, modelica_real  in_im) {
  Modelica_SIunits_ComplexPower dst;
  // TODO Improve me. No need to initalize the record memebers with defaults in Modelica_SIunits_ComplexPower_construct
  // We should just do the allocs here and then copy the input parameters as default values instead.
  Modelica_SIunits_ComplexPower_construct(threadData, dst);
  dst._re =  in_re;
  dst._im =  in_im;
  return dst;
}
*/

void Modelica_SIunits_ComplexPower_copy_p(void* v_src, void* v_dst) {
  Modelica_SIunits_ComplexPower* src = (Modelica_SIunits_ComplexPower*)(v_src);
  Modelica_SIunits_ComplexPower* dst = (Modelica_SIunits_ComplexPower*)(v_dst);
  dst->_re = src->_re;
  dst->_im = src->_im;
}

#define OpenIPSL_Electrical__omcQSystemBase_24SysData__desc_added 1
const char* OpenIPSL_Electrical__omcQSystemBase_24SysData__desc__fields[2] = {"S_b","fn"};
struct record_description OpenIPSL_Electrical__omcQSystemBase_24SysData__desc = {
  "OpenIPSL_Electrical__omcQSystemBase_24SysData", /* package_record__X */
  "OpenIPSL.Electrical.SystemBase$SysData", /* package.record_X */
  OpenIPSL_Electrical__omcQSystemBase_24SysData__desc__fields
};

void OpenIPSL_Electrical__omcQSystemBase_24SysData_construct_p(threadData_t *threadData, void* v_ths ) {
  OpenIPSL_Electrical__omcQSystemBase_24SysData* ths = (OpenIPSL_Electrical__omcQSystemBase_24SysData*)(v_ths);
  ths->_S_b = 100000000.0;
  ths->_fn = 50.0;
}
// This function should eventualy replace the default 'modelica' record constructor funcition
// that omc used to generate, i.e., replace functionBodyRecordConstructor template.
/*
OpenIPSL_Electrical__omcQSystemBase_24SysData omc_OpenIPSL_Electrical__omcQSystemBase_24SysData(threadData_t *threadData , modelica_real  in_S_b, modelica_real  in_fn) {
  OpenIPSL_Electrical__omcQSystemBase_24SysData dst;
  // TODO Improve me. No need to initalize the record memebers with defaults in OpenIPSL_Electrical__omcQSystemBase_24SysData_construct
  // We should just do the allocs here and then copy the input parameters as default values instead.
  OpenIPSL_Electrical__omcQSystemBase_24SysData_construct(threadData, dst);
  dst._S_b =  in_S_b;
  dst._fn =  in_fn;
  return dst;
}
*/

void OpenIPSL_Electrical__omcQSystemBase_24SysData_copy_p(void* v_src, void* v_dst) {
  OpenIPSL_Electrical__omcQSystemBase_24SysData* src = (OpenIPSL_Electrical__omcQSystemBase_24SysData*)(v_src);
  OpenIPSL_Electrical__omcQSystemBase_24SysData* dst = (OpenIPSL_Electrical__omcQSystemBase_24SysData*)(v_dst);
  dst->_S_b = src->_S_b;
  dst->_fn = src->_fn;
}

#ifdef __cplusplus
}
#endif

