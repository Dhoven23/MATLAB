/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * fft.c
 *
 * Code generation for function 'fft'
 *
 */

/* Include files */
#include "fft.h"
#include "fft1.h"
#include "get_filtered_signal.h"
#include <math.h>
#include <string.h>

/* Function Definitions */
void fft(const double x[1486272], creal_T y[1486272])
{
  static double costab[2097153];
  static double sintab[2097153];
  static double sintabinv[2097153];
  int idx;
  int rt;
  static creal_T wwc[2972543];
  int k;
  int b_y;
  static creal_T dcv[1486272];
  double nt_im;
  double nt_re;
  generate_twiddle_tables(costab, sintab, sintabinv);
  idx = 1486270;
  rt = 0;
  wwc[1486271].re = 1.0;
  wwc[1486271].im = 0.0;
  for (k = 0; k < 1486271; k++) {
    b_y = ((k + 1) << 1) - 1;
    if (2972544 - rt <= b_y) {
      rt = (b_y + rt) - 2972544;
    } else {
      rt += b_y;
    }

    nt_im = -3.1415926535897931 * (double)rt / 1.486272E+6;
    if (nt_im == 0.0) {
      nt_re = 1.0;
      nt_im = 0.0;
    } else {
      nt_re = cos(nt_im);
      nt_im = sin(nt_im);
    }

    wwc[idx].re = nt_re;
    wwc[idx].im = -nt_im;
    idx--;
  }

  idx = 0;
  for (k = 1486270; k >= 0; k--) {
    wwc[k + 1486272] = wwc[idx];
    idx++;
  }

  bluestein(x, 0, costab, sintab, costab, sintabinv, wwc, dcv);
  memcpy(&y[0], &dcv[0], 1486272U * sizeof(creal_T));
}

/* End of code generation (fft.c) */
