/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * get_filtered_signal.c
 *
 * Code generation for function 'get_filtered_signal'
 *
 */

/* Include files */
#include "get_filtered_signal.h"
#include "fft.h"
#include "ifft.h"
#include <string.h>

/* Function Definitions */
void get_filtered_signal(const double y[23085504], double Sampling_frequency,
  creal_T ffilt[1486272])
{
  static double x[1486272];
  int j;
  int i;
  static creal_T fhat[1486272];
  double fhat_re;
  (void)Sampling_frequency;
  memset(&x[0], 0, 1486272U * sizeof(double));
  j = 0;
  for (i = 0; i < 11542752; i++) {
    if (y[i] != 0.0) {
      x[j] = y[i];
      j++;
    }
  }

  fft(x, fhat);
  for (j = 0; j < 1486272; j++) {
    fhat_re = fhat[j].re * fhat[j].re - fhat[j].im * -fhat[j].im;
    if (fhat[j].re * -fhat[j].im + fhat[j].im * fhat[j].re == 0.0) {
      fhat_re /= 1.486272E+6;
    } else if (fhat_re == 0.0) {
      fhat_re = 0.0;
    } else {
      fhat_re /= 1.486272E+6;
    }

    fhat[j].re *= (double)(fhat_re > 1.0);
    fhat[j].im *= (double)(fhat_re > 1.0);
  }

  ifft(fhat, ffilt);
}

/* End of code generation (get_filtered_signal.c) */
