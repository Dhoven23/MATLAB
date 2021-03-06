/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_get_filtered_signal_api.h
 *
 * Code generation for function '_coder_get_filtered_signal_api'
 *
 */

#ifndef _CODER_GET_FILTERED_SIGNAL_API_H
#define _CODER_GET_FILTERED_SIGNAL_API_H

/* Include files */
#include <stddef.h>
#include <stdlib.h>
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

/* Function Declarations */
extern void get_filtered_signal(real_T y[23085504], real_T Sampling_frequency,
  creal_T ffilt[1486272]);
extern void get_filtered_signal_api(const mxArray * const prhs[2], int32_T nlhs,
  const mxArray *plhs[1]);
extern void get_filtered_signal_atexit(void);
extern void get_filtered_signal_initialize(void);
extern void get_filtered_signal_terminate(void);
extern void get_filtered_signal_xil_shutdown(void);
extern void get_filtered_signal_xil_terminate(void);

#endif

/* End of code generation (_coder_get_filtered_signal_api.h) */
