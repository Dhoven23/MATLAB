/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * fft1.c
 *
 * Code generation for function 'fft1'
 *
 */

/* Include files */
#include "fft1.h"
#include "get_filtered_signal.h"
#include <math.h>
#include <string.h>

/* Function Declarations */
static void b_r2br_r2dit_trig(const creal_T x[4194304], const double costab
  [2097153], const double sintab[2097153], creal_T y[4194304]);
static void r2br_r2dit_trig(const creal_T x[2972543], const double costab
  [2097153], const double sintab[2097153], creal_T y[4194304]);
static void r2br_r2dit_trig_impl(const creal_T x[1486272], int xoffInit, const
  double costab[2097153], const double sintab[2097153], creal_T y[4194304]);

/* Function Definitions */
static void b_r2br_r2dit_trig(const creal_T x[4194304], const double costab
  [2097153], const double sintab[2097153], creal_T y[4194304])
{
  int ix;
  int ju;
  int iy;
  int i;
  boolean_T tst;
  double twid_re;
  double temp_re;
  double twid_im;
  int iheight;
  double temp_im;
  double re;
  double im;
  int istart;
  int temp_re_tmp;
  int j;
  int ihi;
  ix = 0;
  ju = 0;
  iy = 0;
  for (i = 0; i < 4194303; i++) {
    y[iy] = x[ix];
    iy = 4194304;
    tst = true;
    while (tst) {
      iy >>= 1;
      ju ^= iy;
      tst = ((ju & iy) == 0);
    }

    iy = ju;
    ix++;
  }

  y[iy] = x[ix];
  for (i = 0; i <= 4194302; i += 2) {
    twid_re = y[i + 1].re;
    temp_re = twid_re;
    twid_im = y[i + 1].im;
    temp_im = twid_im;
    re = y[i].re;
    im = y[i].im;
    twid_re = y[i].re - twid_re;
    y[i + 1].re = twid_re;
    twid_im = y[i].im - twid_im;
    y[i + 1].im = twid_im;
    y[i].re = re + temp_re;
    y[i].im = im + temp_im;
  }

  iy = 2;
  ix = 4;
  ju = 1048576;
  iheight = 4194301;
  while (ju > 0) {
    for (i = 0; i < iheight; i += ix) {
      temp_re_tmp = i + iy;
      temp_re = y[temp_re_tmp].re;
      temp_im = y[temp_re_tmp].im;
      y[temp_re_tmp].re = y[i].re - y[temp_re_tmp].re;
      y[temp_re_tmp].im = y[i].im - y[temp_re_tmp].im;
      y[i].re += temp_re;
      y[i].im += temp_im;
    }

    istart = 1;
    for (j = ju; j < 2097152; j += ju) {
      twid_re = costab[j];
      twid_im = sintab[j];
      i = istart;
      ihi = istart + iheight;
      while (i < ihi) {
        temp_re_tmp = i + iy;
        temp_re = twid_re * y[temp_re_tmp].re - twid_im * y[temp_re_tmp].im;
        temp_im = twid_re * y[temp_re_tmp].im + twid_im * y[temp_re_tmp].re;
        y[temp_re_tmp].re = y[i].re - temp_re;
        y[temp_re_tmp].im = y[i].im - temp_im;
        y[i].re += temp_re;
        y[i].im += temp_im;
        i += ix;
      }

      istart++;
    }

    ju /= 2;
    iy = ix;
    ix += ix;
    iheight -= iy;
  }

  for (iy = 0; iy < 4194304; iy++) {
    y[iy].re *= 2.384185791015625E-7;
    y[iy].im *= 2.384185791015625E-7;
  }
}

