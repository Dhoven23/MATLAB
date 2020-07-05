/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * fft1.h
 *
 * Code generation for function 'fft1'
 *
 */

#ifndef FFT1_H
#define FFT1_H

/* Include files */
#include <stddef.h>
#include <stdlib.h>
#include "rtwtypes.h"
#include "get_filtered_signal_types.h"

/* Function Declarations */
extern void b_bluestein(const creal_T x[1486272], int xoffInit, const double
  costab[2097153], const double sintab[2097153], const double costabinv[2097153],
  const double sintabinv[2097153], const creal_T wwc[2972543], creal_T y[1486272]);
extern void bluestein(const double x[1486272], int xoffInit, const double
                      costab[2097153], const double sintab[2097153], const
                      double costabinv[2097153], const double sintabinv[2097153],
                      const creal_T wwc[2972543], creal_T y[1486272]);
extern void generate_twiddle_tables(double costab[2097153], double sintab
  [2097153], double sintabinv[2097153]);

#endif

/* End of code generation (fft1.h) */
