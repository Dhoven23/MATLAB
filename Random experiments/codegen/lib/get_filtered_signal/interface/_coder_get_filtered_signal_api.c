/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_get_filtered_signal_api.c
 *
 * Code generation for function '_coder_get_filtered_signal_api'
 *
 */

/* Include files */
#include "_coder_get_filtered_signal_api.h"
#include "_coder_get_filtered_signal_mex.h"

/* Variable Definitions */
emlrtCTX emlrtRootTLSGlobal = NULL;
emlrtContext emlrtContextGlobal = { true,/* bFirstTime */
  false,                               /* bInitialized */
  131483U,                             /* fVersionInfo */
  NULL,                                /* fErrorFunction */
  "get_filtered_signal",               /* fFunctionName */
  NULL,                                /* fRTCallStack */
  false,                               /* bDebugMode */
  { 2045744189U, 2170104910U, 2743257031U, 4284093946U },/* fSigWrd */
  NULL                                 /* fSigMem */
};

/* Function Declarations */
static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[23085504];
static real_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *Sampling_frequency, const char_T *identifier);
static real_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static real_T (*e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[23085504];
static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *y, const
  char_T *identifier))[23085504];
static const mxArray *emlrt_marshallOut(const emlrtStack *sp, const creal_T u
  [1486272]);
static real_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);

/* Function Definitions */
static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[23085504]
{
  real_T (*y)[23085504];
  y = e_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}
  static real_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *Sampling_frequency, const char_T *identifier)
{
  real_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = d_emlrt_marshallIn(sp, emlrtAlias(Sampling_frequency), &thisId);
  emlrtDestroyArray(&Sampling_frequency);
  return y;
}

static real_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = f_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T (*e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[23085504]
{
  real_T (*ret)[23085504];
  static const int32_T dims[2] = { 11542752, 2 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  ret = (real_T (*)[23085504])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}
  static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *y, const
  char_T *identifier))[23085504]
{
  real_T (*b_y)[23085504];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  b_y = b_emlrt_marshallIn(sp, emlrtAlias(y), &thisId);
  emlrtDestroyArray(&y);
  return b_y;
}

static const mxArray *emlrt_marshallOut(const emlrtStack *sp, const creal_T u
  [1486272])
{
  const mxArray *y;
  const mxArray *m;
  static const int32_T iv[2] = { 1, 1486272 };

  y = NULL;
  m = emlrtCreateNumericArray(2, iv, mxDOUBLE_CLASS, mxCOMPLEX);
  emlrtExportNumericArrayR2013b(sp, m, (void *)&u[0], 8);
  emlrtAssign(&y, m);
  return y;
}

static real_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId)
{
  real_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 0U, &dims);
  ret = *(real_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

void get_filtered_signal_api(const mxArray * const prhs[2], int32_T nlhs, const
  mxArray *plhs[1])
{
  real_T (*y)[23085504];
  real_T Sampling_frequency;
  static creal_T ffilt[1486272];
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  (void)nlhs;
  st.tls = emlrtRootTLSGlobal;

  /* Marshall function inputs */
  y = emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "y");
  Sampling_frequency = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[1]),
    "Sampling_frequency");

  /* Invoke the target function */
  get_filtered_signal(*y, Sampling_frequency, ffilt);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(&st, ffilt);
}

void get_filtered_signal_atexit(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
  get_filtered_signal_xil_terminate();
  get_filtered_signal_xil_shutdown();
  emlrtExitTimeCleanup(&emlrtContextGlobal);
}

void get_filtered_signal_initialize(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, 0);
  emlrtEnterRtStackR2012b(&st);
  emlrtFirstTimeR2012b(emlrtRootTLSGlobal);
}

void get_filtered_signal_terminate(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (_coder_get_filtered_signal_api.c) */