static void r2br_r2dit_trig(const creal_T x[2972543], const double costab
  [2097153], const double sintab[2097153], creal_T y[4194304])
{
  int ix;
  int ju;
  int iy;
  int i;
  boolean_T tst;
  double twid_re;
  double temp_re;
  double twid_im;
  int iheight;
  double temp_im;
  double re;
  double im;
  int istart;
  int temp_re_tmp;
  int j;
  int ihi;
  memset(&y[0], 0, 4194304U * sizeof(creal_T));
  ix = 0;
  ju = 0;
  iy = 0;
  for (i = 0; i < 2972542; i++) {
    y[iy] = x[ix];
    iy = 4194304;
    tst = true;
    while (tst) {
      iy >>= 1;
      ju ^= iy;
      tst = ((ju & iy) == 0);
    }

    iy = ju;
    ix++;
  }

  y[iy] = x[ix];
  for (i = 0; i <= 4194302; i += 2) {
    twid_re = y[i + 1].re;
    temp_re = twid_re;
    twid_im = y[i + 1].im;
    temp_im = twid_im;
    re = y[i].re;
    im = y[i].im;
    twid_re = y[i].re - twid_re;
    y[i + 1].re = twid_re;
    twid_im = y[i].im - twid_im;
    y[i + 1].im = twid_im;
    y[i].re = re + temp_re;
    y[i].im = im + temp_im;
  }

  iy = 2;
  ix = 4;
  ju = 1048576;
  iheight = 4194301;
  while (ju > 0) {
    for (i = 0; i < iheight; i += ix) {
      temp_re_tmp = i + iy;
      temp_re = y[temp_re_tmp].re;
      temp_im = y[temp_re_tmp].im;
      y[temp_re_tmp].re = y[i].re - y[temp_re_tmp].re;
      y[temp_re_tmp].im = y[i].im - y[temp_re_tmp].im;
      y[i].re += temp_re;
      y[i].im += temp_im;
    }

    istart = 1;
    for (j = ju; j < 2097152; j += ju) {
      twid_re = costab[j];
      twid_im = sintab[j];
      i = istart;
      ihi = istart + iheight;
      while (i < ihi) {
        temp_re_tmp = i + iy;
        temp_re = twid_re * y[temp_re_tmp].re - twid_im * y[temp_re_tmp].im;
        temp_im = twid_re * y[temp_re_tmp].im + twid_im * y[temp_re_tmp].re;
        y[temp_re_tmp].re = y[i].re - temp_re;
        y[temp_re_tmp].im = y[i].im - temp_im;
        y[i].re += temp_re;
        y[i].im += temp_im;
        i += ix;
      }

      istart++;
    }

    ju /= 2;
    iy = ix;
    ix += ix;
    iheight -= iy;
  }
}

static void r2br_r2dit_trig_impl(const creal_T x[1486272], int xoffInit, const
  double costab[2097153], const double sintab[2097153], creal_T y[4194304])
{
  int ix;
  int ju;
  int iy;
  int i;
  boolean_T tst;
  double twid_re;
  double temp_re;
  double twid_im;
  int iheight;
  double temp_im;
  double re;
  double im;
  int istart;
  int temp_re_tmp;
  int j;
  int ihi;
  memset(&y[0], 0, 4194304U * sizeof(creal_T));
  ix = xoffInit;
  ju = 0;
  iy = 0;
  for (i = 0; i < 1486271; i++) {
    y[iy] = x[ix];
    iy = 4194304;
    tst = true;
    while (tst) {
      iy >>= 1;
      ju ^= iy;
      tst = ((ju & iy) == 0);
    }

    iy = ju;
    ix++;
  }

  y[iy] = x[ix];
  for (i = 0; i <= 4194302; i += 2) {
    twid_re = y[i + 1].re;
    temp_re = twid_re;
    twid_im = y[i + 1].im;
    temp_im = twid_im;
    re = y[i].re;
    im = y[i].im;
    twid_re = y[i].re - twid_re;
    y[i + 1].re = twid_re;
    twid_im = y[i].im - twid_im;
    y[i + 1].im = twid_im;
    y[i].re = re + temp_re;
    y[i].im = im + temp_im;
  }

  iy = 2;
  ix = 4;
  ju = 1048576;
  iheight = 4194301;
  while (ju > 0) {
    for (i = 0; i < iheight; i += ix) {
      temp_re_tmp = i + iy;
      temp_re = y[temp_re_tmp].re;
      temp_im = y[temp_re_tmp].im;
      y[temp_re_tmp].re = y[i].re - y[temp_re_tmp].re;
      y[temp_re_tmp].im = y[i].im - y[temp_re_tmp].im;
      y[i].re += temp_re;
      y[i].im += temp_im;
    }

    istart = 1;
    for (j = ju; j < 2097152; j += ju) {
      twid_re = costab[j];
      twid_im = sintab[j];
      i = istart;
      ihi = istart + iheight;
      while (i < ihi) {
        temp_re_tmp = i + iy;
        temp_re = twid_re * y[temp_re_tmp].re - twid_im * y[temp_re_tmp].im;
        temp_im = twid_re * y[temp_re_tmp].im + twid_im * y[temp_re_tmp].re;
        y[temp_re_tmp].re = y[i].re - temp_re;
        y[temp_re_tmp].im = y[i].im - temp_im;
        y[i].re += temp_re;
        y[i].im += temp_im;
        i += ix;
      }

      istart++;
    }

    ju /= 2;
    iy = ix;
    ix += ix;
    iheight -= iy;
  }
}

void b_bluestein(const creal_T x[1486272], int xoffInit, const double costab
                 [2097153], const double sintab[2097153], const double
                 costabinv[2097153], const double sintabinv[2097153], const
                 creal_T wwc[2972543], creal_T y[1486272])
{
  int xidx;
  int k;
  static creal_T fv[4194304];
  double im;
  static creal_T b_fv[4194304];
  double re;
  double d;
  double d1;
  double y_tmp_re;
  xidx = xoffInit;
  for (k = 0; k < 1486272; k++) {
    im = wwc[k + 1486271].re;
    re = wwc[k + 1486271].im;
    y[k].re = im * x[xidx].re + re * x[xidx].im;
    y[k].im = im * x[xidx].im - re * x[xidx].re;
    xidx++;
  }

  r2br_r2dit_trig_impl(y, 0, costab, sintab, fv);
  r2br_r2dit_trig(wwc, costab, sintab, b_fv);
  for (xidx = 0; xidx < 4194304; xidx++) {
    im = fv[xidx].re * b_fv[xidx].im + fv[xidx].im * b_fv[xidx].re;
    b_fv[xidx].re = fv[xidx].re * b_fv[xidx].re - fv[xidx].im * b_fv[xidx].im;
    b_fv[xidx].im = im;
  }

  b_r2br_r2dit_trig(b_fv, costabinv, sintabinv, fv);
  xidx = 0;
  for (k = 0; k < 1486272; k++) {
    im = wwc[k + 1486271].re;
    re = wwc[k + 1486271].im;
    d = fv[k + 1486271].re;
    d1 = fv[k + 1486271].im;
    y_tmp_re = im * d + re * d1;
    im = im * d1 - re * d;
    y[xidx].re = y_tmp_re;
    y[xidx].im = im;
    y[xidx].re = y_tmp_re;
    y[xidx].im = im;
    if (y[xidx].im == 0.0) {
      re = y[xidx].re / 1.486272E+6;
      im = 0.0;
    } else if (y[xidx].re == 0.0) {
      re = 0.0;
      im = y[xidx].im / 1.486272E+6;
    } else {
      re = y[xidx].re / 1.486272E+6;
      im = y[xidx].im / 1.486272E+6;
    }

    y[xidx].re = re;
    y[xidx].im = im;
    xidx++;
  }
}

void bluestein(const double x[1486272], int xoffInit, const double costab
               [2097153], const double sintab[2097153], const double costabinv
               [2097153], const double sintabinv[2097153], const creal_T wwc
               [2972543], creal_T y[1486272])
{
  int xidx;
  int k;
  static creal_T fv[4194304];
  static creal_T b_fv[4194304];
  double im;
  double d;
  double d1;
  double d2;
  xidx = xoffInit;
  for (k = 0; k < 1486272; k++) {
    y[k].re = wwc[k + 1486271].re * x[xidx];
    y[k].im = wwc[k + 1486271].im * -x[xidx];
    xidx++;
  }

  r2br_r2dit_trig_impl(y, 0, costab, sintab, fv);
  r2br_r2dit_trig(wwc, costab, sintab, b_fv);
  for (xidx = 0; xidx < 4194304; xidx++) {
    im = fv[xidx].re * b_fv[xidx].im + fv[xidx].im * b_fv[xidx].re;
    b_fv[xidx].re = fv[xidx].re * b_fv[xidx].re - fv[xidx].im * b_fv[xidx].im;
    b_fv[xidx].im = im;
  }

  b_r2br_r2dit_trig(b_fv, costabinv, sintabinv, fv);
  xidx = 0;
  for (k = 0; k < 1486272; k++) {
    im = wwc[k + 1486271].re;
    d = wwc[k + 1486271].im;
    d1 = fv[k + 1486271].re;
    d2 = fv[k + 1486271].im;
    y[xidx].re = im * d1 + d * d2;
    y[xidx].im = im * d2 - d * d1;
    xidx++;
  }
}

void generate_twiddle_tables(double costab[2097153], double sintab[2097153],
  double sintabinv[2097153])
{
  static double costab1q[1048577];
  int k;
  double sintabinv_tmp;
  double b_sintabinv_tmp;
  costab1q[0] = 1.0;
  for (k = 0; k < 524288; k++) {
    costab1q[k + 1] = cos(1.4980281131695715E-6 * ((double)k + 1.0));
  }

  for (k = 0; k < 524287; k++) {
    costab1q[k + 524289] = sin(1.4980281131695715E-6 * (1.048576E+6 - ((double)k
      + 524289.0)));
  }

  costab1q[1048576] = 0.0;
  costab[0] = 1.0;
  sintab[0] = 0.0;
  for (k = 0; k < 1048576; k++) {
    sintabinv_tmp = costab1q[1048575 - k];
    sintabinv[k + 1] = sintabinv_tmp;
    b_sintabinv_tmp = costab1q[k + 1];
    sintabinv[k + 1048577] = b_sintabinv_tmp;
    costab[k + 1] = b_sintabinv_tmp;
    sintab[k + 1] = -sintabinv_tmp;
    costab[k + 1048577] = -sintabinv_tmp;
    sintab[k + 1048577] = -b_sintabinv_tmp;
  }
}

/* End of code generation (fft1.c) */
