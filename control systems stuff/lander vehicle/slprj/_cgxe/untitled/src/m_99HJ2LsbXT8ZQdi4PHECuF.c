/* Include files */

#include "modelInterface.h"
#include "m_99HJ2LsbXT8ZQdi4PHECuF.h"
#include <string.h>
#include "mwmathutil.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 4,     /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 50,  /* lineNo */
  "IKBlock",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotsimulink\\robotslmanip\\+robotics\\+slmanip\\+internal\\+block\\IKBlock.m"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 1,   /* lineNo */
  "System",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\System.p"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 1,   /* lineNo */
  "SystemProp",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\SystemProp.p"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 1,   /* lineNo */
  "SystemCore",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\SystemCore.p"/* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 1,   /* lineNo */
  "Propagates",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\matlab\\system\\+matlab\\+system\\+mixin\\Propagates.p"/* pathName */
};

static emlrtRSInfo g_emlrtRSI = { 12,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo h_emlrtRSI = { 27,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo i_emlrtRSI = { 70,  /* lineNo */
  "IKBlock",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotsimulink\\robotslmanip\\+robotics\\+slmanip\\+internal\\+block\\IKBlock.m"/* pathName */
};

static emlrtRSInfo j_emlrtRSI = { 71,  /* lineNo */
  "IKBlock",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotsimulink\\robotslmanip\\+robotics\\+slmanip\\+internal\\+block\\IKBlock.m"/* pathName */
};

static emlrtRSInfo k_emlrtRSI = { 1,   /* lineNo */
  "InternalAccess",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\InternalAccess.m"/* pathName */
};

static emlrtRSInfo l_emlrtRSI = { 106, /* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo m_emlrtRSI = { 153, /* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo n_emlrtRSI = { 158, /* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo o_emlrtRSI = { 165, /* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo p_emlrtRSI = { 68,  /* lineNo */
  "RigidBody",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBody.m"/* pathName */
};

static emlrtRSInfo q_emlrtRSI = { 126, /* lineNo */
  "RigidBody",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBody.m"/* pathName */
};

static emlrtRSInfo r_emlrtRSI = { 140, /* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo s_emlrtRSI = { 83,  /* lineNo */
  "RigidBody",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBody.m"/* pathName */
};

static emlrtRSInfo t_emlrtRSI = { 206, /* lineNo */
  "inverseKinematics",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pathName */
};

static emlrtRSInfo u_emlrtRSI = { 247, /* lineNo */
  "inverseKinematics",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pathName */
};

static emlrtRSInfo v_emlrtRSI = { 1,   /* lineNo */
  "ProcessConstructorArguments",       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\ProcessConstructorArguments.p"/* pathName */
};

static emlrtRSInfo w_emlrtRSI = { 468, /* lineNo */
  "inverseKinematics",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pathName */
};

static emlrtRSInfo x_emlrtRSI = { 455, /* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo y_emlrtRSI = { 459, /* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo ab_emlrtRSI = { 472,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo bb_emlrtRSI = { 454,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo cb_emlrtRSI = { 134,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo db_emlrtRSI = { 131,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo eb_emlrtRSI = { 138,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo fb_emlrtRSI = { 47, /* lineNo */
  "VisualizationInfo",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\VisualizationInfo.m"/* pathName */
};

static emlrtRSInfo gb_emlrtRSI = { 69, /* lineNo */
  "VisualizationInfo",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\VisualizationInfo.m"/* pathName */
};

static emlrtRSInfo hb_emlrtRSI = { 61, /* lineNo */
  "randi",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\randfun\\randi.m"/* pathName */
};

static emlrtRSInfo ib_emlrtRSI = { 114,/* lineNo */
  "rand",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\randfun\\rand.m"/* pathName */
};

static emlrtRSInfo jb_emlrtRSI = { 45, /* lineNo */
  "eml_rand",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\randfun\\private\\eml_rand.m"/* pathName */
};

static emlrtRSInfo kb_emlrtRSI = { 15, /* lineNo */
  "eml_rand_mt19937ar_stateful",       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\randfun\\private\\eml_rand_mt19937ar_stateful.m"/* pathName */
};

static emlrtRSInfo lb_emlrtRSI = { 51, /* lineNo */
  "eml_rand_mt19937ar",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\randfun\\eml_rand_mt19937ar.m"/* pathName */
};

static emlrtRSInfo mb_emlrtRSI = { 878,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo nb_emlrtRSI = { 866,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo ob_emlrtRSI = { 1696,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo pb_emlrtRSI = { 1701,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo qb_emlrtRSI = { 1704,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo rb_emlrtRSI = { 1712,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo sb_emlrtRSI = { 76, /* lineNo */
  "validateattributes",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\lang\\validateattributes.m"/* pathName */
};

static emlrtRSInfo tb_emlrtRSI = { 897,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo ub_emlrtRSI = { 900,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo vb_emlrtRSI = { 906,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo wb_emlrtRSI = { 1763,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo xb_emlrtRSI = { 195,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo yb_emlrtRSI = { 199,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo ac_emlrtRSI = { 203,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo bc_emlrtRSI = { 206,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo cc_emlrtRSI = { 208,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo dc_emlrtRSI = { 241,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo ec_emlrtRSI = { 243,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo fc_emlrtRSI = { 244,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo gc_emlrtRSI = { 251,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo hc_emlrtRSI = { 252,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo ic_emlrtRSI = { 219,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo jc_emlrtRSI = { 1191,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo kc_emlrtRSI = { 1195,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo lc_emlrtRSI = { 286,/* lineNo */
  "RigidBody",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBody.m"/* pathName */
};

static emlrtRSInfo mc_emlrtRSI = { 920,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo nc_emlrtRSI = { 924,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo oc_emlrtRSI = { 149,/* lineNo */
  "RigidBody",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBody.m"/* pathName */
};

static emlrtRSInfo pc_emlrtRSI = { 150,/* lineNo */
  "RigidBody",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBody.m"/* pathName */
};

static emlrtRSInfo qc_emlrtRSI = { 75, /* lineNo */
  "RigidBody",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBody.m"/* pathName */
};

static emlrtRSInfo rc_emlrtRSI = { 147,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo sc_emlrtRSI = { 215,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo tc_emlrtRSI = { 359,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo uc_emlrtRSI = { 361,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo vc_emlrtRSI = { 363,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo wc_emlrtRSI = { 364,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo xc_emlrtRSI = { 155,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo yc_emlrtRSI = { 67, /* lineNo */
  "validatestring",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\lang\\validatestring.m"/* pathName */
};

static emlrtRSInfo ad_emlrtRSI = { 98, /* lineNo */
  "validatestring",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\lang\\validatestring.m"/* pathName */
};

static emlrtRSInfo bd_emlrtRSI = { 140,/* lineNo */
  "validatestring",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\lang\\validatestring.m"/* pathName */
};

static emlrtRSInfo cd_emlrtRSI = { 216,/* lineNo */
  "strcmp",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\strcmp.m"/* pathName */
};

static emlrtRSInfo dd_emlrtRSI = { 217,/* lineNo */
  "strcmp",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\strcmp.m"/* pathName */
};

static emlrtRSInfo ed_emlrtRSI = { 218,/* lineNo */
  "strcmp",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\strcmp.m"/* pathName */
};

static emlrtRSInfo fd_emlrtRSI = { 16, /* lineNo */
  "lower",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\strfun\\lower.m"/* pathName */
};

static emlrtRSInfo gd_emlrtRSI = { 10, /* lineNo */
  "eml_string_transform",              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\strfun\\eml_string_transform.m"/* pathName */
};

static emlrtRSInfo hd_emlrtRSI = { 227,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo id_emlrtRSI = { 231,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo jd_emlrtRSI = { 21, /* lineNo */
  "warning",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\warning.m"/* pathName */
};

static emlrtRSInfo kd_emlrtRSI = { 451,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pathName */
};

static emlrtRSInfo ld_emlrtRSI = { 1,  /* lineNo */
  "NLPSolverInterface",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\shared\\robotics\\robotcore\\+robotics\\+core\\+internal\\NLPSolverInterface.m"/* pathName */
};

static emlrtRSInfo md_emlrtRSI = { 70, /* lineNo */
  "DampedBFGSwGradientProjection",     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\shared\\robotics\\robotcore\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjection.m"/* pathName */
};

static emlrtRSInfo nd_emlrtRSI = { 112,/* lineNo */
  "DampedBFGSwGradientProjection",     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\shared\\robotics\\robotcore\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjection.m"/* pathName */
};

static emlrtRSInfo od_emlrtRSI = { 113,/* lineNo */
  "DampedBFGSwGradientProjection",     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\shared\\robotics\\robotcore\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjection.m"/* pathName */
};

static emlrtRSInfo pd_emlrtRSI = { 42, /* lineNo */
  "SystemTimeProvider",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\shared\\robotics\\robotcore\\+robotics\\+core\\+internal\\SystemTimeProvider.m"/* pathName */
};

static emlrtRSInfo qd_emlrtRSI = { 1,  /* lineNo */
  "TimeProvider",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\shared\\robotics\\robotcore\\+robotics\\+core\\+internal\\TimeProvider.m"/* pathName */
};

static emlrtRSInfo rd_emlrtRSI = { 43, /* lineNo */
  "ExternalDependency",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\ExternalDependency.m"/* pathName */
};

static emlrtRSInfo sd_emlrtRSI = { 358,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pathName */
};

static emlrtRSInfo td_emlrtRSI = { 439,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pathName */
};

static emlrtRSInfo ud_emlrtRSI = { 29, /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo vd_emlrtRSI = { 34, /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo wd_emlrtRSI = { 82, /* lineNo */
  "IKBlock",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotsimulink\\robotslmanip\\+robotics\\+slmanip\\+internal\\+block\\IKBlock.m"/* pathName */
};

static emlrtRSInfo xd_emlrtRSI = { 118,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pathName */
};

static emlrtRSInfo yd_emlrtRSI = { 121,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pathName */
};

static emlrtRSInfo ae_emlrtRSI = { 124,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pathName */
};

static emlrtRSInfo be_emlrtRSI = { 504,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pathName */
};

static emlrtRSInfo ce_emlrtRSI = { 507,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pathName */
};

static emlrtRSInfo de_emlrtRSI = { 508,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pathName */
};

static emlrtRSInfo ee_emlrtRSI = { 509,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pathName */
};

static emlrtRSInfo fe_emlrtRSI = { 510,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pathName */
};

static emlrtRSInfo ge_emlrtRSI = { 50, /* lineNo */
  "eye",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\elmat\\eye.m"/* pathName */
};

static emlrtRSInfo he_emlrtRSI = { 21, /* lineNo */
  "checkAndSaturateExpandSize",        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\checkAndSaturateExpandSize.m"/* pathName */
};

static emlrtRSInfo ie_emlrtRSI = { 1724,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo je_emlrtRSI = { 130,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pathName */
};

static emlrtRSInfo ke_emlrtRSI = { 1,  /* lineNo */
  "IKExtraArgs",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\IKExtraArgs.m"/* pathName */
};

static emlrtRSInfo le_emlrtRSI = { 158,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pathName */
};

static emlrtRSInfo me_emlrtRSI = { 159,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pathName */
};

static emlrtRSInfo ne_emlrtRSI = { 258,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pathName */
};

static emlrtRSInfo oe_emlrtRSI = { 259,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pathName */
};

static emlrtRSInfo pe_emlrtRSI = { 261,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pathName */
};

static emlrtRSInfo qe_emlrtRSI = { 270,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pathName */
};

static emlrtRSInfo re_emlrtRSI = { 271,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pathName */
};

static emlrtRSInfo se_emlrtRSI = { 275,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pathName */
};

static emlrtRSInfo te_emlrtRSI = { 31, /* lineNo */
  "inv",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m"/* pathName */
};

static emlrtRSInfo ue_emlrtRSI = { 42, /* lineNo */
  "inv",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m"/* pathName */
};

static emlrtRSInfo ve_emlrtRSI = { 46, /* lineNo */
  "inv",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m"/* pathName */
};

static emlrtRSInfo we_emlrtRSI = { 307,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pathName */
};

static emlrtRSInfo xe_emlrtRSI = { 309,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pathName */
};

static emlrtRSInfo ye_emlrtRSI = { 315,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pathName */
};

static emlrtRSInfo af_emlrtRSI = { 316,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pathName */
};

static emlrtRSInfo bf_emlrtRSI = { 320,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pathName */
};

static emlrtRSInfo cf_emlrtRSI = { 1164,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo df_emlrtRSI = { 1166,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo ef_emlrtRSI = { 1180,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo ff_emlrtRSI = { 41, /* lineNo */
  "find",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pathName */
};

static emlrtRSInfo gf_emlrtRSI = { 1143,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo hf_emlrtRSI = { 397,/* lineNo */
  "find",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pathName */
};

static emlrtRSInfo if_emlrtRSI = { 43, /* lineNo */
  "indexShapeCheck",                   /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\indexShapeCheck.m"/* pathName */
};

static emlrtRSInfo jf_emlrtRSI = { 108,/* lineNo */
  "NLPSolverInterface",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\shared\\robotics\\robotcore\\+robotics\\+core\\+internal\\NLPSolverInterface.m"/* pathName */
};

static emlrtRSInfo kf_emlrtRSI = { 111,/* lineNo */
  "NLPSolverInterface",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\shared\\robotics\\robotcore\\+robotics\\+core\\+internal\\NLPSolverInterface.m"/* pathName */
};

static emlrtRSInfo lf_emlrtRSI = { 123,/* lineNo */
  "NLPSolverInterface",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\shared\\robotics\\robotcore\\+robotics\\+core\\+internal\\NLPSolverInterface.m"/* pathName */
};

static emlrtRSInfo mf_emlrtRSI = { 142,/* lineNo */
  "NLPSolverInterface",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\shared\\robotics\\robotcore\\+robotics\\+core\\+internal\\NLPSolverInterface.m"/* pathName */
};

static emlrtRSInfo nf_emlrtRSI = { 144,/* lineNo */
  "NLPSolverInterface",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\shared\\robotics\\robotcore\\+robotics\\+core\\+internal\\NLPSolverInterface.m"/* pathName */
};

static emlrtRSInfo of_emlrtRSI = { 89, /* lineNo */
  "SystemTimeProvider",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\shared\\robotics\\robotcore\\+robotics\\+core\\+internal\\SystemTimeProvider.m"/* pathName */
};

static emlrtRSInfo pf_emlrtRSI = { 185,/* lineNo */
  "DampedBFGSwGradientProjection",     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\shared\\robotics\\robotcore\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjection.m"/* pathName */
};

static emlrtRSInfo qf_emlrtRSI = { 191,/* lineNo */
  "DampedBFGSwGradientProjection",     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\shared\\robotics\\robotcore\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjection.m"/* pathName */
};

static emlrtRSInfo rf_emlrtRSI = { 192,/* lineNo */
  "DampedBFGSwGradientProjection",     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\shared\\robotics\\robotcore\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjection.m"/* pathName */
};

static emlrtRSInfo sf_emlrtRSI = { 223,/* lineNo */
  "DampedBFGSwGradientProjection",     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\shared\\robotics\\robotcore\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjection.m"/* pathName */
};

static emlrtRSInfo tf_emlrtRSI = { 226,/* lineNo */
  "DampedBFGSwGradientProjection",     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\shared\\robotics\\robotcore\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjection.m"/* pathName */
};

static emlrtRSInfo uf_emlrtRSI = { 235,/* lineNo */
  "DampedBFGSwGradientProjection",     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\shared\\robotics\\robotcore\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjection.m"/* pathName */
};

static emlrtRSInfo vf_emlrtRSI = { 239,/* lineNo */
  "DampedBFGSwGradientProjection",     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\shared\\robotics\\robotcore\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjection.m"/* pathName */
};

static emlrtRSInfo wf_emlrtRSI = { 243,/* lineNo */
  "DampedBFGSwGradientProjection",     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\shared\\robotics\\robotcore\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjection.m"/* pathName */
};

static emlrtRSInfo xf_emlrtRSI = { 250,/* lineNo */
  "DampedBFGSwGradientProjection",     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\shared\\robotics\\robotcore\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjection.m"/* pathName */
};

static emlrtRSInfo yf_emlrtRSI = { 251,/* lineNo */
  "DampedBFGSwGradientProjection",     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\shared\\robotics\\robotcore\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjection.m"/* pathName */
};

static emlrtRSInfo ag_emlrtRSI = { 266,/* lineNo */
  "DampedBFGSwGradientProjection",     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\shared\\robotics\\robotcore\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjection.m"/* pathName */
};

static emlrtRSInfo bg_emlrtRSI = { 286,/* lineNo */
  "DampedBFGSwGradientProjection",     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\shared\\robotics\\robotcore\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjection.m"/* pathName */
};

static emlrtRSInfo cg_emlrtRSI = { 320,/* lineNo */
  "DampedBFGSwGradientProjection",     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\shared\\robotics\\robotcore\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjection.m"/* pathName */
};

static emlrtRSInfo dg_emlrtRSI = { 324,/* lineNo */
  "DampedBFGSwGradientProjection",     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\shared\\robotics\\robotcore\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjection.m"/* pathName */
};

static emlrtRSInfo eg_emlrtRSI = { 327,/* lineNo */
  "DampedBFGSwGradientProjection",     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\shared\\robotics\\robotcore\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjection.m"/* pathName */
};

static emlrtRSInfo fg_emlrtRSI = { 334,/* lineNo */
  "DampedBFGSwGradientProjection",     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\shared\\robotics\\robotcore\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjection.m"/* pathName */
};

static emlrtRSInfo gg_emlrtRSI = { 337,/* lineNo */
  "DampedBFGSwGradientProjection",     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\shared\\robotics\\robotcore\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjection.m"/* pathName */
};

static emlrtRSInfo hg_emlrtRSI = { 348,/* lineNo */
  "DampedBFGSwGradientProjection",     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\shared\\robotics\\robotcore\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjection.m"/* pathName */
};

static emlrtRSInfo ig_emlrtRSI = { 385,/* lineNo */
  "DampedBFGSwGradientProjection",     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\shared\\robotics\\robotcore\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjection.m"/* pathName */
};

static emlrtRSInfo jg_emlrtRSI = { 388,/* lineNo */
  "DampedBFGSwGradientProjection",     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\shared\\robotics\\robotcore\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjection.m"/* pathName */
};

static emlrtRSInfo kg_emlrtRSI = { 394,/* lineNo */
  "DampedBFGSwGradientProjection",     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\shared\\robotics\\robotcore\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjection.m"/* pathName */
};

static emlrtRSInfo lg_emlrtRSI = { 398,/* lineNo */
  "DampedBFGSwGradientProjection",     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\shared\\robotics\\robotcore\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjection.m"/* pathName */
};

static emlrtRSInfo mg_emlrtRSI = { 410,/* lineNo */
  "DampedBFGSwGradientProjection",     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\shared\\robotics\\robotcore\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjection.m"/* pathName */
};

static emlrtRSInfo ng_emlrtRSI = { 102,/* lineNo */
  "eml_mtimes_helper",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pathName */
};

static emlrtRSInfo og_emlrtRSI = { 56, /* lineNo */
  "eml_mtimes_helper",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pathName */
};

static emlrtRSInfo pg_emlrtRSI = { 22, /* lineNo */
  "IKHelpers",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\IKHelpers.m"/* pathName */
};

static emlrtRSInfo qg_emlrtRSI = { 27, /* lineNo */
  "IKHelpers",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\IKHelpers.m"/* pathName */
};

static emlrtRSInfo rg_emlrtRSI = { 1425,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo sg_emlrtRSI = { 1403,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo tg_emlrtRSI = { 1400,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo ug_emlrtRSI = { 1367,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo vg_emlrtRSI = { 1354,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo wg_emlrtRSI = { 1353,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo xg_emlrtRSI = { 1350,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo yg_emlrtRSI = { 1477,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo ah_emlrtRSI = { 1478,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo bh_emlrtRSI = { 511,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo ch_emlrtRSI = { 395,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo dh_emlrtRSI = { 396,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo eh_emlrtRSI = { 398,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo fh_emlrtRSI = { 23, /* lineNo */
  "axang2tform",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\shared\\robotics\\robotcore\\axang2tform.m"/* pathName */
};

static emlrtRSInfo gh_emlrtRSI = { 39, /* lineNo */
  "axang2rotm",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\shared\\robotics\\robotcore\\axang2rotm.m"/* pathName */
};

static emlrtRSInfo hh_emlrtRSI = { 15, /* lineNo */
  "normalizeRows",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\shared\\robotics\\robotcore\\+robotics\\+internal\\normalizeRows.m"/* pathName */
};

static emlrtRSInfo ih_emlrtRSI = { 22, /* lineNo */
  "axang2rotm",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\shared\\robotics\\robotcore\\axang2rotm.m"/* pathName */
};

static emlrtRSInfo jh_emlrtRSI = { 21, /* lineNo */
  "validateNumericMatrix",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\shared\\robotics\\robotcore\\+robotics\\+internal\\+validation\\validateNumericMatrix.m"/* pathName */
};

static emlrtRSInfo kh_emlrtRSI = { 64, /* lineNo */
  "IKHelpers",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\IKHelpers.m"/* pathName */
};

static emlrtRSInfo lh_emlrtRSI = { 53, /* lineNo */
  "rotm2axang",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\shared\\robotics\\robotcore\\rotm2axang.m"/* pathName */
};

static emlrtRSInfo mh_emlrtRSI = { 44, /* lineNo */
  "rotm2axang",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\shared\\robotics\\robotcore\\rotm2axang.m"/* pathName */
};

static emlrtRSInfo nh_emlrtRSI = { 25, /* lineNo */
  "svd",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\matfun\\svd.m"/* pathName */
};

static emlrtRSInfo oh_emlrtRSI = { 33, /* lineNo */
  "svd",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\matfun\\svd.m"/* pathName */
};

static emlrtRSInfo ph_emlrtRSI = { 34, /* lineNo */
  "xgesvd",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgesvd.m"/* pathName */
};

static emlrtRSInfo qh_emlrtRSI = { 407,/* lineNo */
  "xzsvdc",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzsvdc.m"/* pathName */
};

static emlrtRSInfo rh_emlrtRSI = { 394,/* lineNo */
  "xzsvdc",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzsvdc.m"/* pathName */
};

static emlrtRSInfo sh_emlrtRSI = { 380,/* lineNo */
  "xzsvdc",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzsvdc.m"/* pathName */
};

static emlrtRSInfo th_emlrtRSI = { 353,/* lineNo */
  "xzsvdc",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzsvdc.m"/* pathName */
};

static emlrtRSInfo uh_emlrtRSI = { 334,/* lineNo */
  "xzsvdc",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzsvdc.m"/* pathName */
};

static emlrtRSInfo vh_emlrtRSI = { 32, /* lineNo */
  "xrotg",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+refblas\\xrotg.m"/* pathName */
};

static emlrtRSInfo wh_emlrtRSI = { 57, /* lineNo */
  "SystemTimeProvider",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\shared\\robotics\\robotcore\\+robotics\\+core\\+internal\\SystemTimeProvider.m"/* pathName */
};

static emlrtRSInfo xh_emlrtRSI = { 20, /* lineNo */
  "mldivide",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\ops\\mldivide.m"/* pathName */
};

static emlrtRSInfo yh_emlrtRSI = { 42, /* lineNo */
  "mldivide",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\ops\\mldivide.m"/* pathName */
};

static emlrtRSInfo ai_emlrtRSI = { 44, /* lineNo */
  "mldivide",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\ops\\mldivide.m"/* pathName */
};

static emlrtRSInfo bi_emlrtRSI = { 109,/* lineNo */
  "lusolve",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\lusolve.m"/* pathName */
};

static emlrtRSInfo ci_emlrtRSI = { 107,/* lineNo */
  "lusolve",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\lusolve.m"/* pathName */
};

static emlrtRSInfo di_emlrtRSI = { 150,/* lineNo */
  "lusolve",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\lusolve.m"/* pathName */
};

static emlrtRSInfo ei_emlrtRSI = { 152,/* lineNo */
  "lusolve",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\lusolve.m"/* pathName */
};

static emlrtRSInfo fi_emlrtRSI = { 57, /* lineNo */
  "xgetrf",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgetrf.m"/* pathName */
};

static emlrtRSInfo gi_emlrtRSI = { 28, /* lineNo */
  "repmat",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"/* pathName */
};

static emlrtRSInfo hi_emlrtRSI = { 58, /* lineNo */
  "xzgetrf",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzgetrf.m"/* pathName */
};

static emlrtRSInfo ii_emlrtRSI = { 81, /* lineNo */
  "colon",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pathName */
};

static emlrtRSInfo ji_emlrtRSI = { 126,/* lineNo */
  "colon",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pathName */
};

static emlrtRSInfo ki_emlrtRSI = { 273,/* lineNo */
  "colon",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pathName */
};

static emlrtRSInfo li_emlrtRSI = { 45, /* lineNo */
  "xgeru",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xgeru.m"/* pathName */
};

static emlrtRSInfo mi_emlrtRSI = { 90, /* lineNo */
  "lusolve",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\lusolve.m"/* pathName */
};

static emlrtRSInfo ni_emlrtRSI = { 35, /* lineNo */
  "qrsolve",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m"/* pathName */
};

static emlrtRSInfo oi_emlrtRSI = { 39, /* lineNo */
  "qrsolve",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m"/* pathName */
};

static emlrtRSInfo pi_emlrtRSI = { 46, /* lineNo */
  "qrsolve",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m"/* pathName */
};

static emlrtRSInfo qi_emlrtRSI = { 111,/* lineNo */
  "xzgeqp3",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzgeqp3.m"/* pathName */
};

static emlrtRSInfo ri_emlrtRSI = { 114,/* lineNo */
  "xzgeqp3",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzgeqp3.m"/* pathName */
};

static emlrtRSInfo si_emlrtRSI = { 169,/* lineNo */
  "xzgeqp3",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzgeqp3.m"/* pathName */
};

static emlrtRSInfo ti_emlrtRSI = { 209,/* lineNo */
  "xzgeqp3",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzgeqp3.m"/* pathName */
};

static emlrtRSInfo ui_emlrtRSI = { 224,/* lineNo */
  "xzgeqp3",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzgeqp3.m"/* pathName */
};

static emlrtRSInfo vi_emlrtRSI = { 250,/* lineNo */
  "xzgeqp3",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzgeqp3.m"/* pathName */
};

static emlrtRSInfo wi_emlrtRSI = { 81, /* lineNo */
  "xzlarfg",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzlarfg.m"/* pathName */
};

static emlrtRSInfo xi_emlrtRSI = { 68, /* lineNo */
  "xzlarfg",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzlarfg.m"/* pathName */
};

static emlrtRSInfo yi_emlrtRSI = { 41, /* lineNo */
  "xzlarfg",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzlarfg.m"/* pathName */
};

static emlrtRSInfo aj_emlrtRSI = { 68, /* lineNo */
  "xzlarf",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzlarf.m"/* pathName */
};

static emlrtRSInfo bj_emlrtRSI = { 75, /* lineNo */
  "xzlarf",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzlarf.m"/* pathName */
};

static emlrtRSInfo cj_emlrtRSI = { 45, /* lineNo */
  "xgerc",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xgerc.m"/* pathName */
};

static emlrtRSInfo dj_emlrtRSI = { 131,/* lineNo */
  "qrsolve",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m"/* pathName */
};

static emlrtRSInfo ej_emlrtRSI = { 130,/* lineNo */
  "qrsolve",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m"/* pathName */
};

static emlrtRSInfo fj_emlrtRSI = { 79, /* lineNo */
  "qrsolve",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m"/* pathName */
};

static emlrtRSInfo gj_emlrtRSI = { 31, /* lineNo */
  "xunormqr",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xunormqr.m"/* pathName */
};

static emlrtRSInfo hj_emlrtRSI = { 415,/* lineNo */
  "DampedBFGSwGradientProjection",     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\shared\\robotics\\robotcore\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjection.m"/* pathName */
};

static emlrtRSInfo ij_emlrtRSI = { 21, /* lineNo */
  "inv",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m"/* pathName */
};

static emlrtRSInfo jj_emlrtRSI = { 22, /* lineNo */
  "inv",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m"/* pathName */
};

static emlrtRSInfo kj_emlrtRSI = { 173,/* lineNo */
  "inv",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m"/* pathName */
};

static emlrtRSInfo lj_emlrtRSI = { 174,/* lineNo */
  "inv",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m"/* pathName */
};

static emlrtRSInfo mj_emlrtRSI = { 190,/* lineNo */
  "inv",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m"/* pathName */
};

static emlrtRSInfo nj_emlrtRSI = { 44, /* lineNo */
  "chol",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\matfun\\chol.m"/* pathName */
};

static emlrtRSInfo oj_emlrtRSI = { 74, /* lineNo */
  "chol",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\matfun\\chol.m"/* pathName */
};

static emlrtRSInfo pj_emlrtRSI = { 13, /* lineNo */
  "xzpotrf",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzpotrf.m"/* pathName */
};

static emlrtRSInfo qj_emlrtRSI = { 99, /* lineNo */
  "xzpotrf",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzpotrf.m"/* pathName */
};

static emlrtRSInfo rj_emlrtRSI = { 105,/* lineNo */
  "xzpotrf",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzpotrf.m"/* pathName */
};

static emlrtRSInfo sj_emlrtRSI = { 419,/* lineNo */
  "DampedBFGSwGradientProjection",     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\shared\\robotics\\robotcore\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjection.m"/* pathName */
};

static emlrtRSInfo tj_emlrtRSI = { 48, /* lineNo */
  "IKHelpers",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\IKHelpers.m"/* pathName */
};

static emlrtRSInfo uj_emlrtRSI = { 539,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo vj_emlrtRSI = { 523,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo wj_emlrtRSI = { 524,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo xj_emlrtRSI = { 526,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo yj_emlrtRSI = { 527,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo ak_emlrtRSI = { 528,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo bk_emlrtRSI = { 529,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo ck_emlrtRSI = { 531,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo dk_emlrtRSI = { 123,/* lineNo */
  "randn",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\randfun\\randn.m"/* pathName */
};

static emlrtRSInfo ek_emlrtRSI = { 40, /* lineNo */
  "eml_randn",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\randfun\\private\\eml_randn.m"/* pathName */
};

static emlrtRSInfo fk_emlrtRSI = { 21, /* lineNo */
  "eml_rand_mt19937ar_stateful",       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\randfun\\private\\eml_rand_mt19937ar_stateful.m"/* pathName */
};

static emlrtRSInfo gk_emlrtRSI = { 56, /* lineNo */
  "eml_rand_mt19937ar",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\randfun\\eml_rand_mt19937ar.m"/* pathName */
};

static emlrtRSInfo hk_emlrtRSI = { 438,/* lineNo */
  "eml_rand_mt19937ar",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\randfun\\eml_rand_mt19937ar.m"/* pathName */
};

static emlrtRSInfo ik_emlrtRSI = { 447,/* lineNo */
  "eml_rand_mt19937ar",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\randfun\\eml_rand_mt19937ar.m"/* pathName */
};

static emlrtRSInfo jk_emlrtRSI = { 449,/* lineNo */
  "eml_rand_mt19937ar",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\randfun\\eml_rand_mt19937ar.m"/* pathName */
};

static emlrtRSInfo kk_emlrtRSI = { 1518,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo lk_emlrtRSI = { 1531,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo mk_emlrtRSI = { 103,/* lineNo */
  "colon",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pathName */
};

static emlrtRSInfo nk_emlrtRSI = { 288,/* lineNo */
  "colon",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pathName */
};

static emlrtRSInfo ok_emlrtRSI = { 611,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo pk_emlrtRSI = { 1005,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo qk_emlrtRSI = { 1,  /* lineNo */
  "matlabCodegenHandle",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\coder\\coder\\+coder\\+internal\\matlabCodegenHandle.p"/* pathName */
};

static emlrtMCInfo emlrtMCI = { 1,     /* lineNo */
  1,                                   /* colNo */
  "SystemCore",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\SystemCore.p"/* pName */
};

static emlrtMCInfo b_emlrtMCI = { 158, /* lineNo */
  17,                                  /* colNo */
  "eml_rand_mt19937ar",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\randfun\\eml_rand_mt19937ar.m"/* pName */
};

static emlrtMCInfo c_emlrtMCI = { 13,  /* lineNo */
  37,                                  /* colNo */
  "validatenonempty",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatenonempty.m"/* pName */
};

static emlrtMCInfo d_emlrtMCI = { 28,  /* lineNo */
  9,                                   /* colNo */
  "error",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\error.m"/* pName */
};

static emlrtMCInfo e_emlrtMCI = { 14,  /* lineNo */
  37,                                  /* colNo */
  "validatenonnan",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatenonnan.m"/* pName */
};

static emlrtMCInfo f_emlrtMCI = { 14,  /* lineNo */
  37,                                  /* colNo */
  "validatefinite",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatefinite.m"/* pName */
};

static emlrtMCInfo g_emlrtMCI = { 115, /* lineNo */
  9,                                   /* colNo */
  "validatestring",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\lang\\validatestring.m"/* pName */
};

static emlrtMCInfo h_emlrtMCI = { 107, /* lineNo */
  9,                                   /* colNo */
  "validatestring",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\lang\\validatestring.m"/* pName */
};

static emlrtMCInfo i_emlrtMCI = { 15,  /* lineNo */
  9,                                   /* colNo */
  "assertSupportedString",             /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\assertSupportedString.m"/* pName */
};

static emlrtMCInfo j_emlrtMCI = { 14,  /* lineNo */
  25,                                  /* colNo */
  "warning",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\warning.m"/* pName */
};

static emlrtMCInfo k_emlrtMCI = { 14,  /* lineNo */
  9,                                   /* colNo */
  "warning",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\warning.m"/* pName */
};

static emlrtMCInfo l_emlrtMCI = { 58,  /* lineNo */
  23,                                  /* colNo */
  "assertValidSizeArg",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\assertValidSizeArg.m"/* pName */
};

static emlrtMCInfo m_emlrtMCI = { 64,  /* lineNo */
  15,                                  /* colNo */
  "assertValidSizeArg",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\assertValidSizeArg.m"/* pName */
};

static emlrtMCInfo n_emlrtMCI = { 21,  /* lineNo */
  9,                                   /* colNo */
  "error",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\error.m"/* pName */
};

static emlrtMCInfo o_emlrtMCI = { 53,  /* lineNo */
  19,                                  /* colNo */
  "flt2str",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\flt2str.m"/* pName */
};

static emlrtMCInfo p_emlrtMCI = { 13,  /* lineNo */
  9,                                   /* colNo */
  "sqrt",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\elfun\\sqrt.m"/* pName */
};

static emlrtMCInfo q_emlrtMCI = { 14,  /* lineNo */
  37,                                  /* colNo */
  "validatenonnegative",               /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatenonnegative.m"/* pName */
};

static emlrtMCInfo r_emlrtMCI = { 10,  /* lineNo */
  23,                                  /* colNo */
  "validatesize",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatesize.m"/* pName */
};

static emlrtMCInfo s_emlrtMCI = { 15,  /* lineNo */
  19,                                  /* colNo */
  "validatesize",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatesize.m"/* pName */
};

static emlrtMCInfo t_emlrtMCI = { 121, /* lineNo */
  5,                                   /* colNo */
  "indexShapeCheck",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\indexShapeCheck.m"/* pName */
};

static emlrtMCInfo u_emlrtMCI = { 20,  /* lineNo */
  15,                                  /* colNo */
  "rdivide_helper",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\rdivide_helper.m"/* pName */
};

static emlrtMCInfo v_emlrtMCI = { 26,  /* lineNo */
  27,                                  /* colNo */
  "unaryMinOrMax",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pName */
};

static emlrtMCInfo w_emlrtMCI = { 95,  /* lineNo */
  27,                                  /* colNo */
  "unaryMinOrMax",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pName */
};

static emlrtMCInfo x_emlrtMCI = { 283, /* lineNo */
  27,                                  /* colNo */
  "cat",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pName */
};

static emlrtMCInfo y_emlrtMCI = { 18,  /* lineNo */
  23,                                  /* colNo */
  "validatencols",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatencols.m"/* pName */
};

static emlrtMCInfo ab_emlrtMCI = { 158,/* lineNo */
  23,                                  /* colNo */
  "eml_mtimes_helper",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pName */
};

static emlrtMCInfo bb_emlrtMCI = { 153,/* lineNo */
  23,                                  /* colNo */
  "eml_mtimes_helper",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pName */
};

static emlrtMCInfo cb_emlrtMCI = { 269,/* lineNo */
  13,                                  /* colNo */
  "xzsvdc",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzsvdc.m"/* pName */
};

static emlrtMCInfo db_emlrtMCI = { 57, /* lineNo */
  13,                                  /* colNo */
  "SystemTimeProvider",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\shared\\robotics\\robotcore\\+robotics\\+core\\+internal\\SystemTimeProvider.m"/* pName */
};

static emlrtMCInfo eb_emlrtMCI = { 16, /* lineNo */
  19,                                  /* colNo */
  "mldivide",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\ops\\mldivide.m"/* pName */
};

static emlrtMCInfo fb_emlrtMCI = { 47, /* lineNo */
  5,                                   /* colNo */
  "repmat",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"/* pName */
};

static emlrtMCInfo gb_emlrtMCI = { 405,/* lineNo */
  15,                                  /* colNo */
  "colon",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pName */
};

static emlrtMCInfo hb_emlrtMCI = { 47, /* lineNo */
  19,                                  /* colNo */
  "allOrAny",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\allOrAny.m"/* pName */
};

static emlrtMCInfo ib_emlrtMCI = { 14, /* lineNo */
  15,                                  /* colNo */
  "inv",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m"/* pName */
};

static emlrtMCInfo jb_emlrtMCI = { 102,/* lineNo */
  19,                                  /* colNo */
  "diag",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\elmat\\diag.m"/* pName */
};

static emlrtMCInfo kb_emlrtMCI = { 83, /* lineNo */
  1,                                   /* colNo */
  "find",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pName */
};

static emlrtMCInfo lb_emlrtMCI = { 387,/* lineNo */
  1,                                   /* colNo */
  "find",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pName */
};

static emlrtMCInfo mb_emlrtMCI = { 99, /* lineNo */
  5,                                   /* colNo */
  "chol",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\matfun\\chol.m"/* pName */
};

static emlrtRTEInfo emlrtRTEI = { 905, /* lineNo */
  21,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pName */
};

static emlrtBCInfo emlrtBCI = { 0,     /* iFirst */
  2,                                   /* iLast */
  906,                                 /* lineNo */
  28,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { 0,   /* iFirst */
  2,                                   /* iLast */
  468,                                 /* lineNo */
  34,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo emlrtDCI = { 468,   /* lineNo */
  34,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo b_emlrtDCI = { 70,  /* lineNo */
  17,                                  /* colNo */
  "VisualizationInfo",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\VisualizationInfo.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { 1,   /* iFirst */
  62,                                  /* iLast */
  70,                                  /* lineNo */
  17,                                  /* colNo */
  "",                                  /* aName */
  "VisualizationInfo",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\VisualizationInfo.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c_emlrtDCI = { 221, /* lineNo */
  24,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo d_emlrtDCI = { 230, /* lineNo */
  36,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { 1,   /* iFirst */
  3,                                   /* iLast */
  230,                                 /* lineNo */
  36,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo e_emlrtDCI = { 243, /* lineNo */
  36,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { 1,   /* iFirst */
  3,                                   /* iLast */
  243,                                 /* lineNo */
  36,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo f_emlrtDCI = { 244, /* lineNo */
  36,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { 1,   /* iFirst */
  3,                                   /* iLast */
  244,                                 /* lineNo */
  36,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo g_emlrtDCI = { 246, /* lineNo */
  36,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = { 1,   /* iFirst */
  3,                                   /* iLast */
  246,                                 /* lineNo */
  36,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo h_emlrtDCI = { 247, /* lineNo */
  36,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { 1,   /* iFirst */
  3,                                   /* iLast */
  247,                                 /* lineNo */
  36,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = { 0,   /* iFirst */
  2,                                   /* iLast */
  221,                                 /* lineNo */
  24,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  3                                    /* checkKind */
};

static emlrtRTEInfo b_emlrtRTEI = { 923,/* lineNo */
  21,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pName */
};

static emlrtBCInfo j_emlrtBCI = { 0,   /* iFirst */
  2,                                   /* iLast */
  924,                                 /* lineNo */
  28,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo emlrtECI = { 2,     /* nDims */
  155,                                 /* lineNo */
  17,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtRTEInfo c_emlrtRTEI = { 503,/* lineNo */
  21,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pName */
};

static emlrtBCInfo k_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  509,                                 /* lineNo */
  49,                                  /* colNo */
  "",                                  /* aName */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  510,                                 /* lineNo */
  52,                                  /* colNo */
  "",                                  /* aName */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo i_emlrtDCI = { 507, /* lineNo */
  23,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  507,                                 /* lineNo */
  23,                                  /* colNo */
  "",                                  /* aName */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo j_emlrtDCI = { 507, /* lineNo */
  25,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  507,                                 /* lineNo */
  25,                                  /* colNo */
  "",                                  /* aName */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo k_emlrtDCI = { 507, /* lineNo */
  35,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  507,                                 /* lineNo */
  35,                                  /* colNo */
  "",                                  /* aName */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo l_emlrtDCI = { 507, /* lineNo */
  37,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  507,                                 /* lineNo */
  37,                                  /* colNo */
  "",                                  /* aName */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo b_emlrtECI = { -1,  /* nDims */
  507,                                 /* lineNo */
  21,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pName */
};

static emlrtDCInfo m_emlrtDCI = { 508, /* lineNo */
  23,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  508,                                 /* lineNo */
  23,                                  /* colNo */
  "",                                  /* aName */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo n_emlrtDCI = { 508, /* lineNo */
  25,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  508,                                 /* lineNo */
  25,                                  /* colNo */
  "",                                  /* aName */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo o_emlrtDCI = { 508, /* lineNo */
  35,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  508,                                 /* lineNo */
  35,                                  /* colNo */
  "",                                  /* aName */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo p_emlrtDCI = { 508, /* lineNo */
  42,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  508,                                 /* lineNo */
  42,                                  /* colNo */
  "",                                  /* aName */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo c_emlrtECI = { -1,  /* nDims */
  508,                                 /* lineNo */
  21,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pName */
};

static emlrtRTEInfo d_emlrtRTEI = { 1720,/* lineNo */
  21,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pName */
};

static emlrtDCInfo q_emlrtDCI = { 1724,/* lineNo */
  28,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  1724,                                /* lineNo */
  28,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo r_emlrtDCI = { 1724,/* lineNo */
  30,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo v_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  1724,                                /* lineNo */
  30,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo d_emlrtECI = { -1,  /* nDims */
  1724,                                /* lineNo */
  21,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pName */
};

static emlrtECInfo e_emlrtECI = { 1,   /* nDims */
  146,                                 /* lineNo */
  13,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pName */
};

static emlrtDCInfo s_emlrtDCI = { 498, /* lineNo */
  23,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo t_emlrtDCI = { 498, /* lineNo */
  23,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo u_emlrtDCI = { 498, /* lineNo */
  26,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo v_emlrtDCI = { 1718,/* lineNo */
  28,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo w_emlrtDCI = { 1718,/* lineNo */
  28,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo x_emlrtDCI = { 499, /* lineNo */
  13,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo w_emlrtBCI = { 0,   /* iFirst */
  2,                                   /* iLast */
  504,                                 /* lineNo */
  25,                                  /* colNo */
  "",                                  /* aName */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo x_emlrtBCI = { 0,   /* iFirst */
  2,                                   /* iLast */
  1721,                                /* lineNo */
  24,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo y_emlrtDCI = { 146, /* lineNo */
  23,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo ab_emlrtDCI = { 146,/* lineNo */
  23,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo y_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  509,                                 /* lineNo */
  21,                                  /* colNo */
  "",                                  /* aName */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo bb_emlrtDCI = { 509,/* lineNo */
  21,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ab_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  510,                                 /* lineNo */
  21,                                  /* colNo */
  "",                                  /* aName */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo cb_emlrtDCI = { 627,/* lineNo */
  34,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo db_emlrtDCI = { 627,/* lineNo */
  34,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo bb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  638,                                 /* lineNo */
  39,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo eb_emlrtDCI = { 638,/* lineNo */
  39,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo cb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  638,                                 /* lineNo */
  37,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo f_emlrtECI = { -1,  /* nDims */
  634,                                 /* lineNo */
  21,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pName */
};

static emlrtBCInfo db_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  631,                                 /* lineNo */
  33,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo eb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1531,                                /* lineNo */
  38,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1531,                                /* lineNo */
  36,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo g_emlrtECI = { -1,  /* nDims */
  318,                                 /* lineNo */
  13,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pName */
};

static emlrtDCInfo fb_emlrtDCI = { 315,/* lineNo */
  13,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo gb_emlrtDCI = { 315,/* lineNo */
  13,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo gb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1527,                                /* lineNo */
  21,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hb_emlrtBCI = { 0,  /* iFirst */
  2,                                   /* iLast */
  1528,                                /* lineNo */
  28,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo hb_emlrtDCI = { 1528,/* lineNo */
  28,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ib_emlrtBCI = { 1,  /* iFirst */
  3,                                   /* iLast */
  626,                                 /* lineNo */
  46,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ib_emlrtDCI = { 626,/* lineNo */
  46,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo jb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  626,                                 /* lineNo */
  58,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo jb_emlrtDCI = { 318,/* lineNo */
  19,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo kb_emlrtBCI = { 1,  /* iFirst */
  2,                                   /* iLast */
  318,                                 /* lineNo */
  19,                                  /* colNo */
  "",                                  /* aName */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo kb_emlrtDCI = { 634,/* lineNo */
  32,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo lb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  634,                                 /* lineNo */
  32,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo h_emlrtECI = { -1,  /* nDims */
  1167,                                /* lineNo */
  20,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pName */
};

static emlrtECInfo i_emlrtECI = { -1,  /* nDims */
  1168,                                /* lineNo */
  20,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pName */
};

static emlrtECInfo j_emlrtECI = { -1,  /* nDims */
  1176,                                /* lineNo */
  21,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pName */
};

static emlrtECInfo k_emlrtECI = { -1,  /* nDims */
  1179,                                /* lineNo */
  21,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pName */
};

static emlrtBCInfo mb_emlrtBCI = { 1,  /* iFirst */
  2,                                   /* iLast */
  1176,                                /* lineNo */
  26,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo nb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1176,                                /* lineNo */
  63,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ob_emlrtBCI = { 1,  /* iFirst */
  2,                                   /* iLast */
  1179,                                /* lineNo */
  26,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo pb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1179,                                /* lineNo */
  63,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo l_emlrtECI = { -1,  /* nDims */
  143,                                 /* lineNo */
  17,                                  /* colNo */
  "NLPSolverInterface",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\shared\\robotics\\robotcore\\+robotics\\+core\\+internal\\NLPSolverInterface.m"/* pName */
};

static emlrtRTEInfo e_emlrtRTEI = { 536,/* lineNo */
  21,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pName */
};

static emlrtBCInfo qb_emlrtBCI = { 1,  /* iFirst */
  3,                                   /* iLast */
  537,                                 /* lineNo */
  40,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo lb_emlrtDCI = { 540,/* lineNo */
  23,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo rb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  540,                                 /* lineNo */
  23,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo mb_emlrtDCI = { 540,/* lineNo */
  28,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo sb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  540,                                 /* lineNo */
  28,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo m_emlrtECI = { -1,  /* nDims */
  540,                                 /* lineNo */
  21,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pName */
};

static emlrtDCInfo nb_emlrtDCI = { 517,/* lineNo */
  20,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m",/* pName */
  1                                    /* checkKind */
};

static emlrtECInfo n_emlrtECI = { -1,  /* nDims */
  525,                                 /* lineNo */
  40,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtECInfo o_emlrtECI = { -1,  /* nDims */
  525,                                 /* lineNo */
  35,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtECInfo p_emlrtECI = { -1,  /* nDims */
  525,                                 /* lineNo */
  30,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtECInfo q_emlrtECI = { -1,  /* nDims */
  527,                                 /* lineNo */
  30,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtECInfo r_emlrtECI = { -1,  /* nDims */
  529,                                 /* lineNo */
  30,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtDCInfo ob_emlrtDCI = { 142,/* lineNo */
  17,                                  /* colNo */
  "NLPSolverInterface",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\shared\\robotics\\robotcore\\+robotics\\+core\\+internal\\NLPSolverInterface.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo pb_emlrtDCI = { 142,/* lineNo */
  17,                                  /* colNo */
  "NLPSolverInterface",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\shared\\robotics\\robotcore\\+robotics\\+core\\+internal\\NLPSolverInterface.m",/* pName */
  4                                    /* checkKind */
};

static emlrtECInfo s_emlrtECI = { 2,   /* nDims */
  371,                                 /* lineNo */
  25,                                  /* colNo */
  "DampedBFGSwGradientProjection",     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\shared\\robotics\\robotcore\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjection.m"/* pName */
};

static emlrtECInfo t_emlrtECI = { -1,  /* nDims */
  358,                                 /* lineNo */
  25,                                  /* colNo */
  "DampedBFGSwGradientProjection",     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\shared\\robotics\\robotcore\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjection.m"/* pName */
};

static emlrtBCInfo tb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  349,                                 /* lineNo */
  48,                                  /* colNo */
  "",                                  /* aName */
  "DampedBFGSwGradientProjection",     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\shared\\robotics\\robotcore\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjection.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo u_emlrtECI = { -1,  /* nDims */
  291,                                 /* lineNo */
  32,                                  /* colNo */
  "DampedBFGSwGradientProjection",     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\shared\\robotics\\robotcore\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjection.m"/* pName */
};

static emlrtBCInfo ub_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  270,                                 /* lineNo */
  55,                                  /* colNo */
  "",                                  /* aName */
  "DampedBFGSwGradientProjection",     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\shared\\robotics\\robotcore\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjection.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo v_emlrtECI = { 2,   /* nDims */
  266,                                 /* lineNo */
  30,                                  /* colNo */
  "DampedBFGSwGradientProjection",     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\shared\\robotics\\robotcore\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjection.m"/* pName */
};

static emlrtBCInfo vb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  259,                                 /* lineNo */
  57,                                  /* colNo */
  "",                                  /* aName */
  "DampedBFGSwGradientProjection",     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\shared\\robotics\\robotcore\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjection.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo f_emlrtRTEI = { 220,/* lineNo */
  21,                                  /* colNo */
  "DampedBFGSwGradientProjection",     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\shared\\robotics\\robotcore\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjection.m"/* pName */
};

static emlrtBCInfo wb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  211,                                 /* lineNo */
  25,                                  /* colNo */
  "",                                  /* aName */
  "DampedBFGSwGradientProjection",     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\shared\\robotics\\robotcore\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjection.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo w_emlrtECI = { -1,  /* nDims */
  200,                                 /* lineNo */
  29,                                  /* colNo */
  "DampedBFGSwGradientProjection",     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\shared\\robotics\\robotcore\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjection.m"/* pName */
};

static emlrtBCInfo xb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  201,                                 /* lineNo */
  45,                                  /* colNo */
  "",                                  /* aName */
  "DampedBFGSwGradientProjection",     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\shared\\robotics\\robotcore\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjection.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  288,                                 /* lineNo */
  47,                                  /* colNo */
  "",                                  /* aName */
  "DampedBFGSwGradientProjection",     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\shared\\robotics\\robotcore\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjection.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ac_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  289,                                 /* lineNo */
  50,                                  /* colNo */
  "",                                  /* aName */
  "DampedBFGSwGradientProjection",     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\shared\\robotics\\robotcore\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjection.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  262,                                 /* lineNo */
  26,                                  /* colNo */
  "",                                  /* aName */
  "DampedBFGSwGradientProjection",     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\shared\\robotics\\robotcore\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjection.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  263,                                 /* lineNo */
  54,                                  /* colNo */
  "",                                  /* aName */
  "DampedBFGSwGradientProjection",     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\shared\\robotics\\robotcore\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjection.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  351,                                 /* lineNo */
  21,                                  /* colNo */
  "",                                  /* aName */
  "DampedBFGSwGradientProjection",     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\shared\\robotics\\robotcore\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjection.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ec_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  352,                                 /* lineNo */
  49,                                  /* colNo */
  "",                                  /* aName */
  "DampedBFGSwGradientProjection",     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\shared\\robotics\\robotcore\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjection.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  296,                                 /* lineNo */
  51,                                  /* colNo */
  "",                                  /* aName */
  "DampedBFGSwGradientProjection",     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\shared\\robotics\\robotcore\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjection.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  297,                                 /* lineNo */
  32,                                  /* colNo */
  "",                                  /* aName */
  "DampedBFGSwGradientProjection",     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\shared\\robotics\\robotcore\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjection.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo x_emlrtECI = { -1,  /* nDims */
  1427,                                /* lineNo */
  29,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pName */
};

static emlrtBCInfo hc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1427,                                /* lineNo */
  43,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo qb_emlrtDCI = { 1427,/* lineNo */
  43,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ic_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1427,                                /* lineNo */
  35,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo rb_emlrtDCI = { 1427,/* lineNo */
  35,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo jc_emlrtBCI = { 1,  /* iFirst */
  3,                                   /* iLast */
  1405,                                /* lineNo */
  55,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo sb_emlrtDCI = { 1405,/* lineNo */
  55,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo kc_emlrtBCI = { 1,  /* iFirst */
  2,                                   /* iLast */
  1403,                                /* lineNo */
  72,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo tb_emlrtDCI = { 1403,/* lineNo */
  72,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo lc_emlrtBCI = { 1,  /* iFirst */
  2,                                   /* iLast */
  1403,                                /* lineNo */
  64,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ub_emlrtDCI = { 1403,/* lineNo */
  64,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo mc_emlrtBCI = { 1,  /* iFirst */
  3,                                   /* iLast */
  1402,                                /* lineNo */
  51,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo vb_emlrtDCI = { 1402,/* lineNo */
  51,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo nc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1488,                                /* lineNo */
  43,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo oc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1490,                                /* lineNo */
  41,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1511,                                /* lineNo */
  33,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1511,                                /* lineNo */
  31,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1501,                                /* lineNo */
  21,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo wb_emlrtDCI = { 1499,/* lineNo */
  31,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo xb_emlrtDCI = { 1499,/* lineNo */
  31,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo yb_emlrtDCI = { 1370,/* lineNo */
  32,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo ac_emlrtDCI = { 1370,/* lineNo */
  32,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo sc_emlrtBCI = { 0,  /* iFirst */
  2,                                   /* iLast */
  1360,                                /* lineNo */
  29,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tc_emlrtBCI = { 0,  /* iFirst */
  2,                                   /* iLast */
  1365,                                /* lineNo */
  29,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo uc_emlrtBCI = { 0,  /* iFirst */
  2,                                   /* iLast */
  1503,                                /* lineNo */
  24,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo bc_emlrtDCI = { 1503,/* lineNo */
  24,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo vc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1508,                                /* lineNo */
  17,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1504,                                /* lineNo */
  17,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1482,                                /* lineNo */
  20,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1482,                                /* lineNo */
  47,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ad_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1487,                                /* lineNo */
  35,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1372,                                /* lineNo */
  24,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1377,                                /* lineNo */
  24,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dd_emlrtBCI = { 0,  /* iFirst */
  2,                                   /* iLast */
  1373,                                /* lineNo */
  39,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo cc_emlrtDCI = { 1373,/* lineNo */
  39,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ed_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1373,                                /* lineNo */
  39,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fd_emlrtBCI = { 0,  /* iFirst */
  2,                                   /* iLast */
  1378,                                /* lineNo */
  36,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo dc_emlrtDCI = { 1378,/* lineNo */
  36,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo gd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1378,                                /* lineNo */
  36,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  44,                                  /* lineNo */
  24,                                  /* colNo */
  "",                                  /* aName */
  "axang2rotm",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\shared\\robotics\\robotcore\\axang2rotm.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo id_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  61,                                  /* lineNo */
  23,                                  /* colNo */
  "",                                  /* aName */
  "IKHelpers",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\IKHelpers.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  59,                                  /* lineNo */
  19,                                  /* colNo */
  "",                                  /* aName */
  "IKHelpers",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\IKHelpers.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  59,                                  /* lineNo */
  23,                                  /* colNo */
  "",                                  /* aName */
  "IKHelpers",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\IKHelpers.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ld_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  61,                                  /* lineNo */
  19,                                  /* colNo */
  "",                                  /* aName */
  "IKHelpers",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\IKHelpers.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo y_emlrtECI = { -1,  /* nDims */
  47,                                  /* lineNo */
  5,                                   /* colNo */
  "rotm2axang",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\shared\\robotics\\robotcore\\rotm2axang.m"/* pName */
};

static emlrtBCInfo md_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  45,                                  /* lineNo */
  20,                                  /* colNo */
  "",                                  /* aName */
  "rotm2axang",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\shared\\robotics\\robotcore\\rotm2axang.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  44,                                  /* lineNo */
  41,                                  /* colNo */
  "",                                  /* aName */
  "rotm2axang",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\shared\\robotics\\robotcore\\rotm2axang.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo ab_emlrtECI = { -1, /* nDims */
  419,                                 /* lineNo */
  45,                                  /* colNo */
  "DampedBFGSwGradientProjection",     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\shared\\robotics\\robotcore\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjection.m"/* pName */
};

static emlrtDCInfo ec_emlrtDCI = { 13, /* lineNo */
  24,                                  /* colNo */
  "eml_rand_mt19937ar_stateful",       /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\randfun\\private\\eml_rand_mt19937ar_stateful.m",/* pName */
  4                                    /* checkKind */
};

static emlrtRSInfo rk_emlrtRSI = { 269,/* lineNo */
  "xzsvdc",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzsvdc.m"/* pathName */
};

static emlrtRSInfo sk_emlrtRSI = { 95, /* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo tk_emlrtRSI = { 20, /* lineNo */
  "rdivide_helper",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\rdivide_helper.m"/* pathName */
};

static emlrtRSInfo uk_emlrtRSI = { 26, /* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo vk_emlrtRSI = { 13, /* lineNo */
  "sqrt",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\elfun\\sqrt.m"/* pathName */
};

static emlrtRSInfo wk_emlrtRSI = { 15, /* lineNo */
  "validatesize",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatesize.m"/* pathName */
};

static emlrtRSInfo xk_emlrtRSI = { 14, /* lineNo */
  "validatefinite",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatefinite.m"/* pathName */
};

static emlrtRSInfo yk_emlrtRSI = { 14, /* lineNo */
  "validatenonnan",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatenonnan.m"/* pathName */
};

static emlrtRSInfo al_emlrtRSI = { 28, /* lineNo */
  "error",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\error.m"/* pathName */
};

static emlrtRSInfo bl_emlrtRSI = { 14, /* lineNo */
  "validatenonnegative",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatenonnegative.m"/* pathName */
};

static emlrtRSInfo cl_emlrtRSI = { 15, /* lineNo */
  "assertSupportedString",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\assertSupportedString.m"/* pathName */
};

static emlrtRSInfo dl_emlrtRSI = { 13, /* lineNo */
  "validatenonempty",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatenonempty.m"/* pathName */
};

static emlrtRSInfo el_emlrtRSI = { 158,/* lineNo */
  "eml_rand_mt19937ar",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\randfun\\eml_rand_mt19937ar.m"/* pathName */
};

static emlrtRSInfo fl_emlrtRSI = { 10, /* lineNo */
  "validatesize",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatesize.m"/* pathName */
};

static emlrtRSInfo gl_emlrtRSI = { 99, /* lineNo */
  "chol",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\matfun\\chol.m"/* pathName */
};

static emlrtRSInfo hl_emlrtRSI = { 153,/* lineNo */
  "eml_mtimes_helper",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pathName */
};

static emlrtRSInfo il_emlrtRSI = { 158,/* lineNo */
  "eml_mtimes_helper",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pathName */
};

static emlrtRSInfo jl_emlrtRSI = { 47, /* lineNo */
  "allOrAny",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\allOrAny.m"/* pathName */
};

static emlrtRSInfo kl_emlrtRSI = { 387,/* lineNo */
  "find",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pathName */
};

static emlrtRSInfo ll_emlrtRSI = { 102,/* lineNo */
  "diag",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\elmat\\diag.m"/* pathName */
};

static emlrtRSInfo ml_emlrtRSI = { 14, /* lineNo */
  "inv",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m"/* pathName */
};

static emlrtRSInfo nl_emlrtRSI = { 405,/* lineNo */
  "colon",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pathName */
};

static emlrtRSInfo ol_emlrtRSI = { 16, /* lineNo */
  "mldivide",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\ops\\mldivide.m"/* pathName */
};

static emlrtRSInfo pl_emlrtRSI = { 18, /* lineNo */
  "validatencols",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatencols.m"/* pathName */
};

static emlrtRSInfo ql_emlrtRSI = { 283,/* lineNo */
  "cat",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pathName */
};

static emlrtRSInfo rl_emlrtRSI = { 121,/* lineNo */
  "indexShapeCheck",                   /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\indexShapeCheck.m"/* pathName */
};

static emlrtRSInfo sl_emlrtRSI = { 21, /* lineNo */
  "error",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\error.m"/* pathName */
};

static emlrtRSInfo tl_emlrtRSI = { 64, /* lineNo */
  "assertValidSizeArg",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\assertValidSizeArg.m"/* pathName */
};

static emlrtRSInfo ul_emlrtRSI = { 58, /* lineNo */
  "assertValidSizeArg",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\assertValidSizeArg.m"/* pathName */
};

static emlrtRSInfo vl_emlrtRSI = { 107,/* lineNo */
  "validatestring",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\lang\\validatestring.m"/* pathName */
};

static emlrtRSInfo wl_emlrtRSI = { 115,/* lineNo */
  "validatestring",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\lang\\validatestring.m"/* pathName */
};

static emlrtRSInfo xl_emlrtRSI = { 14, /* lineNo */
  "warning",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\warning.m"/* pathName */
};

static emlrtRSInfo yl_emlrtRSI = { 53, /* lineNo */
  "flt2str",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\flt2str.m"/* pathName */
};

static emlrtRSInfo am_emlrtRSI = { 1488,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

/* Function Declarations */
static void cgxe_mdl_start(InstanceStruct_99HJ2LsbXT8ZQdi4PHECuF *moduleInstance);
static void cgxe_mdl_initialize(InstanceStruct_99HJ2LsbXT8ZQdi4PHECuF
  *moduleInstance);
static void cgxe_mdl_outputs(InstanceStruct_99HJ2LsbXT8ZQdi4PHECuF
  *moduleInstance);
static void cgxe_mdl_update(InstanceStruct_99HJ2LsbXT8ZQdi4PHECuF
  *moduleInstance);
static void cgxe_mdl_enable(InstanceStruct_99HJ2LsbXT8ZQdi4PHECuF
  *moduleInstance);
static void cgxe_mdl_disable(InstanceStruct_99HJ2LsbXT8ZQdi4PHECuF
  *moduleInstance);
static void cgxe_mdl_terminate(InstanceStruct_99HJ2LsbXT8ZQdi4PHECuF
  *moduleInstance);
static void mw__internal__system__init__fcn
  (InstanceStruct_99HJ2LsbXT8ZQdi4PHECuF *moduleInstance);
static void mw__internal__system__terminate__fcn
  (InstanceStruct_99HJ2LsbXT8ZQdi4PHECuF *moduleInstance);
static void mw__internal__call__setup(InstanceStruct_99HJ2LsbXT8ZQdi4PHECuF
  *moduleInstance, const emlrtStack *sp);
static void SystemCore_setup(InstanceStruct_99HJ2LsbXT8ZQdi4PHECuF
  *moduleInstance, const emlrtStack *sp, robotics_slmanip_internal_block_IKBlock
  *obj, robotics_manip_internal_RigidBody *iobj_0,
  robotics_manip_internal_RigidBody *iobj_1, robotics_manip_internal_RigidBody
  *iobj_2, robotics_core_internal_DampedBFGSwGradientProjection *iobj_3,
  robotics_manip_internal_RigidBodyTree_1 *iobj_4,
  robotics_manip_internal_RigidBody_1 *iobj_5,
  robotics_manip_internal_RigidBody_1 *iobj_6,
  robotics_manip_internal_RigidBody_1 *iobj_7,
  robotics_manip_internal_RigidBody_1 *iobj_8,
  robotics_manip_internal_RigidBody_1 *iobj_9,
  robotics_manip_internal_RigidBody_1 *iobj_10, rigidBodyJoint *iobj_11,
  rigidBodyJoint *iobj_12, rigidBodyJoint *iobj_13, rigidBodyJoint *iobj_14,
  rigidBodyJoint *iobj_15, rigidBodyJoint *iobj_16, rigidBodyJoint *iobj_17,
  rigidBodyJoint *iobj_18, rigidBodyJoint *iobj_19, rigidBodyJoint *iobj_20);
static robotics_manip_internal_RigidBodyTree *RigidBodyTree_RigidBodyTree
  (robotics_manip_internal_RigidBodyTree *obj, robotics_manip_internal_RigidBody
   *iobj_0, robotics_manip_internal_RigidBody *iobj_1,
   robotics_manip_internal_RigidBody *iobj_2);
static robotics_manip_internal_RigidBody *RigidBody_RigidBody
  (robotics_manip_internal_RigidBody *obj);
static boolean_T b_strcmp(emxArray_char_T *a);
static boolean_T c_strcmp(emxArray_char_T *a);
static rigidBodyJoint *rigidBodyJoint_rigidBodyJoint(rigidBodyJoint *obj);
static robotics_manip_internal_RigidBodyTree_1 *b_RigidBodyTree_RigidBodyTree
  (InstanceStruct_99HJ2LsbXT8ZQdi4PHECuF *moduleInstance, const emlrtStack *sp,
   robotics_manip_internal_RigidBodyTree_1 *obj, rigidBodyJoint *iobj_0,
   robotics_manip_internal_RigidBody_1 *iobj_1,
   robotics_manip_internal_RigidBody_1 *iobj_2,
   robotics_manip_internal_RigidBody_1 *iobj_3, rigidBodyJoint *iobj_4,
   rigidBodyJoint *iobj_5, rigidBodyJoint *iobj_6);
static void b_rand(InstanceStruct_99HJ2LsbXT8ZQdi4PHECuF *moduleInstance, const
                   emlrtStack *sp, real_T r[5]);
static boolean_T is_valid_state(uint32_T mt[625]);
static void RigidBodyTree_clearAllBodies(InstanceStruct_99HJ2LsbXT8ZQdi4PHECuF
  *moduleInstance, const emlrtStack *sp, robotics_manip_internal_RigidBodyTree_1
  *obj, robotics_manip_internal_RigidBody_1 *iobj_0, rigidBodyJoint *iobj_1,
  robotics_manip_internal_RigidBody_1 *iobj_2, rigidBodyJoint *iobj_3,
  robotics_manip_internal_RigidBody_1 *iobj_4, rigidBodyJoint *iobj_5);
static void validateattributes(const emlrtStack *sp, emxArray_char_T *a);
static void b_validateattributes(const emlrtStack *sp, emxArray_char_T *a);
static boolean_T d_strcmp(emxArray_char_T *a, emxArray_char_T *b_b);
static void error(const emlrtStack *sp, emxArray_char_T *varargin_1);
static void c_validateattributes(const emlrtStack *sp, real_T a[3]);
static void RigidBodyTree_addBody(const emlrtStack *sp,
  robotics_manip_internal_RigidBodyTree_1 *obj,
  robotics_manip_internal_RigidBody *bodyin, emxArray_char_T *parentName,
  robotics_manip_internal_RigidBody_1 *iobj_0, rigidBodyJoint *iobj_1,
  rigidBodyJoint *iobj_2);
static void b_error(const emlrtStack *sp, emxArray_char_T *varargin_1);
static void c_error(const emlrtStack *sp, emxArray_char_T *varargin_1);
static void d_error(const emlrtStack *sp);
static void d_validateattributes(const emlrtStack *sp, emxArray_char_T *a);
static void e_error(const emlrtStack *sp, emxArray_char_T *varargin_1);
static robotics_manip_internal_RigidBody_1 *RigidBody_copy(const emlrtStack *sp,
  robotics_manip_internal_RigidBody *obj, robotics_manip_internal_RigidBody_1
  *iobj_0, rigidBodyJoint *iobj_1, rigidBodyJoint *iobj_2);
static void e_validateattributes(const emlrtStack *sp, emxArray_char_T *a);
static rigidBodyJoint *b_rigidBodyJoint_rigidBodyJoint(const emlrtStack *sp,
  rigidBodyJoint *obj, emxArray_char_T *jname, emxArray_char_T *jtype);
static void get_match(const emlrtStack *sp, emxArray_char_T *str, char_T
                      match_data[], int32_T match_size[2], real_T *nmatched);
static void assertSupportedString(const emlrtStack *sp, char_T s);
static void warning(const emlrtStack *sp);
static boolean_T e_strcmp(emxArray_char_T *a);
static void b_RigidBodyTree_addBody(const emlrtStack *sp,
  robotics_manip_internal_RigidBodyTree_1 *obj,
  robotics_manip_internal_RigidBody *bodyin, emxArray_char_T *parentName,
  robotics_manip_internal_RigidBody_1 *iobj_0, rigidBodyJoint *iobj_1,
  rigidBodyJoint *iobj_2);
static void c_RigidBodyTree_addBody(const emlrtStack *sp,
  robotics_manip_internal_RigidBodyTree_1 *obj,
  robotics_manip_internal_RigidBody *bodyin, emxArray_char_T *parentName,
  robotics_manip_internal_RigidBody_1 *iobj_0, rigidBodyJoint *iobj_1,
  rigidBodyJoint *iobj_2);
static robotics_core_internal_DampedBFGSwGradientProjection
  *DampedBFGSwGradientProjection_DampedBFGSwGradientProjection
  (robotics_core_internal_DampedBFGSwGradientProjection *obj);
static robotics_core_internal_SystemTimeProvider
  *SystemTimeProvider_SystemTimeProvider
  (robotics_core_internal_SystemTimeProvider *obj);
static void DampedBFGSwGradientProjection_getSolverParams
  (robotics_core_internal_DampedBFGSwGradientProjection *obj, char_T
   params_Name[22], real_T *params_MaxNumIteration, real_T *params_MaxTime,
   real_T *params_GradientTolerance, real_T *params_SolutionTolerance, real_T
   *params_ArmijoRuleBeta, real_T *params_ArmijoRuleSigma, boolean_T
   *params_ConstraintsOn, boolean_T *params_RandomRestart, real_T
   *params_StepTolerance);
static void mw__internal__call__reset(InstanceStruct_99HJ2LsbXT8ZQdi4PHECuF
  *moduleInstance, const emlrtStack *sp);
static void mw__internal__call__step(InstanceStruct_99HJ2LsbXT8ZQdi4PHECuF
  *moduleInstance, const emlrtStack *sp, real_T b_u0[16], real_T b_u1[6], real_T
  b_u2[2], real_T c_y0[2], real_T *y1_Iterations, real_T *y1_PoseErrorNorm,
  uint16_T *y1_ExitFlag, uint8_T *y1_Status);
static void SystemCore_setupAndReset(InstanceStruct_99HJ2LsbXT8ZQdi4PHECuF
  *moduleInstance, const emlrtStack *sp, robotics_slmanip_internal_block_IKBlock
  *obj, robotics_manip_internal_RigidBody *iobj_0,
  robotics_manip_internal_RigidBody *iobj_1, robotics_manip_internal_RigidBody
  *iobj_2, robotics_core_internal_DampedBFGSwGradientProjection *iobj_3,
  robotics_manip_internal_RigidBodyTree_1 *iobj_4,
  robotics_manip_internal_RigidBody_1 *iobj_5,
  robotics_manip_internal_RigidBody_1 *iobj_6,
  robotics_manip_internal_RigidBody_1 *iobj_7,
  robotics_manip_internal_RigidBody_1 *iobj_8,
  robotics_manip_internal_RigidBody_1 *iobj_9,
  robotics_manip_internal_RigidBody_1 *iobj_10, rigidBodyJoint *iobj_11,
  rigidBodyJoint *iobj_12, rigidBodyJoint *iobj_13, rigidBodyJoint *iobj_14,
  rigidBodyJoint *iobj_15, rigidBodyJoint *iobj_16, rigidBodyJoint *iobj_17,
  rigidBodyJoint *iobj_18, rigidBodyJoint *iobj_19, rigidBodyJoint *iobj_20);
static void d_RigidBodyTree_addBody(const emlrtStack *sp,
  robotics_manip_internal_RigidBodyTree_1 *obj,
  robotics_manip_internal_RigidBody *bodyin, emxArray_char_T *parentName,
  robotics_manip_internal_RigidBody_1 *iobj_0, rigidBodyJoint *iobj_1,
  rigidBodyJoint *iobj_2);
static void e_RigidBodyTree_addBody(const emlrtStack *sp,
  robotics_manip_internal_RigidBodyTree_1 *obj,
  robotics_manip_internal_RigidBody *bodyin, emxArray_char_T *parentName,
  robotics_manip_internal_RigidBody_1 *iobj_0, rigidBodyJoint *iobj_1,
  rigidBodyJoint *iobj_2);
static void f_RigidBodyTree_addBody(const emlrtStack *sp,
  robotics_manip_internal_RigidBodyTree_1 *obj,
  robotics_manip_internal_RigidBody *bodyin, emxArray_char_T *parentName,
  robotics_manip_internal_RigidBody_1 *iobj_0, rigidBodyJoint *iobj_1,
  rigidBodyJoint *iobj_2);
static void inverseKinematics_setupImpl(const emlrtStack *sp, inverseKinematics *
  obj, robotics_manip_internal_IKExtraArgs *iobj_0);
static void eye(const emlrtStack *sp, real_T varargin_1, emxArray_real_T *b_I);
static void inverseKinematics_setPoseGoal(const emlrtStack *sp,
  inverseKinematics *obj, real_T tform[16], real_T weights[6]);
static boolean_T f_strcmp(emxArray_char_T *a);
static void RigidBodyTree_validateInputBodyName(const emlrtStack *sp,
  robotics_manip_internal_RigidBodyTree_1 *obj);
static void inv(const emlrtStack *sp, real_T x[9], real_T y[9]);
static void inv3x3(real_T x[9], real_T y[9]);
static real_T b_norm(real_T x[9]);
static void b_warning(const emlrtStack *sp);
static void c_warning(const emlrtStack *sp, char_T varargin_1[14]);
static void d_warning(const emlrtStack *sp);
static void inverseKinematics_solve(InstanceStruct_99HJ2LsbXT8ZQdi4PHECuF
  *moduleInstance, const emlrtStack *sp, inverseKinematics *obj, real_T
  initialGuess[2], real_T QSol[2], real_T *solutionInfo_Iterations, real_T
  *solutionInfo_NumRandomRestarts, real_T *solutionInfo_PoseErrorNorm, real_T
  *solutionInfo_ExitFlag, char_T solutionInfo_Status_data[], int32_T
  solutionInfo_Status_size[2]);
static void RigidBodyTree_validateConfigurationWithLimits(const emlrtStack *sp,
  robotics_manip_internal_RigidBodyTree_1 *obj, real_T Q[2], real_T qvec[2]);
static void eml_find(const emlrtStack *sp, boolean_T x[2], int32_T i_data[],
                     int32_T i_size[1]);
static void indexShapeCheck(const emlrtStack *sp, int32_T matrixSize, int32_T
  indexSize[2]);
static void e_warning(const emlrtStack *sp);
static void NLPSolverInterface_solve(InstanceStruct_99HJ2LsbXT8ZQdi4PHECuF
  *moduleInstance, const emlrtStack *sp,
  robotics_core_internal_DampedBFGSwGradientProjection *obj, real_T seed[2],
  real_T xSol[2], real_T *solutionInfo_Iterations, real_T
  *solutionInfo_RRAttempts, real_T *solutionInfo_Error, real_T
  *solutionInfo_ExitFlag, char_T solutionInfo_Status_data[], int32_T
  solutionInfo_Status_size[2]);
static void SystemTimeProvider_reset(robotics_core_internal_SystemTimeProvider
  *obj);
static void DampedBFGSwGradientProjection_solveInternal(const emlrtStack *sp,
  robotics_core_internal_DampedBFGSwGradientProjection *obj, real_T xSol[2],
  b_robotics_core_internal_NLPSolverExitFlags *exitFlag, real_T *err, real_T
  *iter);
static void IKHelpers_computeCost(const emlrtStack *sp, real_T x[2],
  robotics_manip_internal_IKExtraArgs *args, real_T *cost, real_T W[36],
  emxArray_real_T *Jac, robotics_manip_internal_IKExtraArgs **b_args);
static void RigidBodyTree_efficientFKAndJacobianForIK(const emlrtStack *sp,
  robotics_manip_internal_RigidBodyTree_1 *obj, real_T qv[2], emxArray_char_T
  *body1Name, real_T T_data[], int32_T T_size[2], emxArray_real_T *Jac);
static real_T b_RigidBodyTree_validateInputBodyName(const emlrtStack *sp,
  robotics_manip_internal_RigidBodyTree_1 *obj, emxArray_char_T *bodyname);
static real_T c_RigidBodyTree_validateInputBodyName(const emlrtStack *sp,
  robotics_manip_internal_RigidBodyTree_1 *obj, emxArray_char_T *bodyname);
static void rigidBodyJoint_transformBodyToParent(const emlrtStack *sp,
  rigidBodyJoint *obj, real_T T[16]);
static void normalizeRows(const emlrtStack *sp, real_T matrix[3], real_T
  normRowMatrix[3]);
static void cat(real_T varargin_1, real_T varargin_2, real_T varargin_3, real_T
                varargin_4, real_T varargin_5, real_T varargin_6, real_T
                varargin_7, real_T varargin_8, real_T varargin_9, real_T y[9]);
static void permute(real_T a[9], real_T b_b[9]);
static void b_rigidBodyJoint_transformBodyToParent(const emlrtStack *sp,
  rigidBodyJoint *obj, real_T q_data[], int32_T q_size[1], real_T T[16]);
static void rigidBodyJoint_jointTransform(const emlrtStack *sp, rigidBodyJoint
  *obj, real_T q_data[], int32_T q_size[1], real_T TJ[16]);
static void eml_mtimes_helper(real_T a[36], emxArray_real_T *b_b,
  emxArray_real_T *y);
static void mtimes(real_T A[36], emxArray_real_T *B, emxArray_real_T *C);
static void IKHelpers_poseError(const emlrtStack *sp, real_T Td[16], real_T
  T_data[], int32_T T_size[2], real_T errorvec[6]);
static void rotm2axang(const emlrtStack *sp, real_T R[9], real_T axang[4]);
static void svd(const emlrtStack *sp, real_T A[9], real_T U[9], real_T s[3],
                real_T V[9]);
static void xzsvdc(const emlrtStack *sp, real_T A[9], real_T U[9], real_T b_S[3],
                   real_T V[9]);
static real_T xnrm2(int32_T n, real_T x[9], int32_T ix0);
static real_T xdotc(int32_T n, real_T x[9], int32_T ix0, real_T y[9], int32_T
                    iy0);
static real_T b_xnrm2(real_T x[3], int32_T ix0);
static void b_mtimes(real_T A[6], emxArray_real_T *B, emxArray_real_T *C);
static void b_eye(real_T b_I[4]);
static void dynamic_size_checks(const emlrtStack *sp, emxArray_real_T *a,
  int32_T innerDimA);
static void c_mtimes(emxArray_real_T *A, real_T B[2], emxArray_real_T *C);
static void b_dynamic_size_checks(const emlrtStack *sp, emxArray_real_T *a,
  int32_T innerDimA);
static void d_mtimes(emxArray_real_T *A, real_T B[4], real_T C[2]);
static void REFxGEMM(emxArray_real_T *A, real_T B[4], real_T C[2]);
static void c_dynamic_size_checks(const emlrtStack *sp, emxArray_real_T *b_b,
  int32_T innerDimB);
static real_T xdotu(real_T x[2], emxArray_real_T *y);
static void d_dynamic_size_checks(const emlrtStack *sp, emxArray_real_T *b_b,
  int32_T innerDimB);
static void e_mtimes(real_T A[4], emxArray_real_T *B, emxArray_real_T *C);
static void e_dynamic_size_checks(const emlrtStack *sp, int32_T innerDimA);
static void f_mtimes(emxArray_real_T *A, real_T B[4], real_T C[4]);
static real_T SystemTimeProvider_getElapsedTime(const emlrtStack *sp,
  robotics_core_internal_SystemTimeProvider *obj);
static real_T IKHelpers_evaluateSolution(const emlrtStack *sp,
  robotics_manip_internal_IKExtraArgs *args);
static void f_dynamic_size_checks(const emlrtStack *sp, emxArray_real_T *b_b,
  int32_T innerDimB);
static real_T c_norm(real_T x[6]);
static void g_dynamic_size_checks(const emlrtStack *sp, emxArray_real_T *a,
  emxArray_real_T *b_b, int32_T innerDimA, int32_T innerDimB);
static void g_mtimes(emxArray_real_T *A, emxArray_real_T *B, emxArray_real_T *C);
static void mldivide(const emlrtStack *sp, emxArray_real_T *A, emxArray_real_T
                     *B, emxArray_real_T *Y);
static void repmat(ptrdiff_t a, int32_T varargin_1, emxArray_ptrdiff_t *b_b);
static void eml_integer_colon_dispatcher(const emlrtStack *sp, int32_T b_b,
  emxArray_int32_T *y);
static void assert_pmaxsize(const emlrtStack *sp, boolean_T p);
static void xtrsm(int32_T m, int32_T n, emxArray_real_T *A, int32_T lda,
                  emxArray_real_T *B, int32_T ldb, emxArray_real_T *b_B);
static void qrsolve(const emlrtStack *sp, emxArray_real_T *A, emxArray_real_T *B,
                    emxArray_real_T *Y);
static void f_warning(const emlrtStack *sp, int32_T varargin_1, char_T
                      varargin_2[14]);
static void h_dynamic_size_checks(const emlrtStack *sp, emxArray_real_T *a,
  emxArray_real_T *b_b, int32_T innerDimA, int32_T innerDimB);
static void h_mtimes(emxArray_real_T *A, emxArray_real_T *B, emxArray_real_T *C);
static void i_dynamic_size_checks(const emlrtStack *sp, emxArray_real_T *b_b,
  int32_T innerDimB);
static void i_mtimes(real_T A[4], emxArray_real_T *B, real_T C[2]);
static boolean_T DampedBFGSwGradientProjection_atLocalMinimum(const emlrtStack
  *sp, robotics_core_internal_DampedBFGSwGradientProjection *obj, real_T Hg[2],
  emxArray_real_T *alpha);
static real_T d_norm(real_T x[2]);
static boolean_T all(const emlrtStack *sp, emxArray_boolean_T *x);
static real_T b_IKHelpers_evaluateSolution(const emlrtStack *sp,
  robotics_manip_internal_IKExtraArgs *args);
static void b_inv(const emlrtStack *sp, emxArray_real_T *x, emxArray_real_T *y);
static real_T e_norm(emxArray_real_T *x);
static void diag(const emlrtStack *sp, emxArray_real_T *v, emxArray_real_T *d);
static boolean_T scalexpCompatible(emxArray_real_T *a, emxArray_real_T *b_b);
static void b_eml_find(const emlrtStack *sp, emxArray_boolean_T *x,
  emxArray_int32_T *i);
static void j_mtimes(emxArray_real_T *A, emxArray_real_T *B, emxArray_real_T *C);
static boolean_T any(const emlrtStack *sp, emxArray_boolean_T *x);
static void b_IKHelpers_computeCost(const emlrtStack *sp, real_T x[2],
  robotics_manip_internal_IKExtraArgs *args, real_T *cost, real_T W[36],
  emxArray_real_T *Jac, robotics_manip_internal_IKExtraArgs **b_args);
static void b_RigidBodyTree_efficientFKAndJacobianForIK(const emlrtStack *sp,
  robotics_manip_internal_RigidBodyTree_1 *obj, real_T qv[2], emxArray_char_T
  *body1Name, real_T T_data[], int32_T T_size[2], emxArray_real_T *Jac);
static real_T d_RigidBodyTree_validateInputBodyName(const emlrtStack *sp,
  robotics_manip_internal_RigidBodyTree_1 *obj, emxArray_char_T *bodyname);
static real_T e_RigidBodyTree_validateInputBodyName(const emlrtStack *sp,
  robotics_manip_internal_RigidBodyTree_1 *obj, emxArray_char_T *bodyname);
static void j_dynamic_size_checks(const emlrtStack *sp, emxArray_real_T *a,
  int32_T innerDimA);
static real_T k_mtimes(emxArray_real_T *A, real_T B[2]);
static real_T c_IKHelpers_evaluateSolution(const emlrtStack *sp,
  robotics_manip_internal_IKExtraArgs *args);
static void c_IKHelpers_computeCost(const emlrtStack *sp, real_T x[2],
  robotics_manip_internal_IKExtraArgs *args, real_T *cost, real_T W[36],
  emxArray_real_T *Jac, robotics_manip_internal_IKExtraArgs **b_args);
static void c_RigidBodyTree_efficientFKAndJacobianForIK(const emlrtStack *sp,
  robotics_manip_internal_RigidBodyTree_1 *obj, real_T qv[2], emxArray_char_T
  *body1Name, real_T T_data[], int32_T T_size[2], emxArray_real_T *Jac);
static real_T f_RigidBodyTree_validateInputBodyName(const emlrtStack *sp,
  robotics_manip_internal_RigidBodyTree_1 *obj, emxArray_char_T *bodyname);
static real_T g_RigidBodyTree_validateInputBodyName(const emlrtStack *sp,
  robotics_manip_internal_RigidBodyTree_1 *obj, emxArray_char_T *bodyname);
static void k_dynamic_size_checks(const emlrtStack *sp, emxArray_real_T *a,
  int32_T innerDimA);
static void l_mtimes(emxArray_real_T *A, real_T B[4], emxArray_real_T *C);
static void l_dynamic_size_checks(const emlrtStack *sp, int32_T innerDimB);
static void m_mtimes(real_T A[4], emxArray_real_T *B, real_T C[4]);
static void m_dynamic_size_checks(const emlrtStack *sp, emxArray_real_T *b_b,
  int32_T innerDimB);
static real_T n_mtimes(real_T A[2], emxArray_real_T *B);
static void n_dynamic_size_checks(const emlrtStack *sp, emxArray_real_T *a,
  int32_T innerDimA);
static void o_mtimes(real_T A[4], real_T B[4], real_T C[4]);
static boolean_T isPositiveDefinite(const emlrtStack *sp, real_T B[4]);
static real_T d_IKHelpers_evaluateSolution(const emlrtStack *sp,
  robotics_manip_internal_IKExtraArgs *args);
static boolean_T DampedBFGSwGradientProjection_searchDirectionInvalid(const
  emlrtStack *sp, robotics_core_internal_DampedBFGSwGradientProjection *obj,
  real_T xNew[2]);
static real_T e_IKHelpers_evaluateSolution(const emlrtStack *sp,
  robotics_manip_internal_IKExtraArgs *args);
static real_T f_IKHelpers_evaluateSolution(const emlrtStack *sp,
  robotics_manip_internal_IKExtraArgs *args);
static void b_isfinite(emxArray_real_T *x, emxArray_boolean_T *b_b);
static void c_rand(InstanceStruct_99HJ2LsbXT8ZQdi4PHECuF *moduleInstance, const
                   emlrtStack *sp, real_T varargin_1, emxArray_real_T *r);
static void randn(InstanceStruct_99HJ2LsbXT8ZQdi4PHECuF *moduleInstance, const
                  emlrtStack *sp, real_T varargin_1[2], emxArray_real_T *r);
static void b_abs(emxArray_real_T *x, emxArray_real_T *y);
static void b_DampedBFGSwGradientProjection_solveInternal(const emlrtStack *sp,
  robotics_core_internal_DampedBFGSwGradientProjection *obj, real_T xSol[2],
  b_robotics_core_internal_NLPSolverExitFlags *exitFlag, real_T *err, real_T
  *iter);
static void d_IKHelpers_computeCost(const emlrtStack *sp, real_T x[2],
  robotics_manip_internal_IKExtraArgs *args, real_T *cost, real_T W[36],
  emxArray_real_T *Jac, robotics_manip_internal_IKExtraArgs **b_args);
static void d_RigidBodyTree_efficientFKAndJacobianForIK(const emlrtStack *sp,
  robotics_manip_internal_RigidBodyTree_1 *obj, real_T qv[2], emxArray_char_T
  *body1Name, real_T T_data[], int32_T T_size[2], emxArray_real_T *Jac);
static real_T h_RigidBodyTree_validateInputBodyName(const emlrtStack *sp,
  robotics_manip_internal_RigidBodyTree_1 *obj, emxArray_char_T *bodyname);
static real_T i_RigidBodyTree_validateInputBodyName(const emlrtStack *sp,
  robotics_manip_internal_RigidBodyTree_1 *obj, emxArray_char_T *bodyname);
static real_T g_IKHelpers_evaluateSolution(const emlrtStack *sp,
  robotics_manip_internal_IKExtraArgs *args);
static boolean_T b_DampedBFGSwGradientProjection_atLocalMinimum(const emlrtStack
  *sp, robotics_core_internal_DampedBFGSwGradientProjection *obj, real_T Hg[2],
  emxArray_real_T *alpha);
static real_T h_IKHelpers_evaluateSolution(const emlrtStack *sp,
  robotics_manip_internal_IKExtraArgs *args);
static void e_IKHelpers_computeCost(const emlrtStack *sp, real_T x[2],
  robotics_manip_internal_IKExtraArgs *args, real_T *cost, real_T W[36],
  emxArray_real_T *Jac, robotics_manip_internal_IKExtraArgs **b_args);
static void e_RigidBodyTree_efficientFKAndJacobianForIK(const emlrtStack *sp,
  robotics_manip_internal_RigidBodyTree_1 *obj, real_T qv[2], emxArray_char_T
  *body1Name, real_T T_data[], int32_T T_size[2], emxArray_real_T *Jac);
static real_T j_RigidBodyTree_validateInputBodyName(const emlrtStack *sp,
  robotics_manip_internal_RigidBodyTree_1 *obj, emxArray_char_T *bodyname);
static real_T k_RigidBodyTree_validateInputBodyName(const emlrtStack *sp,
  robotics_manip_internal_RigidBodyTree_1 *obj, emxArray_char_T *bodyname);
static real_T i_IKHelpers_evaluateSolution(const emlrtStack *sp,
  robotics_manip_internal_IKExtraArgs *args);
static void f_IKHelpers_computeCost(const emlrtStack *sp, real_T x[2],
  robotics_manip_internal_IKExtraArgs *args, real_T *cost, real_T W[36],
  emxArray_real_T *Jac, robotics_manip_internal_IKExtraArgs **b_args);
static void f_RigidBodyTree_efficientFKAndJacobianForIK(const emlrtStack *sp,
  robotics_manip_internal_RigidBodyTree_1 *obj, real_T qv[2], emxArray_char_T
  *body1Name, real_T T_data[], int32_T T_size[2], emxArray_real_T *Jac);
static real_T l_RigidBodyTree_validateInputBodyName(const emlrtStack *sp,
  robotics_manip_internal_RigidBodyTree_1 *obj, emxArray_char_T *bodyname);
static real_T m_RigidBodyTree_validateInputBodyName(const emlrtStack *sp,
  robotics_manip_internal_RigidBodyTree_1 *obj, emxArray_char_T *bodyname);
static real_T j_IKHelpers_evaluateSolution(const emlrtStack *sp,
  robotics_manip_internal_IKExtraArgs *args);
static boolean_T b_DampedBFGSwGradientProjection_searchDirectionInvalid(const
  emlrtStack *sp, robotics_core_internal_DampedBFGSwGradientProjection *obj,
  real_T xNew[2]);
static real_T k_IKHelpers_evaluateSolution(const emlrtStack *sp,
  robotics_manip_internal_IKExtraArgs *args);
static real_T l_IKHelpers_evaluateSolution(const emlrtStack *sp,
  robotics_manip_internal_IKExtraArgs *args);
static boolean_T b_any(boolean_T x[2]);
static void g_warning(const emlrtStack *sp);
static void emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *a__output_of_sprintf_, const char_T *identifier, char_T y[14]);
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_u, const
  emlrtMsgIdentifier *parentId, char_T y[14]);
static const mxArray *emlrt_marshallOut(const emlrtStack *sp, const char_T b_u
  [30]);
static const mxArray *b_emlrt_marshallOut(const emlrtStack *sp, const char_T
  b_u[39]);
static const mxArray *c_emlrt_marshallOut(const emlrtStack *sp, const char_T
  b_u[15]);
static const mxArray *d_emlrt_marshallOut(const emlrtStack *sp, const char_T
  b_u[36]);
static const mxArray *message(const emlrtStack *sp, const mxArray *c, const
  mxArray *d, emlrtMCInfo *location);
static const mxArray *getString(const emlrtStack *sp, const mxArray *c,
  emlrtMCInfo *location);
static void f_error(const emlrtStack *sp, const mxArray *c, const mxArray *d,
                    emlrtMCInfo *location);
static const mxArray *b_message(const emlrtStack *sp, const mxArray *c,
  emlrtMCInfo *location);
static const mxArray *c_message(const emlrtStack *sp, const mxArray *c, const
  mxArray *d, const mxArray *e, const mxArray *f, emlrtMCInfo *location);
static const mxArray *feval(const emlrtStack *sp, const mxArray *c, const
  mxArray *d, emlrtMCInfo *location);
static void b_feval(const emlrtStack *sp, const mxArray *c, const mxArray *d,
                    emlrtMCInfo *location);
static const mxArray *d_message(const emlrtStack *sp, const mxArray *c, const
  mxArray *d, const mxArray *e, emlrtMCInfo *location);
static const mxArray *b_sprintf(const emlrtStack *sp, const mxArray *c, const
  mxArray *d, emlrtMCInfo *location);
static const mxArray *c_feval(const emlrtStack *sp, const mxArray *c, const
  mxArray *d, const mxArray *e, emlrtMCInfo *location);
static const mxArray *d_feval(const emlrtStack *sp, const mxArray *c, const
  mxArray *d, const mxArray *e, const mxArray *f, emlrtMCInfo *location);
static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, char_T ret[14]);
static real_T eml_rand_mt19937ar(const emlrtStack *sp, uint32_T e_state[625]);
static void genrand_uint32_vector(uint32_T mt[625], uint32_T b_u[2]);
static void b_sqrt(const emlrtStack *sp, real_T *x);
static void RigidBodyTree_validateConfiguration(const emlrtStack *sp,
  robotics_manip_internal_RigidBodyTree_1 *obj, real_T Q[2]);
static void c_sqrt(creal_T *x);
static real_T rescale(real_T *re, real_T *im);
static void xscal(int32_T n, real_T a, real_T x[9], int32_T ix0);
static void xaxpy(int32_T n, real_T a, int32_T ix0, real_T y[9], int32_T iy0);
static void b_xscal(real_T a, real_T x[3], int32_T ix0);
static void b_xaxpy(int32_T n, real_T a, real_T x[9], int32_T ix0, real_T y[3],
                    int32_T iy0);
static void c_xaxpy(int32_T n, real_T a, real_T x[3], int32_T ix0, real_T y[9],
                    int32_T iy0);
static void c_xscal(real_T a, real_T x[9], int32_T ix0);
static void xrotg(real_T *a, real_T *b_b, real_T *c, real_T *s);
static void xrot(real_T x[9], int32_T ix0, int32_T iy0, real_T c, real_T s);
static void xswap(real_T x[9], int32_T ix0, int32_T iy0);
static void d_sqrt(const emlrtStack *sp, emxArray_real_T *x);
static real_T b_eml_rand_mt19937ar(const emlrtStack *sp, uint32_T e_state[625]);
static real_T genrandu(const emlrtStack *sp, uint32_T mt[625]);
static void emxInitStruct_robotics_slmanip_
  (robotics_slmanip_internal_block_IKBlock *pStruct);
static void emxInitStruct_robotics_manip_in
  (robotics_manip_internal_RigidBodyTree *pStruct);
static void b_emxInitStruct_robotics_manip_in(robotics_manip_internal_RigidBody *
  pStruct);
static void emxInit_char_T(emxArray_char_T **pEmxArray, int32_T b_numDimensions);
static void emxInitStruct_rigidBodyJoint(rigidBodyJoint *pStruct);
static void emxInit_real_T(emxArray_real_T **pEmxArray, int32_T b_numDimensions);
static void emxInit_real_T1(emxArray_real_T **pEmxArray, int32_T b_numDimensions);
static void emxInitStruct_inverseKinematics(inverseKinematics *pStruct);
static void emxInitStruct_robotics_core_int
  (robotics_core_internal_DampedBFGSwGradientProjection *pStruct);
static void c_emxInitStruct_robotics_manip_in
  (robotics_manip_internal_IKExtraArgs *pStruct);
static void d_emxInitStruct_robotics_manip_in
  (robotics_manip_internal_RigidBodyTree_1 *pStruct);
static void e_emxInitStruct_robotics_manip_in
  (robotics_manip_internal_RigidBody_1 *pStruct);
static void emxFree_char_T(emxArray_char_T **pEmxArray);
static void emxFreeStruct_robotics_manip_in(robotics_manip_internal_RigidBody
  *pStruct);
static void emxFreeStruct_rigidBodyJoint(rigidBodyJoint *pStruct);
static void emxFree_real_T(emxArray_real_T **pEmxArray);
static void b_emxFreeStruct_robotics_manip_in
  (robotics_manip_internal_RigidBodyTree *pStruct);
static void emxFreeStruct_robotics_slmanip_
  (robotics_slmanip_internal_block_IKBlock *pStruct);
static void emxFreeStruct_inverseKinematics(inverseKinematics *pStruct);
static void emxFreeStruct_robotics_core_int
  (robotics_core_internal_DampedBFGSwGradientProjection *pStruct);
static void c_emxFreeStruct_robotics_manip_in
  (robotics_manip_internal_IKExtraArgs *pStruct);
static void d_emxFreeStruct_robotics_manip_in
  (robotics_manip_internal_RigidBody_1 *pStruct);
static void e_emxFreeStruct_robotics_manip_in
  (robotics_manip_internal_RigidBodyTree_1 *pStruct);
static void emxEnsureCapacity_char_T(emxArray_char_T *emxArray, int32_T oldNumel);
static void emxEnsureCapacity_real_T(emxArray_real_T *emxArray, int32_T oldNumel);
static void emxEnsureCapacity_real_T1(emxArray_real_T *emxArray, int32_T
  oldNumel);
static void emxEnsureCapacity_int32_T(emxArray_int32_T *emxArray, int32_T
  oldNumel);
static void emxEnsureCapacity_int8_T(emxArray_int8_T *emxArray, int32_T oldNumel);
static void emxEnsureCapacity_int32_T1(emxArray_int32_T *emxArray, int32_T
  oldNumel);
static void emxInit_int8_T(emxArray_int8_T **pEmxArray, int32_T b_numDimensions);
static void emxInit_int32_T(emxArray_int32_T **pEmxArray, int32_T
  b_numDimensions);
static void emxInit_int32_T1(emxArray_int32_T **pEmxArray, int32_T
  b_numDimensions);
static void emxFree_int8_T(emxArray_int8_T **pEmxArray);
static void emxFree_int32_T(emxArray_int32_T **pEmxArray);
static void emxEnsureCapacity_boolean_T(emxArray_boolean_T *emxArray, int32_T
  oldNumel);
static void emxInit_boolean_T(emxArray_boolean_T **pEmxArray, int32_T
  b_numDimensions);
static void emxFree_boolean_T(emxArray_boolean_T **pEmxArray);
static void emxEnsureCapacity_ptrdiff_t(emxArray_ptrdiff_t *emxArray, int32_T
  oldNumel);
static void emxInit_ptrdiff_t(emxArray_ptrdiff_t **pEmxArray, int32_T
  b_numDimensions);
static void emxFree_ptrdiff_t(emxArray_ptrdiff_t **pEmxArray);
static int32_T div_nzp_s32(int32_T numerator, int32_T denominator);
static int32_T div_s32_floor(const emlrtStack *sp, int32_T numerator, int32_T
  denominator);
static void init_simulink_io_address(InstanceStruct_99HJ2LsbXT8ZQdi4PHECuF
  *moduleInstance);

/* Function Definitions */
static void cgxe_mdl_start(InstanceStruct_99HJ2LsbXT8ZQdi4PHECuF *moduleInstance)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  real_T dv[16];
  init_simulink_io_address(moduleInstance);
  st.tls = moduleInstance->emlrtRootTLSGlobal;
  cgxertSetSimStateCompliance(moduleInstance->S, 4);
  cgxertSetGcb(moduleInstance->S, -1, -1);
  mw__internal__system__init__fcn(moduleInstance);
  memcpy(&dv[0], &(*moduleInstance->u0)[0], sizeof(real_T) << 4);
  mw__internal__call__setup(moduleInstance, &st);
  cgxertRestoreGcb(moduleInstance->S, -1, -1);
}

static void cgxe_mdl_initialize(InstanceStruct_99HJ2LsbXT8ZQdi4PHECuF
  *moduleInstance)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = moduleInstance->emlrtRootTLSGlobal;
  cgxertSetGcb(moduleInstance->S, -1, -1);
  mw__internal__call__reset(moduleInstance, &st);
  cgxertRestoreGcb(moduleInstance->S, -1, -1);
}

static void cgxe_mdl_outputs(InstanceStruct_99HJ2LsbXT8ZQdi4PHECuF
  *moduleInstance)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  real_T dv[16];
  real_T dv1[6];
  int32_T i;
  real_T dv2[2];
  real_T y_tmp0[2];
  real_T y_tmp1_Iterations;
  real_T y_tmp1_PoseErrorNorm;
  uint16_T y_tmp1_ExitFlag;
  uint8_T y_tmp1_Status;
  st.tls = moduleInstance->emlrtRootTLSGlobal;
  cgxertSetGcb(moduleInstance->S, -1, -1);
  memcpy(&dv[0], &(*moduleInstance->u0)[0], sizeof(real_T) << 4);
  for (i = 0; i < 6; i++) {
    dv1[i] = (*moduleInstance->u1)[i];
  }

  for (i = 0; i < 2; i++) {
    dv2[i] = (*moduleInstance->u2)[i];
  }

  mw__internal__call__step(moduleInstance, &st, dv, dv1, dv2, y_tmp0,
    &y_tmp1_Iterations, &y_tmp1_PoseErrorNorm, &y_tmp1_ExitFlag, &y_tmp1_Status);
  for (i = 0; i < 2; i++) {
    (*moduleInstance->b_y0)[i] = y_tmp0[i];
  }

  *(real_T *)&((char_T *)moduleInstance->b_y1)[0] = y_tmp1_Iterations;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[8] = y_tmp1_PoseErrorNorm;
  *(uint16_T *)&((char_T *)moduleInstance->b_y1)[16] = y_tmp1_ExitFlag;
  *(uint8_T *)&((char_T *)moduleInstance->b_y1)[18] = y_tmp1_Status;
  cgxertRestoreGcb(moduleInstance->S, -1, -1);
}

static void cgxe_mdl_update(InstanceStruct_99HJ2LsbXT8ZQdi4PHECuF
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_enable(InstanceStruct_99HJ2LsbXT8ZQdi4PHECuF
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_disable(InstanceStruct_99HJ2LsbXT8ZQdi4PHECuF
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_terminate(InstanceStruct_99HJ2LsbXT8ZQdi4PHECuF
  *moduleInstance)
{
  cgxertSetGcb(moduleInstance->S, -1, -1);
  mw__internal__system__terminate__fcn(moduleInstance);
  cgxertRestoreGcb(moduleInstance->S, -1, -1);
}

static void mw__internal__system__init__fcn
  (InstanceStruct_99HJ2LsbXT8ZQdi4PHECuF *moduleInstance)
{
  int32_T i;
  uint32_T r;
  emxInitStruct_robotics_slmanip_(&moduleInstance->sysobj);
  b_emxInitStruct_robotics_manip_in(&moduleInstance->gobj_0);
  b_emxInitStruct_robotics_manip_in(&moduleInstance->gobj_1);
  b_emxInitStruct_robotics_manip_in(&moduleInstance->gobj_2);
  b_emxInitStruct_robotics_manip_in(&moduleInstance->gobj_3);
  b_emxInitStruct_robotics_manip_in(&moduleInstance->gobj_4);
  b_emxInitStruct_robotics_manip_in(&moduleInstance->gobj_5);
  emxInitStruct_robotics_core_int(&moduleInstance->gobj_6);
  emxInitStruct_robotics_core_int(&moduleInstance->gobj_7);
  c_emxInitStruct_robotics_manip_in(&moduleInstance->gobj_8);
  d_emxInitStruct_robotics_manip_in(&moduleInstance->gobj_9);
  d_emxInitStruct_robotics_manip_in(&moduleInstance->gobj_10);
  e_emxInitStruct_robotics_manip_in(&moduleInstance->gobj_11);
  e_emxInitStruct_robotics_manip_in(&moduleInstance->gobj_12);
  e_emxInitStruct_robotics_manip_in(&moduleInstance->gobj_13);
  e_emxInitStruct_robotics_manip_in(&moduleInstance->gobj_14);
  e_emxInitStruct_robotics_manip_in(&moduleInstance->gobj_15);
  e_emxInitStruct_robotics_manip_in(&moduleInstance->gobj_16);
  e_emxInitStruct_robotics_manip_in(&moduleInstance->gobj_17);
  e_emxInitStruct_robotics_manip_in(&moduleInstance->gobj_18);
  e_emxInitStruct_robotics_manip_in(&moduleInstance->gobj_19);
  e_emxInitStruct_robotics_manip_in(&moduleInstance->gobj_20);
  e_emxInitStruct_robotics_manip_in(&moduleInstance->gobj_21);
  e_emxInitStruct_robotics_manip_in(&moduleInstance->gobj_22);
  emxInitStruct_rigidBodyJoint(&moduleInstance->gobj_23);
  emxInitStruct_rigidBodyJoint(&moduleInstance->gobj_24);
  emxInitStruct_rigidBodyJoint(&moduleInstance->gobj_25);
  emxInitStruct_rigidBodyJoint(&moduleInstance->gobj_26);
  emxInitStruct_rigidBodyJoint(&moduleInstance->gobj_27);
  emxInitStruct_rigidBodyJoint(&moduleInstance->gobj_28);
  emxInitStruct_rigidBodyJoint(&moduleInstance->gobj_29);
  emxInitStruct_rigidBodyJoint(&moduleInstance->gobj_30);
  emxInitStruct_rigidBodyJoint(&moduleInstance->gobj_31);
  emxInitStruct_rigidBodyJoint(&moduleInstance->gobj_32);
  emxInitStruct_rigidBodyJoint(&moduleInstance->gobj_33);
  emxInitStruct_rigidBodyJoint(&moduleInstance->gobj_34);
  emxInitStruct_rigidBodyJoint(&moduleInstance->gobj_35);
  emxInitStruct_rigidBodyJoint(&moduleInstance->gobj_36);
  emxInitStruct_rigidBodyJoint(&moduleInstance->gobj_37);
  emxInitStruct_rigidBodyJoint(&moduleInstance->gobj_38);
  emxInitStruct_rigidBodyJoint(&moduleInstance->gobj_39);
  emxInitStruct_rigidBodyJoint(&moduleInstance->gobj_40);
  emxInitStruct_rigidBodyJoint(&moduleInstance->gobj_41);
  emxInitStruct_rigidBodyJoint(&moduleInstance->gobj_42);
  moduleInstance->sysobj.IKInternal.matlabCodegenIsDeleted = true;
  moduleInstance->sysobj.matlabCodegenIsDeleted = true;
  moduleInstance->method = 7U;
  moduleInstance->method_not_empty = true;
  moduleInstance->state = 1144108930U;
  moduleInstance->state_not_empty = true;
  for (i = 0; i < 2; i++) {
    moduleInstance->b_state[i] = 158852560U * (uint32_T)i + 362436069U;
  }

  moduleInstance->b_state_not_empty = true;
  for (i = 0; i < 625; i++) {
    moduleInstance->c_state[i] = 0U;
  }

  r = 5489U;
  moduleInstance->c_state[0] = 5489U;
  for (i = 0; i < 623; i++) {
    r = ((r ^ r >> 30U) * 1812433253U + (uint32_T)i) + 1U;
    moduleInstance->c_state[i + 1] = r;
  }

  moduleInstance->c_state[624] = 624U;
  moduleInstance->c_state_not_empty = true;
  moduleInstance->b_method = 0U;
  moduleInstance->b_method_not_empty = true;
  for (i = 0; i < 2; i++) {
    moduleInstance->d_state[i] = (uint32_T)(-362436069 * i) + 362436069U;
  }

  moduleInstance->d_state[1] = 521288629U;
  moduleInstance->d_state_not_empty = true;
}

static void mw__internal__system__terminate__fcn
  (InstanceStruct_99HJ2LsbXT8ZQdi4PHECuF *moduleInstance)
{
  emlrtStack st;
  inverseKinematics *obj;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  st.site = &emlrtRSI;
  if (!moduleInstance->sysobj.matlabCodegenIsDeleted) {
    moduleInstance->sysobj.matlabCodegenIsDeleted = true;
  }

  st.site = &emlrtRSI;
  obj = &moduleInstance->sysobj.IKInternal;
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    b_st.site = &qk_emlrtRSI;
    c_st.site = &e_emlrtRSI;
    if (obj->isInitialized == 1) {
      obj->isInitialized = 2;
      d_st.site = &e_emlrtRSI;
    }
  }

  emxFreeStruct_robotics_slmanip_(&moduleInstance->sysobj);
  emxFreeStruct_robotics_manip_in(&moduleInstance->gobj_0);
  emxFreeStruct_robotics_manip_in(&moduleInstance->gobj_1);
  emxFreeStruct_robotics_manip_in(&moduleInstance->gobj_2);
  emxFreeStruct_robotics_manip_in(&moduleInstance->gobj_3);
  emxFreeStruct_robotics_manip_in(&moduleInstance->gobj_4);
  emxFreeStruct_robotics_manip_in(&moduleInstance->gobj_5);
  emxFreeStruct_robotics_core_int(&moduleInstance->gobj_6);
  emxFreeStruct_robotics_core_int(&moduleInstance->gobj_7);
  c_emxFreeStruct_robotics_manip_in(&moduleInstance->gobj_8);
  e_emxFreeStruct_robotics_manip_in(&moduleInstance->gobj_9);
  e_emxFreeStruct_robotics_manip_in(&moduleInstance->gobj_10);
  d_emxFreeStruct_robotics_manip_in(&moduleInstance->gobj_11);
  d_emxFreeStruct_robotics_manip_in(&moduleInstance->gobj_12);
  d_emxFreeStruct_robotics_manip_in(&moduleInstance->gobj_13);
  d_emxFreeStruct_robotics_manip_in(&moduleInstance->gobj_14);
  d_emxFreeStruct_robotics_manip_in(&moduleInstance->gobj_15);
  d_emxFreeStruct_robotics_manip_in(&moduleInstance->gobj_16);
  d_emxFreeStruct_robotics_manip_in(&moduleInstance->gobj_17);
  d_emxFreeStruct_robotics_manip_in(&moduleInstance->gobj_18);
  d_emxFreeStruct_robotics_manip_in(&moduleInstance->gobj_19);
  d_emxFreeStruct_robotics_manip_in(&moduleInstance->gobj_20);
  d_emxFreeStruct_robotics_manip_in(&moduleInstance->gobj_21);
  d_emxFreeStruct_robotics_manip_in(&moduleInstance->gobj_22);
  emxFreeStruct_rigidBodyJoint(&moduleInstance->gobj_23);
  emxFreeStruct_rigidBodyJoint(&moduleInstance->gobj_24);
  emxFreeStruct_rigidBodyJoint(&moduleInstance->gobj_25);
  emxFreeStruct_rigidBodyJoint(&moduleInstance->gobj_26);
  emxFreeStruct_rigidBodyJoint(&moduleInstance->gobj_27);
  emxFreeStruct_rigidBodyJoint(&moduleInstance->gobj_28);
  emxFreeStruct_rigidBodyJoint(&moduleInstance->gobj_29);
  emxFreeStruct_rigidBodyJoint(&moduleInstance->gobj_30);
  emxFreeStruct_rigidBodyJoint(&moduleInstance->gobj_31);
  emxFreeStruct_rigidBodyJoint(&moduleInstance->gobj_32);
  emxFreeStruct_rigidBodyJoint(&moduleInstance->gobj_33);
  emxFreeStruct_rigidBodyJoint(&moduleInstance->gobj_34);
  emxFreeStruct_rigidBodyJoint(&moduleInstance->gobj_35);
  emxFreeStruct_rigidBodyJoint(&moduleInstance->gobj_36);
  emxFreeStruct_rigidBodyJoint(&moduleInstance->gobj_37);
  emxFreeStruct_rigidBodyJoint(&moduleInstance->gobj_38);
  emxFreeStruct_rigidBodyJoint(&moduleInstance->gobj_39);
  emxFreeStruct_rigidBodyJoint(&moduleInstance->gobj_40);
  emxFreeStruct_rigidBodyJoint(&moduleInstance->gobj_41);
  emxFreeStruct_rigidBodyJoint(&moduleInstance->gobj_42);
}

static void mw__internal__call__setup(InstanceStruct_99HJ2LsbXT8ZQdi4PHECuF
  *moduleInstance, const emlrtStack *sp)
{
  emlrtStack st;
  robotics_manip_internal_RigidBody *iobj_0;
  robotics_manip_internal_RigidBody *iobj_1;
  robotics_manip_internal_RigidBody *iobj_2;
  robotics_core_internal_DampedBFGSwGradientProjection *iobj_3;
  robotics_manip_internal_RigidBodyTree_1 *iobj_4;
  robotics_manip_internal_RigidBody_1 *iobj_5;
  robotics_manip_internal_RigidBody_1 *iobj_6;
  robotics_manip_internal_RigidBody_1 *iobj_7;
  robotics_manip_internal_RigidBody_1 *iobj_8;
  robotics_manip_internal_RigidBody_1 *iobj_9;
  robotics_manip_internal_RigidBody_1 *iobj_10;
  rigidBodyJoint *iobj_11;
  rigidBodyJoint *iobj_12;
  rigidBodyJoint *iobj_13;
  rigidBodyJoint *iobj_14;
  rigidBodyJoint *iobj_15;
  rigidBodyJoint *iobj_16;
  rigidBodyJoint *iobj_17;
  rigidBodyJoint *iobj_18;
  rigidBodyJoint *iobj_19;
  rigidBodyJoint *iobj_20;
  robotics_slmanip_internal_block_IKBlock *obj;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  st.prev = sp;
  st.tls = sp->tls;
  iobj_0 = &moduleInstance->gobj_0;
  iobj_1 = &moduleInstance->gobj_1;
  iobj_2 = &moduleInstance->gobj_2;
  iobj_3 = &moduleInstance->gobj_6;
  iobj_4 = &moduleInstance->gobj_10;
  iobj_5 = &moduleInstance->gobj_17;
  iobj_6 = &moduleInstance->gobj_18;
  iobj_7 = &moduleInstance->gobj_19;
  iobj_8 = &moduleInstance->gobj_20;
  iobj_9 = &moduleInstance->gobj_21;
  iobj_10 = &moduleInstance->gobj_22;
  iobj_11 = &moduleInstance->gobj_33;
  iobj_12 = &moduleInstance->gobj_34;
  iobj_13 = &moduleInstance->gobj_35;
  iobj_14 = &moduleInstance->gobj_36;
  iobj_15 = &moduleInstance->gobj_37;
  iobj_16 = &moduleInstance->gobj_38;
  iobj_17 = &moduleInstance->gobj_39;
  iobj_18 = &moduleInstance->gobj_40;
  iobj_19 = &moduleInstance->gobj_41;
  iobj_20 = &moduleInstance->gobj_42;
  if (!moduleInstance->sysobj_not_empty) {
    st.site = &g_emlrtRSI;
    obj = &moduleInstance->sysobj;
    b_st.site = &b_emlrtRSI;
    c_st.site = &c_emlrtRSI;
    d_st.site = &d_emlrtRSI;
    c_st.site = &c_emlrtRSI;
    obj->isInitialized = 0;
    d_st.site = &e_emlrtRSI;
    b_st.site = &b_emlrtRSI;
    c_st.site = &f_emlrtRSI;
    obj->matlabCodegenIsDeleted = false;
    moduleInstance->sysobj_not_empty = true;
  }

  st.site = &h_emlrtRSI;
  SystemCore_setup(moduleInstance, &st, &moduleInstance->sysobj, iobj_0, iobj_1,
                   iobj_2, iobj_3, iobj_4, iobj_5, iobj_6, iobj_7, iobj_8,
                   iobj_9, iobj_10, iobj_11, iobj_12, iobj_13, iobj_14, iobj_15,
                   iobj_16, iobj_17, iobj_18, iobj_19, iobj_20);
}

static void SystemCore_setup(InstanceStruct_99HJ2LsbXT8ZQdi4PHECuF
  *moduleInstance, const emlrtStack *sp, robotics_slmanip_internal_block_IKBlock
  *obj, robotics_manip_internal_RigidBody *iobj_0,
  robotics_manip_internal_RigidBody *iobj_1, robotics_manip_internal_RigidBody
  *iobj_2, robotics_core_internal_DampedBFGSwGradientProjection *iobj_3,
  robotics_manip_internal_RigidBodyTree_1 *iobj_4,
  robotics_manip_internal_RigidBody_1 *iobj_5,
  robotics_manip_internal_RigidBody_1 *iobj_6,
  robotics_manip_internal_RigidBody_1 *iobj_7,
  robotics_manip_internal_RigidBody_1 *iobj_8,
  robotics_manip_internal_RigidBody_1 *iobj_9,
  robotics_manip_internal_RigidBody_1 *iobj_10, rigidBodyJoint *iobj_11,
  rigidBodyJoint *iobj_12, rigidBodyJoint *iobj_13, rigidBodyJoint *iobj_14,
  rigidBodyJoint *iobj_15, rigidBodyJoint *iobj_16, rigidBodyJoint *iobj_17,
  rigidBodyJoint *iobj_18, rigidBodyJoint *iobj_19, rigidBodyJoint *iobj_20)
{
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
  emlrtStack j_st;
  char_T b_u[51];
  emxArray_char_T *b_basename;
  int32_T i;
  const mxArray *y;
  static char_T c_u[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l', 'e',
    'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *m;
  static const int32_T iv[2] = { 1, 51 };

  inverseKinematics *b_obj;
  const mxArray *b_y;
  static const int32_T iv1[2] = { 1, 51 };

  char_T d_u[5];
  const mxArray *c_y;
  static char_T e_u[5] = { 's', 'e', 't', 'u', 'p' };

  static const int32_T iv2[2] = { 1, 5 };

  robotics_manip_internal_RigidBodyTree_1 *newrobot;
  int32_T loop_ub;
  emxArray_char_T *bname;
  int32_T bid;
  real_T pid;
  int32_T b_i;
  boolean_T exitg1;
  real_T g[3];
  robotics_manip_internal_RigidBody_1 *c_obj;
  robotics_manip_internal_RigidBody *body;
  robotics_manip_internal_RigidBody *parent;
  char_T expl_temp[22];
  real_T b_expl_temp;
  real_T c_expl_temp;
  real_T d_expl_temp;
  real_T e_expl_temp;
  real_T f_expl_temp;
  boolean_T g_expl_temp;
  boolean_T h_expl_temp;
  real_T i_expl_temp;
  robotics_core_internal_DampedBFGSwGradientProjection *d_obj;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  h_st.prev = &g_st;
  h_st.tls = g_st.tls;
  i_st.prev = &h_st;
  i_st.tls = h_st.tls;
  j_st.prev = &i_st;
  j_st.tls = i_st.tls;
  if (obj->isInitialized != 0) {
    for (i = 0; i < 51; i++) {
      b_u[i] = c_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, iv);
    emlrtInitCharArrayR2013a(sp, 51, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 51; i++) {
      b_u[i] = c_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, iv1);
    emlrtInitCharArrayR2013a(sp, 51, m, &b_u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 5; i++) {
      d_u[i] = e_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, iv2);
    emlrtInitCharArrayR2013a(sp, 5, m, &d_u[0]);
    emlrtAssign(&c_y, m);
    st.site = &e_emlrtRSI;
    f_error(&st, y, getString(&st, message(&st, b_y, c_y, &emlrtMCI), &emlrtMCI),
            &emlrtMCI);
  }

  emxInit_char_T(&b_basename, 2);
  obj->isInitialized = 1;
  st.site = &e_emlrtRSI;
  b_st.site = &i_emlrtRSI;
  RigidBodyTree_RigidBodyTree(&obj->TreeInternal, iobj_0, iobj_1, iobj_2);
  b_st.site = &j_emlrtRSI;
  b_obj = &obj->IKInternal;
  c_st.site = &t_emlrtRSI;
  d_st.site = &c_emlrtRSI;
  e_st.site = &d_emlrtRSI;
  d_st.site = &c_emlrtRSI;
  obj->IKInternal.isInitialized = 0;
  e_st.site = &e_emlrtRSI;
  c_st.site = &t_emlrtRSI;
  d_st.site = &k_emlrtRSI;
  c_st.site = &u_emlrtRSI;
  d_st.site = &d_emlrtRSI;
  e_st.site = &v_emlrtRSI;
  f_st.site = &v_emlrtRSI;
  g_st.site = &w_emlrtRSI;
  h_st.site = &bb_emlrtRSI;
  newrobot = b_RigidBodyTree_RigidBodyTree(moduleInstance, &h_st, iobj_4,
    iobj_11, iobj_5, iobj_6, iobj_7, iobj_12, iobj_13, iobj_14);
  h_st.site = &x_emlrtRSI;
  i_st.site = &ob_emlrtRSI;
  i = b_basename->size[0] * b_basename->size[1];
  b_basename->size[0] = 1;
  b_basename->size[1] = obj->TreeInternal.Base.NameInternal->size[1];
  emxEnsureCapacity_char_T(b_basename, i);
  loop_ub = obj->TreeInternal.Base.NameInternal->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    b_basename->data[i] = obj->TreeInternal.Base.NameInternal->data[i];
  }

  emxInit_char_T(&bname, 2);
  h_st.site = &x_emlrtRSI;
  i_st.site = &pb_emlrtRSI;
  validateattributes(&i_st, b_basename);
  i_st.site = &qb_emlrtRSI;
  bid = -1;
  j_st.site = &tb_emlrtRSI;
  b_validateattributes(&j_st, b_basename);
  j_st.site = &ub_emlrtRSI;
  i = bname->size[0] * bname->size[1];
  bname->size[0] = 1;
  bname->size[1] = newrobot->Base.NameInternal->size[1];
  emxEnsureCapacity_char_T(bname, i);
  loop_ub = newrobot->Base.NameInternal->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    bname->data[i] = newrobot->Base.NameInternal->data[i];
  }

  if (d_strcmp(bname, b_basename)) {
    bid = 0;
  } else {
    pid = newrobot->NumBodies;
    emlrtForLoopVectorCheckR2012b(1.0, 1.0, pid, mxDOUBLE_CLASS, (int32_T)pid,
      &emlrtRTEI, &i_st);
    b_i = 0;
    exitg1 = false;
    while ((!exitg1) && (b_i <= (int32_T)pid - 1)) {
      j_st.site = &vb_emlrtRSI;
      c_obj = newrobot->Bodies[emlrtDynamicBoundsCheckR2012b(b_i, 0, 2,
        &emlrtBCI, &j_st)];
      i = bname->size[0] * bname->size[1];
      bname->size[0] = 1;
      bname->size[1] = c_obj->NameInternal->size[1];
      emxEnsureCapacity_char_T(bname, i);
      loop_ub = c_obj->NameInternal->size[1] - 1;
      for (i = 0; i <= loop_ub; i++) {
        bname->data[i] = c_obj->NameInternal->data[i];
      }

      if (d_strcmp(bname, b_basename)) {
        bid = b_i + 1;
        exitg1 = true;
      } else {
        b_i++;
      }
    }
  }

  if (bid != 0) {
    if (bid < 0) {
      i = newrobot->Base.NameInternal->size[0] * newrobot->
        Base.NameInternal->size[1];
      newrobot->Base.NameInternal->size[0] = 1;
      newrobot->Base.NameInternal->size[1] = b_basename->size[1];
      emxEnsureCapacity_char_T(newrobot->Base.NameInternal, i);
      loop_ub = b_basename->size[1] - 1;
      for (i = 0; i <= loop_ub; i++) {
        newrobot->Base.NameInternal->data[i] = b_basename->data[i];
      }
    } else {
      i_st.site = &rb_emlrtRSI;
      error(&i_st, b_basename);
    }
  }

  emxFree_char_T(&b_basename);
  h_st.site = &y_emlrtRSI;
  for (i = 0; i < 3; i++) {
    g[i] = obj->TreeInternal.Gravity[i];
  }

  i_st.site = &wb_emlrtRSI;
  c_validateattributes(&i_st, g);
  if (1.0 <= obj->TreeInternal.NumBodies) {
    body = obj->TreeInternal.Bodies[0];
    pid = body->ParentIndex;
    if (pid > 0.0) {
      i = (int32_T)emlrtIntegerCheckR2012b(pid, &emlrtDCI, &g_st) - 1;
      parent = obj->TreeInternal.Bodies[emlrtDynamicBoundsCheckR2012b(i, 0, 2,
        &b_emlrtBCI, &g_st)];
    } else {
      parent = &obj->TreeInternal.Base;
    }

    h_st.site = &ab_emlrtRSI;
    i = bname->size[0] * bname->size[1];
    bname->size[0] = 1;
    bname->size[1] = parent->NameInternal->size[1];
    emxEnsureCapacity_char_T(bname, i);
    loop_ub = parent->NameInternal->size[1] - 1;
    for (i = 0; i <= loop_ub; i++) {
      bname->data[i] = parent->NameInternal->data[i];
    }

    h_st.site = &ab_emlrtRSI;
    RigidBodyTree_addBody(&h_st, newrobot, body, bname, iobj_8, iobj_15, iobj_16);
  }

  if (2.0 <= obj->TreeInternal.NumBodies) {
    body = obj->TreeInternal.Bodies[1];
    pid = body->ParentIndex;
    if (pid > 0.0) {
      i = (int32_T)emlrtIntegerCheckR2012b(pid, &emlrtDCI, &g_st) - 1;
      parent = obj->TreeInternal.Bodies[emlrtDynamicBoundsCheckR2012b(i, 0, 2,
        &b_emlrtBCI, &g_st)];
    } else {
      parent = &obj->TreeInternal.Base;
    }

    h_st.site = &ab_emlrtRSI;
    i = bname->size[0] * bname->size[1];
    bname->size[0] = 1;
    bname->size[1] = parent->NameInternal->size[1];
    emxEnsureCapacity_char_T(bname, i);
    loop_ub = parent->NameInternal->size[1] - 1;
    for (i = 0; i <= loop_ub; i++) {
      bname->data[i] = parent->NameInternal->data[i];
    }

    h_st.site = &ab_emlrtRSI;
    b_RigidBodyTree_addBody(&h_st, newrobot, body, bname, iobj_9, iobj_17,
      iobj_18);
  }

  if (3.0 <= obj->TreeInternal.NumBodies) {
    body = obj->TreeInternal.Bodies[2];
    pid = body->ParentIndex;
    if (pid > 0.0) {
      i = (int32_T)emlrtIntegerCheckR2012b(pid, &emlrtDCI, &g_st) - 1;
      parent = obj->TreeInternal.Bodies[emlrtDynamicBoundsCheckR2012b(i, 0, 2,
        &b_emlrtBCI, &g_st)];
    } else {
      parent = &obj->TreeInternal.Base;
    }

    h_st.site = &ab_emlrtRSI;
    i = bname->size[0] * bname->size[1];
    bname->size[0] = 1;
    bname->size[1] = parent->NameInternal->size[1];
    emxEnsureCapacity_char_T(bname, i);
    loop_ub = parent->NameInternal->size[1] - 1;
    for (i = 0; i <= loop_ub; i++) {
      bname->data[i] = parent->NameInternal->data[i];
    }

    h_st.site = &ab_emlrtRSI;
    c_RigidBodyTree_addBody(&h_st, newrobot, body, bname, iobj_10, iobj_19,
      iobj_20);
  }

  emxFree_char_T(&bname);
  b_obj->RigidBodyTreeInternal = newrobot;
  f_st.site = &v_emlrtRSI;
  g_st.site = &kd_emlrtRSI;
  b_obj->Solver = DampedBFGSwGradientProjection_DampedBFGSwGradientProjection
    (iobj_3);
  f_st.site = &v_emlrtRSI;
  g_st.site = &d_emlrtRSI;
  f_st.site = &v_emlrtRSI;
  g_st.site = &sd_emlrtRSI;
  DampedBFGSwGradientProjection_getSolverParams(b_obj->Solver, expl_temp, &pid,
    &b_expl_temp, &c_expl_temp, &d_expl_temp, &e_expl_temp, &f_expl_temp,
    &g_expl_temp, &h_expl_temp, &i_expl_temp);
  g_st.site = &td_emlrtRSI;
  d_obj = b_obj->Solver;
  d_obj->MaxNumIteration = 1500.0;
  d_obj->MaxTime = 10.0;
  d_obj->GradientTolerance = 1.0E-7;
  d_obj->SolutionTolerance = 1.0E-6;
  d_obj->ConstraintsOn = true;
  d_obj->RandomRestart = false;
  d_obj->StepTolerance = 1.0E-14;
  b_obj->matlabCodegenIsDeleted = false;
}

static robotics_manip_internal_RigidBodyTree *RigidBodyTree_RigidBodyTree
  (robotics_manip_internal_RigidBodyTree *obj, robotics_manip_internal_RigidBody
   *iobj_0, robotics_manip_internal_RigidBody *iobj_1,
   robotics_manip_internal_RigidBody *iobj_2)
{
  robotics_manip_internal_RigidBodyTree *b_obj;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  int32_T b_index;
  static char_T cv[5] = { 'b', 'o', 'd', 'y', '2' };

  static int8_T iv[9] = { 1, 0, 0, 0, 1, 0, 0, 0, 1 };

  static int8_T iv1[36] = { 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0,
    0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1 };

  static int8_T iv2[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

  static char_T jname[6] = { 'j', 'o', 'i', 'n', 't', '2' };

  emxArray_char_T *switch_expression;
  static char_T cv1[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  int32_T loop_ub;
  boolean_T result;
  int8_T msubspace_data[36];
  static int8_T iv3[6] = { 0, 0, 1, 0, 0, 0 };

  static int8_T iv4[6] = { 0, 0, 0, 0, 0, 1 };

  real_T poslim_data[12];
  static int8_T iv5[3] = { 0, 0, 1 };

  static real_T dv[16] = { 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0,
    0.0, 0.5, 0.0, 0.0, 1.0 };

  static char_T cv2[4] = { 't', 'o', 'o', 'l' };

  static char_T b_jname[8] = { 't', 'o', 'o', 'l', '_', 'j', 'n', 't' };

  emxArray_char_T *b_switch_expression;
  static char_T cv3[5] = { 'f', 'i', 'x', 'e', 'd' };

  int8_T b_msubspace_data[36];
  real_T b_poslim_data[12];
  static real_T dv1[3] = { 0.0, 0.0, -9.81 };

  static char_T bname[4] = { 'b', 'a', 's', 'e' };

  int8_T b_I[9];
  b_obj = obj;
  st.site = &l_emlrtRSI;
  b_st.site = &k_emlrtRSI;
  st.site = &m_emlrtRSI;
  b_obj->Bodies[0] = RigidBody_RigidBody(iobj_0);
  b_obj->Bodies[0]->Index = 1.0;
  st.site = &m_emlrtRSI;
  b_st.site = &p_emlrtRSI;
  c_st.site = &k_emlrtRSI;
  b_index = iobj_1->NameInternal->size[0] * iobj_1->NameInternal->size[1];
  iobj_1->NameInternal->size[0] = 1;
  iobj_1->NameInternal->size[1] = 5;
  emxEnsureCapacity_char_T(iobj_1->NameInternal, b_index);
  for (b_index = 0; b_index < 5; b_index++) {
    iobj_1->NameInternal->data[b_index] = cv[b_index];
  }

  iobj_1->ParentIndex = 1.0;
  iobj_1->MassInternal = 1.0;
  for (b_index = 0; b_index < 3; b_index++) {
    iobj_1->CenterOfMassInternal[b_index] = 0.0;
  }

  for (b_index = 0; b_index < 9; b_index++) {
    iobj_1->InertiaInternal[b_index] = (real_T)iv[b_index];
  }

  for (b_index = 0; b_index < 36; b_index++) {
    iobj_1->SpatialInertia[b_index] = (real_T)iv1[b_index];
  }

  b_st.site = &q_emlrtRSI;
  iobj_1->JointInternal.InTree = false;
  for (b_index = 0; b_index < 16; b_index++) {
    iobj_1->JointInternal.JointToParentTransform[b_index] = (real_T)iv2[b_index];
  }

  for (b_index = 0; b_index < 16; b_index++) {
    iobj_1->JointInternal.ChildToJointTransform[b_index] = (real_T)iv2[b_index];
  }

  c_st.site = &r_emlrtRSI;
  b_index = iobj_1->JointInternal.NameInternal->size[0] *
    iobj_1->JointInternal.NameInternal->size[1];
  iobj_1->JointInternal.NameInternal->size[0] = 1;
  iobj_1->JointInternal.NameInternal->size[1] = 6;
  emxEnsureCapacity_char_T(iobj_1->JointInternal.NameInternal, b_index);
  for (b_index = 0; b_index < 6; b_index++) {
    iobj_1->JointInternal.NameInternal->data[b_index] = jname[b_index];
  }

  b_index = iobj_1->JointInternal.Type->size[0] * iobj_1->
    JointInternal.Type->size[1];
  iobj_1->JointInternal.Type->size[0] = 1;
  iobj_1->JointInternal.Type->size[1] = 8;
  emxEnsureCapacity_char_T(iobj_1->JointInternal.Type, b_index);
  for (b_index = 0; b_index < 8; b_index++) {
    iobj_1->JointInternal.Type->data[b_index] = cv1[b_index];
  }

  emxInit_char_T(&switch_expression, 2);
  b_index = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = iobj_1->JointInternal.Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, b_index);
  loop_ub = iobj_1->JointInternal.Type->size[1] - 1;
  for (b_index = 0; b_index <= loop_ub; b_index++) {
    switch_expression->data[b_index] = iobj_1->JointInternal.Type->data[b_index];
  }

  result = b_strcmp(switch_expression);
  if (result) {
    b_index = 0;
  } else {
    result = c_strcmp(switch_expression);
    if (result) {
      b_index = 1;
    } else {
      b_index = -1;
    }
  }

  emxFree_char_T(&switch_expression);
  switch (b_index) {
   case 0:
    for (b_index = 0; b_index < 6; b_index++) {
      msubspace_data[b_index] = iv3[b_index];
    }

    for (b_index = 0; b_index < 2; b_index++) {
      poslim_data[b_index] = 6.2831853071795862 * (real_T)b_index +
        -3.1415926535897931;
    }

    iobj_1->JointInternal.VelocityNumber = 1.0;
    iobj_1->JointInternal.PositionNumber = 1.0;
    for (b_index = 0; b_index < 3; b_index++) {
      iobj_1->JointInternal.JointAxisInternal[b_index] = (real_T)iv5[b_index];
    }
    break;

   case 1:
    for (b_index = 0; b_index < 6; b_index++) {
      msubspace_data[b_index] = iv4[b_index];
    }

    for (b_index = 0; b_index < 2; b_index++) {
      poslim_data[b_index] = (real_T)b_index + -0.5;
    }

    iobj_1->JointInternal.VelocityNumber = 1.0;
    iobj_1->JointInternal.PositionNumber = 1.0;
    for (b_index = 0; b_index < 3; b_index++) {
      iobj_1->JointInternal.JointAxisInternal[b_index] = (real_T)iv5[b_index];
    }
    break;

   default:
    for (b_index = 0; b_index < 6; b_index++) {
      msubspace_data[b_index] = 0;
    }

    for (b_index = 0; b_index < 2; b_index++) {
      poslim_data[b_index] = 0.0;
    }

    iobj_1->JointInternal.VelocityNumber = 0.0;
    iobj_1->JointInternal.PositionNumber = 0.0;
    for (b_index = 0; b_index < 3; b_index++) {
      iobj_1->JointInternal.JointAxisInternal[b_index] = 0.0;
    }
    break;
  }

  b_index = iobj_1->JointInternal.MotionSubspace->size[0] *
    iobj_1->JointInternal.MotionSubspace->size[1];
  iobj_1->JointInternal.MotionSubspace->size[0] = 6;
  iobj_1->JointInternal.MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(iobj_1->JointInternal.MotionSubspace, b_index);
  for (b_index = 0; b_index < 6; b_index++) {
    iobj_1->JointInternal.MotionSubspace->data[b_index] = (real_T)
      msubspace_data[b_index];
  }

  b_index = iobj_1->JointInternal.PositionLimitsInternal->size[0] *
    iobj_1->JointInternal.PositionLimitsInternal->size[1];
  iobj_1->JointInternal.PositionLimitsInternal->size[0] = 1;
  iobj_1->JointInternal.PositionLimitsInternal->size[1] = 2;
  emxEnsureCapacity_real_T(iobj_1->JointInternal.PositionLimitsInternal, b_index);
  for (b_index = 0; b_index < 2; b_index++) {
    iobj_1->JointInternal.PositionLimitsInternal->data[b_index] =
      poslim_data[b_index];
  }

  b_index = iobj_1->JointInternal.HomePositionInternal->size[0];
  iobj_1->JointInternal.HomePositionInternal->size[0] = 1;
  emxEnsureCapacity_real_T1(iobj_1->JointInternal.HomePositionInternal, b_index);
  iobj_1->JointInternal.HomePositionInternal->data[0] = 0.0;
  for (b_index = 0; b_index < 16; b_index++) {
    iobj_1->JointInternal.JointToParentTransform[b_index] = dv[b_index];
  }

  for (b_index = 0; b_index < 16; b_index++) {
    iobj_1->JointInternal.ChildToJointTransform[b_index] = (real_T)iv2[b_index];
  }

  b_index = iobj_1->JointInternal.MotionSubspace->size[0] *
    iobj_1->JointInternal.MotionSubspace->size[1];
  iobj_1->JointInternal.MotionSubspace->size[0] = 6;
  iobj_1->JointInternal.MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(iobj_1->JointInternal.MotionSubspace, b_index);
  for (b_index = 0; b_index < 6; b_index++) {
    iobj_1->JointInternal.MotionSubspace->data[b_index] = (real_T)iv3[b_index];
  }

  iobj_1->JointInternal.InTree = true;
  b_index = iobj_1->JointInternal.PositionLimitsInternal->size[0] *
    iobj_1->JointInternal.PositionLimitsInternal->size[1];
  iobj_1->JointInternal.PositionLimitsInternal->size[0] = 1;
  iobj_1->JointInternal.PositionLimitsInternal->size[1] = 2;
  emxEnsureCapacity_real_T(iobj_1->JointInternal.PositionLimitsInternal, b_index);
  for (b_index = 0; b_index < 2; b_index++) {
    iobj_1->JointInternal.PositionLimitsInternal->data[b_index] =
      6.2831853071795862 * (real_T)b_index + -3.1415926535897931;
  }

  for (b_index = 0; b_index < 3; b_index++) {
    iobj_1->JointInternal.JointAxisInternal[b_index] = (real_T)iv5[b_index];
  }

  b_index = iobj_1->JointInternal.HomePositionInternal->size[0];
  iobj_1->JointInternal.HomePositionInternal->size[0] = 1;
  emxEnsureCapacity_real_T1(iobj_1->JointInternal.HomePositionInternal, b_index);
  iobj_1->JointInternal.HomePositionInternal->data[0] = 0.0;
  b_obj->Bodies[1] = iobj_1;
  b_obj->Bodies[1]->Index = 2.0;
  st.site = &m_emlrtRSI;
  b_st.site = &p_emlrtRSI;
  c_st.site = &k_emlrtRSI;
  b_index = iobj_2->NameInternal->size[0] * iobj_2->NameInternal->size[1];
  iobj_2->NameInternal->size[0] = 1;
  iobj_2->NameInternal->size[1] = 4;
  emxEnsureCapacity_char_T(iobj_2->NameInternal, b_index);
  for (b_index = 0; b_index < 4; b_index++) {
    iobj_2->NameInternal->data[b_index] = cv2[b_index];
  }

  iobj_2->ParentIndex = 2.0;
  iobj_2->MassInternal = 1.0;
  for (b_index = 0; b_index < 3; b_index++) {
    iobj_2->CenterOfMassInternal[b_index] = 0.0;
  }

  for (b_index = 0; b_index < 9; b_index++) {
    iobj_2->InertiaInternal[b_index] = (real_T)iv[b_index];
  }

  for (b_index = 0; b_index < 36; b_index++) {
    iobj_2->SpatialInertia[b_index] = (real_T)iv1[b_index];
  }

  b_st.site = &q_emlrtRSI;
  iobj_2->JointInternal.InTree = false;
  for (b_index = 0; b_index < 16; b_index++) {
    iobj_2->JointInternal.JointToParentTransform[b_index] = (real_T)iv2[b_index];
  }

  for (b_index = 0; b_index < 16; b_index++) {
    iobj_2->JointInternal.ChildToJointTransform[b_index] = (real_T)iv2[b_index];
  }

  c_st.site = &r_emlrtRSI;
  b_index = iobj_2->JointInternal.NameInternal->size[0] *
    iobj_2->JointInternal.NameInternal->size[1];
  iobj_2->JointInternal.NameInternal->size[0] = 1;
  iobj_2->JointInternal.NameInternal->size[1] = 8;
  emxEnsureCapacity_char_T(iobj_2->JointInternal.NameInternal, b_index);
  for (b_index = 0; b_index < 8; b_index++) {
    iobj_2->JointInternal.NameInternal->data[b_index] = b_jname[b_index];
  }

  b_index = iobj_2->JointInternal.Type->size[0] * iobj_2->
    JointInternal.Type->size[1];
  iobj_2->JointInternal.Type->size[0] = 1;
  iobj_2->JointInternal.Type->size[1] = 5;
  emxEnsureCapacity_char_T(iobj_2->JointInternal.Type, b_index);
  for (b_index = 0; b_index < 5; b_index++) {
    iobj_2->JointInternal.Type->data[b_index] = cv3[b_index];
  }

  emxInit_char_T(&b_switch_expression, 2);
  b_index = b_switch_expression->size[0] * b_switch_expression->size[1];
  b_switch_expression->size[0] = 1;
  b_switch_expression->size[1] = iobj_2->JointInternal.Type->size[1];
  emxEnsureCapacity_char_T(b_switch_expression, b_index);
  loop_ub = iobj_2->JointInternal.Type->size[1] - 1;
  for (b_index = 0; b_index <= loop_ub; b_index++) {
    b_switch_expression->data[b_index] = iobj_2->JointInternal.Type->
      data[b_index];
  }

  result = b_strcmp(b_switch_expression);
  if (result) {
    b_index = 0;
  } else {
    result = c_strcmp(b_switch_expression);
    if (result) {
      b_index = 1;
    } else {
      b_index = -1;
    }
  }

  emxFree_char_T(&b_switch_expression);
  switch (b_index) {
   case 0:
    for (b_index = 0; b_index < 6; b_index++) {
      b_msubspace_data[b_index] = iv3[b_index];
    }

    for (b_index = 0; b_index < 2; b_index++) {
      b_poslim_data[b_index] = 6.2831853071795862 * (real_T)b_index +
        -3.1415926535897931;
    }

    iobj_2->JointInternal.VelocityNumber = 1.0;
    iobj_2->JointInternal.PositionNumber = 1.0;
    for (b_index = 0; b_index < 3; b_index++) {
      iobj_2->JointInternal.JointAxisInternal[b_index] = (real_T)iv5[b_index];
    }
    break;

   case 1:
    for (b_index = 0; b_index < 6; b_index++) {
      b_msubspace_data[b_index] = iv4[b_index];
    }

    for (b_index = 0; b_index < 2; b_index++) {
      b_poslim_data[b_index] = (real_T)b_index + -0.5;
    }

    iobj_2->JointInternal.VelocityNumber = 1.0;
    iobj_2->JointInternal.PositionNumber = 1.0;
    for (b_index = 0; b_index < 3; b_index++) {
      iobj_2->JointInternal.JointAxisInternal[b_index] = (real_T)iv5[b_index];
    }
    break;

   default:
    for (b_index = 0; b_index < 6; b_index++) {
      b_msubspace_data[b_index] = 0;
    }

    for (b_index = 0; b_index < 2; b_index++) {
      b_poslim_data[b_index] = 0.0;
    }

    iobj_2->JointInternal.VelocityNumber = 0.0;
    iobj_2->JointInternal.PositionNumber = 0.0;
    for (b_index = 0; b_index < 3; b_index++) {
      iobj_2->JointInternal.JointAxisInternal[b_index] = 0.0;
    }
    break;
  }

  b_index = iobj_2->JointInternal.MotionSubspace->size[0] *
    iobj_2->JointInternal.MotionSubspace->size[1];
  iobj_2->JointInternal.MotionSubspace->size[0] = 6;
  iobj_2->JointInternal.MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(iobj_2->JointInternal.MotionSubspace, b_index);
  for (b_index = 0; b_index < 6; b_index++) {
    iobj_2->JointInternal.MotionSubspace->data[b_index] = (real_T)
      b_msubspace_data[b_index];
  }

  b_index = iobj_2->JointInternal.PositionLimitsInternal->size[0] *
    iobj_2->JointInternal.PositionLimitsInternal->size[1];
  iobj_2->JointInternal.PositionLimitsInternal->size[0] = 1;
  iobj_2->JointInternal.PositionLimitsInternal->size[1] = 2;
  emxEnsureCapacity_real_T(iobj_2->JointInternal.PositionLimitsInternal, b_index);
  for (b_index = 0; b_index < 2; b_index++) {
    iobj_2->JointInternal.PositionLimitsInternal->data[b_index] =
      b_poslim_data[b_index];
  }

  b_index = iobj_2->JointInternal.HomePositionInternal->size[0];
  iobj_2->JointInternal.HomePositionInternal->size[0] = 1;
  emxEnsureCapacity_real_T1(iobj_2->JointInternal.HomePositionInternal, b_index);
  iobj_2->JointInternal.HomePositionInternal->data[0] = 0.0;
  for (b_index = 0; b_index < 16; b_index++) {
    iobj_2->JointInternal.JointToParentTransform[b_index] = dv[b_index];
  }

  for (b_index = 0; b_index < 16; b_index++) {
    iobj_2->JointInternal.ChildToJointTransform[b_index] = (real_T)iv2[b_index];
  }

  b_index = iobj_2->JointInternal.MotionSubspace->size[0] *
    iobj_2->JointInternal.MotionSubspace->size[1];
  iobj_2->JointInternal.MotionSubspace->size[0] = 6;
  iobj_2->JointInternal.MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(iobj_2->JointInternal.MotionSubspace, b_index);
  for (b_index = 0; b_index < 6; b_index++) {
    iobj_2->JointInternal.MotionSubspace->data[b_index] = 0.0;
  }

  iobj_2->JointInternal.InTree = true;
  b_index = iobj_2->JointInternal.PositionLimitsInternal->size[0] *
    iobj_2->JointInternal.PositionLimitsInternal->size[1];
  iobj_2->JointInternal.PositionLimitsInternal->size[0] = 1;
  iobj_2->JointInternal.PositionLimitsInternal->size[1] = 2;
  emxEnsureCapacity_real_T(iobj_2->JointInternal.PositionLimitsInternal, b_index);
  for (b_index = 0; b_index < 2; b_index++) {
    iobj_2->JointInternal.PositionLimitsInternal->data[b_index] = 0.0;
  }

  for (b_index = 0; b_index < 3; b_index++) {
    iobj_2->JointInternal.JointAxisInternal[b_index] = 0.0;
  }

  b_index = iobj_2->JointInternal.HomePositionInternal->size[0];
  iobj_2->JointInternal.HomePositionInternal->size[0] = 1;
  emxEnsureCapacity_real_T1(iobj_2->JointInternal.HomePositionInternal, b_index);
  iobj_2->JointInternal.HomePositionInternal->data[0] = 0.0;
  b_obj->Bodies[2] = iobj_2;
  b_obj->Bodies[2]->Index = 3.0;
  b_obj->NumBodies = 3.0;
  st.site = &n_emlrtRSI;
  for (b_index = 0; b_index < 3; b_index++) {
    b_obj->Gravity[b_index] = dv1[b_index];
  }

  st.site = &o_emlrtRSI;
  b_st.site = &p_emlrtRSI;
  c_st.site = &k_emlrtRSI;
  b_index = b_obj->Base.NameInternal->size[0] * b_obj->Base.NameInternal->size[1];
  b_obj->Base.NameInternal->size[0] = 1;
  b_obj->Base.NameInternal->size[1] = 4;
  emxEnsureCapacity_char_T(b_obj->Base.NameInternal, b_index);
  for (b_index = 0; b_index < 4; b_index++) {
    b_obj->Base.NameInternal->data[b_index] = bname[b_index];
  }

  b_st.site = &s_emlrtRSI;
  rigidBodyJoint_rigidBodyJoint(&b_obj->Base.JointInternal);
  b_obj->Base.Index = -1.0;
  b_obj->Base.ParentIndex = -1.0;
  b_obj->Base.MassInternal = 1.0;
  for (b_index = 0; b_index < 3; b_index++) {
    b_obj->Base.CenterOfMassInternal[b_index] = 0.0;
  }

  for (b_index = 0; b_index < 9; b_index++) {
    b_I[b_index] = 0;
  }

  for (b_index = 0; b_index < 3; b_index++) {
    b_I[b_index + 3 * b_index] = 1;
  }

  for (b_index = 0; b_index < 9; b_index++) {
    b_obj->Base.InertiaInternal[b_index] = (real_T)b_I[b_index];
  }

  for (b_index = 0; b_index < 36; b_index++) {
    msubspace_data[b_index] = 0;
  }

  for (b_index = 0; b_index < 6; b_index++) {
    msubspace_data[b_index + 6 * b_index] = 1;
  }

  for (b_index = 0; b_index < 36; b_index++) {
    b_obj->Base.SpatialInertia[b_index] = (real_T)msubspace_data[b_index];
  }

  return b_obj;
}

static robotics_manip_internal_RigidBody *RigidBody_RigidBody
  (robotics_manip_internal_RigidBody *obj)
{
  robotics_manip_internal_RigidBody *b_obj;
  emlrtStack st;
  emlrtStack b_st;
  int32_T b_index;
  static char_T cv[5] = { 'b', 'o', 'd', 'y', '1' };

  static int8_T iv[9] = { 1, 0, 0, 0, 1, 0, 0, 0, 1 };

  static int8_T iv1[36] = { 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0,
    0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1 };

  static int8_T iv2[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

  static char_T jname[6] = { 'j', 'o', 'i', 'n', 't', '1' };

  emxArray_char_T *switch_expression;
  static char_T cv1[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  int32_T loop_ub;
  boolean_T result;
  int8_T msubspace_data[36];
  static int8_T iv3[6] = { 0, 0, 1, 0, 0, 0 };

  static int8_T iv4[6] = { 0, 0, 0, 0, 0, 1 };

  real_T poslim_data[12];
  static int8_T iv5[3] = { 0, 0, 1 };

  static real_T dv[16] = { 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0,
    0.0, 0.0, 0.0, 0.1, 1.0 };

  b_obj = obj;
  st.site = &p_emlrtRSI;
  b_st.site = &k_emlrtRSI;
  b_index = b_obj->NameInternal->size[0] * b_obj->NameInternal->size[1];
  b_obj->NameInternal->size[0] = 1;
  b_obj->NameInternal->size[1] = 5;
  emxEnsureCapacity_char_T(b_obj->NameInternal, b_index);
  for (b_index = 0; b_index < 5; b_index++) {
    b_obj->NameInternal->data[b_index] = cv[b_index];
  }

  b_obj->ParentIndex = 0.0;
  b_obj->MassInternal = 1.0;
  for (b_index = 0; b_index < 3; b_index++) {
    b_obj->CenterOfMassInternal[b_index] = 0.0;
  }

  for (b_index = 0; b_index < 9; b_index++) {
    b_obj->InertiaInternal[b_index] = (real_T)iv[b_index];
  }

  for (b_index = 0; b_index < 36; b_index++) {
    b_obj->SpatialInertia[b_index] = (real_T)iv1[b_index];
  }

  st.site = &q_emlrtRSI;
  b_obj->JointInternal.InTree = false;
  for (b_index = 0; b_index < 16; b_index++) {
    b_obj->JointInternal.JointToParentTransform[b_index] = (real_T)iv2[b_index];
  }

  for (b_index = 0; b_index < 16; b_index++) {
    b_obj->JointInternal.ChildToJointTransform[b_index] = (real_T)iv2[b_index];
  }

  b_st.site = &r_emlrtRSI;
  b_index = b_obj->JointInternal.NameInternal->size[0] *
    b_obj->JointInternal.NameInternal->size[1];
  b_obj->JointInternal.NameInternal->size[0] = 1;
  b_obj->JointInternal.NameInternal->size[1] = 6;
  emxEnsureCapacity_char_T(b_obj->JointInternal.NameInternal, b_index);
  for (b_index = 0; b_index < 6; b_index++) {
    b_obj->JointInternal.NameInternal->data[b_index] = jname[b_index];
  }

  b_index = b_obj->JointInternal.Type->size[0] * b_obj->JointInternal.Type->
    size[1];
  b_obj->JointInternal.Type->size[0] = 1;
  b_obj->JointInternal.Type->size[1] = 8;
  emxEnsureCapacity_char_T(b_obj->JointInternal.Type, b_index);
  for (b_index = 0; b_index < 8; b_index++) {
    b_obj->JointInternal.Type->data[b_index] = cv1[b_index];
  }

  emxInit_char_T(&switch_expression, 2);
  b_index = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = b_obj->JointInternal.Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, b_index);
  loop_ub = b_obj->JointInternal.Type->size[1] - 1;
  for (b_index = 0; b_index <= loop_ub; b_index++) {
    switch_expression->data[b_index] = b_obj->JointInternal.Type->data[b_index];
  }

  result = b_strcmp(switch_expression);
  if (result) {
    b_index = 0;
  } else {
    result = c_strcmp(switch_expression);
    if (result) {
      b_index = 1;
    } else {
      b_index = -1;
    }
  }

  emxFree_char_T(&switch_expression);
  switch (b_index) {
   case 0:
    for (b_index = 0; b_index < 6; b_index++) {
      msubspace_data[b_index] = iv3[b_index];
    }

    for (b_index = 0; b_index < 2; b_index++) {
      poslim_data[b_index] = 6.2831853071795862 * (real_T)b_index +
        -3.1415926535897931;
    }

    b_obj->JointInternal.VelocityNumber = 1.0;
    b_obj->JointInternal.PositionNumber = 1.0;
    for (b_index = 0; b_index < 3; b_index++) {
      b_obj->JointInternal.JointAxisInternal[b_index] = (real_T)iv5[b_index];
    }
    break;

   case 1:
    for (b_index = 0; b_index < 6; b_index++) {
      msubspace_data[b_index] = iv4[b_index];
    }

    for (b_index = 0; b_index < 2; b_index++) {
      poslim_data[b_index] = (real_T)b_index + -0.5;
    }

    b_obj->JointInternal.VelocityNumber = 1.0;
    b_obj->JointInternal.PositionNumber = 1.0;
    for (b_index = 0; b_index < 3; b_index++) {
      b_obj->JointInternal.JointAxisInternal[b_index] = (real_T)iv5[b_index];
    }
    break;

   default:
    for (b_index = 0; b_index < 6; b_index++) {
      msubspace_data[b_index] = 0;
    }

    for (b_index = 0; b_index < 2; b_index++) {
      poslim_data[b_index] = 0.0;
    }

    b_obj->JointInternal.VelocityNumber = 0.0;
    b_obj->JointInternal.PositionNumber = 0.0;
    for (b_index = 0; b_index < 3; b_index++) {
      b_obj->JointInternal.JointAxisInternal[b_index] = 0.0;
    }
    break;
  }

  b_index = b_obj->JointInternal.MotionSubspace->size[0] *
    b_obj->JointInternal.MotionSubspace->size[1];
  b_obj->JointInternal.MotionSubspace->size[0] = 6;
  b_obj->JointInternal.MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(b_obj->JointInternal.MotionSubspace, b_index);
  for (b_index = 0; b_index < 6; b_index++) {
    b_obj->JointInternal.MotionSubspace->data[b_index] = (real_T)
      msubspace_data[b_index];
  }

  b_index = b_obj->JointInternal.PositionLimitsInternal->size[0] *
    b_obj->JointInternal.PositionLimitsInternal->size[1];
  b_obj->JointInternal.PositionLimitsInternal->size[0] = 1;
  b_obj->JointInternal.PositionLimitsInternal->size[1] = 2;
  emxEnsureCapacity_real_T(b_obj->JointInternal.PositionLimitsInternal, b_index);
  for (b_index = 0; b_index < 2; b_index++) {
    b_obj->JointInternal.PositionLimitsInternal->data[b_index] =
      poslim_data[b_index];
  }

  b_index = b_obj->JointInternal.HomePositionInternal->size[0];
  b_obj->JointInternal.HomePositionInternal->size[0] = 1;
  emxEnsureCapacity_real_T1(b_obj->JointInternal.HomePositionInternal, b_index);
  b_obj->JointInternal.HomePositionInternal->data[0] = 0.0;
  for (b_index = 0; b_index < 16; b_index++) {
    b_obj->JointInternal.JointToParentTransform[b_index] = dv[b_index];
  }

  for (b_index = 0; b_index < 16; b_index++) {
    b_obj->JointInternal.ChildToJointTransform[b_index] = (real_T)iv2[b_index];
  }

  b_index = b_obj->JointInternal.MotionSubspace->size[0] *
    b_obj->JointInternal.MotionSubspace->size[1];
  b_obj->JointInternal.MotionSubspace->size[0] = 6;
  b_obj->JointInternal.MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(b_obj->JointInternal.MotionSubspace, b_index);
  for (b_index = 0; b_index < 6; b_index++) {
    b_obj->JointInternal.MotionSubspace->data[b_index] = (real_T)iv3[b_index];
  }

  b_obj->JointInternal.InTree = true;
  b_index = b_obj->JointInternal.PositionLimitsInternal->size[0] *
    b_obj->JointInternal.PositionLimitsInternal->size[1];
  b_obj->JointInternal.PositionLimitsInternal->size[0] = 1;
  b_obj->JointInternal.PositionLimitsInternal->size[1] = 2;
  emxEnsureCapacity_real_T(b_obj->JointInternal.PositionLimitsInternal, b_index);
  for (b_index = 0; b_index < 2; b_index++) {
    b_obj->JointInternal.PositionLimitsInternal->data[b_index] =
      6.2831853071795862 * (real_T)b_index + -3.1415926535897931;
  }

  for (b_index = 0; b_index < 3; b_index++) {
    b_obj->JointInternal.JointAxisInternal[b_index] = (real_T)iv5[b_index];
  }

  b_index = b_obj->JointInternal.HomePositionInternal->size[0];
  b_obj->JointInternal.HomePositionInternal->size[0] = 1;
  emxEnsureCapacity_real_T1(b_obj->JointInternal.HomePositionInternal, b_index);
  b_obj->JointInternal.HomePositionInternal->data[0] = 0.0;
  return b_obj;
}

static boolean_T b_strcmp(emxArray_char_T *a)
{
  boolean_T b_bool;
  int32_T kstr;
  int32_T exitg1;
  static char_T cv[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  b_bool = false;
  if (a->size[1] == 8) {
    kstr = 1;
    do {
      exitg1 = 0;
      if (kstr - 1 < 8) {
        if (a->data[kstr - 1] != cv[kstr - 1]) {
          exitg1 = 1;
        } else {
          kstr++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  return b_bool;
}

static boolean_T c_strcmp(emxArray_char_T *a)
{
  boolean_T b_bool;
  int32_T kstr;
  int32_T exitg1;
  static char_T cv[9] = { 'p', 'r', 'i', 's', 'm', 'a', 't', 'i', 'c' };

  b_bool = false;
  if (a->size[1] == 9) {
    kstr = 1;
    do {
      exitg1 = 0;
      if (kstr - 1 < 9) {
        if (a->data[kstr - 1] != cv[kstr - 1]) {
          exitg1 = 1;
        } else {
          kstr++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  return b_bool;
}

static rigidBodyJoint *rigidBodyJoint_rigidBodyJoint(rigidBodyJoint *obj)
{
  rigidBodyJoint *b_obj;
  int32_T b_index;
  static int8_T iv[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

  emlrtStack st;
  static char_T jname[8] = { 'b', 'a', 's', 'e', '_', 'j', 'n', 't' };

  emxArray_char_T *switch_expression;
  static char_T cv[5] = { 'f', 'i', 'x', 'e', 'd' };

  int32_T loop_ub;
  boolean_T result;
  int8_T msubspace_data[36];
  static int8_T iv1[6] = { 0, 0, 1, 0, 0, 0 };

  static int8_T iv2[6] = { 0, 0, 0, 0, 0, 1 };

  real_T poslim_data[12];
  static int8_T iv3[3] = { 0, 0, 1 };

  b_obj = obj;
  b_obj->InTree = false;
  for (b_index = 0; b_index < 16; b_index++) {
    b_obj->JointToParentTransform[b_index] = (real_T)iv[b_index];
  }

  for (b_index = 0; b_index < 16; b_index++) {
    b_obj->ChildToJointTransform[b_index] = (real_T)iv[b_index];
  }

  st.site = &r_emlrtRSI;
  b_index = b_obj->NameInternal->size[0] * b_obj->NameInternal->size[1];
  b_obj->NameInternal->size[0] = 1;
  b_obj->NameInternal->size[1] = 8;
  emxEnsureCapacity_char_T(b_obj->NameInternal, b_index);
  for (b_index = 0; b_index < 8; b_index++) {
    b_obj->NameInternal->data[b_index] = jname[b_index];
  }

  b_index = b_obj->Type->size[0] * b_obj->Type->size[1];
  b_obj->Type->size[0] = 1;
  b_obj->Type->size[1] = 5;
  emxEnsureCapacity_char_T(b_obj->Type, b_index);
  for (b_index = 0; b_index < 5; b_index++) {
    b_obj->Type->data[b_index] = cv[b_index];
  }

  emxInit_char_T(&switch_expression, 2);
  b_index = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = b_obj->Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, b_index);
  loop_ub = b_obj->Type->size[1] - 1;
  for (b_index = 0; b_index <= loop_ub; b_index++) {
    switch_expression->data[b_index] = b_obj->Type->data[b_index];
  }

  result = b_strcmp(switch_expression);
  if (result) {
    b_index = 0;
  } else {
    result = c_strcmp(switch_expression);
    if (result) {
      b_index = 1;
    } else {
      b_index = -1;
    }
  }

  emxFree_char_T(&switch_expression);
  switch (b_index) {
   case 0:
    for (b_index = 0; b_index < 6; b_index++) {
      msubspace_data[b_index] = iv1[b_index];
    }

    for (b_index = 0; b_index < 2; b_index++) {
      poslim_data[b_index] = 6.2831853071795862 * (real_T)b_index +
        -3.1415926535897931;
    }

    b_obj->VelocityNumber = 1.0;
    b_obj->PositionNumber = 1.0;
    for (b_index = 0; b_index < 3; b_index++) {
      b_obj->JointAxisInternal[b_index] = (real_T)iv3[b_index];
    }
    break;

   case 1:
    for (b_index = 0; b_index < 6; b_index++) {
      msubspace_data[b_index] = iv2[b_index];
    }

    for (b_index = 0; b_index < 2; b_index++) {
      poslim_data[b_index] = (real_T)b_index + -0.5;
    }

    b_obj->VelocityNumber = 1.0;
    b_obj->PositionNumber = 1.0;
    for (b_index = 0; b_index < 3; b_index++) {
      b_obj->JointAxisInternal[b_index] = (real_T)iv3[b_index];
    }
    break;

   default:
    for (b_index = 0; b_index < 6; b_index++) {
      msubspace_data[b_index] = 0;
    }

    for (b_index = 0; b_index < 2; b_index++) {
      poslim_data[b_index] = 0.0;
    }

    b_obj->VelocityNumber = 0.0;
    b_obj->PositionNumber = 0.0;
    for (b_index = 0; b_index < 3; b_index++) {
      b_obj->JointAxisInternal[b_index] = 0.0;
    }
    break;
  }

  b_index = b_obj->MotionSubspace->size[0] * b_obj->MotionSubspace->size[1];
  b_obj->MotionSubspace->size[0] = 6;
  b_obj->MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(b_obj->MotionSubspace, b_index);
  for (b_index = 0; b_index < 6; b_index++) {
    b_obj->MotionSubspace->data[b_index] = (real_T)msubspace_data[b_index];
  }

  b_index = b_obj->PositionLimitsInternal->size[0] *
    b_obj->PositionLimitsInternal->size[1];
  b_obj->PositionLimitsInternal->size[0] = 1;
  b_obj->PositionLimitsInternal->size[1] = 2;
  emxEnsureCapacity_real_T(b_obj->PositionLimitsInternal, b_index);
  for (b_index = 0; b_index < 2; b_index++) {
    b_obj->PositionLimitsInternal->data[b_index] = poslim_data[b_index];
  }

  b_index = b_obj->HomePositionInternal->size[0];
  b_obj->HomePositionInternal->size[0] = 1;
  emxEnsureCapacity_real_T1(b_obj->HomePositionInternal, b_index);
  b_obj->HomePositionInternal->data[0] = 0.0;
  return b_obj;
}

static robotics_manip_internal_RigidBodyTree_1 *b_RigidBodyTree_RigidBodyTree
  (InstanceStruct_99HJ2LsbXT8ZQdi4PHECuF *moduleInstance, const emlrtStack *sp,
   robotics_manip_internal_RigidBodyTree_1 *obj, rigidBodyJoint *iobj_0,
   robotics_manip_internal_RigidBody_1 *iobj_1,
   robotics_manip_internal_RigidBody_1 *iobj_2,
   robotics_manip_internal_RigidBody_1 *iobj_3, rigidBodyJoint *iobj_4,
   rigidBodyJoint *iobj_5, rigidBodyJoint *iobj_6)
{
  robotics_manip_internal_RigidBodyTree_1 *b_obj;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  int32_T k;
  static char_T bname[4] = { 'b', 'a', 's', 'e' };

  real_T idx[5];
  int32_T i;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  b_obj = obj;
  st.site = &l_emlrtRSI;
  b_st.site = &k_emlrtRSI;
  st.site = &db_emlrtRSI;
  b_st.site = &p_emlrtRSI;
  c_st.site = &k_emlrtRSI;
  k = b_obj->Base.NameInternal->size[0] * b_obj->Base.NameInternal->size[1];
  b_obj->Base.NameInternal->size[0] = 1;
  b_obj->Base.NameInternal->size[1] = 4;
  emxEnsureCapacity_char_T(b_obj->Base.NameInternal, k);
  for (k = 0; k < 4; k++) {
    b_obj->Base.NameInternal->data[k] = bname[k];
  }

  b_st.site = &s_emlrtRSI;
  b_obj->Base.JointInternal = rigidBodyJoint_rigidBodyJoint(iobj_0);
  b_obj->Base.Index = -1.0;
  b_obj->Base.ParentIndex = -1.0;
  b_obj->Base.Index = 0.0;
  st.site = &cb_emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  c_st.site = &gb_emlrtRSI;
  d_st.site = &hb_emlrtRSI;
  b_rand(moduleInstance, &d_st, idx);
  for (k = 0; k < 5; k++) {
    idx[k] = muDoubleScalarFloor(idx[k] * 62.0) + 1.0;
  }

  for (k = 0; k < 5; k++) {
    i = (int32_T)emlrtIntegerCheckR2012b(idx[k], &b_emlrtDCI, &b_st);
    emlrtDynamicBoundsCheckR2012b(i, 1, 62, &c_emlrtBCI, &b_st);
  }

  st.site = &eb_emlrtRSI;
  RigidBodyTree_clearAllBodies(moduleInstance, &st, b_obj, iobj_1, iobj_4,
    iobj_2, iobj_5, iobj_3, iobj_6);
  return b_obj;
}

static void b_rand(InstanceStruct_99HJ2LsbXT8ZQdi4PHECuF *moduleInstance, const
                   emlrtStack *sp, real_T r[5])
{
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  int32_T k;
  real_T d;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &ib_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b_st.site = &jb_emlrtRSI;
  for (k = 0; k < 5; k++) {
    c_st.site = &kb_emlrtRSI;
    d = eml_rand_mt19937ar(&c_st, moduleInstance->c_state);
    r[k] = d;
  }
}

static boolean_T is_valid_state(uint32_T mt[625])
{
  boolean_T isvalid;
  int32_T k;
  boolean_T exitg1;
  if ((mt[624] >= 1U) && (mt[624] < 625U)) {
    isvalid = true;
  } else {
    isvalid = false;
  }

  if (isvalid) {
    isvalid = false;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k + 1 < 625)) {
      if (mt[k] == 0U) {
        k++;
      } else {
        isvalid = true;
        exitg1 = true;
      }
    }
  }

  return isvalid;
}

static void RigidBodyTree_clearAllBodies(InstanceStruct_99HJ2LsbXT8ZQdi4PHECuF
  *moduleInstance, const emlrtStack *sp, robotics_manip_internal_RigidBodyTree_1
  *obj, robotics_manip_internal_RigidBody_1 *iobj_0, rigidBodyJoint *iobj_1,
  robotics_manip_internal_RigidBody_1 *iobj_2, rigidBodyJoint *iobj_3,
  robotics_manip_internal_RigidBody_1 *iobj_4, rigidBodyJoint *iobj_5)
{
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  int32_T i;
  static char_T bname[10] = { 'd', 'u', 'm', 'm', 'y', 'b', 'o', 'd', 'y',
    '\x01' };

  static int8_T iv[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

  static char_T jname[14] = { 'd', 'u', 'm', 'm', 'y', 'b', 'o', 'd', 'y',
    '\x01', '_', 'j', 'n', 't' };

  emxArray_char_T *switch_expression;
  static char_T cv[5] = { 'f', 'i', 'x', 'e', 'd' };

  int32_T loop_ub;
  boolean_T result;
  int8_T msubspace_data[36];
  static int8_T iv1[6] = { 0, 0, 1, 0, 0, 0 };

  static int8_T iv2[6] = { 0, 0, 0, 0, 0, 1 };

  real_T poslim_data[12];
  static int8_T iv3[3] = { 0, 0, 1 };

  static char_T b_bname[10] = { 'd', 'u', 'm', 'm', 'y', 'b', 'o', 'd', 'y',
    '\x02' };

  static char_T b_jname[14] = { 'd', 'u', 'm', 'm', 'y', 'b', 'o', 'd', 'y',
    '\x02', '_', 'j', 'n', 't' };

  emxArray_char_T *b_switch_expression;
  int8_T b_msubspace_data[36];
  real_T b_poslim_data[12];
  static char_T c_bname[10] = { 'd', 'u', 'm', 'm', 'y', 'b', 'o', 'd', 'y',
    '\x03' };

  static char_T c_jname[14] = { 'd', 'u', 'm', 'm', 'y', 'b', 'o', 'd', 'y',
    '\x03', '_', 'j', 'n', 't' };

  emxArray_char_T *c_switch_expression;
  int8_T c_msubspace_data[36];
  real_T c_poslim_data[12];
  real_T idx[5];
  static int8_T iv4[6] = { 0, 0, 0, -1, -1, -1 };

  st.prev = sp;
  st.tls = sp->tls;
  st.site = &nb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  b_st.site = &p_emlrtRSI;
  c_st.site = &k_emlrtRSI;
  i = iobj_0->NameInternal->size[0] * iobj_0->NameInternal->size[1];
  iobj_0->NameInternal->size[0] = 1;
  iobj_0->NameInternal->size[1] = 10;
  emxEnsureCapacity_char_T(iobj_0->NameInternal, i);
  for (i = 0; i < 10; i++) {
    iobj_0->NameInternal->data[i] = bname[i];
  }

  b_st.site = &s_emlrtRSI;
  iobj_1->InTree = false;
  for (i = 0; i < 16; i++) {
    iobj_1->JointToParentTransform[i] = (real_T)iv[i];
  }

  for (i = 0; i < 16; i++) {
    iobj_1->ChildToJointTransform[i] = (real_T)iv[i];
  }

  c_st.site = &r_emlrtRSI;
  i = iobj_1->NameInternal->size[0] * iobj_1->NameInternal->size[1];
  iobj_1->NameInternal->size[0] = 1;
  iobj_1->NameInternal->size[1] = 14;
  emxEnsureCapacity_char_T(iobj_1->NameInternal, i);
  for (i = 0; i < 14; i++) {
    iobj_1->NameInternal->data[i] = jname[i];
  }

  i = iobj_1->Type->size[0] * iobj_1->Type->size[1];
  iobj_1->Type->size[0] = 1;
  iobj_1->Type->size[1] = 5;
  emxEnsureCapacity_char_T(iobj_1->Type, i);
  for (i = 0; i < 5; i++) {
    iobj_1->Type->data[i] = cv[i];
  }

  emxInit_char_T(&switch_expression, 2);
  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = iobj_1->Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, i);
  loop_ub = iobj_1->Type->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    switch_expression->data[i] = iobj_1->Type->data[i];
  }

  result = b_strcmp(switch_expression);
  if (result) {
    loop_ub = 0;
  } else {
    result = c_strcmp(switch_expression);
    if (result) {
      loop_ub = 1;
    } else {
      loop_ub = -1;
    }
  }

  emxFree_char_T(&switch_expression);
  switch (loop_ub) {
   case 0:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv1[i];
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = 6.2831853071795862 * (real_T)i + -3.1415926535897931;
    }

    iobj_1->VelocityNumber = 1.0;
    iobj_1->PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      iobj_1->JointAxisInternal[i] = (real_T)iv3[i];
    }
    break;

   case 1:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv2[i];
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = (real_T)i + -0.5;
    }

    iobj_1->VelocityNumber = 1.0;
    iobj_1->PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      iobj_1->JointAxisInternal[i] = (real_T)iv3[i];
    }
    break;

   default:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = 0;
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = 0.0;
    }

    iobj_1->VelocityNumber = 0.0;
    iobj_1->PositionNumber = 0.0;
    for (i = 0; i < 3; i++) {
      iobj_1->JointAxisInternal[i] = 0.0;
    }
    break;
  }

  i = iobj_1->MotionSubspace->size[0] * iobj_1->MotionSubspace->size[1];
  iobj_1->MotionSubspace->size[0] = 6;
  iobj_1->MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(iobj_1->MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    iobj_1->MotionSubspace->data[i] = (real_T)msubspace_data[i];
  }

  i = iobj_1->PositionLimitsInternal->size[0] * iobj_1->
    PositionLimitsInternal->size[1];
  iobj_1->PositionLimitsInternal->size[0] = 1;
  iobj_1->PositionLimitsInternal->size[1] = 2;
  emxEnsureCapacity_real_T(iobj_1->PositionLimitsInternal, i);
  for (i = 0; i < 2; i++) {
    iobj_1->PositionLimitsInternal->data[i] = poslim_data[i];
  }

  i = iobj_1->HomePositionInternal->size[0];
  iobj_1->HomePositionInternal->size[0] = 1;
  emxEnsureCapacity_real_T1(iobj_1->HomePositionInternal, i);
  iobj_1->HomePositionInternal->data[0] = 0.0;
  iobj_0->JointInternal = iobj_1;
  iobj_0->Index = -1.0;
  iobj_0->ParentIndex = -1.0;
  obj->Bodies[0] = iobj_0;
  st.site = &nb_emlrtRSI;
  b_st.site = &p_emlrtRSI;
  c_st.site = &k_emlrtRSI;
  i = iobj_2->NameInternal->size[0] * iobj_2->NameInternal->size[1];
  iobj_2->NameInternal->size[0] = 1;
  iobj_2->NameInternal->size[1] = 10;
  emxEnsureCapacity_char_T(iobj_2->NameInternal, i);
  for (i = 0; i < 10; i++) {
    iobj_2->NameInternal->data[i] = b_bname[i];
  }

  b_st.site = &s_emlrtRSI;
  iobj_3->InTree = false;
  for (i = 0; i < 16; i++) {
    iobj_3->JointToParentTransform[i] = (real_T)iv[i];
  }

  for (i = 0; i < 16; i++) {
    iobj_3->ChildToJointTransform[i] = (real_T)iv[i];
  }

  c_st.site = &r_emlrtRSI;
  i = iobj_3->NameInternal->size[0] * iobj_3->NameInternal->size[1];
  iobj_3->NameInternal->size[0] = 1;
  iobj_3->NameInternal->size[1] = 14;
  emxEnsureCapacity_char_T(iobj_3->NameInternal, i);
  for (i = 0; i < 14; i++) {
    iobj_3->NameInternal->data[i] = b_jname[i];
  }

  i = iobj_3->Type->size[0] * iobj_3->Type->size[1];
  iobj_3->Type->size[0] = 1;
  iobj_3->Type->size[1] = 5;
  emxEnsureCapacity_char_T(iobj_3->Type, i);
  for (i = 0; i < 5; i++) {
    iobj_3->Type->data[i] = cv[i];
  }

  emxInit_char_T(&b_switch_expression, 2);
  i = b_switch_expression->size[0] * b_switch_expression->size[1];
  b_switch_expression->size[0] = 1;
  b_switch_expression->size[1] = iobj_3->Type->size[1];
  emxEnsureCapacity_char_T(b_switch_expression, i);
  loop_ub = iobj_3->Type->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    b_switch_expression->data[i] = iobj_3->Type->data[i];
  }

  result = b_strcmp(b_switch_expression);
  if (result) {
    loop_ub = 0;
  } else {
    result = c_strcmp(b_switch_expression);
    if (result) {
      loop_ub = 1;
    } else {
      loop_ub = -1;
    }
  }

  emxFree_char_T(&b_switch_expression);
  switch (loop_ub) {
   case 0:
    for (i = 0; i < 6; i++) {
      b_msubspace_data[i] = iv1[i];
    }

    for (i = 0; i < 2; i++) {
      b_poslim_data[i] = 6.2831853071795862 * (real_T)i + -3.1415926535897931;
    }

    iobj_3->VelocityNumber = 1.0;
    iobj_3->PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      iobj_3->JointAxisInternal[i] = (real_T)iv3[i];
    }
    break;

   case 1:
    for (i = 0; i < 6; i++) {
      b_msubspace_data[i] = iv2[i];
    }

    for (i = 0; i < 2; i++) {
      b_poslim_data[i] = (real_T)i + -0.5;
    }

    iobj_3->VelocityNumber = 1.0;
    iobj_3->PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      iobj_3->JointAxisInternal[i] = (real_T)iv3[i];
    }
    break;

   default:
    for (i = 0; i < 6; i++) {
      b_msubspace_data[i] = 0;
    }

    for (i = 0; i < 2; i++) {
      b_poslim_data[i] = 0.0;
    }

    iobj_3->VelocityNumber = 0.0;
    iobj_3->PositionNumber = 0.0;
    for (i = 0; i < 3; i++) {
      iobj_3->JointAxisInternal[i] = 0.0;
    }
    break;
  }

  i = iobj_3->MotionSubspace->size[0] * iobj_3->MotionSubspace->size[1];
  iobj_3->MotionSubspace->size[0] = 6;
  iobj_3->MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(iobj_3->MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    iobj_3->MotionSubspace->data[i] = (real_T)b_msubspace_data[i];
  }

  i = iobj_3->PositionLimitsInternal->size[0] * iobj_3->
    PositionLimitsInternal->size[1];
  iobj_3->PositionLimitsInternal->size[0] = 1;
  iobj_3->PositionLimitsInternal->size[1] = 2;
  emxEnsureCapacity_real_T(iobj_3->PositionLimitsInternal, i);
  for (i = 0; i < 2; i++) {
    iobj_3->PositionLimitsInternal->data[i] = b_poslim_data[i];
  }

  i = iobj_3->HomePositionInternal->size[0];
  iobj_3->HomePositionInternal->size[0] = 1;
  emxEnsureCapacity_real_T1(iobj_3->HomePositionInternal, i);
  iobj_3->HomePositionInternal->data[0] = 0.0;
  iobj_2->JointInternal = iobj_3;
  iobj_2->Index = -1.0;
  iobj_2->ParentIndex = -1.0;
  obj->Bodies[1] = iobj_2;
  st.site = &nb_emlrtRSI;
  b_st.site = &p_emlrtRSI;
  c_st.site = &k_emlrtRSI;
  i = iobj_4->NameInternal->size[0] * iobj_4->NameInternal->size[1];
  iobj_4->NameInternal->size[0] = 1;
  iobj_4->NameInternal->size[1] = 10;
  emxEnsureCapacity_char_T(iobj_4->NameInternal, i);
  for (i = 0; i < 10; i++) {
    iobj_4->NameInternal->data[i] = c_bname[i];
  }

  b_st.site = &s_emlrtRSI;
  iobj_5->InTree = false;
  for (i = 0; i < 16; i++) {
    iobj_5->JointToParentTransform[i] = (real_T)iv[i];
  }

  for (i = 0; i < 16; i++) {
    iobj_5->ChildToJointTransform[i] = (real_T)iv[i];
  }

  c_st.site = &r_emlrtRSI;
  i = iobj_5->NameInternal->size[0] * iobj_5->NameInternal->size[1];
  iobj_5->NameInternal->size[0] = 1;
  iobj_5->NameInternal->size[1] = 14;
  emxEnsureCapacity_char_T(iobj_5->NameInternal, i);
  for (i = 0; i < 14; i++) {
    iobj_5->NameInternal->data[i] = c_jname[i];
  }

  i = iobj_5->Type->size[0] * iobj_5->Type->size[1];
  iobj_5->Type->size[0] = 1;
  iobj_5->Type->size[1] = 5;
  emxEnsureCapacity_char_T(iobj_5->Type, i);
  for (i = 0; i < 5; i++) {
    iobj_5->Type->data[i] = cv[i];
  }

  emxInit_char_T(&c_switch_expression, 2);
  i = c_switch_expression->size[0] * c_switch_expression->size[1];
  c_switch_expression->size[0] = 1;
  c_switch_expression->size[1] = iobj_5->Type->size[1];
  emxEnsureCapacity_char_T(c_switch_expression, i);
  loop_ub = iobj_5->Type->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    c_switch_expression->data[i] = iobj_5->Type->data[i];
  }

  result = b_strcmp(c_switch_expression);
  if (result) {
    loop_ub = 0;
  } else {
    result = c_strcmp(c_switch_expression);
    if (result) {
      loop_ub = 1;
    } else {
      loop_ub = -1;
    }
  }

  emxFree_char_T(&c_switch_expression);
  switch (loop_ub) {
   case 0:
    for (i = 0; i < 6; i++) {
      c_msubspace_data[i] = iv1[i];
    }

    for (i = 0; i < 2; i++) {
      c_poslim_data[i] = 6.2831853071795862 * (real_T)i + -3.1415926535897931;
    }

    iobj_5->VelocityNumber = 1.0;
    iobj_5->PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      iobj_5->JointAxisInternal[i] = (real_T)iv3[i];
    }
    break;

   case 1:
    for (i = 0; i < 6; i++) {
      c_msubspace_data[i] = iv2[i];
    }

    for (i = 0; i < 2; i++) {
      c_poslim_data[i] = (real_T)i + -0.5;
    }

    iobj_5->VelocityNumber = 1.0;
    iobj_5->PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      iobj_5->JointAxisInternal[i] = (real_T)iv3[i];
    }
    break;

   default:
    for (i = 0; i < 6; i++) {
      c_msubspace_data[i] = 0;
    }

    for (i = 0; i < 2; i++) {
      c_poslim_data[i] = 0.0;
    }

    iobj_5->VelocityNumber = 0.0;
    iobj_5->PositionNumber = 0.0;
    for (i = 0; i < 3; i++) {
      iobj_5->JointAxisInternal[i] = 0.0;
    }
    break;
  }

  i = iobj_5->MotionSubspace->size[0] * iobj_5->MotionSubspace->size[1];
  iobj_5->MotionSubspace->size[0] = 6;
  iobj_5->MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(iobj_5->MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    iobj_5->MotionSubspace->data[i] = (real_T)c_msubspace_data[i];
  }

  i = iobj_5->PositionLimitsInternal->size[0] * iobj_5->
    PositionLimitsInternal->size[1];
  iobj_5->PositionLimitsInternal->size[0] = 1;
  iobj_5->PositionLimitsInternal->size[1] = 2;
  emxEnsureCapacity_real_T(iobj_5->PositionLimitsInternal, i);
  for (i = 0; i < 2; i++) {
    iobj_5->PositionLimitsInternal->data[i] = c_poslim_data[i];
  }

  i = iobj_5->HomePositionInternal->size[0];
  iobj_5->HomePositionInternal->size[0] = 1;
  emxEnsureCapacity_real_T1(iobj_5->HomePositionInternal, i);
  iobj_5->HomePositionInternal->data[0] = 0.0;
  iobj_4->JointInternal = iobj_5;
  iobj_4->Index = -1.0;
  iobj_4->ParentIndex = -1.0;
  obj->Bodies[2] = iobj_4;
  obj->NumBodies = 0.0;
  obj->NumNonFixedBodies = 0.0;
  obj->PositionNumber = 0.0;
  obj->VelocityNumber = 0.0;
  st.site = &mb_emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  c_st.site = &gb_emlrtRSI;
  d_st.site = &hb_emlrtRSI;
  b_rand(moduleInstance, &d_st, idx);
  for (loop_ub = 0; loop_ub < 5; loop_ub++) {
    idx[loop_ub] = muDoubleScalarFloor(idx[loop_ub] * 62.0) + 1.0;
  }

  for (i = 0; i < 5; i++) {
    loop_ub = (int32_T)emlrtIntegerCheckR2012b(idx[i], &b_emlrtDCI, &b_st);
    emlrtDynamicBoundsCheckR2012b(loop_ub, 1, 62, &c_emlrtBCI, &b_st);
  }

  for (i = 0; i < 6; i++) {
    obj->PositionDoFMap[i] = (real_T)iv4[i];
  }

  for (i = 0; i < 6; i++) {
    obj->VelocityDoFMap[i] = (real_T)iv4[i];
  }
}

static void validateattributes(const emlrtStack *sp, emxArray_char_T *a)
{
  emlrtStack st;
  emlrtStack b_st;
  char_T b_u[37];
  int32_T i;
  const mxArray *y;
  static char_T c_u[37] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'r', 'i', 'g',
    'i', 'd', 'B', 'o', 'd', 'y', 'T', 'r', 'e', 'e', ':', 'e', 'x', 'p', 'e',
    'c', 't', 'e', 'd', 'N', 'o', 'n', 'e', 'm', 'p', 't', 'y' };

  const mxArray *m;
  static const int32_T iv[2] = { 1, 37 };

  char_T d_u[48];
  const mxArray *b_y;
  static char_T e_u[48] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'N', 'o', 'n', 'e', 'm', 'p', 't', 'y' };

  static const int32_T iv1[2] = { 1, 48 };

  char_T f_u[8];
  const mxArray *c_y;
  static char_T g_u[8] = { 'b', 'a', 's', 'e', 'N', 'a', 'm', 'e' };

  static const int32_T iv2[2] = { 1, 8 };

  st.prev = sp;
  st.tls = sp->tls;
  st.site = &sb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (a->size[1] == 0) {
    for (i = 0; i < 37; i++) {
      b_u[i] = c_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, iv);
    emlrtInitCharArrayR2013a(&st, 37, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 48; i++) {
      d_u[i] = e_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, iv1);
    emlrtInitCharArrayR2013a(&st, 48, m, &d_u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 8; i++) {
      f_u[i] = g_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, iv2);
    emlrtInitCharArrayR2013a(&st, 8, m, &f_u[0]);
    emlrtAssign(&c_y, m);
    b_st.site = &dl_emlrtRSI;
    f_error(&b_st, y, getString(&b_st, message(&b_st, b_y, c_y, &c_emlrtMCI),
             &c_emlrtMCI), &c_emlrtMCI);
  }
}

static void b_validateattributes(const emlrtStack *sp, emxArray_char_T *a)
{
  emlrtStack st;
  emlrtStack b_st;
  char_T b_u[43];
  int32_T i;
  const mxArray *y;
  static char_T c_u[43] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'f', 'i', 'n',
    'd', 'B', 'o', 'd', 'y', 'I', 'n', 'd', 'e', 'x', 'B', 'y', 'N', 'a', 'm',
    'e', ':', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd', 'N', 'o', 'n', 'e', 'm',
    'p', 't', 'y' };

  const mxArray *m;
  static const int32_T iv[2] = { 1, 43 };

  char_T d_u[48];
  const mxArray *b_y;
  static char_T e_u[48] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'N', 'o', 'n', 'e', 'm', 'p', 't', 'y' };

  static const int32_T iv1[2] = { 1, 48 };

  char_T f_u[8];
  const mxArray *c_y;
  static char_T g_u[8] = { 'b', 'o', 'd', 'y', 'n', 'a', 'm', 'e' };

  static const int32_T iv2[2] = { 1, 8 };

  st.prev = sp;
  st.tls = sp->tls;
  st.site = &sb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (a->size[1] == 0) {
    for (i = 0; i < 43; i++) {
      b_u[i] = c_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, iv);
    emlrtInitCharArrayR2013a(&st, 43, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 48; i++) {
      d_u[i] = e_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, iv1);
    emlrtInitCharArrayR2013a(&st, 48, m, &d_u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 8; i++) {
      f_u[i] = g_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, iv2);
    emlrtInitCharArrayR2013a(&st, 8, m, &f_u[0]);
    emlrtAssign(&c_y, m);
    b_st.site = &dl_emlrtRSI;
    f_error(&b_st, y, getString(&b_st, message(&b_st, b_y, c_y, &c_emlrtMCI),
             &c_emlrtMCI), &c_emlrtMCI);
  }
}

static boolean_T d_strcmp(emxArray_char_T *a, emxArray_char_T *b_b)
{
  boolean_T b_bool;
  boolean_T c_b;
  int32_T kstr;
  int32_T exitg1;
  b_bool = false;
  c_b = (a->size[1] == 0);
  if (c_b && (b_b->size[1] == 0)) {
    b_bool = true;
  } else if (a->size[1] != b_b->size[1]) {
  } else {
    kstr = 1;
    do {
      exitg1 = 0;
      if (kstr - 1 <= b_b->size[1] - 1) {
        if (a->data[kstr - 1] != b_b->data[kstr - 1]) {
          exitg1 = 1;
        } else {
          kstr++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  return b_bool;
}

static void error(const emlrtStack *sp, emxArray_char_T *varargin_1)
{
  emlrtStack st;
  char_T b_u[51];
  int32_T i;
  const mxArray *y;
  static char_T c_u[51] = { 'r', 'o', 'b', 'o', 't', 'i', 'c', 's', ':', 'r',
    'o', 'b', 'o', 't', 'm', 'a', 'n', 'i', 'p', ':', 'r', 'i', 'g', 'i', 'd',
    'b', 'o', 'd', 'y', 't', 'r', 'e', 'e', ':', 'B', 'a', 's', 'e', 'N', 'a',
    'm', 'e', 'C', 'o', 'l', 'l', 'i', 's', 'i', 'o', 'n' };

  const mxArray *m;
  static const int32_T iv[2] = { 1, 51 };

  const mxArray *b_y;
  static const int32_T iv1[2] = { 1, 51 };

  const mxArray *c_y;
  int32_T iv2[2];
  st.prev = sp;
  st.tls = sp->tls;
  for (i = 0; i < 51; i++) {
    b_u[i] = c_u[i];
  }

  y = NULL;
  m = emlrtCreateCharArray(2, iv);
  emlrtInitCharArrayR2013a(sp, 51, m, &b_u[0]);
  emlrtAssign(&y, m);
  for (i = 0; i < 51; i++) {
    b_u[i] = c_u[i];
  }

  b_y = NULL;
  m = emlrtCreateCharArray(2, iv1);
  emlrtInitCharArrayR2013a(sp, 51, m, &b_u[0]);
  emlrtAssign(&b_y, m);
  c_y = NULL;
  for (i = 0; i < 2; i++) {
    iv2[i] = varargin_1->size[i];
  }

  m = emlrtCreateCharArray(2, &iv2[0]);
  emlrtInitCharArrayR2013a(sp, varargin_1->size[1], m, &varargin_1->data[0]);
  emlrtAssign(&c_y, m);
  st.site = &al_emlrtRSI;
  f_error(&st, y, getString(&st, message(&st, b_y, c_y, &d_emlrtMCI),
           &d_emlrtMCI), &d_emlrtMCI);
}

static void c_validateattributes(const emlrtStack *sp, real_T a[3])
{
  emlrtStack st;
  emlrtStack b_st;
  boolean_T p;
  int32_T k;
  boolean_T exitg1;
  char_T b_u[35];
  const mxArray *y;
  static char_T c_u[35] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'r', 'i', 'g',
    'i', 'd', 'B', 'o', 'd', 'y', 'T', 'r', 'e', 'e', ':', 'e', 'x', 'p', 'e',
    'c', 't', 'e', 'd', 'N', 'o', 'n', 'N', 'a', 'N' };

  const mxArray *m;
  static const int32_T iv[2] = { 1, 35 };

  char_T d_u[46];
  static char_T e_u[35] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'r', 'i', 'g',
    'i', 'd', 'B', 'o', 'd', 'y', 'T', 'r', 'e', 'e', ':', 'e', 'x', 'p', 'e',
    'c', 't', 'e', 'd', 'F', 'i', 'n', 'i', 't', 'e' };

  const mxArray *b_y;
  static char_T f_u[46] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'N', 'o', 'n', 'N', 'a', 'N' };

  static const int32_T iv1[2] = { 1, 35 };

  static const int32_T iv2[2] = { 1, 46 };

  char_T g_u[7];
  static char_T h_u[46] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'F', 'i', 'n', 'i', 't', 'e' };

  const mxArray *c_y;
  static char_T i_u[7] = { 'G', 'r', 'a', 'v', 'i', 't', 'y' };

  static const int32_T iv3[2] = { 1, 46 };

  static const int32_T iv4[2] = { 1, 7 };

  static const int32_T iv5[2] = { 1, 7 };

  st.prev = sp;
  st.tls = sp->tls;
  st.site = &sb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 3)) {
    if (!muDoubleScalarIsNaN(a[k])) {
      k++;
    } else {
      p = false;
      exitg1 = true;
    }
  }

  if (!p) {
    for (k = 0; k < 35; k++) {
      b_u[k] = c_u[k];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, iv);
    emlrtInitCharArrayR2013a(&st, 35, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (k = 0; k < 46; k++) {
      d_u[k] = f_u[k];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, iv2);
    emlrtInitCharArrayR2013a(&st, 46, m, &d_u[0]);
    emlrtAssign(&b_y, m);
    for (k = 0; k < 7; k++) {
      g_u[k] = i_u[k];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, iv4);
    emlrtInitCharArrayR2013a(&st, 7, m, &g_u[0]);
    emlrtAssign(&c_y, m);
    b_st.site = &yk_emlrtRSI;
    f_error(&b_st, y, getString(&b_st, message(&b_st, b_y, c_y, &e_emlrtMCI),
             &e_emlrtMCI), &e_emlrtMCI);
  }

  st.site = &sb_emlrtRSI;
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 3)) {
    if ((!muDoubleScalarIsInf(a[k])) && (!muDoubleScalarIsNaN(a[k]))) {
      k++;
    } else {
      p = false;
      exitg1 = true;
    }
  }

  if (!p) {
    for (k = 0; k < 35; k++) {
      b_u[k] = e_u[k];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, iv1);
    emlrtInitCharArrayR2013a(&st, 35, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (k = 0; k < 46; k++) {
      d_u[k] = h_u[k];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, iv3);
    emlrtInitCharArrayR2013a(&st, 46, m, &d_u[0]);
    emlrtAssign(&b_y, m);
    for (k = 0; k < 7; k++) {
      g_u[k] = i_u[k];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, iv5);
    emlrtInitCharArrayR2013a(&st, 7, m, &g_u[0]);
    emlrtAssign(&c_y, m);
    b_st.site = &xk_emlrtRSI;
    f_error(&b_st, y, getString(&b_st, message(&b_st, b_y, c_y, &f_emlrtMCI),
             &f_emlrtMCI), &f_emlrtMCI);
  }
}

static void RigidBodyTree_addBody(const emlrtStack *sp,
  robotics_manip_internal_RigidBodyTree_1 *obj,
  robotics_manip_internal_RigidBody *bodyin, emxArray_char_T *parentName,
  robotics_manip_internal_RigidBody_1 *iobj_0, rigidBodyJoint *iobj_1,
  rigidBodyJoint *iobj_2)
{
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emxArray_char_T *bname;
  int32_T i;
  int32_T loop_ub;
  emxArray_char_T *b_bname;
  int32_T bid;
  real_T b_index;
  int32_T b_i;
  boolean_T exitg1;
  robotics_manip_internal_RigidBody_1 *body;
  int32_T bid2;
  rigidBodyJoint *jnt;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emxInit_char_T(&bname, 2);
  st.site = &xb_emlrtRSI;
  i = bname->size[0] * bname->size[1];
  bname->size[0] = 1;
  bname->size[1] = bodyin->NameInternal->size[1];
  emxEnsureCapacity_char_T(bname, i);
  loop_ub = bodyin->NameInternal->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    bname->data[i] = bodyin->NameInternal->data[i];
  }

  emxInit_char_T(&b_bname, 2);
  st.site = &xb_emlrtRSI;
  bid = -2;
  b_st.site = &tb_emlrtRSI;
  b_validateattributes(&b_st, bname);
  b_st.site = &ub_emlrtRSI;
  i = b_bname->size[0] * b_bname->size[1];
  b_bname->size[0] = 1;
  b_bname->size[1] = obj->Base.NameInternal->size[1];
  emxEnsureCapacity_char_T(b_bname, i);
  loop_ub = obj->Base.NameInternal->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    b_bname->data[i] = obj->Base.NameInternal->data[i];
  }

  if (d_strcmp(b_bname, bname)) {
    bid = -1;
  } else {
    b_index = obj->NumBodies;
    emlrtForLoopVectorCheckR2012b(1.0, 1.0, b_index, mxDOUBLE_CLASS, (int32_T)
      b_index, &emlrtRTEI, &st);
    b_i = 0;
    exitg1 = false;
    while ((!exitg1) && (b_i <= (int32_T)b_index - 1)) {
      b_st.site = &vb_emlrtRSI;
      body = obj->Bodies[emlrtDynamicBoundsCheckR2012b(b_i, 0, 2, &emlrtBCI,
        &b_st)];
      i = b_bname->size[0] * b_bname->size[1];
      b_bname->size[0] = 1;
      b_bname->size[1] = body->NameInternal->size[1];
      emxEnsureCapacity_char_T(b_bname, i);
      loop_ub = body->NameInternal->size[1] - 1;
      for (i = 0; i <= loop_ub; i++) {
        b_bname->data[i] = body->NameInternal->data[i];
      }

      if (d_strcmp(b_bname, bname)) {
        bid = b_i;
        exitg1 = true;
      } else {
        b_i++;
      }
    }
  }

  if (bid + 1 > -1) {
    st.site = &yb_emlrtRSI;
    i = bname->size[0] * bname->size[1];
    bname->size[0] = 1;
    bname->size[1] = bodyin->NameInternal->size[1];
    emxEnsureCapacity_char_T(bname, i);
    loop_ub = bodyin->NameInternal->size[1] - 1;
    for (i = 0; i <= loop_ub; i++) {
      bname->data[i] = bodyin->NameInternal->data[i];
    }

    st.site = &yb_emlrtRSI;
    b_error(&st, bname);
  }

  st.site = &ac_emlrtRSI;
  b_st.site = &jc_emlrtRSI;
  bid = -1;
  c_st.site = &tb_emlrtRSI;
  b_validateattributes(&c_st, parentName);
  c_st.site = &ub_emlrtRSI;
  i = bname->size[0] * bname->size[1];
  bname->size[0] = 1;
  bname->size[1] = obj->Base.NameInternal->size[1];
  emxEnsureCapacity_char_T(bname, i);
  loop_ub = obj->Base.NameInternal->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    bname->data[i] = obj->Base.NameInternal->data[i];
  }

  if (d_strcmp(bname, parentName)) {
    bid = 0;
  } else {
    b_index = obj->NumBodies;
    emlrtForLoopVectorCheckR2012b(1.0, 1.0, b_index, mxDOUBLE_CLASS, (int32_T)
      b_index, &emlrtRTEI, &b_st);
    b_i = 0;
    exitg1 = false;
    while ((!exitg1) && (b_i <= (int32_T)b_index - 1)) {
      c_st.site = &vb_emlrtRSI;
      body = obj->Bodies[emlrtDynamicBoundsCheckR2012b(b_i, 0, 2, &emlrtBCI,
        &c_st)];
      i = bname->size[0] * bname->size[1];
      bname->size[0] = 1;
      bname->size[1] = body->NameInternal->size[1];
      emxEnsureCapacity_char_T(bname, i);
      loop_ub = body->NameInternal->size[1] - 1;
      for (i = 0; i <= loop_ub; i++) {
        bname->data[i] = body->NameInternal->data[i];
      }

      if (d_strcmp(bname, parentName)) {
        bid = b_i + 1;
        exitg1 = true;
      } else {
        b_i++;
      }
    }
  }

  if (bid == -1) {
    b_st.site = &kc_emlrtRSI;
    c_error(&b_st, parentName);
  }

  st.site = &bc_emlrtRSI;
  if (bodyin->Index == 0.0) {
    b_st.site = &lc_emlrtRSI;
    d_error(&b_st);
  }

  st.site = &bc_emlrtRSI;
  i = bname->size[0] * bname->size[1];
  bname->size[0] = 1;
  bname->size[1] = bodyin->JointInternal.NameInternal->size[1];
  emxEnsureCapacity_char_T(bname, i);
  loop_ub = bodyin->JointInternal.NameInternal->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    bname->data[i] = bodyin->JointInternal.NameInternal->data[i];
  }

  st.site = &bc_emlrtRSI;
  bid2 = -2;
  b_st.site = &mc_emlrtRSI;
  d_validateattributes(&b_st, bname);
  b_index = obj->NumBodies;
  emlrtForLoopVectorCheckR2012b(1.0, 1.0, b_index, mxDOUBLE_CLASS, (int32_T)
    b_index, &b_emlrtRTEI, &st);
  b_i = 0;
  exitg1 = false;
  while ((!exitg1) && (b_i <= (int32_T)b_index - 1)) {
    b_st.site = &nc_emlrtRSI;
    body = obj->Bodies[emlrtDynamicBoundsCheckR2012b(b_i, 0, 2, &j_emlrtBCI,
      &b_st)];
    if (body->Index == 0.0) {
      c_st.site = &lc_emlrtRSI;
      d_error(&c_st);
    }

    jnt = body->JointInternal;
    b_st.site = &nc_emlrtRSI;
    i = b_bname->size[0] * b_bname->size[1];
    b_bname->size[0] = 1;
    b_bname->size[1] = jnt->NameInternal->size[1];
    emxEnsureCapacity_char_T(b_bname, i);
    loop_ub = jnt->NameInternal->size[1] - 1;
    for (i = 0; i <= loop_ub; i++) {
      b_bname->data[i] = jnt->NameInternal->data[i];
    }

    if (d_strcmp(b_bname, bname)) {
      bid2 = b_i;
      exitg1 = true;
    } else {
      b_i++;
    }
  }

  emxFree_char_T(&b_bname);
  if (bid2 + 1 > 0) {
    st.site = &cc_emlrtRSI;
    if (bodyin->Index == 0.0) {
      b_st.site = &lc_emlrtRSI;
      d_error(&b_st);
    }

    st.site = &cc_emlrtRSI;
    i = bname->size[0] * bname->size[1];
    bname->size[0] = 1;
    bname->size[1] = bodyin->JointInternal.NameInternal->size[1];
    emxEnsureCapacity_char_T(bname, i);
    loop_ub = bodyin->JointInternal.NameInternal->size[1] - 1;
    for (i = 0; i <= loop_ub; i++) {
      bname->data[i] = bodyin->JointInternal.NameInternal->data[i];
    }

    st.site = &cc_emlrtRSI;
    e_error(&st, bname);
  }

  emxFree_char_T(&bname);
  b_index = obj->NumBodies + 1.0;
  st.site = &ic_emlrtRSI;
  body = RigidBody_copy(&st, bodyin, iobj_0, iobj_1, iobj_2);
  i = (int32_T)emlrtIntegerCheckR2012b(b_index, &c_emlrtDCI, sp) - 1;
  obj->Bodies[emlrtDynamicBoundsCheckR2012b(i, 0, 2, &i_emlrtBCI, sp)] = body;
  body->Index = b_index;
  body->ParentIndex = (real_T)bid;
  i = (int32_T)emlrtIntegerCheckR2012b(body->Index, &d_emlrtDCI, sp);
  emlrtDynamicBoundsCheckR2012b(i, 1, 3, &d_emlrtBCI, sp);
  body->JointInternal->InTree = true;
  obj->NumBodies++;
  st.site = &dc_emlrtRSI;
  if (body->Index == 0.0) {
    b_st.site = &lc_emlrtRSI;
    d_error(&b_st);
  }

  jnt = body->JointInternal;
  if (!e_strcmp(jnt->Type)) {
    obj->NumNonFixedBodies++;
    st.site = &ec_emlrtRSI;
    if (body->Index == 0.0) {
      b_st.site = &lc_emlrtRSI;
      d_error(&b_st);
    }

    jnt = body->JointInternal;
    i = (int32_T)emlrtIntegerCheckR2012b(body->Index, &e_emlrtDCI, sp);
    bid = emlrtDynamicBoundsCheckR2012b(i, 1, 3, &e_emlrtBCI, sp) - 1;
    obj->PositionDoFMap[bid] = obj->PositionNumber + 1.0;
    obj->PositionDoFMap[bid + 3] = obj->PositionNumber + jnt->PositionNumber;
    st.site = &fc_emlrtRSI;
    if (body->Index == 0.0) {
      b_st.site = &lc_emlrtRSI;
      d_error(&b_st);
    }

    jnt = body->JointInternal;
    i = (int32_T)emlrtIntegerCheckR2012b(body->Index, &f_emlrtDCI, sp);
    bid = emlrtDynamicBoundsCheckR2012b(i, 1, 3, &f_emlrtBCI, sp) - 1;
    obj->VelocityDoFMap[bid] = obj->VelocityNumber + 1.0;
    obj->VelocityDoFMap[bid + 3] = obj->VelocityNumber + jnt->VelocityNumber;
  } else {
    i = (int32_T)emlrtIntegerCheckR2012b(body->Index, &g_emlrtDCI, sp);
    bid = emlrtDynamicBoundsCheckR2012b(i, 1, 3, &g_emlrtBCI, sp);
    for (i = 0; i < 2; i++) {
      obj->PositionDoFMap[(bid + 3 * i) - 1] = 0.0 - (real_T)i;
    }

    i = (int32_T)emlrtIntegerCheckR2012b(body->Index, &h_emlrtDCI, sp);
    bid = emlrtDynamicBoundsCheckR2012b(i, 1, 3, &h_emlrtBCI, sp);
    for (i = 0; i < 2; i++) {
      obj->VelocityDoFMap[(bid + 3 * i) - 1] = 0.0 - (real_T)i;
    }
  }

  st.site = &gc_emlrtRSI;
  if (body->Index == 0.0) {
    b_st.site = &lc_emlrtRSI;
    d_error(&b_st);
  }

  jnt = body->JointInternal;
  obj->PositionNumber += jnt->PositionNumber;
  st.site = &hc_emlrtRSI;
  if (body->Index == 0.0) {
    b_st.site = &lc_emlrtRSI;
    d_error(&b_st);
  }

  jnt = body->JointInternal;
  obj->VelocityNumber += jnt->VelocityNumber;
}

static void b_error(const emlrtStack *sp, emxArray_char_T *varargin_1)
{
  emlrtStack st;
  char_T b_u[51];
  int32_T i;
  const mxArray *y;
  static char_T c_u[51] = { 'r', 'o', 'b', 'o', 't', 'i', 'c', 's', ':', 'r',
    'o', 'b', 'o', 't', 'm', 'a', 'n', 'i', 'p', ':', 'r', 'i', 'g', 'i', 'd',
    'b', 'o', 'd', 'y', 't', 'r', 'e', 'e', ':', 'B', 'o', 'd', 'y', 'N', 'a',
    'm', 'e', 'C', 'o', 'l', 'l', 'i', 's', 'i', 'o', 'n' };

  const mxArray *m;
  static const int32_T iv[2] = { 1, 51 };

  const mxArray *b_y;
  static const int32_T iv1[2] = { 1, 51 };

  const mxArray *c_y;
  int32_T iv2[2];
  st.prev = sp;
  st.tls = sp->tls;
  for (i = 0; i < 51; i++) {
    b_u[i] = c_u[i];
  }

  y = NULL;
  m = emlrtCreateCharArray(2, iv);
  emlrtInitCharArrayR2013a(sp, 51, m, &b_u[0]);
  emlrtAssign(&y, m);
  for (i = 0; i < 51; i++) {
    b_u[i] = c_u[i];
  }

  b_y = NULL;
  m = emlrtCreateCharArray(2, iv1);
  emlrtInitCharArrayR2013a(sp, 51, m, &b_u[0]);
  emlrtAssign(&b_y, m);
  c_y = NULL;
  for (i = 0; i < 2; i++) {
    iv2[i] = varargin_1->size[i];
  }

  m = emlrtCreateCharArray(2, &iv2[0]);
  emlrtInitCharArrayR2013a(sp, varargin_1->size[1], m, &varargin_1->data[0]);
  emlrtAssign(&c_y, m);
  st.site = &al_emlrtRSI;
  f_error(&st, y, getString(&st, message(&st, b_y, c_y, &d_emlrtMCI),
           &d_emlrtMCI), &d_emlrtMCI);
}

static void c_error(const emlrtStack *sp, emxArray_char_T *varargin_1)
{
  emlrtStack st;
  char_T b_u[46];
  int32_T i;
  const mxArray *y;
  static char_T c_u[46] = { 'r', 'o', 'b', 'o', 't', 'i', 'c', 's', ':', 'r',
    'o', 'b', 'o', 't', 'm', 'a', 'n', 'i', 'p', ':', 'r', 'i', 'g', 'i', 'd',
    'b', 'o', 'd', 'y', 't', 'r', 'e', 'e', ':', 'B', 'o', 'd', 'y', 'N', 'o',
    't', 'F', 'o', 'u', 'n', 'd' };

  const mxArray *m;
  static const int32_T iv[2] = { 1, 46 };

  const mxArray *b_y;
  static const int32_T iv1[2] = { 1, 46 };

  const mxArray *c_y;
  int32_T iv2[2];
  st.prev = sp;
  st.tls = sp->tls;
  for (i = 0; i < 46; i++) {
    b_u[i] = c_u[i];
  }

  y = NULL;
  m = emlrtCreateCharArray(2, iv);
  emlrtInitCharArrayR2013a(sp, 46, m, &b_u[0]);
  emlrtAssign(&y, m);
  for (i = 0; i < 46; i++) {
    b_u[i] = c_u[i];
  }

  b_y = NULL;
  m = emlrtCreateCharArray(2, iv1);
  emlrtInitCharArrayR2013a(sp, 46, m, &b_u[0]);
  emlrtAssign(&b_y, m);
  c_y = NULL;
  for (i = 0; i < 2; i++) {
    iv2[i] = varargin_1->size[i];
  }

  m = emlrtCreateCharArray(2, &iv2[0]);
  emlrtInitCharArrayR2013a(sp, varargin_1->size[1], m, &varargin_1->data[0]);
  emlrtAssign(&c_y, m);
  st.site = &al_emlrtRSI;
  f_error(&st, y, getString(&st, message(&st, b_y, c_y, &d_emlrtMCI),
           &d_emlrtMCI), &d_emlrtMCI);
}

static void d_error(const emlrtStack *sp)
{
  emlrtStack st;
  char_T b_u[51];
  int32_T i;
  const mxArray *y;
  static char_T c_u[51] = { 'r', 'o', 'b', 'o', 't', 'i', 'c', 's', ':', 'r',
    'o', 'b', 'o', 't', 'm', 'a', 'n', 'i', 'p', ':', 'r', 'i', 'g', 'i', 'd',
    'b', 'o', 'd', 'y', ':', 'N', 'o', 'S', 'u', 'c', 'h', 'P', 'r', 'o', 'p',
    'e', 'r', 't', 'y', 'F', 'o', 'r', 'B', 'a', 's', 'e' };

  const mxArray *m;
  static const int32_T iv[2] = { 1, 51 };

  const mxArray *b_y;
  static const int32_T iv1[2] = { 1, 51 };

  char_T d_u[5];
  const mxArray *c_y;
  static char_T e_u[5] = { 'J', 'o', 'i', 'n', 't' };

  static const int32_T iv2[2] = { 1, 5 };

  st.prev = sp;
  st.tls = sp->tls;
  for (i = 0; i < 51; i++) {
    b_u[i] = c_u[i];
  }

  y = NULL;
  m = emlrtCreateCharArray(2, iv);
  emlrtInitCharArrayR2013a(sp, 51, m, &b_u[0]);
  emlrtAssign(&y, m);
  for (i = 0; i < 51; i++) {
    b_u[i] = c_u[i];
  }

  b_y = NULL;
  m = emlrtCreateCharArray(2, iv1);
  emlrtInitCharArrayR2013a(sp, 51, m, &b_u[0]);
  emlrtAssign(&b_y, m);
  for (i = 0; i < 5; i++) {
    d_u[i] = e_u[i];
  }

  c_y = NULL;
  m = emlrtCreateCharArray(2, iv2);
  emlrtInitCharArrayR2013a(sp, 5, m, &d_u[0]);
  emlrtAssign(&c_y, m);
  st.site = &al_emlrtRSI;
  f_error(&st, y, getString(&st, message(&st, b_y, c_y, &d_emlrtMCI),
           &d_emlrtMCI), &d_emlrtMCI);
}

static void d_validateattributes(const emlrtStack *sp, emxArray_char_T *a)
{
  emlrtStack st;
  emlrtStack b_st;
  char_T b_u[48];
  int32_T i;
  const mxArray *y;
  static char_T c_u[48] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'f', 'i', 'n',
    'd', 'B', 'o', 'd', 'y', 'I', 'n', 'd', 'e', 'x', 'B', 'y', 'J', 'o', 'i',
    'n', 't', 'N', 'a', 'm', 'e', ':', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'N', 'o', 'n', 'e', 'm', 'p', 't', 'y' };

  const mxArray *m;
  static const int32_T iv[2] = { 1, 48 };

  const mxArray *b_y;
  static char_T d_u[48] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'N', 'o', 'n', 'e', 'm', 'p', 't', 'y' };

  static const int32_T iv1[2] = { 1, 48 };

  char_T e_u[9];
  const mxArray *c_y;
  static char_T f_u[9] = { 'j', 'o', 'i', 'n', 't', 'n', 'a', 'm', 'e' };

  static const int32_T iv2[2] = { 1, 9 };

  st.prev = sp;
  st.tls = sp->tls;
  st.site = &sb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (a->size[1] == 0) {
    for (i = 0; i < 48; i++) {
      b_u[i] = c_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, iv);
    emlrtInitCharArrayR2013a(&st, 48, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 48; i++) {
      b_u[i] = d_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, iv1);
    emlrtInitCharArrayR2013a(&st, 48, m, &b_u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 9; i++) {
      e_u[i] = f_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, iv2);
    emlrtInitCharArrayR2013a(&st, 9, m, &e_u[0]);
    emlrtAssign(&c_y, m);
    b_st.site = &dl_emlrtRSI;
    f_error(&b_st, y, getString(&b_st, message(&b_st, b_y, c_y, &c_emlrtMCI),
             &c_emlrtMCI), &c_emlrtMCI);
  }
}

static void e_error(const emlrtStack *sp, emxArray_char_T *varargin_1)
{
  emlrtStack st;
  char_T b_u[52];
  int32_T i;
  const mxArray *y;
  static char_T c_u[52] = { 'r', 'o', 'b', 'o', 't', 'i', 'c', 's', ':', 'r',
    'o', 'b', 'o', 't', 'm', 'a', 'n', 'i', 'p', ':', 'r', 'i', 'g', 'i', 'd',
    'b', 'o', 'd', 'y', 't', 'r', 'e', 'e', ':', 'J', 'o', 'i', 'n', 't', 'N',
    'a', 'm', 'e', 'C', 'o', 'l', 'l', 'i', 's', 'i', 'o', 'n' };

  const mxArray *m;
  static const int32_T iv[2] = { 1, 52 };

  const mxArray *b_y;
  static const int32_T iv1[2] = { 1, 52 };

  const mxArray *c_y;
  int32_T iv2[2];
  st.prev = sp;
  st.tls = sp->tls;
  for (i = 0; i < 52; i++) {
    b_u[i] = c_u[i];
  }

  y = NULL;
  m = emlrtCreateCharArray(2, iv);
  emlrtInitCharArrayR2013a(sp, 52, m, &b_u[0]);
  emlrtAssign(&y, m);
  for (i = 0; i < 52; i++) {
    b_u[i] = c_u[i];
  }

  b_y = NULL;
  m = emlrtCreateCharArray(2, iv1);
  emlrtInitCharArrayR2013a(sp, 52, m, &b_u[0]);
  emlrtAssign(&b_y, m);
  c_y = NULL;
  for (i = 0; i < 2; i++) {
    iv2[i] = varargin_1->size[i];
  }

  m = emlrtCreateCharArray(2, &iv2[0]);
  emlrtInitCharArrayR2013a(sp, varargin_1->size[1], m, &varargin_1->data[0]);
  emlrtAssign(&c_y, m);
  st.site = &al_emlrtRSI;
  f_error(&st, y, getString(&st, message(&st, b_y, c_y, &d_emlrtMCI),
           &d_emlrtMCI), &d_emlrtMCI);
}

static robotics_manip_internal_RigidBody_1 *RigidBody_copy(const emlrtStack *sp,
  robotics_manip_internal_RigidBody *obj, robotics_manip_internal_RigidBody_1
  *iobj_0, rigidBodyJoint *iobj_1, rigidBodyJoint *iobj_2)
{
  robotics_manip_internal_RigidBody_1 *newbody;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emxArray_char_T *input1;
  int32_T b_index;
  int32_T loop_ub;
  char_T b_u[33];
  const mxArray *y;
  static char_T c_u[33] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'r', 'i', 'g',
    'i', 'd', 'B', 'o', 'd', 'y', ':', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'N', 'o', 'n', 'e', 'm', 'p', 't', 'y' };

  const mxArray *m;
  static const int32_T iv[2] = { 1, 33 };

  char_T d_u[48];
  emxArray_char_T *jname;
  const mxArray *b_y;
  static char_T e_u[48] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'N', 'o', 'n', 'e', 'm', 'p', 't', 'y' };

  static const int32_T iv1[2] = { 1, 48 };

  char_T f_u[5];
  const mxArray *c_y;
  static char_T g_u[5] = { 'b', 'n', 'a', 'm', 'e' };

  static char_T cv[4] = { '_', 'j', 'n', 't' };

  static const int32_T iv2[2] = { 1, 5 };

  static int8_T iv3[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

  emxArray_char_T *switch_expression;
  static char_T cv1[5] = { 'f', 'i', 'x', 'e', 'd' };

  boolean_T result;
  int8_T msubspace_data[36];
  static int8_T iv4[6] = { 0, 0, 1, 0, 0, 0 };

  static int8_T iv5[6] = { 0, 0, 0, 0, 0, 1 };

  real_T poslim_data[12];
  static int8_T iv6[3] = { 0, 0, 1 };

  emxArray_char_T *jtype;
  emxArray_char_T *b_jname;
  emxArray_char_T *r;
  rigidBodyJoint *newjoint;
  emxArray_real_T *b_obj;
  char_T h_u[38];
  static char_T i_u[38] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'r', 'i', 'g',
    'i', 'd', 'B', 'o', 'd', 'y', 'J', 'o', 'i', 'n', 't', ':', 'e', 'x', 'p',
    'e', 'c', 't', 'e', 'd', 'N', 'o', 'n', 'e', 'm', 'p', 't', 'y' };

  static const int32_T iv7[2] = { 1, 38 };

  emxArray_real_T *c_obj;
  static const int32_T iv8[2] = { 1, 48 };

  char_T j_u[4];
  static char_T k_u[4] = { 'N', 'a', 'm', 'e' };

  static const int32_T iv9[2] = { 1, 4 };

  real_T d_obj[3];
  emxArray_real_T *e_obj;
  real_T f_obj[16];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  emxInit_char_T(&input1, 2);
  st.site = &oc_emlrtRSI;
  b_index = input1->size[0] * input1->size[1];
  input1->size[0] = 1;
  input1->size[1] = obj->NameInternal->size[1];
  emxEnsureCapacity_char_T(input1, b_index);
  loop_ub = obj->NameInternal->size[1] - 1;
  for (b_index = 0; b_index <= loop_ub; b_index++) {
    input1->data[b_index] = obj->NameInternal->data[b_index];
  }

  b_st.site = &p_emlrtRSI;
  c_st.site = &k_emlrtRSI;
  newbody = iobj_0;
  b_st.site = &qc_emlrtRSI;
  c_st.site = &sb_emlrtRSI;
  if (input1->size[1] == 0) {
    for (b_index = 0; b_index < 33; b_index++) {
      b_u[b_index] = c_u[b_index];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, iv);
    emlrtInitCharArrayR2013a(&c_st, 33, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (b_index = 0; b_index < 48; b_index++) {
      d_u[b_index] = e_u[b_index];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, iv1);
    emlrtInitCharArrayR2013a(&c_st, 48, m, &d_u[0]);
    emlrtAssign(&b_y, m);
    for (b_index = 0; b_index < 5; b_index++) {
      f_u[b_index] = g_u[b_index];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, iv2);
    emlrtInitCharArrayR2013a(&c_st, 5, m, &f_u[0]);
    emlrtAssign(&c_y, m);
    d_st.site = &dl_emlrtRSI;
    f_error(&d_st, y, getString(&d_st, message(&d_st, b_y, c_y, &c_emlrtMCI),
             &c_emlrtMCI), &c_emlrtMCI);
  }

  b_index = iobj_0->NameInternal->size[0] * iobj_0->NameInternal->size[1];
  iobj_0->NameInternal->size[0] = 1;
  iobj_0->NameInternal->size[1] = input1->size[1];
  emxEnsureCapacity_char_T(iobj_0->NameInternal, b_index);
  loop_ub = input1->size[1] - 1;
  for (b_index = 0; b_index <= loop_ub; b_index++) {
    iobj_0->NameInternal->data[b_index] = input1->data[b_index];
  }

  emxInit_char_T(&jname, 2);
  b_index = jname->size[0] * jname->size[1];
  jname->size[0] = 1;
  jname->size[1] = input1->size[1] + 4;
  emxEnsureCapacity_char_T(jname, b_index);
  loop_ub = input1->size[1];
  for (b_index = 0; b_index < loop_ub; b_index++) {
    jname->data[b_index] = input1->data[b_index];
  }

  for (b_index = 0; b_index < 4; b_index++) {
    jname->data[b_index + input1->size[1]] = cv[b_index];
  }

  b_st.site = &s_emlrtRSI;
  iobj_1->InTree = false;
  for (b_index = 0; b_index < 16; b_index++) {
    iobj_1->JointToParentTransform[b_index] = (real_T)iv3[b_index];
  }

  for (b_index = 0; b_index < 16; b_index++) {
    iobj_1->ChildToJointTransform[b_index] = (real_T)iv3[b_index];
  }

  c_st.site = &r_emlrtRSI;
  c_st.site = &rc_emlrtRSI;
  e_validateattributes(&c_st, jname);
  b_index = iobj_1->NameInternal->size[0] * iobj_1->NameInternal->size[1];
  iobj_1->NameInternal->size[0] = 1;
  iobj_1->NameInternal->size[1] = jname->size[1];
  emxEnsureCapacity_char_T(iobj_1->NameInternal, b_index);
  loop_ub = jname->size[1] - 1;
  for (b_index = 0; b_index <= loop_ub; b_index++) {
    iobj_1->NameInternal->data[b_index] = jname->data[b_index];
  }

  emxFree_char_T(&jname);
  b_index = iobj_1->Type->size[0] * iobj_1->Type->size[1];
  iobj_1->Type->size[0] = 1;
  iobj_1->Type->size[1] = 5;
  emxEnsureCapacity_char_T(iobj_1->Type, b_index);
  for (b_index = 0; b_index < 5; b_index++) {
    iobj_1->Type->data[b_index] = cv1[b_index];
  }

  emxInit_char_T(&switch_expression, 2);
  b_index = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = iobj_1->Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, b_index);
  loop_ub = iobj_1->Type->size[1] - 1;
  for (b_index = 0; b_index <= loop_ub; b_index++) {
    switch_expression->data[b_index] = iobj_1->Type->data[b_index];
  }

  result = b_strcmp(switch_expression);
  if (result) {
    b_index = 0;
  } else {
    result = c_strcmp(switch_expression);
    if (result) {
      b_index = 1;
    } else {
      b_index = -1;
    }
  }

  emxFree_char_T(&switch_expression);
  switch (b_index) {
   case 0:
    for (b_index = 0; b_index < 6; b_index++) {
      msubspace_data[b_index] = iv4[b_index];
    }

    for (b_index = 0; b_index < 2; b_index++) {
      poslim_data[b_index] = 6.2831853071795862 * (real_T)b_index +
        -3.1415926535897931;
    }

    iobj_1->VelocityNumber = 1.0;
    iobj_1->PositionNumber = 1.0;
    for (b_index = 0; b_index < 3; b_index++) {
      iobj_1->JointAxisInternal[b_index] = (real_T)iv6[b_index];
    }
    break;

   case 1:
    for (b_index = 0; b_index < 6; b_index++) {
      msubspace_data[b_index] = iv5[b_index];
    }

    for (b_index = 0; b_index < 2; b_index++) {
      poslim_data[b_index] = (real_T)b_index + -0.5;
    }

    iobj_1->VelocityNumber = 1.0;
    iobj_1->PositionNumber = 1.0;
    for (b_index = 0; b_index < 3; b_index++) {
      iobj_1->JointAxisInternal[b_index] = (real_T)iv6[b_index];
    }
    break;

   default:
    for (b_index = 0; b_index < 6; b_index++) {
      msubspace_data[b_index] = 0;
    }

    for (b_index = 0; b_index < 2; b_index++) {
      poslim_data[b_index] = 0.0;
    }

    iobj_1->VelocityNumber = 0.0;
    iobj_1->PositionNumber = 0.0;
    for (b_index = 0; b_index < 3; b_index++) {
      iobj_1->JointAxisInternal[b_index] = 0.0;
    }
    break;
  }

  b_index = iobj_1->MotionSubspace->size[0] * iobj_1->MotionSubspace->size[1];
  iobj_1->MotionSubspace->size[0] = 6;
  iobj_1->MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(iobj_1->MotionSubspace, b_index);
  for (b_index = 0; b_index < 6; b_index++) {
    iobj_1->MotionSubspace->data[b_index] = (real_T)msubspace_data[b_index];
  }

  b_index = iobj_1->PositionLimitsInternal->size[0] *
    iobj_1->PositionLimitsInternal->size[1];
  iobj_1->PositionLimitsInternal->size[0] = 1;
  iobj_1->PositionLimitsInternal->size[1] = 2;
  emxEnsureCapacity_real_T(iobj_1->PositionLimitsInternal, b_index);
  for (b_index = 0; b_index < 2; b_index++) {
    iobj_1->PositionLimitsInternal->data[b_index] = poslim_data[b_index];
  }

  b_index = iobj_1->HomePositionInternal->size[0];
  iobj_1->HomePositionInternal->size[0] = 1;
  emxEnsureCapacity_real_T1(iobj_1->HomePositionInternal, b_index);
  iobj_1->HomePositionInternal->data[0] = 0.0;
  emxInit_char_T(&jtype, 2);
  iobj_0->JointInternal = iobj_1;
  iobj_0->Index = -1.0;
  iobj_0->ParentIndex = -1.0;
  st.site = &pc_emlrtRSI;
  b_st.site = &sc_emlrtRSI;
  b_index = jtype->size[0] * jtype->size[1];
  jtype->size[0] = 1;
  jtype->size[1] = obj->JointInternal.Type->size[1];
  emxEnsureCapacity_char_T(jtype, b_index);
  loop_ub = obj->JointInternal.Type->size[1] - 1;
  for (b_index = 0; b_index <= loop_ub; b_index++) {
    jtype->data[b_index] = obj->JointInternal.Type->data[b_index];
  }

  emxInit_char_T(&b_jname, 2);
  c_st.site = &tc_emlrtRSI;
  b_index = b_jname->size[0] * b_jname->size[1];
  b_jname->size[0] = 1;
  b_jname->size[1] = obj->JointInternal.NameInternal->size[1];
  emxEnsureCapacity_char_T(b_jname, b_index);
  loop_ub = obj->JointInternal.NameInternal->size[1] - 1;
  for (b_index = 0; b_index <= loop_ub; b_index++) {
    b_jname->data[b_index] = obj->JointInternal.NameInternal->data[b_index];
  }

  emxInit_char_T(&r, 2);
  c_st.site = &uc_emlrtRSI;
  newjoint = b_rigidBodyJoint_rigidBodyJoint(&c_st, iobj_2, b_jname, jtype);
  c_st.site = &vc_emlrtRSI;
  b_index = r->size[0] * r->size[1];
  r->size[0] = 1;
  r->size[1] = obj->JointInternal.NameInternal->size[1];
  emxEnsureCapacity_char_T(r, b_index);
  loop_ub = obj->JointInternal.NameInternal->size[1] - 1;
  emxFree_char_T(&b_jname);
  emxFree_char_T(&jtype);
  for (b_index = 0; b_index <= loop_ub; b_index++) {
    r->data[b_index] = obj->JointInternal.NameInternal->data[b_index];
  }

  if (r->size[1] != 0) {
    c_st.site = &wc_emlrtRSI;
    b_index = input1->size[0] * input1->size[1];
    input1->size[0] = 1;
    input1->size[1] = obj->JointInternal.NameInternal->size[1];
    emxEnsureCapacity_char_T(input1, b_index);
    loop_ub = obj->JointInternal.NameInternal->size[1] - 1;
    for (b_index = 0; b_index <= loop_ub; b_index++) {
      input1->data[b_index] = obj->JointInternal.NameInternal->data[b_index];
    }

    c_st.site = &wc_emlrtRSI;
    d_st.site = &hd_emlrtRSI;
    e_st.site = &sb_emlrtRSI;
    if (input1->size[1] == 0) {
      for (b_index = 0; b_index < 38; b_index++) {
        h_u[b_index] = i_u[b_index];
      }

      y = NULL;
      m = emlrtCreateCharArray(2, iv7);
      emlrtInitCharArrayR2013a(&e_st, 38, m, &h_u[0]);
      emlrtAssign(&y, m);
      for (b_index = 0; b_index < 48; b_index++) {
        d_u[b_index] = e_u[b_index];
      }

      b_y = NULL;
      m = emlrtCreateCharArray(2, iv8);
      emlrtInitCharArrayR2013a(&e_st, 48, m, &d_u[0]);
      emlrtAssign(&b_y, m);
      for (b_index = 0; b_index < 4; b_index++) {
        j_u[b_index] = k_u[b_index];
      }

      c_y = NULL;
      m = emlrtCreateCharArray(2, iv9);
      emlrtInitCharArrayR2013a(&e_st, 4, m, &j_u[0]);
      emlrtAssign(&c_y, m);
      f_st.site = &dl_emlrtRSI;
      f_error(&f_st, y, getString(&f_st, message(&f_st, b_y, c_y, &c_emlrtMCI),
               &c_emlrtMCI), &c_emlrtMCI);
    }

    if (!newjoint->InTree) {
      b_index = newjoint->NameInternal->size[0] * newjoint->NameInternal->size[1];
      newjoint->NameInternal->size[0] = 1;
      newjoint->NameInternal->size[1] = input1->size[1];
      emxEnsureCapacity_char_T(newjoint->NameInternal, b_index);
      loop_ub = input1->size[1] - 1;
      for (b_index = 0; b_index <= loop_ub; b_index++) {
        newjoint->NameInternal->data[b_index] = input1->data[b_index];
      }
    } else {
      d_st.site = &id_emlrtRSI;
      e_st.site = &jd_emlrtRSI;
      warning(&e_st);
    }
  }

  emxFree_char_T(&r);
  emxFree_char_T(&input1);
  emxInit_real_T1(&b_obj, 1);
  loop_ub = obj->JointInternal.PositionLimitsInternal->size[0] << 1;
  b_index = newjoint->PositionLimitsInternal->size[0] *
    newjoint->PositionLimitsInternal->size[1];
  newjoint->PositionLimitsInternal->size[0] =
    obj->JointInternal.PositionLimitsInternal->size[0];
  newjoint->PositionLimitsInternal->size[1] = 2;
  emxEnsureCapacity_real_T(newjoint->PositionLimitsInternal, b_index);
  b_index = b_obj->size[0];
  b_obj->size[0] = loop_ub;
  emxEnsureCapacity_real_T1(b_obj, b_index);
  for (b_index = 0; b_index < loop_ub; b_index++) {
    b_obj->data[b_index] = obj->JointInternal.PositionLimitsInternal->
      data[b_index];
  }

  loop_ub = b_obj->size[0];
  for (b_index = 0; b_index < loop_ub; b_index++) {
    newjoint->PositionLimitsInternal->data[b_index] = b_obj->data[b_index];
  }

  emxFree_real_T(&b_obj);
  emxInit_real_T1(&c_obj, 1);
  b_index = c_obj->size[0];
  c_obj->size[0] = obj->JointInternal.HomePositionInternal->size[0];
  emxEnsureCapacity_real_T1(c_obj, b_index);
  loop_ub = obj->JointInternal.HomePositionInternal->size[0];
  for (b_index = 0; b_index < loop_ub; b_index++) {
    c_obj->data[b_index] = obj->JointInternal.HomePositionInternal->data[b_index];
  }

  b_index = newjoint->HomePositionInternal->size[0];
  newjoint->HomePositionInternal->size[0] = c_obj->size[0];
  emxEnsureCapacity_real_T1(newjoint->HomePositionInternal, b_index);
  loop_ub = c_obj->size[0];
  for (b_index = 0; b_index < loop_ub; b_index++) {
    newjoint->HomePositionInternal->data[b_index] = c_obj->data[b_index];
  }

  emxFree_real_T(&c_obj);
  for (b_index = 0; b_index < 3; b_index++) {
    d_obj[b_index] = obj->JointInternal.JointAxisInternal[b_index];
  }

  for (b_index = 0; b_index < 3; b_index++) {
    newjoint->JointAxisInternal[b_index] = d_obj[b_index];
  }

  emxInit_real_T1(&e_obj, 1);
  loop_ub = 6 * obj->JointInternal.MotionSubspace->size[1];
  b_index = newjoint->MotionSubspace->size[0] * newjoint->MotionSubspace->size[1];
  newjoint->MotionSubspace->size[0] = 6;
  newjoint->MotionSubspace->size[1] = obj->JointInternal.MotionSubspace->size[1];
  emxEnsureCapacity_real_T(newjoint->MotionSubspace, b_index);
  b_index = e_obj->size[0];
  e_obj->size[0] = loop_ub;
  emxEnsureCapacity_real_T1(e_obj, b_index);
  for (b_index = 0; b_index < loop_ub; b_index++) {
    e_obj->data[b_index] = obj->JointInternal.MotionSubspace->data[b_index];
  }

  loop_ub = e_obj->size[0];
  for (b_index = 0; b_index < loop_ub; b_index++) {
    newjoint->MotionSubspace->data[b_index] = e_obj->data[b_index];
  }

  emxFree_real_T(&e_obj);
  for (b_index = 0; b_index < 16; b_index++) {
    f_obj[b_index] = obj->JointInternal.JointToParentTransform[b_index];
  }

  for (b_index = 0; b_index < 16; b_index++) {
    newjoint->JointToParentTransform[b_index] = f_obj[b_index];
  }

  for (b_index = 0; b_index < 16; b_index++) {
    f_obj[b_index] = obj->JointInternal.ChildToJointTransform[b_index];
  }

  for (b_index = 0; b_index < 16; b_index++) {
    newjoint->ChildToJointTransform[b_index] = f_obj[b_index];
  }

  iobj_0->JointInternal = newjoint;
  return newbody;
}

static void e_validateattributes(const emlrtStack *sp, emxArray_char_T *a)
{
  emlrtStack st;
  emlrtStack b_st;
  char_T b_u[38];
  int32_T i;
  const mxArray *y;
  static char_T c_u[38] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'r', 'i', 'g',
    'i', 'd', 'B', 'o', 'd', 'y', 'J', 'o', 'i', 'n', 't', ':', 'e', 'x', 'p',
    'e', 'c', 't', 'e', 'd', 'N', 'o', 'n', 'e', 'm', 'p', 't', 'y' };

  const mxArray *m;
  static const int32_T iv[2] = { 1, 38 };

  char_T d_u[48];
  const mxArray *b_y;
  static char_T e_u[48] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'N', 'o', 'n', 'e', 'm', 'p', 't', 'y' };

  static const int32_T iv1[2] = { 1, 48 };

  char_T f_u[5];
  const mxArray *c_y;
  static char_T g_u[5] = { 'j', 'n', 'a', 'm', 'e' };

  static const int32_T iv2[2] = { 1, 5 };

  st.prev = sp;
  st.tls = sp->tls;
  st.site = &sb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (a->size[1] == 0) {
    for (i = 0; i < 38; i++) {
      b_u[i] = c_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, iv);
    emlrtInitCharArrayR2013a(&st, 38, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 48; i++) {
      d_u[i] = e_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, iv1);
    emlrtInitCharArrayR2013a(&st, 48, m, &d_u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 5; i++) {
      f_u[i] = g_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, iv2);
    emlrtInitCharArrayR2013a(&st, 5, m, &f_u[0]);
    emlrtAssign(&c_y, m);
    b_st.site = &dl_emlrtRSI;
    f_error(&b_st, y, getString(&b_st, message(&b_st, b_y, c_y, &c_emlrtMCI),
             &c_emlrtMCI), &c_emlrtMCI);
  }
}

static rigidBodyJoint *b_rigidBodyJoint_rigidBodyJoint(const emlrtStack *sp,
  rigidBodyJoint *obj, emxArray_char_T *jname, emxArray_char_T *jtype)
{
  rigidBodyJoint *b_obj;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  int32_T b_index;
  static int8_T iv[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

  int32_T loop_ub;
  char_T partial_match_data[9];
  int32_T partial_match_size[2];
  real_T nmatched;
  emxArray_char_T *inputstr;
  int32_T jointtype_size_idx_1;
  char_T b_u[43];
  char_T c_u[46];
  char_T jointtype_data[9];
  const mxArray *y;
  static char_T d_u[43] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'r', 'i', 'g',
    'i', 'd', 'B', 'o', 'd', 'y', 'J', 'o', 'i', 'n', 't', ':', 'a', 'm', 'b',
    'i', 'g', 'u', 'o', 'u', 's', 'S', 't', 'r', 'i', 'n', 'g', 'C', 'h', 'o',
    'i', 'c', 'e' };

  const mxArray *m;
  static const int32_T iv1[2] = { 1, 43 };

  static char_T e_u[46] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'r', 'i', 'g',
    'i', 'd', 'B', 'o', 'd', 'y', 'J', 'o', 'i', 'n', 't', ':', 'u', 'n', 'r',
    'e', 'c', 'o', 'g', 'n', 'i', 'z', 'e', 'd', 'S', 't', 'r', 'i', 'n', 'g',
    'C', 'h', 'o', 'i', 'c', 'e' };

  static const int32_T iv2[2] = { 1, 46 };

  char_T f_u[49];
  char_T g_u[52];
  const mxArray *b_y;
  static char_T h_u[49] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 's', 't', 'r',
    'i', 'n', 'g', 'A', 'm', 'b', 'i', 'g', 'u', 'o', 'u', 's', 'S', 't', 'r',
    'i', 'n', 'g', 'C', 'h', 'o', 'i', 'c', 'e' };

  static const int32_T iv3[2] = { 1, 49 };

  emxArray_char_T *switch_expression;
  static char_T i_u[52] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 's', 't', 'r',
    'i', 'n', 'g', 'U', 'n', 'r', 'e', 'c', 'o', 'g', 'n', 'i', 'z', 'e', 'd',
    'S', 't', 'r', 'i', 'n', 'g', 'C', 'h', 'o', 'i', 'c', 'e' };

  static const int32_T iv4[2] = { 1, 52 };

  char_T j_u[5];
  const mxArray *c_y;
  static char_T k_u[5] = { 'j', 't', 'y', 'p', 'e' };

  static const int32_T iv5[2] = { 1, 5 };

  boolean_T result;
  static const int32_T iv6[2] = { 1, 5 };

  char_T l_u[32];
  const mxArray *d_y;
  static char_T m_u[32] = { '\'', 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e', '\'',
    ',', ' ', '\'', 'p', 'r', 'i', 's', 'm', 'a', 't', 'i', 'c', '\'', ',', ' ',
    '\'', 'f', 'i', 'x', 'e', 'd', '\'' };

  static const int32_T iv7[2] = { 1, 32 };

  static const int32_T iv8[2] = { 1, 32 };

  int8_T msubspace_data[36];
  static int8_T iv9[6] = { 0, 0, 1, 0, 0, 0 };

  static int8_T iv10[6] = { 0, 0, 0, 0, 0, 1 };

  real_T poslim_data[12];
  static char_T cv[3] = { ',', ' ', '\'' };

  static int8_T iv11[3] = { 0, 0, 1 };

  const mxArray *e_y;
  static char_T cv1[2] = { '\'', ',' };

  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b_obj = obj;
  b_obj->InTree = false;
  for (b_index = 0; b_index < 16; b_index++) {
    b_obj->JointToParentTransform[b_index] = (real_T)iv[b_index];
  }

  for (b_index = 0; b_index < 16; b_index++) {
    b_obj->ChildToJointTransform[b_index] = (real_T)iv[b_index];
  }

  st.site = &r_emlrtRSI;
  b_index = jname->size[0] * jname->size[1];
  jname->size[0] = 1;
  emxEnsureCapacity_char_T(jname, b_index);
  st.site = &rc_emlrtRSI;
  e_validateattributes(&st, jname);
  b_index = b_obj->NameInternal->size[0] * b_obj->NameInternal->size[1];
  b_obj->NameInternal->size[0] = 1;
  b_obj->NameInternal->size[1] = jname->size[1];
  emxEnsureCapacity_char_T(b_obj->NameInternal, b_index);
  loop_ub = jname->size[1] - 1;
  for (b_index = 0; b_index <= loop_ub; b_index++) {
    b_obj->NameInternal->data[b_index] = jname->data[b_index];
  }

  st.site = &xc_emlrtRSI;
  b_st.site = &yc_emlrtRSI;
  c_st.site = &ad_emlrtRSI;
  get_match(&c_st, jtype, partial_match_data, partial_match_size, &nmatched);
  emxInit_char_T(&inputstr, 2);
  if ((nmatched == 0.0) || ((jtype->size[1] == 0) != (partial_match_size[1] == 0)))
  {
    jointtype_size_idx_1 = 0;
    if ((nmatched == 0.0) || ((jtype->size[1] == 0) != (partial_match_size[1] ==
          0))) {
      for (b_index = 0; b_index < 46; b_index++) {
        c_u[b_index] = e_u[b_index];
      }

      y = NULL;
      m = emlrtCreateCharArray(2, iv2);
      emlrtInitCharArrayR2013a(&b_st, 46, m, &c_u[0]);
      emlrtAssign(&y, m);
      for (b_index = 0; b_index < 52; b_index++) {
        g_u[b_index] = i_u[b_index];
      }

      b_y = NULL;
      m = emlrtCreateCharArray(2, iv4);
      emlrtInitCharArrayR2013a(&b_st, 52, m, &g_u[0]);
      emlrtAssign(&b_y, m);
      for (b_index = 0; b_index < 5; b_index++) {
        j_u[b_index] = k_u[b_index];
      }

      c_y = NULL;
      m = emlrtCreateCharArray(2, iv6);
      emlrtInitCharArrayR2013a(&b_st, 5, m, &j_u[0]);
      emlrtAssign(&c_y, m);
      for (b_index = 0; b_index < 32; b_index++) {
        l_u[b_index] = m_u[b_index];
      }

      d_y = NULL;
      m = emlrtCreateCharArray(2, iv8);
      emlrtInitCharArrayR2013a(&b_st, 32, m, &l_u[0]);
      emlrtAssign(&d_y, m);
      b_index = inputstr->size[0] * inputstr->size[1];
      inputstr->size[0] = 1;
      inputstr->size[1] = jtype->size[1] + 5;
      emxEnsureCapacity_char_T(inputstr, b_index);
      for (b_index = 0; b_index < 3; b_index++) {
        inputstr->data[b_index] = cv[b_index];
      }

      loop_ub = jtype->size[1];
      for (b_index = 0; b_index < loop_ub; b_index++) {
        inputstr->data[b_index + 3] = jtype->data[b_index];
      }

      for (b_index = 0; b_index < 2; b_index++) {
        inputstr->data[(b_index + jtype->size[1]) + 3] = cv1[b_index];
      }

      e_y = NULL;
      for (b_index = 0; b_index < 2; b_index++) {
        partial_match_size[b_index] = inputstr->size[b_index];
      }

      m = emlrtCreateCharArray(2, &partial_match_size[0]);
      emlrtInitCharArrayR2013a(&b_st, inputstr->size[1], m, &inputstr->data[0]);
      emlrtAssign(&e_y, m);
      c_st.site = &vl_emlrtRSI;
      f_error(&c_st, y, getString(&c_st, c_message(&c_st, b_y, c_y, d_y, e_y,
                &h_emlrtMCI), &h_emlrtMCI), &h_emlrtMCI);
    }
  } else if (nmatched > 1.0) {
    for (b_index = 0; b_index < 43; b_index++) {
      b_u[b_index] = d_u[b_index];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, iv1);
    emlrtInitCharArrayR2013a(&b_st, 43, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (b_index = 0; b_index < 49; b_index++) {
      f_u[b_index] = h_u[b_index];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, iv3);
    emlrtInitCharArrayR2013a(&b_st, 49, m, &f_u[0]);
    emlrtAssign(&b_y, m);
    for (b_index = 0; b_index < 5; b_index++) {
      j_u[b_index] = k_u[b_index];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, iv5);
    emlrtInitCharArrayR2013a(&b_st, 5, m, &j_u[0]);
    emlrtAssign(&c_y, m);
    for (b_index = 0; b_index < 32; b_index++) {
      l_u[b_index] = m_u[b_index];
    }

    d_y = NULL;
    m = emlrtCreateCharArray(2, iv7);
    emlrtInitCharArrayR2013a(&b_st, 32, m, &l_u[0]);
    emlrtAssign(&d_y, m);
    b_index = inputstr->size[0] * inputstr->size[1];
    inputstr->size[0] = 1;
    inputstr->size[1] = jtype->size[1] + 5;
    emxEnsureCapacity_char_T(inputstr, b_index);
    for (b_index = 0; b_index < 3; b_index++) {
      inputstr->data[b_index] = cv[b_index];
    }

    loop_ub = jtype->size[1];
    for (b_index = 0; b_index < loop_ub; b_index++) {
      inputstr->data[b_index + 3] = jtype->data[b_index];
    }

    for (b_index = 0; b_index < 2; b_index++) {
      inputstr->data[(b_index + jtype->size[1]) + 3] = cv1[b_index];
    }

    e_y = NULL;
    for (b_index = 0; b_index < 2; b_index++) {
      partial_match_size[b_index] = inputstr->size[b_index];
    }

    m = emlrtCreateCharArray(2, &partial_match_size[0]);
    emlrtInitCharArrayR2013a(&b_st, inputstr->size[1], m, &inputstr->data[0]);
    emlrtAssign(&e_y, m);
    c_st.site = &wl_emlrtRSI;
    f_error(&c_st, y, getString(&c_st, c_message(&c_st, b_y, c_y, d_y, e_y,
              &g_emlrtMCI), &g_emlrtMCI), &g_emlrtMCI);
  } else {
    jointtype_size_idx_1 = partial_match_size[1];
    if (0 <= partial_match_size[1] - 1) {
      memcpy(&jointtype_data[0], &partial_match_data[0], (uint32_T)
             (partial_match_size[1] * (int32_T)sizeof(char_T)));
    }
  }

  emxFree_char_T(&inputstr);
  emlrtDimSizeGeqCheckR2012b(20, jointtype_size_idx_1, &emlrtECI, sp);
  b_index = b_obj->Type->size[0] * b_obj->Type->size[1];
  b_obj->Type->size[0] = 1;
  b_obj->Type->size[1] = jointtype_size_idx_1;
  emxEnsureCapacity_char_T(b_obj->Type, b_index);
  loop_ub = jointtype_size_idx_1 - 1;
  for (b_index = 0; b_index <= loop_ub; b_index++) {
    b_obj->Type->data[b_index] = jointtype_data[b_index];
  }

  emxInit_char_T(&switch_expression, 2);
  b_index = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = b_obj->Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, b_index);
  loop_ub = b_obj->Type->size[1] - 1;
  for (b_index = 0; b_index <= loop_ub; b_index++) {
    switch_expression->data[b_index] = b_obj->Type->data[b_index];
  }

  result = b_strcmp(switch_expression);
  if (result) {
    b_index = 0;
  } else {
    result = c_strcmp(switch_expression);
    if (result) {
      b_index = 1;
    } else {
      b_index = -1;
    }
  }

  emxFree_char_T(&switch_expression);
  switch (b_index) {
   case 0:
    for (b_index = 0; b_index < 6; b_index++) {
      msubspace_data[b_index] = iv9[b_index];
    }

    for (b_index = 0; b_index < 2; b_index++) {
      poslim_data[b_index] = 6.2831853071795862 * (real_T)b_index +
        -3.1415926535897931;
    }

    b_obj->VelocityNumber = 1.0;
    b_obj->PositionNumber = 1.0;
    for (b_index = 0; b_index < 3; b_index++) {
      b_obj->JointAxisInternal[b_index] = (real_T)iv11[b_index];
    }
    break;

   case 1:
    for (b_index = 0; b_index < 6; b_index++) {
      msubspace_data[b_index] = iv10[b_index];
    }

    for (b_index = 0; b_index < 2; b_index++) {
      poslim_data[b_index] = (real_T)b_index + -0.5;
    }

    b_obj->VelocityNumber = 1.0;
    b_obj->PositionNumber = 1.0;
    for (b_index = 0; b_index < 3; b_index++) {
      b_obj->JointAxisInternal[b_index] = (real_T)iv11[b_index];
    }
    break;

   default:
    for (b_index = 0; b_index < 6; b_index++) {
      msubspace_data[b_index] = 0;
    }

    for (b_index = 0; b_index < 2; b_index++) {
      poslim_data[b_index] = 0.0;
    }

    b_obj->VelocityNumber = 0.0;
    b_obj->PositionNumber = 0.0;
    for (b_index = 0; b_index < 3; b_index++) {
      b_obj->JointAxisInternal[b_index] = 0.0;
    }
    break;
  }

  b_index = b_obj->MotionSubspace->size[0] * b_obj->MotionSubspace->size[1];
  b_obj->MotionSubspace->size[0] = 6;
  b_obj->MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(b_obj->MotionSubspace, b_index);
  for (b_index = 0; b_index < 6; b_index++) {
    b_obj->MotionSubspace->data[b_index] = (real_T)msubspace_data[b_index];
  }

  b_index = b_obj->PositionLimitsInternal->size[0] *
    b_obj->PositionLimitsInternal->size[1];
  b_obj->PositionLimitsInternal->size[0] = 1;
  b_obj->PositionLimitsInternal->size[1] = 2;
  emxEnsureCapacity_real_T(b_obj->PositionLimitsInternal, b_index);
  for (b_index = 0; b_index < 2; b_index++) {
    b_obj->PositionLimitsInternal->data[b_index] = poslim_data[b_index];
  }

  b_index = b_obj->HomePositionInternal->size[0];
  b_obj->HomePositionInternal->size[0] = 1;
  emxEnsureCapacity_real_T1(b_obj->HomePositionInternal, b_index);
  b_obj->HomePositionInternal->data[0] = 0.0;
  return b_obj;
}

static void get_match(const emlrtStack *sp, emxArray_char_T *str, char_T
                      match_data[], int32_T match_size[2], real_T *nmatched)
{
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  int32_T partial_match_size_idx_1;
  boolean_T guard1 = false;
  boolean_T guard2 = false;
  boolean_T guard3 = false;
  boolean_T guard4 = false;
  int32_T ns;
  boolean_T b_bool;
  boolean_T matched;
  int32_T minnanb;
  boolean_T b_guard1 = false;
  char_T partial_match_data[9];
  int32_T exitg1;
  static char_T vstr[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static char_T b_vstr[9] = { 'p', 'r', 'i', 's', 'm', 'a', 't', 'i', 'c' };

  static char_T c_vstr[5] = { 'f', 'i', 'x', 'e', 'd' };

  static char_T cv[128] = { '\x00', '\x01', '\x02', '\x03', '\x04', '\x05',
    '\x06', '\x07', '\x08', '	', '\x0a', '\x0b', '\x0c', '\x0d', '\x0e', '\x0f',
    '\x10', '\x11', '\x12', '\x13', '\x14', '\x15', '\x16', '\x17', '\x18',
    '\x19', '\x1a', '\x1b', '\x1c', '\x1d', '\x1e', '\x1f', ' ', '!', '\"', '#',
    '$', '%', '&', '\'', '(', ')', '*', '+', ',', '-', '.', '/', '0', '1', '2',
    '3', '4', '5', '6', '7', '8', '9', ':', ';', '<', '=', '>', '?', '@', 'a',
    'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p',
    'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '[', '\\', ']', '^', '_',
    '`', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n',
    'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '{', '|', '}',
    '~', '\x7f' };

  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  partial_match_size_idx_1 = 0;
  guard1 = false;
  guard2 = false;
  guard3 = false;
  guard4 = false;
  if (str->size[1] <= 8) {
    st.site = &bd_emlrtRSI;
    ns = str->size[1];
    b_bool = false;
    if (str->size[1] < 8) {
      minnanb = str->size[1];
    } else {
      minnanb = 8;
    }

    b_guard1 = false;
    if (ns <= minnanb) {
      if (minnanb < ns) {
        ns = minnanb;
      }

      b_guard1 = true;
    } else {
      if (str->size[1] == 8) {
        ns = 8;
        b_guard1 = true;
      }
    }

    if (b_guard1) {
      minnanb = 1;
      do {
        exitg1 = 0;
        if (minnanb - 1 <= ns - 1) {
          b_st.site = &cd_emlrtRSI;
          assertSupportedString(&b_st, str->data[minnanb - 1]);
          b_st.site = &dd_emlrtRSI;
          assertSupportedString(&b_st, vstr[minnanb - 1]);
          b_st.site = &ed_emlrtRSI;
          c_st.site = &fd_emlrtRSI;
          d_st.site = &gd_emlrtRSI;
          assertSupportedString(&d_st, str->data[minnanb - 1]);
          b_st.site = &ed_emlrtRSI;
          c_st.site = &fd_emlrtRSI;
          d_st.site = &gd_emlrtRSI;
          assertSupportedString(&d_st, vstr[minnanb - 1]);
          if (cv[(uint8_T)str->data[minnanb - 1] & 127] != cv[(int32_T)
              vstr[minnanb - 1]]) {
            exitg1 = 1;
          } else {
            minnanb++;
          }
        } else {
          b_bool = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }

    if (b_bool) {
      if (str->size[1] == 8) {
        *nmatched = 1.0;
        match_size[0] = 1;
        match_size[1] = 8;
        for (ns = 0; ns < 8; ns++) {
          match_data[ns] = vstr[ns];
        }
      } else {
        partial_match_size_idx_1 = 8;
        for (ns = 0; ns < 8; ns++) {
          partial_match_data[ns] = vstr[ns];
        }

        matched = true;
        *nmatched = 1.0;
        guard3 = true;
      }
    } else {
      guard4 = true;
    }
  } else {
    guard4 = true;
  }

  if (guard4) {
    matched = false;
    *nmatched = 0.0;
    guard3 = true;
  }

  if (guard3) {
    if (str->size[1] <= 9) {
      st.site = &bd_emlrtRSI;
      ns = str->size[1];
      b_bool = false;
      if (str->size[1] < 9) {
        minnanb = str->size[1];
      } else {
        minnanb = 9;
      }

      b_guard1 = false;
      if (ns <= minnanb) {
        if (minnanb < ns) {
          ns = minnanb;
        }

        b_guard1 = true;
      } else {
        if (str->size[1] == 9) {
          ns = 9;
          b_guard1 = true;
        }
      }

      if (b_guard1) {
        minnanb = 1;
        do {
          exitg1 = 0;
          if (minnanb - 1 <= ns - 1) {
            b_st.site = &cd_emlrtRSI;
            assertSupportedString(&b_st, str->data[minnanb - 1]);
            b_st.site = &dd_emlrtRSI;
            assertSupportedString(&b_st, b_vstr[minnanb - 1]);
            b_st.site = &ed_emlrtRSI;
            c_st.site = &fd_emlrtRSI;
            d_st.site = &gd_emlrtRSI;
            assertSupportedString(&d_st, str->data[minnanb - 1]);
            b_st.site = &ed_emlrtRSI;
            c_st.site = &fd_emlrtRSI;
            d_st.site = &gd_emlrtRSI;
            assertSupportedString(&d_st, b_vstr[minnanb - 1]);
            if (cv[(uint8_T)str->data[minnanb - 1] & 127] != cv[(int32_T)
                b_vstr[minnanb - 1]]) {
              exitg1 = 1;
            } else {
              minnanb++;
            }
          } else {
            b_bool = true;
            exitg1 = 1;
          }
        } while (exitg1 == 0);
      }

      if (b_bool) {
        if (str->size[1] == 9) {
          *nmatched = 1.0;
          match_size[0] = 1;
          match_size[1] = 9;
          for (ns = 0; ns < 9; ns++) {
            match_data[ns] = b_vstr[ns];
          }
        } else {
          if (!matched) {
            partial_match_size_idx_1 = 9;
            for (ns = 0; ns < 9; ns++) {
              partial_match_data[ns] = b_vstr[ns];
            }
          }

          matched = true;
          (*nmatched)++;
          guard2 = true;
        }
      } else {
        guard2 = true;
      }
    } else {
      guard2 = true;
    }
  }

  if (guard2) {
    if (str->size[1] <= 5) {
      st.site = &bd_emlrtRSI;
      ns = str->size[1];
      b_bool = false;
      if (str->size[1] < 5) {
        minnanb = str->size[1];
      } else {
        minnanb = 5;
      }

      b_guard1 = false;
      if (ns <= minnanb) {
        if (minnanb < ns) {
          ns = minnanb;
        }

        b_guard1 = true;
      } else {
        if (str->size[1] == 5) {
          ns = 5;
          b_guard1 = true;
        }
      }

      if (b_guard1) {
        minnanb = 1;
        do {
          exitg1 = 0;
          if (minnanb - 1 <= ns - 1) {
            b_st.site = &cd_emlrtRSI;
            assertSupportedString(&b_st, str->data[minnanb - 1]);
            b_st.site = &dd_emlrtRSI;
            assertSupportedString(&b_st, c_vstr[minnanb - 1]);
            b_st.site = &ed_emlrtRSI;
            c_st.site = &fd_emlrtRSI;
            d_st.site = &gd_emlrtRSI;
            assertSupportedString(&d_st, str->data[minnanb - 1]);
            b_st.site = &ed_emlrtRSI;
            c_st.site = &fd_emlrtRSI;
            d_st.site = &gd_emlrtRSI;
            assertSupportedString(&d_st, c_vstr[minnanb - 1]);
            if (cv[(uint8_T)str->data[minnanb - 1] & 127] != cv[(int32_T)
                c_vstr[minnanb - 1]]) {
              exitg1 = 1;
            } else {
              minnanb++;
            }
          } else {
            b_bool = true;
            exitg1 = 1;
          }
        } while (exitg1 == 0);
      }

      if (b_bool) {
        if (str->size[1] == 5) {
          *nmatched = 1.0;
          match_size[0] = 1;
          match_size[1] = 5;
          for (ns = 0; ns < 5; ns++) {
            match_data[ns] = c_vstr[ns];
          }
        } else {
          if (!matched) {
            partial_match_size_idx_1 = 5;
            for (ns = 0; ns < 5; ns++) {
              partial_match_data[ns] = c_vstr[ns];
            }
          }

          (*nmatched)++;
          guard1 = true;
        }
      } else {
        guard1 = true;
      }
    } else {
      guard1 = true;
    }
  }

  if (guard1) {
    if (*nmatched == 0.0) {
      match_size[0] = 1;
      match_size[1] = 0;
    } else {
      match_size[0] = 1;
      match_size[1] = partial_match_size_idx_1;
      if (0 <= partial_match_size_idx_1 - 1) {
        memcpy(&match_data[0], &partial_match_data[0], (uint32_T)
               (partial_match_size_idx_1 * (int32_T)sizeof(char_T)));
      }
    }
  }
}

static void assertSupportedString(const emlrtStack *sp, char_T s)
{
  emlrtStack st;
  char_T b_u[31];
  int32_T i;
  const mxArray *y;
  static char_T c_u[31] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'u', 'n', 's', 'u', 'p', 'p', 'o', 'r', 't', 'e', 'd',
    'S', 't', 'r', 'i', 'n', 'g' };

  const mxArray *m;
  static const int32_T iv[2] = { 1, 31 };

  const mxArray *b_y;
  static const int32_T iv1[2] = { 1, 31 };

  const mxArray *c_y;
  st.prev = sp;
  st.tls = sp->tls;
  if (!((uint8_T)s <= 127)) {
    for (i = 0; i < 31; i++) {
      b_u[i] = c_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, iv);
    emlrtInitCharArrayR2013a(sp, 31, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 31; i++) {
      b_u[i] = c_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, iv1);
    emlrtInitCharArrayR2013a(sp, 31, m, &b_u[0]);
    emlrtAssign(&b_y, m);
    c_y = NULL;
    m = emlrtCreateNumericMatrix(1, 1, mxINT8_CLASS, mxREAL);
    *(int8_T *)emlrtMxGetData(m) = MAX_int8_T;
    emlrtAssign(&c_y, m);
    st.site = &cl_emlrtRSI;
    f_error(&st, y, getString(&st, message(&st, b_y, c_y, &i_emlrtMCI),
             &i_emlrtMCI), &i_emlrtMCI);
  }
}

static void warning(const emlrtStack *sp)
{
  emlrtStack st;
  char_T msgID[38];
  int32_T i;
  char_T b_u[7];
  static char_T b_msgID[38] = { 'r', 'o', 'b', 'o', 't', 'i', 'c', 's', ':', 'r',
    'o', 'b', 'o', 't', 'm', 'a', 'n', 'i', 'p', ':', 'j', 'o', 'i', 'n', 't',
    ':', 'J', 'o', 'i', 'n', 't', 'N', 'o', 't', 'F', 'r', 'e', 'e' };

  const mxArray *y;
  static char_T c_u[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };

  const mxArray *m;
  static const int32_T iv[2] = { 1, 7 };

  const mxArray *b_y;
  static char_T d_u[7] = { 'm', 'e', 's', 's', 'a', 'g', 'e' };

  static const int32_T iv1[2] = { 1, 7 };

  const mxArray *c_y;
  static const int32_T iv2[2] = { 1, 38 };

  st.prev = sp;
  st.tls = sp->tls;
  for (i = 0; i < 38; i++) {
    msgID[i] = b_msgID[i];
  }

  for (i = 0; i < 7; i++) {
    b_u[i] = c_u[i];
  }

  y = NULL;
  m = emlrtCreateCharArray(2, iv);
  emlrtInitCharArrayR2013a(sp, 7, m, &b_u[0]);
  emlrtAssign(&y, m);
  for (i = 0; i < 7; i++) {
    b_u[i] = d_u[i];
  }

  b_y = NULL;
  m = emlrtCreateCharArray(2, iv1);
  emlrtInitCharArrayR2013a(sp, 7, m, &b_u[0]);
  emlrtAssign(&b_y, m);
  c_y = NULL;
  m = emlrtCreateCharArray(2, iv2);
  emlrtInitCharArrayR2013a(sp, 38, m, &msgID[0]);
  emlrtAssign(&c_y, m);
  st.site = &xl_emlrtRSI;
  b_feval(&st, y, feval(&st, b_y, c_y, &j_emlrtMCI), &k_emlrtMCI);
}

static boolean_T e_strcmp(emxArray_char_T *a)
{
  boolean_T b_bool;
  int32_T kstr;
  int32_T exitg1;
  static char_T cv[5] = { 'f', 'i', 'x', 'e', 'd' };

  b_bool = false;
  if (a->size[1] == 5) {
    kstr = 1;
    do {
      exitg1 = 0;
      if (kstr - 1 < 5) {
        if (a->data[kstr - 1] != cv[kstr - 1]) {
          exitg1 = 1;
        } else {
          kstr++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  return b_bool;
}

static void b_RigidBodyTree_addBody(const emlrtStack *sp,
  robotics_manip_internal_RigidBodyTree_1 *obj,
  robotics_manip_internal_RigidBody *bodyin, emxArray_char_T *parentName,
  robotics_manip_internal_RigidBody_1 *iobj_0, rigidBodyJoint *iobj_1,
  rigidBodyJoint *iobj_2)
{
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emxArray_char_T *bname;
  int32_T i;
  int32_T loop_ub;
  emxArray_char_T *b_bname;
  int32_T bid;
  real_T b_index;
  int32_T b_i;
  boolean_T exitg1;
  robotics_manip_internal_RigidBody_1 *body;
  int32_T bid2;
  rigidBodyJoint *jnt;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emxInit_char_T(&bname, 2);
  st.site = &xb_emlrtRSI;
  i = bname->size[0] * bname->size[1];
  bname->size[0] = 1;
  bname->size[1] = bodyin->NameInternal->size[1];
  emxEnsureCapacity_char_T(bname, i);
  loop_ub = bodyin->NameInternal->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    bname->data[i] = bodyin->NameInternal->data[i];
  }

  emxInit_char_T(&b_bname, 2);
  st.site = &xb_emlrtRSI;
  bid = -2;
  b_st.site = &tb_emlrtRSI;
  b_validateattributes(&b_st, bname);
  b_st.site = &ub_emlrtRSI;
  i = b_bname->size[0] * b_bname->size[1];
  b_bname->size[0] = 1;
  b_bname->size[1] = obj->Base.NameInternal->size[1];
  emxEnsureCapacity_char_T(b_bname, i);
  loop_ub = obj->Base.NameInternal->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    b_bname->data[i] = obj->Base.NameInternal->data[i];
  }

  if (d_strcmp(b_bname, bname)) {
    bid = -1;
  } else {
    b_index = obj->NumBodies;
    emlrtForLoopVectorCheckR2012b(1.0, 1.0, b_index, mxDOUBLE_CLASS, (int32_T)
      b_index, &emlrtRTEI, &st);
    b_i = 0;
    exitg1 = false;
    while ((!exitg1) && (b_i <= (int32_T)b_index - 1)) {
      b_st.site = &vb_emlrtRSI;
      body = obj->Bodies[emlrtDynamicBoundsCheckR2012b(b_i, 0, 2, &emlrtBCI,
        &b_st)];
      i = b_bname->size[0] * b_bname->size[1];
      b_bname->size[0] = 1;
      b_bname->size[1] = body->NameInternal->size[1];
      emxEnsureCapacity_char_T(b_bname, i);
      loop_ub = body->NameInternal->size[1] - 1;
      for (i = 0; i <= loop_ub; i++) {
        b_bname->data[i] = body->NameInternal->data[i];
      }

      if (d_strcmp(b_bname, bname)) {
        bid = b_i;
        exitg1 = true;
      } else {
        b_i++;
      }
    }
  }

  if (bid + 1 > -1) {
    st.site = &yb_emlrtRSI;
    i = bname->size[0] * bname->size[1];
    bname->size[0] = 1;
    bname->size[1] = bodyin->NameInternal->size[1];
    emxEnsureCapacity_char_T(bname, i);
    loop_ub = bodyin->NameInternal->size[1] - 1;
    for (i = 0; i <= loop_ub; i++) {
      bname->data[i] = bodyin->NameInternal->data[i];
    }

    st.site = &yb_emlrtRSI;
    b_error(&st, bname);
  }

  st.site = &ac_emlrtRSI;
  b_st.site = &jc_emlrtRSI;
  bid = -1;
  c_st.site = &tb_emlrtRSI;
  b_validateattributes(&c_st, parentName);
  c_st.site = &ub_emlrtRSI;
  i = bname->size[0] * bname->size[1];
  bname->size[0] = 1;
  bname->size[1] = obj->Base.NameInternal->size[1];
  emxEnsureCapacity_char_T(bname, i);
  loop_ub = obj->Base.NameInternal->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    bname->data[i] = obj->Base.NameInternal->data[i];
  }

  if (d_strcmp(bname, parentName)) {
    bid = 0;
  } else {
    b_index = obj->NumBodies;
    emlrtForLoopVectorCheckR2012b(1.0, 1.0, b_index, mxDOUBLE_CLASS, (int32_T)
      b_index, &emlrtRTEI, &b_st);
    b_i = 0;
    exitg1 = false;
    while ((!exitg1) && (b_i <= (int32_T)b_index - 1)) {
      c_st.site = &vb_emlrtRSI;
      body = obj->Bodies[emlrtDynamicBoundsCheckR2012b(b_i, 0, 2, &emlrtBCI,
        &c_st)];
      i = bname->size[0] * bname->size[1];
      bname->size[0] = 1;
      bname->size[1] = body->NameInternal->size[1];
      emxEnsureCapacity_char_T(bname, i);
      loop_ub = body->NameInternal->size[1] - 1;
      for (i = 0; i <= loop_ub; i++) {
        bname->data[i] = body->NameInternal->data[i];
      }

      if (d_strcmp(bname, parentName)) {
        bid = b_i + 1;
        exitg1 = true;
      } else {
        b_i++;
      }
    }
  }

  if (bid == -1) {
    b_st.site = &kc_emlrtRSI;
    c_error(&b_st, parentName);
  }

  st.site = &bc_emlrtRSI;
  if (bodyin->Index == 0.0) {
    b_st.site = &lc_emlrtRSI;
    d_error(&b_st);
  }

  st.site = &bc_emlrtRSI;
  i = bname->size[0] * bname->size[1];
  bname->size[0] = 1;
  bname->size[1] = bodyin->JointInternal.NameInternal->size[1];
  emxEnsureCapacity_char_T(bname, i);
  loop_ub = bodyin->JointInternal.NameInternal->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    bname->data[i] = bodyin->JointInternal.NameInternal->data[i];
  }

  st.site = &bc_emlrtRSI;
  bid2 = -2;
  b_st.site = &mc_emlrtRSI;
  d_validateattributes(&b_st, bname);
  b_index = obj->NumBodies;
  emlrtForLoopVectorCheckR2012b(1.0, 1.0, b_index, mxDOUBLE_CLASS, (int32_T)
    b_index, &b_emlrtRTEI, &st);
  b_i = 0;
  exitg1 = false;
  while ((!exitg1) && (b_i <= (int32_T)b_index - 1)) {
    b_st.site = &nc_emlrtRSI;
    body = obj->Bodies[emlrtDynamicBoundsCheckR2012b(b_i, 0, 2, &j_emlrtBCI,
      &b_st)];
    if (body->Index == 0.0) {
      c_st.site = &lc_emlrtRSI;
      d_error(&c_st);
    }

    jnt = body->JointInternal;
    b_st.site = &nc_emlrtRSI;
    i = b_bname->size[0] * b_bname->size[1];
    b_bname->size[0] = 1;
    b_bname->size[1] = jnt->NameInternal->size[1];
    emxEnsureCapacity_char_T(b_bname, i);
    loop_ub = jnt->NameInternal->size[1] - 1;
    for (i = 0; i <= loop_ub; i++) {
      b_bname->data[i] = jnt->NameInternal->data[i];
    }

    if (d_strcmp(b_bname, bname)) {
      bid2 = b_i;
      exitg1 = true;
    } else {
      b_i++;
    }
  }

  emxFree_char_T(&b_bname);
  if (bid2 + 1 > 0) {
    st.site = &cc_emlrtRSI;
    if (bodyin->Index == 0.0) {
      b_st.site = &lc_emlrtRSI;
      d_error(&b_st);
    }

    st.site = &cc_emlrtRSI;
    i = bname->size[0] * bname->size[1];
    bname->size[0] = 1;
    bname->size[1] = bodyin->JointInternal.NameInternal->size[1];
    emxEnsureCapacity_char_T(bname, i);
    loop_ub = bodyin->JointInternal.NameInternal->size[1] - 1;
    for (i = 0; i <= loop_ub; i++) {
      bname->data[i] = bodyin->JointInternal.NameInternal->data[i];
    }

    st.site = &cc_emlrtRSI;
    e_error(&st, bname);
  }

  emxFree_char_T(&bname);
  b_index = obj->NumBodies + 1.0;
  st.site = &ic_emlrtRSI;
  body = RigidBody_copy(&st, bodyin, iobj_0, iobj_1, iobj_2);
  i = (int32_T)emlrtIntegerCheckR2012b(b_index, &c_emlrtDCI, sp) - 1;
  obj->Bodies[emlrtDynamicBoundsCheckR2012b(i, 0, 2, &i_emlrtBCI, sp)] = body;
  body->Index = b_index;
  body->ParentIndex = (real_T)bid;
  i = (int32_T)emlrtIntegerCheckR2012b(body->Index, &d_emlrtDCI, sp);
  emlrtDynamicBoundsCheckR2012b(i, 1, 3, &d_emlrtBCI, sp);
  body->JointInternal->InTree = true;
  obj->NumBodies++;
  st.site = &dc_emlrtRSI;
  if (body->Index == 0.0) {
    b_st.site = &lc_emlrtRSI;
    d_error(&b_st);
  }

  jnt = body->JointInternal;
  if (!e_strcmp(jnt->Type)) {
    obj->NumNonFixedBodies++;
    st.site = &ec_emlrtRSI;
    if (body->Index == 0.0) {
      b_st.site = &lc_emlrtRSI;
      d_error(&b_st);
    }

    jnt = body->JointInternal;
    i = (int32_T)emlrtIntegerCheckR2012b(body->Index, &e_emlrtDCI, sp);
    bid = emlrtDynamicBoundsCheckR2012b(i, 1, 3, &e_emlrtBCI, sp) - 1;
    obj->PositionDoFMap[bid] = obj->PositionNumber + 1.0;
    obj->PositionDoFMap[bid + 3] = obj->PositionNumber + jnt->PositionNumber;
    st.site = &fc_emlrtRSI;
    if (body->Index == 0.0) {
      b_st.site = &lc_emlrtRSI;
      d_error(&b_st);
    }

    jnt = body->JointInternal;
    i = (int32_T)emlrtIntegerCheckR2012b(body->Index, &f_emlrtDCI, sp);
    bid = emlrtDynamicBoundsCheckR2012b(i, 1, 3, &f_emlrtBCI, sp) - 1;
    obj->VelocityDoFMap[bid] = obj->VelocityNumber + 1.0;
    obj->VelocityDoFMap[bid + 3] = obj->VelocityNumber + jnt->VelocityNumber;
  } else {
    i = (int32_T)emlrtIntegerCheckR2012b(body->Index, &g_emlrtDCI, sp);
    bid = emlrtDynamicBoundsCheckR2012b(i, 1, 3, &g_emlrtBCI, sp);
    for (i = 0; i < 2; i++) {
      obj->PositionDoFMap[(bid + 3 * i) - 1] = 0.0 - (real_T)i;
    }

    i = (int32_T)emlrtIntegerCheckR2012b(body->Index, &h_emlrtDCI, sp);
    bid = emlrtDynamicBoundsCheckR2012b(i, 1, 3, &h_emlrtBCI, sp);
    for (i = 0; i < 2; i++) {
      obj->VelocityDoFMap[(bid + 3 * i) - 1] = 0.0 - (real_T)i;
    }
  }

  st.site = &gc_emlrtRSI;
  if (body->Index == 0.0) {
    b_st.site = &lc_emlrtRSI;
    d_error(&b_st);
  }

  jnt = body->JointInternal;
  obj->PositionNumber += jnt->PositionNumber;
  st.site = &hc_emlrtRSI;
  if (body->Index == 0.0) {
    b_st.site = &lc_emlrtRSI;
    d_error(&b_st);
  }

  jnt = body->JointInternal;
  obj->VelocityNumber += jnt->VelocityNumber;
}

static void c_RigidBodyTree_addBody(const emlrtStack *sp,
  robotics_manip_internal_RigidBodyTree_1 *obj,
  robotics_manip_internal_RigidBody *bodyin, emxArray_char_T *parentName,
  robotics_manip_internal_RigidBody_1 *iobj_0, rigidBodyJoint *iobj_1,
  rigidBodyJoint *iobj_2)
{
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emxArray_char_T *bname;
  int32_T i;
  int32_T loop_ub;
  emxArray_char_T *b_bname;
  int32_T bid;
  real_T b_index;
  int32_T b_i;
  boolean_T exitg1;
  robotics_manip_internal_RigidBody_1 *body;
  int32_T bid2;
  rigidBodyJoint *jnt;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emxInit_char_T(&bname, 2);
  st.site = &xb_emlrtRSI;
  i = bname->size[0] * bname->size[1];
  bname->size[0] = 1;
  bname->size[1] = bodyin->NameInternal->size[1];
  emxEnsureCapacity_char_T(bname, i);
  loop_ub = bodyin->NameInternal->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    bname->data[i] = bodyin->NameInternal->data[i];
  }

  emxInit_char_T(&b_bname, 2);
  st.site = &xb_emlrtRSI;
  bid = -2;
  b_st.site = &tb_emlrtRSI;
  b_validateattributes(&b_st, bname);
  b_st.site = &ub_emlrtRSI;
  i = b_bname->size[0] * b_bname->size[1];
  b_bname->size[0] = 1;
  b_bname->size[1] = obj->Base.NameInternal->size[1];
  emxEnsureCapacity_char_T(b_bname, i);
  loop_ub = obj->Base.NameInternal->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    b_bname->data[i] = obj->Base.NameInternal->data[i];
  }

  if (d_strcmp(b_bname, bname)) {
    bid = -1;
  } else {
    b_index = obj->NumBodies;
    emlrtForLoopVectorCheckR2012b(1.0, 1.0, b_index, mxDOUBLE_CLASS, (int32_T)
      b_index, &emlrtRTEI, &st);
    b_i = 0;
    exitg1 = false;
    while ((!exitg1) && (b_i <= (int32_T)b_index - 1)) {
      b_st.site = &vb_emlrtRSI;
      body = obj->Bodies[emlrtDynamicBoundsCheckR2012b(b_i, 0, 2, &emlrtBCI,
        &b_st)];
      i = b_bname->size[0] * b_bname->size[1];
      b_bname->size[0] = 1;
      b_bname->size[1] = body->NameInternal->size[1];
      emxEnsureCapacity_char_T(b_bname, i);
      loop_ub = body->NameInternal->size[1] - 1;
      for (i = 0; i <= loop_ub; i++) {
        b_bname->data[i] = body->NameInternal->data[i];
      }

      if (d_strcmp(b_bname, bname)) {
        bid = b_i;
        exitg1 = true;
      } else {
        b_i++;
      }
    }
  }

  if (bid + 1 > -1) {
    st.site = &yb_emlrtRSI;
    i = bname->size[0] * bname->size[1];
    bname->size[0] = 1;
    bname->size[1] = bodyin->NameInternal->size[1];
    emxEnsureCapacity_char_T(bname, i);
    loop_ub = bodyin->NameInternal->size[1] - 1;
    for (i = 0; i <= loop_ub; i++) {
      bname->data[i] = bodyin->NameInternal->data[i];
    }

    st.site = &yb_emlrtRSI;
    b_error(&st, bname);
  }

  st.site = &ac_emlrtRSI;
  b_st.site = &jc_emlrtRSI;
  bid = -1;
  c_st.site = &tb_emlrtRSI;
  b_validateattributes(&c_st, parentName);
  c_st.site = &ub_emlrtRSI;
  i = bname->size[0] * bname->size[1];
  bname->size[0] = 1;
  bname->size[1] = obj->Base.NameInternal->size[1];
  emxEnsureCapacity_char_T(bname, i);
  loop_ub = obj->Base.NameInternal->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    bname->data[i] = obj->Base.NameInternal->data[i];
  }

  if (d_strcmp(bname, parentName)) {
    bid = 0;
  } else {
    b_index = obj->NumBodies;
    emlrtForLoopVectorCheckR2012b(1.0, 1.0, b_index, mxDOUBLE_CLASS, (int32_T)
      b_index, &emlrtRTEI, &b_st);
    b_i = 0;
    exitg1 = false;
    while ((!exitg1) && (b_i <= (int32_T)b_index - 1)) {
      c_st.site = &vb_emlrtRSI;
      body = obj->Bodies[emlrtDynamicBoundsCheckR2012b(b_i, 0, 2, &emlrtBCI,
        &c_st)];
      i = bname->size[0] * bname->size[1];
      bname->size[0] = 1;
      bname->size[1] = body->NameInternal->size[1];
      emxEnsureCapacity_char_T(bname, i);
      loop_ub = body->NameInternal->size[1] - 1;
      for (i = 0; i <= loop_ub; i++) {
        bname->data[i] = body->NameInternal->data[i];
      }

      if (d_strcmp(bname, parentName)) {
        bid = b_i + 1;
        exitg1 = true;
      } else {
        b_i++;
      }
    }
  }

  if (bid == -1) {
    b_st.site = &kc_emlrtRSI;
    c_error(&b_st, parentName);
  }

  st.site = &bc_emlrtRSI;
  if (bodyin->Index == 0.0) {
    b_st.site = &lc_emlrtRSI;
    d_error(&b_st);
  }

  st.site = &bc_emlrtRSI;
  i = bname->size[0] * bname->size[1];
  bname->size[0] = 1;
  bname->size[1] = bodyin->JointInternal.NameInternal->size[1];
  emxEnsureCapacity_char_T(bname, i);
  loop_ub = bodyin->JointInternal.NameInternal->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    bname->data[i] = bodyin->JointInternal.NameInternal->data[i];
  }

  st.site = &bc_emlrtRSI;
  bid2 = -2;
  b_st.site = &mc_emlrtRSI;
  d_validateattributes(&b_st, bname);
  b_index = obj->NumBodies;
  emlrtForLoopVectorCheckR2012b(1.0, 1.0, b_index, mxDOUBLE_CLASS, (int32_T)
    b_index, &b_emlrtRTEI, &st);
  b_i = 0;
  exitg1 = false;
  while ((!exitg1) && (b_i <= (int32_T)b_index - 1)) {
    b_st.site = &nc_emlrtRSI;
    body = obj->Bodies[emlrtDynamicBoundsCheckR2012b(b_i, 0, 2, &j_emlrtBCI,
      &b_st)];
    if (body->Index == 0.0) {
      c_st.site = &lc_emlrtRSI;
      d_error(&c_st);
    }

    jnt = body->JointInternal;
    b_st.site = &nc_emlrtRSI;
    i = b_bname->size[0] * b_bname->size[1];
    b_bname->size[0] = 1;
    b_bname->size[1] = jnt->NameInternal->size[1];
    emxEnsureCapacity_char_T(b_bname, i);
    loop_ub = jnt->NameInternal->size[1] - 1;
    for (i = 0; i <= loop_ub; i++) {
      b_bname->data[i] = jnt->NameInternal->data[i];
    }

    if (d_strcmp(b_bname, bname)) {
      bid2 = b_i;
      exitg1 = true;
    } else {
      b_i++;
    }
  }

  emxFree_char_T(&b_bname);
  if (bid2 + 1 > 0) {
    st.site = &cc_emlrtRSI;
    if (bodyin->Index == 0.0) {
      b_st.site = &lc_emlrtRSI;
      d_error(&b_st);
    }

    st.site = &cc_emlrtRSI;
    i = bname->size[0] * bname->size[1];
    bname->size[0] = 1;
    bname->size[1] = bodyin->JointInternal.NameInternal->size[1];
    emxEnsureCapacity_char_T(bname, i);
    loop_ub = bodyin->JointInternal.NameInternal->size[1] - 1;
    for (i = 0; i <= loop_ub; i++) {
      bname->data[i] = bodyin->JointInternal.NameInternal->data[i];
    }

    st.site = &cc_emlrtRSI;
    e_error(&st, bname);
  }

  emxFree_char_T(&bname);
  b_index = obj->NumBodies + 1.0;
  st.site = &ic_emlrtRSI;
  body = RigidBody_copy(&st, bodyin, iobj_0, iobj_1, iobj_2);
  i = (int32_T)emlrtIntegerCheckR2012b(b_index, &c_emlrtDCI, sp) - 1;
  obj->Bodies[emlrtDynamicBoundsCheckR2012b(i, 0, 2, &i_emlrtBCI, sp)] = body;
  body->Index = b_index;
  body->ParentIndex = (real_T)bid;
  i = (int32_T)emlrtIntegerCheckR2012b(body->Index, &d_emlrtDCI, sp);
  emlrtDynamicBoundsCheckR2012b(i, 1, 3, &d_emlrtBCI, sp);
  body->JointInternal->InTree = true;
  obj->NumBodies++;
  st.site = &dc_emlrtRSI;
  if (body->Index == 0.0) {
    b_st.site = &lc_emlrtRSI;
    d_error(&b_st);
  }

  jnt = body->JointInternal;
  if (!e_strcmp(jnt->Type)) {
    obj->NumNonFixedBodies++;
    st.site = &ec_emlrtRSI;
    if (body->Index == 0.0) {
      b_st.site = &lc_emlrtRSI;
      d_error(&b_st);
    }

    jnt = body->JointInternal;
    i = (int32_T)emlrtIntegerCheckR2012b(body->Index, &e_emlrtDCI, sp);
    bid = emlrtDynamicBoundsCheckR2012b(i, 1, 3, &e_emlrtBCI, sp) - 1;
    obj->PositionDoFMap[bid] = obj->PositionNumber + 1.0;
    obj->PositionDoFMap[bid + 3] = obj->PositionNumber + jnt->PositionNumber;
    st.site = &fc_emlrtRSI;
    if (body->Index == 0.0) {
      b_st.site = &lc_emlrtRSI;
      d_error(&b_st);
    }

    jnt = body->JointInternal;
    i = (int32_T)emlrtIntegerCheckR2012b(body->Index, &f_emlrtDCI, sp);
    bid = emlrtDynamicBoundsCheckR2012b(i, 1, 3, &f_emlrtBCI, sp) - 1;
    obj->VelocityDoFMap[bid] = obj->VelocityNumber + 1.0;
    obj->VelocityDoFMap[bid + 3] = obj->VelocityNumber + jnt->VelocityNumber;
  } else {
    i = (int32_T)emlrtIntegerCheckR2012b(body->Index, &g_emlrtDCI, sp);
    bid = emlrtDynamicBoundsCheckR2012b(i, 1, 3, &g_emlrtBCI, sp);
    for (i = 0; i < 2; i++) {
      obj->PositionDoFMap[(bid + 3 * i) - 1] = 0.0 - (real_T)i;
    }

    i = (int32_T)emlrtIntegerCheckR2012b(body->Index, &h_emlrtDCI, sp);
    bid = emlrtDynamicBoundsCheckR2012b(i, 1, 3, &h_emlrtBCI, sp);
    for (i = 0; i < 2; i++) {
      obj->VelocityDoFMap[(bid + 3 * i) - 1] = 0.0 - (real_T)i;
    }
  }

  st.site = &gc_emlrtRSI;
  if (body->Index == 0.0) {
    b_st.site = &lc_emlrtRSI;
    d_error(&b_st);
  }

  jnt = body->JointInternal;
  obj->PositionNumber += jnt->PositionNumber;
  st.site = &hc_emlrtRSI;
  if (body->Index == 0.0) {
    b_st.site = &lc_emlrtRSI;
    d_error(&b_st);
  }

  jnt = body->JointInternal;
  obj->VelocityNumber += jnt->VelocityNumber;
}

static robotics_core_internal_DampedBFGSwGradientProjection
  *DampedBFGSwGradientProjection_DampedBFGSwGradientProjection
  (robotics_core_internal_DampedBFGSwGradientProjection *obj)
{
  robotics_core_internal_DampedBFGSwGradientProjection *b_obj;
  emlrtStack st;
  emlrtStack b_st;
  int32_T i;
  static char_T cv[22] = { 'B', 'F', 'G', 'S', 'G', 'r', 'a', 'd', 'i', 'e', 'n',
    't', 'P', 'r', 'o', 'j', 'e', 'c', 't', 'i', 'o', 'n' };

  b_obj = obj;
  st.site = &md_emlrtRSI;
  b_st.site = &ld_emlrtRSI;
  b_obj->MaxNumIteration = 1500.0;
  b_obj->MaxTime = 10.0;
  b_obj->GradientTolerance = 1.0E-7;
  b_obj->SolutionTolerance = 1.0E-6;
  b_obj->ArmijoRuleBeta = 0.4;
  b_obj->ArmijoRuleSigma = 1.0E-5;
  b_obj->ConstraintsOn = true;
  b_obj->RandomRestart = true;
  b_obj->StepTolerance = 1.0E-14;
  for (i = 0; i < 22; i++) {
    b_obj->Name[i] = cv[i];
  }

  b_obj->ConstraintMatrix->size[0] = 0;
  b_obj->ConstraintMatrix->size[1] = 0;
  b_obj->ConstraintBound->size[0] = 0;
  st.site = &nd_emlrtRSI;
  SystemTimeProvider_SystemTimeProvider(&b_obj->TimeObj);
  st.site = &od_emlrtRSI;
  SystemTimeProvider_SystemTimeProvider(&b_obj->TimeObjInternal);
  return b_obj;
}

static robotics_core_internal_SystemTimeProvider
  *SystemTimeProvider_SystemTimeProvider
  (robotics_core_internal_SystemTimeProvider *obj)
{
  robotics_core_internal_SystemTimeProvider *b_obj;
  emlrtStack st;
  emlrtStack b_st;
  b_obj = obj;
  st.site = &pd_emlrtRSI;
  b_st.site = &qd_emlrtRSI;
  st.site = &pd_emlrtRSI;
  b_st.site = &rd_emlrtRSI;
  b_obj->StartTime = -1.0;
  return b_obj;
}

static void DampedBFGSwGradientProjection_getSolverParams
  (robotics_core_internal_DampedBFGSwGradientProjection *obj, char_T
   params_Name[22], real_T *params_MaxNumIteration, real_T *params_MaxTime,
   real_T *params_GradientTolerance, real_T *params_SolutionTolerance, real_T
   *params_ArmijoRuleBeta, real_T *params_ArmijoRuleSigma, boolean_T
   *params_ConstraintsOn, boolean_T *params_RandomRestart, real_T
   *params_StepTolerance)
{
  int32_T i;
  for (i = 0; i < 22; i++) {
    params_Name[i] = obj->Name[i];
  }

  *params_MaxNumIteration = obj->MaxNumIteration;
  *params_MaxTime = obj->MaxTime;
  *params_GradientTolerance = obj->GradientTolerance;
  *params_SolutionTolerance = obj->SolutionTolerance;
  *params_ArmijoRuleBeta = obj->ArmijoRuleBeta;
  *params_ArmijoRuleSigma = obj->ArmijoRuleSigma;
  *params_ConstraintsOn = obj->ConstraintsOn;
  *params_RandomRestart = obj->RandomRestart;
  *params_StepTolerance = obj->StepTolerance;
}

static void mw__internal__call__reset(InstanceStruct_99HJ2LsbXT8ZQdi4PHECuF
  *moduleInstance, const emlrtStack *sp)
{
  emlrtStack st;
  emlrtStack b_st;
  robotics_slmanip_internal_block_IKBlock *obj;
  char_T b_u[45];
  emlrtStack c_st;
  int32_T i;
  emlrtStack d_st;
  const mxArray *y;
  static char_T c_u[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  const mxArray *m;
  static const int32_T iv[2] = { 1, 45 };

  const mxArray *b_y;
  static const int32_T iv1[2] = { 1, 45 };

  char_T d_u[5];
  const mxArray *c_y;
  static char_T e_u[5] = { 'r', 'e', 's', 'e', 't' };

  static const int32_T iv2[2] = { 1, 5 };

  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (!moduleInstance->sysobj_not_empty) {
    st.site = &g_emlrtRSI;
    obj = &moduleInstance->sysobj;
    b_st.site = &b_emlrtRSI;
    c_st.site = &c_emlrtRSI;
    d_st.site = &d_emlrtRSI;
    c_st.site = &c_emlrtRSI;
    obj->isInitialized = 0;
    d_st.site = &e_emlrtRSI;
    b_st.site = &b_emlrtRSI;
    c_st.site = &f_emlrtRSI;
    obj->matlabCodegenIsDeleted = false;
    moduleInstance->sysobj_not_empty = true;
  }

  st.site = &ud_emlrtRSI;
  if (moduleInstance->sysobj.isInitialized == 2) {
    for (i = 0; i < 45; i++) {
      b_u[i] = c_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, iv);
    emlrtInitCharArrayR2013a(&st, 45, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 45; i++) {
      b_u[i] = c_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, iv1);
    emlrtInitCharArrayR2013a(&st, 45, m, &b_u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 5; i++) {
      d_u[i] = e_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, iv2);
    emlrtInitCharArrayR2013a(&st, 5, m, &d_u[0]);
    emlrtAssign(&c_y, m);
    b_st.site = &e_emlrtRSI;
    f_error(&b_st, y, getString(&b_st, message(&b_st, b_y, c_y, &emlrtMCI),
             &emlrtMCI), &emlrtMCI);
  }
}

static void mw__internal__call__step(InstanceStruct_99HJ2LsbXT8ZQdi4PHECuF
  *moduleInstance, const emlrtStack *sp, real_T b_u0[16], real_T b_u1[6], real_T
  b_u2[2], real_T c_y0[2], real_T *y1_Iterations, real_T *y1_PoseErrorNorm,
  uint16_T *y1_ExitFlag, uint8_T *y1_Status)
{
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  robotics_manip_internal_RigidBody *iobj_0;
  robotics_manip_internal_RigidBody *iobj_1;
  robotics_manip_internal_RigidBody *iobj_2;
  robotics_core_internal_DampedBFGSwGradientProjection *iobj_3;
  robotics_manip_internal_IKExtraArgs *iobj_4;
  robotics_manip_internal_RigidBodyTree_1 *iobj_5;
  robotics_manip_internal_RigidBody_1 *iobj_6;
  robotics_manip_internal_RigidBody_1 *iobj_7;
  robotics_manip_internal_RigidBody_1 *iobj_8;
  robotics_manip_internal_RigidBody_1 *iobj_9;
  robotics_manip_internal_RigidBody_1 *iobj_10;
  robotics_manip_internal_RigidBody_1 *iobj_11;
  rigidBodyJoint *iobj_12;
  rigidBodyJoint *iobj_13;
  rigidBodyJoint *iobj_14;
  rigidBodyJoint *iobj_15;
  rigidBodyJoint *iobj_16;
  rigidBodyJoint *iobj_17;
  rigidBodyJoint *iobj_18;
  rigidBodyJoint *iobj_19;
  rigidBodyJoint *iobj_20;
  rigidBodyJoint *iobj_21;
  robotics_slmanip_internal_block_IKBlock *obj;
  char_T b_u[45];
  int32_T kstr;
  const mxArray *y;
  static char_T c_u[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  const mxArray *m;
  static const int32_T iv[2] = { 1, 45 };

  static const int32_T iv1[2] = { 1, 45 };

  const mxArray *b_y;
  real_T QSol[2];
  char_T d_u[51];
  static const int32_T iv2[2] = { 1, 45 };

  char_T solutionInfo_Status_data[14];
  int32_T solutionInfo_Status_size[2];
  char_T e_u[4];
  real_T d;
  real_T expl_temp;
  real_T d1;
  real_T solutionInfo_ExitFlag;
  static char_T f_u[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l', 'e',
    'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  static const int32_T iv3[2] = { 1, 51 };

  static const int32_T iv4[2] = { 1, 45 };

  const mxArray *c_y;
  static char_T g_u[4] = { 's', 't', 'e', 'p' };

  static const int32_T iv5[2] = { 1, 4 };

  boolean_T b_bool;
  static const int32_T iv6[2] = { 1, 51 };

  static const int32_T iv7[2] = { 1, 4 };

  char_T h_u[5];
  int32_T exitg1;
  static char_T cv[7] = { 's', 'u', 'c', 'c', 'e', 's', 's' };

  static char_T i_u[5] = { 's', 'e', 't', 'u', 'p' };

  static const int32_T iv8[2] = { 1, 5 };

  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  iobj_0 = &moduleInstance->gobj_3;
  iobj_1 = &moduleInstance->gobj_4;
  iobj_2 = &moduleInstance->gobj_5;
  iobj_3 = &moduleInstance->gobj_7;
  iobj_4 = &moduleInstance->gobj_8;
  iobj_5 = &moduleInstance->gobj_9;
  iobj_6 = &moduleInstance->gobj_11;
  iobj_7 = &moduleInstance->gobj_12;
  iobj_8 = &moduleInstance->gobj_13;
  iobj_9 = &moduleInstance->gobj_14;
  iobj_10 = &moduleInstance->gobj_15;
  iobj_11 = &moduleInstance->gobj_16;
  iobj_12 = &moduleInstance->gobj_23;
  iobj_13 = &moduleInstance->gobj_24;
  iobj_14 = &moduleInstance->gobj_25;
  iobj_15 = &moduleInstance->gobj_26;
  iobj_16 = &moduleInstance->gobj_27;
  iobj_17 = &moduleInstance->gobj_28;
  iobj_18 = &moduleInstance->gobj_29;
  iobj_19 = &moduleInstance->gobj_30;
  iobj_20 = &moduleInstance->gobj_31;
  iobj_21 = &moduleInstance->gobj_32;
  if (!moduleInstance->sysobj_not_empty) {
    st.site = &g_emlrtRSI;
    obj = &moduleInstance->sysobj;
    b_st.site = &b_emlrtRSI;
    c_st.site = &c_emlrtRSI;
    d_st.site = &d_emlrtRSI;
    c_st.site = &c_emlrtRSI;
    obj->isInitialized = 0;
    d_st.site = &e_emlrtRSI;
    b_st.site = &b_emlrtRSI;
    c_st.site = &f_emlrtRSI;
    obj->matlabCodegenIsDeleted = false;
    moduleInstance->sysobj_not_empty = true;
  }

  st.site = &vd_emlrtRSI;
  obj = &moduleInstance->sysobj;
  if (moduleInstance->sysobj.isInitialized == 2) {
    for (kstr = 0; kstr < 45; kstr++) {
      b_u[kstr] = c_u[kstr];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, iv);
    emlrtInitCharArrayR2013a(&st, 45, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (kstr = 0; kstr < 45; kstr++) {
      b_u[kstr] = c_u[kstr];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, iv2);
    emlrtInitCharArrayR2013a(&st, 45, m, &b_u[0]);
    emlrtAssign(&b_y, m);
    for (kstr = 0; kstr < 4; kstr++) {
      e_u[kstr] = g_u[kstr];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, iv5);
    emlrtInitCharArrayR2013a(&st, 4, m, &e_u[0]);
    emlrtAssign(&c_y, m);
    b_st.site = &e_emlrtRSI;
    f_error(&b_st, y, getString(&b_st, message(&b_st, b_y, c_y, &emlrtMCI),
             &emlrtMCI), &emlrtMCI);
  }

  if (obj->isInitialized != 1) {
    b_st.site = &e_emlrtRSI;
    SystemCore_setupAndReset(moduleInstance, &b_st, obj, iobj_0, iobj_1, iobj_2,
      iobj_3, iobj_5, iobj_6, iobj_7, iobj_8, iobj_9, iobj_10, iobj_11, iobj_12,
      iobj_13, iobj_14, iobj_15, iobj_16, iobj_17, iobj_18, iobj_19, iobj_20,
      iobj_21);
  }

  b_st.site = &e_emlrtRSI;
  c_st.site = &wd_emlrtRSI;
  d_st.site = &e_emlrtRSI;
  if (obj->IKInternal.isInitialized == 2) {
    for (kstr = 0; kstr < 45; kstr++) {
      b_u[kstr] = c_u[kstr];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, iv1);
    emlrtInitCharArrayR2013a(&d_st, 45, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (kstr = 0; kstr < 45; kstr++) {
      b_u[kstr] = c_u[kstr];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, iv4);
    emlrtInitCharArrayR2013a(&d_st, 45, m, &b_u[0]);
    emlrtAssign(&b_y, m);
    for (kstr = 0; kstr < 4; kstr++) {
      e_u[kstr] = g_u[kstr];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, iv7);
    emlrtInitCharArrayR2013a(&d_st, 4, m, &e_u[0]);
    emlrtAssign(&c_y, m);
    e_st.site = &e_emlrtRSI;
    f_error(&e_st, y, getString(&e_st, message(&e_st, b_y, c_y, &emlrtMCI),
             &emlrtMCI), &emlrtMCI);
  }

  if (obj->IKInternal.isInitialized != 1) {
    e_st.site = &e_emlrtRSI;
    f_st.site = &e_emlrtRSI;
    obj->IKInternal.isSetupComplete = false;
    if (obj->IKInternal.isInitialized != 0) {
      for (kstr = 0; kstr < 51; kstr++) {
        d_u[kstr] = f_u[kstr];
      }

      y = NULL;
      m = emlrtCreateCharArray(2, iv3);
      emlrtInitCharArrayR2013a(&f_st, 51, m, &d_u[0]);
      emlrtAssign(&y, m);
      for (kstr = 0; kstr < 51; kstr++) {
        d_u[kstr] = f_u[kstr];
      }

      b_y = NULL;
      m = emlrtCreateCharArray(2, iv6);
      emlrtInitCharArrayR2013a(&f_st, 51, m, &d_u[0]);
      emlrtAssign(&b_y, m);
      for (kstr = 0; kstr < 5; kstr++) {
        h_u[kstr] = i_u[kstr];
      }

      c_y = NULL;
      m = emlrtCreateCharArray(2, iv8);
      emlrtInitCharArrayR2013a(&f_st, 5, m, &h_u[0]);
      emlrtAssign(&c_y, m);
      g_st.site = &e_emlrtRSI;
      f_error(&g_st, y, getString(&g_st, message(&g_st, b_y, c_y, &emlrtMCI),
               &emlrtMCI), &emlrtMCI);
    }

    obj->IKInternal.isInitialized = 1;
    g_st.site = &e_emlrtRSI;
    inverseKinematics_setupImpl(&g_st, &obj->IKInternal, iobj_4);
    obj->IKInternal.isSetupComplete = true;
  }

  e_st.site = &e_emlrtRSI;
  f_st.site = &le_emlrtRSI;
  inverseKinematics_setPoseGoal(&f_st, &obj->IKInternal, b_u0, b_u1);
  f_st.site = &me_emlrtRSI;
  inverseKinematics_solve(moduleInstance, &f_st, &obj->IKInternal, b_u2, QSol,
    &d, &expl_temp, &d1, &solutionInfo_ExitFlag, solutionInfo_Status_data,
    solutionInfo_Status_size);
  *y1_PoseErrorNorm = d1;
  *y1_Iterations = d;
  expl_temp = muDoubleScalarRound(solutionInfo_ExitFlag);
  if (expl_temp < 65536.0) {
    if (expl_temp >= 0.0) {
      *y1_ExitFlag = (uint16_T)expl_temp;
    } else {
      *y1_ExitFlag = 0U;
    }
  } else if (expl_temp >= 65536.0) {
    *y1_ExitFlag = MAX_uint16_T;
  } else {
    *y1_ExitFlag = 0U;
  }

  b_bool = false;
  if (solutionInfo_Status_size[1] == 7) {
    kstr = 1;
    do {
      exitg1 = 0;
      if (kstr - 1 < 7) {
        if (solutionInfo_Status_data[kstr - 1] != cv[kstr - 1]) {
          exitg1 = 1;
        } else {
          kstr++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  if (b_bool) {
    *y1_Status = 1U;
  } else {
    *y1_Status = 2U;
  }

  for (kstr = 0; kstr < 2; kstr++) {
    c_y0[kstr] = QSol[kstr];
  }
}

static void SystemCore_setupAndReset(InstanceStruct_99HJ2LsbXT8ZQdi4PHECuF
  *moduleInstance, const emlrtStack *sp, robotics_slmanip_internal_block_IKBlock
  *obj, robotics_manip_internal_RigidBody *iobj_0,
  robotics_manip_internal_RigidBody *iobj_1, robotics_manip_internal_RigidBody
  *iobj_2, robotics_core_internal_DampedBFGSwGradientProjection *iobj_3,
  robotics_manip_internal_RigidBodyTree_1 *iobj_4,
  robotics_manip_internal_RigidBody_1 *iobj_5,
  robotics_manip_internal_RigidBody_1 *iobj_6,
  robotics_manip_internal_RigidBody_1 *iobj_7,
  robotics_manip_internal_RigidBody_1 *iobj_8,
  robotics_manip_internal_RigidBody_1 *iobj_9,
  robotics_manip_internal_RigidBody_1 *iobj_10, rigidBodyJoint *iobj_11,
  rigidBodyJoint *iobj_12, rigidBodyJoint *iobj_13, rigidBodyJoint *iobj_14,
  rigidBodyJoint *iobj_15, rigidBodyJoint *iobj_16, rigidBodyJoint *iobj_17,
  rigidBodyJoint *iobj_18, rigidBodyJoint *iobj_19, rigidBodyJoint *iobj_20)
{
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
  emlrtStack j_st;
  emlrtStack k_st;
  char_T b_u[51];
  emxArray_char_T *b_basename;
  int32_T i;
  const mxArray *y;
  static char_T c_u[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l', 'e',
    'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *m;
  static const int32_T iv[2] = { 1, 51 };

  inverseKinematics *b_obj;
  const mxArray *b_y;
  static const int32_T iv1[2] = { 1, 51 };

  char_T d_u[5];
  const mxArray *c_y;
  static char_T e_u[5] = { 's', 'e', 't', 'u', 'p' };

  static const int32_T iv2[2] = { 1, 5 };

  robotics_manip_internal_RigidBodyTree_1 *newrobot;
  int32_T loop_ub;
  emxArray_char_T *bname;
  int32_T bid;
  real_T pid;
  int32_T b_i;
  boolean_T exitg1;
  real_T g[3];
  robotics_manip_internal_RigidBody_1 *c_obj;
  robotics_manip_internal_RigidBody *body;
  robotics_manip_internal_RigidBody *parent;
  char_T expl_temp[22];
  real_T b_expl_temp;
  real_T c_expl_temp;
  real_T d_expl_temp;
  real_T e_expl_temp;
  real_T f_expl_temp;
  boolean_T g_expl_temp;
  boolean_T h_expl_temp;
  real_T i_expl_temp;
  robotics_core_internal_DampedBFGSwGradientProjection *d_obj;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &e_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  h_st.prev = &g_st;
  h_st.tls = g_st.tls;
  i_st.prev = &h_st;
  i_st.tls = h_st.tls;
  j_st.prev = &i_st;
  j_st.tls = i_st.tls;
  k_st.prev = &j_st;
  k_st.tls = j_st.tls;
  if (obj->isInitialized != 0) {
    for (i = 0; i < 51; i++) {
      b_u[i] = c_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, iv);
    emlrtInitCharArrayR2013a(&st, 51, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 51; i++) {
      b_u[i] = c_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, iv1);
    emlrtInitCharArrayR2013a(&st, 51, m, &b_u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 5; i++) {
      d_u[i] = e_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, iv2);
    emlrtInitCharArrayR2013a(&st, 5, m, &d_u[0]);
    emlrtAssign(&c_y, m);
    b_st.site = &e_emlrtRSI;
    f_error(&b_st, y, getString(&b_st, message(&b_st, b_y, c_y, &emlrtMCI),
             &emlrtMCI), &emlrtMCI);
  }

  emxInit_char_T(&b_basename, 2);
  obj->isInitialized = 1;
  b_st.site = &e_emlrtRSI;
  c_st.site = &i_emlrtRSI;
  RigidBodyTree_RigidBodyTree(&obj->TreeInternal, iobj_0, iobj_1, iobj_2);
  c_st.site = &j_emlrtRSI;
  b_obj = &obj->IKInternal;
  d_st.site = &t_emlrtRSI;
  e_st.site = &c_emlrtRSI;
  f_st.site = &d_emlrtRSI;
  e_st.site = &c_emlrtRSI;
  obj->IKInternal.isInitialized = 0;
  f_st.site = &e_emlrtRSI;
  d_st.site = &t_emlrtRSI;
  e_st.site = &k_emlrtRSI;
  d_st.site = &u_emlrtRSI;
  e_st.site = &d_emlrtRSI;
  f_st.site = &v_emlrtRSI;
  g_st.site = &v_emlrtRSI;
  h_st.site = &w_emlrtRSI;
  i_st.site = &bb_emlrtRSI;
  newrobot = b_RigidBodyTree_RigidBodyTree(moduleInstance, &i_st, iobj_4,
    iobj_11, iobj_5, iobj_6, iobj_7, iobj_12, iobj_13, iobj_14);
  i_st.site = &x_emlrtRSI;
  j_st.site = &ob_emlrtRSI;
  i = b_basename->size[0] * b_basename->size[1];
  b_basename->size[0] = 1;
  b_basename->size[1] = obj->TreeInternal.Base.NameInternal->size[1];
  emxEnsureCapacity_char_T(b_basename, i);
  loop_ub = obj->TreeInternal.Base.NameInternal->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    b_basename->data[i] = obj->TreeInternal.Base.NameInternal->data[i];
  }

  emxInit_char_T(&bname, 2);
  i_st.site = &x_emlrtRSI;
  j_st.site = &pb_emlrtRSI;
  validateattributes(&j_st, b_basename);
  j_st.site = &qb_emlrtRSI;
  bid = -1;
  k_st.site = &tb_emlrtRSI;
  b_validateattributes(&k_st, b_basename);
  k_st.site = &ub_emlrtRSI;
  i = bname->size[0] * bname->size[1];
  bname->size[0] = 1;
  bname->size[1] = newrobot->Base.NameInternal->size[1];
  emxEnsureCapacity_char_T(bname, i);
  loop_ub = newrobot->Base.NameInternal->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    bname->data[i] = newrobot->Base.NameInternal->data[i];
  }

  if (d_strcmp(bname, b_basename)) {
    bid = 0;
  } else {
    pid = newrobot->NumBodies;
    emlrtForLoopVectorCheckR2012b(1.0, 1.0, pid, mxDOUBLE_CLASS, (int32_T)pid,
      &emlrtRTEI, &j_st);
    b_i = 0;
    exitg1 = false;
    while ((!exitg1) && (b_i <= (int32_T)pid - 1)) {
      k_st.site = &vb_emlrtRSI;
      c_obj = newrobot->Bodies[emlrtDynamicBoundsCheckR2012b(b_i, 0, 2,
        &emlrtBCI, &k_st)];
      i = bname->size[0] * bname->size[1];
      bname->size[0] = 1;
      bname->size[1] = c_obj->NameInternal->size[1];
      emxEnsureCapacity_char_T(bname, i);
      loop_ub = c_obj->NameInternal->size[1] - 1;
      for (i = 0; i <= loop_ub; i++) {
        bname->data[i] = c_obj->NameInternal->data[i];
      }

      if (d_strcmp(bname, b_basename)) {
        bid = b_i + 1;
        exitg1 = true;
      } else {
        b_i++;
      }
    }
  }

  if (bid != 0) {
    if (bid < 0) {
      i = newrobot->Base.NameInternal->size[0] * newrobot->
        Base.NameInternal->size[1];
      newrobot->Base.NameInternal->size[0] = 1;
      newrobot->Base.NameInternal->size[1] = b_basename->size[1];
      emxEnsureCapacity_char_T(newrobot->Base.NameInternal, i);
      loop_ub = b_basename->size[1] - 1;
      for (i = 0; i <= loop_ub; i++) {
        newrobot->Base.NameInternal->data[i] = b_basename->data[i];
      }
    } else {
      j_st.site = &rb_emlrtRSI;
      error(&j_st, b_basename);
    }
  }

  emxFree_char_T(&b_basename);
  i_st.site = &y_emlrtRSI;
  for (i = 0; i < 3; i++) {
    g[i] = obj->TreeInternal.Gravity[i];
  }

  j_st.site = &wb_emlrtRSI;
  c_validateattributes(&j_st, g);
  if (1.0 <= obj->TreeInternal.NumBodies) {
    body = obj->TreeInternal.Bodies[0];
    pid = body->ParentIndex;
    if (pid > 0.0) {
      i = (int32_T)emlrtIntegerCheckR2012b(pid, &emlrtDCI, &h_st) - 1;
      parent = obj->TreeInternal.Bodies[emlrtDynamicBoundsCheckR2012b(i, 0, 2,
        &b_emlrtBCI, &h_st)];
    } else {
      parent = &obj->TreeInternal.Base;
    }

    i_st.site = &ab_emlrtRSI;
    i = bname->size[0] * bname->size[1];
    bname->size[0] = 1;
    bname->size[1] = parent->NameInternal->size[1];
    emxEnsureCapacity_char_T(bname, i);
    loop_ub = parent->NameInternal->size[1] - 1;
    for (i = 0; i <= loop_ub; i++) {
      bname->data[i] = parent->NameInternal->data[i];
    }

    i_st.site = &ab_emlrtRSI;
    d_RigidBodyTree_addBody(&i_st, newrobot, body, bname, iobj_8, iobj_15,
      iobj_16);
  }

  if (2.0 <= obj->TreeInternal.NumBodies) {
    body = obj->TreeInternal.Bodies[1];
    pid = body->ParentIndex;
    if (pid > 0.0) {
      i = (int32_T)emlrtIntegerCheckR2012b(pid, &emlrtDCI, &h_st) - 1;
      parent = obj->TreeInternal.Bodies[emlrtDynamicBoundsCheckR2012b(i, 0, 2,
        &b_emlrtBCI, &h_st)];
    } else {
      parent = &obj->TreeInternal.Base;
    }

    i_st.site = &ab_emlrtRSI;
    i = bname->size[0] * bname->size[1];
    bname->size[0] = 1;
    bname->size[1] = parent->NameInternal->size[1];
    emxEnsureCapacity_char_T(bname, i);
    loop_ub = parent->NameInternal->size[1] - 1;
    for (i = 0; i <= loop_ub; i++) {
      bname->data[i] = parent->NameInternal->data[i];
    }

    i_st.site = &ab_emlrtRSI;
    e_RigidBodyTree_addBody(&i_st, newrobot, body, bname, iobj_9, iobj_17,
      iobj_18);
  }

  if (3.0 <= obj->TreeInternal.NumBodies) {
    body = obj->TreeInternal.Bodies[2];
    pid = body->ParentIndex;
    if (pid > 0.0) {
      i = (int32_T)emlrtIntegerCheckR2012b(pid, &emlrtDCI, &h_st) - 1;
      parent = obj->TreeInternal.Bodies[emlrtDynamicBoundsCheckR2012b(i, 0, 2,
        &b_emlrtBCI, &h_st)];
    } else {
      parent = &obj->TreeInternal.Base;
    }

    i_st.site = &ab_emlrtRSI;
    i = bname->size[0] * bname->size[1];
    bname->size[0] = 1;
    bname->size[1] = parent->NameInternal->size[1];
    emxEnsureCapacity_char_T(bname, i);
    loop_ub = parent->NameInternal->size[1] - 1;
    for (i = 0; i <= loop_ub; i++) {
      bname->data[i] = parent->NameInternal->data[i];
    }

    i_st.site = &ab_emlrtRSI;
    f_RigidBodyTree_addBody(&i_st, newrobot, body, bname, iobj_10, iobj_19,
      iobj_20);
  }

  emxFree_char_T(&bname);
  b_obj->RigidBodyTreeInternal = newrobot;
  g_st.site = &v_emlrtRSI;
  h_st.site = &kd_emlrtRSI;
  b_obj->Solver = DampedBFGSwGradientProjection_DampedBFGSwGradientProjection
    (iobj_3);
  g_st.site = &v_emlrtRSI;
  h_st.site = &d_emlrtRSI;
  g_st.site = &v_emlrtRSI;
  h_st.site = &sd_emlrtRSI;
  DampedBFGSwGradientProjection_getSolverParams(b_obj->Solver, expl_temp, &pid,
    &b_expl_temp, &c_expl_temp, &d_expl_temp, &e_expl_temp, &f_expl_temp,
    &g_expl_temp, &h_expl_temp, &i_expl_temp);
  h_st.site = &td_emlrtRSI;
  d_obj = b_obj->Solver;
  d_obj->MaxNumIteration = 1500.0;
  d_obj->MaxTime = 10.0;
  d_obj->GradientTolerance = 1.0E-7;
  d_obj->SolutionTolerance = 1.0E-6;
  d_obj->ConstraintsOn = true;
  d_obj->RandomRestart = false;
  d_obj->StepTolerance = 1.0E-14;
  b_obj->matlabCodegenIsDeleted = false;
}

static void d_RigidBodyTree_addBody(const emlrtStack *sp,
  robotics_manip_internal_RigidBodyTree_1 *obj,
  robotics_manip_internal_RigidBody *bodyin, emxArray_char_T *parentName,
  robotics_manip_internal_RigidBody_1 *iobj_0, rigidBodyJoint *iobj_1,
  rigidBodyJoint *iobj_2)
{
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emxArray_char_T *bname;
  int32_T i;
  int32_T loop_ub;
  emxArray_char_T *b_bname;
  int32_T bid;
  real_T b_index;
  int32_T b_i;
  boolean_T exitg1;
  robotics_manip_internal_RigidBody_1 *body;
  int32_T bid2;
  rigidBodyJoint *jnt;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emxInit_char_T(&bname, 2);
  st.site = &xb_emlrtRSI;
  i = bname->size[0] * bname->size[1];
  bname->size[0] = 1;
  bname->size[1] = bodyin->NameInternal->size[1];
  emxEnsureCapacity_char_T(bname, i);
  loop_ub = bodyin->NameInternal->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    bname->data[i] = bodyin->NameInternal->data[i];
  }

  emxInit_char_T(&b_bname, 2);
  st.site = &xb_emlrtRSI;
  bid = -2;
  b_st.site = &tb_emlrtRSI;
  b_validateattributes(&b_st, bname);
  b_st.site = &ub_emlrtRSI;
  i = b_bname->size[0] * b_bname->size[1];
  b_bname->size[0] = 1;
  b_bname->size[1] = obj->Base.NameInternal->size[1];
  emxEnsureCapacity_char_T(b_bname, i);
  loop_ub = obj->Base.NameInternal->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    b_bname->data[i] = obj->Base.NameInternal->data[i];
  }

  if (d_strcmp(b_bname, bname)) {
    bid = -1;
  } else {
    b_index = obj->NumBodies;
    emlrtForLoopVectorCheckR2012b(1.0, 1.0, b_index, mxDOUBLE_CLASS, (int32_T)
      b_index, &emlrtRTEI, &st);
    b_i = 0;
    exitg1 = false;
    while ((!exitg1) && (b_i <= (int32_T)b_index - 1)) {
      b_st.site = &vb_emlrtRSI;
      body = obj->Bodies[emlrtDynamicBoundsCheckR2012b(b_i, 0, 2, &emlrtBCI,
        &b_st)];
      i = b_bname->size[0] * b_bname->size[1];
      b_bname->size[0] = 1;
      b_bname->size[1] = body->NameInternal->size[1];
      emxEnsureCapacity_char_T(b_bname, i);
      loop_ub = body->NameInternal->size[1] - 1;
      for (i = 0; i <= loop_ub; i++) {
        b_bname->data[i] = body->NameInternal->data[i];
      }

      if (d_strcmp(b_bname, bname)) {
        bid = b_i;
        exitg1 = true;
      } else {
        b_i++;
      }
    }
  }

  if (bid + 1 > -1) {
    st.site = &yb_emlrtRSI;
    i = bname->size[0] * bname->size[1];
    bname->size[0] = 1;
    bname->size[1] = bodyin->NameInternal->size[1];
    emxEnsureCapacity_char_T(bname, i);
    loop_ub = bodyin->NameInternal->size[1] - 1;
    for (i = 0; i <= loop_ub; i++) {
      bname->data[i] = bodyin->NameInternal->data[i];
    }

    st.site = &yb_emlrtRSI;
    b_error(&st, bname);
  }

  st.site = &ac_emlrtRSI;
  b_st.site = &jc_emlrtRSI;
  bid = -1;
  c_st.site = &tb_emlrtRSI;
  b_validateattributes(&c_st, parentName);
  c_st.site = &ub_emlrtRSI;
  i = bname->size[0] * bname->size[1];
  bname->size[0] = 1;
  bname->size[1] = obj->Base.NameInternal->size[1];
  emxEnsureCapacity_char_T(bname, i);
  loop_ub = obj->Base.NameInternal->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    bname->data[i] = obj->Base.NameInternal->data[i];
  }

  if (d_strcmp(bname, parentName)) {
    bid = 0;
  } else {
    b_index = obj->NumBodies;
    emlrtForLoopVectorCheckR2012b(1.0, 1.0, b_index, mxDOUBLE_CLASS, (int32_T)
      b_index, &emlrtRTEI, &b_st);
    b_i = 0;
    exitg1 = false;
    while ((!exitg1) && (b_i <= (int32_T)b_index - 1)) {
      c_st.site = &vb_emlrtRSI;
      body = obj->Bodies[emlrtDynamicBoundsCheckR2012b(b_i, 0, 2, &emlrtBCI,
        &c_st)];
      i = bname->size[0] * bname->size[1];
      bname->size[0] = 1;
      bname->size[1] = body->NameInternal->size[1];
      emxEnsureCapacity_char_T(bname, i);
      loop_ub = body->NameInternal->size[1] - 1;
      for (i = 0; i <= loop_ub; i++) {
        bname->data[i] = body->NameInternal->data[i];
      }

      if (d_strcmp(bname, parentName)) {
        bid = b_i + 1;
        exitg1 = true;
      } else {
        b_i++;
      }
    }
  }

  if (bid == -1) {
    b_st.site = &kc_emlrtRSI;
    c_error(&b_st, parentName);
  }

  st.site = &bc_emlrtRSI;
  if (bodyin->Index == 0.0) {
    b_st.site = &lc_emlrtRSI;
    d_error(&b_st);
  }

  st.site = &bc_emlrtRSI;
  i = bname->size[0] * bname->size[1];
  bname->size[0] = 1;
  bname->size[1] = bodyin->JointInternal.NameInternal->size[1];
  emxEnsureCapacity_char_T(bname, i);
  loop_ub = bodyin->JointInternal.NameInternal->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    bname->data[i] = bodyin->JointInternal.NameInternal->data[i];
  }

  st.site = &bc_emlrtRSI;
  bid2 = -2;
  b_st.site = &mc_emlrtRSI;
  d_validateattributes(&b_st, bname);
  b_index = obj->NumBodies;
  emlrtForLoopVectorCheckR2012b(1.0, 1.0, b_index, mxDOUBLE_CLASS, (int32_T)
    b_index, &b_emlrtRTEI, &st);
  b_i = 0;
  exitg1 = false;
  while ((!exitg1) && (b_i <= (int32_T)b_index - 1)) {
    b_st.site = &nc_emlrtRSI;
    body = obj->Bodies[emlrtDynamicBoundsCheckR2012b(b_i, 0, 2, &j_emlrtBCI,
      &b_st)];
    if (body->Index == 0.0) {
      c_st.site = &lc_emlrtRSI;
      d_error(&c_st);
    }

    jnt = body->JointInternal;
    b_st.site = &nc_emlrtRSI;
    i = b_bname->size[0] * b_bname->size[1];
    b_bname->size[0] = 1;
    b_bname->size[1] = jnt->NameInternal->size[1];
    emxEnsureCapacity_char_T(b_bname, i);
    loop_ub = jnt->NameInternal->size[1] - 1;
    for (i = 0; i <= loop_ub; i++) {
      b_bname->data[i] = jnt->NameInternal->data[i];
    }

    if (d_strcmp(b_bname, bname)) {
      bid2 = b_i;
      exitg1 = true;
    } else {
      b_i++;
    }
  }

  emxFree_char_T(&b_bname);
  if (bid2 + 1 > 0) {
    st.site = &cc_emlrtRSI;
    if (bodyin->Index == 0.0) {
      b_st.site = &lc_emlrtRSI;
      d_error(&b_st);
    }

    st.site = &cc_emlrtRSI;
    i = bname->size[0] * bname->size[1];
    bname->size[0] = 1;
    bname->size[1] = bodyin->JointInternal.NameInternal->size[1];
    emxEnsureCapacity_char_T(bname, i);
    loop_ub = bodyin->JointInternal.NameInternal->size[1] - 1;
    for (i = 0; i <= loop_ub; i++) {
      bname->data[i] = bodyin->JointInternal.NameInternal->data[i];
    }

    st.site = &cc_emlrtRSI;
    e_error(&st, bname);
  }

  emxFree_char_T(&bname);
  b_index = obj->NumBodies + 1.0;
  st.site = &ic_emlrtRSI;
  body = RigidBody_copy(&st, bodyin, iobj_0, iobj_1, iobj_2);
  i = (int32_T)emlrtIntegerCheckR2012b(b_index, &c_emlrtDCI, sp) - 1;
  obj->Bodies[emlrtDynamicBoundsCheckR2012b(i, 0, 2, &i_emlrtBCI, sp)] = body;
  body->Index = b_index;
  body->ParentIndex = (real_T)bid;
  i = (int32_T)emlrtIntegerCheckR2012b(body->Index, &d_emlrtDCI, sp);
  emlrtDynamicBoundsCheckR2012b(i, 1, 3, &d_emlrtBCI, sp);
  body->JointInternal->InTree = true;
  obj->NumBodies++;
  st.site = &dc_emlrtRSI;
  if (body->Index == 0.0) {
    b_st.site = &lc_emlrtRSI;
    d_error(&b_st);
  }

  jnt = body->JointInternal;
  if (!e_strcmp(jnt->Type)) {
    obj->NumNonFixedBodies++;
    st.site = &ec_emlrtRSI;
    if (body->Index == 0.0) {
      b_st.site = &lc_emlrtRSI;
      d_error(&b_st);
    }

    jnt = body->JointInternal;
    i = (int32_T)emlrtIntegerCheckR2012b(body->Index, &e_emlrtDCI, sp);
    bid = emlrtDynamicBoundsCheckR2012b(i, 1, 3, &e_emlrtBCI, sp) - 1;
    obj->PositionDoFMap[bid] = obj->PositionNumber + 1.0;
    obj->PositionDoFMap[bid + 3] = obj->PositionNumber + jnt->PositionNumber;
    st.site = &fc_emlrtRSI;
    if (body->Index == 0.0) {
      b_st.site = &lc_emlrtRSI;
      d_error(&b_st);
    }

    jnt = body->JointInternal;
    i = (int32_T)emlrtIntegerCheckR2012b(body->Index, &f_emlrtDCI, sp);
    bid = emlrtDynamicBoundsCheckR2012b(i, 1, 3, &f_emlrtBCI, sp) - 1;
    obj->VelocityDoFMap[bid] = obj->VelocityNumber + 1.0;
    obj->VelocityDoFMap[bid + 3] = obj->VelocityNumber + jnt->VelocityNumber;
  } else {
    i = (int32_T)emlrtIntegerCheckR2012b(body->Index, &g_emlrtDCI, sp);
    bid = emlrtDynamicBoundsCheckR2012b(i, 1, 3, &g_emlrtBCI, sp);
    for (i = 0; i < 2; i++) {
      obj->PositionDoFMap[(bid + 3 * i) - 1] = 0.0 - (real_T)i;
    }

    i = (int32_T)emlrtIntegerCheckR2012b(body->Index, &h_emlrtDCI, sp);
    bid = emlrtDynamicBoundsCheckR2012b(i, 1, 3, &h_emlrtBCI, sp);
    for (i = 0; i < 2; i++) {
      obj->VelocityDoFMap[(bid + 3 * i) - 1] = 0.0 - (real_T)i;
    }
  }

  st.site = &gc_emlrtRSI;
  if (body->Index == 0.0) {
    b_st.site = &lc_emlrtRSI;
    d_error(&b_st);
  }

  jnt = body->JointInternal;
  obj->PositionNumber += jnt->PositionNumber;
  st.site = &hc_emlrtRSI;
  if (body->Index == 0.0) {
    b_st.site = &lc_emlrtRSI;
    d_error(&b_st);
  }

  jnt = body->JointInternal;
  obj->VelocityNumber += jnt->VelocityNumber;
}

static void e_RigidBodyTree_addBody(const emlrtStack *sp,
  robotics_manip_internal_RigidBodyTree_1 *obj,
  robotics_manip_internal_RigidBody *bodyin, emxArray_char_T *parentName,
  robotics_manip_internal_RigidBody_1 *iobj_0, rigidBodyJoint *iobj_1,
  rigidBodyJoint *iobj_2)
{
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emxArray_char_T *bname;
  int32_T i;
  int32_T loop_ub;
  emxArray_char_T *b_bname;
  int32_T bid;
  real_T b_index;
  int32_T b_i;
  boolean_T exitg1;
  robotics_manip_internal_RigidBody_1 *body;
  int32_T bid2;
  rigidBodyJoint *jnt;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emxInit_char_T(&bname, 2);
  st.site = &xb_emlrtRSI;
  i = bname->size[0] * bname->size[1];
  bname->size[0] = 1;
  bname->size[1] = bodyin->NameInternal->size[1];
  emxEnsureCapacity_char_T(bname, i);
  loop_ub = bodyin->NameInternal->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    bname->data[i] = bodyin->NameInternal->data[i];
  }

  emxInit_char_T(&b_bname, 2);
  st.site = &xb_emlrtRSI;
  bid = -2;
  b_st.site = &tb_emlrtRSI;
  b_validateattributes(&b_st, bname);
  b_st.site = &ub_emlrtRSI;
  i = b_bname->size[0] * b_bname->size[1];
  b_bname->size[0] = 1;
  b_bname->size[1] = obj->Base.NameInternal->size[1];
  emxEnsureCapacity_char_T(b_bname, i);
  loop_ub = obj->Base.NameInternal->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    b_bname->data[i] = obj->Base.NameInternal->data[i];
  }

  if (d_strcmp(b_bname, bname)) {
    bid = -1;
  } else {
    b_index = obj->NumBodies;
    emlrtForLoopVectorCheckR2012b(1.0, 1.0, b_index, mxDOUBLE_CLASS, (int32_T)
      b_index, &emlrtRTEI, &st);
    b_i = 0;
    exitg1 = false;
    while ((!exitg1) && (b_i <= (int32_T)b_index - 1)) {
      b_st.site = &vb_emlrtRSI;
      body = obj->Bodies[emlrtDynamicBoundsCheckR2012b(b_i, 0, 2, &emlrtBCI,
        &b_st)];
      i = b_bname->size[0] * b_bname->size[1];
      b_bname->size[0] = 1;
      b_bname->size[1] = body->NameInternal->size[1];
      emxEnsureCapacity_char_T(b_bname, i);
      loop_ub = body->NameInternal->size[1] - 1;
      for (i = 0; i <= loop_ub; i++) {
        b_bname->data[i] = body->NameInternal->data[i];
      }

      if (d_strcmp(b_bname, bname)) {
        bid = b_i;
        exitg1 = true;
      } else {
        b_i++;
      }
    }
  }

  if (bid + 1 > -1) {
    st.site = &yb_emlrtRSI;
    i = bname->size[0] * bname->size[1];
    bname->size[0] = 1;
    bname->size[1] = bodyin->NameInternal->size[1];
    emxEnsureCapacity_char_T(bname, i);
    loop_ub = bodyin->NameInternal->size[1] - 1;
    for (i = 0; i <= loop_ub; i++) {
      bname->data[i] = bodyin->NameInternal->data[i];
    }

    st.site = &yb_emlrtRSI;
    b_error(&st, bname);
  }

  st.site = &ac_emlrtRSI;
  b_st.site = &jc_emlrtRSI;
  bid = -1;
  c_st.site = &tb_emlrtRSI;
  b_validateattributes(&c_st, parentName);
  c_st.site = &ub_emlrtRSI;
  i = bname->size[0] * bname->size[1];
  bname->size[0] = 1;
  bname->size[1] = obj->Base.NameInternal->size[1];
  emxEnsureCapacity_char_T(bname, i);
  loop_ub = obj->Base.NameInternal->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    bname->data[i] = obj->Base.NameInternal->data[i];
  }

  if (d_strcmp(bname, parentName)) {
    bid = 0;
  } else {
    b_index = obj->NumBodies;
    emlrtForLoopVectorCheckR2012b(1.0, 1.0, b_index, mxDOUBLE_CLASS, (int32_T)
      b_index, &emlrtRTEI, &b_st);
    b_i = 0;
    exitg1 = false;
    while ((!exitg1) && (b_i <= (int32_T)b_index - 1)) {
      c_st.site = &vb_emlrtRSI;
      body = obj->Bodies[emlrtDynamicBoundsCheckR2012b(b_i, 0, 2, &emlrtBCI,
        &c_st)];
      i = bname->size[0] * bname->size[1];
      bname->size[0] = 1;
      bname->size[1] = body->NameInternal->size[1];
      emxEnsureCapacity_char_T(bname, i);
      loop_ub = body->NameInternal->size[1] - 1;
      for (i = 0; i <= loop_ub; i++) {
        bname->data[i] = body->NameInternal->data[i];
      }

      if (d_strcmp(bname, parentName)) {
        bid = b_i + 1;
        exitg1 = true;
      } else {
        b_i++;
      }
    }
  }

  if (bid == -1) {
    b_st.site = &kc_emlrtRSI;
    c_error(&b_st, parentName);
  }

  st.site = &bc_emlrtRSI;
  if (bodyin->Index == 0.0) {
    b_st.site = &lc_emlrtRSI;
    d_error(&b_st);
  }

  st.site = &bc_emlrtRSI;
  i = bname->size[0] * bname->size[1];
  bname->size[0] = 1;
  bname->size[1] = bodyin->JointInternal.NameInternal->size[1];
  emxEnsureCapacity_char_T(bname, i);
  loop_ub = bodyin->JointInternal.NameInternal->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    bname->data[i] = bodyin->JointInternal.NameInternal->data[i];
  }

  st.site = &bc_emlrtRSI;
  bid2 = -2;
  b_st.site = &mc_emlrtRSI;
  d_validateattributes(&b_st, bname);
  b_index = obj->NumBodies;
  emlrtForLoopVectorCheckR2012b(1.0, 1.0, b_index, mxDOUBLE_CLASS, (int32_T)
    b_index, &b_emlrtRTEI, &st);
  b_i = 0;
  exitg1 = false;
  while ((!exitg1) && (b_i <= (int32_T)b_index - 1)) {
    b_st.site = &nc_emlrtRSI;
    body = obj->Bodies[emlrtDynamicBoundsCheckR2012b(b_i, 0, 2, &j_emlrtBCI,
      &b_st)];
    if (body->Index == 0.0) {
      c_st.site = &lc_emlrtRSI;
      d_error(&c_st);
    }

    jnt = body->JointInternal;
    b_st.site = &nc_emlrtRSI;
    i = b_bname->size[0] * b_bname->size[1];
    b_bname->size[0] = 1;
    b_bname->size[1] = jnt->NameInternal->size[1];
    emxEnsureCapacity_char_T(b_bname, i);
    loop_ub = jnt->NameInternal->size[1] - 1;
    for (i = 0; i <= loop_ub; i++) {
      b_bname->data[i] = jnt->NameInternal->data[i];
    }

    if (d_strcmp(b_bname, bname)) {
      bid2 = b_i;
      exitg1 = true;
    } else {
      b_i++;
    }
  }

  emxFree_char_T(&b_bname);
  if (bid2 + 1 > 0) {
    st.site = &cc_emlrtRSI;
    if (bodyin->Index == 0.0) {
      b_st.site = &lc_emlrtRSI;
      d_error(&b_st);
    }

    st.site = &cc_emlrtRSI;
    i = bname->size[0] * bname->size[1];
    bname->size[0] = 1;
    bname->size[1] = bodyin->JointInternal.NameInternal->size[1];
    emxEnsureCapacity_char_T(bname, i);
    loop_ub = bodyin->JointInternal.NameInternal->size[1] - 1;
    for (i = 0; i <= loop_ub; i++) {
      bname->data[i] = bodyin->JointInternal.NameInternal->data[i];
    }

    st.site = &cc_emlrtRSI;
    e_error(&st, bname);
  }

  emxFree_char_T(&bname);
  b_index = obj->NumBodies + 1.0;
  st.site = &ic_emlrtRSI;
  body = RigidBody_copy(&st, bodyin, iobj_0, iobj_1, iobj_2);
  i = (int32_T)emlrtIntegerCheckR2012b(b_index, &c_emlrtDCI, sp) - 1;
  obj->Bodies[emlrtDynamicBoundsCheckR2012b(i, 0, 2, &i_emlrtBCI, sp)] = body;
  body->Index = b_index;
  body->ParentIndex = (real_T)bid;
  i = (int32_T)emlrtIntegerCheckR2012b(body->Index, &d_emlrtDCI, sp);
  emlrtDynamicBoundsCheckR2012b(i, 1, 3, &d_emlrtBCI, sp);
  body->JointInternal->InTree = true;
  obj->NumBodies++;
  st.site = &dc_emlrtRSI;
  if (body->Index == 0.0) {
    b_st.site = &lc_emlrtRSI;
    d_error(&b_st);
  }

  jnt = body->JointInternal;
  if (!e_strcmp(jnt->Type)) {
    obj->NumNonFixedBodies++;
    st.site = &ec_emlrtRSI;
    if (body->Index == 0.0) {
      b_st.site = &lc_emlrtRSI;
      d_error(&b_st);
    }

    jnt = body->JointInternal;
    i = (int32_T)emlrtIntegerCheckR2012b(body->Index, &e_emlrtDCI, sp);
    bid = emlrtDynamicBoundsCheckR2012b(i, 1, 3, &e_emlrtBCI, sp) - 1;
    obj->PositionDoFMap[bid] = obj->PositionNumber + 1.0;
    obj->PositionDoFMap[bid + 3] = obj->PositionNumber + jnt->PositionNumber;
    st.site = &fc_emlrtRSI;
    if (body->Index == 0.0) {
      b_st.site = &lc_emlrtRSI;
      d_error(&b_st);
    }

    jnt = body->JointInternal;
    i = (int32_T)emlrtIntegerCheckR2012b(body->Index, &f_emlrtDCI, sp);
    bid = emlrtDynamicBoundsCheckR2012b(i, 1, 3, &f_emlrtBCI, sp) - 1;
    obj->VelocityDoFMap[bid] = obj->VelocityNumber + 1.0;
    obj->VelocityDoFMap[bid + 3] = obj->VelocityNumber + jnt->VelocityNumber;
  } else {
    i = (int32_T)emlrtIntegerCheckR2012b(body->Index, &g_emlrtDCI, sp);
    bid = emlrtDynamicBoundsCheckR2012b(i, 1, 3, &g_emlrtBCI, sp);
    for (i = 0; i < 2; i++) {
      obj->PositionDoFMap[(bid + 3 * i) - 1] = 0.0 - (real_T)i;
    }

    i = (int32_T)emlrtIntegerCheckR2012b(body->Index, &h_emlrtDCI, sp);
    bid = emlrtDynamicBoundsCheckR2012b(i, 1, 3, &h_emlrtBCI, sp);
    for (i = 0; i < 2; i++) {
      obj->VelocityDoFMap[(bid + 3 * i) - 1] = 0.0 - (real_T)i;
    }
  }

  st.site = &gc_emlrtRSI;
  if (body->Index == 0.0) {
    b_st.site = &lc_emlrtRSI;
    d_error(&b_st);
  }

  jnt = body->JointInternal;
  obj->PositionNumber += jnt->PositionNumber;
  st.site = &hc_emlrtRSI;
  if (body->Index == 0.0) {
    b_st.site = &lc_emlrtRSI;
    d_error(&b_st);
  }

  jnt = body->JointInternal;
  obj->VelocityNumber += jnt->VelocityNumber;
}

static void f_RigidBodyTree_addBody(const emlrtStack *sp,
  robotics_manip_internal_RigidBodyTree_1 *obj,
  robotics_manip_internal_RigidBody *bodyin, emxArray_char_T *parentName,
  robotics_manip_internal_RigidBody_1 *iobj_0, rigidBodyJoint *iobj_1,
  rigidBodyJoint *iobj_2)
{
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emxArray_char_T *bname;
  int32_T i;
  int32_T loop_ub;
  emxArray_char_T *b_bname;
  int32_T bid;
  real_T b_index;
  int32_T b_i;
  boolean_T exitg1;
  robotics_manip_internal_RigidBody_1 *body;
  int32_T bid2;
  rigidBodyJoint *jnt;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emxInit_char_T(&bname, 2);
  st.site = &xb_emlrtRSI;
  i = bname->size[0] * bname->size[1];
  bname->size[0] = 1;
  bname->size[1] = bodyin->NameInternal->size[1];
  emxEnsureCapacity_char_T(bname, i);
  loop_ub = bodyin->NameInternal->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    bname->data[i] = bodyin->NameInternal->data[i];
  }

  emxInit_char_T(&b_bname, 2);
  st.site = &xb_emlrtRSI;
  bid = -2;
  b_st.site = &tb_emlrtRSI;
  b_validateattributes(&b_st, bname);
  b_st.site = &ub_emlrtRSI;
  i = b_bname->size[0] * b_bname->size[1];
  b_bname->size[0] = 1;
  b_bname->size[1] = obj->Base.NameInternal->size[1];
  emxEnsureCapacity_char_T(b_bname, i);
  loop_ub = obj->Base.NameInternal->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    b_bname->data[i] = obj->Base.NameInternal->data[i];
  }

  if (d_strcmp(b_bname, bname)) {
    bid = -1;
  } else {
    b_index = obj->NumBodies;
    emlrtForLoopVectorCheckR2012b(1.0, 1.0, b_index, mxDOUBLE_CLASS, (int32_T)
      b_index, &emlrtRTEI, &st);
    b_i = 0;
    exitg1 = false;
    while ((!exitg1) && (b_i <= (int32_T)b_index - 1)) {
      b_st.site = &vb_emlrtRSI;
      body = obj->Bodies[emlrtDynamicBoundsCheckR2012b(b_i, 0, 2, &emlrtBCI,
        &b_st)];
      i = b_bname->size[0] * b_bname->size[1];
      b_bname->size[0] = 1;
      b_bname->size[1] = body->NameInternal->size[1];
      emxEnsureCapacity_char_T(b_bname, i);
      loop_ub = body->NameInternal->size[1] - 1;
      for (i = 0; i <= loop_ub; i++) {
        b_bname->data[i] = body->NameInternal->data[i];
      }

      if (d_strcmp(b_bname, bname)) {
        bid = b_i;
        exitg1 = true;
      } else {
        b_i++;
      }
    }
  }

  if (bid + 1 > -1) {
    st.site = &yb_emlrtRSI;
    i = bname->size[0] * bname->size[1];
    bname->size[0] = 1;
    bname->size[1] = bodyin->NameInternal->size[1];
    emxEnsureCapacity_char_T(bname, i);
    loop_ub = bodyin->NameInternal->size[1] - 1;
    for (i = 0; i <= loop_ub; i++) {
      bname->data[i] = bodyin->NameInternal->data[i];
    }

    st.site = &yb_emlrtRSI;
    b_error(&st, bname);
  }

  st.site = &ac_emlrtRSI;
  b_st.site = &jc_emlrtRSI;
  bid = -1;
  c_st.site = &tb_emlrtRSI;
  b_validateattributes(&c_st, parentName);
  c_st.site = &ub_emlrtRSI;
  i = bname->size[0] * bname->size[1];
  bname->size[0] = 1;
  bname->size[1] = obj->Base.NameInternal->size[1];
  emxEnsureCapacity_char_T(bname, i);
  loop_ub = obj->Base.NameInternal->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    bname->data[i] = obj->Base.NameInternal->data[i];
  }

  if (d_strcmp(bname, parentName)) {
    bid = 0;
  } else {
    b_index = obj->NumBodies;
    emlrtForLoopVectorCheckR2012b(1.0, 1.0, b_index, mxDOUBLE_CLASS, (int32_T)
      b_index, &emlrtRTEI, &b_st);
    b_i = 0;
    exitg1 = false;
    while ((!exitg1) && (b_i <= (int32_T)b_index - 1)) {
      c_st.site = &vb_emlrtRSI;
      body = obj->Bodies[emlrtDynamicBoundsCheckR2012b(b_i, 0, 2, &emlrtBCI,
        &c_st)];
      i = bname->size[0] * bname->size[1];
      bname->size[0] = 1;
      bname->size[1] = body->NameInternal->size[1];
      emxEnsureCapacity_char_T(bname, i);
      loop_ub = body->NameInternal->size[1] - 1;
      for (i = 0; i <= loop_ub; i++) {
        bname->data[i] = body->NameInternal->data[i];
      }

      if (d_strcmp(bname, parentName)) {
        bid = b_i + 1;
        exitg1 = true;
      } else {
        b_i++;
      }
    }
  }

  if (bid == -1) {
    b_st.site = &kc_emlrtRSI;
    c_error(&b_st, parentName);
  }

  st.site = &bc_emlrtRSI;
  if (bodyin->Index == 0.0) {
    b_st.site = &lc_emlrtRSI;
    d_error(&b_st);
  }

  st.site = &bc_emlrtRSI;
  i = bname->size[0] * bname->size[1];
  bname->size[0] = 1;
  bname->size[1] = bodyin->JointInternal.NameInternal->size[1];
  emxEnsureCapacity_char_T(bname, i);
  loop_ub = bodyin->JointInternal.NameInternal->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    bname->data[i] = bodyin->JointInternal.NameInternal->data[i];
  }

  st.site = &bc_emlrtRSI;
  bid2 = -2;
  b_st.site = &mc_emlrtRSI;
  d_validateattributes(&b_st, bname);
  b_index = obj->NumBodies;
  emlrtForLoopVectorCheckR2012b(1.0, 1.0, b_index, mxDOUBLE_CLASS, (int32_T)
    b_index, &b_emlrtRTEI, &st);
  b_i = 0;
  exitg1 = false;
  while ((!exitg1) && (b_i <= (int32_T)b_index - 1)) {
    b_st.site = &nc_emlrtRSI;
    body = obj->Bodies[emlrtDynamicBoundsCheckR2012b(b_i, 0, 2, &j_emlrtBCI,
      &b_st)];
    if (body->Index == 0.0) {
      c_st.site = &lc_emlrtRSI;
      d_error(&c_st);
    }

    jnt = body->JointInternal;
    b_st.site = &nc_emlrtRSI;
    i = b_bname->size[0] * b_bname->size[1];
    b_bname->size[0] = 1;
    b_bname->size[1] = jnt->NameInternal->size[1];
    emxEnsureCapacity_char_T(b_bname, i);
    loop_ub = jnt->NameInternal->size[1] - 1;
    for (i = 0; i <= loop_ub; i++) {
      b_bname->data[i] = jnt->NameInternal->data[i];
    }

    if (d_strcmp(b_bname, bname)) {
      bid2 = b_i;
      exitg1 = true;
    } else {
      b_i++;
    }
  }

  emxFree_char_T(&b_bname);
  if (bid2 + 1 > 0) {
    st.site = &cc_emlrtRSI;
    if (bodyin->Index == 0.0) {
      b_st.site = &lc_emlrtRSI;
      d_error(&b_st);
    }

    st.site = &cc_emlrtRSI;
    i = bname->size[0] * bname->size[1];
    bname->size[0] = 1;
    bname->size[1] = bodyin->JointInternal.NameInternal->size[1];
    emxEnsureCapacity_char_T(bname, i);
    loop_ub = bodyin->JointInternal.NameInternal->size[1] - 1;
    for (i = 0; i <= loop_ub; i++) {
      bname->data[i] = bodyin->JointInternal.NameInternal->data[i];
    }

    st.site = &cc_emlrtRSI;
    e_error(&st, bname);
  }

  emxFree_char_T(&bname);
  b_index = obj->NumBodies + 1.0;
  st.site = &ic_emlrtRSI;
  body = RigidBody_copy(&st, bodyin, iobj_0, iobj_1, iobj_2);
  i = (int32_T)emlrtIntegerCheckR2012b(b_index, &c_emlrtDCI, sp) - 1;
  obj->Bodies[emlrtDynamicBoundsCheckR2012b(i, 0, 2, &i_emlrtBCI, sp)] = body;
  body->Index = b_index;
  body->ParentIndex = (real_T)bid;
  i = (int32_T)emlrtIntegerCheckR2012b(body->Index, &d_emlrtDCI, sp);
  emlrtDynamicBoundsCheckR2012b(i, 1, 3, &d_emlrtBCI, sp);
  body->JointInternal->InTree = true;
  obj->NumBodies++;
  st.site = &dc_emlrtRSI;
  if (body->Index == 0.0) {
    b_st.site = &lc_emlrtRSI;
    d_error(&b_st);
  }

  jnt = body->JointInternal;
  if (!e_strcmp(jnt->Type)) {
    obj->NumNonFixedBodies++;
    st.site = &ec_emlrtRSI;
    if (body->Index == 0.0) {
      b_st.site = &lc_emlrtRSI;
      d_error(&b_st);
    }

    jnt = body->JointInternal;
    i = (int32_T)emlrtIntegerCheckR2012b(body->Index, &e_emlrtDCI, sp);
    bid = emlrtDynamicBoundsCheckR2012b(i, 1, 3, &e_emlrtBCI, sp) - 1;
    obj->PositionDoFMap[bid] = obj->PositionNumber + 1.0;
    obj->PositionDoFMap[bid + 3] = obj->PositionNumber + jnt->PositionNumber;
    st.site = &fc_emlrtRSI;
    if (body->Index == 0.0) {
      b_st.site = &lc_emlrtRSI;
      d_error(&b_st);
    }

    jnt = body->JointInternal;
    i = (int32_T)emlrtIntegerCheckR2012b(body->Index, &f_emlrtDCI, sp);
    bid = emlrtDynamicBoundsCheckR2012b(i, 1, 3, &f_emlrtBCI, sp) - 1;
    obj->VelocityDoFMap[bid] = obj->VelocityNumber + 1.0;
    obj->VelocityDoFMap[bid + 3] = obj->VelocityNumber + jnt->VelocityNumber;
  } else {
    i = (int32_T)emlrtIntegerCheckR2012b(body->Index, &g_emlrtDCI, sp);
    bid = emlrtDynamicBoundsCheckR2012b(i, 1, 3, &g_emlrtBCI, sp);
    for (i = 0; i < 2; i++) {
      obj->PositionDoFMap[(bid + 3 * i) - 1] = 0.0 - (real_T)i;
    }

    i = (int32_T)emlrtIntegerCheckR2012b(body->Index, &h_emlrtDCI, sp);
    bid = emlrtDynamicBoundsCheckR2012b(i, 1, 3, &h_emlrtBCI, sp);
    for (i = 0; i < 2; i++) {
      obj->VelocityDoFMap[(bid + 3 * i) - 1] = 0.0 - (real_T)i;
    }
  }

  st.site = &gc_emlrtRSI;
  if (body->Index == 0.0) {
    b_st.site = &lc_emlrtRSI;
    d_error(&b_st);
  }

  jnt = body->JointInternal;
  obj->PositionNumber += jnt->PositionNumber;
  st.site = &hc_emlrtRSI;
  if (body->Index == 0.0) {
    b_st.site = &lc_emlrtRSI;
    d_error(&b_st);
  }

  jnt = body->JointInternal;
  obj->VelocityNumber += jnt->VelocityNumber;
}

static void inverseKinematics_setupImpl(const emlrtStack *sp, inverseKinematics *
  obj, robotics_manip_internal_IKExtraArgs *iobj_0)
{
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emxArray_real_T *A;
  real_T n;
  int32_T i;
  real_T d;
  int32_T loop_ub;
  emxArray_real_T *b_b;
  real_T m;
  emxArray_real_T *r;
  emxArray_real_T *r1;
  emxArray_real_T *limits;
  int32_T b_i;
  robotics_manip_internal_RigidBody_1 *body;
  int32_T i1;
  rigidBodyJoint *joint;
  real_T pnum;
  int32_T i2;
  int32_T i3;
  int32_T i4;
  int32_T i5;
  int32_T iv[2];
  robotics_manip_internal_RigidBodyTree_1 *b_obj;
  int32_T k;
  real_T d1;
  emxArray_real_T *r2;
  int8_T b_I[16];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emxInit_real_T(&A, 2);
  st.site = &xd_emlrtRSI;
  n = obj->RigidBodyTreeInternal->PositionNumber;
  i = A->size[0] * A->size[1];
  d = emlrtNonNegativeCheckR2012b(n, &t_emlrtDCI, &st);
  A->size[0] = (int32_T)emlrtIntegerCheckR2012b(d, &s_emlrtDCI, &st);
  A->size[1] = (int32_T)emlrtIntegerCheckR2012b(2.0 * n, &u_emlrtDCI, &st);
  emxEnsureCapacity_real_T(A, i);
  loop_ub = (int32_T)emlrtIntegerCheckR2012b(n, &s_emlrtDCI, &st) * (int32_T)
    emlrtIntegerCheckR2012b(2.0 * n, &u_emlrtDCI, &st) - 1;
  for (i = 0; i <= loop_ub; i++) {
    A->data[i] = 0.0;
  }

  emxInit_real_T1(&b_b, 1);
  i = b_b->size[0];
  b_b->size[0] = (int32_T)emlrtIntegerCheckR2012b(2.0 * n, &x_emlrtDCI, &st);
  emxEnsureCapacity_real_T1(b_b, i);
  loop_ub = (int32_T)emlrtIntegerCheckR2012b(2.0 * n, &x_emlrtDCI, &st);
  for (i = 0; i < loop_ub; i++) {
    b_b->data[i] = 0.0;
  }

  n = 1.0;
  m = 1.0;
  d = obj->RigidBodyTreeInternal->NumBodies;
  i = (int32_T)d - 1;
  emlrtForLoopVectorCheckR2012b(1.0, 1.0, d, mxDOUBLE_CLASS, (int32_T)d,
    &c_emlrtRTEI, &st);
  emxInit_real_T(&r, 2);
  emxInit_real_T(&r1, 2);
  emxInit_real_T(&limits, 2);
  for (b_i = 0; b_i <= i; b_i++) {
    b_st.site = &be_emlrtRSI;
    body = obj->RigidBodyTreeInternal->Bodies[emlrtDynamicBoundsCheckR2012b(b_i,
      0, 2, &w_emlrtBCI, &b_st)];
    if (body->Index == 0.0) {
      c_st.site = &lc_emlrtRSI;
      d_error(&c_st);
    }

    joint = body->JointInternal;
    pnum = joint->PositionNumber;
    if (!e_strcmp(joint->Type)) {
      d = (n + pnum) - 1.0;
      if (n > d) {
        i1 = 0;
        i2 = -1;
      } else {
        i1 = A->size[0];
        i2 = (int32_T)emlrtIntegerCheckR2012b(n, &i_emlrtDCI, &st);
        i1 = emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &m_emlrtBCI, &st) - 1;
        i2 = A->size[0];
        i3 = (int32_T)emlrtIntegerCheckR2012b(d, &j_emlrtDCI, &st);
        i2 = emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &n_emlrtBCI, &st) - 1;
      }

      d = (m + pnum) - 1.0;
      if (m > d) {
        i3 = 0;
        i4 = -1;
      } else {
        i3 = A->size[1];
        i4 = (int32_T)emlrtIntegerCheckR2012b(m, &k_emlrtDCI, &st);
        i3 = emlrtDynamicBoundsCheckR2012b(i4, 1, i3, &o_emlrtBCI, &st) - 1;
        i4 = A->size[1];
        i5 = (int32_T)emlrtIntegerCheckR2012b(d, &l_emlrtDCI, &st);
        i4 = emlrtDynamicBoundsCheckR2012b(i5, 1, i4, &p_emlrtBCI, &st) - 1;
      }

      b_st.site = &ce_emlrtRSI;
      eye(&b_st, pnum, r1);
      iv[0] = (i2 - i1) + 1;
      iv[1] = (i4 - i3) + 1;
      emlrtSubAssignSizeCheckR2012b(iv, 2, *(int32_T (*)[2])r1->size, 2,
        &b_emlrtECI, &st);
      loop_ub = r1->size[1];
      for (i2 = 0; i2 < loop_ub; i2++) {
        k = r1->size[0];
        for (i4 = 0; i4 < k; i4++) {
          A->data[(i1 + i4) + A->size[0] * (i3 + i2)] = r1->data[i4 + r1->size[0]
            * i2];
        }
      }

      d = (n + pnum) - 1.0;
      if (n > d) {
        i1 = 0;
        i2 = -1;
      } else {
        i1 = A->size[0];
        i2 = (int32_T)emlrtIntegerCheckR2012b(n, &m_emlrtDCI, &st);
        i1 = emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &q_emlrtBCI, &st) - 1;
        i2 = A->size[0];
        i3 = (int32_T)emlrtIntegerCheckR2012b(d, &n_emlrtDCI, &st);
        i2 = emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &r_emlrtBCI, &st) - 1;
      }

      d = m + pnum;
      d1 = (m + 2.0 * pnum) - 1.0;
      if (d > d1) {
        i3 = 0;
        i4 = -1;
      } else {
        i3 = A->size[1];
        i4 = (int32_T)emlrtIntegerCheckR2012b(d, &o_emlrtDCI, &st);
        i3 = emlrtDynamicBoundsCheckR2012b(i4, 1, i3, &s_emlrtBCI, &st) - 1;
        i4 = A->size[1];
        i5 = (int32_T)emlrtIntegerCheckR2012b(d1, &p_emlrtDCI, &st);
        i4 = emlrtDynamicBoundsCheckR2012b(i5, 1, i4, &t_emlrtBCI, &st) - 1;
      }

      b_st.site = &de_emlrtRSI;
      eye(&b_st, pnum, r1);
      i5 = r1->size[0] * r1->size[1];
      k = r1->size[0] * r1->size[1];
      emxEnsureCapacity_real_T(r1, k);
      loop_ub = i5 - 1;
      for (i5 = 0; i5 <= loop_ub; i5++) {
        r1->data[i5] = -r1->data[i5];
      }

      iv[0] = (i2 - i1) + 1;
      iv[1] = (i4 - i3) + 1;
      emlrtSubAssignSizeCheckR2012b(iv, 2, *(int32_T (*)[2])r1->size, 2,
        &c_emlrtECI, &st);
      loop_ub = r1->size[1];
      for (i2 = 0; i2 < loop_ub; i2++) {
        k = r1->size[0];
        for (i4 = 0; i4 < k; i4++) {
          A->data[(i1 + i4) + A->size[0] * (i3 + i2)] = r1->data[i4 + r1->size[0]
            * i2];
        }
      }

      b_st.site = &ee_emlrtRSI;
      i1 = limits->size[0] * limits->size[1];
      limits->size[0] = joint->PositionLimitsInternal->size[0];
      limits->size[1] = 2;
      emxEnsureCapacity_real_T(limits, i1);
      loop_ub = (joint->PositionLimitsInternal->size[0] << 1) - 1;
      for (i1 = 0; i1 <= loop_ub; i1++) {
        limits->data[i1] = joint->PositionLimitsInternal->data[i1];
      }

      i1 = limits->size[0] << 1;
      emlrtDynamicBoundsCheckR2012b(2, 1, i1, &k_emlrtBCI, &st);
      i1 = b_b->size[0];
      i2 = (int32_T)emlrtIntegerCheckR2012b(m, &bb_emlrtDCI, &st);
      b_b->data[emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &y_emlrtBCI, &st) - 1] =
        limits->data[1];
      b_st.site = &fe_emlrtRSI;
      i1 = r->size[0] * r->size[1];
      r->size[0] = joint->PositionLimitsInternal->size[0];
      r->size[1] = 2;
      emxEnsureCapacity_real_T(r, i1);
      loop_ub = (joint->PositionLimitsInternal->size[0] << 1) - 1;
      for (i1 = 0; i1 <= loop_ub; i1++) {
        r->data[i1] = joint->PositionLimitsInternal->data[i1];
      }

      i1 = r->size[0] << 1;
      emlrtDynamicBoundsCheckR2012b(1, 1, i1, &l_emlrtBCI, &st);
      i1 = b_b->size[0];
      b_b->data[emlrtDynamicBoundsCheckR2012b((int32_T)((uint32_T)m + 1U), 1, i1,
        &ab_emlrtBCI, &st) - 1] = -r->data[0];
      m += 2.0 * pnum;
    }

    n += pnum;
  }

  emxFree_real_T(&r1);
  emxFree_real_T(&r);
  i = A->size[0] * A->size[1];
  i1 = obj->Solver->ConstraintMatrix->size[0] * obj->Solver->
    ConstraintMatrix->size[1];
  obj->Solver->ConstraintMatrix->size[0] = A->size[0];
  obj->Solver->ConstraintMatrix->size[1] = A->size[1];
  emxEnsureCapacity_real_T(obj->Solver->ConstraintMatrix, i1);
  loop_ub = i - 1;
  for (i = 0; i <= loop_ub; i++) {
    obj->Solver->ConstraintMatrix->data[i] = A->data[i];
  }

  emxFree_real_T(&A);
  i = obj->Solver->ConstraintBound->size[0];
  obj->Solver->ConstraintBound->size[0] = b_b->size[0];
  emxEnsureCapacity_real_T1(obj->Solver->ConstraintBound, i);
  loop_ub = b_b->size[0];
  for (i = 0; i < loop_ub; i++) {
    obj->Solver->ConstraintBound->data[i] = b_b->data[i];
  }

  st.site = &yd_emlrtRSI;
  b_obj = obj->RigidBodyTreeInternal;
  i = limits->size[0] * limits->size[1];
  d = emlrtNonNegativeCheckR2012b(b_obj->PositionNumber, &w_emlrtDCI, &st);
  limits->size[0] = (int32_T)emlrtIntegerCheckR2012b(d, &v_emlrtDCI, &st);
  limits->size[1] = 2;
  emxEnsureCapacity_real_T(limits, i);
  d = emlrtNonNegativeCheckR2012b(b_obj->PositionNumber, &w_emlrtDCI, &st);
  loop_ub = ((int32_T)emlrtIntegerCheckR2012b(d, &v_emlrtDCI, &st) << 1) - 1;
  for (i = 0; i <= loop_ub; i++) {
    limits->data[i] = 0.0;
  }

  n = 1.0;
  d = b_obj->NumBodies;
  i = (int32_T)d - 1;
  emlrtForLoopVectorCheckR2012b(1.0, 1.0, d, mxDOUBLE_CLASS, (int32_T)d,
    &d_emlrtRTEI, &st);
  emxInit_real_T(&r2, 2);
  for (b_i = 0; b_i <= i; b_i++) {
    body = b_obj->Bodies[emlrtDynamicBoundsCheckR2012b(b_i, 0, 2, &x_emlrtBCI,
      &st)];
    if (!e_strcmp(body->JointInternal->Type)) {
      pnum = body->JointInternal->PositionNumber;
      d = (n + pnum) - 1.0;
      if (n > d) {
        i1 = 0;
        i2 = -1;
      } else {
        i1 = limits->size[0];
        i2 = (int32_T)emlrtIntegerCheckR2012b(n, &q_emlrtDCI, &st);
        i1 = emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &u_emlrtBCI, &st) - 1;
        i2 = limits->size[0];
        i3 = (int32_T)emlrtIntegerCheckR2012b(d, &r_emlrtDCI, &st);
        i2 = emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &v_emlrtBCI, &st) - 1;
      }

      b_st.site = &ie_emlrtRSI;
      joint = body->JointInternal;
      i3 = r2->size[0] * r2->size[1];
      r2->size[0] = joint->PositionLimitsInternal->size[0];
      r2->size[1] = 2;
      emxEnsureCapacity_real_T(r2, i3);
      loop_ub = (joint->PositionLimitsInternal->size[0] << 1) - 1;
      for (i3 = 0; i3 <= loop_ub; i3++) {
        r2->data[i3] = joint->PositionLimitsInternal->data[i3];
      }

      iv[0] = (i2 - i1) + 1;
      iv[1] = 2;
      emlrtSubAssignSizeCheckR2012b(iv, 2, *(int32_T (*)[2])r2->size, 2,
        &d_emlrtECI, &st);
      for (i2 = 0; i2 < 2; i2++) {
        loop_ub = r2->size[0];
        for (i3 = 0; i3 < loop_ub; i3++) {
          limits->data[(i1 + i3) + limits->size[0] * i2] = r2->data[i3 +
            r2->size[0] * i2];
        }
      }

      n += pnum;
    }
  }

  emxFree_real_T(&r2);
  i = obj->Limits->size[0] * obj->Limits->size[1];
  obj->Limits->size[0] = limits->size[0];
  obj->Limits->size[1] = 2;
  emxEnsureCapacity_real_T(obj->Limits, i);
  loop_ub = (limits->size[0] << 1) - 1;
  for (i = 0; i <= loop_ub; i++) {
    obj->Limits->data[i] = limits->data[i];
  }

  emxFree_real_T(&limits);
  st.site = &ae_emlrtRSI;
  b_st.site = &je_emlrtRSI;
  c_st.site = &ke_emlrtRSI;
  obj->Solver->ExtraArgs = iobj_0;
  for (i = 0; i < 36; i++) {
    obj->Solver->ExtraArgs->WeightMatrix[i] = 0.0;
  }

  obj->Solver->ExtraArgs->Robot = obj->RigidBodyTreeInternal;
  for (i = 0; i < 16; i++) {
    b_I[i] = 0;
  }

  for (k = 0; k < 4; k++) {
    b_I[k + (k << 2)] = 1;
  }

  for (i = 0; i < 16; i++) {
    obj->Solver->ExtraArgs->Tform[i] = (real_T)b_I[i];
  }

  obj->Solver->ExtraArgs->BodyName->size[0] = 1;
  obj->Solver->ExtraArgs->BodyName->size[1] = 0;
  i = obj->Solver->ExtraArgs->ErrTemp->size[0];
  obj->Solver->ExtraArgs->ErrTemp->size[0] = 6;
  emxEnsureCapacity_real_T1(obj->Solver->ExtraArgs->ErrTemp, i);
  for (i = 0; i < 6; i++) {
    obj->Solver->ExtraArgs->ErrTemp->data[i] = 0.0;
  }

  obj->Solver->ExtraArgs->CostTemp = 0.0;
  i = b_b->size[0];
  d = obj->RigidBodyTreeInternal->PositionNumber;
  d = emlrtNonNegativeCheckR2012b(d, &ab_emlrtDCI, &st);
  b_b->size[0] = (int32_T)emlrtIntegerCheckR2012b(d, &y_emlrtDCI, &st);
  emxEnsureCapacity_real_T1(b_b, i);
  d = obj->RigidBodyTreeInternal->PositionNumber;
  d = emlrtNonNegativeCheckR2012b(d, &ab_emlrtDCI, &st);
  loop_ub = (int32_T)emlrtIntegerCheckR2012b(d, &y_emlrtDCI, &st);
  for (i = 0; i < loop_ub; i++) {
    b_b->data[i] = 0.0;
  }

  i = b_b->size[0];
  emlrtDimSizeGeqCheckR2012b(21, i, &e_emlrtECI, &st);
  i = obj->Solver->ExtraArgs->GradTemp->size[0];
  obj->Solver->ExtraArgs->GradTemp->size[0] = b_b->size[0];
  emxEnsureCapacity_real_T1(obj->Solver->ExtraArgs->GradTemp, i);
  loop_ub = b_b->size[0];
  for (i = 0; i < loop_ub; i++) {
    obj->Solver->ExtraArgs->GradTemp->data[i] = b_b->data[i];
  }

  emxFree_real_T(&b_b);
}

static void eye(const emlrtStack *sp, real_T varargin_1, emxArray_real_T *b_I)
{
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  real_T t;
  char_T b_u[28];
  int32_T k;
  real_T b_t;
  const mxArray *y;
  static char_T c_u[28] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
    'A', 'B', ':', 'N', 'o', 'n', 'I', 'n', 't', 'e', 'g', 'e', 'r', 'I', 'n',
    'p', 'u', 't' };

  char_T d_u[21];
  const mxArray *m;
  static const int32_T iv[2] = { 1, 28 };

  int32_T b_m;
  static char_T e_u[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
    'A', 'B', ':', 'p', 'm', 'a', 'x', 's', 'i', 'z', 'e' };

  static const int32_T iv1[2] = { 1, 21 };

  int32_T loop_ub;
  const mxArray *b_y;
  static const int32_T iv2[2] = { 1, 28 };

  const mxArray *c_y;
  static const int32_T iv3[2] = { 1, 21 };

  const mxArray *d_y;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &ge_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  if (varargin_1 < 0.0) {
    t = 0.0;
  } else {
    t = varargin_1;
  }

  b_st.site = &he_emlrtRSI;
  if ((t != muDoubleScalarFloor(t)) || muDoubleScalarIsInf(t) || (t >
       2.147483647E+9)) {
    for (k = 0; k < 28; k++) {
      b_u[k] = c_u[k];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, iv);
    emlrtInitCharArrayR2013a(&b_st, 28, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (k = 0; k < 28; k++) {
      b_u[k] = c_u[k];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, iv2);
    emlrtInitCharArrayR2013a(&b_st, 28, m, &b_u[0]);
    emlrtAssign(&b_y, m);
    c_y = NULL;
    m = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
    *(int32_T *)emlrtMxGetData(m) = MIN_int32_T;
    emlrtAssign(&c_y, m);
    d_y = NULL;
    m = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
    *(int32_T *)emlrtMxGetData(m) = MAX_int32_T;
    emlrtAssign(&d_y, m);
    c_st.site = &ul_emlrtRSI;
    f_error(&c_st, y, getString(&c_st, d_message(&c_st, b_y, c_y, d_y,
              &l_emlrtMCI), &l_emlrtMCI), &l_emlrtMCI);
  }

  if (t <= 0.0) {
    b_t = 0.0;
  } else {
    b_t = t;
  }

  if (!(b_t <= 2.147483647E+9)) {
    for (k = 0; k < 21; k++) {
      d_u[k] = e_u[k];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, iv1);
    emlrtInitCharArrayR2013a(&b_st, 21, m, &d_u[0]);
    emlrtAssign(&y, m);
    for (k = 0; k < 21; k++) {
      d_u[k] = e_u[k];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, iv3);
    emlrtInitCharArrayR2013a(&b_st, 21, m, &d_u[0]);
    emlrtAssign(&b_y, m);
    c_st.site = &tl_emlrtRSI;
    f_error(&c_st, y, getString(&c_st, b_message(&c_st, b_y, &m_emlrtMCI),
             &m_emlrtMCI), &m_emlrtMCI);
  }

  b_m = (int32_T)t - 1;
  k = b_I->size[0] * b_I->size[1];
  b_I->size[0] = (int32_T)t;
  b_I->size[1] = (int32_T)t;
  emxEnsureCapacity_real_T(b_I, k);
  loop_ub = (int32_T)t * (int32_T)t - 1;
  for (k = 0; k <= loop_ub; k++) {
    b_I->data[k] = 0.0;
  }

  if ((int32_T)t > 0) {
    for (k = 0; k <= b_m; k++) {
      b_I->data[k + b_I->size[0] * k] = 1.0;
    }
  }
}

static void inverseKinematics_setPoseGoal(const emlrtStack *sp,
  inverseKinematics *obj, real_T tform[16], real_T weights[6])
{
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emxArray_char_T *b_basename;
  robotics_manip_internal_RigidBodyTree_1 *b_obj;
  int32_T idx;
  int32_T loop_ub;
  char_T b_u[55];
  real_T R[9];
  const mxArray *y;
  static char_T c_u[55] = { 'r', 'o', 'b', 'o', 't', 'i', 'c', 's', ':', 'r',
    'o', 'b', 'o', 't', 'm', 'a', 'n', 'i', 'p', ':', 'i', 'n', 'v', 'e', 'r',
    's', 'e', 'k', 'i', 'n', 'e', 'm', 'a', 't', 'i', 'c', 's', ':', 'E', 'n',
    'd', 'E', 'f', 'f', 'e', 'c', 't', 'o', 'r', 'I', 's', 'B', 'a', 's', 'e' };

  const mxArray *m;
  static const int32_T iv[2] = { 1, 55 };

  real_T maxval[3];
  real_T dv[9];
  const mxArray *b_y;
  real_T x[9];
  static const int32_T iv1[2] = { 1, 55 };

  boolean_T exitg1;
  real_T ex;
  boolean_T guard1 = false;
  real_T scale;
  real_T absxk;
  static int8_T iv2[4] = { 0, 0, 0, 1 };

  boolean_T p;
  real_T t;
  char_T d_u[33];
  static char_T e_u[33] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'e', 't',
    'P', 'o', 's', 'e', 'G', 'o', 'a', 'l', ':', 'e', 'x', 'p', 'e', 'c', 't',
    'e', 'd', 'N', 'o', 'n', 'N', 'a', 'N' };

  static const int32_T iv3[2] = { 1, 33 };

  char_T f_u[38];
  char_T g_u[46];
  static char_T h_u[38] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'e', 't',
    'P', 'o', 's', 'e', 'G', 'o', 'a', 'l', ':', 'e', 'x', 'p', 'e', 'c', 't',
    'e', 'd', 'N', 'o', 'n', 'n', 'e', 'g', 'a', 't', 'i', 'v', 'e' };

  static char_T i_u[46] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'N', 'o', 'n', 'N', 'a', 'N' };

  static const int32_T iv4[2] = { 1, 38 };

  static const int32_T iv5[2] = { 1, 46 };

  char_T j_u[51];
  char_T k_u[7];
  real_T weightMatrix[36];
  static char_T l_u[33] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'e', 't',
    'P', 'o', 's', 'e', 'G', 'o', 'a', 'l', ':', 'e', 'x', 'p', 'e', 'c', 't',
    'e', 'd', 'F', 'i', 'n', 'i', 't', 'e' };

  static char_T m_u[51] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'N', 'o', 'n', 'n', 'e', 'g', 'a', 't', 'i', 'v', 'e' };

  const mxArray *c_y;
  static char_T n_u[7] = { 'w', 'e', 'i', 'g', 'h', 't', 's' };

  static const int32_T iv6[2] = { 1, 33 };

  static const int32_T iv7[2] = { 1, 51 };

  static const int32_T iv8[2] = { 1, 7 };

  robotics_manip_internal_IKExtraArgs *args;
  static char_T o_u[46] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'F', 'i', 'n', 'i', 't', 'e' };

  static const int32_T iv9[2] = { 1, 46 };

  static const int32_T iv10[2] = { 1, 7 };

  static char_T b_endEffectorName[4] = { 't', 'o', 'o', 'l' };

  static const int32_T iv11[2] = { 1, 7 };

  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emxInit_char_T(&b_basename, 2);
  st.site = &ne_emlrtRSI;
  b_obj = obj->RigidBodyTreeInternal;
  b_st.site = &ob_emlrtRSI;
  idx = b_basename->size[0] * b_basename->size[1];
  b_basename->size[0] = 1;
  b_basename->size[1] = b_obj->Base.NameInternal->size[1];
  emxEnsureCapacity_char_T(b_basename, idx);
  loop_ub = b_obj->Base.NameInternal->size[1] - 1;
  for (idx = 0; idx <= loop_ub; idx++) {
    b_basename->data[idx] = b_obj->Base.NameInternal->data[idx];
  }

  if (f_strcmp(b_basename)) {
    st.site = &oe_emlrtRSI;
    for (idx = 0; idx < 55; idx++) {
      b_u[idx] = c_u[idx];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, iv);
    emlrtInitCharArrayR2013a(&st, 55, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (idx = 0; idx < 55; idx++) {
      b_u[idx] = c_u[idx];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, iv1);
    emlrtInitCharArrayR2013a(&st, 55, m, &b_u[0]);
    emlrtAssign(&b_y, m);
    b_st.site = &sl_emlrtRSI;
    f_error(&b_st, y, getString(&b_st, b_message(&b_st, b_y, &n_emlrtMCI),
             &n_emlrtMCI), &n_emlrtMCI);
  }

  emxFree_char_T(&b_basename);
  st.site = &pe_emlrtRSI;
  RigidBodyTree_validateInputBodyName(&st, obj->RigidBodyTreeInternal);
  for (idx = 0; idx < 3; idx++) {
    for (loop_ub = 0; loop_ub < 3; loop_ub++) {
      R[loop_ub + 3 * idx] = tform[loop_ub + (idx << 2)];
    }
  }

  st.site = &qe_emlrtRSI;
  inv(&st, R, dv);
  for (idx = 0; idx < 3; idx++) {
    for (loop_ub = 0; loop_ub < 3; loop_ub++) {
      x[loop_ub + 3 * idx] = dv[loop_ub + 3 * idx] - R[idx + 3 * loop_ub];
    }
  }

  for (loop_ub = 0; loop_ub < 9; loop_ub++) {
    R[loop_ub] = muDoubleScalarAbs(x[loop_ub]);
  }

  for (loop_ub = 0; loop_ub < 3; loop_ub++) {
    maxval[loop_ub] = R[3 * loop_ub];
    for (idx = 0; idx < 2; idx++) {
      if ((!muDoubleScalarIsNaN(R[(idx + 3 * loop_ub) + 1])) &&
          (muDoubleScalarIsNaN(maxval[loop_ub]) || (maxval[loop_ub] < R[(idx + 3
             * loop_ub) + 1]))) {
        maxval[loop_ub] = R[(idx + 3 * loop_ub) + 1];
      }
    }
  }

  if (!muDoubleScalarIsNaN(maxval[0])) {
    idx = 1;
  } else {
    idx = 0;
    loop_ub = 2;
    exitg1 = false;
    while ((!exitg1) && (loop_ub < 4)) {
      if (!muDoubleScalarIsNaN(maxval[loop_ub - 1])) {
        idx = loop_ub;
        exitg1 = true;
      } else {
        loop_ub++;
      }
    }
  }

  if (idx == 0) {
    ex = maxval[0];
  } else {
    ex = maxval[idx - 1];
    for (loop_ub = idx + 1; loop_ub < 4; loop_ub++) {
      if (ex < maxval[loop_ub - 1]) {
        ex = maxval[loop_ub - 1];
      }
    }
  }

  guard1 = false;
  if (ex > 0.0001) {
    guard1 = true;
  } else {
    ex = 0.0;
    scale = 3.3121686421112381E-170;
    for (loop_ub = 0; loop_ub < 4; loop_ub++) {
      absxk = muDoubleScalarAbs(tform[(loop_ub << 2) + 3] - (real_T)iv2[loop_ub]);
      if (absxk > scale) {
        t = scale / absxk;
        ex = ex * t * t + 1.0;
        scale = absxk;
      } else {
        t = absxk / scale;
        ex += t * t;
      }
    }

    ex = scale * muDoubleScalarSqrt(ex);
    if (ex > 1.0E-7) {
      guard1 = true;
    }
  }

  if (guard1) {
    st.site = &re_emlrtRSI;
    b_st.site = &jd_emlrtRSI;
    d_warning(&b_st);
  }

  st.site = &se_emlrtRSI;
  b_st.site = &sb_emlrtRSI;
  p = true;
  loop_ub = 0;
  exitg1 = false;
  while ((!exitg1) && (loop_ub < 6)) {
    if (!muDoubleScalarIsNaN(weights[loop_ub])) {
      loop_ub++;
    } else {
      p = false;
      exitg1 = true;
    }
  }

  if (!p) {
    for (idx = 0; idx < 33; idx++) {
      d_u[idx] = e_u[idx];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, iv3);
    emlrtInitCharArrayR2013a(&b_st, 33, m, &d_u[0]);
    emlrtAssign(&y, m);
    for (idx = 0; idx < 46; idx++) {
      g_u[idx] = i_u[idx];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, iv5);
    emlrtInitCharArrayR2013a(&b_st, 46, m, &g_u[0]);
    emlrtAssign(&b_y, m);
    for (idx = 0; idx < 7; idx++) {
      k_u[idx] = n_u[idx];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, iv8);
    emlrtInitCharArrayR2013a(&b_st, 7, m, &k_u[0]);
    emlrtAssign(&c_y, m);
    c_st.site = &yk_emlrtRSI;
    f_error(&c_st, y, getString(&c_st, message(&c_st, b_y, c_y, &e_emlrtMCI),
             &e_emlrtMCI), &e_emlrtMCI);
  }

  b_st.site = &sb_emlrtRSI;
  p = true;
  loop_ub = 0;
  exitg1 = false;
  while ((!exitg1) && (loop_ub < 6)) {
    if (!(weights[loop_ub] < 0.0)) {
      loop_ub++;
    } else {
      p = false;
      exitg1 = true;
    }
  }

  if (!p) {
    for (idx = 0; idx < 38; idx++) {
      f_u[idx] = h_u[idx];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, iv4);
    emlrtInitCharArrayR2013a(&b_st, 38, m, &f_u[0]);
    emlrtAssign(&y, m);
    for (idx = 0; idx < 51; idx++) {
      j_u[idx] = m_u[idx];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, iv7);
    emlrtInitCharArrayR2013a(&b_st, 51, m, &j_u[0]);
    emlrtAssign(&b_y, m);
    for (idx = 0; idx < 7; idx++) {
      k_u[idx] = n_u[idx];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, iv10);
    emlrtInitCharArrayR2013a(&b_st, 7, m, &k_u[0]);
    emlrtAssign(&c_y, m);
    c_st.site = &bl_emlrtRSI;
    f_error(&c_st, y, getString(&c_st, message(&c_st, b_y, c_y, &q_emlrtMCI),
             &q_emlrtMCI), &q_emlrtMCI);
  }

  b_st.site = &sb_emlrtRSI;
  p = true;
  loop_ub = 0;
  exitg1 = false;
  while ((!exitg1) && (loop_ub < 6)) {
    if ((!muDoubleScalarIsInf(weights[loop_ub])) && (!muDoubleScalarIsNaN
         (weights[loop_ub]))) {
      loop_ub++;
    } else {
      p = false;
      exitg1 = true;
    }
  }

  if (!p) {
    for (idx = 0; idx < 33; idx++) {
      d_u[idx] = l_u[idx];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, iv6);
    emlrtInitCharArrayR2013a(&b_st, 33, m, &d_u[0]);
    emlrtAssign(&y, m);
    for (idx = 0; idx < 46; idx++) {
      g_u[idx] = o_u[idx];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, iv9);
    emlrtInitCharArrayR2013a(&b_st, 46, m, &g_u[0]);
    emlrtAssign(&b_y, m);
    for (idx = 0; idx < 7; idx++) {
      k_u[idx] = n_u[idx];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, iv11);
    emlrtInitCharArrayR2013a(&b_st, 7, m, &k_u[0]);
    emlrtAssign(&c_y, m);
    c_st.site = &xk_emlrtRSI;
    f_error(&c_st, y, getString(&c_st, message(&c_st, b_y, c_y, &f_emlrtMCI),
             &f_emlrtMCI), &f_emlrtMCI);
  }

  for (idx = 0; idx < 36; idx++) {
    weightMatrix[idx] = 0.0;
  }

  for (loop_ub = 0; loop_ub < 6; loop_ub++) {
    weightMatrix[loop_ub + 6 * loop_ub] = weights[loop_ub];
  }

  args = obj->Solver->ExtraArgs;
  for (idx = 0; idx < 36; idx++) {
    args->WeightMatrix[idx] = weightMatrix[idx];
  }

  idx = args->BodyName->size[0] * args->BodyName->size[1];
  args->BodyName->size[0] = 1;
  args->BodyName->size[1] = 4;
  emxEnsureCapacity_char_T(args->BodyName, idx);
  for (idx = 0; idx < 4; idx++) {
    args->BodyName->data[idx] = b_endEffectorName[idx];
  }

  for (idx = 0; idx < 16; idx++) {
    args->Tform[idx] = tform[idx];
  }
}

static boolean_T f_strcmp(emxArray_char_T *a)
{
  boolean_T b_bool;
  int32_T kstr;
  int32_T exitg1;
  static char_T cv[4] = { 't', 'o', 'o', 'l' };

  b_bool = false;
  if (a->size[1] == 4) {
    kstr = 1;
    do {
      exitg1 = 0;
      if (kstr - 1 < 4) {
        if (a->data[kstr - 1] != cv[kstr - 1]) {
          exitg1 = 1;
        } else {
          kstr++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  return b_bool;
}

static void RigidBodyTree_validateInputBodyName(const emlrtStack *sp,
  robotics_manip_internal_RigidBodyTree_1 *obj)
{
  emlrtStack st;
  emlrtStack b_st;
  emxArray_char_T *bname;
  int32_T bid;
  int32_T i;
  int32_T loop_ub;
  real_T d;
  int32_T b_i;
  boolean_T exitg1;
  char_T b_u[46];
  robotics_manip_internal_RigidBody_1 *b_obj;
  const mxArray *y;
  static char_T c_u[46] = { 'r', 'o', 'b', 'o', 't', 'i', 'c', 's', ':', 'r',
    'o', 'b', 'o', 't', 'm', 'a', 'n', 'i', 'p', ':', 'r', 'i', 'g', 'i', 'd',
    'b', 'o', 'd', 'y', 't', 'r', 'e', 'e', ':', 'B', 'o', 'd', 'y', 'N', 'o',
    't', 'F', 'o', 'u', 'n', 'd' };

  const mxArray *m;
  static const int32_T iv[2] = { 1, 46 };

  const mxArray *b_y;
  static const int32_T iv1[2] = { 1, 46 };

  char_T d_u[4];
  const mxArray *c_y;
  static char_T e_u[4] = { 't', 'o', 'o', 'l' };

  static const int32_T iv2[2] = { 1, 4 };

  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emxInit_char_T(&bname, 2);
  st.site = &jc_emlrtRSI;
  bid = -2;
  b_st.site = &ub_emlrtRSI;
  i = bname->size[0] * bname->size[1];
  bname->size[0] = 1;
  bname->size[1] = obj->Base.NameInternal->size[1];
  emxEnsureCapacity_char_T(bname, i);
  loop_ub = obj->Base.NameInternal->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    bname->data[i] = obj->Base.NameInternal->data[i];
  }

  if (f_strcmp(bname)) {
    bid = -1;
  } else {
    d = obj->NumBodies;
    emlrtForLoopVectorCheckR2012b(1.0, 1.0, d, mxDOUBLE_CLASS, (int32_T)d,
      &emlrtRTEI, &st);
    b_i = 0;
    exitg1 = false;
    while ((!exitg1) && (b_i <= (int32_T)d - 1)) {
      b_st.site = &vb_emlrtRSI;
      b_obj = obj->Bodies[emlrtDynamicBoundsCheckR2012b(b_i, 0, 2, &emlrtBCI,
        &b_st)];
      i = bname->size[0] * bname->size[1];
      bname->size[0] = 1;
      bname->size[1] = b_obj->NameInternal->size[1];
      emxEnsureCapacity_char_T(bname, i);
      loop_ub = b_obj->NameInternal->size[1] - 1;
      for (i = 0; i <= loop_ub; i++) {
        bname->data[i] = b_obj->NameInternal->data[i];
      }

      if (f_strcmp(bname)) {
        bid = b_i;
        exitg1 = true;
      } else {
        b_i++;
      }
    }
  }

  emxFree_char_T(&bname);
  if (bid + 1 == -1) {
    st.site = &kc_emlrtRSI;
    for (i = 0; i < 46; i++) {
      b_u[i] = c_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, iv);
    emlrtInitCharArrayR2013a(&st, 46, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 46; i++) {
      b_u[i] = c_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, iv1);
    emlrtInitCharArrayR2013a(&st, 46, m, &b_u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 4; i++) {
      d_u[i] = e_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, iv2);
    emlrtInitCharArrayR2013a(&st, 4, m, &d_u[0]);
    emlrtAssign(&c_y, m);
    b_st.site = &al_emlrtRSI;
    f_error(&b_st, y, getString(&b_st, message(&b_st, b_y, c_y, &d_emlrtMCI),
             &d_emlrtMCI), &d_emlrtMCI);
  }
}

static void inv(const emlrtStack *sp, real_T x[9], real_T y[9])
{
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  real_T b_x[9];
  real_T n1x;
  real_T n1xinv;
  real_T rc;
  char_T str[14];
  char_T rfmt[6];
  int32_T i;
  const mxArray *b_y;
  static char_T b_rfmt[6] = { '%', '1', '4', '.', '6', 'e' };

  const mxArray *m;
  static const int32_T iv[2] = { 1, 6 };

  const mxArray *c_y;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  memcpy(&b_x[0], &x[0], 9U * sizeof(real_T));
  inv3x3(b_x, y);
  st.site = &te_emlrtRSI;
  n1x = b_norm(x);
  n1xinv = b_norm(y);
  rc = 1.0 / (n1x * n1xinv);
  if ((n1x == 0.0) || (n1xinv == 0.0) || (rc == 0.0)) {
    b_st.site = &ue_emlrtRSI;
    b_warning(&b_st);
  } else {
    if (muDoubleScalarIsNaN(rc) || (rc < 2.2204460492503131E-16)) {
      b_st.site = &ve_emlrtRSI;
      for (i = 0; i < 6; i++) {
        rfmt[i] = b_rfmt[i];
      }

      b_y = NULL;
      m = emlrtCreateCharArray(2, iv);
      emlrtInitCharArrayR2013a(&b_st, 6, m, &rfmt[0]);
      emlrtAssign(&b_y, m);
      c_y = NULL;
      m = emlrtCreateDoubleScalar(rc);
      emlrtAssign(&c_y, m);
      c_st.site = &yl_emlrtRSI;
      emlrt_marshallIn(&c_st, b_sprintf(&c_st, b_y, c_y, &o_emlrtMCI),
                       "<output of sprintf>", str);
      b_st.site = &ve_emlrtRSI;
      c_warning(&b_st, str);
    }
  }
}

static void inv3x3(real_T x[9], real_T y[9])
{
  int32_T p1;
  int32_T p2;
  int32_T p3;
  real_T absx11;
  real_T absx21;
  real_T absx31;
  int32_T itmp;
  p1 = 1;
  p2 = 3;
  p3 = 6;
  absx11 = muDoubleScalarAbs(x[0]);
  absx21 = muDoubleScalarAbs(x[1]);
  absx31 = muDoubleScalarAbs(x[2]);
  if ((absx21 > absx11) && (absx21 > absx31)) {
    p1 = 4;
    p2 = 0;
    absx11 = x[0];
    x[0] = x[1];
    x[1] = absx11;
    absx11 = x[3];
    x[3] = x[4];
    x[4] = absx11;
    absx11 = x[6];
    x[6] = x[7];
    x[7] = absx11;
  } else {
    if (absx31 > absx11) {
      p1 = 7;
      p3 = 0;
      absx11 = x[0];
      x[0] = x[2];
      x[2] = absx11;
      absx11 = x[3];
      x[3] = x[5];
      x[5] = absx11;
      absx11 = x[6];
      x[6] = x[8];
      x[8] = absx11;
    }
  }

  absx11 = x[1] / x[0];
  x[1] /= x[0];
  absx21 = x[2] / x[0];
  x[2] /= x[0];
  x[4] -= absx11 * x[3];
  x[5] -= absx21 * x[3];
  x[7] -= absx11 * x[6];
  x[8] -= absx21 * x[6];
  if (muDoubleScalarAbs(x[5]) > muDoubleScalarAbs(x[4])) {
    itmp = p2;
    p2 = p3;
    p3 = itmp;
    x[1] = absx21;
    x[2] = absx11;
    absx11 = x[4];
    x[4] = x[5];
    x[5] = absx11;
    absx11 = x[7];
    x[7] = x[8];
    x[8] = absx11;
  }

  absx11 = x[5] / x[4];
  x[5] /= x[4];
  x[8] -= absx11 * x[7];
  absx11 = (x[5] * x[1] - x[2]) / x[8];
  absx21 = -(x[1] + x[7] * absx11) / x[4];
  y[p1 - 1] = ((1.0 - x[3] * absx21) - x[6] * absx11) / x[0];
  y[p1] = absx21;
  y[p1 + 1] = absx11;
  absx11 = -x[5] / x[8];
  absx21 = (1.0 - x[7] * absx11) / x[4];
  y[p2] = -(x[3] * absx21 + x[6] * absx11) / x[0];
  y[p2 + 1] = absx21;
  y[p2 + 2] = absx11;
  absx11 = 1.0 / x[8];
  absx21 = -x[7] * absx11 / x[4];
  y[p3] = -(x[3] * absx21 + x[6] * absx11) / x[0];
  y[p3 + 1] = absx21;
  y[p3 + 2] = absx11;
}

static real_T b_norm(real_T x[9])
{
  real_T y;
  int32_T j;
  boolean_T exitg1;
  real_T s;
  int32_T i;
  y = 0.0;
  j = 0;
  exitg1 = false;
  while ((!exitg1) && (j < 3)) {
    s = 0.0;
    for (i = 0; i < 3; i++) {
      s += muDoubleScalarAbs(x[i + 3 * j]);
    }

    if (muDoubleScalarIsNaN(s)) {
      y = rtNaN;
      exitg1 = true;
    } else {
      if (s > y) {
        y = s;
      }

      j++;
    }
  }

  return y;
}

static void b_warning(const emlrtStack *sp)
{
  emlrtStack st;
  char_T msgID[21];
  int32_T i;
  char_T b_u[7];
  static char_T b_msgID[21] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'i', 'n',
    'g', 'u', 'l', 'a', 'r', 'M', 'a', 't', 'r', 'i', 'x' };

  const mxArray *y;
  static char_T c_u[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };

  const mxArray *m;
  static const int32_T iv[2] = { 1, 7 };

  const mxArray *b_y;
  static char_T d_u[7] = { 'm', 'e', 's', 's', 'a', 'g', 'e' };

  static const int32_T iv1[2] = { 1, 7 };

  const mxArray *c_y;
  static const int32_T iv2[2] = { 1, 21 };

  st.prev = sp;
  st.tls = sp->tls;
  for (i = 0; i < 21; i++) {
    msgID[i] = b_msgID[i];
  }

  for (i = 0; i < 7; i++) {
    b_u[i] = c_u[i];
  }

  y = NULL;
  m = emlrtCreateCharArray(2, iv);
  emlrtInitCharArrayR2013a(sp, 7, m, &b_u[0]);
  emlrtAssign(&y, m);
  for (i = 0; i < 7; i++) {
    b_u[i] = d_u[i];
  }

  b_y = NULL;
  m = emlrtCreateCharArray(2, iv1);
  emlrtInitCharArrayR2013a(sp, 7, m, &b_u[0]);
  emlrtAssign(&b_y, m);
  c_y = NULL;
  m = emlrtCreateCharArray(2, iv2);
  emlrtInitCharArrayR2013a(sp, 21, m, &msgID[0]);
  emlrtAssign(&c_y, m);
  st.site = &xl_emlrtRSI;
  b_feval(&st, y, feval(&st, b_y, c_y, &j_emlrtMCI), &k_emlrtMCI);
}

static void c_warning(const emlrtStack *sp, char_T varargin_1[14])
{
  emlrtStack st;
  char_T msgID[33];
  int32_T i;
  char_T b_u[7];
  static char_T b_msgID[33] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
    'A', 'B', ':', 'i', 'l', 'l', 'C', 'o', 'n', 'd', 'i', 't', 'i', 'o', 'n',
    'e', 'd', 'M', 'a', 't', 'r', 'i', 'x' };

  const mxArray *y;
  static char_T c_u[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };

  const mxArray *m;
  static const int32_T iv[2] = { 1, 7 };

  const mxArray *b_y;
  static char_T d_u[7] = { 'm', 'e', 's', 's', 'a', 'g', 'e' };

  static const int32_T iv1[2] = { 1, 7 };

  const mxArray *c_y;
  static const int32_T iv2[2] = { 1, 33 };

  const mxArray *d_y;
  static const int32_T iv3[2] = { 1, 14 };

  st.prev = sp;
  st.tls = sp->tls;
  for (i = 0; i < 33; i++) {
    msgID[i] = b_msgID[i];
  }

  for (i = 0; i < 7; i++) {
    b_u[i] = c_u[i];
  }

  y = NULL;
  m = emlrtCreateCharArray(2, iv);
  emlrtInitCharArrayR2013a(sp, 7, m, &b_u[0]);
  emlrtAssign(&y, m);
  for (i = 0; i < 7; i++) {
    b_u[i] = d_u[i];
  }

  b_y = NULL;
  m = emlrtCreateCharArray(2, iv1);
  emlrtInitCharArrayR2013a(sp, 7, m, &b_u[0]);
  emlrtAssign(&b_y, m);
  c_y = NULL;
  m = emlrtCreateCharArray(2, iv2);
  emlrtInitCharArrayR2013a(sp, 33, m, &msgID[0]);
  emlrtAssign(&c_y, m);
  d_y = NULL;
  m = emlrtCreateCharArray(2, iv3);
  emlrtInitCharArrayR2013a(sp, 14, m, &varargin_1[0]);
  emlrtAssign(&d_y, m);
  st.site = &xl_emlrtRSI;
  b_feval(&st, y, c_feval(&st, b_y, c_y, d_y, &j_emlrtMCI), &k_emlrtMCI);
}

static void d_warning(const emlrtStack *sp)
{
  emlrtStack st;
  char_T msgID[65];
  static char_T b_msgID[65] = { 'r', 'o', 'b', 'o', 't', 'i', 'c', 's', ':', 'r',
    'o', 'b', 'o', 't', 'm', 'a', 'n', 'i', 'p', ':', 'i', 'n', 'v', 'e', 'r',
    's', 'e', 'k', 'i', 'n', 'e', 'm', 'a', 't', 'i', 'c', 's', ':', 'H', 'o',
    'm', 'o', 'g', 'e', 'n', 'e', 'o', 'u', 's', 'T', 'r', 'a', 'n', 's', 'f',
    'o', 'r', 'm', 'I', 'n', 'v', 'a', 'l', 'i', 'd' };

  char_T b_u[7];
  int32_T i;
  const mxArray *y;
  static char_T c_u[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };

  const mxArray *m;
  static const int32_T iv[2] = { 1, 7 };

  const mxArray *b_y;
  static char_T d_u[7] = { 'm', 'e', 's', 's', 'a', 'g', 'e' };

  static const int32_T iv1[2] = { 1, 7 };

  const mxArray *c_y;
  static const int32_T iv2[2] = { 1, 65 };

  st.prev = sp;
  st.tls = sp->tls;
  memcpy(&msgID[0], &b_msgID[0], 65U * sizeof(char_T));
  for (i = 0; i < 7; i++) {
    b_u[i] = c_u[i];
  }

  y = NULL;
  m = emlrtCreateCharArray(2, iv);
  emlrtInitCharArrayR2013a(sp, 7, m, &b_u[0]);
  emlrtAssign(&y, m);
  for (i = 0; i < 7; i++) {
    b_u[i] = d_u[i];
  }

  b_y = NULL;
  m = emlrtCreateCharArray(2, iv1);
  emlrtInitCharArrayR2013a(sp, 7, m, &b_u[0]);
  emlrtAssign(&b_y, m);
  c_y = NULL;
  m = emlrtCreateCharArray(2, iv2);
  emlrtInitCharArrayR2013a(sp, 65, m, &msgID[0]);
  emlrtAssign(&c_y, m);
  st.site = &xl_emlrtRSI;
  b_feval(&st, y, feval(&st, b_y, c_y, &j_emlrtMCI), &k_emlrtMCI);
}

static void inverseKinematics_solve(InstanceStruct_99HJ2LsbXT8ZQdi4PHECuF
  *moduleInstance, const emlrtStack *sp, inverseKinematics *obj, real_T
  initialGuess[2], real_T QSol[2], real_T *solutionInfo_Iterations, real_T
  *solutionInfo_NumRandomRestarts, real_T *solutionInfo_PoseErrorNorm, real_T
  *solutionInfo_ExitFlag, char_T solutionInfo_Status_data[], int32_T
  solutionInfo_Status_size[2])
{
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emxArray_char_T *b_endEffectorName;
  real_T qvSolRaw[2];
  char_T sol_Status_data[14];
  int32_T sol_Status_size[2];
  real_T d;
  real_T d1;
  real_T d2;
  real_T d3;
  robotics_manip_internal_RigidBodyTree_1 *b_obj;
  int32_T i;
  int32_T loop_ub;
  emxArray_real_T *bodyIndices;
  real_T ndbl;
  emxArray_char_T *bname;
  int32_T bid;
  int32_T b_i;
  boolean_T exitg1;
  robotics_manip_internal_RigidBody_1 *body;
  uint32_T c_i;
  emxArray_real_T *b_bodyIndices;
  int32_T nm1d2;
  int32_T iv[2];
  emxArray_int32_T *r;
  emxArray_real_T *positionMap;
  int32_T i1;
  emxArray_real_T *positionIndices;
  real_T idxCount;
  emxArray_int32_T *r1;
  emxArray_real_T *r2;
  emxArray_real_T *y;
  real_T numPositions;
  emxArray_int8_T *r3;
  real_T a;
  real_T apnd;
  real_T cdiff;
  real_T absa;
  real_T absb;
  boolean_T bv[2];
  real_T b_absa;
  boolean_T guard1 = false;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emxInit_char_T(&b_endEffectorName, 2);
  st.site = &we_emlrtRSI;
  RigidBodyTree_validateConfigurationWithLimits(&st, obj->RigidBodyTreeInternal,
    initialGuess, QSol);
  st.site = &xe_emlrtRSI;
  NLPSolverInterface_solve(moduleInstance, &st, obj->Solver, QSol, qvSolRaw, &d,
    &d1, &d2, &d3, sol_Status_data, sol_Status_size);
  *solutionInfo_ExitFlag = d3;
  *solutionInfo_PoseErrorNorm = d2;
  *solutionInfo_NumRandomRestarts = d1;
  *solutionInfo_Iterations = d;
  st.site = &ye_emlrtRSI;
  b_obj = obj->RigidBodyTreeInternal;
  i = b_endEffectorName->size[0] * b_endEffectorName->size[1];
  b_endEffectorName->size[0] = 1;
  b_endEffectorName->size[1] = obj->Solver->ExtraArgs->BodyName->size[1];
  emxEnsureCapacity_char_T(b_endEffectorName, i);
  loop_ub = obj->Solver->ExtraArgs->BodyName->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    b_endEffectorName->data[i] = obj->Solver->ExtraArgs->BodyName->data[i];
  }

  emxInit_real_T1(&bodyIndices, 1);
  i = bodyIndices->size[0];
  ndbl = emlrtNonNegativeCheckR2012b(b_obj->NumBodies, &gb_emlrtDCI, &st);
  bodyIndices->size[0] = (int32_T)emlrtIntegerCheckR2012b(ndbl, &fb_emlrtDCI,
    &st);
  emxEnsureCapacity_real_T1(bodyIndices, i);
  ndbl = emlrtNonNegativeCheckR2012b(b_obj->NumBodies, &gb_emlrtDCI, &st);
  loop_ub = (int32_T)emlrtIntegerCheckR2012b(ndbl, &fb_emlrtDCI, &st);
  for (i = 0; i < loop_ub; i++) {
    bodyIndices->data[i] = 0.0;
  }

  emxInit_char_T(&bname, 2);
  b_st.site = &kk_emlrtRSI;
  c_st.site = &jc_emlrtRSI;
  bid = -2;
  d_st.site = &tb_emlrtRSI;
  b_validateattributes(&d_st, b_endEffectorName);
  d_st.site = &ub_emlrtRSI;
  i = bname->size[0] * bname->size[1];
  bname->size[0] = 1;
  bname->size[1] = b_obj->Base.NameInternal->size[1];
  emxEnsureCapacity_char_T(bname, i);
  loop_ub = b_obj->Base.NameInternal->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    bname->data[i] = b_obj->Base.NameInternal->data[i];
  }

  if (d_strcmp(bname, b_endEffectorName)) {
    bid = -1;
  } else {
    ndbl = b_obj->NumBodies;
    emlrtForLoopVectorCheckR2012b(1.0, 1.0, ndbl, mxDOUBLE_CLASS, (int32_T)ndbl,
      &emlrtRTEI, &c_st);
    b_i = 0;
    exitg1 = false;
    while ((!exitg1) && (b_i <= (int32_T)ndbl - 1)) {
      d_st.site = &vb_emlrtRSI;
      body = b_obj->Bodies[emlrtDynamicBoundsCheckR2012b(b_i, 0, 2, &emlrtBCI,
        &d_st)];
      i = bname->size[0] * bname->size[1];
      bname->size[0] = 1;
      bname->size[1] = body->NameInternal->size[1];
      emxEnsureCapacity_char_T(bname, i);
      loop_ub = body->NameInternal->size[1] - 1;
      for (i = 0; i <= loop_ub; i++) {
        bname->data[i] = body->NameInternal->data[i];
      }

      if (d_strcmp(bname, b_endEffectorName)) {
        bid = b_i;
        exitg1 = true;
      } else {
        b_i++;
      }
    }
  }

  emxFree_char_T(&bname);
  if (bid + 1 == -1) {
    c_st.site = &kc_emlrtRSI;
    c_error(&c_st, b_endEffectorName);
  }

  emxFree_char_T(&b_endEffectorName);
  if (bid + 1 == 0) {
    i = bodyIndices->size[0];
    bodyIndices->size[0] = 1;
    emxEnsureCapacity_real_T1(bodyIndices, i);
    bodyIndices->data[0] = 0.0;
  } else {
    body = b_obj->Bodies[bid];
    c_i = 1U;
    while (body->ParentIndex != 0.0) {
      i = bodyIndices->size[0];
      bodyIndices->data[emlrtDynamicBoundsCheckR2012b((int32_T)c_i, 1, i,
        &gb_emlrtBCI, &st) - 1] = body->Index;
      i = (int32_T)emlrtIntegerCheckR2012b(body->ParentIndex, &hb_emlrtDCI, &st)
        - 1;
      body = b_obj->Bodies[emlrtDynamicBoundsCheckR2012b(i, 0, 2, &hb_emlrtBCI,
        &st)];
      c_i++;
    }

    if (1 > (int32_T)(c_i - 1U)) {
      loop_ub = 0;
    } else {
      i = bodyIndices->size[0];
      emlrtDynamicBoundsCheckR2012b(1, 1, i, &fb_emlrtBCI, &st);
      i = bodyIndices->size[0];
      loop_ub = emlrtDynamicBoundsCheckR2012b((int32_T)(c_i - 1U), 1, i,
        &eb_emlrtBCI, &st);
    }

    emxInit_real_T1(&b_bodyIndices, 1);
    iv[0] = 1;
    iv[1] = loop_ub;
    b_st.site = &lk_emlrtRSI;
    indexShapeCheck(&b_st, bodyIndices->size[0], iv);
    i = b_bodyIndices->size[0];
    b_bodyIndices->size[0] = loop_ub + 2;
    emxEnsureCapacity_real_T1(b_bodyIndices, i);
    for (i = 0; i < loop_ub; i++) {
      b_bodyIndices->data[i] = bodyIndices->data[i];
    }

    b_bodyIndices->data[loop_ub] = body->Index;
    b_bodyIndices->data[loop_ub + 1] = 0.0;
    i = bodyIndices->size[0];
    bodyIndices->size[0] = b_bodyIndices->size[0];
    emxEnsureCapacity_real_T1(bodyIndices, i);
    loop_ub = b_bodyIndices->size[0];
    for (i = 0; i < loop_ub; i++) {
      bodyIndices->data[i] = b_bodyIndices->data[i];
    }

    emxFree_real_T(&b_bodyIndices);
  }

  st.site = &af_emlrtRSI;
  b_obj = obj->RigidBodyTreeInternal;
  nm1d2 = bodyIndices->size[0] - 1;
  bid = 0;
  for (b_i = 0; b_i <= nm1d2; b_i++) {
    if (bodyIndices->data[b_i] != 0.0) {
      bid++;
    }
  }

  emxInit_int32_T1(&r, 1);
  i = r->size[0];
  r->size[0] = bid;
  emxEnsureCapacity_int32_T(r, i);
  bid = 0;
  for (b_i = 0; b_i <= nm1d2; b_i++) {
    if (bodyIndices->data[b_i] != 0.0) {
      r->data[bid] = b_i + 1;
      bid++;
    }
  }

  emxInit_real_T(&positionMap, 2);
  bid = bodyIndices->size[0];
  i = positionMap->size[0] * positionMap->size[1];
  positionMap->size[0] = r->size[0];
  positionMap->size[1] = 2;
  emxEnsureCapacity_real_T(positionMap, i);
  for (i = 0; i < 2; i++) {
    loop_ub = r->size[0];
    for (i1 = 0; i1 < loop_ub; i1++) {
      nm1d2 = r->data[i1];
      ndbl = bodyIndices->data[emlrtDynamicBoundsCheckR2012b(nm1d2, 1, bid,
        &jb_emlrtBCI, &st) - 1];
      nm1d2 = (int32_T)emlrtIntegerCheckR2012b(ndbl, &ib_emlrtDCI, &st);
      positionMap->data[i1 + positionMap->size[0] * i] = b_obj->PositionDoFMap
        [(emlrtDynamicBoundsCheckR2012b(nm1d2, 1, 3, &ib_emlrtBCI, &st) + 3 * i)
        - 1];
    }
  }

  emxFree_int32_T(&r);
  emxFree_real_T(&bodyIndices);
  emxInit_real_T(&positionIndices, 2);
  i = positionIndices->size[0] * positionIndices->size[1];
  positionIndices->size[0] = 1;
  ndbl = emlrtNonNegativeCheckR2012b(b_obj->PositionNumber, &cb_emlrtDCI, &st);
  positionIndices->size[1] = (int32_T)emlrtIntegerCheckR2012b(ndbl, &db_emlrtDCI,
    &st);
  emxEnsureCapacity_real_T(positionIndices, i);
  ndbl = emlrtNonNegativeCheckR2012b(b_obj->PositionNumber, &cb_emlrtDCI, &st);
  loop_ub = (int32_T)emlrtIntegerCheckR2012b(ndbl, &db_emlrtDCI, &st) - 1;
  for (i = 0; i <= loop_ub; i++) {
    positionIndices->data[i] = 0.0;
  }

  idxCount = 0.0;
  i = positionMap->size[0] - 1;
  emxInit_int32_T(&r1, 2);
  emxInit_real_T(&r2, 2);
  emxInit_real_T(&y, 2);
  for (b_i = 0; b_i <= i; b_i++) {
    i1 = positionMap->size[0];
    emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, i1, &db_emlrtBCI, &st);
    numPositions = (positionMap->data[b_i + positionMap->size[0]] -
                    positionMap->data[b_i]) + 1.0;
    if (numPositions > 0.0) {
      if (numPositions < 1.0) {
        y->size[0] = 1;
        y->size[1] = 0;
      } else if (muDoubleScalarIsInf(numPositions) && (1.0 == numPositions)) {
        i1 = y->size[0] * y->size[1];
        y->size[0] = 1;
        y->size[1] = 1;
        emxEnsureCapacity_real_T(y, i1);
        y->data[0] = rtNaN;
      } else {
        i1 = y->size[0] * y->size[1];
        y->size[0] = 1;
        y->size[1] = (int32_T)muDoubleScalarFloor(numPositions - 1.0) + 1;
        emxEnsureCapacity_real_T(y, i1);
        loop_ub = (int32_T)muDoubleScalarFloor(numPositions - 1.0);
        for (i1 = 0; i1 <= loop_ub; i1++) {
          y->data[i1] = (real_T)i1 + 1.0;
        }
      }

      i1 = r1->size[0] * r1->size[1];
      r1->size[0] = 1;
      r1->size[1] = y->size[1];
      emxEnsureCapacity_int32_T1(r1, i1);
      loop_ub = y->size[1] - 1;
      bid = positionIndices->size[1];
      for (i1 = 0; i1 <= loop_ub; i1++) {
        ndbl = idxCount + y->data[i1];
        nm1d2 = (int32_T)emlrtIntegerCheckR2012b(ndbl, &kb_emlrtDCI, &st);
        r1->data[i1] = emlrtDynamicBoundsCheckR2012b(nm1d2, 1, bid, &lb_emlrtBCI,
          &st);
      }

      a = positionMap->data[b_i];
      ndbl = positionMap->data[b_i + positionMap->size[0]];
      if (muDoubleScalarIsNaN(a) || muDoubleScalarIsNaN(ndbl)) {
        i1 = r2->size[0] * r2->size[1];
        r2->size[0] = 1;
        r2->size[1] = 1;
        emxEnsureCapacity_real_T(r2, i1);
        r2->data[0] = rtNaN;
      } else if (positionMap->data[b_i + positionMap->size[0]] <
                 positionMap->data[b_i]) {
        r2->size[0] = 1;
        r2->size[1] = 0;
      } else if ((muDoubleScalarIsInf(a) || muDoubleScalarIsInf(ndbl)) &&
                 (positionMap->data[b_i] == positionMap->data[b_i +
                  positionMap->size[0]])) {
        i1 = r2->size[0] * r2->size[1];
        r2->size[0] = 1;
        r2->size[1] = 1;
        emxEnsureCapacity_real_T(r2, i1);
        r2->data[0] = rtNaN;
      } else if (muDoubleScalarFloor(a) == positionMap->data[b_i]) {
        i1 = r2->size[0] * r2->size[1];
        r2->size[0] = 1;
        r2->size[1] = (int32_T)muDoubleScalarFloor(positionMap->data[b_i +
          positionMap->size[0]] - positionMap->data[b_i]) + 1;
        emxEnsureCapacity_real_T(r2, i1);
        loop_ub = (int32_T)muDoubleScalarFloor(positionMap->data[b_i +
          positionMap->size[0]] - positionMap->data[b_i]);
        for (i1 = 0; i1 <= loop_ub; i1++) {
          r2->data[i1] = positionMap->data[b_i] + (real_T)i1;
        }
      } else {
        b_st.site = &mk_emlrtRSI;
        ndbl = muDoubleScalarFloor((positionMap->data[b_i + positionMap->size[0]]
          - positionMap->data[b_i]) + 0.5);
        apnd = positionMap->data[b_i] + ndbl;
        cdiff = apnd - positionMap->data[b_i + positionMap->size[0]];
        absa = muDoubleScalarAbs(positionMap->data[b_i]);
        absb = muDoubleScalarAbs(positionMap->data[b_i + positionMap->size[0]]);
        if (absa > absb) {
          b_absa = absa;
        } else {
          b_absa = absb;
        }

        if (muDoubleScalarAbs(cdiff) < 4.4408920985006262E-16 * b_absa) {
          ndbl++;
          apnd = positionMap->data[b_i + positionMap->size[0]];
        } else if (cdiff > 0.0) {
          apnd = positionMap->data[b_i] + (ndbl - 1.0);
        } else {
          ndbl++;
        }

        if (ndbl >= 0.0) {
          bid = (int32_T)ndbl - 1;
        } else {
          bid = -1;
        }

        c_st.site = &nk_emlrtRSI;
        assert_pmaxsize(&c_st, !(ndbl > 2.147483647E+9));
        i1 = r2->size[0] * r2->size[1];
        r2->size[0] = 1;
        r2->size[1] = bid + 1;
        emxEnsureCapacity_real_T(r2, i1);
        if (bid + 1 > 0) {
          r2->data[0] = positionMap->data[b_i];
          if (bid + 1 > 1) {
            r2->data[bid] = apnd;
            nm1d2 = div_nzp_s32(bid, 2);
            i1 = nm1d2 - 2;
            for (loop_ub = 0; loop_ub <= i1; loop_ub++) {
              r2->data[loop_ub + 1] = a + (real_T)(loop_ub + 1);
              r2->data[(bid - loop_ub) - 1] = apnd - (real_T)(loop_ub + 1);
            }

            if (nm1d2 << 1 == bid) {
              r2->data[nm1d2] = (positionMap->data[b_i] + apnd) / 2.0;
            } else {
              r2->data[nm1d2] = positionMap->data[b_i] + (real_T)nm1d2;
              r2->data[nm1d2 + 1] = apnd - (real_T)nm1d2;
            }
          }
        }
      }

      i1 = r1->size[1];
      nm1d2 = r2->size[1];
      emlrtSubAssignSizeCheck1dR2017a(i1, nm1d2, &f_emlrtECI, &st);
      i1 = r2->size[1];
      loop_ub = i1 - 1;
      for (i1 = 0; i1 <= loop_ub; i1++) {
        positionIndices->data[r1->data[i1] - 1] = r2->data[i1];
      }

      idxCount += numPositions;
    }
  }

  emxFree_real_T(&y);
  emxFree_real_T(&r2);
  emxFree_int32_T(&r1);
  emxFree_real_T(&positionMap);
  if (1.0 > idxCount) {
    i = 0;
  } else {
    i = positionIndices->size[1];
    emlrtDynamicBoundsCheckR2012b(1, 1, i, &cb_emlrtBCI, &st);
    i = positionIndices->size[1];
    i1 = (int32_T)emlrtIntegerCheckR2012b(idxCount, &eb_emlrtDCI, &st);
    i = emlrtDynamicBoundsCheckR2012b(i1, 1, i, &bb_emlrtBCI, &st);
  }

  emxInit_int8_T(&r3, 2);
  i1 = positionIndices->size[0] * positionIndices->size[1];
  positionIndices->size[1] = i;
  emxEnsureCapacity_real_T(positionIndices, i1);
  i = r3->size[0] * r3->size[1];
  r3->size[0] = 1;
  r3->size[1] = positionIndices->size[1];
  emxEnsureCapacity_int8_T(r3, i);
  loop_ub = positionIndices->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    ndbl = positionIndices->data[i];
    i1 = (int8_T)emlrtIntegerCheckR2012b(ndbl, &jb_emlrtDCI, sp);
    r3->data[i] = (int8_T)emlrtDynamicBoundsCheckR2012b(i1, 1, 2, &kb_emlrtBCI,
      sp);
  }

  i = r3->size[1];
  i1 = positionIndices->size[1];
  emlrtSubAssignSizeCheck1dR2017a(i, i1, &g_emlrtECI, sp);
  loop_ub = positionIndices->size[1];
  for (i = 0; i < loop_ub; i++) {
    QSol[r3->data[i] - 1] = qvSolRaw[(int32_T)positionIndices->data[i] - 1];
  }

  emxFree_int8_T(&r3);
  emxFree_real_T(&positionIndices);
  st.site = &bf_emlrtRSI;
  b_st.site = &ok_emlrtRSI;
  for (b_i = 0; b_i < 2; b_i++) {
    bv[b_i] = muDoubleScalarIsNaN(QSol[b_i]);
  }

  guard1 = false;
  if (b_any(bv)) {
    guard1 = true;
  } else {
    for (b_i = 0; b_i < 2; b_i++) {
      bv[b_i] = muDoubleScalarIsInf(QSol[b_i]);
    }

    if (b_any(bv)) {
      guard1 = true;
    }
  }

  if (guard1) {
    c_st.site = &pk_emlrtRSI;
    d_st.site = &jd_emlrtRSI;
    g_warning(&d_st);
  }

  solutionInfo_Status_size[0] = 1;
  solutionInfo_Status_size[1] = sol_Status_size[1];
  if (0 <= sol_Status_size[1] - 1) {
    memcpy(&solutionInfo_Status_data[0], &sol_Status_data[0], (uint32_T)
           (sol_Status_size[1] * (int32_T)sizeof(char_T)));
  }
}

static void RigidBodyTree_validateConfigurationWithLimits(const emlrtStack *sp,
  robotics_manip_internal_RigidBodyTree_1 *obj, real_T Q[2], real_T qvec[2])
{
  emlrtStack st;
  emlrtStack b_st;
  int32_T i;
  emxArray_real_T *limits;
  int32_T b_i;
  real_T d;
  int32_T loop_ub;
  real_T k;
  emxArray_real_T *r;
  robotics_manip_internal_RigidBody_1 *body;
  emxArray_real_T *b_limits;
  real_T pnum;
  int32_T i1;
  int32_T i2;
  int32_T i3;
  rigidBodyJoint *b_obj;
  boolean_T ubOK[2];
  emxArray_real_T *c_limits;
  int32_T ii_data[2];
  boolean_T lbOK[2];
  boolean_T y;
  boolean_T exitg1;
  boolean_T guard1 = false;
  boolean_T b_ubOK[2];
  int32_T ii_size[1];
  int32_T indicesUpperBoundViolation_data[2];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  for (i = 0; i < 2; i++) {
    qvec[i] = Q[i];
  }

  emxInit_real_T(&limits, 2);
  st.site = &cf_emlrtRSI;
  RigidBodyTree_validateConfiguration(&st, obj, qvec);
  st.site = &df_emlrtRSI;
  b_i = limits->size[0] * limits->size[1];
  d = emlrtNonNegativeCheckR2012b(obj->PositionNumber, &w_emlrtDCI, &st);
  limits->size[0] = (int32_T)emlrtIntegerCheckR2012b(d, &v_emlrtDCI, &st);
  limits->size[1] = 2;
  emxEnsureCapacity_real_T(limits, b_i);
  d = emlrtNonNegativeCheckR2012b(obj->PositionNumber, &w_emlrtDCI, &st);
  loop_ub = ((int32_T)emlrtIntegerCheckR2012b(d, &v_emlrtDCI, &st) << 1) - 1;
  for (b_i = 0; b_i <= loop_ub; b_i++) {
    limits->data[b_i] = 0.0;
  }

  k = 1.0;
  d = obj->NumBodies;
  b_i = (int32_T)d - 1;
  emlrtForLoopVectorCheckR2012b(1.0, 1.0, d, mxDOUBLE_CLASS, (int32_T)d,
    &d_emlrtRTEI, &st);
  emxInit_real_T(&r, 2);
  for (i = 0; i <= b_i; i++) {
    body = obj->Bodies[emlrtDynamicBoundsCheckR2012b(i, 0, 2, &x_emlrtBCI, &st)];
    if (!e_strcmp(body->JointInternal->Type)) {
      pnum = body->JointInternal->PositionNumber;
      d = (k + pnum) - 1.0;
      if (k > d) {
        i1 = 0;
        i2 = -1;
      } else {
        i1 = limits->size[0];
        i2 = (int32_T)emlrtIntegerCheckR2012b(k, &q_emlrtDCI, &st);
        i1 = emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &u_emlrtBCI, &st) - 1;
        i2 = limits->size[0];
        i3 = (int32_T)emlrtIntegerCheckR2012b(d, &r_emlrtDCI, &st);
        i2 = emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &v_emlrtBCI, &st) - 1;
      }

      b_st.site = &ie_emlrtRSI;
      b_obj = body->JointInternal;
      i3 = r->size[0] * r->size[1];
      r->size[0] = b_obj->PositionLimitsInternal->size[0];
      r->size[1] = 2;
      emxEnsureCapacity_real_T(r, i3);
      loop_ub = (b_obj->PositionLimitsInternal->size[0] << 1) - 1;
      for (i3 = 0; i3 <= loop_ub; i3++) {
        r->data[i3] = b_obj->PositionLimitsInternal->data[i3];
      }

      ii_data[0] = (i2 - i1) + 1;
      ii_data[1] = 2;
      emlrtSubAssignSizeCheckR2012b(ii_data, 2, *(int32_T (*)[2])r->size, 2,
        &d_emlrtECI, &st);
      for (i2 = 0; i2 < 2; i2++) {
        loop_ub = r->size[0];
        for (i3 = 0; i3 < loop_ub; i3++) {
          limits->data[(i1 + i3) + limits->size[0] * i2] = r->data[i3 + r->size
            [0] * i2];
        }
      }

      k += pnum;
    }
  }

  emxFree_real_T(&r);
  emxInit_real_T1(&b_limits, 1);
  b_i = limits->size[0];
  emlrtSizeEqCheck1DR2012b(2, b_i, &h_emlrtECI, sp);
  loop_ub = limits->size[0];
  b_i = b_limits->size[0];
  b_limits->size[0] = loop_ub;
  emxEnsureCapacity_real_T1(b_limits, b_i);
  for (b_i = 0; b_i < loop_ub; b_i++) {
    b_limits->data[b_i] = limits->data[b_i + limits->size[0]] +
      4.4408920985006262E-16;
  }

  for (b_i = 0; b_i < 2; b_i++) {
    ubOK[b_i] = (qvec[b_i] <= b_limits->data[b_i]);
  }

  emxFree_real_T(&b_limits);
  emxInit_real_T1(&c_limits, 1);
  b_i = limits->size[0];
  emlrtSizeEqCheck1DR2012b(2, b_i, &i_emlrtECI, sp);
  loop_ub = limits->size[0];
  b_i = c_limits->size[0];
  c_limits->size[0] = loop_ub;
  emxEnsureCapacity_real_T1(c_limits, b_i);
  for (b_i = 0; b_i < loop_ub; b_i++) {
    c_limits->data[b_i] = limits->data[b_i] - 4.4408920985006262E-16;
  }

  for (b_i = 0; b_i < 2; b_i++) {
    lbOK[b_i] = (qvec[b_i] >= c_limits->data[b_i]);
  }

  emxFree_real_T(&c_limits);
  y = true;
  i = 0;
  exitg1 = false;
  while ((!exitg1) && (i < 2)) {
    if (!ubOK[i]) {
      y = false;
      exitg1 = true;
    } else {
      i++;
    }
  }

  guard1 = false;
  if (y) {
    y = true;
    i = 0;
    exitg1 = false;
    while ((!exitg1) && (i < 2)) {
      if (!lbOK[i]) {
        y = false;
        exitg1 = true;
      } else {
        i++;
      }
    }

    if (y) {
    } else {
      guard1 = true;
    }
  } else {
    guard1 = true;
  }

  if (guard1) {
    for (b_i = 0; b_i < 2; b_i++) {
      b_ubOK[b_i] = !ubOK[b_i];
    }

    st.site = &ff_emlrtRSI;
    eml_find(&st, b_ubOK, ii_data, ii_size);
    if (0 <= ii_size[0] - 1) {
      memcpy(&indicesUpperBoundViolation_data[0], &ii_data[0], (uint32_T)
             (ii_size[0] * (int32_T)sizeof(int32_T)));
    }

    loop_ub = ii_size[0];
    for (b_i = 0; b_i < loop_ub; b_i++) {
      ii_data[b_i] = emlrtDynamicBoundsCheckR2012b
        (indicesUpperBoundViolation_data[b_i], 1, 2, &mb_emlrtBCI, sp);
    }

    i = limits->size[0];
    loop_ub = ii_size[0];
    for (b_i = 0; b_i < loop_ub; b_i++) {
      emlrtDynamicBoundsCheckR2012b(indicesUpperBoundViolation_data[b_i], 1, i,
        &nb_emlrtBCI, sp);
    }

    emlrtSubAssignSizeCheck1dR2017a(ii_size[0], ii_size[0], &j_emlrtECI, sp);
    loop_ub = ii_size[0];
    for (b_i = 0; b_i < loop_ub; b_i++) {
      qvec[ii_data[b_i] - 1] = limits->data[(indicesUpperBoundViolation_data[b_i]
        + limits->size[0]) - 1];
    }

    for (b_i = 0; b_i < 2; b_i++) {
      ubOK[b_i] = !lbOK[b_i];
    }

    st.site = &ff_emlrtRSI;
    eml_find(&st, ubOK, ii_data, ii_size);
    if (0 <= ii_size[0] - 1) {
      memcpy(&indicesUpperBoundViolation_data[0], &ii_data[0], (uint32_T)
             (ii_size[0] * (int32_T)sizeof(int32_T)));
    }

    loop_ub = ii_size[0];
    for (b_i = 0; b_i < loop_ub; b_i++) {
      ii_data[b_i] = emlrtDynamicBoundsCheckR2012b
        (indicesUpperBoundViolation_data[b_i], 1, 2, &ob_emlrtBCI, sp);
    }

    i = limits->size[0];
    loop_ub = ii_size[0];
    for (b_i = 0; b_i < loop_ub; b_i++) {
      emlrtDynamicBoundsCheckR2012b(indicesUpperBoundViolation_data[b_i], 1, i,
        &pb_emlrtBCI, sp);
    }

    emlrtSubAssignSizeCheck1dR2017a(ii_size[0], ii_size[0], &k_emlrtECI, sp);
    loop_ub = ii_size[0];
    for (b_i = 0; b_i < loop_ub; b_i++) {
      qvec[ii_data[b_i] - 1] = limits->data[indicesUpperBoundViolation_data[b_i]
        - 1];
    }

    st.site = &ef_emlrtRSI;
    b_st.site = &jd_emlrtRSI;
    e_warning(&b_st);
  }

  emxFree_real_T(&limits);
}

static void eml_find(const emlrtStack *sp, boolean_T x[2], int32_T i_data[],
                     int32_T i_size[1])
{
  emlrtStack st;
  int32_T idx;
  int32_T ii;
  boolean_T exitg1;
  int32_T iv[2];
  st.prev = sp;
  st.tls = sp->tls;
  idx = 0;
  ii = 1;
  exitg1 = false;
  while ((!exitg1) && (ii - 1 < 2)) {
    if (x[ii - 1]) {
      idx++;
      i_data[idx - 1] = ii;
      if (idx >= 2) {
        exitg1 = true;
      } else {
        ii++;
      }
    } else {
      ii++;
    }
  }

  if (1 > idx) {
    idx = 0;
  }

  iv[0] = 1;
  iv[1] = idx;
  st.site = &hf_emlrtRSI;
  indexShapeCheck(&st, 2, iv);
  i_size[0] = idx;
}

static void indexShapeCheck(const emlrtStack *sp, int32_T matrixSize, int32_T
  indexSize[2])
{
  emlrtStack st;
  emlrtStack b_st;
  boolean_T c;
  char_T b_u[30];
  int32_T i;
  const mxArray *y;
  static char_T c_u[30] = { 'C', 'o', 'd', 'e', 'r', ':', 'F', 'E', ':', 'P',
    'o', 't', 'e', 'n', 't', 'i', 'a', 'l', 'V', 'e', 'c', 't', 'o', 'r', 'V',
    'e', 'c', 't', 'o', 'r' };

  const mxArray *m;
  static const int32_T iv[2] = { 1, 30 };

  const mxArray *b_y;
  static const int32_T iv1[2] = { 1, 30 };

  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if ((matrixSize == 1) && (indexSize[1] != 1)) {
    c = true;
  } else {
    c = false;
  }

  st.site = &if_emlrtRSI;
  if (c) {
    for (i = 0; i < 30; i++) {
      b_u[i] = c_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, iv);
    emlrtInitCharArrayR2013a(&st, 30, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 30; i++) {
      b_u[i] = c_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, iv1);
    emlrtInitCharArrayR2013a(&st, 30, m, &b_u[0]);
    emlrtAssign(&b_y, m);
    b_st.site = &rl_emlrtRSI;
    f_error(&b_st, y, getString(&b_st, b_message(&b_st, b_y, &t_emlrtMCI),
             &t_emlrtMCI), &t_emlrtMCI);
  }
}

static void e_warning(const emlrtStack *sp)
{
  emlrtStack st;
  char_T msgID[72];
  static char_T b_msgID[72] = { 'r', 'o', 'b', 'o', 't', 'i', 'c', 's', ':', 'r',
    'o', 'b', 'o', 't', 'm', 'a', 'n', 'i', 'p', ':', 'r', 'i', 'g', 'i', 'd',
    'b', 'o', 'd', 'y', 't', 'r', 'e', 'e', ':', 'C', 'o', 'n', 'f', 'i', 'g',
    'J', 'o', 'i', 'n', 't', 'L', 'i', 'm', 'i', 't', 's', 'V', 'i', 'o', 'l',
    'a', 't', 'i', 'o', 'n', 'A', 'u', 't', 'o', 'A', 'd', 'j', 'u', 's', 't',
    'e', 'd' };

  char_T b_u[7];
  int32_T i;
  const mxArray *y;
  static char_T c_u[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };

  const mxArray *m;
  static const int32_T iv[2] = { 1, 7 };

  const mxArray *b_y;
  static char_T d_u[7] = { 'm', 'e', 's', 's', 'a', 'g', 'e' };

  static const int32_T iv1[2] = { 1, 7 };

  const mxArray *c_y;
  static const int32_T iv2[2] = { 1, 72 };

  st.prev = sp;
  st.tls = sp->tls;
  memcpy(&msgID[0], &b_msgID[0], 72U * sizeof(char_T));
  for (i = 0; i < 7; i++) {
    b_u[i] = c_u[i];
  }

  y = NULL;
  m = emlrtCreateCharArray(2, iv);
  emlrtInitCharArrayR2013a(sp, 7, m, &b_u[0]);
  emlrtAssign(&y, m);
  for (i = 0; i < 7; i++) {
    b_u[i] = d_u[i];
  }

  b_y = NULL;
  m = emlrtCreateCharArray(2, iv1);
  emlrtInitCharArrayR2013a(sp, 7, m, &b_u[0]);
  emlrtAssign(&b_y, m);
  c_y = NULL;
  m = emlrtCreateCharArray(2, iv2);
  emlrtInitCharArrayR2013a(sp, 72, m, &msgID[0]);
  emlrtAssign(&c_y, m);
  st.site = &xl_emlrtRSI;
  b_feval(&st, y, feval(&st, b_y, c_y, &j_emlrtMCI), &k_emlrtMCI);
}

static void NLPSolverInterface_solve(InstanceStruct_99HJ2LsbXT8ZQdi4PHECuF
  *moduleInstance, const emlrtStack *sp,
  robotics_core_internal_DampedBFGSwGradientProjection *obj, real_T seed[2],
  real_T xSol[2], real_T *solutionInfo_Iterations, real_T
  *solutionInfo_RRAttempts, real_T *solutionInfo_Error, real_T
  *solutionInfo_ExitFlag, char_T solutionInfo_Status_data[], int32_T
  solutionInfo_Status_size[2])
{
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  int32_T i;
  real_T tol;
  b_robotics_core_internal_NLPSolverExitFlags exitFlag;
  real_T err;
  real_T iter;
  b_robotics_core_internal_NLPSolverExitFlags exitFlagPrev;
  emxArray_real_T *newseed;
  emxArray_real_T *qi;
  emxArray_real_T *ub;
  emxArray_real_T *lb;
  emxArray_real_T *rn;
  emxArray_real_T *r;
  emxArray_boolean_T *r1;
  emxArray_real_T *r2;
  emxArray_boolean_T *r3;
  emxArray_boolean_T *r4;
  boolean_T exitg1;
  robotics_manip_internal_IKExtraArgs *args;
  robotics_manip_internal_RigidBodyTree_1 *b_obj;
  int32_T b_i;
  int32_T loop_ub;
  static char_T cv[14] = { 'b', 'e', 's', 't', ' ', 'a', 'v', 'a', 'i', 'l', 'a',
    'b', 'l', 'e' };

  static char_T cv1[7] = { 's', 'u', 'c', 'c', 'e', 's', 's' };

  real_T p[2];
  int32_T i1;
  rigidBodyJoint *c_obj;
  int32_T i2;
  boolean_T guard1 = false;
  boolean_T guard2 = false;
  boolean_T guard3 = false;
  real_T b_ub[2];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  obj->MaxNumIterationInternal = obj->MaxNumIteration;
  obj->MaxTimeInternal = obj->MaxTime;
  for (i = 0; i < 2; i++) {
    obj->SeedInternal[i] = seed[i];
  }

  tol = obj->SolutionTolerance;
  st.site = &jf_emlrtRSI;
  obj->TimeObj.StartTime = ctimefun();
  b_st.site = &of_emlrtRSI;
  st.site = &kf_emlrtRSI;
  DampedBFGSwGradientProjection_solveInternal(&st, obj, xSol, &exitFlag, &err,
    &iter);
  *solutionInfo_RRAttempts = 0.0;
  *solutionInfo_Iterations = iter;
  *solutionInfo_Error = err;
  exitFlagPrev = exitFlag;
  emxInit_real_T1(&newseed, 1);
  emxInit_real_T(&qi, 2);
  emxInit_real_T1(&ub, 1);
  emxInit_real_T1(&lb, 1);
  emxInit_real_T1(&rn, 1);
  emxInit_real_T(&r, 2);
  emxInit_boolean_T(&r1, 1);
  emxInit_real_T(&r2, 2);
  emxInit_boolean_T(&r3, 1);
  emxInit_boolean_T(&r4, 1);
  exitg1 = false;
  while ((!exitg1) && (obj->RandomRestart && (err > tol))) {
    obj->MaxNumIterationInternal -= iter;
    st.site = &lf_emlrtRSI;
    obj->MaxTimeInternal = obj->MaxTime - SystemTimeProvider_getElapsedTime(&st,
      &obj->TimeObj);
    if (obj->MaxNumIterationInternal <= 0.0) {
      exitFlag =
        robotics_core_internal_NLPSolverExitFlags_IterationLimitExceeded;
    }

    if ((exitFlag ==
         robotics_core_internal_NLPSolverExitFlags_IterationLimitExceeded) ||
        (exitFlag == robotics_core_internal_NLPSolverExitFlags_TimeLimitExceeded))
    {
      exitFlagPrev = exitFlag;
      exitg1 = true;
    } else {
      st.site = &mf_emlrtRSI;
      args = obj->ExtraArgs;
      b_st.site = &tj_emlrtRSI;
      b_obj = args->Robot;
      b_i = newseed->size[0];
      err = emlrtNonNegativeCheckR2012b(b_obj->PositionNumber, &pb_emlrtDCI,
        &b_st);
      newseed->size[0] = (int32_T)emlrtIntegerCheckR2012b(err, &ob_emlrtDCI,
        &b_st);
      emxEnsureCapacity_real_T1(newseed, b_i);
      err = emlrtNonNegativeCheckR2012b(b_obj->PositionNumber, &pb_emlrtDCI,
        &b_st);
      loop_ub = (int32_T)emlrtIntegerCheckR2012b(err, &ob_emlrtDCI, &b_st);
      for (b_i = 0; b_i < loop_ub; b_i++) {
        newseed->data[b_i] = 0.0;
      }

      err = b_obj->NumBodies;
      b_i = (int32_T)err - 1;
      emlrtForLoopVectorCheckR2012b(1.0, 1.0, err, mxDOUBLE_CLASS, (int32_T)err,
        &e_emlrtRTEI, &b_st);
      for (i = 0; i <= b_i; i++) {
        emlrtDynamicBoundsCheckR2012b((int32_T)((uint32_T)i + 1U), 1, 3,
          &qb_emlrtBCI, &b_st);
        for (i1 = 0; i1 < 2; i1++) {
          p[i1] = b_obj->PositionDoFMap[i + 3 * i1];
        }

        if (p[0] <= p[1]) {
          c_st.site = &uj_emlrtRSI;
          c_obj = b_obj->Bodies[i]->JointInternal;
          switch ((int32_T)emlrtIntegerCheckR2012b(c_obj->PositionNumber,
                   &nb_emlrtDCI, &c_st)) {
           case 0:
            i1 = qi->size[0] * qi->size[1];
            qi->size[0] = 1;
            qi->size[1] = 1;
            emxEnsureCapacity_real_T(qi, i1);
            qi->data[0] = rtNaN;
            break;

           default:
            loop_ub = c_obj->PositionLimitsInternal->size[0];
            i1 = ub->size[0];
            ub->size[0] = loop_ub;
            emxEnsureCapacity_real_T1(ub, i1);
            for (i1 = 0; i1 < loop_ub; i1++) {
              ub->data[i1] = c_obj->PositionLimitsInternal->data[i1 +
                c_obj->PositionLimitsInternal->size[0]];
            }

            loop_ub = c_obj->PositionLimitsInternal->size[0];
            i1 = lb->size[0];
            lb->size[0] = loop_ub;
            emxEnsureCapacity_real_T1(lb, i1);
            for (i1 = 0; i1 < loop_ub; i1++) {
              lb->data[i1] = c_obj->PositionLimitsInternal->data[i1];
            }

            b_isfinite(lb, r1);
            d_st.site = &vj_emlrtRSI;
            guard1 = false;
            guard2 = false;
            guard3 = false;
            if (all(&d_st, r1)) {
              b_isfinite(ub, r1);
              d_st.site = &vj_emlrtRSI;
              if (all(&d_st, r1)) {
                d_st.site = &wj_emlrtRSI;
                c_rand(moduleInstance, &d_st, c_obj->PositionNumber, rn);
                i1 = ub->size[0];
                i2 = lb->size[0];
                emlrtSizeEqCheck1DR2012b(i1, i2, &n_emlrtECI, &c_st);
                i1 = rn->size[0];
                i2 = ub->size[0];
                emlrtSizeEqCheck1DR2012b(i1, i2, &o_emlrtECI, &c_st);
                i1 = rn->size[0];
                emxEnsureCapacity_real_T1(rn, i1);
                loop_ub = rn->size[0];
                for (i1 = 0; i1 < loop_ub; i1++) {
                  rn->data[i1] *= ub->data[i1] - lb->data[i1];
                }

                i1 = lb->size[0];
                i2 = rn->size[0];
                emlrtSizeEqCheck1DR2012b(i1, i2, &p_emlrtECI, &c_st);
                i1 = qi->size[0] * qi->size[1];
                qi->size[0] = lb->size[0];
                qi->size[1] = 1;
                emxEnsureCapacity_real_T(qi, i1);
                loop_ub = lb->size[0] - 1;
                for (i1 = 0; i1 <= loop_ub; i1++) {
                  qi->data[i1] = lb->data[i1] + rn->data[i1];
                }
              } else {
                guard3 = true;
              }
            } else {
              guard3 = true;
            }

            if (guard3) {
              b_isfinite(lb, r1);
              d_st.site = &xj_emlrtRSI;
              if (all(&d_st, r1)) {
                b_isfinite(ub, r1);
                i1 = r4->size[0];
                r4->size[0] = r1->size[0];
                emxEnsureCapacity_boolean_T(r4, i1);
                loop_ub = r1->size[0];
                for (i1 = 0; i1 < loop_ub; i1++) {
                  r4->data[i1] = !r1->data[i1];
                }

                d_st.site = &xj_emlrtRSI;
                if (any(&d_st, r4)) {
                  b_ub[0] = (real_T)lb->size[0];
                  b_ub[1] = 1.0;
                  d_st.site = &yj_emlrtRSI;
                  randn(moduleInstance, &d_st, b_ub, r2);
                  b_abs(r2, r);
                  i1 = lb->size[0];
                  i2 = r->size[0];
                  emlrtSizeEqCheck1DR2012b(i1, i2, &q_emlrtECI, &c_st);
                  i1 = qi->size[0] * qi->size[1];
                  qi->size[0] = lb->size[0];
                  qi->size[1] = 1;
                  emxEnsureCapacity_real_T(qi, i1);
                  loop_ub = lb->size[0] - 1;
                  for (i1 = 0; i1 <= loop_ub; i1++) {
                    qi->data[i1] = lb->data[i1] + r->data[i1];
                  }
                } else {
                  guard2 = true;
                }
              } else {
                guard2 = true;
              }
            }

            if (guard2) {
              b_isfinite(lb, r1);
              i1 = r3->size[0];
              r3->size[0] = r1->size[0];
              emxEnsureCapacity_boolean_T(r3, i1);
              loop_ub = r1->size[0];
              for (i1 = 0; i1 < loop_ub; i1++) {
                r3->data[i1] = !r1->data[i1];
              }

              d_st.site = &ak_emlrtRSI;
              if (any(&d_st, r3)) {
                b_isfinite(ub, r1);
                d_st.site = &ak_emlrtRSI;
                if (all(&d_st, r1)) {
                  b_ub[0] = (real_T)ub->size[0];
                  b_ub[1] = 1.0;
                  d_st.site = &bk_emlrtRSI;
                  randn(moduleInstance, &d_st, b_ub, r2);
                  b_abs(r2, r);
                  i1 = ub->size[0];
                  i2 = r->size[0];
                  emlrtSizeEqCheck1DR2012b(i1, i2, &r_emlrtECI, &c_st);
                  i1 = qi->size[0] * qi->size[1];
                  qi->size[0] = ub->size[0];
                  qi->size[1] = 1;
                  emxEnsureCapacity_real_T(qi, i1);
                  loop_ub = ub->size[0] - 1;
                  for (i1 = 0; i1 <= loop_ub; i1++) {
                    qi->data[i1] = ub->data[i1] - r->data[i1];
                  }
                } else {
                  guard1 = true;
                }
              } else {
                guard1 = true;
              }
            }

            if (guard1) {
              b_ub[0] = (real_T)ub->size[0];
              b_ub[1] = 1.0;
              d_st.site = &ck_emlrtRSI;
              randn(moduleInstance, &d_st, b_ub, qi);
            }
            break;
          }

          if (p[0] > p[1]) {
            i1 = 0;
            i2 = -1;
          } else {
            i1 = newseed->size[0];
            i2 = (int32_T)emlrtIntegerCheckR2012b(p[0], &lb_emlrtDCI, &b_st);
            i1 = emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &rb_emlrtBCI, &b_st) -
              1;
            i2 = newseed->size[0];
            loop_ub = (int32_T)emlrtIntegerCheckR2012b(p[1], &mb_emlrtDCI, &b_st);
            i2 = emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i2, &sb_emlrtBCI,
              &b_st) - 1;
          }

          loop_ub = qi->size[0];
          emlrtSubAssignSizeCheck1dR2017a((i2 - i1) + 1, loop_ub, &m_emlrtECI,
            &b_st);
          loop_ub = (i2 - i1) + 1;
          for (i2 = 0; i2 < loop_ub; i2++) {
            newseed->data[i1 + i2] = qi->data[i2];
          }
        }
      }

      b_i = newseed->size[0];
      emlrtSubAssignSizeCheck1dR2017a(2, b_i, &l_emlrtECI, sp);
      for (b_i = 0; b_i < 2; b_i++) {
        obj->SeedInternal[b_i] = newseed->data[b_i];
      }

      st.site = &nf_emlrtRSI;
      b_DampedBFGSwGradientProjection_solveInternal(&st, obj, p, &exitFlag, &err,
        &iter);
      if (err < *solutionInfo_Error) {
        for (b_i = 0; b_i < 2; b_i++) {
          xSol[b_i] = p[b_i];
        }

        *solutionInfo_Error = err;
        exitFlagPrev = exitFlag;
      }

      (*solutionInfo_RRAttempts)++;
      *solutionInfo_Iterations += iter;
    }
  }

  emxFree_boolean_T(&r4);
  emxFree_boolean_T(&r3);
  emxFree_real_T(&r2);
  emxFree_boolean_T(&r1);
  emxFree_real_T(&r);
  emxFree_real_T(&rn);
  emxFree_real_T(&lb);
  emxFree_real_T(&ub);
  emxFree_real_T(&qi);
  emxFree_real_T(&newseed);
  *solutionInfo_ExitFlag = (real_T)exitFlagPrev;
  if (*solutionInfo_Error < tol) {
    solutionInfo_Status_size[0] = 1;
    solutionInfo_Status_size[1] = 7;
    for (b_i = 0; b_i < 7; b_i++) {
      solutionInfo_Status_data[b_i] = cv1[b_i];
    }
  } else {
    solutionInfo_Status_size[0] = 1;
    solutionInfo_Status_size[1] = 14;
    for (b_i = 0; b_i < 14; b_i++) {
      solutionInfo_Status_data[b_i] = cv[b_i];
    }
  }
}

static void SystemTimeProvider_reset(robotics_core_internal_SystemTimeProvider
  *obj)
{
  emlrtStack st;
  obj->StartTime = ctimefun();
  st.site = &of_emlrtRSI;
}

static void DampedBFGSwGradientProjection_solveInternal(const emlrtStack *sp,
  robotics_core_internal_DampedBFGSwGradientProjection *obj, real_T xSol[2],
  b_robotics_core_internal_NLPSolverExitFlags *exitFlag, real_T *err, real_T
  *iter)
{
  emlrtStack st;
  emlrtStack b_st;
  real_T x[2];
  int32_T i;
  emxArray_real_T *grad;
  emxArray_real_T *unusedU1;
  robotics_manip_internal_IKExtraArgs *r;
  real_T cost;
  real_T unusedU0[36];
  robotics_manip_internal_IKExtraArgs *args;
  real_T b_cost;
  int32_T b_i;
  int32_T loop_ub;
  real_T H[4];
  emxArray_boolean_T *activeSet;
  emxArray_real_T *A;
  emxArray_real_T *alpha;
  emxArray_real_T *B;
  emxArray_int32_T *ii;
  real_T y[2];
  emxArray_real_T *b_y;
  emxArray_real_T *c_y;
  emxArray_real_T *b_A;
  emxArray_real_T *c_A;
  int32_T i1;
  emxArray_real_T *d_A;
  emxArray_real_T *e_A;
  emxArray_real_T *f_A;
  emxArray_real_T *g_A;
  int32_T end;
  int32_T k;
  int32_T n;
  int32_T i2;
  real_T d;
  emxArray_real_T *bIn;
  emxArray_int32_T *inactiveConstraintIndices;
  emxArray_real_T *gradNew;
  emxArray_int32_T *r1;
  emxArray_int32_T *r2;
  emxArray_int32_T *r3;
  emxArray_int32_T *r4;
  emxArray_int32_T *r5;
  emxArray_real_T *d_y;
  emxArray_real_T *b_b;
  emxArray_real_T *e_y;
  emxArray_boolean_T *b_bIn;
  emxArray_boolean_T *b_activeSet;
  emxArray_boolean_T *c_activeSet;
  emxArray_real_T *h_A;
  emxArray_real_T *i_A;
  emxArray_real_T *b_alpha;
  emxArray_real_T *c_alpha;
  emxArray_real_T *b_grad;
  real_T f_y;
  int32_T exitg2;
  robotics_core_internal_DampedBFGSwGradientProjection *b_obj;
  real_T beta;
  boolean_T flag;
  real_T V[4];
  real_T Hg[2];
  boolean_T guard1 = false;
  boolean_T guard2 = false;
  real_T sigma;
  boolean_T guard3 = false;
  int32_T idxl;
  real_T lambda;
  real_T b_gamma;
  static char_T cv[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'd', 'i', 'm', 'a',
    'g', 'r', 'e', 'e' };

  real_T b_x[2];
  robotics_manip_internal_IKExtraArgs *r6;
  real_T costNew;
  real_T b_costNew;
  static char_T cv1[36] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'a', 'u', 't', 'o', 'D', 'i', 'm', 'I', 'n', 'c', 'o',
    'm', 'p', 'a', 't', 'i', 'b', 'i', 'l', 'i', 't', 'y' };

  static char_T cv2[39] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'e', 'm', 'l', '_', 'm', 'i', 'n', '_', 'o', 'r', '_',
    'm', 'a', 'x', '_', 'v', 'a', 'r', 'D', 'i', 'm', 'Z', 'e', 'r', 'o' };

  real_T m;
  int32_T exitg1;
  boolean_T exitg3;
  robotics_manip_internal_IKExtraArgs *r7;
  real_T c_costNew;
  int32_T iv[2];
  int32_T g_y[2];
  real_T b_V[4];
  real_T P[4];
  static real_T h_y[4] = { 1.4901161193847656E-8, 0.0, 0.0,
    1.4901161193847656E-8 };

  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  for (i = 0; i < 2; i++) {
    x[i] = obj->SeedInternal[i];
  }

  emxInit_real_T1(&grad, 1);
  emxInit_real_T(&unusedU1, 2);
  st.site = &pf_emlrtRSI;
  SystemTimeProvider_reset(&obj->TimeObjInternal);
  st.site = &qf_emlrtRSI;
  IKHelpers_computeCost(&st, x, obj->ExtraArgs, &cost, unusedU0, unusedU1, &r);
  args = r;
  b_cost = cost;
  obj->ExtraArgs = args;
  st.site = &rf_emlrtRSI;
  args = obj->ExtraArgs;
  b_i = grad->size[0];
  grad->size[0] = args->GradTemp->size[0];
  emxEnsureCapacity_real_T1(grad, b_i);
  loop_ub = args->GradTemp->size[0];
  for (b_i = 0; b_i < loop_ub; b_i++) {
    grad->data[b_i] = args->GradTemp->data[b_i];
  }

  b_eye(H);
  emxInit_boolean_T(&activeSet, 1);
  emxInit_real_T(&A, 2);
  emxInit_real_T1(&alpha, 1);
  emxInit_real_T(&B, 2);
  emxInit_int32_T1(&ii, 1);
  if (obj->ConstraintsOn) {
    b_i = B->size[0] * B->size[1];
    B->size[0] = obj->ConstraintMatrix->size[0];
    B->size[1] = obj->ConstraintMatrix->size[1];
    emxEnsureCapacity_real_T(B, b_i);
    loop_ub = obj->ConstraintMatrix->size[0] * obj->ConstraintMatrix->size[1] -
      1;
    for (b_i = 0; b_i <= loop_ub; b_i++) {
      B->data[b_i] = obj->ConstraintMatrix->data[b_i];
    }

    st.site = &og_emlrtRSI;
    dynamic_size_checks(&st, B, B->size[0]);
    if (B->size[0] == 1) {
      b_i = alpha->size[0];
      alpha->size[0] = B->size[1];
      emxEnsureCapacity_real_T1(alpha, b_i);
      loop_ub = B->size[1];
      for (b_i = 0; b_i < loop_ub; b_i++) {
        alpha->data[b_i] = 0.0;
        end = B->size[0];
        for (i1 = 0; i1 < end; i1++) {
          alpha->data[b_i] += B->data[i1 + B->size[0] * b_i] * x[i1];
        }
      }
    } else {
      st.site = &ng_emlrtRSI;
      c_mtimes(B, x, alpha);
    }

    b_i = alpha->size[0];
    i1 = obj->ConstraintBound->size[0];
    emlrtSizeEqCheck1DR2012b(b_i, i1, &w_emlrtECI, sp);
    b_i = activeSet->size[0];
    activeSet->size[0] = alpha->size[0];
    emxEnsureCapacity_boolean_T(activeSet, b_i);
    loop_ub = alpha->size[0];
    for (b_i = 0; b_i < loop_ub; b_i++) {
      activeSet->data[b_i] = (alpha->data[b_i] >= obj->ConstraintBound->data[b_i]);
    }

    end = activeSet->size[0] - 1;
    n = 0;
    for (i = 0; i <= end; i++) {
      if (activeSet->data[i]) {
        n++;
      }
    }

    b_i = ii->size[0];
    ii->size[0] = n;
    emxEnsureCapacity_int32_T(ii, b_i);
    n = 0;
    for (i = 0; i <= end; i++) {
      if (activeSet->data[i]) {
        ii->data[n] = i + 1;
        n++;
      }
    }

    n = obj->ConstraintMatrix->size[1];
    loop_ub = obj->ConstraintMatrix->size[0];
    b_i = A->size[0] * A->size[1];
    A->size[0] = loop_ub;
    A->size[1] = ii->size[0];
    emxEnsureCapacity_real_T(A, b_i);
    end = ii->size[0];
    for (b_i = 0; b_i < end; b_i++) {
      for (i1 = 0; i1 < loop_ub; i1++) {
        i2 = ii->data[b_i];
        A->data[i1 + A->size[0] * b_i] = obj->ConstraintMatrix->data[i1 +
          obj->ConstraintMatrix->size[0] * (emlrtDynamicBoundsCheckR2012b(i2, 1,
          n, &xb_emlrtBCI, sp) - 1)];
      }
    }
  } else {
    y[0] = (real_T)obj->ConstraintBound->size[0];
    b_i = activeSet->size[0];
    activeSet->size[0] = (int32_T)y[0];
    emxEnsureCapacity_boolean_T(activeSet, b_i);
    loop_ub = (int32_T)y[0];
    for (b_i = 0; b_i < loop_ub; b_i++) {
      activeSet->data[b_i] = false;
    }

    A->size[0] = 2;
    A->size[1] = 0;
  }

  b_i = A->size[1] - 1;
  emxInit_real_T(&b_y, 2);
  emxInit_real_T(&c_y, 2);
  emxInit_real_T1(&b_A, 1);
  emxInit_real_T1(&c_A, 1);
  emxInit_real_T1(&d_A, 1);
  emxInit_real_T1(&e_A, 1);
  emxInit_real_T(&f_A, 2);
  emxInit_real_T1(&g_A, 1);
  for (k = 0; k <= b_i; k++) {
    i1 = A->size[1];
    emlrtDynamicBoundsCheckR2012b(k + 1, 1, i1, &wb_emlrtBCI, sp);
    i1 = A->size[0];
    loop_ub = A->size[0];
    i2 = e_A->size[0];
    e_A->size[0] = loop_ub;
    emxEnsureCapacity_real_T1(e_A, i2);
    for (i2 = 0; i2 < loop_ub; i2++) {
      e_A->data[i2] = A->data[i2 + A->size[0] * k];
    }

    st.site = &og_emlrtRSI;
    b_dynamic_size_checks(&st, e_A, i1);
    i1 = A->size[0];
    if (i1 == 1) {
      loop_ub = A->size[0];
      i1 = f_A->size[0] * f_A->size[1];
      f_A->size[0] = 1;
      f_A->size[1] = loop_ub;
      emxEnsureCapacity_real_T(f_A, i1);
      for (i1 = 0; i1 < loop_ub; i1++) {
        f_A->data[i1] = A->data[i1 + A->size[0] * k];
      }

      for (i1 = 0; i1 < 2; i1++) {
        y[i1] = 0.0;
        for (i2 = 0; i2 < 2; i2++) {
          f_y = y[i1] + f_A->data[i2] * H[i2 + (i1 << 1)];
          y[i1] = f_y;
        }
      }
    } else {
      loop_ub = A->size[0];
      i1 = d_A->size[0];
      d_A->size[0] = loop_ub;
      emxEnsureCapacity_real_T1(d_A, i1);
      for (i1 = 0; i1 < loop_ub; i1++) {
        d_A->data[i1] = A->data[i1 + A->size[0] * k];
      }

      d_mtimes(d_A, H, y);
    }

    i1 = A->size[0];
    loop_ub = A->size[0];
    i2 = c_A->size[0];
    c_A->size[0] = loop_ub;
    emxEnsureCapacity_real_T1(c_A, i2);
    for (i2 = 0; i2 < loop_ub; i2++) {
      c_A->data[i2] = A->data[i2 + A->size[0] * k];
    }

    st.site = &og_emlrtRSI;
    c_dynamic_size_checks(&st, c_A, i1);
    i1 = A->size[0];
    if (i1 == 1) {
      loop_ub = A->size[0];
      i1 = g_A->size[0];
      g_A->size[0] = loop_ub;
      emxEnsureCapacity_real_T1(g_A, i1);
      for (i1 = 0; i1 < loop_ub; i1++) {
        g_A->data[i1] = A->data[i1 + A->size[0] * k];
      }

      beta = 0.0;
      for (i1 = 0; i1 < 2; i1++) {
        beta += y[i1] * g_A->data[i1];
      }
    } else {
      loop_ub = A->size[0];
      i1 = b_A->size[0];
      b_A->size[0] = loop_ub;
      emxEnsureCapacity_real_T1(b_A, i1);
      for (i1 = 0; i1 < loop_ub; i1++) {
        b_A->data[i1] = A->data[i1 + A->size[0] * k];
      }

      beta = xdotu(y, b_A);
    }

    beta = 1.0 / beta;
    for (i1 = 0; i1 < 4; i1++) {
      V[i1] = beta * H[i1];
    }

    loop_ub = A->size[0];
    end = A->size[0];
    i1 = b_y->size[0] * b_y->size[1];
    b_y->size[0] = loop_ub;
    b_y->size[1] = end;
    emxEnsureCapacity_real_T(b_y, i1);
    for (i1 = 0; i1 < end; i1++) {
      for (i2 = 0; i2 < loop_ub; i2++) {
        b_y->data[i2 + b_y->size[0] * i1] = A->data[i2 + A->size[0] * k] *
          A->data[i1 + A->size[0] * k];
      }
    }

    st.site = &og_emlrtRSI;
    d_dynamic_size_checks(&st, b_y, b_y->size[0]);
    if (b_y->size[0] == 1) {
      i1 = c_y->size[0] * c_y->size[1];
      c_y->size[0] = 2;
      c_y->size[1] = b_y->size[1];
      emxEnsureCapacity_real_T(c_y, i1);
      for (i1 = 0; i1 < 2; i1++) {
        loop_ub = b_y->size[1];
        for (i2 = 0; i2 < loop_ub; i2++) {
          c_y->data[i1 + (i2 << 1)] = 0.0;
          for (n = 0; n < 2; n++) {
            c_y->data[i1 + (i2 << 1)] += V[i1 + (n << 1)] * b_y->data[n +
              b_y->size[0] * i2];
          }
        }
      }
    } else {
      st.site = &ng_emlrtRSI;
      e_mtimes(V, b_y, c_y);
    }

    st.site = &og_emlrtRSI;
    e_dynamic_size_checks(&st, c_y->size[1]);
    if (c_y->size[1] == 1) {
      for (i1 = 0; i1 < 2; i1++) {
        for (i2 = 0; i2 < 2; i2++) {
          V[i1 + (i2 << 1)] = 0.0;
          for (n = 0; n < 2; n++) {
            V[i1 + (i2 << 1)] += c_y->data[i1 + (n << 1)] * H[n + (i2 << 1)];
          }
        }
      }
    } else {
      f_mtimes(c_y, H, V);
    }

    for (i1 = 0; i1 < 4; i1++) {
      H[i1] -= V[i1];
    }
  }

  emxFree_real_T(&g_A);
  emxFree_real_T(&f_A);
  emxFree_real_T(&e_A);
  emxFree_real_T(&d_A);
  emxFree_real_T(&c_A);
  emxFree_real_T(&b_A);
  for (i = 0; i < 2; i++) {
    xSol[i] = x[i];
  }

  d = obj->MaxNumIterationInternal;
  emlrtForLoopVectorCheckR2012b(1.0, 1.0, d, mxDOUBLE_CLASS, (int32_T)d,
    &f_emlrtRTEI, sp);
  i = 0;
  emxInit_real_T1(&bIn, 1);
  emxInit_int32_T1(&inactiveConstraintIndices, 1);
  emxInit_real_T1(&gradNew, 1);
  emxInit_int32_T1(&r1, 1);
  emxInit_int32_T1(&r2, 1);
  emxInit_int32_T1(&r3, 1);
  emxInit_int32_T1(&r4, 1);
  emxInit_int32_T1(&r5, 1);
  emxInit_real_T(&d_y, 2);
  emxInit_real_T(&b_b, 2);
  emxInit_real_T(&e_y, 2);
  emxInit_boolean_T(&b_bIn, 1);
  emxInit_boolean_T(&b_activeSet, 1);
  emxInit_boolean_T(&c_activeSet, 1);
  emxInit_real_T(&h_A, 2);
  emxInit_real_T(&i_A, 2);
  emxInit_real_T(&b_alpha, 2);
  emxInit_real_T(&c_alpha, 2);
  emxInit_real_T(&b_grad, 2);
  do {
    exitg2 = 0;
    if (i <= (int32_T)d - 1) {
      st.site = &sf_emlrtRSI;
      b_obj = obj;
      b_st.site = &sf_emlrtRSI;
      beta = SystemTimeProvider_getElapsedTime(&b_st, &obj->TimeObjInternal);
      flag = (beta > b_obj->MaxTimeInternal);
      if (flag) {
        *exitFlag = robotics_core_internal_NLPSolverExitFlags_TimeLimitExceeded;
        st.site = &tf_emlrtRSI;
        *err = IKHelpers_evaluateSolution(&st, obj->ExtraArgs);
        *iter = (real_T)i + 1.0;
        exitg2 = 1;
      } else {
        if ((A->size[0] == 0) || (A->size[1] == 0)) {
          b_i = alpha->size[0];
          alpha->size[0] = 1;
          emxEnsureCapacity_real_T1(alpha, b_i);
          alpha->data[0] = 0.0;
        } else {
          st.site = &og_emlrtRSI;
          g_dynamic_size_checks(&st, A, A, A->size[0], A->size[0]);
          if (A->size[0] == 1) {
            b_i = b_y->size[0] * b_y->size[1];
            b_y->size[0] = A->size[1];
            b_y->size[1] = A->size[1];
            emxEnsureCapacity_real_T(b_y, b_i);
            loop_ub = A->size[1];
            for (b_i = 0; b_i < loop_ub; b_i++) {
              end = A->size[1];
              for (i1 = 0; i1 < end; i1++) {
                b_y->data[b_i + b_y->size[0] * i1] = 0.0;
                n = A->size[0];
                for (i2 = 0; i2 < n; i2++) {
                  b_y->data[b_i + b_y->size[0] * i1] += A->data[i2 + A->size[0] *
                    b_i] * A->data[i2 + A->size[0] * i1];
                }
              }
            }
          } else {
            st.site = &ng_emlrtRSI;
            g_mtimes(A, A, b_y);
          }

          b_i = i_A->size[0] * i_A->size[1];
          i_A->size[0] = A->size[1];
          i_A->size[1] = A->size[0];
          emxEnsureCapacity_real_T(i_A, b_i);
          loop_ub = A->size[0];
          for (b_i = 0; b_i < loop_ub; b_i++) {
            end = A->size[1];
            for (i1 = 0; i1 < end; i1++) {
              i_A->data[i1 + i_A->size[0] * b_i] = A->data[b_i + A->size[0] * i1];
            }
          }

          st.site = &uf_emlrtRSI;
          mldivide(&st, b_y, i_A, B);
          st.site = &og_emlrtRSI;
          h_dynamic_size_checks(&st, B, grad, B->size[1], grad->size[0]);
          if ((B->size[1] == 1) || (grad->size[0] == 1)) {
            b_i = alpha->size[0];
            alpha->size[0] = B->size[0];
            emxEnsureCapacity_real_T1(alpha, b_i);
            loop_ub = B->size[0];
            for (b_i = 0; b_i < loop_ub; b_i++) {
              alpha->data[b_i] = 0.0;
              end = B->size[1];
              for (i1 = 0; i1 < end; i1++) {
                alpha->data[b_i] += B->data[b_i + B->size[0] * i1] * grad->
                  data[i1];
              }
            }
          } else {
            st.site = &ng_emlrtRSI;
            h_mtimes(B, grad, alpha);
          }
        }

        st.site = &og_emlrtRSI;
        i_dynamic_size_checks(&st, grad, grad->size[0]);
        if (grad->size[0] == 1) {
          for (b_i = 0; b_i < 2; b_i++) {
            Hg[b_i] = 0.0;
            for (i1 = 0; i1 < 2; i1++) {
              sigma = Hg[b_i] + H[b_i + (i1 << 1)] * grad->data[i1];
              Hg[b_i] = sigma;
            }
          }
        } else {
          i_mtimes(H, grad, Hg);
        }

        st.site = &vf_emlrtRSI;
        if (DampedBFGSwGradientProjection_atLocalMinimum(&st, obj, Hg, alpha)) {
          *exitFlag =
            robotics_core_internal_NLPSolverExitFlags_LocalMinimumFound;
          st.site = &wf_emlrtRSI;
          *err = b_IKHelpers_evaluateSolution(&st, obj->ExtraArgs);
          *iter = (real_T)i + 1.0;
          exitg2 = 1;
        } else {
          guard1 = false;
          guard2 = false;
          guard3 = false;
          if (obj->ConstraintsOn && ((A->size[0] != 0) && (A->size[1] != 0))) {
            st.site = &og_emlrtRSI;
            g_dynamic_size_checks(&st, A, A, A->size[0], A->size[0]);
            if (A->size[0] == 1) {
              b_i = b_y->size[0] * b_y->size[1];
              b_y->size[0] = A->size[1];
              b_y->size[1] = A->size[1];
              emxEnsureCapacity_real_T(b_y, b_i);
              loop_ub = A->size[1];
              for (b_i = 0; b_i < loop_ub; b_i++) {
                end = A->size[1];
                for (i1 = 0; i1 < end; i1++) {
                  b_y->data[b_i + b_y->size[0] * i1] = 0.0;
                  n = A->size[0];
                  for (i2 = 0; i2 < n; i2++) {
                    b_y->data[b_i + b_y->size[0] * i1] += A->data[i2 + A->size[0]
                      * b_i] * A->data[i2 + A->size[0] * i1];
                  }
                }
              }
            } else {
              st.site = &ng_emlrtRSI;
              g_mtimes(A, A, b_y);
            }

            st.site = &xf_emlrtRSI;
            b_inv(&st, b_y, B);
            st.site = &yf_emlrtRSI;
            diag(&st, B, gradNew);
            st.site = &yf_emlrtRSI;
            d_sqrt(&st, gradNew);
            if (!scalexpCompatible(alpha, gradNew)) {
              st.site = &tk_emlrtRSI;
              f_error(&st, c_emlrt_marshallOut(&st, cv), getString(&st,
                       b_message(&st, c_emlrt_marshallOut(&st, cv), &u_emlrtMCI),
                       &u_emlrtMCI), &u_emlrtMCI);
            }

            b_i = alpha->size[0];
            emxEnsureCapacity_real_T1(alpha, b_i);
            loop_ub = alpha->size[0];
            for (b_i = 0; b_i < loop_ub; b_i++) {
              alpha->data[b_i] /= gradNew->data[b_i];
            }

            if ((alpha->size[0] == 1) || (alpha->size[0] != 1)) {
            } else {
              st.site = &uk_emlrtRSI;
              f_error(&st, d_emlrt_marshallOut(&st, cv1), getString(&st,
                       b_message(&st, d_emlrt_marshallOut(&st, cv1), &v_emlrtMCI),
                       &v_emlrtMCI), &v_emlrtMCI);
            }

            if (!(alpha->size[0] >= 1)) {
              st.site = &sk_emlrtRSI;
              f_error(&st, b_emlrt_marshallOut(&st, cv2), getString(&st,
                       b_message(&st, b_emlrt_marshallOut(&st, cv2), &w_emlrtMCI),
                       &w_emlrtMCI), &w_emlrtMCI);
            }

            n = alpha->size[0];
            if (alpha->size[0] <= 2) {
              if (alpha->size[0] == 1) {
                beta = alpha->data[0];
                idxl = 0;
              } else if ((alpha->data[0] < alpha->data[1]) ||
                         (muDoubleScalarIsNaN(alpha->data[0]) &&
                          (!muDoubleScalarIsNaN(alpha->data[1])))) {
                beta = alpha->data[1];
                idxl = 1;
              } else {
                beta = alpha->data[0];
                idxl = 0;
              }
            } else {
              if (!muDoubleScalarIsNaN(alpha->data[0])) {
                idxl = 1;
              } else {
                idxl = 0;
                k = 2;
                exitg3 = false;
                while ((!exitg3) && (k <= alpha->size[0])) {
                  if (!muDoubleScalarIsNaN(alpha->data[k - 1])) {
                    idxl = k;
                    exitg3 = true;
                  } else {
                    k++;
                  }
                }
              }

              if (idxl == 0) {
                beta = alpha->data[0];
              } else {
                beta = alpha->data[idxl - 1];
                for (k = idxl + 1; k <= n; k++) {
                  if (beta < alpha->data[k - 1]) {
                    beta = alpha->data[k - 1];
                    idxl = k;
                  }
                }

                idxl--;
              }
            }

            if (d_norm(Hg) < 0.5 * beta) {
              st.site = &ff_emlrtRSI;
              b_eml_find(&st, activeSet, ii);
              b_i = alpha->size[0];
              alpha->size[0] = ii->size[0];
              emxEnsureCapacity_real_T1(alpha, b_i);
              loop_ub = ii->size[0];
              for (b_i = 0; b_i < loop_ub; b_i++) {
                alpha->data[b_i] = (real_T)ii->data[b_i];
              }

              b_i = alpha->size[0];
              emlrtDynamicBoundsCheckR2012b(idxl + 1, 1, b_i, &vb_emlrtBCI, sp);
              b_i = activeSet->size[0];
              i1 = (int32_T)alpha->data[idxl];
              activeSet->data[emlrtDynamicBoundsCheckR2012b(i1, 1, b_i,
                &bc_emlrtBCI, sp) - 1] = false;
              end = activeSet->size[0] - 1;
              n = 0;
              for (k = 0; k <= end; k++) {
                if (activeSet->data[k]) {
                  n++;
                }
              }

              b_i = r3->size[0];
              r3->size[0] = n;
              emxEnsureCapacity_int32_T(r3, b_i);
              n = 0;
              for (k = 0; k <= end; k++) {
                if (activeSet->data[k]) {
                  r3->data[n] = k + 1;
                  n++;
                }
              }

              n = obj->ConstraintMatrix->size[1];
              loop_ub = obj->ConstraintMatrix->size[0];
              b_i = A->size[0] * A->size[1];
              A->size[0] = loop_ub;
              A->size[1] = r3->size[0];
              emxEnsureCapacity_real_T(A, b_i);
              end = r3->size[0];
              for (b_i = 0; b_i < end; b_i++) {
                for (i1 = 0; i1 < loop_ub; i1++) {
                  i2 = r3->data[b_i];
                  A->data[i1 + A->size[0] * b_i] = obj->ConstraintMatrix->
                    data[i1 + obj->ConstraintMatrix->size[0] *
                    (emlrtDynamicBoundsCheckR2012b(i2, 1, n, &cc_emlrtBCI, sp) -
                     1)];
                }
              }

              st.site = &og_emlrtRSI;
              g_dynamic_size_checks(&st, A, A, A->size[0], A->size[0]);
              if ((A->size[0] == 1) || (A->size[0] == 1)) {
                b_i = b_y->size[0] * b_y->size[1];
                b_y->size[0] = A->size[1];
                b_y->size[1] = A->size[1];
                emxEnsureCapacity_real_T(b_y, b_i);
                loop_ub = A->size[1];
                for (b_i = 0; b_i < loop_ub; b_i++) {
                  end = A->size[1];
                  for (i1 = 0; i1 < end; i1++) {
                    b_y->data[b_i + b_y->size[0] * i1] = 0.0;
                    n = A->size[0];
                    for (i2 = 0; i2 < n; i2++) {
                      b_y->data[b_i + b_y->size[0] * i1] += A->data[i2 + A->
                        size[0] * b_i] * A->data[i2 + A->size[0] * i1];
                    }
                  }
                }
              } else {
                st.site = &ng_emlrtRSI;
                g_mtimes(A, A, b_y);
              }

              b_i = h_A->size[0] * h_A->size[1];
              h_A->size[0] = A->size[1];
              h_A->size[1] = A->size[0];
              emxEnsureCapacity_real_T(h_A, b_i);
              loop_ub = A->size[0];
              for (b_i = 0; b_i < loop_ub; b_i++) {
                end = A->size[1];
                for (i1 = 0; i1 < end; i1++) {
                  h_A->data[i1 + h_A->size[0] * b_i] = A->data[b_i + A->size[0] *
                    i1];
                }
              }

              st.site = &ag_emlrtRSI;
              mldivide(&st, b_y, h_A, b_b);
              st.site = &og_emlrtRSI;
              g_dynamic_size_checks(&st, A, b_b, A->size[1], b_b->size[0]);
              if ((A->size[1] == 1) || (b_b->size[0] == 1)) {
                b_i = B->size[0] * B->size[1];
                B->size[0] = A->size[0];
                B->size[1] = b_b->size[1];
                emxEnsureCapacity_real_T(B, b_i);
                loop_ub = A->size[0];
                for (b_i = 0; b_i < loop_ub; b_i++) {
                  end = b_b->size[1];
                  for (i1 = 0; i1 < end; i1++) {
                    B->data[b_i + B->size[0] * i1] = 0.0;
                    n = A->size[1];
                    for (i2 = 0; i2 < n; i2++) {
                      B->data[b_i + B->size[0] * i1] += A->data[b_i + A->size[0]
                        * i2] * b_b->data[i2 + b_b->size[0] * i1];
                    }
                  }
                }
              } else {
                st.site = &ng_emlrtRSI;
                j_mtimes(A, b_b, B);
              }

              for (b_i = 0; b_i < 2; b_i++) {
                iv[b_i] = 2;
              }

              for (b_i = 0; b_i < 2; b_i++) {
                g_y[b_i] = B->size[b_i];
              }

              emlrtSizeEqCheckNDR2012b(iv, g_y, &v_emlrtECI, sp);
              b_eye(P);
              for (b_i = 0; b_i < 4; b_i++) {
                beta = P[b_i] - B->data[b_i];
                P[b_i] = beta;
              }

              sigma = alpha->data[idxl];
              loop_ub = obj->ConstraintMatrix->size[0];
              b_i = obj->ConstraintMatrix->size[1];
              b_i = emlrtDynamicBoundsCheckR2012b((int32_T)sigma, 1, b_i,
                &ub_emlrtBCI, sp);
              i1 = alpha->size[0];
              alpha->size[0] = loop_ub;
              emxEnsureCapacity_real_T1(alpha, i1);
              for (i1 = 0; i1 < loop_ub; i1++) {
                alpha->data[i1] = obj->ConstraintMatrix->data[i1 +
                  obj->ConstraintMatrix->size[0] * (b_i - 1)];
              }

              st.site = &og_emlrtRSI;
              b_dynamic_size_checks(&st, alpha, alpha->size[0]);
              if (alpha->size[0] == 1) {
                b_i = c_alpha->size[0] * c_alpha->size[1];
                c_alpha->size[0] = 1;
                c_alpha->size[1] = alpha->size[0];
                emxEnsureCapacity_real_T(c_alpha, b_i);
                loop_ub = alpha->size[0];
                for (b_i = 0; b_i < loop_ub; b_i++) {
                  c_alpha->data[b_i] = alpha->data[b_i];
                }

                for (b_i = 0; b_i < 2; b_i++) {
                  y[b_i] = 0.0;
                  for (i1 = 0; i1 < 2; i1++) {
                    f_y = y[b_i] + c_alpha->data[i1] * P[i1 + (b_i << 1)];
                    y[b_i] = f_y;
                  }
                }
              } else {
                d_mtimes(alpha, P, y);
              }

              st.site = &og_emlrtRSI;
              c_dynamic_size_checks(&st, alpha, alpha->size[0]);
              if (alpha->size[0] == 1) {
                f_y = 0.0;
                for (b_i = 0; b_i < 2; b_i++) {
                  f_y += y[b_i] * alpha->data[b_i];
                }
              } else {
                f_y = xdotu(y, alpha);
              }

              beta = 1.0 / f_y;
              for (b_i = 0; b_i < 4; b_i++) {
                V[b_i] = beta * P[b_i];
              }

              b_i = b_y->size[0] * b_y->size[1];
              b_y->size[0] = alpha->size[0];
              b_y->size[1] = alpha->size[0];
              emxEnsureCapacity_real_T(b_y, b_i);
              loop_ub = alpha->size[0];
              for (b_i = 0; b_i < loop_ub; b_i++) {
                end = alpha->size[0];
                for (i1 = 0; i1 < end; i1++) {
                  b_y->data[i1 + b_y->size[0] * b_i] = alpha->data[i1] *
                    alpha->data[b_i];
                }
              }

              st.site = &og_emlrtRSI;
              d_dynamic_size_checks(&st, b_y, b_y->size[0]);
              if (b_y->size[0] == 1) {
                b_i = c_y->size[0] * c_y->size[1];
                c_y->size[0] = 2;
                c_y->size[1] = b_y->size[1];
                emxEnsureCapacity_real_T(c_y, b_i);
                for (b_i = 0; b_i < 2; b_i++) {
                  loop_ub = b_y->size[1];
                  for (i1 = 0; i1 < loop_ub; i1++) {
                    c_y->data[b_i + (i1 << 1)] = 0.0;
                    for (i2 = 0; i2 < 2; i2++) {
                      c_y->data[b_i + (i1 << 1)] += V[b_i + (i2 << 1)] *
                        b_y->data[i2 + b_y->size[0] * i1];
                    }
                  }
                }
              } else {
                st.site = &ng_emlrtRSI;
                e_mtimes(V, b_y, c_y);
              }

              st.site = &og_emlrtRSI;
              e_dynamic_size_checks(&st, c_y->size[1]);
              if (c_y->size[1] == 1) {
                for (b_i = 0; b_i < 2; b_i++) {
                  for (i1 = 0; i1 < 2; i1++) {
                    V[b_i + (i1 << 1)] = 0.0;
                    for (i2 = 0; i2 < 2; i2++) {
                      V[b_i + (i1 << 1)] += c_y->data[b_i + (i2 << 1)] * P[i2 +
                        (i1 << 1)];
                    }
                  }
                }
              } else {
                f_mtimes(c_y, P, V);
              }

              for (b_i = 0; b_i < 4; b_i++) {
                H[b_i] += V[b_i];
              }

              i++;
            } else {
              guard3 = true;
            }
          } else {
            guard3 = true;
          }

          if (guard3) {
            for (b_i = 0; b_i < 2; b_i++) {
              Hg[b_i] = -Hg[b_i];
            }

            idxl = -1;
            if (obj->ConstraintsOn) {
              b_i = c_activeSet->size[0];
              c_activeSet->size[0] = activeSet->size[0];
              emxEnsureCapacity_boolean_T(c_activeSet, b_i);
              loop_ub = activeSet->size[0];
              for (b_i = 0; b_i < loop_ub; b_i++) {
                c_activeSet->data[b_i] = !activeSet->data[b_i];
              }

              st.site = &bg_emlrtRSI;
              if (any(&st, c_activeSet)) {
                end = activeSet->size[0] - 1;
                n = 0;
                for (k = 0; k <= end; k++) {
                  if (!activeSet->data[k]) {
                    n++;
                  }
                }

                b_i = r1->size[0];
                r1->size[0] = n;
                emxEnsureCapacity_int32_T(r1, b_i);
                n = 0;
                for (k = 0; k <= end; k++) {
                  if (!activeSet->data[k]) {
                    r1->data[n] = k + 1;
                    n++;
                  }
                }

                n = obj->ConstraintBound->size[0];
                b_i = bIn->size[0];
                bIn->size[0] = r1->size[0];
                emxEnsureCapacity_real_T1(bIn, b_i);
                loop_ub = r1->size[0];
                for (b_i = 0; b_i < loop_ub; b_i++) {
                  i1 = r1->data[b_i];
                  bIn->data[b_i] = obj->ConstraintBound->
                    data[emlrtDynamicBoundsCheckR2012b(i1, 1, n, &yb_emlrtBCI,
                    sp) - 1];
                }

                end = activeSet->size[0] - 1;
                n = 0;
                for (k = 0; k <= end; k++) {
                  if (!activeSet->data[k]) {
                    n++;
                  }
                }

                b_i = r2->size[0];
                r2->size[0] = n;
                emxEnsureCapacity_int32_T(r2, b_i);
                n = 0;
                for (k = 0; k <= end; k++) {
                  if (!activeSet->data[k]) {
                    r2->data[n] = k + 1;
                    n++;
                  }
                }

                n = obj->ConstraintMatrix->size[1];
                loop_ub = obj->ConstraintMatrix->size[0];
                b_i = B->size[0] * B->size[1];
                B->size[0] = loop_ub;
                B->size[1] = r2->size[0];
                emxEnsureCapacity_real_T(B, b_i);
                end = r2->size[0];
                for (b_i = 0; b_i < end; b_i++) {
                  for (i1 = 0; i1 < loop_ub; i1++) {
                    i2 = r2->data[b_i];
                    B->data[i1 + B->size[0] * b_i] = obj->ConstraintMatrix->
                      data[i1 + obj->ConstraintMatrix->size[0] *
                      (emlrtDynamicBoundsCheckR2012b(i2, 1, n, &ac_emlrtBCI, sp)
                       - 1)];
                  }
                }

                b_i = b_activeSet->size[0];
                b_activeSet->size[0] = activeSet->size[0];
                emxEnsureCapacity_boolean_T(b_activeSet, b_i);
                loop_ub = activeSet->size[0];
                for (b_i = 0; b_i < loop_ub; b_i++) {
                  b_activeSet->data[b_i] = !activeSet->data[b_i];
                }

                st.site = &ff_emlrtRSI;
                b_eml_find(&st, b_activeSet, ii);
                b_i = inactiveConstraintIndices->size[0];
                inactiveConstraintIndices->size[0] = ii->size[0];
                emxEnsureCapacity_int32_T(inactiveConstraintIndices, b_i);
                loop_ub = ii->size[0];
                for (b_i = 0; b_i < loop_ub; b_i++) {
                  inactiveConstraintIndices->data[b_i] = ii->data[b_i];
                }

                st.site = &og_emlrtRSI;
                dynamic_size_checks(&st, B, B->size[0]);
                if (B->size[0] == 1) {
                  b_i = alpha->size[0];
                  alpha->size[0] = B->size[1];
                  emxEnsureCapacity_real_T1(alpha, b_i);
                  loop_ub = B->size[1];
                  for (b_i = 0; b_i < loop_ub; b_i++) {
                    alpha->data[b_i] = 0.0;
                    end = B->size[0];
                    for (i1 = 0; i1 < end; i1++) {
                      alpha->data[b_i] += B->data[i1 + B->size[0] * b_i] * x[i1];
                    }
                  }
                } else {
                  st.site = &ng_emlrtRSI;
                  c_mtimes(B, x, alpha);
                }

                b_i = bIn->size[0];
                i1 = alpha->size[0];
                emlrtSizeEqCheck1DR2012b(b_i, i1, &u_emlrtECI, sp);
                st.site = &og_emlrtRSI;
                dynamic_size_checks(&st, B, B->size[0]);
                if (B->size[0] == 1) {
                  b_i = gradNew->size[0];
                  gradNew->size[0] = B->size[1];
                  emxEnsureCapacity_real_T1(gradNew, b_i);
                  loop_ub = B->size[1];
                  for (b_i = 0; b_i < loop_ub; b_i++) {
                    gradNew->data[b_i] = 0.0;
                    end = B->size[0];
                    for (i1 = 0; i1 < end; i1++) {
                      gradNew->data[b_i] += B->data[i1 + B->size[0] * b_i] *
                        Hg[i1];
                    }
                  }
                } else {
                  st.site = &ng_emlrtRSI;
                  c_mtimes(B, Hg, gradNew);
                }

                b_i = bIn->size[0];
                emxEnsureCapacity_real_T1(bIn, b_i);
                loop_ub = bIn->size[0];
                for (b_i = 0; b_i < loop_ub; b_i++) {
                  bIn->data[b_i] -= alpha->data[b_i];
                }

                if (!scalexpCompatible(bIn, gradNew)) {
                  st.site = &tk_emlrtRSI;
                  f_error(&st, c_emlrt_marshallOut(&st, cv), getString(&st,
                           b_message(&st, c_emlrt_marshallOut(&st, cv),
                                     &u_emlrtMCI), &u_emlrtMCI), &u_emlrtMCI);
                }

                b_i = bIn->size[0];
                emxEnsureCapacity_real_T1(bIn, b_i);
                loop_ub = bIn->size[0];
                for (b_i = 0; b_i < loop_ub; b_i++) {
                  bIn->data[b_i] /= gradNew->data[b_i];
                }

                b_i = b_bIn->size[0];
                b_bIn->size[0] = bIn->size[0];
                emxEnsureCapacity_boolean_T(b_bIn, b_i);
                loop_ub = bIn->size[0];
                for (b_i = 0; b_i < loop_ub; b_i++) {
                  b_bIn->data[b_i] = (bIn->data[b_i] > 0.0);
                }

                st.site = &ff_emlrtRSI;
                b_eml_find(&st, b_bIn, ii);
                b_i = alpha->size[0];
                alpha->size[0] = ii->size[0];
                emxEnsureCapacity_real_T1(alpha, b_i);
                loop_ub = ii->size[0];
                for (b_i = 0; b_i < loop_ub; b_i++) {
                  alpha->data[b_i] = (real_T)ii->data[b_i];
                }

                if (alpha->size[0] != 0) {
                  end = bIn->size[0] - 1;
                  n = 0;
                  for (k = 0; k <= end; k++) {
                    if (bIn->data[k] > 0.0) {
                      n++;
                    }
                  }

                  b_i = r4->size[0];
                  r4->size[0] = n;
                  emxEnsureCapacity_int32_T(r4, b_i);
                  n = 0;
                  for (k = 0; k <= end; k++) {
                    if (bIn->data[k] > 0.0) {
                      r4->data[n] = k + 1;
                      n++;
                    }
                  }

                  n = bIn->size[0];
                  loop_ub = r4->size[0];
                  for (b_i = 0; b_i < loop_ub; b_i++) {
                    i1 = r4->data[b_i];
                    emlrtDynamicBoundsCheckR2012b(i1, 1, n, &fc_emlrtBCI, sp);
                  }

                  if ((r4->size[0] == 1) || (r4->size[0] != 1)) {
                  } else {
                    st.site = &uk_emlrtRSI;
                    f_error(&st, d_emlrt_marshallOut(&st, cv1), getString(&st,
                             b_message(&st, d_emlrt_marshallOut(&st, cv1),
                                       &v_emlrtMCI), &v_emlrtMCI), &v_emlrtMCI);
                  }

                  if (!(r4->size[0] >= 1)) {
                    st.site = &sk_emlrtRSI;
                    f_error(&st, b_emlrt_marshallOut(&st, cv2), getString(&st,
                             b_message(&st, b_emlrt_marshallOut(&st, cv2),
                                       &w_emlrtMCI), &w_emlrtMCI), &w_emlrtMCI);
                  }

                  n = r4->size[0];
                  if (r4->size[0] <= 2) {
                    if (r4->size[0] == 1) {
                      lambda = bIn->data[r4->data[0] - 1];
                      idxl = 1;
                    } else if ((bIn->data[r4->data[0] - 1] > bIn->data[r4->data
                                [1] - 1]) || (muDoubleScalarIsNaN(bIn->data
                                 [r4->data[0] - 1]) && (!muDoubleScalarIsNaN
                                 (bIn->data[r4->data[1] - 1])))) {
                      lambda = bIn->data[r4->data[1] - 1];
                      idxl = 2;
                    } else {
                      lambda = bIn->data[r4->data[0] - 1];
                      idxl = 1;
                    }
                  } else {
                    if (!muDoubleScalarIsNaN(bIn->data[r4->data[0] - 1])) {
                      idxl = 1;
                    } else {
                      idxl = 0;
                      k = 2;
                      exitg3 = false;
                      while ((!exitg3) && (k <= r4->size[0])) {
                        if (!muDoubleScalarIsNaN(bIn->data[r4->data[k - 1] - 1]))
                        {
                          idxl = k;
                          exitg3 = true;
                        } else {
                          k++;
                        }
                      }
                    }

                    if (idxl == 0) {
                      lambda = bIn->data[r4->data[0] - 1];
                      idxl = 1;
                    } else {
                      lambda = bIn->data[r4->data[idxl - 1] - 1];
                      for (k = idxl + 1; k <= n; k++) {
                        if (lambda > bIn->data[r4->data[k - 1] - 1]) {
                          lambda = bIn->data[r4->data[k - 1] - 1];
                          idxl = k;
                        }
                      }
                    }
                  }

                  b_i = inactiveConstraintIndices->size[0];
                  i1 = alpha->size[0];
                  i1 = (int32_T)alpha->data[emlrtDynamicBoundsCheckR2012b(idxl,
                    1, i1, &gc_emlrtBCI, sp) - 1];
                  idxl = inactiveConstraintIndices->
                    data[emlrtDynamicBoundsCheckR2012b(i1, 1, b_i, &gc_emlrtBCI,
                    sp) - 1];
                } else {
                  lambda = 0.0;
                }
              } else {
                lambda = 0.0;
              }
            } else {
              lambda = 0.0;
            }

            if (lambda > 0.0) {
              b_gamma = muDoubleScalarMin(1.0, lambda);
            } else {
              b_gamma = 1.0;
            }

            beta = obj->ArmijoRuleBeta;
            sigma = obj->ArmijoRuleSigma;
            for (b_i = 0; b_i < 2; b_i++) {
              b_x[b_i] = x[b_i] + b_gamma * Hg[b_i];
            }

            st.site = &cg_emlrtRSI;
            b_IKHelpers_computeCost(&st, b_x, obj->ExtraArgs, &b_costNew,
              unusedU0, unusedU1, &r6);
            args = r6;
            costNew = b_costNew;
            obj->ExtraArgs = args;
            m = 0.0;
            do {
              exitg1 = 0;
              b_i = d_y->size[0] * d_y->size[1];
              d_y->size[0] = 1;
              d_y->size[1] = grad->size[0];
              emxEnsureCapacity_real_T(d_y, b_i);
              loop_ub = grad->size[0];
              for (b_i = 0; b_i < loop_ub; b_i++) {
                d_y->data[b_i] = -sigma * grad->data[b_i];
              }

              for (b_i = 0; b_i < 2; b_i++) {
                y[b_i] = b_gamma * Hg[b_i];
              }

              st.site = &og_emlrtRSI;
              j_dynamic_size_checks(&st, d_y, d_y->size[1]);
              if (d_y->size[1] == 1) {
                f_y = 0.0;
                for (b_i = 0; b_i < 2; b_i++) {
                  f_y += d_y->data[b_i] * y[b_i];
                }
              } else {
                f_y = k_mtimes(d_y, y);
              }

              if (b_cost - costNew < f_y) {
                st.site = &dg_emlrtRSI;
                flag = (b_gamma < obj->StepTolerance);
                if (flag) {
                  *exitFlag =
                    robotics_core_internal_NLPSolverExitFlags_StepSizeBelowMinimum;
                  st.site = &eg_emlrtRSI;
                  *err = c_IKHelpers_evaluateSolution(&st, obj->ExtraArgs);
                  *iter = (real_T)i + 1.0;
                  exitg1 = 1;
                } else {
                  b_gamma *= beta;
                  m++;
                  for (b_i = 0; b_i < 2; b_i++) {
                    b_x[b_i] = x[b_i] + b_gamma * Hg[b_i];
                  }

                  st.site = &fg_emlrtRSI;
                  c_IKHelpers_computeCost(&st, b_x, obj->ExtraArgs, &c_costNew,
                    unusedU0, unusedU1, &r7);
                  args = r7;
                  costNew = c_costNew;
                  obj->ExtraArgs = args;
                }
              } else {
                for (k = 0; k < 2; k++) {
                  xSol[k] = x[k] + b_gamma * Hg[k];
                }

                st.site = &gg_emlrtRSI;
                args = obj->ExtraArgs;
                b_i = gradNew->size[0];
                gradNew->size[0] = args->GradTemp->size[0];
                emxEnsureCapacity_real_T1(gradNew, b_i);
                loop_ub = args->GradTemp->size[0];
                for (b_i = 0; b_i < loop_ub; b_i++) {
                  gradNew->data[b_i] = args->GradTemp->data[b_i];
                }

                exitg1 = 2;
              }
            } while (exitg1 == 0);

            if (exitg1 == 1) {
              exitg2 = 1;
            } else if (m == 0.0) {
              sigma = 2.2204460492503131E-16;
              st.site = &hg_emlrtRSI;
              b_sqrt(&st, &sigma);
              if (muDoubleScalarAbs(b_gamma - lambda) < 1.4901161193847656E-8) {
                loop_ub = obj->ConstraintMatrix->size[0];
                b_i = obj->ConstraintMatrix->size[1];
                n = emlrtDynamicBoundsCheckR2012b(idxl, 1, b_i, &tb_emlrtBCI, sp);
                b_i = alpha->size[0];
                alpha->size[0] = loop_ub;
                emxEnsureCapacity_real_T1(alpha, b_i);
                for (b_i = 0; b_i < loop_ub; b_i++) {
                  alpha->data[b_i] = obj->ConstraintMatrix->data[b_i +
                    obj->ConstraintMatrix->size[0] * (n - 1)];
                }

                b_i = activeSet->size[0];
                activeSet->data[emlrtDynamicBoundsCheckR2012b(idxl, 1, b_i,
                  &dc_emlrtBCI, sp) - 1] = true;
                end = activeSet->size[0] - 1;
                n = 0;
                for (k = 0; k <= end; k++) {
                  if (activeSet->data[k]) {
                    n++;
                  }
                }

                b_i = r5->size[0];
                r5->size[0] = n;
                emxEnsureCapacity_int32_T(r5, b_i);
                n = 0;
                for (k = 0; k <= end; k++) {
                  if (activeSet->data[k]) {
                    r5->data[n] = k + 1;
                    n++;
                  }
                }

                n = obj->ConstraintMatrix->size[1];
                loop_ub = obj->ConstraintMatrix->size[0];
                b_i = A->size[0] * A->size[1];
                A->size[0] = loop_ub;
                A->size[1] = r5->size[0];
                emxEnsureCapacity_real_T(A, b_i);
                end = r5->size[0];
                for (b_i = 0; b_i < end; b_i++) {
                  for (i1 = 0; i1 < loop_ub; i1++) {
                    i2 = r5->data[b_i];
                    A->data[i1 + A->size[0] * b_i] = obj->ConstraintMatrix->
                      data[i1 + obj->ConstraintMatrix->size[0] *
                      (emlrtDynamicBoundsCheckR2012b(i2, 1, n, &ec_emlrtBCI, sp)
                       - 1)];
                  }
                }

                st.site = &og_emlrtRSI;
                b_dynamic_size_checks(&st, alpha, alpha->size[0]);
                if (alpha->size[0] == 1) {
                  b_i = b_alpha->size[0] * b_alpha->size[1];
                  b_alpha->size[0] = 1;
                  b_alpha->size[1] = alpha->size[0];
                  emxEnsureCapacity_real_T(b_alpha, b_i);
                  loop_ub = alpha->size[0];
                  for (b_i = 0; b_i < loop_ub; b_i++) {
                    b_alpha->data[b_i] = alpha->data[b_i];
                  }

                  for (b_i = 0; b_i < 2; b_i++) {
                    y[b_i] = 0.0;
                    for (i1 = 0; i1 < 2; i1++) {
                      f_y = y[b_i] + b_alpha->data[i1] * H[i1 + (b_i << 1)];
                      y[b_i] = f_y;
                    }
                  }
                } else {
                  d_mtimes(alpha, H, y);
                }

                st.site = &og_emlrtRSI;
                c_dynamic_size_checks(&st, alpha, alpha->size[0]);
                if (alpha->size[0] == 1) {
                  f_y = 0.0;
                  for (b_i = 0; b_i < 2; b_i++) {
                    f_y += y[b_i] * alpha->data[b_i];
                  }
                } else {
                  f_y = xdotu(y, alpha);
                }

                b_i = b_y->size[0] * b_y->size[1];
                b_y->size[0] = alpha->size[0];
                b_y->size[1] = alpha->size[0];
                emxEnsureCapacity_real_T(b_y, b_i);
                loop_ub = alpha->size[0];
                for (b_i = 0; b_i < loop_ub; b_i++) {
                  end = alpha->size[0];
                  for (i1 = 0; i1 < end; i1++) {
                    b_y->data[i1 + b_y->size[0] * b_i] = alpha->data[i1] *
                      alpha->data[b_i];
                  }
                }

                st.site = &og_emlrtRSI;
                k_dynamic_size_checks(&st, b_y, b_y->size[1]);
                if (b_y->size[1] == 1) {
                  b_i = e_y->size[0] * e_y->size[1];
                  e_y->size[0] = b_y->size[0];
                  e_y->size[1] = 2;
                  emxEnsureCapacity_real_T(e_y, b_i);
                  loop_ub = b_y->size[0];
                  for (b_i = 0; b_i < loop_ub; b_i++) {
                    for (i1 = 0; i1 < 2; i1++) {
                      e_y->data[b_i + e_y->size[0] * i1] = 0.0;
                      end = b_y->size[1];
                      for (i2 = 0; i2 < end; i2++) {
                        e_y->data[b_i + e_y->size[0] * i1] += b_y->data[b_i +
                          b_y->size[0] * i2] * H[i2 + (i1 << 1)];
                      }
                    }
                  }
                } else {
                  st.site = &ng_emlrtRSI;
                  l_mtimes(b_y, H, e_y);
                }

                st.site = &og_emlrtRSI;
                l_dynamic_size_checks(&st, e_y->size[0]);
                if (e_y->size[0] == 1) {
                  for (b_i = 0; b_i < 2; b_i++) {
                    for (i1 = 0; i1 < 2; i1++) {
                      V[b_i + (i1 << 1)] = 0.0;
                      for (i2 = 0; i2 < 2; i2++) {
                        V[b_i + (i1 << 1)] += H[b_i + (i2 << 1)] * e_y->data[i2
                          + (i1 << 1)];
                      }
                    }
                  }
                } else {
                  m_mtimes(H, e_y, V);
                }

                beta = 1.0 / f_y;
                for (b_i = 0; b_i < 4; b_i++) {
                  H[b_i] -= beta * V[b_i];
                }

                guard1 = true;
              } else {
                guard2 = true;
              }
            } else {
              guard2 = true;
            }
          }

          if (guard2) {
            b_i = gradNew->size[0];
            i1 = grad->size[0];
            emlrtSizeEqCheck1DR2012b(b_i, i1, &t_emlrtECI, sp);
            b_i = grad->size[0];
            grad->size[0] = gradNew->size[0];
            emxEnsureCapacity_real_T1(grad, b_i);
            loop_ub = gradNew->size[0];
            for (b_i = 0; b_i < loop_ub; b_i++) {
              grad->data[b_i] = gradNew->data[b_i] - grad->data[b_i];
            }

            st.site = &og_emlrtRSI;
            m_dynamic_size_checks(&st, grad, grad->size[0]);
            if (grad->size[0] == 1) {
              sigma = 0.0;
              for (b_i = 0; b_i < 2; b_i++) {
                sigma += Hg[b_i] * grad->data[b_i];
              }
            } else {
              sigma = n_mtimes(Hg, grad);
            }

            b_i = d_y->size[0] * d_y->size[1];
            d_y->size[0] = 1;
            d_y->size[1] = grad->size[0];
            emxEnsureCapacity_real_T(d_y, b_i);
            loop_ub = grad->size[0];
            for (b_i = 0; b_i < loop_ub; b_i++) {
              d_y->data[b_i] = 0.2 * grad->data[b_i];
            }

            st.site = &og_emlrtRSI;
            n_dynamic_size_checks(&st, d_y, d_y->size[1]);
            if (d_y->size[1] == 1) {
              for (b_i = 0; b_i < 2; b_i++) {
                y[b_i] = 0.0;
                for (i1 = 0; i1 < 2; i1++) {
                  f_y = y[b_i] + d_y->data[i1] * H[i1 + (b_i << 1)];
                  y[b_i] = f_y;
                }
              }
            } else {
              REFxGEMM(d_y, H, y);
            }

            st.site = &og_emlrtRSI;
            c_dynamic_size_checks(&st, grad, grad->size[0]);
            if (grad->size[0] == 1) {
              f_y = 0.0;
              for (b_i = 0; b_i < 2; b_i++) {
                f_y += y[b_i] * grad->data[b_i];
              }
            } else {
              f_y = xdotu(y, grad);
            }

            if (sigma < f_y) {
              b_i = d_y->size[0] * d_y->size[1];
              d_y->size[0] = 1;
              d_y->size[1] = grad->size[0];
              emxEnsureCapacity_real_T(d_y, b_i);
              loop_ub = grad->size[0];
              for (b_i = 0; b_i < loop_ub; b_i++) {
                d_y->data[b_i] = 0.8 * grad->data[b_i];
              }

              st.site = &og_emlrtRSI;
              n_dynamic_size_checks(&st, d_y, d_y->size[1]);
              if (d_y->size[1] == 1) {
                for (b_i = 0; b_i < 2; b_i++) {
                  y[b_i] = 0.0;
                  for (i1 = 0; i1 < 2; i1++) {
                    f_y = y[b_i] + d_y->data[i1] * H[i1 + (b_i << 1)];
                    y[b_i] = f_y;
                  }
                }
              } else {
                REFxGEMM(d_y, H, y);
              }

              st.site = &og_emlrtRSI;
              c_dynamic_size_checks(&st, grad, grad->size[0]);
              if (grad->size[0] == 1) {
                f_y = 0.0;
                for (b_i = 0; b_i < 2; b_i++) {
                  f_y += y[b_i] * grad->data[b_i];
                }
              } else {
                f_y = xdotu(y, grad);
              }

              st.site = &og_emlrtRSI;
              b_dynamic_size_checks(&st, grad, grad->size[0]);
              if (grad->size[0] == 1) {
                b_i = b_grad->size[0] * b_grad->size[1];
                b_grad->size[0] = 1;
                b_grad->size[1] = grad->size[0];
                emxEnsureCapacity_real_T(b_grad, b_i);
                loop_ub = grad->size[0];
                for (b_i = 0; b_i < loop_ub; b_i++) {
                  b_grad->data[b_i] = grad->data[b_i];
                }

                for (b_i = 0; b_i < 2; b_i++) {
                  y[b_i] = 0.0;
                  for (i1 = 0; i1 < 2; i1++) {
                    beta = y[b_i] + b_grad->data[i1] * H[i1 + (b_i << 1)];
                    y[b_i] = beta;
                  }
                }
              } else {
                d_mtimes(grad, H, y);
              }

              st.site = &og_emlrtRSI;
              c_dynamic_size_checks(&st, grad, grad->size[0]);
              if (grad->size[0] == 1) {
                beta = 0.0;
                for (b_i = 0; b_i < 2; b_i++) {
                  beta += y[b_i] * grad->data[b_i];
                }
              } else {
                beta = xdotu(y, grad);
              }

              st.site = &og_emlrtRSI;
              m_dynamic_size_checks(&st, grad, grad->size[0]);
              if (grad->size[0] == 1) {
                sigma = 0.0;
                for (b_i = 0; b_i < 2; b_i++) {
                  sigma += Hg[b_i] * grad->data[b_i];
                }
              } else {
                sigma = n_mtimes(Hg, grad);
              }

              beta = f_y / (beta - sigma);
            } else {
              beta = 1.0;
            }

            for (b_i = 0; b_i < 4; b_i++) {
              V[b_i] = (1.0 - beta) * H[b_i];
            }

            st.site = &og_emlrtRSI;
            i_dynamic_size_checks(&st, grad, grad->size[0]);
            if (grad->size[0] == 1) {
              for (b_i = 0; b_i < 2; b_i++) {
                b_x[b_i] = 0.0;
                for (i1 = 0; i1 < 2; i1++) {
                  sigma = b_x[b_i] + V[b_i + (i1 << 1)] * grad->data[i1];
                  b_x[b_i] = sigma;
                }
              }

              for (b_i = 0; b_i < 2; b_i++) {
                y[b_i] = b_x[b_i];
              }
            } else {
              i_mtimes(V, grad, b_x);
              for (b_i = 0; b_i < 2; b_i++) {
                y[b_i] = b_x[b_i];
              }
            }

            for (b_i = 0; b_i < 2; b_i++) {
              Hg[b_i] = beta * Hg[b_i] + y[b_i];
            }

            st.site = &og_emlrtRSI;
            m_dynamic_size_checks(&st, grad, grad->size[0]);
            if (grad->size[0] == 1) {
              beta = 0.0;
              for (b_i = 0; b_i < 2; b_i++) {
                beta += Hg[b_i] * grad->data[b_i];
              }
            } else {
              beta = n_mtimes(Hg, grad);
            }

            b_i = c_y->size[0] * c_y->size[1];
            c_y->size[0] = 2;
            c_y->size[1] = grad->size[0];
            emxEnsureCapacity_real_T(c_y, b_i);
            for (b_i = 0; b_i < 2; b_i++) {
              loop_ub = grad->size[0];
              for (i1 = 0; i1 < loop_ub; i1++) {
                sigma = Hg[b_i] * grad->data[i1];
                c_y->data[b_i + (i1 << 1)] = sigma / beta;
              }
            }

            for (b_i = 0; b_i < 2; b_i++) {
              iv[b_i] = 2;
            }

            for (b_i = 0; b_i < 2; b_i++) {
              g_y[b_i] = c_y->size[b_i];
            }

            emlrtSizeEqCheckNDR2012b(iv, g_y, &s_emlrtECI, sp);
            b_eye(V);
            for (b_i = 0; b_i < 4; b_i++) {
              sigma = V[b_i] - c_y->data[b_i];
              V[b_i] = sigma;
            }

            for (b_i = 0; b_i < 2; b_i++) {
              for (i1 = 0; i1 < 2; i1++) {
                b_V[b_i + (i1 << 1)] = 0.0;
                for (i2 = 0; i2 < 2; i2++) {
                  b_V[b_i + (i1 << 1)] += V[b_i + (i2 << 1)] * H[i2 + (i1 << 1)];
                }
              }
            }

            o_mtimes(b_V, V, P);
            for (b_i = 0; b_i < 2; b_i++) {
              for (i1 = 0; i1 < 2; i1++) {
                H[b_i + (i1 << 1)] = P[b_i + (i1 << 1)] + Hg[b_i] * Hg[i1] /
                  beta;
              }
            }

            for (b_i = 0; b_i < 4; b_i++) {
              V[b_i] = H[b_i] + h_y[b_i];
            }

            st.site = &ig_emlrtRSI;
            if (!isPositiveDefinite(&st, V)) {
              *exitFlag =
                c_robotics_core_internal_NLPSolverExitFlags_HessianNotPositiveSe;
              st.site = &jg_emlrtRSI;
              *err = d_IKHelpers_evaluateSolution(&st, obj->ExtraArgs);
              *iter = (real_T)i + 1.0;
              exitg2 = 1;
            } else {
              guard1 = true;
            }
          }

          if (guard1) {
            st.site = &kg_emlrtRSI;
            if (DampedBFGSwGradientProjection_searchDirectionInvalid(&st, obj,
                 xSol)) {
              for (k = 0; k < 2; k++) {
                xSol[k] = x[k];
              }

              *exitFlag =
                robotics_core_internal_NLPSolverExitFlags_SearchDirectionInvalid;
              st.site = &lg_emlrtRSI;
              *err = e_IKHelpers_evaluateSolution(&st, obj->ExtraArgs);
              *iter = (real_T)i + 1.0;
              exitg2 = 1;
            } else {
              for (k = 0; k < 2; k++) {
                x[k] = xSol[k];
              }

              b_i = grad->size[0];
              grad->size[0] = gradNew->size[0];
              emxEnsureCapacity_real_T1(grad, b_i);
              loop_ub = gradNew->size[0];
              for (b_i = 0; b_i < loop_ub; b_i++) {
                grad->data[b_i] = gradNew->data[b_i];
              }

              b_cost = costNew;
              i++;
            }
          }
        }
      }
    } else {
      *exitFlag =
        robotics_core_internal_NLPSolverExitFlags_IterationLimitExceeded;
      st.site = &mg_emlrtRSI;
      *err = f_IKHelpers_evaluateSolution(&st, obj->ExtraArgs);
      *iter = obj->MaxNumIterationInternal;
      exitg2 = 1;
    }
  } while (exitg2 == 0);

  emxFree_real_T(&b_grad);
  emxFree_real_T(&c_alpha);
  emxFree_real_T(&b_alpha);
  emxFree_real_T(&i_A);
  emxFree_real_T(&h_A);
  emxFree_boolean_T(&c_activeSet);
  emxFree_boolean_T(&b_activeSet);
  emxFree_boolean_T(&b_bIn);
  emxFree_real_T(&e_y);
  emxFree_int32_T(&ii);
  emxFree_real_T(&b_b);
  emxFree_real_T(&d_y);
  emxFree_real_T(&c_y);
  emxFree_real_T(&b_y);
  emxFree_int32_T(&r5);
  emxFree_int32_T(&r4);
  emxFree_int32_T(&r3);
  emxFree_int32_T(&r2);
  emxFree_int32_T(&r1);
  emxFree_real_T(&unusedU1);
  emxFree_real_T(&gradNew);
  emxFree_int32_T(&inactiveConstraintIndices);
  emxFree_real_T(&bIn);
  emxFree_real_T(&B);
  emxFree_real_T(&alpha);
  emxFree_real_T(&A);
  emxFree_boolean_T(&activeSet);
  emxFree_real_T(&grad);
}

static void IKHelpers_computeCost(const emlrtStack *sp, real_T x[2],
  robotics_manip_internal_IKExtraArgs *args, real_T *cost, real_T W[36],
  emxArray_real_T *Jac, robotics_manip_internal_IKExtraArgs **b_args)
{
  emlrtStack st;
  emxArray_char_T *bodyName;
  robotics_manip_internal_RigidBodyTree_1 *treeInternal;
  int32_T i;
  int32_T loop_ub;
  real_T Td[16];
  emxArray_real_T *J;
  real_T T_data[16];
  int32_T T_size[2];
  real_T e[6];
  real_T y;
  real_T b_e[6];
  emxArray_real_T *b_y;
  st.prev = sp;
  st.tls = sp->tls;
  emxInit_char_T(&bodyName, 2);
  *b_args = args;
  treeInternal = (*b_args)->Robot;
  i = bodyName->size[0] * bodyName->size[1];
  bodyName->size[0] = 1;
  bodyName->size[1] = (*b_args)->BodyName->size[1];
  emxEnsureCapacity_char_T(bodyName, i);
  loop_ub = (*b_args)->BodyName->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    bodyName->data[i] = (*b_args)->BodyName->data[i];
  }

  for (i = 0; i < 16; i++) {
    Td[i] = (*b_args)->Tform[i];
  }

  for (i = 0; i < 36; i++) {
    W[i] = (*b_args)->WeightMatrix[i];
  }

  emxInit_real_T(&J, 2);
  st.site = &pg_emlrtRSI;
  RigidBodyTree_efficientFKAndJacobianForIK(&st, treeInternal, x, bodyName,
    T_data, T_size, J);
  i = Jac->size[0] * Jac->size[1];
  Jac->size[0] = 6;
  Jac->size[1] = J->size[1];
  emxEnsureCapacity_real_T(Jac, i);
  loop_ub = 6 * J->size[1] - 1;
  emxFree_char_T(&bodyName);
  for (i = 0; i <= loop_ub; i++) {
    Jac->data[i] = -J->data[i];
  }

  emxFree_real_T(&J);
  st.site = &qg_emlrtRSI;
  IKHelpers_poseError(&st, Td, T_data, T_size, e);
  i = (*b_args)->ErrTemp->size[0];
  (*b_args)->ErrTemp->size[0] = 6;
  emxEnsureCapacity_real_T1((*b_args)->ErrTemp, i);
  for (i = 0; i < 6; i++) {
    (*b_args)->ErrTemp->data[i] = e[i];
  }

  for (i = 0; i < 6; i++) {
    b_e[i] = 0.0;
    for (loop_ub = 0; loop_ub < 6; loop_ub++) {
      y = b_e[i] + 0.5 * e[loop_ub] * W[loop_ub + 6 * i];
      b_e[i] = y;
    }
  }

  y = 0.0;
  for (loop_ub = 0; loop_ub < 6; loop_ub++) {
    y += b_e[loop_ub] * e[loop_ub];
  }

  (*b_args)->CostTemp = y;
  for (i = 0; i < 6; i++) {
    b_e[i] = 0.0;
    for (loop_ub = 0; loop_ub < 6; loop_ub++) {
      y = b_e[i] + e[loop_ub] * W[loop_ub + 6 * i];
      b_e[i] = y;
    }
  }

  emxInit_real_T(&b_y, 2);
  st.site = &ng_emlrtRSI;
  b_mtimes(b_e, Jac, b_y);
  i = (*b_args)->GradTemp->size[0];
  (*b_args)->GradTemp->size[0] = b_y->size[1];
  emxEnsureCapacity_real_T1((*b_args)->GradTemp, i);
  loop_ub = b_y->size[1];
  for (i = 0; i < loop_ub; i++) {
    (*b_args)->GradTemp->data[i] = b_y->data[i];
  }

  emxFree_real_T(&b_y);
  y = (*b_args)->CostTemp;
  *cost = y;
}

static void RigidBodyTree_efficientFKAndJacobianForIK(const emlrtStack *sp,
  robotics_manip_internal_RigidBodyTree_1 *obj, real_T qv[2], emxArray_char_T
  *body1Name, real_T T_data[], int32_T T_size[2], emxArray_real_T *Jac)
{
  emlrtStack st;
  emlrtStack b_st;
  emxArray_char_T *body2Name;
  int32_T i;
  int32_T loop_ub;
  real_T bid1;
  real_T bid2;
  robotics_manip_internal_RigidBody_1 *body1;
  robotics_manip_internal_RigidBody_1 *body2;
  emxArray_real_T *ancestorIndices1;
  robotics_manip_internal_RigidBody_1 *body;
  uint32_T b_i;
  emxArray_real_T *ancestorIndices2;
  int32_T i1;
  uint32_T c_i;
  int32_T i2;
  int32_T minPathLength;
  int32_T d_i;
  boolean_T exitg1;
  emxArray_real_T *kinematicPathIndices;
  real_T T1[16];
  emxArray_real_T *JacSlice;
  emxArray_real_T *a;
  emxArray_real_T *joint;
  real_T b_T1[36];
  boolean_T nextBodyIsParent;
  emxArray_real_T *b_Jac;
  int32_T jointSign;
  rigidBodyJoint *b_joint;
  real_T Tc2p[16];
  real_T qidx[2];
  real_T R[9];
  real_T b_R[16];
  real_T c_R[9];
  int32_T qv_size[1];
  real_T d_R[3];
  real_T e_R[16];
  static int8_T iv[4] = { 0, 0, 0, 1 };

  real_T Tj1[16];
  real_T Tj[16];
  real_T T1j[16];
  real_T dv[9];
  int32_T iv1[2];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emxInit_char_T(&body2Name, 2);
  st.site = &xg_emlrtRSI;
  i = body2Name->size[0] * body2Name->size[1];
  body2Name->size[0] = 1;
  body2Name->size[1] = obj->Base.NameInternal->size[1];
  emxEnsureCapacity_char_T(body2Name, i);
  loop_ub = obj->Base.NameInternal->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    body2Name->data[i] = obj->Base.NameInternal->data[i];
  }

  st.site = &wg_emlrtRSI;
  bid1 = b_RigidBodyTree_validateInputBodyName(&st, obj, body1Name);
  st.site = &vg_emlrtRSI;
  bid2 = c_RigidBodyTree_validateInputBodyName(&st, obj, body2Name);
  emxFree_char_T(&body2Name);
  if (bid1 == 0.0) {
    body1 = &obj->Base;
  } else {
    body1 = obj->Bodies[emlrtDynamicBoundsCheckR2012b((int32_T)bid1 - 1, 0, 2,
      &sc_emlrtBCI, sp)];
  }

  if (bid2 == 0.0) {
    body2 = &obj->Base;
  } else {
    body2 = obj->Bodies[emlrtDynamicBoundsCheckR2012b((int32_T)bid2 - 1, 0, 2,
      &tc_emlrtBCI, sp)];
  }

  emxInit_real_T(&ancestorIndices1, 2);
  st.site = &ug_emlrtRSI;
  b_st.site = &yg_emlrtRSI;
  body = body1;
  i = ancestorIndices1->size[0] * ancestorIndices1->size[1];
  ancestorIndices1->size[0] = 1;
  bid1 = obj->NumBodies + 1.0;
  bid1 = emlrtNonNegativeCheckR2012b(bid1, &xb_emlrtDCI, &b_st);
  ancestorIndices1->size[1] = (int32_T)emlrtIntegerCheckR2012b(bid1,
    &wb_emlrtDCI, &b_st);
  emxEnsureCapacity_real_T(ancestorIndices1, i);
  bid1 = obj->NumBodies + 1.0;
  bid1 = emlrtNonNegativeCheckR2012b(bid1, &xb_emlrtDCI, &b_st);
  loop_ub = (int32_T)emlrtIntegerCheckR2012b(bid1, &wb_emlrtDCI, &b_st) - 1;
  for (i = 0; i <= loop_ub; i++) {
    ancestorIndices1->data[i] = 0.0;
  }

  b_i = 2U;
  i = ancestorIndices1->size[1];
  emlrtDynamicBoundsCheckR2012b(1, 1, i, &rc_emlrtBCI, &b_st);
  ancestorIndices1->data[0] = body1->Index;
  while (body->ParentIndex > 0.0) {
    i = (int32_T)emlrtIntegerCheckR2012b(body->ParentIndex, &bc_emlrtDCI, &b_st)
      - 1;
    body = obj->Bodies[emlrtDynamicBoundsCheckR2012b(i, 0, 2, &uc_emlrtBCI,
      &b_st)];
    i = ancestorIndices1->size[1];
    ancestorIndices1->data[emlrtDynamicBoundsCheckR2012b((int32_T)b_i, 1, i,
      &wc_emlrtBCI, &b_st) - 1] = body->Index;
    b_i++;
  }

  if (body->Index > 0.0) {
    i = ancestorIndices1->size[1];
    ancestorIndices1->data[emlrtDynamicBoundsCheckR2012b((int32_T)b_i, 1, i,
      &vc_emlrtBCI, &b_st) - 1] = body->ParentIndex;
    b_i++;
  }

  emxInit_real_T(&ancestorIndices2, 2);
  i = ancestorIndices1->size[1];
  emlrtDynamicBoundsCheckR2012b(1, 1, i, &qc_emlrtBCI, &b_st);
  i = ancestorIndices1->size[1];
  i = emlrtDynamicBoundsCheckR2012b((int32_T)(b_i - 1U), 1, i, &pc_emlrtBCI,
    &b_st);
  i1 = ancestorIndices1->size[0] * ancestorIndices1->size[1];
  ancestorIndices1->size[1] = (int32_T)(b_i - 1U);
  emxEnsureCapacity_real_T(ancestorIndices1, i1);
  b_st.site = &ah_emlrtRSI;
  body = body2;
  i1 = ancestorIndices2->size[0] * ancestorIndices2->size[1];
  ancestorIndices2->size[0] = 1;
  bid1 = obj->NumBodies + 1.0;
  bid1 = emlrtNonNegativeCheckR2012b(bid1, &xb_emlrtDCI, &b_st);
  ancestorIndices2->size[1] = (int32_T)emlrtIntegerCheckR2012b(bid1,
    &wb_emlrtDCI, &b_st);
  emxEnsureCapacity_real_T(ancestorIndices2, i1);
  bid1 = obj->NumBodies + 1.0;
  bid1 = emlrtNonNegativeCheckR2012b(bid1, &xb_emlrtDCI, &b_st);
  loop_ub = (int32_T)emlrtIntegerCheckR2012b(bid1, &wb_emlrtDCI, &b_st) - 1;
  for (i1 = 0; i1 <= loop_ub; i1++) {
    ancestorIndices2->data[i1] = 0.0;
  }

  c_i = 2U;
  i1 = ancestorIndices2->size[1];
  emlrtDynamicBoundsCheckR2012b(1, 1, i1, &rc_emlrtBCI, &b_st);
  ancestorIndices2->data[0] = body2->Index;
  while (body->ParentIndex > 0.0) {
    i1 = (int32_T)emlrtIntegerCheckR2012b(body->ParentIndex, &bc_emlrtDCI, &b_st)
      - 1;
    body = obj->Bodies[emlrtDynamicBoundsCheckR2012b(i1, 0, 2, &uc_emlrtBCI,
      &b_st)];
    i1 = ancestorIndices2->size[1];
    ancestorIndices2->data[emlrtDynamicBoundsCheckR2012b((int32_T)c_i, 1, i1,
      &wc_emlrtBCI, &b_st) - 1] = body->Index;
    c_i++;
  }

  if (body->Index > 0.0) {
    i1 = ancestorIndices2->size[1];
    ancestorIndices2->data[emlrtDynamicBoundsCheckR2012b((int32_T)c_i, 1, i1,
      &vc_emlrtBCI, &b_st) - 1] = body->ParentIndex;
    c_i++;
  }

  i1 = ancestorIndices2->size[1];
  emlrtDynamicBoundsCheckR2012b(1, 1, i1, &qc_emlrtBCI, &b_st);
  i1 = ancestorIndices2->size[1];
  i1 = emlrtDynamicBoundsCheckR2012b((int32_T)(c_i - 1U), 1, i1, &pc_emlrtBCI,
    &b_st);
  i2 = ancestorIndices2->size[0] * ancestorIndices2->size[1];
  ancestorIndices2->size[1] = (int32_T)(c_i - 1U);
  emxEnsureCapacity_real_T(ancestorIndices2, i2);
  minPathLength = (int32_T)muDoubleScalarMin((real_T)b_i - 1.0, (real_T)c_i -
    1.0);
  d_i = 1;
  exitg1 = false;
  while ((!exitg1) && (d_i - 1 <= minPathLength - 2)) {
    if (ancestorIndices1->data[emlrtDynamicBoundsCheckR2012b(i - d_i, 1, i,
         &xc_emlrtBCI, &st) - 1] != ancestorIndices2->
        data[emlrtDynamicBoundsCheckR2012b(i1 - d_i, 1, i1, &yc_emlrtBCI, &st) -
        1]) {
      minPathLength = d_i;
      exitg1 = true;
    } else {
      d_i++;
    }
  }

  bid1 = ancestorIndices1->data[emlrtDynamicBoundsCheckR2012b((i - minPathLength)
    + 1, 1, i, &ad_emlrtBCI, &st) - 1];
  i2 = i - minPathLength;
  if (1 > i2) {
    loop_ub = -1;
  } else {
    loop_ub = emlrtDynamicBoundsCheckR2012b(i2, 1, i, &nc_emlrtBCI, &st) - 1;
  }

  i = i1 - minPathLength;
  if (1 > i) {
    i = 0;
    i1 = 1;
    i2 = -1;
  } else {
    i = emlrtDynamicBoundsCheckR2012b(i, 1, i1, &oc_emlrtBCI, &st) - 1;
    i1 = -1;
    i2 = 0;
  }

  emxInit_real_T(&kinematicPathIndices, 2);
  minPathLength = kinematicPathIndices->size[0] * kinematicPathIndices->size[1];
  kinematicPathIndices->size[0] = 1;
  b_st.site = &ug_emlrtRSI;
  kinematicPathIndices->size[1] = (loop_ub + div_s32_floor(&b_st, i2 - i, i1)) +
    3;
  emxEnsureCapacity_real_T(kinematicPathIndices, minPathLength);
  for (minPathLength = 0; minPathLength <= loop_ub; minPathLength++) {
    kinematicPathIndices->data[minPathLength] = ancestorIndices1->
      data[minPathLength];
  }

  emxFree_real_T(&ancestorIndices1);
  kinematicPathIndices->data[loop_ub + 1] = bid1;
  b_st.site = &am_emlrtRSI;
  minPathLength = div_s32_floor(&b_st, i2 - i, i1);
  for (i2 = 0; i2 <= minPathLength; i2++) {
    kinematicPathIndices->data[(i2 + loop_ub) + 2] = ancestorIndices2->data[i +
      i1 * i2];
  }

  emxFree_real_T(&ancestorIndices2);
  for (i = 0; i < 16; i++) {
    T1[i] = 0.0;
  }

  for (minPathLength = 0; minPathLength < 4; minPathLength++) {
    T1[minPathLength + (minPathLength << 2)] = 1.0;
  }

  i = Jac->size[0] * Jac->size[1];
  Jac->size[0] = 6;
  bid1 = emlrtNonNegativeCheckR2012b(obj->PositionNumber, &ac_emlrtDCI, sp);
  Jac->size[1] = (int32_T)emlrtIntegerCheckR2012b(bid1, &yb_emlrtDCI, sp);
  emxEnsureCapacity_real_T(Jac, i);
  bid1 = emlrtNonNegativeCheckR2012b(obj->PositionNumber, &ac_emlrtDCI, sp);
  loop_ub = 6 * (int32_T)emlrtIntegerCheckR2012b(bid1, &yb_emlrtDCI, sp) - 1;
  for (i = 0; i <= loop_ub; i++) {
    Jac->data[i] = 0.0;
  }

  i = kinematicPathIndices->size[1] - 2;
  emxInit_real_T(&JacSlice, 2);
  emxInit_real_T(&a, 2);
  emxInit_real_T(&joint, 2);
  for (d_i = 0; d_i <= i; d_i++) {
    i1 = kinematicPathIndices->size[1];
    if (kinematicPathIndices->data[emlrtDynamicBoundsCheckR2012b(d_i + 1, 1, i1,
         &bd_emlrtBCI, sp) - 1] != 0.0) {
      i1 = kinematicPathIndices->size[1];
      bid1 = kinematicPathIndices->data[emlrtDynamicBoundsCheckR2012b(d_i + 1, 1,
        i1, &ed_emlrtBCI, sp) - 1];
      i1 = (int32_T)emlrtIntegerCheckR2012b(bid1, &cc_emlrtDCI, sp) - 1;
      body1 = obj->Bodies[emlrtDynamicBoundsCheckR2012b(i1, 0, 2, &dd_emlrtBCI,
        sp)];
    } else {
      body1 = &obj->Base;
    }

    i1 = kinematicPathIndices->size[1];
    if (kinematicPathIndices->data[emlrtDynamicBoundsCheckR2012b(d_i + 2, 1, i1,
         &cd_emlrtBCI, sp) - 1] != 0.0) {
      i1 = kinematicPathIndices->size[1];
      bid1 = kinematicPathIndices->data[emlrtDynamicBoundsCheckR2012b(d_i + 2, 1,
        i1, &gd_emlrtBCI, sp) - 1];
      i1 = (int32_T)emlrtIntegerCheckR2012b(bid1, &dc_emlrtDCI, sp) - 1;
      body2 = obj->Bodies[emlrtDynamicBoundsCheckR2012b(i1, 0, 2, &fd_emlrtBCI,
        sp)];
    } else {
      body2 = &obj->Base;
    }

    nextBodyIsParent = (body2->Index == body1->ParentIndex);
    if (nextBodyIsParent) {
      body2 = body1;
      jointSign = 1;
    } else {
      jointSign = -1;
    }

    b_joint = body2->JointInternal;
    if (e_strcmp(b_joint->Type)) {
      st.site = &tg_emlrtRSI;
      rigidBodyJoint_transformBodyToParent(&st, b_joint, Tc2p);
    } else {
      i1 = (int32_T)emlrtIntegerCheckR2012b(body2->Index, &vb_emlrtDCI, sp);
      minPathLength = emlrtDynamicBoundsCheckR2012b(i1, 1, 3, &mc_emlrtBCI, sp);
      for (i1 = 0; i1 < 2; i1++) {
        qidx[i1] = obj->PositionDoFMap[(minPathLength + 3 * i1) - 1];
      }

      if (qidx[0] > qidx[1]) {
        i1 = 0;
        i2 = -1;
      } else {
        i1 = (int32_T)emlrtIntegerCheckR2012b(qidx[0], &ub_emlrtDCI, sp);
        i1 = emlrtDynamicBoundsCheckR2012b(i1, 1, 2, &lc_emlrtBCI, sp) - 1;
        i2 = (int32_T)emlrtIntegerCheckR2012b(qidx[1], &tb_emlrtDCI, sp);
        i2 = emlrtDynamicBoundsCheckR2012b(i2, 1, 2, &kc_emlrtBCI, sp) - 1;
      }

      qv_size[0] = (i2 - i1) + 1;
      loop_ub = i2 - i1;
      for (i2 = 0; i2 <= loop_ub; i2++) {
        qidx[i2] = qv[i1 + i2];
      }

      st.site = &sg_emlrtRSI;
      b_rigidBodyJoint_transformBodyToParent(&st, b_joint, qidx, qv_size, Tc2p);
      i1 = (int32_T)emlrtIntegerCheckR2012b(body2->Index, &sb_emlrtDCI, sp);
      minPathLength = emlrtDynamicBoundsCheckR2012b(i1, 1, 3, &jc_emlrtBCI, sp);
      for (i1 = 0; i1 < 2; i1++) {
        qidx[i1] = obj->VelocityDoFMap[(minPathLength + 3 * i1) - 1];
      }

      if (nextBodyIsParent) {
        for (i1 = 0; i1 < 16; i1++) {
          Tj[i1] = b_joint->ChildToJointTransform[i1];
        }
      } else {
        for (i1 = 0; i1 < 16; i1++) {
          Tj1[i1] = b_joint->JointToParentTransform[i1];
        }

        for (i1 = 0; i1 < 3; i1++) {
          for (i2 = 0; i2 < 3; i2++) {
            R[i2 + 3 * i1] = Tj1[i1 + (i2 << 2)];
          }
        }

        for (i1 = 0; i1 < 9; i1++) {
          c_R[i1] = -R[i1];
        }

        for (i1 = 0; i1 < 3; i1++) {
          d_R[i1] = 0.0;
          for (i2 = 0; i2 < 3; i2++) {
            Tj[i2 + (i1 << 2)] = R[i2 + 3 * i1];
            d_R[i1] += c_R[i1 + 3 * i2] * Tj1[i2 + 12];
          }

          Tj[i1 + 12] = d_R[i1];
        }

        for (i1 = 0; i1 < 4; i1++) {
          Tj[(i1 << 2) + 3] = (real_T)iv[i1];
        }
      }

      for (i1 = 0; i1 < 4; i1++) {
        for (i2 = 0; i2 < 4; i2++) {
          T1j[i1 + (i2 << 2)] = 0.0;
          for (minPathLength = 0; minPathLength < 4; minPathLength++) {
            T1j[i1 + (i2 << 2)] += Tj[i1 + (minPathLength << 2)] *
              T1[minPathLength + (i2 << 2)];
          }
        }
      }

      for (i1 = 0; i1 < 3; i1++) {
        for (i2 = 0; i2 < 3; i2++) {
          R[i2 + 3 * i1] = T1j[i1 + (i2 << 2)];
        }
      }

      for (i1 = 0; i1 < 9; i1++) {
        c_R[i1] = -R[i1];
      }

      for (i1 = 0; i1 < 3; i1++) {
        d_R[i1] = 0.0;
        for (i2 = 0; i2 < 3; i2++) {
          Tj1[i2 + (i1 << 2)] = R[i2 + 3 * i1];
          d_R[i1] += c_R[i1 + 3 * i2] * T1j[i2 + 12];
        }

        Tj1[i1 + 12] = d_R[i1];
      }

      for (i1 = 0; i1 < 4; i1++) {
        Tj1[(i1 << 2) + 3] = (real_T)iv[i1];
      }

      for (i1 = 0; i1 < 3; i1++) {
        for (i2 = 0; i2 < 3; i2++) {
          R[i2 + 3 * i1] = Tj1[i2 + (i1 << 2)];
        }
      }

      c_R[0] = 0.0;
      c_R[3] = -Tj1[14];
      c_R[6] = Tj1[13];
      c_R[1] = Tj1[14];
      c_R[4] = 0.0;
      c_R[7] = -Tj1[12];
      c_R[2] = -Tj1[13];
      c_R[5] = Tj1[12];
      c_R[8] = 0.0;
      for (i1 = 0; i1 < 3; i1++) {
        for (i2 = 0; i2 < 3; i2++) {
          dv[i1 + 3 * i2] = 0.0;
          for (minPathLength = 0; minPathLength < 3; minPathLength++) {
            dv[i1 + 3 * i2] += c_R[i1 + 3 * minPathLength] * R[minPathLength + 3
              * i2];
          }

          b_T1[i2 + 6 * i1] = R[i2 + 3 * i1];
          b_T1[i2 + 6 * (i1 + 3)] = 0.0;
        }
      }

      for (i1 = 0; i1 < 3; i1++) {
        for (i2 = 0; i2 < 3; i2++) {
          b_T1[(i2 + 6 * i1) + 3] = dv[i2 + 3 * i1];
          b_T1[(i2 + 6 * (i1 + 3)) + 3] = R[i2 + 3 * i1];
        }
      }

      i1 = joint->size[0] * joint->size[1];
      joint->size[0] = 6;
      joint->size[1] = b_joint->MotionSubspace->size[1];
      emxEnsureCapacity_real_T(joint, i1);
      loop_ub = b_joint->MotionSubspace->size[0] * b_joint->MotionSubspace->
        size[1];
      for (i1 = 0; i1 < loop_ub; i1++) {
        joint->data[i1] = b_joint->MotionSubspace->data[i1];
      }

      st.site = &rg_emlrtRSI;
      eml_mtimes_helper(b_T1, joint, a);
      i1 = JacSlice->size[0] * JacSlice->size[1];
      JacSlice->size[0] = 6;
      JacSlice->size[1] = a->size[1];
      emxEnsureCapacity_real_T(JacSlice, i1);
      loop_ub = 6 * a->size[1] - 1;
      for (i1 = 0; i1 <= loop_ub; i1++) {
        JacSlice->data[i1] = a->data[i1] * (real_T)jointSign;
      }

      if (qidx[0] > qidx[1]) {
        i1 = 0;
        i2 = -1;
      } else {
        i1 = Jac->size[1];
        i2 = (int32_T)emlrtIntegerCheckR2012b(qidx[0], &rb_emlrtDCI, sp);
        i1 = emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &ic_emlrtBCI, sp) - 1;
        i2 = Jac->size[1];
        minPathLength = (int32_T)emlrtIntegerCheckR2012b(qidx[1], &qb_emlrtDCI,
          sp);
        i2 = emlrtDynamicBoundsCheckR2012b(minPathLength, 1, i2, &hc_emlrtBCI,
          sp) - 1;
      }

      iv1[0] = 6;
      iv1[1] = (i2 - i1) + 1;
      emlrtSubAssignSizeCheckR2012b(iv1, 2, *(int32_T (*)[2])JacSlice->size, 2,
        &x_emlrtECI, sp);
      loop_ub = JacSlice->size[1];
      for (i2 = 0; i2 < loop_ub; i2++) {
        for (minPathLength = 0; minPathLength < 6; minPathLength++) {
          Jac->data[minPathLength + 6 * (i1 + i2)] = JacSlice->
            data[minPathLength + 6 * i2];
        }
      }
    }

    if (nextBodyIsParent) {
      for (i1 = 0; i1 < 4; i1++) {
        for (i2 = 0; i2 < 4; i2++) {
          b_R[i1 + (i2 << 2)] = 0.0;
          for (minPathLength = 0; minPathLength < 4; minPathLength++) {
            b_R[i1 + (i2 << 2)] += Tc2p[i1 + (minPathLength << 2)] *
              T1[minPathLength + (i2 << 2)];
          }
        }
      }

      memcpy(&T1[0], &b_R[0], sizeof(real_T) << 4);
    } else {
      for (i1 = 0; i1 < 3; i1++) {
        for (i2 = 0; i2 < 3; i2++) {
          R[i2 + 3 * i1] = Tc2p[i1 + (i2 << 2)];
        }
      }

      for (i1 = 0; i1 < 9; i1++) {
        c_R[i1] = -R[i1];
      }

      for (i1 = 0; i1 < 3; i1++) {
        d_R[i1] = 0.0;
        for (i2 = 0; i2 < 3; i2++) {
          e_R[i2 + (i1 << 2)] = R[i2 + 3 * i1];
          d_R[i1] += c_R[i1 + 3 * i2] * Tc2p[i2 + 12];
        }

        e_R[i1 + 12] = d_R[i1];
      }

      for (i1 = 0; i1 < 4; i1++) {
        e_R[(i1 << 2) + 3] = (real_T)iv[i1];
      }

      for (i1 = 0; i1 < 4; i1++) {
        for (i2 = 0; i2 < 4; i2++) {
          b_R[i1 + (i2 << 2)] = 0.0;
          for (minPathLength = 0; minPathLength < 4; minPathLength++) {
            b_R[i1 + (i2 << 2)] += e_R[i1 + (minPathLength << 2)] *
              T1[minPathLength + (i2 << 2)];
          }
        }
      }

      memcpy(&T1[0], &b_R[0], sizeof(real_T) << 4);
    }
  }

  emxFree_real_T(&joint);
  emxFree_real_T(&a);
  emxFree_real_T(&JacSlice);
  emxFree_real_T(&kinematicPathIndices);
  for (i = 0; i < 3; i++) {
    for (i1 = 0; i1 < 3; i1++) {
      b_T1[i1 + 6 * i] = T1[i1 + (i << 2)];
      b_T1[i1 + 6 * (i + 3)] = 0.0;
      b_T1[(i1 + 6 * i) + 3] = 0.0;
      b_T1[(i1 + 6 * (i + 3)) + 3] = T1[i1 + (i << 2)];
    }
  }

  emxInit_real_T(&b_Jac, 2);
  i = b_Jac->size[0] * b_Jac->size[1];
  b_Jac->size[0] = 6;
  b_Jac->size[1] = Jac->size[1];
  emxEnsureCapacity_real_T(b_Jac, i);
  loop_ub = Jac->size[0] * Jac->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_Jac->data[i] = Jac->data[i];
  }

  st.site = &ng_emlrtRSI;
  mtimes(b_T1, b_Jac, Jac);
  T_size[0] = 4;
  T_size[1] = 4;
  emxFree_real_T(&b_Jac);
  for (i = 0; i < 16; i++) {
    T_data[i] = T1[i];
  }
}

static real_T b_RigidBodyTree_validateInputBodyName(const emlrtStack *sp,
  robotics_manip_internal_RigidBodyTree_1 *obj, emxArray_char_T *bodyname)
{
  real_T bid;
  emlrtStack st;
  emlrtStack b_st;
  emxArray_char_T *bname;
  int32_T i;
  int32_T loop_ub;
  real_T d;
  int32_T b_i;
  boolean_T exitg1;
  robotics_manip_internal_RigidBody_1 *b_obj;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emxInit_char_T(&bname, 2);
  st.site = &jc_emlrtRSI;
  bid = -1.0;
  b_st.site = &tb_emlrtRSI;
  b_validateattributes(&b_st, bodyname);
  b_st.site = &ub_emlrtRSI;
  i = bname->size[0] * bname->size[1];
  bname->size[0] = 1;
  bname->size[1] = obj->Base.NameInternal->size[1];
  emxEnsureCapacity_char_T(bname, i);
  loop_ub = obj->Base.NameInternal->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    bname->data[i] = obj->Base.NameInternal->data[i];
  }

  if (d_strcmp(bname, bodyname)) {
    bid = 0.0;
  } else {
    d = obj->NumBodies;
    emlrtForLoopVectorCheckR2012b(1.0, 1.0, d, mxDOUBLE_CLASS, (int32_T)d,
      &emlrtRTEI, &st);
    b_i = 0;
    exitg1 = false;
    while ((!exitg1) && (b_i <= (int32_T)d - 1)) {
      b_st.site = &vb_emlrtRSI;
      b_obj = obj->Bodies[emlrtDynamicBoundsCheckR2012b(b_i, 0, 2, &emlrtBCI,
        &b_st)];
      i = bname->size[0] * bname->size[1];
      bname->size[0] = 1;
      bname->size[1] = b_obj->NameInternal->size[1];
      emxEnsureCapacity_char_T(bname, i);
      loop_ub = b_obj->NameInternal->size[1] - 1;
      for (i = 0; i <= loop_ub; i++) {
        bname->data[i] = b_obj->NameInternal->data[i];
      }

      if (d_strcmp(bname, bodyname)) {
        bid = (real_T)b_i + 1.0;
        exitg1 = true;
      } else {
        b_i++;
      }
    }
  }

  emxFree_char_T(&bname);
  if (bid == -1.0) {
    st.site = &kc_emlrtRSI;
    c_error(&st, bodyname);
  }

  return bid;
}

static real_T c_RigidBodyTree_validateInputBodyName(const emlrtStack *sp,
  robotics_manip_internal_RigidBodyTree_1 *obj, emxArray_char_T *bodyname)
{
  real_T bid;
  emlrtStack st;
  emlrtStack b_st;
  emxArray_char_T *bname;
  int32_T i;
  int32_T loop_ub;
  real_T d;
  int32_T b_i;
  boolean_T exitg1;
  robotics_manip_internal_RigidBody_1 *b_obj;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emxInit_char_T(&bname, 2);
  st.site = &jc_emlrtRSI;
  bid = -1.0;
  b_st.site = &tb_emlrtRSI;
  b_validateattributes(&b_st, bodyname);
  b_st.site = &ub_emlrtRSI;
  i = bname->size[0] * bname->size[1];
  bname->size[0] = 1;
  bname->size[1] = obj->Base.NameInternal->size[1];
  emxEnsureCapacity_char_T(bname, i);
  loop_ub = obj->Base.NameInternal->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    bname->data[i] = obj->Base.NameInternal->data[i];
  }

  if (d_strcmp(bname, bodyname)) {
    bid = 0.0;
  } else {
    d = obj->NumBodies;
    emlrtForLoopVectorCheckR2012b(1.0, 1.0, d, mxDOUBLE_CLASS, (int32_T)d,
      &emlrtRTEI, &st);
    b_i = 0;
    exitg1 = false;
    while ((!exitg1) && (b_i <= (int32_T)d - 1)) {
      b_st.site = &vb_emlrtRSI;
      b_obj = obj->Bodies[emlrtDynamicBoundsCheckR2012b(b_i, 0, 2, &emlrtBCI,
        &b_st)];
      i = bname->size[0] * bname->size[1];
      bname->size[0] = 1;
      bname->size[1] = b_obj->NameInternal->size[1];
      emxEnsureCapacity_char_T(bname, i);
      loop_ub = b_obj->NameInternal->size[1] - 1;
      for (i = 0; i <= loop_ub; i++) {
        bname->data[i] = b_obj->NameInternal->data[i];
      }

      if (d_strcmp(bname, bodyname)) {
        bid = (real_T)b_i + 1.0;
        exitg1 = true;
      } else {
        b_i++;
      }
    }
  }

  emxFree_char_T(&bname);
  if (bid == -1.0) {
    st.site = &kc_emlrtRSI;
    c_error(&st, bodyname);
  }

  return bid;
}

static void rigidBodyJoint_transformBodyToParent(const emlrtStack *sp,
  rigidBodyJoint *obj, real_T T[16])
{
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  real_T a[16];
  int32_T i;
  emxArray_char_T *switch_expression;
  real_T b_b[16];
  int32_T loop_ub;
  boolean_T result;
  real_T v[3];
  real_T b_I[9];
  real_T c_b[16];
  real_T b_v[3];
  real_T b_a[16];
  static int8_T iv[4] = { 0, 0, 0, 1 };

  int32_T i1;
  real_T dv[9];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  for (i = 0; i < 16; i++) {
    a[i] = obj->JointToParentTransform[i];
  }

  emxInit_char_T(&switch_expression, 2);
  st.site = &bh_emlrtRSI;
  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = obj->Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, i);
  loop_ub = obj->Type->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    switch_expression->data[i] = obj->Type->data[i];
  }

  result = e_strcmp(switch_expression);
  if (result) {
    loop_ub = 0;
  } else {
    result = b_strcmp(switch_expression);
    if (result) {
      loop_ub = 1;
    } else {
      loop_ub = -1;
    }
  }

  emxFree_char_T(&switch_expression);
  switch (loop_ub) {
   case 0:
    for (i = 0; i < 16; i++) {
      b_b[i] = 0.0;
    }

    for (loop_ub = 0; loop_ub < 4; loop_ub++) {
      b_b[loop_ub + (loop_ub << 2)] = 1.0;
    }
    break;

   case 1:
    b_st.site = &ch_emlrtRSI;
    if (b_strcmp(obj->Type) || c_strcmp(obj->Type)) {
      for (i = 0; i < 3; i++) {
        v[i] = obj->JointAxisInternal[i];
      }
    } else {
      for (i = 0; i < 3; i++) {
        v[i] = rtNaN;
      }
    }

    b_st.site = &dh_emlrtRSI;
    c_st.site = &fh_emlrtRSI;
    for (i = 0; i < 3; i++) {
      b_v[i] = v[i];
    }

    d_st.site = &gh_emlrtRSI;
    normalizeRows(&d_st, b_v, v);
    for (i = 0; i < 16; i++) {
      b_b[i] = 0.0;
    }

    cat(v[0] * v[0] * 0.0 + 1.0, v[1] * v[0] * 0.0 - v[2] * 0.0, v[2] * v[0] *
        0.0 + v[1] * 0.0, v[0] * v[1] * 0.0 + v[2] * 0.0, v[1] * v[1] * 0.0 +
        1.0, v[2] * v[1] * 0.0 - v[0] * 0.0, v[0] * v[2] * 0.0 - v[1] * 0.0, v[1]
        * v[2] * 0.0 + v[0] * 0.0, v[2] * v[2] * 0.0 + 1.0, dv);
    memcpy(&b_I[0], &dv[0], 9U * sizeof(real_T));
    permute(b_I, dv);
    for (i = 0; i < 3; i++) {
      for (loop_ub = 0; loop_ub < 3; loop_ub++) {
        b_b[loop_ub + (i << 2)] = dv[loop_ub + 3 * i];
      }
    }

    b_b[15] = 1.0;
    break;

   default:
    b_st.site = &eh_emlrtRSI;
    if (b_strcmp(obj->Type) || c_strcmp(obj->Type)) {
      for (i = 0; i < 3; i++) {
        v[i] = obj->JointAxisInternal[i];
      }
    } else {
      for (i = 0; i < 3; i++) {
        v[i] = rtNaN;
      }
    }

    for (i = 0; i < 9; i++) {
      b_I[i] = 0.0;
    }

    for (loop_ub = 0; loop_ub < 3; loop_ub++) {
      b_I[loop_ub + 3 * loop_ub] = 1.0;
    }

    for (i = 0; i < 3; i++) {
      for (loop_ub = 0; loop_ub < 3; loop_ub++) {
        b_b[loop_ub + (i << 2)] = b_I[loop_ub + 3 * i];
      }

      b_b[i + 12] = v[i] * 0.0;
    }

    for (i = 0; i < 4; i++) {
      b_b[(i << 2) + 3] = (real_T)iv[i];
    }
    break;
  }

  for (i = 0; i < 16; i++) {
    c_b[i] = obj->ChildToJointTransform[i];
  }

  for (i = 0; i < 4; i++) {
    for (loop_ub = 0; loop_ub < 4; loop_ub++) {
      b_a[i + (loop_ub << 2)] = 0.0;
      for (i1 = 0; i1 < 4; i1++) {
        b_a[i + (loop_ub << 2)] += a[i + (i1 << 2)] * b_b[i1 + (loop_ub << 2)];
      }
    }

    for (loop_ub = 0; loop_ub < 4; loop_ub++) {
      T[i + (loop_ub << 2)] = 0.0;
      for (i1 = 0; i1 < 4; i1++) {
        T[i + (loop_ub << 2)] += b_a[i + (i1 << 2)] * c_b[i1 + (loop_ub << 2)];
      }
    }
  }
}

static void normalizeRows(const emlrtStack *sp, real_T matrix[3], real_T
  normRowMatrix[3])
{
  emlrtStack st;
  real_T z1[3];
  int32_T k;
  real_T y;
  st.prev = sp;
  st.tls = sp->tls;
  for (k = 0; k < 3; k++) {
    z1[k] = matrix[k] * matrix[k];
  }

  y = z1[0];
  for (k = 0; k < 2; k++) {
    y += z1[k + 1];
  }

  st.site = &hh_emlrtRSI;
  b_sqrt(&st, &y);
  y = 1.0 / y;
  for (k = 0; k < 3; k++) {
    normRowMatrix[k] = matrix[k] * y;
  }
}

static void cat(real_T varargin_1, real_T varargin_2, real_T varargin_3, real_T
                varargin_4, real_T varargin_5, real_T varargin_6, real_T
                varargin_7, real_T varargin_8, real_T varargin_9, real_T y[9])
{
  real_T catArgs[9];
  catArgs[0] = varargin_1;
  catArgs[1] = varargin_2;
  catArgs[2] = varargin_3;
  catArgs[3] = varargin_4;
  catArgs[4] = varargin_5;
  catArgs[5] = varargin_6;
  catArgs[6] = varargin_7;
  catArgs[7] = varargin_8;
  catArgs[8] = varargin_9;
  memcpy(&y[0], &catArgs[0], 9U * sizeof(real_T));
}

static void permute(real_T a[9], real_T b_b[9])
{
  int32_T k;
  int32_T b_k;
  for (k = 0; k < 3; k++) {
    for (b_k = 0; b_k < 3; b_k++) {
      b_b[k + 3 * b_k] = a[b_k + 3 * k];
    }
  }
}

static void b_rigidBodyJoint_transformBodyToParent(const emlrtStack *sp,
  rigidBodyJoint *obj, real_T q_data[], int32_T q_size[1], real_T T[16])
{
  emlrtStack st;
  real_T a[16];
  int32_T i;
  real_T b_b[16];
  real_T c_b[16];
  real_T b_a[16];
  int32_T i1;
  int32_T i2;
  st.prev = sp;
  st.tls = sp->tls;
  for (i = 0; i < 16; i++) {
    a[i] = obj->JointToParentTransform[i];
  }

  st.site = &bh_emlrtRSI;
  rigidBodyJoint_jointTransform(&st, obj, q_data, q_size, b_b);
  for (i = 0; i < 16; i++) {
    c_b[i] = obj->ChildToJointTransform[i];
  }

  for (i = 0; i < 4; i++) {
    for (i1 = 0; i1 < 4; i1++) {
      b_a[i + (i1 << 2)] = 0.0;
      for (i2 = 0; i2 < 4; i2++) {
        b_a[i + (i1 << 2)] += a[i + (i2 << 2)] * b_b[i2 + (i1 << 2)];
      }
    }

    for (i1 = 0; i1 < 4; i1++) {
      T[i + (i1 << 2)] = 0.0;
      for (i2 = 0; i2 < 4; i2++) {
        T[i + (i1 << 2)] += b_a[i + (i2 << 2)] * c_b[i2 + (i1 << 2)];
      }
    }
  }
}

static void rigidBodyJoint_jointTransform(const emlrtStack *sp, rigidBodyJoint
  *obj, real_T q_data[], int32_T q_size[1], real_T TJ[16])
{
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emxArray_char_T *switch_expression;
  int32_T i;
  int32_T loop_ub;
  boolean_T result;
  real_T v[3];
  real_T result_data[4];
  real_T b_I[9];
  char_T b_u[15];
  char_T c_u[45];
  char_T d_u[39];
  const mxArray *y;
  static char_T e_u[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'i', 'n', 'n',
    'e', 'r', 'd', 'i', 'm' };

  static char_T f_u[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D', 'y',
    'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p', 'a',
    'n', 's', 'i', 'o', 'n' };

  static char_T g_u[39] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'c', 'a', 't',
    'e', 'n', 'a', 't', 'e', ':', 'm', 'a', 't', 'r', 'i', 'x', 'D', 'i', 'm',
    'e', 'n', 's', 'i', 'o', 'n', 'M', 'i', 's', 'm', 'a', 't', 'c', 'h' };

  const mxArray *m;
  static const int32_T iv[2] = { 1, 15 };

  static const int32_T iv1[2] = { 1, 45 };

  static const int32_T iv2[2] = { 1, 39 };

  const mxArray *b_y;
  static int8_T iv3[4] = { 0, 0, 0, 1 };

  static const int32_T iv4[2] = { 1, 15 };

  static const int32_T iv5[2] = { 1, 45 };

  static const int32_T iv6[2] = { 1, 39 };

  char_T h_u[34];
  static char_T i_u[34] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'a', 'x', 'a',
    'n', 'g', '2', 'r', 'o', 't', 'm', ':', 'i', 'n', 'c', 'o', 'r', 'r', 'e',
    'c', 't', 'N', 'u', 'm', 'c', 'o', 'l', 's' };

  static const int32_T iv7[2] = { 1, 34 };

  real_T cth;
  real_T sth;
  char_T j_u[48];
  real_T dv[9];
  static char_T k_u[48] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'i', 'n', 'c', 'o', 'r', 'r', 'e', 'c',
    't', 'N', 'u', 'm', 'c', 'o', 'l', 's' };

  static const int32_T iv8[2] = { 1, 48 };

  char_T l_u[5];
  const mxArray *c_y;
  static char_T m_u[5] = { 'a', 'x', 'a', 'n', 'g' };

  static const int32_T iv9[2] = { 1, 5 };

  const mxArray *d_y;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  emxInit_char_T(&switch_expression, 2);
  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = obj->Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, i);
  loop_ub = obj->Type->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    switch_expression->data[i] = obj->Type->data[i];
  }

  result = e_strcmp(switch_expression);
  if (result) {
    loop_ub = 0;
  } else {
    result = b_strcmp(switch_expression);
    if (result) {
      loop_ub = 1;
    } else {
      loop_ub = -1;
    }
  }

  emxFree_char_T(&switch_expression);
  switch (loop_ub) {
   case 0:
    for (i = 0; i < 16; i++) {
      TJ[i] = 0.0;
    }

    for (loop_ub = 0; loop_ub < 4; loop_ub++) {
      TJ[loop_ub + (loop_ub << 2)] = 1.0;
    }
    break;

   case 1:
    st.site = &ch_emlrtRSI;
    if (b_strcmp(obj->Type) || c_strcmp(obj->Type)) {
      for (i = 0; i < 3; i++) {
        v[i] = obj->JointAxisInternal[i];
      }
    } else {
      for (i = 0; i < 3; i++) {
        v[i] = rtNaN;
      }
    }

    if ((q_size[0] == 1) || (q_size[0] == 0)) {
    } else {
      for (i = 0; i < 39; i++) {
        d_u[i] = g_u[i];
      }

      y = NULL;
      m = emlrtCreateCharArray(2, iv2);
      emlrtInitCharArrayR2013a(sp, 39, m, &d_u[0]);
      emlrtAssign(&y, m);
      for (i = 0; i < 39; i++) {
        d_u[i] = g_u[i];
      }

      b_y = NULL;
      m = emlrtCreateCharArray(2, iv6);
      emlrtInitCharArrayR2013a(sp, 39, m, &d_u[0]);
      emlrtAssign(&b_y, m);
      st.site = &ql_emlrtRSI;
      f_error(&st, y, getString(&st, b_message(&st, b_y, &x_emlrtMCI),
               &x_emlrtMCI), &x_emlrtMCI);
    }

    loop_ub = (q_size[0] != 0);
    for (i = 0; i < 3; i++) {
      result_data[i] = v[i];
    }

    if (0 <= loop_ub - 1) {
      memcpy(&result_data[3], &q_data[0], (uint32_T)(loop_ub * (int32_T)sizeof
              (real_T)));
    }

    st.site = &dh_emlrtRSI;
    b_st.site = &fh_emlrtRSI;
    c_st.site = &ih_emlrtRSI;
    d_st.site = &jh_emlrtRSI;
    e_st.site = &sb_emlrtRSI;
    if (loop_ub + 3 != 4) {
      for (i = 0; i < 34; i++) {
        h_u[i] = i_u[i];
      }

      y = NULL;
      m = emlrtCreateCharArray(2, iv7);
      emlrtInitCharArrayR2013a(&e_st, 34, m, &h_u[0]);
      emlrtAssign(&y, m);
      for (i = 0; i < 48; i++) {
        j_u[i] = k_u[i];
      }

      b_y = NULL;
      m = emlrtCreateCharArray(2, iv8);
      emlrtInitCharArrayR2013a(&e_st, 48, m, &j_u[0]);
      emlrtAssign(&b_y, m);
      for (i = 0; i < 5; i++) {
        l_u[i] = m_u[i];
      }

      c_y = NULL;
      m = emlrtCreateCharArray(2, iv9);
      emlrtInitCharArrayR2013a(&e_st, 5, m, &l_u[0]);
      emlrtAssign(&c_y, m);
      d_y = NULL;
      m = emlrtCreateDoubleScalar(4.0);
      emlrtAssign(&d_y, m);
      f_st.site = &pl_emlrtRSI;
      f_error(&f_st, y, getString(&f_st, d_message(&f_st, b_y, c_y, d_y,
                &y_emlrtMCI), &y_emlrtMCI), &y_emlrtMCI);
    }

    c_st.site = &gh_emlrtRSI;
    normalizeRows(&c_st, *(real_T (*)[3])&result_data[0], v);
    emlrtDynamicBoundsCheckR2012b(4, 1, loop_ub + 3, &hd_emlrtBCI, &b_st);
    cth = muDoubleScalarCos(result_data[3]);
    sth = muDoubleScalarSin(result_data[3]);
    for (i = 0; i < 16; i++) {
      TJ[i] = 0.0;
    }

    cat(v[0] * v[0] * (1.0 - cth) + cth, v[1] * v[0] * (1.0 - cth) - v[2] * sth,
        v[2] * v[0] * (1.0 - cth) + v[1] * sth, v[0] * v[1] * (1.0 - cth) + v[2]
        * sth, v[1] * v[1] * (1.0 - cth) + cth, v[2] * v[1] * (1.0 - cth) - v[0]
        * sth, v[0] * v[2] * (1.0 - cth) - v[1] * sth, v[1] * v[2] * (1.0 - cth)
        + v[0] * sth, v[2] * v[2] * (1.0 - cth) + cth, dv);
    memcpy(&b_I[0], &dv[0], 9U * sizeof(real_T));
    permute(b_I, dv);
    for (i = 0; i < 3; i++) {
      for (loop_ub = 0; loop_ub < 3; loop_ub++) {
        TJ[loop_ub + (i << 2)] = dv[loop_ub + 3 * i];
      }
    }

    TJ[15] = 1.0;
    break;

   default:
    st.site = &eh_emlrtRSI;
    if (b_strcmp(obj->Type) || c_strcmp(obj->Type)) {
      for (i = 0; i < 3; i++) {
        v[i] = obj->JointAxisInternal[i];
      }
    } else {
      for (i = 0; i < 3; i++) {
        v[i] = rtNaN;
      }
    }

    st.site = &og_emlrtRSI;
    if (1 != q_size[0]) {
      if (q_size[0] == 1) {
        for (i = 0; i < 45; i++) {
          c_u[i] = f_u[i];
        }

        y = NULL;
        m = emlrtCreateCharArray(2, iv1);
        emlrtInitCharArrayR2013a(&st, 45, m, &c_u[0]);
        emlrtAssign(&y, m);
        for (i = 0; i < 45; i++) {
          c_u[i] = f_u[i];
        }

        b_y = NULL;
        m = emlrtCreateCharArray(2, iv5);
        emlrtInitCharArrayR2013a(&st, 45, m, &c_u[0]);
        emlrtAssign(&b_y, m);
        b_st.site = &hl_emlrtRSI;
        f_error(&b_st, y, getString(&b_st, b_message(&b_st, b_y, &bb_emlrtMCI),
                 &bb_emlrtMCI), &bb_emlrtMCI);
      } else {
        for (i = 0; i < 15; i++) {
          b_u[i] = e_u[i];
        }

        y = NULL;
        m = emlrtCreateCharArray(2, iv);
        emlrtInitCharArrayR2013a(&st, 15, m, &b_u[0]);
        emlrtAssign(&y, m);
        for (i = 0; i < 15; i++) {
          b_u[i] = e_u[i];
        }

        b_y = NULL;
        m = emlrtCreateCharArray(2, iv4);
        emlrtInitCharArrayR2013a(&st, 15, m, &b_u[0]);
        emlrtAssign(&b_y, m);
        b_st.site = &il_emlrtRSI;
        f_error(&b_st, y, getString(&b_st, b_message(&b_st, b_y, &ab_emlrtMCI),
                 &ab_emlrtMCI), &ab_emlrtMCI);
      }
    }

    for (i = 0; i < 9; i++) {
      b_I[i] = 0.0;
    }

    for (loop_ub = 0; loop_ub < 3; loop_ub++) {
      b_I[loop_ub + 3 * loop_ub] = 1.0;
    }

    for (i = 0; i < 3; i++) {
      for (loop_ub = 0; loop_ub < 3; loop_ub++) {
        TJ[loop_ub + (i << 2)] = b_I[loop_ub + 3 * i];
      }

      TJ[i + 12] = v[i] * q_data[0];
    }

    for (i = 0; i < 4; i++) {
      TJ[(i << 2) + 3] = (real_T)iv3[i];
    }
    break;
  }
}

static void eml_mtimes_helper(real_T a[36], emxArray_real_T *b_b,
  emxArray_real_T *y)
{
  emlrtStack st;
  st.site = &ng_emlrtRSI;
  mtimes(a, b_b, y);
}

static void mtimes(real_T A[36], emxArray_real_T *B, emxArray_real_T *C)
{
  char_T TRANSB1;
  char_T TRANSA1;
  real_T alpha1;
  real_T beta1;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  int32_T i;
  if (B->size[1] == 0) {
    C->size[0] = 6;
    C->size[1] = 0;
  } else {
    TRANSB1 = 'N';
    TRANSA1 = 'N';
    alpha1 = 1.0;
    beta1 = 0.0;
    m_t = (ptrdiff_t)6;
    n_t = (ptrdiff_t)B->size[1];
    k_t = (ptrdiff_t)6;
    lda_t = (ptrdiff_t)6;
    ldb_t = (ptrdiff_t)6;
    ldc_t = (ptrdiff_t)6;
    i = C->size[0] * C->size[1];
    C->size[0] = 6;
    C->size[1] = B->size[1];
    emxEnsureCapacity_real_T(C, i);
    dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, &A[0], &lda_t, &B->
          data[0], &ldb_t, &beta1, &C->data[0], &ldc_t);
  }
}

static void IKHelpers_poseError(const emlrtStack *sp, real_T Td[16], real_T
  T_data[], int32_T T_size[2], real_T errorvec[6])
{
  emlrtStack st;
  int32_T i;
  real_T b_Td[9];
  real_T v[4];
  int32_T i1;
  int32_T i2;
  st.prev = sp;
  st.tls = sp->tls;
  for (i = 0; i < 3; i++) {
    emlrtDynamicBoundsCheckR2012b(i + 1, 1, T_size[0], &jd_emlrtBCI, sp);
  }

  for (i = 0; i < 3; i++) {
    emlrtDynamicBoundsCheckR2012b(i + 1, 1, T_size[1], &kd_emlrtBCI, sp);
  }

  emlrtDynamicBoundsCheckR2012b(4, 1, T_size[1], &id_emlrtBCI, sp);
  for (i = 0; i < 3; i++) {
    emlrtDynamicBoundsCheckR2012b(i + 1, 1, T_size[0], &ld_emlrtBCI, sp);
  }

  for (i = 0; i < 3; i++) {
    for (i1 = 0; i1 < 3; i1++) {
      b_Td[i + 3 * i1] = 0.0;
      for (i2 = 0; i2 < 3; i2++) {
        b_Td[i + 3 * i1] += Td[i + (i2 << 2)] * T_data[i1 + T_size[0] * i2];
      }
    }
  }

  st.site = &kh_emlrtRSI;
  rotm2axang(&st, b_Td, v);
  for (i = 0; i < 3; i++) {
    errorvec[i] = v[3] * v[i];
    errorvec[i + 3] = Td[i + 12] - T_data[i + T_size[0] * 3];
  }
}

static void rotm2axang(const emlrtStack *sp, real_T R[9], real_T axang[4])
{
  emlrtStack st;
  emlrtStack b_st;
  boolean_T b_b;
  creal_T b_u;
  creal_T v;
  real_T ci;
  real_T b_v[3];
  boolean_T rEQ0;
  boolean_T x[3];
  real_T q;
  int32_T i;
  boolean_T b1;
  int32_T iy;
  boolean_T exitg1;
  boolean_T b_x;
  int32_T vspecial_size[2];
  real_T vspecial_data[3];
  int32_T ii_size_idx_0;
  int32_T ii_size_idx_1;
  int32_T j;
  real_T b_I[9];
  int32_T iv[3];
  boolean_T p;
  real_T V1[9];
  real_T dv[9];
  real_T V[9];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  b_b = false;
  b_u.re = 0.5 * (((R[0] + R[4]) + R[8]) - 1.0);
  if (!(muDoubleScalarAbs(b_u.re) > 1.0)) {
    ci = b_u.re;
    b_u.re = muDoubleScalarAcos(ci);
  } else {
    v.re = b_u.re + 1.0;
    v.im = 0.0;
    c_sqrt(&v);
    ci = b_u.re;
    b_u.re = 1.0 - ci;
    b_u.im = 0.0;
    c_sqrt(&b_u);
    if ((-v.im == 0.0) && (b_u.im == 0.0)) {
    } else {
      ci = v.re * b_u.im + -v.im * b_u.re;
      if ((muDoubleScalarIsInf(ci) || muDoubleScalarIsNaN(ci)) &&
          (!muDoubleScalarIsNaN(v.re)) && (!muDoubleScalarIsNaN(-v.im)) &&
          (!muDoubleScalarIsNaN(b_u.re)) && (!muDoubleScalarIsNaN(b_u.im))) {
        ci = v.re;
        q = -v.im;
        rescale(&ci, &q);
        ci = b_u.re;
        q = b_u.im;
        rescale(&ci, &q);
      }
    }

    ci = b_u.re;
    b_u.re = 2.0 * muDoubleScalarAtan2(ci, v.re);
  }

  ci = 2.0 * muDoubleScalarSin(b_u.re);
  b_v[0] = (R[5] - R[7]) / ci;
  b_v[1] = (R[6] - R[2]) / ci;
  b_v[2] = (R[1] - R[3]) / ci;
  if (muDoubleScalarIsNaN(b_u.re) || muDoubleScalarIsInf(b_u.re)) {
    ci = rtNaN;
  } else if (b_u.re == 0.0) {
    ci = 0.0;
  } else {
    ci = muDoubleScalarRem(b_u.re, 3.1415926535897931);
    rEQ0 = (ci == 0.0);
    if (!rEQ0) {
      q = muDoubleScalarAbs(b_u.re / 3.1415926535897931);
      rEQ0 = (muDoubleScalarAbs(q - muDoubleScalarFloor(q + 0.5)) <=
              2.2204460492503131E-16 * q);
    }

    if (rEQ0) {
      ci = 0.0;
    } else {
      if (b_u.re < 0.0) {
        ci += 3.1415926535897931;
      }
    }
  }

  rEQ0 = (ci == 0.0);
  for (i = 0; i < 3; i++) {
    x[i] = (b_v[i] == 0.0);
  }

  b1 = true;
  iy = 0;
  exitg1 = false;
  while ((!exitg1) && (iy < 3)) {
    if (!x[iy]) {
      b1 = false;
      exitg1 = true;
    } else {
      iy++;
    }
  }

  b_x = (rEQ0 || b1);
  if (rEQ0 || b1) {
    vspecial_size[0] = 3;
    vspecial_size[1] = (int32_T)b_x;
    iy = 3 * (int32_T)b_x - 1;
    for (i = 0; i <= iy; i++) {
      vspecial_data[i] = 0.0;
    }

    if (rEQ0 || b1) {
      ii_size_idx_0 = 1;
      ii_size_idx_1 = 1;
    } else {
      ii_size_idx_0 = 0;
      ii_size_idx_1 = 0;
    }

    i = (rEQ0 || b1) - 1;
    iy = 0;
    while (iy <= i) {
      emlrtDynamicBoundsCheckR2012b(1, 1, ii_size_idx_0 * ii_size_idx_1,
        &nd_emlrtBCI, sp);
      for (j = 0; j < 9; j++) {
        b_I[j] = 0.0;
      }

      for (iy = 0; iy < 3; iy++) {
        b_I[iy + 3 * iy] = 1.0;
      }

      st.site = &mh_emlrtRSI;
      p = true;
      for (iy = 0; iy < 9; iy++) {
        ci = b_I[iy] - R[iy];
        if (p && ((!muDoubleScalarIsInf(ci)) && (!muDoubleScalarIsNaN(ci)))) {
          p = true;
        } else {
          p = false;
        }

        b_I[iy] = ci;
      }

      if (p) {
        b_st.site = &nh_emlrtRSI;
        svd(&b_st, b_I, V1, vspecial_data, V);
      } else {
        if (!b_b) {
          for (j = 0; j < 9; j++) {
            dv[j] = 0.0;
          }

          b_b = true;
        }

        b_st.site = &oh_emlrtRSI;
        svd(&b_st, dv, b_I, vspecial_data, V1);
        for (j = 0; j < 9; j++) {
          V[j] = rtNaN;
        }
      }

      emlrtDynamicBoundsCheckR2012b(1, 1, (int32_T)b_x, &md_emlrtBCI, sp);
      for (j = 0; j < 3; j++) {
        vspecial_data[j] = V[j + 6];
      }

      iy = 1;
    }

    iy = 0;
    if (rEQ0 || b1) {
      iy = 1;
    }

    iv[0] = 1;
    iv[1] = 3;
    iv[2] = iy;
    emlrtSubAssignSizeCheckR2012b(iv, 3, vspecial_size, 2, &y_emlrtECI, sp);
    iy = 0;
    if (rEQ0 || b1) {
      iy = 1;
    }

    for (i = 0; i < iy; i++) {
      for (j = 0; j < 3; j++) {
        b_v[j] = vspecial_data[j + 3 * i];
      }
    }
  }

  for (i = 0; i < 3; i++) {
    vspecial_data[i] = b_v[i];
  }

  st.site = &lh_emlrtRSI;
  normalizeRows(&st, vspecial_data, b_v);
  iy = -1;
  for (j = 0; j < 3; j++) {
    iy++;
    axang[iy] = b_v[j];
  }

  axang[iy + 1] = b_u.re;
}

static void svd(const emlrtStack *sp, real_T A[9], real_T U[9], real_T s[3],
                real_T V[9])
{
  emlrtStack st;
  real_T b_A[9];
  st.prev = sp;
  st.tls = sp->tls;
  memcpy(&b_A[0], &A[0], 9U * sizeof(real_T));
  st.site = &ph_emlrtRSI;
  xzsvdc(&st, b_A, U, s, V);
}

static void xzsvdc(const emlrtStack *sp, real_T A[9], real_T U[9], real_T b_S[3],
                   real_T V[9])
{
  emlrtStack st;
  real_T s[3];
  real_T e[3];
  real_T work[3];
  int32_T i;
  int32_T q;
  int32_T m;
  int32_T iter;
  int32_T qq;
  boolean_T apply_transform;
  real_T ztest0;
  int32_T ii;
  int32_T qs;
  real_T snorm;
  real_T ztest;
  boolean_T exitg1;
  static char_T cv[30] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L', 'A',
    'B', ':', 's', 'v', 'd', '_', 'N', 'o', 'C', 'o', 'n', 'v', 'e', 'r', 'g',
    'e', 'n', 'c', 'e' };

  int32_T exitg2;
  boolean_T exitg3;
  real_T f;
  real_T scale;
  real_T sm;
  real_T sqds;
  real_T b_b;
  st.prev = sp;
  st.tls = sp->tls;
  for (i = 0; i < 3; i++) {
    s[i] = 0.0;
    e[i] = 0.0;
    work[i] = 0.0;
  }

  for (i = 0; i < 9; i++) {
    U[i] = 0.0;
    V[i] = 0.0;
  }

  for (q = 0; q < 2; q++) {
    iter = q + 2;
    qq = (q + 3 * q) + 1;
    apply_transform = false;
    ztest0 = xnrm2(3 - q, A, qq);
    if (ztest0 > 0.0) {
      apply_transform = true;
      if (A[qq - 1] < 0.0) {
        s[q] = -ztest0;
      } else {
        s[q] = ztest0;
      }

      if (muDoubleScalarAbs(s[q]) >= 1.0020841800044864E-292) {
        xscal(3 - q, 1.0 / s[q], A, qq);
      } else {
        i = qq - q;
        for (qs = qq; qs <= i + 2; qs++) {
          A[qs - 1] /= s[q];
        }
      }

      A[qq - 1]++;
      s[q] = -s[q];
    } else {
      s[q] = 0.0;
    }

    for (qs = iter; qs < 4; qs++) {
      i = (q + 3 * (qs - 1)) + 1;
      if (apply_transform) {
        xaxpy(3 - q, -(xdotc(3 - q, A, qq, A, i) / A[q + 3 * q]), qq, A, i);
      }

      e[qs - 1] = A[i - 1];
    }

    memcpy(&U[q + q * 3], &A[q + q * 3], (uint32_T)((((q * 3 - q) - q * 3) + 3) *
            (int32_T)sizeof(real_T)));
    if (q + 1 <= 1) {
      ztest0 = b_xnrm2(e, 2);
      if (ztest0 == 0.0) {
        e[0] = 0.0;
      } else {
        if (e[1] < 0.0) {
          ztest0 = -ztest0;
        }

        e[0] = ztest0;
        if (muDoubleScalarAbs(ztest0) >= 1.0020841800044864E-292) {
          b_xscal(1.0 / ztest0, e, 2);
        } else {
          for (qs = iter; qs < 4; qs++) {
            e[qs - 1] /= ztest0;
          }
        }

        e[1]++;
        e[0] = -e[0];
        for (ii = iter; ii < 4; ii++) {
          work[ii - 1] = 0.0;
        }

        for (qs = iter; qs < 4; qs++) {
          b_xaxpy(2, e[qs - 1], A, 3 * (qs - 1) + 2, work, 2);
        }

        for (qs = iter; qs < 4; qs++) {
          c_xaxpy(2, -e[qs - 1] / e[1], work, 2, A, 3 * (qs - 1) + 2);
        }
      }

      while (iter < 4) {
        V[iter - 1] = e[iter - 1];
        iter++;
      }
    }
  }

  m = 1;
  s[2] = A[8];
  e[1] = A[7];
  e[2] = 0.0;
  for (ii = 0; ii < 3; ii++) {
    U[ii + 6] = 0.0;
  }

  U[8] = 1.0;
  for (q = 1; q > -1; q--) {
    qq = q + 3 * q;
    if (s[q] != 0.0) {
      for (qs = q + 2; qs < 4; qs++) {
        i = (q + 3 * (qs - 1)) + 1;
        xaxpy(3 - q, -(xdotc(3 - q, U, qq + 1, U, i) / U[qq]), qq + 1, U, i);
      }

      for (ii = q + 1; ii < 4; ii++) {
        U[(ii + 3 * q) - 1] = -U[(ii + 3 * q) - 1];
      }

      U[qq]++;
      i = q - 1;
      ii = 0;
      while (ii <= i) {
        U[3 * q] = 0.0;
        ii = 1;
      }
    } else {
      for (ii = 0; ii < 3; ii++) {
        U[ii + 3 * q] = 0.0;
      }

      U[qq] = 1.0;
    }
  }

  for (q = 2; q > -1; q--) {
    if ((q + 1 <= 1) && (e[0] != 0.0)) {
      for (qs = 0; qs < 2; qs++) {
        i = 3 * (qs + 1) + 2;
        xaxpy(2, -(xdotc(2, V, 2, V, i) / V[1]), 2, V, i);
      }
    }

    for (ii = 0; ii < 3; ii++) {
      V[ii + 3 * q] = 0.0;
    }

    V[q + 3 * q] = 1.0;
  }

  for (q = 0; q < 3; q++) {
    if (s[q] != 0.0) {
      ztest = muDoubleScalarAbs(s[q]);
      ztest0 = s[q] / ztest;
      s[q] = ztest;
      if (q + 1 < 3) {
        e[q] /= ztest0;
      }

      c_xscal(ztest0, U, 3 * q + 1);
    }

    if ((q + 1 < 3) && (e[q] != 0.0)) {
      ztest = muDoubleScalarAbs(e[q]);
      ztest0 = ztest / e[q];
      e[q] = ztest;
      s[q + 1] *= ztest0;
      c_xscal(ztest0, V, 3 * (q + 1) + 1);
    }
  }

  iter = 0;
  snorm = 0.0;
  for (ii = 0; ii < 3; ii++) {
    snorm = muDoubleScalarMax(snorm, muDoubleScalarMax(muDoubleScalarAbs(s[ii]),
      muDoubleScalarAbs(e[ii])));
  }

  exitg1 = false;
  while ((!exitg1) && (m + 2 > 0)) {
    if (iter >= 75) {
      st.site = &rk_emlrtRSI;
      f_error(&st, emlrt_marshallOut(&st, cv), getString(&st, b_message(&st,
                emlrt_marshallOut(&st, cv), &cb_emlrtMCI), &cb_emlrtMCI),
              &cb_emlrtMCI);
      exitg1 = true;
    } else {
      ii = m;
      do {
        exitg2 = 0;
        q = ii + 1;
        if (ii + 1 == 0) {
          exitg2 = 1;
        } else {
          ztest0 = muDoubleScalarAbs(e[ii]);
          if ((ztest0 <= 2.2204460492503131E-16 * (muDoubleScalarAbs(s[ii]) +
                muDoubleScalarAbs(s[ii + 1]))) || (ztest0 <=
               1.0020841800044864E-292) || ((iter > 20) && (ztest0 <=
                2.2204460492503131E-16 * snorm))) {
            e[ii] = 0.0;
            exitg2 = 1;
          } else {
            ii--;
          }
        }
      } while (exitg2 == 0);

      if (ii + 1 == m + 1) {
        i = 4;
      } else {
        qs = m + 2;
        i = m + 2;
        exitg3 = false;
        while ((!exitg3) && (i >= ii + 1)) {
          qs = i;
          if (i == ii + 1) {
            exitg3 = true;
          } else {
            ztest0 = 0.0;
            if (i < m + 2) {
              ztest0 = muDoubleScalarAbs(e[i - 1]);
            }

            if (i > ii + 2) {
              ztest0 += muDoubleScalarAbs(e[i - 2]);
            }

            ztest = muDoubleScalarAbs(s[i - 1]);
            if ((ztest <= 2.2204460492503131E-16 * ztest0) || (ztest <=
                 1.0020841800044864E-292)) {
              s[i - 1] = 0.0;
              exitg3 = true;
            } else {
              i--;
            }
          }
        }

        if (qs == ii + 1) {
          i = 3;
        } else if (qs == m + 2) {
          i = 1;
        } else {
          i = 2;
          q = qs;
        }
      }

      switch (i) {
       case 1:
        f = e[m];
        e[m] = 0.0;
        for (qs = m + 1; qs >= q + 1; qs--) {
          ztest0 = e[0];
          ztest = s[qs - 1];
          st.site = &uh_emlrtRSI;
          xrotg(&ztest, &f, &b_b, &sm);
          s[qs - 1] = ztest;
          if (qs > q + 1) {
            f = -sm * e[0];
            ztest0 = e[0] * b_b;
          }

          xrot(V, 3 * (qs - 1) + 1, 3 * (m + 1) + 1, b_b, sm);
          e[0] = ztest0;
        }
        break;

       case 2:
        f = e[q - 1];
        e[q - 1] = 0.0;
        for (qs = q + 1; qs <= m + 2; qs++) {
          ztest = s[qs - 1];
          st.site = &th_emlrtRSI;
          xrotg(&ztest, &f, &b_b, &sm);
          s[qs - 1] = ztest;
          f = -sm * e[qs - 1];
          e[qs - 1] *= b_b;
          xrot(U, 3 * (qs - 1) + 1, 3 * (q - 1) + 1, b_b, sm);
        }
        break;

       case 3:
        scale = muDoubleScalarMax(muDoubleScalarMax(muDoubleScalarMax
          (muDoubleScalarMax(muDoubleScalarAbs(s[m + 1]), muDoubleScalarAbs(s[m])),
           muDoubleScalarAbs(e[m])), muDoubleScalarAbs(s[q])), muDoubleScalarAbs
          (e[q]));
        sm = s[m + 1] / scale;
        ztest0 = s[m] / scale;
        ztest = e[m] / scale;
        sqds = s[q] / scale;
        b_b = ((ztest0 + sm) * (ztest0 - sm) + ztest * ztest) / 2.0;
        ztest0 = sm * ztest;
        ztest0 *= ztest0;
        if ((b_b != 0.0) || (ztest0 != 0.0)) {
          ztest = b_b * b_b + ztest0;
          st.site = &sh_emlrtRSI;
          b_sqrt(&st, &ztest);
          if (b_b < 0.0) {
            ztest = -ztest;
          }

          ztest = ztest0 / (b_b + ztest);
        } else {
          ztest = 0.0;
        }

        f = (sqds + sm) * (sqds - sm) + ztest;
        ztest0 = sqds * (e[q] / scale);
        for (qs = q + 1; qs <= m + 1; qs++) {
          st.site = &rh_emlrtRSI;
          xrotg(&f, &ztest0, &b_b, &sm);
          if (qs > q + 1) {
            e[0] = f;
          }

          f = b_b * s[qs - 1] + sm * e[qs - 1];
          e[qs - 1] = b_b * e[qs - 1] - sm * s[qs - 1];
          ztest0 = sm * s[qs];
          s[qs] *= b_b;
          xrot(V, 3 * (qs - 1) + 1, 3 * qs + 1, b_b, sm);
          st.site = &qh_emlrtRSI;
          xrotg(&f, &ztest0, &b_b, &sm);
          s[qs - 1] = f;
          f = b_b * e[qs - 1] + sm * s[qs];
          s[qs] = -sm * e[qs - 1] + b_b * s[qs];
          ztest0 = sm * e[qs];
          e[qs] *= b_b;
          xrot(U, 3 * (qs - 1) + 1, 3 * qs + 1, b_b, sm);
        }

        e[m] = f;
        iter++;
        break;

       default:
        if (s[q] < 0.0) {
          s[q] = -s[q];
          c_xscal(-1.0, V, 3 * q + 1);
        }

        iter = q + 1;
        while ((q + 1 < 3) && (s[q] < s[iter])) {
          ztest = s[q];
          s[q] = s[iter];
          s[iter] = ztest;
          xswap(V, 3 * q + 1, 3 * (q + 1) + 1);
          xswap(U, 3 * q + 1, 3 * (q + 1) + 1);
          q = iter;
          iter++;
        }

        iter = 0;
        m--;
        break;
      }
    }
  }

  for (qs = 0; qs < 3; qs++) {
    b_S[qs] = s[qs];
  }
}

static real_T xnrm2(int32_T n, real_T x[9], int32_T ix0)
{
  real_T y;
  real_T scale;
  int32_T kend;
  int32_T k;
  real_T absxk;
  real_T t;
  y = 0.0;
  scale = 3.3121686421112381E-170;
  kend = ix0 + n;
  for (k = ix0; k < kend; k++) {
    absxk = muDoubleScalarAbs(x[k - 1]);
    if (absxk > scale) {
      t = scale / absxk;
      y = y * t * t + 1.0;
      scale = absxk;
    } else {
      t = absxk / scale;
      y += t * t;
    }
  }

  return scale * muDoubleScalarSqrt(y);
}

static real_T xdotc(int32_T n, real_T x[9], int32_T ix0, real_T y[9], int32_T
                    iy0)
{
  real_T d;
  int32_T ix;
  int32_T iy;
  int32_T k;
  d = 0.0;
  ix = ix0 - 1;
  iy = iy0 - 1;
  for (k = 0; k < n; k++) {
    d += x[ix] * y[iy];
    ix++;
    iy++;
  }

  return d;
}

static real_T b_xnrm2(real_T x[3], int32_T ix0)
{
  real_T y;
  real_T scale;
  int32_T k;
  real_T absxk;
  real_T t;
  y = 0.0;
  scale = 3.3121686421112381E-170;
  for (k = ix0; k <= ix0 + 1; k++) {
    absxk = muDoubleScalarAbs(x[k - 1]);
    if (absxk > scale) {
      t = scale / absxk;
      y = y * t * t + 1.0;
      scale = absxk;
    } else {
      t = absxk / scale;
      y += t * t;
    }
  }

  return scale * muDoubleScalarSqrt(y);
}

static void b_mtimes(real_T A[6], emxArray_real_T *B, emxArray_real_T *C)
{
  char_T TRANSB1;
  char_T TRANSA1;
  real_T alpha1;
  real_T beta1;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  int32_T i;
  if (B->size[1] == 0) {
    C->size[0] = 1;
    C->size[1] = 0;
  } else {
    TRANSB1 = 'N';
    TRANSA1 = 'N';
    alpha1 = 1.0;
    beta1 = 0.0;
    m_t = (ptrdiff_t)1;
    n_t = (ptrdiff_t)B->size[1];
    k_t = (ptrdiff_t)6;
    lda_t = (ptrdiff_t)1;
    ldb_t = (ptrdiff_t)6;
    ldc_t = (ptrdiff_t)1;
    i = C->size[0] * C->size[1];
    C->size[0] = 1;
    C->size[1] = B->size[1];
    emxEnsureCapacity_real_T(C, i);
    dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, &A[0], &lda_t, &B->
          data[0], &ldb_t, &beta1, &C->data[0], &ldc_t);
  }
}

static void b_eye(real_T b_I[4])
{
  int32_T k;
  for (k = 0; k < 4; k++) {
    b_I[k] = 0.0;
  }

  for (k = 0; k < 2; k++) {
    b_I[k + (k << 1)] = 1.0;
  }
}

static void dynamic_size_checks(const emlrtStack *sp, emxArray_real_T *a,
  int32_T innerDimA)
{
  emlrtStack st;
  char_T b_u[15];
  char_T c_u[45];
  int32_T i;
  const mxArray *y;
  static char_T d_u[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'i', 'n', 'n',
    'e', 'r', 'd', 'i', 'm' };

  static char_T e_u[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D', 'y',
    'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p', 'a',
    'n', 's', 'i', 'o', 'n' };

  const mxArray *m;
  static const int32_T iv[2] = { 1, 15 };

  static const int32_T iv1[2] = { 1, 45 };

  const mxArray *b_y;
  static const int32_T iv2[2] = { 1, 15 };

  static const int32_T iv3[2] = { 1, 45 };

  st.prev = sp;
  st.tls = sp->tls;
  if (innerDimA != 2) {
    if ((a->size[0] == 1) && (a->size[1] == 1)) {
      for (i = 0; i < 45; i++) {
        c_u[i] = e_u[i];
      }

      y = NULL;
      m = emlrtCreateCharArray(2, iv1);
      emlrtInitCharArrayR2013a(sp, 45, m, &c_u[0]);
      emlrtAssign(&y, m);
      for (i = 0; i < 45; i++) {
        c_u[i] = e_u[i];
      }

      b_y = NULL;
      m = emlrtCreateCharArray(2, iv3);
      emlrtInitCharArrayR2013a(sp, 45, m, &c_u[0]);
      emlrtAssign(&b_y, m);
      st.site = &hl_emlrtRSI;
      f_error(&st, y, getString(&st, b_message(&st, b_y, &bb_emlrtMCI),
               &bb_emlrtMCI), &bb_emlrtMCI);
    } else {
      for (i = 0; i < 15; i++) {
        b_u[i] = d_u[i];
      }

      y = NULL;
      m = emlrtCreateCharArray(2, iv);
      emlrtInitCharArrayR2013a(sp, 15, m, &b_u[0]);
      emlrtAssign(&y, m);
      for (i = 0; i < 15; i++) {
        b_u[i] = d_u[i];
      }

      b_y = NULL;
      m = emlrtCreateCharArray(2, iv2);
      emlrtInitCharArrayR2013a(sp, 15, m, &b_u[0]);
      emlrtAssign(&b_y, m);
      st.site = &il_emlrtRSI;
      f_error(&st, y, getString(&st, b_message(&st, b_y, &ab_emlrtMCI),
               &ab_emlrtMCI), &ab_emlrtMCI);
    }
  }
}

static void c_mtimes(emxArray_real_T *A, real_T B[2], emxArray_real_T *C)
{
  char_T TRANSB1;
  int32_T i;
  char_T TRANSA1;
  real_T alpha1;
  real_T beta1;
  int32_T loop_ub;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  if ((A->size[0] == 0) || (A->size[1] == 0)) {
    i = C->size[0];
    C->size[0] = A->size[1];
    emxEnsureCapacity_real_T1(C, i);
    loop_ub = A->size[1];
    for (i = 0; i < loop_ub; i++) {
      C->data[i] = 0.0;
    }
  } else {
    TRANSB1 = 'N';
    TRANSA1 = 'T';
    alpha1 = 1.0;
    beta1 = 0.0;
    m_t = (ptrdiff_t)A->size[1];
    n_t = (ptrdiff_t)1;
    k_t = (ptrdiff_t)2;
    lda_t = (ptrdiff_t)A->size[0];
    ldb_t = (ptrdiff_t)2;
    ldc_t = (ptrdiff_t)A->size[1];
    i = C->size[0];
    C->size[0] = A->size[1];
    emxEnsureCapacity_real_T1(C, i);
    dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, &A->data[0], &lda_t,
          &B[0], &ldb_t, &beta1, &C->data[0], &ldc_t);
  }
}

static void b_dynamic_size_checks(const emlrtStack *sp, emxArray_real_T *a,
  int32_T innerDimA)
{
  emlrtStack st;
  char_T b_u[15];
  char_T c_u[45];
  int32_T i;
  const mxArray *y;
  static char_T d_u[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'i', 'n', 'n',
    'e', 'r', 'd', 'i', 'm' };

  static char_T e_u[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D', 'y',
    'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p', 'a',
    'n', 's', 'i', 'o', 'n' };

  const mxArray *m;
  static const int32_T iv[2] = { 1, 15 };

  static const int32_T iv1[2] = { 1, 45 };

  const mxArray *b_y;
  static const int32_T iv2[2] = { 1, 15 };

  static const int32_T iv3[2] = { 1, 45 };

  st.prev = sp;
  st.tls = sp->tls;
  if (innerDimA != 2) {
    if (a->size[0] == 1) {
      for (i = 0; i < 45; i++) {
        c_u[i] = e_u[i];
      }

      y = NULL;
      m = emlrtCreateCharArray(2, iv1);
      emlrtInitCharArrayR2013a(sp, 45, m, &c_u[0]);
      emlrtAssign(&y, m);
      for (i = 0; i < 45; i++) {
        c_u[i] = e_u[i];
      }

      b_y = NULL;
      m = emlrtCreateCharArray(2, iv3);
      emlrtInitCharArrayR2013a(sp, 45, m, &c_u[0]);
      emlrtAssign(&b_y, m);
      st.site = &hl_emlrtRSI;
      f_error(&st, y, getString(&st, b_message(&st, b_y, &bb_emlrtMCI),
               &bb_emlrtMCI), &bb_emlrtMCI);
    } else {
      for (i = 0; i < 15; i++) {
        b_u[i] = d_u[i];
      }

      y = NULL;
      m = emlrtCreateCharArray(2, iv);
      emlrtInitCharArrayR2013a(sp, 15, m, &b_u[0]);
      emlrtAssign(&y, m);
      for (i = 0; i < 15; i++) {
        b_u[i] = d_u[i];
      }

      b_y = NULL;
      m = emlrtCreateCharArray(2, iv2);
      emlrtInitCharArrayR2013a(sp, 15, m, &b_u[0]);
      emlrtAssign(&b_y, m);
      st.site = &il_emlrtRSI;
      f_error(&st, y, getString(&st, b_message(&st, b_y, &ab_emlrtMCI),
               &ab_emlrtMCI), &ab_emlrtMCI);
    }
  }
}

static void d_mtimes(emxArray_real_T *A, real_T B[4], real_T C[2])
{
  emxArray_real_T *b_A;
  int32_T i;
  int32_T loop_ub;
  emxInit_real_T(&b_A, 2);
  i = b_A->size[0] * b_A->size[1];
  b_A->size[0] = 1;
  b_A->size[1] = A->size[0];
  emxEnsureCapacity_real_T(b_A, i);
  loop_ub = A->size[0];
  for (i = 0; i < loop_ub; i++) {
    b_A->data[i] = A->data[i];
  }

  REFxGEMM(b_A, B, C);
  emxFree_real_T(&b_A);
}

static void REFxGEMM(emxArray_real_T *A, real_T B[4], real_T C[2])
{
  int32_T inner;
  int32_T j;
  int32_T boffset;
  int32_T k;
  inner = A->size[1];
  for (j = 0; j < 2; j++) {
    boffset = j * inner - 1;
    C[j] = 0.0;
    for (k = 0; k < inner; k++) {
      C[j] += B[(boffset + k) + 1] * A->data[k];
    }
  }
}

static void c_dynamic_size_checks(const emlrtStack *sp, emxArray_real_T *b_b,
  int32_T innerDimB)
{
  emlrtStack st;
  char_T b_u[15];
  char_T c_u[45];
  int32_T i;
  const mxArray *y;
  static char_T d_u[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'i', 'n', 'n',
    'e', 'r', 'd', 'i', 'm' };

  static char_T e_u[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D', 'y',
    'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p', 'a',
    'n', 's', 'i', 'o', 'n' };

  const mxArray *m;
  static const int32_T iv[2] = { 1, 15 };

  static const int32_T iv1[2] = { 1, 45 };

  const mxArray *b_y;
  static const int32_T iv2[2] = { 1, 15 };

  static const int32_T iv3[2] = { 1, 45 };

  st.prev = sp;
  st.tls = sp->tls;
  if (2 != innerDimB) {
    if (b_b->size[0] == 1) {
      for (i = 0; i < 45; i++) {
        c_u[i] = e_u[i];
      }

      y = NULL;
      m = emlrtCreateCharArray(2, iv1);
      emlrtInitCharArrayR2013a(sp, 45, m, &c_u[0]);
      emlrtAssign(&y, m);
      for (i = 0; i < 45; i++) {
        c_u[i] = e_u[i];
      }

      b_y = NULL;
      m = emlrtCreateCharArray(2, iv3);
      emlrtInitCharArrayR2013a(sp, 45, m, &c_u[0]);
      emlrtAssign(&b_y, m);
      st.site = &hl_emlrtRSI;
      f_error(&st, y, getString(&st, b_message(&st, b_y, &bb_emlrtMCI),
               &bb_emlrtMCI), &bb_emlrtMCI);
    } else {
      for (i = 0; i < 15; i++) {
        b_u[i] = d_u[i];
      }

      y = NULL;
      m = emlrtCreateCharArray(2, iv);
      emlrtInitCharArrayR2013a(sp, 15, m, &b_u[0]);
      emlrtAssign(&y, m);
      for (i = 0; i < 15; i++) {
        b_u[i] = d_u[i];
      }

      b_y = NULL;
      m = emlrtCreateCharArray(2, iv2);
      emlrtInitCharArrayR2013a(sp, 15, m, &b_u[0]);
      emlrtAssign(&b_y, m);
      st.site = &il_emlrtRSI;
      f_error(&st, y, getString(&st, b_message(&st, b_y, &ab_emlrtMCI),
               &ab_emlrtMCI), &ab_emlrtMCI);
    }
  }
}

static real_T xdotu(real_T x[2], emxArray_real_T *y)
{
  real_T d;
  int32_T k;
  d = 0.0;
  for (k = 0; k < 2; k++) {
    d += x[k] * y->data[k];
  }

  return d;
}

static void d_dynamic_size_checks(const emlrtStack *sp, emxArray_real_T *b_b,
  int32_T innerDimB)
{
  emlrtStack st;
  char_T b_u[15];
  char_T c_u[45];
  int32_T i;
  const mxArray *y;
  static char_T d_u[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'i', 'n', 'n',
    'e', 'r', 'd', 'i', 'm' };

  static char_T e_u[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D', 'y',
    'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p', 'a',
    'n', 's', 'i', 'o', 'n' };

  const mxArray *m;
  static const int32_T iv[2] = { 1, 15 };

  static const int32_T iv1[2] = { 1, 45 };

  const mxArray *b_y;
  static const int32_T iv2[2] = { 1, 15 };

  static const int32_T iv3[2] = { 1, 45 };

  st.prev = sp;
  st.tls = sp->tls;
  if (2 != innerDimB) {
    if ((b_b->size[0] == 1) && (b_b->size[1] == 1)) {
      for (i = 0; i < 45; i++) {
        c_u[i] = e_u[i];
      }

      y = NULL;
      m = emlrtCreateCharArray(2, iv1);
      emlrtInitCharArrayR2013a(sp, 45, m, &c_u[0]);
      emlrtAssign(&y, m);
      for (i = 0; i < 45; i++) {
        c_u[i] = e_u[i];
      }

      b_y = NULL;
      m = emlrtCreateCharArray(2, iv3);
      emlrtInitCharArrayR2013a(sp, 45, m, &c_u[0]);
      emlrtAssign(&b_y, m);
      st.site = &hl_emlrtRSI;
      f_error(&st, y, getString(&st, b_message(&st, b_y, &bb_emlrtMCI),
               &bb_emlrtMCI), &bb_emlrtMCI);
    } else {
      for (i = 0; i < 15; i++) {
        b_u[i] = d_u[i];
      }

      y = NULL;
      m = emlrtCreateCharArray(2, iv);
      emlrtInitCharArrayR2013a(sp, 15, m, &b_u[0]);
      emlrtAssign(&y, m);
      for (i = 0; i < 15; i++) {
        b_u[i] = d_u[i];
      }

      b_y = NULL;
      m = emlrtCreateCharArray(2, iv2);
      emlrtInitCharArrayR2013a(sp, 15, m, &b_u[0]);
      emlrtAssign(&b_y, m);
      st.site = &il_emlrtRSI;
      f_error(&st, y, getString(&st, b_message(&st, b_y, &ab_emlrtMCI),
               &ab_emlrtMCI), &ab_emlrtMCI);
    }
  }
}

static void e_mtimes(real_T A[4], emxArray_real_T *B, emxArray_real_T *C)
{
  char_T TRANSB1;
  int32_T i;
  char_T TRANSA1;
  real_T alpha1;
  real_T beta1;
  ptrdiff_t m_t;
  int32_T loop_ub;
  ptrdiff_t n_t;
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  if ((B->size[0] == 0) || (B->size[1] == 0)) {
    i = C->size[0] * C->size[1];
    C->size[0] = 2;
    C->size[1] = B->size[1];
    emxEnsureCapacity_real_T(C, i);
    loop_ub = (B->size[1] << 1) - 1;
    for (i = 0; i <= loop_ub; i++) {
      C->data[i] = 0.0;
    }
  } else {
    TRANSB1 = 'N';
    TRANSA1 = 'N';
    alpha1 = 1.0;
    beta1 = 0.0;
    m_t = (ptrdiff_t)2;
    n_t = (ptrdiff_t)B->size[1];
    k_t = (ptrdiff_t)2;
    lda_t = (ptrdiff_t)2;
    ldb_t = (ptrdiff_t)B->size[0];
    ldc_t = (ptrdiff_t)2;
    i = C->size[0] * C->size[1];
    C->size[0] = 2;
    C->size[1] = B->size[1];
    emxEnsureCapacity_real_T(C, i);
    dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, &A[0], &lda_t, &B->
          data[0], &ldb_t, &beta1, &C->data[0], &ldc_t);
  }
}

static void e_dynamic_size_checks(const emlrtStack *sp, int32_T innerDimA)
{
  emlrtStack st;
  char_T b_u[15];
  int32_T i;
  const mxArray *y;
  static char_T c_u[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'i', 'n', 'n',
    'e', 'r', 'd', 'i', 'm' };

  const mxArray *m;
  static const int32_T iv[2] = { 1, 15 };

  const mxArray *b_y;
  static const int32_T iv1[2] = { 1, 15 };

  st.prev = sp;
  st.tls = sp->tls;
  if (innerDimA != 2) {
    for (i = 0; i < 15; i++) {
      b_u[i] = c_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, iv);
    emlrtInitCharArrayR2013a(sp, 15, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 15; i++) {
      b_u[i] = c_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, iv1);
    emlrtInitCharArrayR2013a(sp, 15, m, &b_u[0]);
    emlrtAssign(&b_y, m);
    st.site = &il_emlrtRSI;
    f_error(&st, y, getString(&st, b_message(&st, b_y, &ab_emlrtMCI),
             &ab_emlrtMCI), &ab_emlrtMCI);
  }
}

static void f_mtimes(emxArray_real_T *A, real_T B[4], real_T C[4])
{
  int32_T inner;
  int32_T j;
  int32_T coffset;
  int32_T boffset;
  int32_T i;
  int32_T k;
  int32_T aoffset;
  real_T temp;
  inner = A->size[1];
  for (j = 0; j < 2; j++) {
    coffset = (j << 1) - 1;
    boffset = j * inner - 1;
    for (i = 0; i < 2; i++) {
      C[(coffset + i) + 1] = 0.0;
    }

    for (k = 0; k < inner; k++) {
      aoffset = (k << 1) - 1;
      temp = B[(boffset + k) + 1];
      for (i = 0; i < 2; i++) {
        C[(coffset + i) + 1] += temp * A->data[(aoffset + i) + 1];
      }
    }
  }
}

static real_T SystemTimeProvider_getElapsedTime(const emlrtStack *sp,
  robotics_core_internal_SystemTimeProvider *obj)
{
  emlrtStack st;
  boolean_T valid;
  char_T b_u[57];
  real_T systemTime;
  int32_T i;
  const mxArray *y;
  static char_T c_u[57] = { 's', 'h', 'a', 'r', 'e', 'd', '_', 'r', 'o', 'b',
    'o', 't', 'i', 'c', 's', ':', 'r', 'o', 'b', 'o', 't', 'c', 'o', 'r', 'e',
    ':', 'r', 'a', 't', 'e', ':', 'T', 'i', 'm', 'e', 'P', 'r', 'o', 'v', 'i',
    'd', 'e', 'r', 'N', 'o', 't', 'I', 'n', 'i', 't', 'i', 'a', 'l', 'i', 'z',
    'e', 'd' };

  const mxArray *m;
  static const int32_T iv[2] = { 1, 57 };

  const mxArray *b_y;
  static const int32_T iv1[2] = { 1, 57 };

  st.prev = sp;
  st.tls = sp->tls;
  st.site = &wh_emlrtRSI;
  valid = (obj->StartTime != -1.0);
  if (!valid) {
    for (i = 0; i < 57; i++) {
      b_u[i] = c_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, iv);
    emlrtInitCharArrayR2013a(sp, 57, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 57; i++) {
      b_u[i] = c_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, iv1);
    emlrtInitCharArrayR2013a(sp, 57, m, &b_u[0]);
    emlrtAssign(&b_y, m);
    st.site = &wh_emlrtRSI;
    f_error(&st, y, getString(&st, b_message(&st, b_y, &db_emlrtMCI),
             &db_emlrtMCI), &db_emlrtMCI);
  }

  systemTime = ctimefun();
  return systemTime - obj->StartTime;
}

static real_T IKHelpers_evaluateSolution(const emlrtStack *sp,
  robotics_manip_internal_IKExtraArgs *args)
{
  emlrtStack st;
  real_T y[6];
  real_T a[36];
  int32_T k;
  emxArray_real_T *b_b;
  int32_T loop_ub;
  int32_T aoffset;
  real_T b_y;
  st.prev = sp;
  st.tls = sp->tls;
  for (k = 0; k < 36; k++) {
    a[k] = args->WeightMatrix[k];
  }

  emxInit_real_T1(&b_b, 1);
  k = b_b->size[0];
  b_b->size[0] = args->ErrTemp->size[0];
  emxEnsureCapacity_real_T1(b_b, k);
  loop_ub = args->ErrTemp->size[0];
  for (k = 0; k < loop_ub; k++) {
    b_b->data[k] = args->ErrTemp->data[k];
  }

  st.site = &og_emlrtRSI;
  f_dynamic_size_checks(&st, b_b, b_b->size[0]);
  if (b_b->size[0] == 1) {
    for (k = 0; k < 6; k++) {
      y[k] = 0.0;
      for (loop_ub = 0; loop_ub < 6; loop_ub++) {
        b_y = y[k] + a[k + 6 * loop_ub] * b_b->data[loop_ub];
        y[k] = b_y;
      }
    }
  } else {
    for (loop_ub = 0; loop_ub < 6; loop_ub++) {
      y[loop_ub] = 0.0;
    }

    for (k = 0; k < 6; k++) {
      aoffset = k * 6 - 1;
      for (loop_ub = 0; loop_ub < 6; loop_ub++) {
        y[loop_ub] += b_b->data[k] * a[(aoffset + loop_ub) + 1];
      }
    }
  }

  emxFree_real_T(&b_b);
  return c_norm(y);
}

static void f_dynamic_size_checks(const emlrtStack *sp, emxArray_real_T *b_b,
  int32_T innerDimB)
{
  emlrtStack st;
  char_T b_u[15];
  char_T c_u[45];
  int32_T i;
  const mxArray *y;
  static char_T d_u[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'i', 'n', 'n',
    'e', 'r', 'd', 'i', 'm' };

  static char_T e_u[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D', 'y',
    'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p', 'a',
    'n', 's', 'i', 'o', 'n' };

  const mxArray *m;
  static const int32_T iv[2] = { 1, 15 };

  static const int32_T iv1[2] = { 1, 45 };

  const mxArray *b_y;
  static const int32_T iv2[2] = { 1, 15 };

  static const int32_T iv3[2] = { 1, 45 };

  st.prev = sp;
  st.tls = sp->tls;
  if (6 != innerDimB) {
    if (b_b->size[0] == 1) {
      for (i = 0; i < 45; i++) {
        c_u[i] = e_u[i];
      }

      y = NULL;
      m = emlrtCreateCharArray(2, iv1);
      emlrtInitCharArrayR2013a(sp, 45, m, &c_u[0]);
      emlrtAssign(&y, m);
      for (i = 0; i < 45; i++) {
        c_u[i] = e_u[i];
      }

      b_y = NULL;
      m = emlrtCreateCharArray(2, iv3);
      emlrtInitCharArrayR2013a(sp, 45, m, &c_u[0]);
      emlrtAssign(&b_y, m);
      st.site = &hl_emlrtRSI;
      f_error(&st, y, getString(&st, b_message(&st, b_y, &bb_emlrtMCI),
               &bb_emlrtMCI), &bb_emlrtMCI);
    } else {
      for (i = 0; i < 15; i++) {
        b_u[i] = d_u[i];
      }

      y = NULL;
      m = emlrtCreateCharArray(2, iv);
      emlrtInitCharArrayR2013a(sp, 15, m, &b_u[0]);
      emlrtAssign(&y, m);
      for (i = 0; i < 15; i++) {
        b_u[i] = d_u[i];
      }

      b_y = NULL;
      m = emlrtCreateCharArray(2, iv2);
      emlrtInitCharArrayR2013a(sp, 15, m, &b_u[0]);
      emlrtAssign(&b_y, m);
      st.site = &il_emlrtRSI;
      f_error(&st, y, getString(&st, b_message(&st, b_y, &ab_emlrtMCI),
               &ab_emlrtMCI), &ab_emlrtMCI);
    }
  }
}

static real_T c_norm(real_T x[6])
{
  real_T y;
  real_T scale;
  int32_T k;
  real_T absxk;
  real_T t;
  y = 0.0;
  scale = 3.3121686421112381E-170;
  for (k = 0; k < 6; k++) {
    absxk = muDoubleScalarAbs(x[k]);
    if (absxk > scale) {
      t = scale / absxk;
      y = y * t * t + 1.0;
      scale = absxk;
    } else {
      t = absxk / scale;
      y += t * t;
    }
  }

  return scale * muDoubleScalarSqrt(y);
}

static void g_dynamic_size_checks(const emlrtStack *sp, emxArray_real_T *a,
  emxArray_real_T *b_b, int32_T innerDimA, int32_T innerDimB)
{
  emlrtStack st;
  char_T b_u[15];
  char_T c_u[45];
  int32_T i;
  const mxArray *y;
  static char_T d_u[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'i', 'n', 'n',
    'e', 'r', 'd', 'i', 'm' };

  static char_T e_u[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D', 'y',
    'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p', 'a',
    'n', 's', 'i', 'o', 'n' };

  const mxArray *m;
  static const int32_T iv[2] = { 1, 15 };

  static const int32_T iv1[2] = { 1, 45 };

  const mxArray *b_y;
  static const int32_T iv2[2] = { 1, 15 };

  static const int32_T iv3[2] = { 1, 45 };

  st.prev = sp;
  st.tls = sp->tls;
  if (innerDimA != innerDimB) {
    if (((a->size[0] == 1) && (a->size[1] == 1)) || ((b_b->size[0] == 1) &&
         (b_b->size[1] == 1))) {
      for (i = 0; i < 45; i++) {
        c_u[i] = e_u[i];
      }

      y = NULL;
      m = emlrtCreateCharArray(2, iv1);
      emlrtInitCharArrayR2013a(sp, 45, m, &c_u[0]);
      emlrtAssign(&y, m);
      for (i = 0; i < 45; i++) {
        c_u[i] = e_u[i];
      }

      b_y = NULL;
      m = emlrtCreateCharArray(2, iv3);
      emlrtInitCharArrayR2013a(sp, 45, m, &c_u[0]);
      emlrtAssign(&b_y, m);
      st.site = &hl_emlrtRSI;
      f_error(&st, y, getString(&st, b_message(&st, b_y, &bb_emlrtMCI),
               &bb_emlrtMCI), &bb_emlrtMCI);
    } else {
      for (i = 0; i < 15; i++) {
        b_u[i] = d_u[i];
      }

      y = NULL;
      m = emlrtCreateCharArray(2, iv);
      emlrtInitCharArrayR2013a(sp, 15, m, &b_u[0]);
      emlrtAssign(&y, m);
      for (i = 0; i < 15; i++) {
        b_u[i] = d_u[i];
      }

      b_y = NULL;
      m = emlrtCreateCharArray(2, iv2);
      emlrtInitCharArrayR2013a(sp, 15, m, &b_u[0]);
      emlrtAssign(&b_y, m);
      st.site = &il_emlrtRSI;
      f_error(&st, y, getString(&st, b_message(&st, b_y, &ab_emlrtMCI),
               &ab_emlrtMCI), &ab_emlrtMCI);
    }
  }
}

static void g_mtimes(emxArray_real_T *A, emxArray_real_T *B, emxArray_real_T *C)
{
  char_T TRANSB1;
  int32_T i;
  char_T TRANSA1;
  real_T alpha1;
  real_T beta1;
  ptrdiff_t m_t;
  int32_T loop_ub;
  ptrdiff_t n_t;
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  if ((A->size[0] == 0) || (A->size[1] == 0) || (B->size[0] == 0) || (B->size[1]
       == 0)) {
    i = C->size[0] * C->size[1];
    C->size[0] = A->size[1];
    C->size[1] = B->size[1];
    emxEnsureCapacity_real_T(C, i);
    loop_ub = A->size[1] * B->size[1] - 1;
    for (i = 0; i <= loop_ub; i++) {
      C->data[i] = 0.0;
    }
  } else {
    TRANSB1 = 'N';
    TRANSA1 = 'T';
    alpha1 = 1.0;
    beta1 = 0.0;
    m_t = (ptrdiff_t)A->size[1];
    n_t = (ptrdiff_t)B->size[1];
    k_t = (ptrdiff_t)A->size[0];
    lda_t = (ptrdiff_t)A->size[0];
    ldb_t = (ptrdiff_t)B->size[0];
    ldc_t = (ptrdiff_t)A->size[1];
    i = C->size[0] * C->size[1];
    C->size[0] = A->size[1];
    C->size[1] = B->size[1];
    emxEnsureCapacity_real_T(C, i);
    dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, &A->data[0], &lda_t,
          &B->data[0], &ldb_t, &beta1, &C->data[0], &ldc_t);
  }
}

static void mldivide(const emlrtStack *sp, emxArray_real_T *A, emxArray_real_T
                     *B, emxArray_real_T *Y)
{
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  char_T b_u[15];
  int32_T i;
  emxArray_real_T *b_A;
  emxArray_int32_T *ipiv;
  emxArray_ptrdiff_t *ipiv_t;
  const mxArray *y;
  static char_T c_u[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'd', 'i', 'm',
    'a', 'g', 'r', 'e', 'e' };

  emxArray_real_T *b_Y;
  const mxArray *m;
  static const int32_T iv[2] = { 1, 15 };

  uint32_T unnamed_idx_0;
  uint32_T unnamed_idx_1;
  int32_T n;
  const mxArray *b_y;
  int32_T loop_ub;
  static const int32_T iv1[2] = { 1, 15 };

  ptrdiff_t info_t;
  int32_T info;
  int32_T nb;
  int32_T ip;
  real_T temp;
  char_T DIAGA1;
  char_T TRANSA1;
  char_T UPLO1;
  char_T SIDE1;
  ptrdiff_t n_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  if (B->size[0] != A->size[0]) {
    for (i = 0; i < 15; i++) {
      b_u[i] = c_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, iv);
    emlrtInitCharArrayR2013a(sp, 15, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 15; i++) {
      b_u[i] = c_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, iv1);
    emlrtInitCharArrayR2013a(sp, 15, m, &b_u[0]);
    emlrtAssign(&b_y, m);
    st.site = &ol_emlrtRSI;
    f_error(&st, y, getString(&st, b_message(&st, b_y, &eb_emlrtMCI),
             &eb_emlrtMCI), &eb_emlrtMCI);
  }

  st.site = &xh_emlrtRSI;
  emxInit_real_T(&b_A, 2);
  emxInit_int32_T(&ipiv, 2);
  emxInit_ptrdiff_t(&ipiv_t, 1);
  emxInit_real_T(&b_Y, 2);
  if ((A->size[0] == 0) || (A->size[1] == 0) || ((B->size[0] == 0) || (B->size[1]
        == 0))) {
    unnamed_idx_0 = (uint32_T)A->size[1];
    unnamed_idx_1 = (uint32_T)B->size[1];
    i = Y->size[0] * Y->size[1];
    Y->size[0] = (int32_T)unnamed_idx_0;
    Y->size[1] = (int32_T)unnamed_idx_1;
    emxEnsureCapacity_real_T(Y, i);
    loop_ub = (int32_T)unnamed_idx_0 * (int32_T)unnamed_idx_1 - 1;
    for (i = 0; i <= loop_ub; i++) {
      Y->data[i] = 0.0;
    }
  } else if (A->size[0] == A->size[1]) {
    b_st.site = &yh_emlrtRSI;
    n = A->size[1];
    c_st.site = &ci_emlrtRSI;
    i = b_A->size[0] * b_A->size[1];
    b_A->size[0] = A->size[0];
    b_A->size[1] = A->size[1];
    emxEnsureCapacity_real_T(b_A, i);
    loop_ub = A->size[0] * A->size[1] - 1;
    for (i = 0; i <= loop_ub; i++) {
      b_A->data[i] = A->data[i];
    }

    d_st.site = &fi_emlrtRSI;
    repmat((ptrdiff_t)0.0, muIntScalarMin_sint32(n, n), ipiv_t);
    n = ipiv_t->size[0];
    i = ipiv_t->size[0];
    ipiv_t->size[0] = n;
    emxEnsureCapacity_ptrdiff_t(ipiv_t, i);
    info_t = LAPACKE_dgetrf_work(102, (ptrdiff_t)A->size[1], (ptrdiff_t)A->size
      [1], &b_A->data[0], (ptrdiff_t)A->size[1], &ipiv_t->data[0]);
    info = (int32_T)info_t;
    i = ipiv->size[0] * ipiv->size[1];
    ipiv->size[0] = 1;
    ipiv->size[1] = ipiv_t->size[0];
    emxEnsureCapacity_int32_T1(ipiv, i);
    if (info < 0) {
      i = b_A->size[0] * b_A->size[1];
      emxEnsureCapacity_real_T(b_A, i);
      loop_ub = b_A->size[1];
      for (i = 0; i < loop_ub; i++) {
        n = b_A->size[0];
        for (ip = 0; ip < n; ip++) {
          b_A->data[ip + b_A->size[0] * i] = rtNaN;
        }
      }

      i = ipiv->size[1];
      for (n = 0; n < i; n++) {
        ipiv->data[n] = n + 1;
      }
    } else {
      i = ipiv->size[1];
      for (n = 0; n < i; n++) {
        ipiv->data[n] = (int32_T)ipiv_t->data[n];
      }
    }

    if (((A->size[0] != 1) || (A->size[1] != 1)) && (info > 0)) {
      c_st.site = &bi_emlrtRSI;
      d_st.site = &mi_emlrtRSI;
      b_warning(&d_st);
    }

    nb = B->size[1] - 1;
    i = Y->size[0] * Y->size[1];
    Y->size[0] = B->size[0];
    Y->size[1] = B->size[1];
    emxEnsureCapacity_real_T(Y, i);
    loop_ub = B->size[0] * B->size[1] - 1;
    for (i = 0; i <= loop_ub; i++) {
      Y->data[i] = B->data[i];
    }

    i = A->size[1] - 2;
    for (n = 0; n <= i; n++) {
      if (ipiv->data[n] != n + 1) {
        ip = ipiv->data[n] - 1;
        for (info = 0; info <= nb; info++) {
          temp = Y->data[n + Y->size[0] * info];
          Y->data[n + Y->size[0] * info] = Y->data[ip + Y->size[0] * info];
          Y->data[ip + Y->size[0] * info] = temp;
        }
      }
    }

    c_st.site = &di_emlrtRSI;
    temp = 1.0;
    DIAGA1 = 'U';
    TRANSA1 = 'N';
    UPLO1 = 'L';
    SIDE1 = 'L';
    info_t = (ptrdiff_t)A->size[1];
    n_t = (ptrdiff_t)B->size[1];
    lda_t = (ptrdiff_t)A->size[1];
    ldb_t = (ptrdiff_t)A->size[1];
    dtrsm(&SIDE1, &UPLO1, &TRANSA1, &DIAGA1, &info_t, &n_t, &temp, &b_A->data[0],
          &lda_t, &Y->data[0], &ldb_t);
    i = b_Y->size[0] * b_Y->size[1];
    b_Y->size[0] = Y->size[0];
    b_Y->size[1] = Y->size[1];
    emxEnsureCapacity_real_T(b_Y, i);
    loop_ub = Y->size[0] * Y->size[1];
    for (i = 0; i < loop_ub; i++) {
      b_Y->data[i] = Y->data[i];
    }

    c_st.site = &ei_emlrtRSI;
    xtrsm(A->size[1], B->size[1], b_A, A->size[1], b_Y, A->size[1], Y);
  } else {
    b_st.site = &ai_emlrtRSI;
    qrsolve(&b_st, A, B, Y);
  }

  emxFree_real_T(&b_Y);
  emxFree_ptrdiff_t(&ipiv_t);
  emxFree_int32_T(&ipiv);
  emxFree_real_T(&b_A);
}

static void repmat(ptrdiff_t a, int32_T varargin_1, emxArray_ptrdiff_t *b_b)
{
  emlrtStack st;
  int32_T i;
  st.site = &gi_emlrtRSI;
  i = b_b->size[0];
  b_b->size[0] = varargin_1;
  emxEnsureCapacity_ptrdiff_t(b_b, i);
  for (i = 0; i < varargin_1; i++) {
    b_b->data[i] = a;
  }
}

static void eml_integer_colon_dispatcher(const emlrtStack *sp, int32_T b_b,
  emxArray_int32_T *y)
{
  emlrtStack st;
  emlrtStack b_st;
  int32_T n;
  int32_T yk;
  int32_T k;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &ji_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (b_b < 1) {
    n = 0;
  } else {
    b_st.site = &ki_emlrtRSI;
    assert_pmaxsize(&b_st, true);
    n = b_b;
  }

  yk = y->size[0] * y->size[1];
  y->size[0] = 1;
  y->size[1] = n;
  emxEnsureCapacity_int32_T1(y, yk);
  if (n > 0) {
    y->data[0] = 1;
    yk = 1;
    for (k = 2; k <= n; k++) {
      yk++;
      y->data[k - 1] = yk;
    }
  }
}

static void assert_pmaxsize(const emlrtStack *sp, boolean_T p)
{
  emlrtStack st;
  char_T b_u[21];
  int32_T i;
  const mxArray *y;
  static char_T c_u[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
    'A', 'B', ':', 'p', 'm', 'a', 'x', 's', 'i', 'z', 'e' };

  const mxArray *m;
  static const int32_T iv[2] = { 1, 21 };

  const mxArray *b_y;
  static const int32_T iv1[2] = { 1, 21 };

  st.prev = sp;
  st.tls = sp->tls;
  if (!p) {
    for (i = 0; i < 21; i++) {
      b_u[i] = c_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, iv);
    emlrtInitCharArrayR2013a(sp, 21, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 21; i++) {
      b_u[i] = c_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, iv1);
    emlrtInitCharArrayR2013a(sp, 21, m, &b_u[0]);
    emlrtAssign(&b_y, m);
    st.site = &nl_emlrtRSI;
    f_error(&st, y, getString(&st, b_message(&st, b_y, &gb_emlrtMCI),
             &gb_emlrtMCI), &gb_emlrtMCI);
  }
}

static void xtrsm(int32_T m, int32_T n, emxArray_real_T *A, int32_T lda,
                  emxArray_real_T *B, int32_T ldb, emxArray_real_T *b_B)
{
  int32_T i;
  int32_T loop_ub;
  real_T alpha1;
  char_T DIAGA1;
  char_T TRANSA1;
  char_T UPLO1;
  char_T SIDE1;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  i = b_B->size[0] * b_B->size[1];
  b_B->size[0] = B->size[0];
  b_B->size[1] = B->size[1];
  emxEnsureCapacity_real_T(b_B, i);
  loop_ub = B->size[0] * B->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    b_B->data[i] = B->data[i];
  }

  if ((m < 1) || (n < 1)) {
  } else {
    alpha1 = 1.0;
    DIAGA1 = 'N';
    TRANSA1 = 'N';
    UPLO1 = 'U';
    SIDE1 = 'L';
    m_t = (ptrdiff_t)m;
    n_t = (ptrdiff_t)n;
    lda_t = (ptrdiff_t)lda;
    ldb_t = (ptrdiff_t)ldb;
    dtrsm(&SIDE1, &UPLO1, &TRANSA1, &DIAGA1, &m_t, &n_t, &alpha1, &A->data[0],
          &lda_t, &b_B->data[0], &ldb_t);
  }
}

static void qrsolve(const emlrtStack *sp, emxArray_real_T *A, emxArray_real_T *B,
                    emxArray_real_T *Y)
{
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emxArray_int32_T *jpvt;
  int32_T ma;
  int32_T na;
  int32_T i;
  int32_T loop_ub;
  emxArray_real_T *b_A;
  emxArray_real_T *tau;
  int32_T b_ma;
  int32_T b_na;
  int32_T minmana;
  emxArray_ptrdiff_t *jpvt_t;
  ptrdiff_t info_t;
  int32_T i1;
  int32_T b_i;
  real_T tol;
  char_T str[14];
  char_T rfmt[6];
  const mxArray *y;
  static char_T b_rfmt[6] = { '%', '1', '4', '.', '6', 'e' };

  const mxArray *m;
  static const int32_T iv[2] = { 1, 6 };

  const mxArray *b_y;
  emxArray_real_T *b_B;
  ptrdiff_t nrc_t;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emxInit_int32_T(&jpvt, 2);
  st.site = &ni_emlrtRSI;
  ma = A->size[0];
  na = A->size[1] - 1;
  i = jpvt->size[0] * jpvt->size[1];
  jpvt->size[0] = 1;
  jpvt->size[1] = A->size[1];
  emxEnsureCapacity_int32_T1(jpvt, i);
  loop_ub = A->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    jpvt->data[i] = 0;
  }

  emxInit_real_T(&b_A, 2);
  i = b_A->size[0] * b_A->size[1];
  b_A->size[0] = A->size[0];
  b_A->size[1] = A->size[1];
  emxEnsureCapacity_real_T(b_A, i);
  loop_ub = A->size[0] * A->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    b_A->data[i] = A->data[i];
  }

  emxInit_real_T1(&tau, 1);
  b_ma = b_A->size[0];
  b_na = b_A->size[1];
  minmana = muIntScalarMin_sint32(b_ma, b_na);
  i = tau->size[0];
  tau->size[0] = minmana;
  emxEnsureCapacity_real_T1(tau, i);
  emxInit_ptrdiff_t(&jpvt_t, 1);
  if ((b_A->size[0] == 0) || (b_A->size[1] == 0) || (A->size[0] < 1) || (A->
       size[1] < 1)) {
    loop_ub = tau->size[0];
    i = tau->size[0];
    tau->size[0] = loop_ub;
    emxEnsureCapacity_real_T1(tau, i);
    for (i = 0; i < loop_ub; i++) {
      tau->data[i] = 0.0;
    }

    for (b_na = 0; b_na <= na; b_na++) {
      jpvt->data[b_na] = b_na + 1;
    }
  } else {
    i = jpvt_t->size[0];
    jpvt_t->size[0] = A->size[1];
    emxEnsureCapacity_ptrdiff_t(jpvt_t, i);
    loop_ub = A->size[1];
    for (i = 0; i < loop_ub; i++) {
      jpvt_t->data[i] = (ptrdiff_t)0;
    }

    info_t = LAPACKE_dgeqp3(102, (ptrdiff_t)A->size[0], (ptrdiff_t)A->size[1],
      &b_A->data[0], (ptrdiff_t)b_A->size[0], &jpvt_t->data[0], &tau->data[0]);
    if ((int32_T)info_t != 0) {
      for (loop_ub = 0; loop_ub <= na; loop_ub++) {
        for (b_i = 0; b_i < ma; b_i++) {
          b_A->data[loop_ub * b_ma + b_i] = rtNaN;
        }
      }

      i1 = na + 1;
      ma = muIntScalarMin_sint32(ma, i1) - 1;
      for (b_na = 0; b_na <= ma; b_na++) {
        tau->data[b_na] = rtNaN;
      }

      for (b_na = ma + 2; b_na <= minmana; b_na++) {
        tau->data[b_na - 1] = 0.0;
      }

      for (b_na = 0; b_na <= na; b_na++) {
        jpvt->data[b_na] = b_na + 1;
      }
    } else {
      for (b_na = 0; b_na <= na; b_na++) {
        jpvt->data[b_na] = (int32_T)jpvt_t->data[b_na];
      }
    }
  }

  emxFree_ptrdiff_t(&jpvt_t);
  st.site = &oi_emlrtRSI;
  minmana = 0;
  tol = 0.0;
  if (b_A->size[0] < b_A->size[1]) {
    ma = b_A->size[0];
    b_na = b_A->size[1];
  } else {
    ma = b_A->size[1];
    b_na = b_A->size[0];
  }

  if (ma > 0) {
    tol = muDoubleScalarMin(1.4901161193847656E-8, 2.2204460492503131E-15 *
      (real_T)b_na) * muDoubleScalarAbs(b_A->data[0]);
    while ((minmana < ma) && (!(muDoubleScalarAbs(b_A->data[minmana + b_A->size
              [0] * minmana]) <= tol))) {
      minmana++;
    }
  }

  if (minmana < ma) {
    b_st.site = &dj_emlrtRSI;
    for (i = 0; i < 6; i++) {
      rfmt[i] = b_rfmt[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, iv);
    emlrtInitCharArrayR2013a(&b_st, 6, m, &rfmt[0]);
    emlrtAssign(&y, m);
    b_y = NULL;
    m = emlrtCreateDoubleScalar(tol);
    emlrtAssign(&b_y, m);
    c_st.site = &yl_emlrtRSI;
    emlrt_marshallIn(&c_st, b_sprintf(&c_st, y, b_y, &o_emlrtMCI),
                     "<output of sprintf>", str);
    b_st.site = &ej_emlrtRSI;
    f_warning(&b_st, minmana, str);
  }

  st.site = &pi_emlrtRSI;
  b_ma = B->size[1] - 1;
  b_na = b_A->size[1];
  ma = B->size[1];
  i = Y->size[0] * Y->size[1];
  Y->size[0] = b_na;
  Y->size[1] = ma;
  emxEnsureCapacity_real_T(Y, i);
  loop_ub = b_na * ma - 1;
  for (i = 0; i <= loop_ub; i++) {
    Y->data[i] = 0.0;
  }

  emxInit_real_T(&b_B, 2);
  b_st.site = &fj_emlrtRSI;
  c_st.site = &gj_emlrtRSI;
  i = b_B->size[0] * b_B->size[1];
  b_B->size[0] = B->size[0];
  b_B->size[1] = B->size[1];
  emxEnsureCapacity_real_T(b_B, i);
  loop_ub = B->size[0] * B->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    b_B->data[i] = B->data[i];
  }

  if (b_A->size[0] < b_A->size[1]) {
    b_na = b_A->size[0];
  } else {
    b_na = b_A->size[1];
  }

  if ((b_A->size[0] != 0) && (b_A->size[1] != 0) && ((b_B->size[0] != 0) &&
       (b_B->size[1] != 0))) {
    nrc_t = (ptrdiff_t)b_B->size[0];
    info_t = LAPACKE_dormqr(102, 'L', 'T', nrc_t, (ptrdiff_t)b_B->size[1],
      (ptrdiff_t)b_na, &b_A->data[0], (ptrdiff_t)b_A->size[0], &tau->data[0],
      &b_B->data[0], nrc_t);
    if ((int32_T)info_t != 0) {
      i = b_B->size[0] * b_B->size[1];
      emxEnsureCapacity_real_T(b_B, i);
      loop_ub = b_B->size[1];
      for (i = 0; i < loop_ub; i++) {
        b_na = b_B->size[0];
        for (ma = 0; ma < b_na; ma++) {
          b_B->data[ma + b_B->size[0] * i] = rtNaN;
        }
      }
    }
  }

  emxFree_real_T(&tau);
  for (b_na = 0; b_na <= b_ma; b_na++) {
    for (b_i = 0; b_i < minmana; b_i++) {
      Y->data[(jpvt->data[b_i] + Y->size[0] * b_na) - 1] = b_B->data[b_i +
        b_B->size[0] * b_na];
    }

    for (loop_ub = minmana; loop_ub > 0; loop_ub--) {
      Y->data[(jpvt->data[loop_ub - 1] + Y->size[0] * b_na) - 1] /= b_A->data
        [(loop_ub + b_A->size[0] * (loop_ub - 1)) - 1];
      i = loop_ub - 2;
      for (b_i = 0; b_i <= i; b_i++) {
        Y->data[(jpvt->data[b_i] + Y->size[0] * b_na) - 1] -= Y->data
          [(jpvt->data[loop_ub - 1] + Y->size[0] * b_na) - 1] * b_A->data[b_i +
          b_A->size[0] * (loop_ub - 1)];
      }
    }
  }

  emxFree_real_T(&b_B);
  emxFree_int32_T(&jpvt);
  emxFree_real_T(&b_A);
}

static void f_warning(const emlrtStack *sp, int32_T varargin_1, char_T
                      varargin_2[14])
{
  emlrtStack st;
  char_T msgID[32];
  int32_T i;
  char_T b_u[7];
  static char_T b_msgID[32] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
    'A', 'B', ':', 'r', 'a', 'n', 'k', 'D', 'e', 'f', 'i', 'c', 'i', 'e', 'n',
    't', 'M', 'a', 't', 'r', 'i', 'x' };

  const mxArray *y;
  static char_T c_u[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };

  const mxArray *m;
  static const int32_T iv[2] = { 1, 7 };

  const mxArray *b_y;
  static char_T d_u[7] = { 'm', 'e', 's', 's', 'a', 'g', 'e' };

  static const int32_T iv1[2] = { 1, 7 };

  const mxArray *c_y;
  static const int32_T iv2[2] = { 1, 32 };

  const mxArray *d_y;
  const mxArray *e_y;
  static const int32_T iv3[2] = { 1, 14 };

  st.prev = sp;
  st.tls = sp->tls;
  for (i = 0; i < 32; i++) {
    msgID[i] = b_msgID[i];
  }

  for (i = 0; i < 7; i++) {
    b_u[i] = c_u[i];
  }

  y = NULL;
  m = emlrtCreateCharArray(2, iv);
  emlrtInitCharArrayR2013a(sp, 7, m, &b_u[0]);
  emlrtAssign(&y, m);
  for (i = 0; i < 7; i++) {
    b_u[i] = d_u[i];
  }

  b_y = NULL;
  m = emlrtCreateCharArray(2, iv1);
  emlrtInitCharArrayR2013a(sp, 7, m, &b_u[0]);
  emlrtAssign(&b_y, m);
  c_y = NULL;
  m = emlrtCreateCharArray(2, iv2);
  emlrtInitCharArrayR2013a(sp, 32, m, &msgID[0]);
  emlrtAssign(&c_y, m);
  d_y = NULL;
  m = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
  *(int32_T *)emlrtMxGetData(m) = varargin_1;
  emlrtAssign(&d_y, m);
  e_y = NULL;
  m = emlrtCreateCharArray(2, iv3);
  emlrtInitCharArrayR2013a(sp, 14, m, &varargin_2[0]);
  emlrtAssign(&e_y, m);
  st.site = &xl_emlrtRSI;
  b_feval(&st, y, d_feval(&st, b_y, c_y, d_y, e_y, &j_emlrtMCI), &k_emlrtMCI);
}

static void h_dynamic_size_checks(const emlrtStack *sp, emxArray_real_T *a,
  emxArray_real_T *b_b, int32_T innerDimA, int32_T innerDimB)
{
  emlrtStack st;
  char_T b_u[15];
  char_T c_u[45];
  int32_T i;
  const mxArray *y;
  static char_T d_u[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'i', 'n', 'n',
    'e', 'r', 'd', 'i', 'm' };

  static char_T e_u[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D', 'y',
    'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p', 'a',
    'n', 's', 'i', 'o', 'n' };

  const mxArray *m;
  static const int32_T iv[2] = { 1, 15 };

  static const int32_T iv1[2] = { 1, 45 };

  const mxArray *b_y;
  static const int32_T iv2[2] = { 1, 15 };

  static const int32_T iv3[2] = { 1, 45 };

  st.prev = sp;
  st.tls = sp->tls;
  if (innerDimA != innerDimB) {
    if (((a->size[0] == 1) && (a->size[1] == 1)) || (b_b->size[0] == 1)) {
      for (i = 0; i < 45; i++) {
        c_u[i] = e_u[i];
      }

      y = NULL;
      m = emlrtCreateCharArray(2, iv1);
      emlrtInitCharArrayR2013a(sp, 45, m, &c_u[0]);
      emlrtAssign(&y, m);
      for (i = 0; i < 45; i++) {
        c_u[i] = e_u[i];
      }

      b_y = NULL;
      m = emlrtCreateCharArray(2, iv3);
      emlrtInitCharArrayR2013a(sp, 45, m, &c_u[0]);
      emlrtAssign(&b_y, m);
      st.site = &hl_emlrtRSI;
      f_error(&st, y, getString(&st, b_message(&st, b_y, &bb_emlrtMCI),
               &bb_emlrtMCI), &bb_emlrtMCI);
    } else {
      for (i = 0; i < 15; i++) {
        b_u[i] = d_u[i];
      }

      y = NULL;
      m = emlrtCreateCharArray(2, iv);
      emlrtInitCharArrayR2013a(sp, 15, m, &b_u[0]);
      emlrtAssign(&y, m);
      for (i = 0; i < 15; i++) {
        b_u[i] = d_u[i];
      }

      b_y = NULL;
      m = emlrtCreateCharArray(2, iv2);
      emlrtInitCharArrayR2013a(sp, 15, m, &b_u[0]);
      emlrtAssign(&b_y, m);
      st.site = &il_emlrtRSI;
      f_error(&st, y, getString(&st, b_message(&st, b_y, &ab_emlrtMCI),
               &ab_emlrtMCI), &ab_emlrtMCI);
    }
  }
}

static void h_mtimes(emxArray_real_T *A, emxArray_real_T *B, emxArray_real_T *C)
{
  char_T TRANSB1;
  int32_T i;
  char_T TRANSA1;
  real_T alpha1;
  real_T beta1;
  int32_T loop_ub;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  if ((A->size[0] == 0) || (A->size[1] == 0) || (B->size[0] == 0)) {
    i = C->size[0];
    C->size[0] = A->size[0];
    emxEnsureCapacity_real_T1(C, i);
    loop_ub = A->size[0];
    for (i = 0; i < loop_ub; i++) {
      C->data[i] = 0.0;
    }
  } else {
    TRANSB1 = 'N';
    TRANSA1 = 'N';
    alpha1 = 1.0;
    beta1 = 0.0;
    m_t = (ptrdiff_t)A->size[0];
    n_t = (ptrdiff_t)1;
    k_t = (ptrdiff_t)A->size[1];
    lda_t = (ptrdiff_t)A->size[0];
    ldb_t = (ptrdiff_t)B->size[0];
    ldc_t = (ptrdiff_t)A->size[0];
    i = C->size[0];
    C->size[0] = A->size[0];
    emxEnsureCapacity_real_T1(C, i);
    dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, &A->data[0], &lda_t,
          &B->data[0], &ldb_t, &beta1, &C->data[0], &ldc_t);
  }
}

static void i_dynamic_size_checks(const emlrtStack *sp, emxArray_real_T *b_b,
  int32_T innerDimB)
{
  emlrtStack st;
  char_T b_u[15];
  char_T c_u[45];
  int32_T i;
  const mxArray *y;
  static char_T d_u[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'i', 'n', 'n',
    'e', 'r', 'd', 'i', 'm' };

  static char_T e_u[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D', 'y',
    'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p', 'a',
    'n', 's', 'i', 'o', 'n' };

  const mxArray *m;
  static const int32_T iv[2] = { 1, 15 };

  static const int32_T iv1[2] = { 1, 45 };

  const mxArray *b_y;
  static const int32_T iv2[2] = { 1, 15 };

  static const int32_T iv3[2] = { 1, 45 };

  st.prev = sp;
  st.tls = sp->tls;
  if (2 != innerDimB) {
    if (b_b->size[0] == 1) {
      for (i = 0; i < 45; i++) {
        c_u[i] = e_u[i];
      }

      y = NULL;
      m = emlrtCreateCharArray(2, iv1);
      emlrtInitCharArrayR2013a(sp, 45, m, &c_u[0]);
      emlrtAssign(&y, m);
      for (i = 0; i < 45; i++) {
        c_u[i] = e_u[i];
      }

      b_y = NULL;
      m = emlrtCreateCharArray(2, iv3);
      emlrtInitCharArrayR2013a(sp, 45, m, &c_u[0]);
      emlrtAssign(&b_y, m);
      st.site = &hl_emlrtRSI;
      f_error(&st, y, getString(&st, b_message(&st, b_y, &bb_emlrtMCI),
               &bb_emlrtMCI), &bb_emlrtMCI);
    } else {
      for (i = 0; i < 15; i++) {
        b_u[i] = d_u[i];
      }

      y = NULL;
      m = emlrtCreateCharArray(2, iv);
      emlrtInitCharArrayR2013a(sp, 15, m, &b_u[0]);
      emlrtAssign(&y, m);
      for (i = 0; i < 15; i++) {
        b_u[i] = d_u[i];
      }

      b_y = NULL;
      m = emlrtCreateCharArray(2, iv2);
      emlrtInitCharArrayR2013a(sp, 15, m, &b_u[0]);
      emlrtAssign(&b_y, m);
      st.site = &il_emlrtRSI;
      f_error(&st, y, getString(&st, b_message(&st, b_y, &ab_emlrtMCI),
               &ab_emlrtMCI), &ab_emlrtMCI);
    }
  }
}

static void i_mtimes(real_T A[4], emxArray_real_T *B, real_T C[2])
{
  int32_T i;
  int32_T k;
  int32_T aoffset;
  for (i = 0; i < 2; i++) {
    C[i] = 0.0;
  }

  for (k = 0; k < 2; k++) {
    aoffset = (k << 1) - 1;
    for (i = 0; i < 2; i++) {
      C[i] += B->data[k] * A[(aoffset + i) + 1];
    }
  }
}

static boolean_T DampedBFGSwGradientProjection_atLocalMinimum(const emlrtStack
  *sp, robotics_core_internal_DampedBFGSwGradientProjection *obj, real_T Hg[2],
  emxArray_real_T *alpha)
{
  boolean_T flag;
  emlrtStack st;
  emxArray_boolean_T *b_alpha;
  int32_T i;
  int32_T loop_ub;
  st.prev = sp;
  st.tls = sp->tls;
  emxInit_boolean_T(&b_alpha, 1);
  if (d_norm(Hg) < obj->GradientTolerance) {
    i = b_alpha->size[0];
    b_alpha->size[0] = alpha->size[0];
    emxEnsureCapacity_boolean_T(b_alpha, i);
    loop_ub = alpha->size[0];
    for (i = 0; i < loop_ub; i++) {
      b_alpha->data[i] = (alpha->data[i] <= 0.0);
    }

    st.site = &hj_emlrtRSI;
    if (all(&st, b_alpha)) {
      flag = true;
    } else {
      flag = false;
    }
  } else {
    flag = false;
  }

  emxFree_boolean_T(&b_alpha);
  return flag;
}

static real_T d_norm(real_T x[2])
{
  real_T y;
  real_T scale;
  int32_T k;
  real_T absxk;
  real_T t;
  y = 0.0;
  scale = 3.3121686421112381E-170;
  for (k = 0; k < 2; k++) {
    absxk = muDoubleScalarAbs(x[k]);
    if (absxk > scale) {
      t = scale / absxk;
      y = y * t * t + 1.0;
      scale = absxk;
    } else {
      t = absxk / scale;
      y += t * t;
    }
  }

  return scale * muDoubleScalarSqrt(y);
}

static boolean_T all(const emlrtStack *sp, emxArray_boolean_T *x)
{
  boolean_T y;
  emlrtStack st;
  char_T b_u[51];
  int32_T ix;
  boolean_T exitg1;
  const mxArray *b_y;
  static char_T c_u[51] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'e', 'm', 'l', '_', 'a', 'l', 'l', '_', 'o', 'r', '_',
    'a', 'n', 'y', '_', 'a', 'u', 't', 'o', 'D', 'i', 'm', 'I', 'n', 'c', 'o',
    'm', 'p', 'a', 't', 'i', 'b', 'i', 'l', 'i', 't', 'y' };

  const mxArray *m;
  static const int32_T iv[2] = { 1, 51 };

  const mxArray *c_y;
  static const int32_T iv1[2] = { 1, 51 };

  st.prev = sp;
  st.tls = sp->tls;
  if ((x->size[0] == 1) || (x->size[0] != 1)) {
  } else {
    for (ix = 0; ix < 51; ix++) {
      b_u[ix] = c_u[ix];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, iv);
    emlrtInitCharArrayR2013a(sp, 51, m, &b_u[0]);
    emlrtAssign(&b_y, m);
    for (ix = 0; ix < 51; ix++) {
      b_u[ix] = c_u[ix];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, iv1);
    emlrtInitCharArrayR2013a(sp, 51, m, &b_u[0]);
    emlrtAssign(&c_y, m);
    st.site = &jl_emlrtRSI;
    f_error(&st, b_y, getString(&st, b_message(&st, c_y, &hb_emlrtMCI),
             &hb_emlrtMCI), &hb_emlrtMCI);
  }

  y = true;
  ix = 0;
  exitg1 = false;
  while ((!exitg1) && (ix + 1 <= x->size[0])) {
    if (!x->data[ix]) {
      y = false;
      exitg1 = true;
    } else {
      ix++;
    }
  }

  return y;
}

static real_T b_IKHelpers_evaluateSolution(const emlrtStack *sp,
  robotics_manip_internal_IKExtraArgs *args)
{
  emlrtStack st;
  real_T y[6];
  real_T a[36];
  int32_T k;
  emxArray_real_T *b_b;
  int32_T loop_ub;
  int32_T aoffset;
  real_T b_y;
  st.prev = sp;
  st.tls = sp->tls;
  for (k = 0; k < 36; k++) {
    a[k] = args->WeightMatrix[k];
  }

  emxInit_real_T1(&b_b, 1);
  k = b_b->size[0];
  b_b->size[0] = args->ErrTemp->size[0];
  emxEnsureCapacity_real_T1(b_b, k);
  loop_ub = args->ErrTemp->size[0];
  for (k = 0; k < loop_ub; k++) {
    b_b->data[k] = args->ErrTemp->data[k];
  }

  st.site = &og_emlrtRSI;
  f_dynamic_size_checks(&st, b_b, b_b->size[0]);
  if (b_b->size[0] == 1) {
    for (k = 0; k < 6; k++) {
      y[k] = 0.0;
      for (loop_ub = 0; loop_ub < 6; loop_ub++) {
        b_y = y[k] + a[k + 6 * loop_ub] * b_b->data[loop_ub];
        y[k] = b_y;
      }
    }
  } else {
    for (loop_ub = 0; loop_ub < 6; loop_ub++) {
      y[loop_ub] = 0.0;
    }

    for (k = 0; k < 6; k++) {
      aoffset = k * 6 - 1;
      for (loop_ub = 0; loop_ub < 6; loop_ub++) {
        y[loop_ub] += b_b->data[k] * a[(aoffset + loop_ub) + 1];
      }
    }
  }

  emxFree_real_T(&b_b);
  return c_norm(y);
}

static void b_inv(const emlrtStack *sp, emxArray_real_T *x, emxArray_real_T *y)
{
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  boolean_T b_b;
  char_T b_u[19];
  int32_T i;
  int32_T n;
  const mxArray *b_y;
  static char_T c_u[19] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
    'A', 'B', ':', 's', 'q', 'u', 'a', 'r', 'e' };

  const mxArray *m;
  static const int32_T iv[2] = { 1, 19 };

  int32_T c;
  emxArray_real_T *A;
  const mxArray *c_y;
  static const int32_T iv1[2] = { 1, 19 };

  emxArray_int32_T *ipiv;
  emxArray_ptrdiff_t *ipiv_t;
  ptrdiff_t info_t;
  int32_T k;
  emxArray_int32_T *p;
  int32_T j;
  int32_T b_i;
  emxArray_real_T *d_y;
  real_T n1x;
  real_T n1xinv;
  real_T rc;
  char_T str[14];
  char_T rfmt[6];
  static char_T b_rfmt[6] = { '%', '1', '4', '.', '6', 'e' };

  static const int32_T iv2[2] = { 1, 6 };

  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b_b = (x->size[0] == x->size[1]);
  if (!b_b) {
    for (i = 0; i < 19; i++) {
      b_u[i] = c_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, iv);
    emlrtInitCharArrayR2013a(sp, 19, m, &b_u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 19; i++) {
      b_u[i] = c_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, iv1);
    emlrtInitCharArrayR2013a(sp, 19, m, &b_u[0]);
    emlrtAssign(&c_y, m);
    st.site = &ml_emlrtRSI;
    f_error(&st, b_y, getString(&st, b_message(&st, c_y, &ib_emlrtMCI),
             &ib_emlrtMCI), &ib_emlrtMCI);
  }

  if ((x->size[0] == 0) || (x->size[1] == 0)) {
    i = y->size[0] * y->size[1];
    y->size[0] = x->size[0];
    y->size[1] = x->size[1];
    emxEnsureCapacity_real_T(y, i);
    c = x->size[0] * x->size[1] - 1;
    for (i = 0; i <= c; i++) {
      y->data[i] = x->data[i];
    }
  } else {
    st.site = &ij_emlrtRSI;
    n = x->size[0];
    i = y->size[0] * y->size[1];
    y->size[0] = x->size[0];
    y->size[1] = x->size[1];
    emxEnsureCapacity_real_T(y, i);
    c = x->size[0] * x->size[1] - 1;
    for (i = 0; i <= c; i++) {
      y->data[i] = 0.0;
    }

    emxInit_real_T(&A, 2);
    b_st.site = &kj_emlrtRSI;
    i = A->size[0] * A->size[1];
    A->size[0] = x->size[0];
    A->size[1] = x->size[1];
    emxEnsureCapacity_real_T(A, i);
    c = x->size[0] * x->size[1] - 1;
    for (i = 0; i <= c; i++) {
      A->data[i] = x->data[i];
    }

    emxInit_int32_T(&ipiv, 2);
    emxInit_ptrdiff_t(&ipiv_t, 1);
    c_st.site = &fi_emlrtRSI;
    repmat((ptrdiff_t)0.0, muIntScalarMin_sint32(n, n), ipiv_t);
    c = ipiv_t->size[0];
    i = ipiv_t->size[0];
    ipiv_t->size[0] = c;
    emxEnsureCapacity_ptrdiff_t(ipiv_t, i);
    info_t = LAPACKE_dgetrf_work(102, (ptrdiff_t)x->size[0], (ptrdiff_t)x->size
      [0], &A->data[0], (ptrdiff_t)x->size[0], &ipiv_t->data[0]);
    i = ipiv->size[0] * ipiv->size[1];
    ipiv->size[0] = 1;
    ipiv->size[1] = ipiv_t->size[0];
    emxEnsureCapacity_int32_T1(ipiv, i);
    if ((int32_T)info_t < 0) {
      i = A->size[0] * A->size[1];
      emxEnsureCapacity_real_T(A, i);
      c = A->size[1];
      for (i = 0; i < c; i++) {
        j = A->size[0];
        for (b_i = 0; b_i < j; b_i++) {
          A->data[b_i + A->size[0] * i] = rtNaN;
        }
      }

      i = ipiv->size[1];
      for (k = 0; k < i; k++) {
        ipiv->data[k] = k + 1;
      }
    } else {
      i = ipiv->size[1];
      for (k = 0; k < i; k++) {
        ipiv->data[k] = (int32_T)ipiv_t->data[k];
      }
    }

    emxFree_ptrdiff_t(&ipiv_t);
    emxInit_int32_T(&p, 2);
    b_st.site = &lj_emlrtRSI;
    c_st.site = &ii_emlrtRSI;
    eml_integer_colon_dispatcher(&c_st, x->size[0], p);
    i = ipiv->size[1] - 1;
    for (k = 0; k <= i; k++) {
      if (ipiv->data[k] > k + 1) {
        c = p->data[ipiv->data[k] - 1];
        p->data[ipiv->data[k] - 1] = p->data[k];
        p->data[k] = c;
      }
    }

    emxFree_int32_T(&ipiv);
    for (k = 0; k < n; k++) {
      c = p->data[k] - 1;
      y->data[k + y->size[0] * (p->data[k] - 1)] = 1.0;
      for (j = k + 1; j <= n; j++) {
        if (y->data[(j + y->size[0] * c) - 1] != 0.0) {
          for (b_i = j + 1; b_i <= n; b_i++) {
            y->data[(b_i + y->size[0] * c) - 1] -= y->data[(j + y->size[0] * c)
              - 1] * A->data[(b_i + A->size[0] * (j - 1)) - 1];
          }
        }
      }
    }

    emxFree_int32_T(&p);
    emxInit_real_T(&d_y, 2);
    i = d_y->size[0] * d_y->size[1];
    d_y->size[0] = y->size[0];
    d_y->size[1] = y->size[1];
    emxEnsureCapacity_real_T(d_y, i);
    c = y->size[0] * y->size[1];
    for (i = 0; i < c; i++) {
      d_y->data[i] = y->data[i];
    }

    b_st.site = &mj_emlrtRSI;
    xtrsm(x->size[0], x->size[0], A, x->size[0], d_y, x->size[0], y);
    st.site = &jj_emlrtRSI;
    n1x = e_norm(x);
    n1xinv = e_norm(y);
    rc = 1.0 / (n1x * n1xinv);
    emxFree_real_T(&d_y);
    emxFree_real_T(&A);
    if ((n1x == 0.0) || (n1xinv == 0.0) || (rc == 0.0)) {
      b_st.site = &ue_emlrtRSI;
      b_warning(&b_st);
    } else {
      if (muDoubleScalarIsNaN(rc) || (rc < 2.2204460492503131E-16)) {
        b_st.site = &ve_emlrtRSI;
        for (i = 0; i < 6; i++) {
          rfmt[i] = b_rfmt[i];
        }

        b_y = NULL;
        m = emlrtCreateCharArray(2, iv2);
        emlrtInitCharArrayR2013a(&b_st, 6, m, &rfmt[0]);
        emlrtAssign(&b_y, m);
        c_y = NULL;
        m = emlrtCreateDoubleScalar(rc);
        emlrtAssign(&c_y, m);
        c_st.site = &yl_emlrtRSI;
        emlrt_marshallIn(&c_st, b_sprintf(&c_st, b_y, c_y, &o_emlrtMCI),
                         "<output of sprintf>", str);
        b_st.site = &ve_emlrtRSI;
        c_warning(&b_st, str);
      }
    }
  }
}

static real_T e_norm(emxArray_real_T *x)
{
  real_T y;
  int32_T j;
  int32_T i;
  boolean_T exitg1;
  real_T s;
  int32_T b_i;
  if ((x->size[0] == 0) || (x->size[1] == 0)) {
    y = 0.0;
  } else if ((x->size[0] == 1) || (x->size[1] == 1)) {
    y = 0.0;
    i = x->size[0] * x->size[1] - 1;
    for (j = 0; j <= i; j++) {
      y += muDoubleScalarAbs(x->data[j]);
    }
  } else {
    y = 0.0;
    j = 0;
    exitg1 = false;
    while ((!exitg1) && (j <= x->size[1] - 1)) {
      s = 0.0;
      i = x->size[0] - 1;
      for (b_i = 0; b_i <= i; b_i++) {
        s += muDoubleScalarAbs(x->data[b_i + x->size[0] * j]);
      }

      if (muDoubleScalarIsNaN(s)) {
        y = rtNaN;
        exitg1 = true;
      } else {
        if (s > y) {
          y = s;
        }

        j++;
      }
    }
  }

  return y;
}

static void diag(const emlrtStack *sp, emxArray_real_T *v, emxArray_real_T *d)
{
  emlrtStack st;
  int32_T m;
  char_T b_u[39];
  int32_T n;
  const mxArray *y;
  static char_T c_u[39] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'd', 'i', 'a', 'g', '_', 'v', 'a', 'r', 's', 'i', 'z',
    'e', 'd', 'M', 'a', 't', 'r', 'i', 'x', 'V', 'e', 'c', 't', 'o', 'r' };

  const mxArray *b_m;
  static const int32_T iv[2] = { 1, 39 };

  const mxArray *b_y;
  static const int32_T iv1[2] = { 1, 39 };

  st.prev = sp;
  st.tls = sp->tls;
  if ((v->size[0] == 1) && (v->size[1] == 1)) {
    m = d->size[0];
    d->size[0] = 1;
    emxEnsureCapacity_real_T1(d, m);
    d->data[0] = v->data[0];
  } else {
    if (!((v->size[0] != 1) && (v->size[1] != 1))) {
      for (m = 0; m < 39; m++) {
        b_u[m] = c_u[m];
      }

      y = NULL;
      b_m = emlrtCreateCharArray(2, iv);
      emlrtInitCharArrayR2013a(sp, 39, b_m, &b_u[0]);
      emlrtAssign(&y, b_m);
      for (m = 0; m < 39; m++) {
        b_u[m] = c_u[m];
      }

      b_y = NULL;
      b_m = emlrtCreateCharArray(2, iv1);
      emlrtInitCharArrayR2013a(sp, 39, b_m, &b_u[0]);
      emlrtAssign(&b_y, b_m);
      st.site = &ll_emlrtRSI;
      f_error(&st, y, getString(&st, b_message(&st, b_y, &jb_emlrtMCI),
               &jb_emlrtMCI), &jb_emlrtMCI);
    }

    m = v->size[0];
    n = v->size[1];
    if (0 < v->size[1]) {
      n = muIntScalarMin_sint32(m, n);
    } else {
      n = 0;
    }

    m = d->size[0];
    d->size[0] = n;
    emxEnsureCapacity_real_T1(d, m);
    for (m = 0; m < n; m++) {
      d->data[m] = v->data[m + v->size[0] * m];
    }
  }
}

static boolean_T scalexpCompatible(emxArray_real_T *a, emxArray_real_T *b_b)
{
  boolean_T p;
  uint32_T varargin_1[2];
  uint32_T varargin_2[2];
  boolean_T b_p;
  int32_T k;
  boolean_T exitg1;
  varargin_1[0] = (uint32_T)a->size[0];
  varargin_1[1] = 1U;
  varargin_2[0] = (uint32_T)b_b->size[0];
  varargin_2[1] = 1U;
  p = false;
  b_p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 2)) {
    if ((int32_T)varargin_1[k] != (int32_T)varargin_2[k]) {
      b_p = false;
      exitg1 = true;
    } else {
      k++;
    }
  }

  if (b_p) {
    p = true;
  }

  return p;
}

static void b_eml_find(const emlrtStack *sp, emxArray_boolean_T *x,
  emxArray_int32_T *i)
{
  emlrtStack st;
  int32_T nx;
  int32_T idx;
  int32_T b_i;
  int32_T ii;
  boolean_T exitg1;
  char_T b_u[30];
  const mxArray *y;
  static char_T c_u[30] = { 'C', 'o', 'd', 'e', 'r', ':', 'b', 'u', 'i', 'l',
    't', 'i', 'n', 's', ':', 'A', 's', 's', 'e', 'r', 't', 'i', 'o', 'n', 'F',
    'a', 'i', 'l', 'e', 'd' };

  int32_T iv[2];
  const mxArray *m;
  static const int32_T iv1[2] = { 1, 30 };

  const mxArray *b_y;
  static const int32_T iv2[2] = { 1, 30 };

  st.prev = sp;
  st.tls = sp->tls;
  nx = x->size[0];
  idx = 0;
  b_i = i->size[0];
  i->size[0] = x->size[0];
  emxEnsureCapacity_int32_T(i, b_i);
  ii = 1;
  exitg1 = false;
  while ((!exitg1) && (ii - 1 <= nx - 1)) {
    if (x->data[ii - 1]) {
      idx++;
      i->data[idx - 1] = ii;
      if (idx >= nx) {
        exitg1 = true;
      } else {
        ii++;
      }
    } else {
      ii++;
    }
  }

  if (!(idx <= x->size[0])) {
    for (b_i = 0; b_i < 30; b_i++) {
      b_u[b_i] = c_u[b_i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, iv1);
    emlrtInitCharArrayR2013a(sp, 30, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (b_i = 0; b_i < 30; b_i++) {
      b_u[b_i] = c_u[b_i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, iv2);
    emlrtInitCharArrayR2013a(sp, 30, m, &b_u[0]);
    emlrtAssign(&b_y, m);
    st.site = &kl_emlrtRSI;
    f_error(&st, y, getString(&st, b_message(&st, b_y, &lb_emlrtMCI),
             &lb_emlrtMCI), &lb_emlrtMCI);
  }

  if (x->size[0] == 1) {
    if (idx == 0) {
      i->size[0] = 0;
    }
  } else {
    if (1 > idx) {
      b_i = 0;
    } else {
      b_i = idx;
    }

    iv[0] = 1;
    iv[1] = b_i;
    st.site = &hf_emlrtRSI;
    indexShapeCheck(&st, i->size[0], iv);
    ii = i->size[0];
    i->size[0] = b_i;
    emxEnsureCapacity_int32_T(i, ii);
  }
}

static void j_mtimes(emxArray_real_T *A, emxArray_real_T *B, emxArray_real_T *C)
{
  char_T TRANSB1;
  int32_T i;
  char_T TRANSA1;
  real_T alpha1;
  real_T beta1;
  ptrdiff_t m_t;
  int32_T loop_ub;
  ptrdiff_t n_t;
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  if ((A->size[0] == 0) || (A->size[1] == 0) || (B->size[0] == 0) || (B->size[1]
       == 0)) {
    i = C->size[0] * C->size[1];
    C->size[0] = A->size[0];
    C->size[1] = B->size[1];
    emxEnsureCapacity_real_T(C, i);
    loop_ub = A->size[0] * B->size[1] - 1;
    for (i = 0; i <= loop_ub; i++) {
      C->data[i] = 0.0;
    }
  } else {
    TRANSB1 = 'N';
    TRANSA1 = 'N';
    alpha1 = 1.0;
    beta1 = 0.0;
    m_t = (ptrdiff_t)A->size[0];
    n_t = (ptrdiff_t)B->size[1];
    k_t = (ptrdiff_t)A->size[1];
    lda_t = (ptrdiff_t)A->size[0];
    ldb_t = (ptrdiff_t)B->size[0];
    ldc_t = (ptrdiff_t)A->size[0];
    i = C->size[0] * C->size[1];
    C->size[0] = A->size[0];
    C->size[1] = B->size[1];
    emxEnsureCapacity_real_T(C, i);
    dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, &A->data[0], &lda_t,
          &B->data[0], &ldb_t, &beta1, &C->data[0], &ldc_t);
  }
}

static boolean_T any(const emlrtStack *sp, emxArray_boolean_T *x)
{
  boolean_T y;
  emlrtStack st;
  char_T b_u[51];
  int32_T ix;
  boolean_T exitg1;
  const mxArray *b_y;
  static char_T c_u[51] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'e', 'm', 'l', '_', 'a', 'l', 'l', '_', 'o', 'r', '_',
    'a', 'n', 'y', '_', 'a', 'u', 't', 'o', 'D', 'i', 'm', 'I', 'n', 'c', 'o',
    'm', 'p', 'a', 't', 'i', 'b', 'i', 'l', 'i', 't', 'y' };

  const mxArray *m;
  static const int32_T iv[2] = { 1, 51 };

  boolean_T b_b;
  const mxArray *c_y;
  static const int32_T iv1[2] = { 1, 51 };

  st.prev = sp;
  st.tls = sp->tls;
  if ((x->size[0] == 1) || (x->size[0] != 1)) {
  } else {
    for (ix = 0; ix < 51; ix++) {
      b_u[ix] = c_u[ix];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, iv);
    emlrtInitCharArrayR2013a(sp, 51, m, &b_u[0]);
    emlrtAssign(&b_y, m);
    for (ix = 0; ix < 51; ix++) {
      b_u[ix] = c_u[ix];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, iv1);
    emlrtInitCharArrayR2013a(sp, 51, m, &b_u[0]);
    emlrtAssign(&c_y, m);
    st.site = &jl_emlrtRSI;
    f_error(&st, b_y, getString(&st, b_message(&st, c_y, &hb_emlrtMCI),
             &hb_emlrtMCI), &hb_emlrtMCI);
  }

  y = false;
  ix = 0;
  exitg1 = false;
  while ((!exitg1) && (ix + 1 <= x->size[0])) {
    b_b = !x->data[ix];
    if (!b_b) {
      y = true;
      exitg1 = true;
    } else {
      ix++;
    }
  }

  return y;
}

static void b_IKHelpers_computeCost(const emlrtStack *sp, real_T x[2],
  robotics_manip_internal_IKExtraArgs *args, real_T *cost, real_T W[36],
  emxArray_real_T *Jac, robotics_manip_internal_IKExtraArgs **b_args)
{
  emlrtStack st;
  emxArray_char_T *bodyName;
  robotics_manip_internal_RigidBodyTree_1 *treeInternal;
  int32_T i;
  int32_T loop_ub;
  real_T Td[16];
  emxArray_real_T *J;
  real_T T_data[16];
  int32_T T_size[2];
  real_T e[6];
  real_T y;
  real_T b_e[6];
  emxArray_real_T *b_y;
  st.prev = sp;
  st.tls = sp->tls;
  emxInit_char_T(&bodyName, 2);
  *b_args = args;
  treeInternal = (*b_args)->Robot;
  i = bodyName->size[0] * bodyName->size[1];
  bodyName->size[0] = 1;
  bodyName->size[1] = (*b_args)->BodyName->size[1];
  emxEnsureCapacity_char_T(bodyName, i);
  loop_ub = (*b_args)->BodyName->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    bodyName->data[i] = (*b_args)->BodyName->data[i];
  }

  for (i = 0; i < 16; i++) {
    Td[i] = (*b_args)->Tform[i];
  }

  for (i = 0; i < 36; i++) {
    W[i] = (*b_args)->WeightMatrix[i];
  }

  emxInit_real_T(&J, 2);
  st.site = &pg_emlrtRSI;
  b_RigidBodyTree_efficientFKAndJacobianForIK(&st, treeInternal, x, bodyName,
    T_data, T_size, J);
  i = Jac->size[0] * Jac->size[1];
  Jac->size[0] = 6;
  Jac->size[1] = J->size[1];
  emxEnsureCapacity_real_T(Jac, i);
  loop_ub = 6 * J->size[1] - 1;
  emxFree_char_T(&bodyName);
  for (i = 0; i <= loop_ub; i++) {
    Jac->data[i] = -J->data[i];
  }

  emxFree_real_T(&J);
  st.site = &qg_emlrtRSI;
  IKHelpers_poseError(&st, Td, T_data, T_size, e);
  i = (*b_args)->ErrTemp->size[0];
  (*b_args)->ErrTemp->size[0] = 6;
  emxEnsureCapacity_real_T1((*b_args)->ErrTemp, i);
  for (i = 0; i < 6; i++) {
    (*b_args)->ErrTemp->data[i] = e[i];
  }

  for (i = 0; i < 6; i++) {
    b_e[i] = 0.0;
    for (loop_ub = 0; loop_ub < 6; loop_ub++) {
      y = b_e[i] + 0.5 * e[loop_ub] * W[loop_ub + 6 * i];
      b_e[i] = y;
    }
  }

  y = 0.0;
  for (loop_ub = 0; loop_ub < 6; loop_ub++) {
    y += b_e[loop_ub] * e[loop_ub];
  }

  (*b_args)->CostTemp = y;
  for (i = 0; i < 6; i++) {
    b_e[i] = 0.0;
    for (loop_ub = 0; loop_ub < 6; loop_ub++) {
      y = b_e[i] + e[loop_ub] * W[loop_ub + 6 * i];
      b_e[i] = y;
    }
  }

  emxInit_real_T(&b_y, 2);
  st.site = &ng_emlrtRSI;
  b_mtimes(b_e, Jac, b_y);
  i = (*b_args)->GradTemp->size[0];
  (*b_args)->GradTemp->size[0] = b_y->size[1];
  emxEnsureCapacity_real_T1((*b_args)->GradTemp, i);
  loop_ub = b_y->size[1];
  for (i = 0; i < loop_ub; i++) {
    (*b_args)->GradTemp->data[i] = b_y->data[i];
  }

  emxFree_real_T(&b_y);
  y = (*b_args)->CostTemp;
  *cost = y;
}

static void b_RigidBodyTree_efficientFKAndJacobianForIK(const emlrtStack *sp,
  robotics_manip_internal_RigidBodyTree_1 *obj, real_T qv[2], emxArray_char_T
  *body1Name, real_T T_data[], int32_T T_size[2], emxArray_real_T *Jac)
{
  emlrtStack st;
  emlrtStack b_st;
  emxArray_char_T *body2Name;
  int32_T i;
  int32_T loop_ub;
  real_T bid1;
  real_T bid2;
  robotics_manip_internal_RigidBody_1 *body1;
  robotics_manip_internal_RigidBody_1 *body2;
  emxArray_real_T *ancestorIndices1;
  robotics_manip_internal_RigidBody_1 *body;
  uint32_T b_i;
  emxArray_real_T *ancestorIndices2;
  int32_T i1;
  uint32_T c_i;
  int32_T i2;
  int32_T minPathLength;
  int32_T d_i;
  boolean_T exitg1;
  emxArray_real_T *kinematicPathIndices;
  real_T T1[16];
  emxArray_real_T *JacSlice;
  emxArray_real_T *a;
  emxArray_real_T *joint;
  real_T b_T1[36];
  boolean_T nextBodyIsParent;
  emxArray_real_T *b_Jac;
  int32_T jointSign;
  rigidBodyJoint *b_joint;
  real_T Tc2p[16];
  real_T qidx[2];
  real_T R[9];
  real_T b_R[16];
  real_T c_R[9];
  int32_T qv_size[1];
  real_T d_R[3];
  real_T e_R[16];
  static int8_T iv[4] = { 0, 0, 0, 1 };

  real_T Tj1[16];
  real_T Tj[16];
  real_T T1j[16];
  real_T dv[9];
  int32_T iv1[2];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emxInit_char_T(&body2Name, 2);
  st.site = &xg_emlrtRSI;
  i = body2Name->size[0] * body2Name->size[1];
  body2Name->size[0] = 1;
  body2Name->size[1] = obj->Base.NameInternal->size[1];
  emxEnsureCapacity_char_T(body2Name, i);
  loop_ub = obj->Base.NameInternal->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    body2Name->data[i] = obj->Base.NameInternal->data[i];
  }

  st.site = &wg_emlrtRSI;
  bid1 = d_RigidBodyTree_validateInputBodyName(&st, obj, body1Name);
  st.site = &vg_emlrtRSI;
  bid2 = e_RigidBodyTree_validateInputBodyName(&st, obj, body2Name);
  emxFree_char_T(&body2Name);
  if (bid1 == 0.0) {
    body1 = &obj->Base;
  } else {
    body1 = obj->Bodies[emlrtDynamicBoundsCheckR2012b((int32_T)bid1 - 1, 0, 2,
      &sc_emlrtBCI, sp)];
  }

  if (bid2 == 0.0) {
    body2 = &obj->Base;
  } else {
    body2 = obj->Bodies[emlrtDynamicBoundsCheckR2012b((int32_T)bid2 - 1, 0, 2,
      &tc_emlrtBCI, sp)];
  }

  emxInit_real_T(&ancestorIndices1, 2);
  st.site = &ug_emlrtRSI;
  b_st.site = &yg_emlrtRSI;
  body = body1;
  i = ancestorIndices1->size[0] * ancestorIndices1->size[1];
  ancestorIndices1->size[0] = 1;
  bid1 = obj->NumBodies + 1.0;
  bid1 = emlrtNonNegativeCheckR2012b(bid1, &xb_emlrtDCI, &b_st);
  ancestorIndices1->size[1] = (int32_T)emlrtIntegerCheckR2012b(bid1,
    &wb_emlrtDCI, &b_st);
  emxEnsureCapacity_real_T(ancestorIndices1, i);
  bid1 = obj->NumBodies + 1.0;
  bid1 = emlrtNonNegativeCheckR2012b(bid1, &xb_emlrtDCI, &b_st);
  loop_ub = (int32_T)emlrtIntegerCheckR2012b(bid1, &wb_emlrtDCI, &b_st) - 1;
  for (i = 0; i <= loop_ub; i++) {
    ancestorIndices1->data[i] = 0.0;
  }

  b_i = 2U;
  i = ancestorIndices1->size[1];
  emlrtDynamicBoundsCheckR2012b(1, 1, i, &rc_emlrtBCI, &b_st);
  ancestorIndices1->data[0] = body1->Index;
  while (body->ParentIndex > 0.0) {
    i = (int32_T)emlrtIntegerCheckR2012b(body->ParentIndex, &bc_emlrtDCI, &b_st)
      - 1;
    body = obj->Bodies[emlrtDynamicBoundsCheckR2012b(i, 0, 2, &uc_emlrtBCI,
      &b_st)];
    i = ancestorIndices1->size[1];
    ancestorIndices1->data[emlrtDynamicBoundsCheckR2012b((int32_T)b_i, 1, i,
      &wc_emlrtBCI, &b_st) - 1] = body->Index;
    b_i++;
  }

  if (body->Index > 0.0) {
    i = ancestorIndices1->size[1];
    ancestorIndices1->data[emlrtDynamicBoundsCheckR2012b((int32_T)b_i, 1, i,
      &vc_emlrtBCI, &b_st) - 1] = body->ParentIndex;
    b_i++;
  }

  emxInit_real_T(&ancestorIndices2, 2);
  i = ancestorIndices1->size[1];
  emlrtDynamicBoundsCheckR2012b(1, 1, i, &qc_emlrtBCI, &b_st);
  i = ancestorIndices1->size[1];
  i = emlrtDynamicBoundsCheckR2012b((int32_T)(b_i - 1U), 1, i, &pc_emlrtBCI,
    &b_st);
  i1 = ancestorIndices1->size[0] * ancestorIndices1->size[1];
  ancestorIndices1->size[1] = (int32_T)(b_i - 1U);
  emxEnsureCapacity_real_T(ancestorIndices1, i1);
  b_st.site = &ah_emlrtRSI;
  body = body2;
  i1 = ancestorIndices2->size[0] * ancestorIndices2->size[1];
  ancestorIndices2->size[0] = 1;
  bid1 = obj->NumBodies + 1.0;
  bid1 = emlrtNonNegativeCheckR2012b(bid1, &xb_emlrtDCI, &b_st);
  ancestorIndices2->size[1] = (int32_T)emlrtIntegerCheckR2012b(bid1,
    &wb_emlrtDCI, &b_st);
  emxEnsureCapacity_real_T(ancestorIndices2, i1);
  bid1 = obj->NumBodies + 1.0;
  bid1 = emlrtNonNegativeCheckR2012b(bid1, &xb_emlrtDCI, &b_st);
  loop_ub = (int32_T)emlrtIntegerCheckR2012b(bid1, &wb_emlrtDCI, &b_st) - 1;
  for (i1 = 0; i1 <= loop_ub; i1++) {
    ancestorIndices2->data[i1] = 0.0;
  }

  c_i = 2U;
  i1 = ancestorIndices2->size[1];
  emlrtDynamicBoundsCheckR2012b(1, 1, i1, &rc_emlrtBCI, &b_st);
  ancestorIndices2->data[0] = body2->Index;
  while (body->ParentIndex > 0.0) {
    i1 = (int32_T)emlrtIntegerCheckR2012b(body->ParentIndex, &bc_emlrtDCI, &b_st)
      - 1;
    body = obj->Bodies[emlrtDynamicBoundsCheckR2012b(i1, 0, 2, &uc_emlrtBCI,
      &b_st)];
    i1 = ancestorIndices2->size[1];
    ancestorIndices2->data[emlrtDynamicBoundsCheckR2012b((int32_T)c_i, 1, i1,
      &wc_emlrtBCI, &b_st) - 1] = body->Index;
    c_i++;
  }

  if (body->Index > 0.0) {
    i1 = ancestorIndices2->size[1];
    ancestorIndices2->data[emlrtDynamicBoundsCheckR2012b((int32_T)c_i, 1, i1,
      &vc_emlrtBCI, &b_st) - 1] = body->ParentIndex;
    c_i++;
  }

  i1 = ancestorIndices2->size[1];
  emlrtDynamicBoundsCheckR2012b(1, 1, i1, &qc_emlrtBCI, &b_st);
  i1 = ancestorIndices2->size[1];
  i1 = emlrtDynamicBoundsCheckR2012b((int32_T)(c_i - 1U), 1, i1, &pc_emlrtBCI,
    &b_st);
  i2 = ancestorIndices2->size[0] * ancestorIndices2->size[1];
  ancestorIndices2->size[1] = (int32_T)(c_i - 1U);
  emxEnsureCapacity_real_T(ancestorIndices2, i2);
  minPathLength = (int32_T)muDoubleScalarMin((real_T)b_i - 1.0, (real_T)c_i -
    1.0);
  d_i = 1;
  exitg1 = false;
  while ((!exitg1) && (d_i - 1 <= minPathLength - 2)) {
    if (ancestorIndices1->data[emlrtDynamicBoundsCheckR2012b(i - d_i, 1, i,
         &xc_emlrtBCI, &st) - 1] != ancestorIndices2->
        data[emlrtDynamicBoundsCheckR2012b(i1 - d_i, 1, i1, &yc_emlrtBCI, &st) -
        1]) {
      minPathLength = d_i;
      exitg1 = true;
    } else {
      d_i++;
    }
  }

  bid1 = ancestorIndices1->data[emlrtDynamicBoundsCheckR2012b((i - minPathLength)
    + 1, 1, i, &ad_emlrtBCI, &st) - 1];
  i2 = i - minPathLength;
  if (1 > i2) {
    loop_ub = -1;
  } else {
    loop_ub = emlrtDynamicBoundsCheckR2012b(i2, 1, i, &nc_emlrtBCI, &st) - 1;
  }

  i = i1 - minPathLength;
  if (1 > i) {
    i = 0;
    i1 = 1;
    i2 = -1;
  } else {
    i = emlrtDynamicBoundsCheckR2012b(i, 1, i1, &oc_emlrtBCI, &st) - 1;
    i1 = -1;
    i2 = 0;
  }

  emxInit_real_T(&kinematicPathIndices, 2);
  minPathLength = kinematicPathIndices->size[0] * kinematicPathIndices->size[1];
  kinematicPathIndices->size[0] = 1;
  b_st.site = &ug_emlrtRSI;
  kinematicPathIndices->size[1] = (loop_ub + div_s32_floor(&b_st, i2 - i, i1)) +
    3;
  emxEnsureCapacity_real_T(kinematicPathIndices, minPathLength);
  for (minPathLength = 0; minPathLength <= loop_ub; minPathLength++) {
    kinematicPathIndices->data[minPathLength] = ancestorIndices1->
      data[minPathLength];
  }

  emxFree_real_T(&ancestorIndices1);
  kinematicPathIndices->data[loop_ub + 1] = bid1;
  b_st.site = &am_emlrtRSI;
  minPathLength = div_s32_floor(&b_st, i2 - i, i1);
  for (i2 = 0; i2 <= minPathLength; i2++) {
    kinematicPathIndices->data[(i2 + loop_ub) + 2] = ancestorIndices2->data[i +
      i1 * i2];
  }

  emxFree_real_T(&ancestorIndices2);
  for (i = 0; i < 16; i++) {
    T1[i] = 0.0;
  }

  for (minPathLength = 0; minPathLength < 4; minPathLength++) {
    T1[minPathLength + (minPathLength << 2)] = 1.0;
  }

  i = Jac->size[0] * Jac->size[1];
  Jac->size[0] = 6;
  bid1 = emlrtNonNegativeCheckR2012b(obj->PositionNumber, &ac_emlrtDCI, sp);
  Jac->size[1] = (int32_T)emlrtIntegerCheckR2012b(bid1, &yb_emlrtDCI, sp);
  emxEnsureCapacity_real_T(Jac, i);
  bid1 = emlrtNonNegativeCheckR2012b(obj->PositionNumber, &ac_emlrtDCI, sp);
  loop_ub = 6 * (int32_T)emlrtIntegerCheckR2012b(bid1, &yb_emlrtDCI, sp) - 1;
  for (i = 0; i <= loop_ub; i++) {
    Jac->data[i] = 0.0;
  }

  i = kinematicPathIndices->size[1] - 2;
  emxInit_real_T(&JacSlice, 2);
  emxInit_real_T(&a, 2);
  emxInit_real_T(&joint, 2);
  for (d_i = 0; d_i <= i; d_i++) {
    i1 = kinematicPathIndices->size[1];
    if (kinematicPathIndices->data[emlrtDynamicBoundsCheckR2012b(d_i + 1, 1, i1,
         &bd_emlrtBCI, sp) - 1] != 0.0) {
      i1 = kinematicPathIndices->size[1];
      bid1 = kinematicPathIndices->data[emlrtDynamicBoundsCheckR2012b(d_i + 1, 1,
        i1, &ed_emlrtBCI, sp) - 1];
      i1 = (int32_T)emlrtIntegerCheckR2012b(bid1, &cc_emlrtDCI, sp) - 1;
      body1 = obj->Bodies[emlrtDynamicBoundsCheckR2012b(i1, 0, 2, &dd_emlrtBCI,
        sp)];
    } else {
      body1 = &obj->Base;
    }

    i1 = kinematicPathIndices->size[1];
    if (kinematicPathIndices->data[emlrtDynamicBoundsCheckR2012b(d_i + 2, 1, i1,
         &cd_emlrtBCI, sp) - 1] != 0.0) {
      i1 = kinematicPathIndices->size[1];
      bid1 = kinematicPathIndices->data[emlrtDynamicBoundsCheckR2012b(d_i + 2, 1,
        i1, &gd_emlrtBCI, sp) - 1];
      i1 = (int32_T)emlrtIntegerCheckR2012b(bid1, &dc_emlrtDCI, sp) - 1;
      body2 = obj->Bodies[emlrtDynamicBoundsCheckR2012b(i1, 0, 2, &fd_emlrtBCI,
        sp)];
    } else {
      body2 = &obj->Base;
    }

    nextBodyIsParent = (body2->Index == body1->ParentIndex);
    if (nextBodyIsParent) {
      body2 = body1;
      jointSign = 1;
    } else {
      jointSign = -1;
    }

    b_joint = body2->JointInternal;
    if (e_strcmp(b_joint->Type)) {
      st.site = &tg_emlrtRSI;
      rigidBodyJoint_transformBodyToParent(&st, b_joint, Tc2p);
    } else {
      i1 = (int32_T)emlrtIntegerCheckR2012b(body2->Index, &vb_emlrtDCI, sp);
      minPathLength = emlrtDynamicBoundsCheckR2012b(i1, 1, 3, &mc_emlrtBCI, sp);
      for (i1 = 0; i1 < 2; i1++) {
        qidx[i1] = obj->PositionDoFMap[(minPathLength + 3 * i1) - 1];
      }

      if (qidx[0] > qidx[1]) {
        i1 = 0;
        i2 = -1;
      } else {
        i1 = (int32_T)emlrtIntegerCheckR2012b(qidx[0], &ub_emlrtDCI, sp);
        i1 = emlrtDynamicBoundsCheckR2012b(i1, 1, 2, &lc_emlrtBCI, sp) - 1;
        i2 = (int32_T)emlrtIntegerCheckR2012b(qidx[1], &tb_emlrtDCI, sp);
        i2 = emlrtDynamicBoundsCheckR2012b(i2, 1, 2, &kc_emlrtBCI, sp) - 1;
      }

      qv_size[0] = (i2 - i1) + 1;
      loop_ub = i2 - i1;
      for (i2 = 0; i2 <= loop_ub; i2++) {
        qidx[i2] = qv[i1 + i2];
      }

      st.site = &sg_emlrtRSI;
      b_rigidBodyJoint_transformBodyToParent(&st, b_joint, qidx, qv_size, Tc2p);
      i1 = (int32_T)emlrtIntegerCheckR2012b(body2->Index, &sb_emlrtDCI, sp);
      minPathLength = emlrtDynamicBoundsCheckR2012b(i1, 1, 3, &jc_emlrtBCI, sp);
      for (i1 = 0; i1 < 2; i1++) {
        qidx[i1] = obj->VelocityDoFMap[(minPathLength + 3 * i1) - 1];
      }

      if (nextBodyIsParent) {
        for (i1 = 0; i1 < 16; i1++) {
          Tj[i1] = b_joint->ChildToJointTransform[i1];
        }
      } else {
        for (i1 = 0; i1 < 16; i1++) {
          Tj1[i1] = b_joint->JointToParentTransform[i1];
        }

        for (i1 = 0; i1 < 3; i1++) {
          for (i2 = 0; i2 < 3; i2++) {
            R[i2 + 3 * i1] = Tj1[i1 + (i2 << 2)];
          }
        }

        for (i1 = 0; i1 < 9; i1++) {
          c_R[i1] = -R[i1];
        }

        for (i1 = 0; i1 < 3; i1++) {
          d_R[i1] = 0.0;
          for (i2 = 0; i2 < 3; i2++) {
            Tj[i2 + (i1 << 2)] = R[i2 + 3 * i1];
            d_R[i1] += c_R[i1 + 3 * i2] * Tj1[i2 + 12];
          }

          Tj[i1 + 12] = d_R[i1];
        }

        for (i1 = 0; i1 < 4; i1++) {
          Tj[(i1 << 2) + 3] = (real_T)iv[i1];
        }
      }

      for (i1 = 0; i1 < 4; i1++) {
        for (i2 = 0; i2 < 4; i2++) {
          T1j[i1 + (i2 << 2)] = 0.0;
          for (minPathLength = 0; minPathLength < 4; minPathLength++) {
            T1j[i1 + (i2 << 2)] += Tj[i1 + (minPathLength << 2)] *
              T1[minPathLength + (i2 << 2)];
          }
        }
      }

      for (i1 = 0; i1 < 3; i1++) {
        for (i2 = 0; i2 < 3; i2++) {
          R[i2 + 3 * i1] = T1j[i1 + (i2 << 2)];
        }
      }

      for (i1 = 0; i1 < 9; i1++) {
        c_R[i1] = -R[i1];
      }

      for (i1 = 0; i1 < 3; i1++) {
        d_R[i1] = 0.0;
        for (i2 = 0; i2 < 3; i2++) {
          Tj1[i2 + (i1 << 2)] = R[i2 + 3 * i1];
          d_R[i1] += c_R[i1 + 3 * i2] * T1j[i2 + 12];
        }

        Tj1[i1 + 12] = d_R[i1];
      }

      for (i1 = 0; i1 < 4; i1++) {
        Tj1[(i1 << 2) + 3] = (real_T)iv[i1];
      }

      for (i1 = 0; i1 < 3; i1++) {
        for (i2 = 0; i2 < 3; i2++) {
          R[i2 + 3 * i1] = Tj1[i2 + (i1 << 2)];
        }
      }

      c_R[0] = 0.0;
      c_R[3] = -Tj1[14];
      c_R[6] = Tj1[13];
      c_R[1] = Tj1[14];
      c_R[4] = 0.0;
      c_R[7] = -Tj1[12];
      c_R[2] = -Tj1[13];
      c_R[5] = Tj1[12];
      c_R[8] = 0.0;
      for (i1 = 0; i1 < 3; i1++) {
        for (i2 = 0; i2 < 3; i2++) {
          dv[i1 + 3 * i2] = 0.0;
          for (minPathLength = 0; minPathLength < 3; minPathLength++) {
            dv[i1 + 3 * i2] += c_R[i1 + 3 * minPathLength] * R[minPathLength + 3
              * i2];
          }

          b_T1[i2 + 6 * i1] = R[i2 + 3 * i1];
          b_T1[i2 + 6 * (i1 + 3)] = 0.0;
        }
      }

      for (i1 = 0; i1 < 3; i1++) {
        for (i2 = 0; i2 < 3; i2++) {
          b_T1[(i2 + 6 * i1) + 3] = dv[i2 + 3 * i1];
          b_T1[(i2 + 6 * (i1 + 3)) + 3] = R[i2 + 3 * i1];
        }
      }

      i1 = joint->size[0] * joint->size[1];
      joint->size[0] = 6;
      joint->size[1] = b_joint->MotionSubspace->size[1];
      emxEnsureCapacity_real_T(joint, i1);
      loop_ub = b_joint->MotionSubspace->size[0] * b_joint->MotionSubspace->
        size[1];
      for (i1 = 0; i1 < loop_ub; i1++) {
        joint->data[i1] = b_joint->MotionSubspace->data[i1];
      }

      st.site = &rg_emlrtRSI;
      eml_mtimes_helper(b_T1, joint, a);
      i1 = JacSlice->size[0] * JacSlice->size[1];
      JacSlice->size[0] = 6;
      JacSlice->size[1] = a->size[1];
      emxEnsureCapacity_real_T(JacSlice, i1);
      loop_ub = 6 * a->size[1] - 1;
      for (i1 = 0; i1 <= loop_ub; i1++) {
        JacSlice->data[i1] = a->data[i1] * (real_T)jointSign;
      }

      if (qidx[0] > qidx[1]) {
        i1 = 0;
        i2 = -1;
      } else {
        i1 = Jac->size[1];
        i2 = (int32_T)emlrtIntegerCheckR2012b(qidx[0], &rb_emlrtDCI, sp);
        i1 = emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &ic_emlrtBCI, sp) - 1;
        i2 = Jac->size[1];
        minPathLength = (int32_T)emlrtIntegerCheckR2012b(qidx[1], &qb_emlrtDCI,
          sp);
        i2 = emlrtDynamicBoundsCheckR2012b(minPathLength, 1, i2, &hc_emlrtBCI,
          sp) - 1;
      }

      iv1[0] = 6;
      iv1[1] = (i2 - i1) + 1;
      emlrtSubAssignSizeCheckR2012b(iv1, 2, *(int32_T (*)[2])JacSlice->size, 2,
        &x_emlrtECI, sp);
      loop_ub = JacSlice->size[1];
      for (i2 = 0; i2 < loop_ub; i2++) {
        for (minPathLength = 0; minPathLength < 6; minPathLength++) {
          Jac->data[minPathLength + 6 * (i1 + i2)] = JacSlice->
            data[minPathLength + 6 * i2];
        }
      }
    }

    if (nextBodyIsParent) {
      for (i1 = 0; i1 < 4; i1++) {
        for (i2 = 0; i2 < 4; i2++) {
          b_R[i1 + (i2 << 2)] = 0.0;
          for (minPathLength = 0; minPathLength < 4; minPathLength++) {
            b_R[i1 + (i2 << 2)] += Tc2p[i1 + (minPathLength << 2)] *
              T1[minPathLength + (i2 << 2)];
          }
        }
      }

      memcpy(&T1[0], &b_R[0], sizeof(real_T) << 4);
    } else {
      for (i1 = 0; i1 < 3; i1++) {
        for (i2 = 0; i2 < 3; i2++) {
          R[i2 + 3 * i1] = Tc2p[i1 + (i2 << 2)];
        }
      }

      for (i1 = 0; i1 < 9; i1++) {
        c_R[i1] = -R[i1];
      }

      for (i1 = 0; i1 < 3; i1++) {
        d_R[i1] = 0.0;
        for (i2 = 0; i2 < 3; i2++) {
          e_R[i2 + (i1 << 2)] = R[i2 + 3 * i1];
          d_R[i1] += c_R[i1 + 3 * i2] * Tc2p[i2 + 12];
        }

        e_R[i1 + 12] = d_R[i1];
      }

      for (i1 = 0; i1 < 4; i1++) {
        e_R[(i1 << 2) + 3] = (real_T)iv[i1];
      }

      for (i1 = 0; i1 < 4; i1++) {
        for (i2 = 0; i2 < 4; i2++) {
          b_R[i1 + (i2 << 2)] = 0.0;
          for (minPathLength = 0; minPathLength < 4; minPathLength++) {
            b_R[i1 + (i2 << 2)] += e_R[i1 + (minPathLength << 2)] *
              T1[minPathLength + (i2 << 2)];
          }
        }
      }

      memcpy(&T1[0], &b_R[0], sizeof(real_T) << 4);
    }
  }

  emxFree_real_T(&joint);
  emxFree_real_T(&a);
  emxFree_real_T(&JacSlice);
  emxFree_real_T(&kinematicPathIndices);
  for (i = 0; i < 3; i++) {
    for (i1 = 0; i1 < 3; i1++) {
      b_T1[i1 + 6 * i] = T1[i1 + (i << 2)];
      b_T1[i1 + 6 * (i + 3)] = 0.0;
      b_T1[(i1 + 6 * i) + 3] = 0.0;
      b_T1[(i1 + 6 * (i + 3)) + 3] = T1[i1 + (i << 2)];
    }
  }

  emxInit_real_T(&b_Jac, 2);
  i = b_Jac->size[0] * b_Jac->size[1];
  b_Jac->size[0] = 6;
  b_Jac->size[1] = Jac->size[1];
  emxEnsureCapacity_real_T(b_Jac, i);
  loop_ub = Jac->size[0] * Jac->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_Jac->data[i] = Jac->data[i];
  }

  st.site = &ng_emlrtRSI;
  mtimes(b_T1, b_Jac, Jac);
  T_size[0] = 4;
  T_size[1] = 4;
  emxFree_real_T(&b_Jac);
  for (i = 0; i < 16; i++) {
    T_data[i] = T1[i];
  }
}

static real_T d_RigidBodyTree_validateInputBodyName(const emlrtStack *sp,
  robotics_manip_internal_RigidBodyTree_1 *obj, emxArray_char_T *bodyname)
{
  real_T bid;
  emlrtStack st;
  emlrtStack b_st;
  emxArray_char_T *bname;
  int32_T i;
  int32_T loop_ub;
  real_T d;
  int32_T b_i;
  boolean_T exitg1;
  robotics_manip_internal_RigidBody_1 *b_obj;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emxInit_char_T(&bname, 2);
  st.site = &jc_emlrtRSI;
  bid = -1.0;
  b_st.site = &tb_emlrtRSI;
  b_validateattributes(&b_st, bodyname);
  b_st.site = &ub_emlrtRSI;
  i = bname->size[0] * bname->size[1];
  bname->size[0] = 1;
  bname->size[1] = obj->Base.NameInternal->size[1];
  emxEnsureCapacity_char_T(bname, i);
  loop_ub = obj->Base.NameInternal->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    bname->data[i] = obj->Base.NameInternal->data[i];
  }

  if (d_strcmp(bname, bodyname)) {
    bid = 0.0;
  } else {
    d = obj->NumBodies;
    emlrtForLoopVectorCheckR2012b(1.0, 1.0, d, mxDOUBLE_CLASS, (int32_T)d,
      &emlrtRTEI, &st);
    b_i = 0;
    exitg1 = false;
    while ((!exitg1) && (b_i <= (int32_T)d - 1)) {
      b_st.site = &vb_emlrtRSI;
      b_obj = obj->Bodies[emlrtDynamicBoundsCheckR2012b(b_i, 0, 2, &emlrtBCI,
        &b_st)];
      i = bname->size[0] * bname->size[1];
      bname->size[0] = 1;
      bname->size[1] = b_obj->NameInternal->size[1];
      emxEnsureCapacity_char_T(bname, i);
      loop_ub = b_obj->NameInternal->size[1] - 1;
      for (i = 0; i <= loop_ub; i++) {
        bname->data[i] = b_obj->NameInternal->data[i];
      }

      if (d_strcmp(bname, bodyname)) {
        bid = (real_T)b_i + 1.0;
        exitg1 = true;
      } else {
        b_i++;
      }
    }
  }

  emxFree_char_T(&bname);
  if (bid == -1.0) {
    st.site = &kc_emlrtRSI;
    c_error(&st, bodyname);
  }

  return bid;
}

static real_T e_RigidBodyTree_validateInputBodyName(const emlrtStack *sp,
  robotics_manip_internal_RigidBodyTree_1 *obj, emxArray_char_T *bodyname)
{
  real_T bid;
  emlrtStack st;
  emlrtStack b_st;
  emxArray_char_T *bname;
  int32_T i;
  int32_T loop_ub;
  real_T d;
  int32_T b_i;
  boolean_T exitg1;
  robotics_manip_internal_RigidBody_1 *b_obj;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emxInit_char_T(&bname, 2);
  st.site = &jc_emlrtRSI;
  bid = -1.0;
  b_st.site = &tb_emlrtRSI;
  b_validateattributes(&b_st, bodyname);
  b_st.site = &ub_emlrtRSI;
  i = bname->size[0] * bname->size[1];
  bname->size[0] = 1;
  bname->size[1] = obj->Base.NameInternal->size[1];
  emxEnsureCapacity_char_T(bname, i);
  loop_ub = obj->Base.NameInternal->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    bname->data[i] = obj->Base.NameInternal->data[i];
  }

  if (d_strcmp(bname, bodyname)) {
    bid = 0.0;
  } else {
    d = obj->NumBodies;
    emlrtForLoopVectorCheckR2012b(1.0, 1.0, d, mxDOUBLE_CLASS, (int32_T)d,
      &emlrtRTEI, &st);
    b_i = 0;
    exitg1 = false;
    while ((!exitg1) && (b_i <= (int32_T)d - 1)) {
      b_st.site = &vb_emlrtRSI;
      b_obj = obj->Bodies[emlrtDynamicBoundsCheckR2012b(b_i, 0, 2, &emlrtBCI,
        &b_st)];
      i = bname->size[0] * bname->size[1];
      bname->size[0] = 1;
      bname->size[1] = b_obj->NameInternal->size[1];
      emxEnsureCapacity_char_T(bname, i);
      loop_ub = b_obj->NameInternal->size[1] - 1;
      for (i = 0; i <= loop_ub; i++) {
        bname->data[i] = b_obj->NameInternal->data[i];
      }

      if (d_strcmp(bname, bodyname)) {
        bid = (real_T)b_i + 1.0;
        exitg1 = true;
      } else {
        b_i++;
      }
    }
  }

  emxFree_char_T(&bname);
  if (bid == -1.0) {
    st.site = &kc_emlrtRSI;
    c_error(&st, bodyname);
  }

  return bid;
}

static void j_dynamic_size_checks(const emlrtStack *sp, emxArray_real_T *a,
  int32_T innerDimA)
{
  emlrtStack st;
  char_T b_u[15];
  char_T c_u[45];
  int32_T i;
  const mxArray *y;
  static char_T d_u[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'i', 'n', 'n',
    'e', 'r', 'd', 'i', 'm' };

  static char_T e_u[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D', 'y',
    'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p', 'a',
    'n', 's', 'i', 'o', 'n' };

  const mxArray *m;
  static const int32_T iv[2] = { 1, 15 };

  static const int32_T iv1[2] = { 1, 45 };

  const mxArray *b_y;
  static const int32_T iv2[2] = { 1, 15 };

  static const int32_T iv3[2] = { 1, 45 };

  st.prev = sp;
  st.tls = sp->tls;
  if (innerDimA != 2) {
    if (a->size[1] == 1) {
      for (i = 0; i < 45; i++) {
        c_u[i] = e_u[i];
      }

      y = NULL;
      m = emlrtCreateCharArray(2, iv1);
      emlrtInitCharArrayR2013a(sp, 45, m, &c_u[0]);
      emlrtAssign(&y, m);
      for (i = 0; i < 45; i++) {
        c_u[i] = e_u[i];
      }

      b_y = NULL;
      m = emlrtCreateCharArray(2, iv3);
      emlrtInitCharArrayR2013a(sp, 45, m, &c_u[0]);
      emlrtAssign(&b_y, m);
      st.site = &hl_emlrtRSI;
      f_error(&st, y, getString(&st, b_message(&st, b_y, &bb_emlrtMCI),
               &bb_emlrtMCI), &bb_emlrtMCI);
    } else {
      for (i = 0; i < 15; i++) {
        b_u[i] = d_u[i];
      }

      y = NULL;
      m = emlrtCreateCharArray(2, iv);
      emlrtInitCharArrayR2013a(sp, 15, m, &b_u[0]);
      emlrtAssign(&y, m);
      for (i = 0; i < 15; i++) {
        b_u[i] = d_u[i];
      }

      b_y = NULL;
      m = emlrtCreateCharArray(2, iv2);
      emlrtInitCharArrayR2013a(sp, 15, m, &b_u[0]);
      emlrtAssign(&b_y, m);
      st.site = &il_emlrtRSI;
      f_error(&st, y, getString(&st, b_message(&st, b_y, &ab_emlrtMCI),
               &ab_emlrtMCI), &ab_emlrtMCI);
    }
  }
}

static real_T k_mtimes(emxArray_real_T *A, real_T B[2])
{
  real_T C;
  int32_T k;
  C = 0.0;
  for (k = 0; k < 2; k++) {
    C += A->data[k] * B[k];
  }

  return C;
}

static real_T c_IKHelpers_evaluateSolution(const emlrtStack *sp,
  robotics_manip_internal_IKExtraArgs *args)
{
  emlrtStack st;
  real_T y[6];
  real_T a[36];
  int32_T k;
  emxArray_real_T *b_b;
  int32_T loop_ub;
  int32_T aoffset;
  real_T b_y;
  st.prev = sp;
  st.tls = sp->tls;
  for (k = 0; k < 36; k++) {
    a[k] = args->WeightMatrix[k];
  }

  emxInit_real_T1(&b_b, 1);
  k = b_b->size[0];
  b_b->size[0] = args->ErrTemp->size[0];
  emxEnsureCapacity_real_T1(b_b, k);
  loop_ub = args->ErrTemp->size[0];
  for (k = 0; k < loop_ub; k++) {
    b_b->data[k] = args->ErrTemp->data[k];
  }

  st.site = &og_emlrtRSI;
  f_dynamic_size_checks(&st, b_b, b_b->size[0]);
  if (b_b->size[0] == 1) {
    for (k = 0; k < 6; k++) {
      y[k] = 0.0;
      for (loop_ub = 0; loop_ub < 6; loop_ub++) {
        b_y = y[k] + a[k + 6 * loop_ub] * b_b->data[loop_ub];
        y[k] = b_y;
      }
    }
  } else {
    for (loop_ub = 0; loop_ub < 6; loop_ub++) {
      y[loop_ub] = 0.0;
    }

    for (k = 0; k < 6; k++) {
      aoffset = k * 6 - 1;
      for (loop_ub = 0; loop_ub < 6; loop_ub++) {
        y[loop_ub] += b_b->data[k] * a[(aoffset + loop_ub) + 1];
      }
    }
  }

  emxFree_real_T(&b_b);
  return c_norm(y);
}

static void c_IKHelpers_computeCost(const emlrtStack *sp, real_T x[2],
  robotics_manip_internal_IKExtraArgs *args, real_T *cost, real_T W[36],
  emxArray_real_T *Jac, robotics_manip_internal_IKExtraArgs **b_args)
{
  emlrtStack st;
  emxArray_char_T *bodyName;
  robotics_manip_internal_RigidBodyTree_1 *treeInternal;
  int32_T i;
  int32_T loop_ub;
  real_T Td[16];
  emxArray_real_T *J;
  real_T T_data[16];
  int32_T T_size[2];
  real_T e[6];
  real_T y;
  real_T b_e[6];
  emxArray_real_T *b_y;
  st.prev = sp;
  st.tls = sp->tls;
  emxInit_char_T(&bodyName, 2);
  *b_args = args;
  treeInternal = (*b_args)->Robot;
  i = bodyName->size[0] * bodyName->size[1];
  bodyName->size[0] = 1;
  bodyName->size[1] = (*b_args)->BodyName->size[1];
  emxEnsureCapacity_char_T(bodyName, i);
  loop_ub = (*b_args)->BodyName->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    bodyName->data[i] = (*b_args)->BodyName->data[i];
  }

  for (i = 0; i < 16; i++) {
    Td[i] = (*b_args)->Tform[i];
  }

  for (i = 0; i < 36; i++) {
    W[i] = (*b_args)->WeightMatrix[i];
  }

  emxInit_real_T(&J, 2);
  st.site = &pg_emlrtRSI;
  c_RigidBodyTree_efficientFKAndJacobianForIK(&st, treeInternal, x, bodyName,
    T_data, T_size, J);
  i = Jac->size[0] * Jac->size[1];
  Jac->size[0] = 6;
  Jac->size[1] = J->size[1];
  emxEnsureCapacity_real_T(Jac, i);
  loop_ub = 6 * J->size[1] - 1;
  emxFree_char_T(&bodyName);
  for (i = 0; i <= loop_ub; i++) {
    Jac->data[i] = -J->data[i];
  }

  emxFree_real_T(&J);
  st.site = &qg_emlrtRSI;
  IKHelpers_poseError(&st, Td, T_data, T_size, e);
  i = (*b_args)->ErrTemp->size[0];
  (*b_args)->ErrTemp->size[0] = 6;
  emxEnsureCapacity_real_T1((*b_args)->ErrTemp, i);
  for (i = 0; i < 6; i++) {
    (*b_args)->ErrTemp->data[i] = e[i];
  }

  for (i = 0; i < 6; i++) {
    b_e[i] = 0.0;
    for (loop_ub = 0; loop_ub < 6; loop_ub++) {
      y = b_e[i] + 0.5 * e[loop_ub] * W[loop_ub + 6 * i];
      b_e[i] = y;
    }
  }

  y = 0.0;
  for (loop_ub = 0; loop_ub < 6; loop_ub++) {
    y += b_e[loop_ub] * e[loop_ub];
  }

  (*b_args)->CostTemp = y;
  for (i = 0; i < 6; i++) {
    b_e[i] = 0.0;
    for (loop_ub = 0; loop_ub < 6; loop_ub++) {
      y = b_e[i] + e[loop_ub] * W[loop_ub + 6 * i];
      b_e[i] = y;
    }
  }

  emxInit_real_T(&b_y, 2);
  st.site = &ng_emlrtRSI;
  b_mtimes(b_e, Jac, b_y);
  i = (*b_args)->GradTemp->size[0];
  (*b_args)->GradTemp->size[0] = b_y->size[1];
  emxEnsureCapacity_real_T1((*b_args)->GradTemp, i);
  loop_ub = b_y->size[1];
  for (i = 0; i < loop_ub; i++) {
    (*b_args)->GradTemp->data[i] = b_y->data[i];
  }

  emxFree_real_T(&b_y);
  y = (*b_args)->CostTemp;
  *cost = y;
}

static void c_RigidBodyTree_efficientFKAndJacobianForIK(const emlrtStack *sp,
  robotics_manip_internal_RigidBodyTree_1 *obj, real_T qv[2], emxArray_char_T
  *body1Name, real_T T_data[], int32_T T_size[2], emxArray_real_T *Jac)
{
  emlrtStack st;
  emlrtStack b_st;
  emxArray_char_T *body2Name;
  int32_T i;
  int32_T loop_ub;
  real_T bid1;
  real_T bid2;
  robotics_manip_internal_RigidBody_1 *body1;
  robotics_manip_internal_RigidBody_1 *body2;
  emxArray_real_T *ancestorIndices1;
  robotics_manip_internal_RigidBody_1 *body;
  uint32_T b_i;
  emxArray_real_T *ancestorIndices2;
  int32_T i1;
  uint32_T c_i;
  int32_T i2;
  int32_T minPathLength;
  int32_T d_i;
  boolean_T exitg1;
  emxArray_real_T *kinematicPathIndices;
  real_T T1[16];
  emxArray_real_T *JacSlice;
  emxArray_real_T *a;
  emxArray_real_T *joint;
  real_T b_T1[36];
  boolean_T nextBodyIsParent;
  emxArray_real_T *b_Jac;
  int32_T jointSign;
  rigidBodyJoint *b_joint;
  real_T Tc2p[16];
  real_T qidx[2];
  real_T R[9];
  real_T b_R[16];
  real_T c_R[9];
  int32_T qv_size[1];
  real_T d_R[3];
  real_T e_R[16];
  static int8_T iv[4] = { 0, 0, 0, 1 };

  real_T Tj1[16];
  real_T Tj[16];
  real_T T1j[16];
  real_T dv[9];
  int32_T iv1[2];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emxInit_char_T(&body2Name, 2);
  st.site = &xg_emlrtRSI;
  i = body2Name->size[0] * body2Name->size[1];
  body2Name->size[0] = 1;
  body2Name->size[1] = obj->Base.NameInternal->size[1];
  emxEnsureCapacity_char_T(body2Name, i);
  loop_ub = obj->Base.NameInternal->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    body2Name->data[i] = obj->Base.NameInternal->data[i];
  }

  st.site = &wg_emlrtRSI;
  bid1 = f_RigidBodyTree_validateInputBodyName(&st, obj, body1Name);
  st.site = &vg_emlrtRSI;
  bid2 = g_RigidBodyTree_validateInputBodyName(&st, obj, body2Name);
  emxFree_char_T(&body2Name);
  if (bid1 == 0.0) {
    body1 = &obj->Base;
  } else {
    body1 = obj->Bodies[emlrtDynamicBoundsCheckR2012b((int32_T)bid1 - 1, 0, 2,
      &sc_emlrtBCI, sp)];
  }

  if (bid2 == 0.0) {
    body2 = &obj->Base;
  } else {
    body2 = obj->Bodies[emlrtDynamicBoundsCheckR2012b((int32_T)bid2 - 1, 0, 2,
      &tc_emlrtBCI, sp)];
  }

  emxInit_real_T(&ancestorIndices1, 2);
  st.site = &ug_emlrtRSI;
  b_st.site = &yg_emlrtRSI;
  body = body1;
  i = ancestorIndices1->size[0] * ancestorIndices1->size[1];
  ancestorIndices1->size[0] = 1;
  bid1 = obj->NumBodies + 1.0;
  bid1 = emlrtNonNegativeCheckR2012b(bid1, &xb_emlrtDCI, &b_st);
  ancestorIndices1->size[1] = (int32_T)emlrtIntegerCheckR2012b(bid1,
    &wb_emlrtDCI, &b_st);
  emxEnsureCapacity_real_T(ancestorIndices1, i);
  bid1 = obj->NumBodies + 1.0;
  bid1 = emlrtNonNegativeCheckR2012b(bid1, &xb_emlrtDCI, &b_st);
  loop_ub = (int32_T)emlrtIntegerCheckR2012b(bid1, &wb_emlrtDCI, &b_st) - 1;
  for (i = 0; i <= loop_ub; i++) {
    ancestorIndices1->data[i] = 0.0;
  }

  b_i = 2U;
  i = ancestorIndices1->size[1];
  emlrtDynamicBoundsCheckR2012b(1, 1, i, &rc_emlrtBCI, &b_st);
  ancestorIndices1->data[0] = body1->Index;
  while (body->ParentIndex > 0.0) {
    i = (int32_T)emlrtIntegerCheckR2012b(body->ParentIndex, &bc_emlrtDCI, &b_st)
      - 1;
    body = obj->Bodies[emlrtDynamicBoundsCheckR2012b(i, 0, 2, &uc_emlrtBCI,
      &b_st)];
    i = ancestorIndices1->size[1];
    ancestorIndices1->data[emlrtDynamicBoundsCheckR2012b((int32_T)b_i, 1, i,
      &wc_emlrtBCI, &b_st) - 1] = body->Index;
    b_i++;
  }

  if (body->Index > 0.0) {
    i = ancestorIndices1->size[1];
    ancestorIndices1->data[emlrtDynamicBoundsCheckR2012b((int32_T)b_i, 1, i,
      &vc_emlrtBCI, &b_st) - 1] = body->ParentIndex;
    b_i++;
  }

  emxInit_real_T(&ancestorIndices2, 2);
  i = ancestorIndices1->size[1];
  emlrtDynamicBoundsCheckR2012b(1, 1, i, &qc_emlrtBCI, &b_st);
  i = ancestorIndices1->size[1];
  i = emlrtDynamicBoundsCheckR2012b((int32_T)(b_i - 1U), 1, i, &pc_emlrtBCI,
    &b_st);
  i1 = ancestorIndices1->size[0] * ancestorIndices1->size[1];
  ancestorIndices1->size[1] = (int32_T)(b_i - 1U);
  emxEnsureCapacity_real_T(ancestorIndices1, i1);
  b_st.site = &ah_emlrtRSI;
  body = body2;
  i1 = ancestorIndices2->size[0] * ancestorIndices2->size[1];
  ancestorIndices2->size[0] = 1;
  bid1 = obj->NumBodies + 1.0;
  bid1 = emlrtNonNegativeCheckR2012b(bid1, &xb_emlrtDCI, &b_st);
  ancestorIndices2->size[1] = (int32_T)emlrtIntegerCheckR2012b(bid1,
    &wb_emlrtDCI, &b_st);
  emxEnsureCapacity_real_T(ancestorIndices2, i1);
  bid1 = obj->NumBodies + 1.0;
  bid1 = emlrtNonNegativeCheckR2012b(bid1, &xb_emlrtDCI, &b_st);
  loop_ub = (int32_T)emlrtIntegerCheckR2012b(bid1, &wb_emlrtDCI, &b_st) - 1;
  for (i1 = 0; i1 <= loop_ub; i1++) {
    ancestorIndices2->data[i1] = 0.0;
  }

  c_i = 2U;
  i1 = ancestorIndices2->size[1];
  emlrtDynamicBoundsCheckR2012b(1, 1, i1, &rc_emlrtBCI, &b_st);
  ancestorIndices2->data[0] = body2->Index;
  while (body->ParentIndex > 0.0) {
    i1 = (int32_T)emlrtIntegerCheckR2012b(body->ParentIndex, &bc_emlrtDCI, &b_st)
      - 1;
    body = obj->Bodies[emlrtDynamicBoundsCheckR2012b(i1, 0, 2, &uc_emlrtBCI,
      &b_st)];
    i1 = ancestorIndices2->size[1];
    ancestorIndices2->data[emlrtDynamicBoundsCheckR2012b((int32_T)c_i, 1, i1,
      &wc_emlrtBCI, &b_st) - 1] = body->Index;
    c_i++;
  }

  if (body->Index > 0.0) {
    i1 = ancestorIndices2->size[1];
    ancestorIndices2->data[emlrtDynamicBoundsCheckR2012b((int32_T)c_i, 1, i1,
      &vc_emlrtBCI, &b_st) - 1] = body->ParentIndex;
    c_i++;
  }

  i1 = ancestorIndices2->size[1];
  emlrtDynamicBoundsCheckR2012b(1, 1, i1, &qc_emlrtBCI, &b_st);
  i1 = ancestorIndices2->size[1];
  i1 = emlrtDynamicBoundsCheckR2012b((int32_T)(c_i - 1U), 1, i1, &pc_emlrtBCI,
    &b_st);
  i2 = ancestorIndices2->size[0] * ancestorIndices2->size[1];
  ancestorIndices2->size[1] = (int32_T)(c_i - 1U);
  emxEnsureCapacity_real_T(ancestorIndices2, i2);
  minPathLength = (int32_T)muDoubleScalarMin((real_T)b_i - 1.0, (real_T)c_i -
    1.0);
  d_i = 1;
  exitg1 = false;
  while ((!exitg1) && (d_i - 1 <= minPathLength - 2)) {
    if (ancestorIndices1->data[emlrtDynamicBoundsCheckR2012b(i - d_i, 1, i,
         &xc_emlrtBCI, &st) - 1] != ancestorIndices2->
        data[emlrtDynamicBoundsCheckR2012b(i1 - d_i, 1, i1, &yc_emlrtBCI, &st) -
        1]) {
      minPathLength = d_i;
      exitg1 = true;
    } else {
      d_i++;
    }
  }

  bid1 = ancestorIndices1->data[emlrtDynamicBoundsCheckR2012b((i - minPathLength)
    + 1, 1, i, &ad_emlrtBCI, &st) - 1];
  i2 = i - minPathLength;
  if (1 > i2) {
    loop_ub = -1;
  } else {
    loop_ub = emlrtDynamicBoundsCheckR2012b(i2, 1, i, &nc_emlrtBCI, &st) - 1;
  }

  i = i1 - minPathLength;
  if (1 > i) {
    i = 0;
    i1 = 1;
    i2 = -1;
  } else {
    i = emlrtDynamicBoundsCheckR2012b(i, 1, i1, &oc_emlrtBCI, &st) - 1;
    i1 = -1;
    i2 = 0;
  }

  emxInit_real_T(&kinematicPathIndices, 2);
  minPathLength = kinematicPathIndices->size[0] * kinematicPathIndices->size[1];
  kinematicPathIndices->size[0] = 1;
  b_st.site = &ug_emlrtRSI;
  kinematicPathIndices->size[1] = (loop_ub + div_s32_floor(&b_st, i2 - i, i1)) +
    3;
  emxEnsureCapacity_real_T(kinematicPathIndices, minPathLength);
  for (minPathLength = 0; minPathLength <= loop_ub; minPathLength++) {
    kinematicPathIndices->data[minPathLength] = ancestorIndices1->
      data[minPathLength];
  }

  emxFree_real_T(&ancestorIndices1);
  kinematicPathIndices->data[loop_ub + 1] = bid1;
  b_st.site = &am_emlrtRSI;
  minPathLength = div_s32_floor(&b_st, i2 - i, i1);
  for (i2 = 0; i2 <= minPathLength; i2++) {
    kinematicPathIndices->data[(i2 + loop_ub) + 2] = ancestorIndices2->data[i +
      i1 * i2];
  }

  emxFree_real_T(&ancestorIndices2);
  for (i = 0; i < 16; i++) {
    T1[i] = 0.0;
  }

  for (minPathLength = 0; minPathLength < 4; minPathLength++) {
    T1[minPathLength + (minPathLength << 2)] = 1.0;
  }

  i = Jac->size[0] * Jac->size[1];
  Jac->size[0] = 6;
  bid1 = emlrtNonNegativeCheckR2012b(obj->PositionNumber, &ac_emlrtDCI, sp);
  Jac->size[1] = (int32_T)emlrtIntegerCheckR2012b(bid1, &yb_emlrtDCI, sp);
  emxEnsureCapacity_real_T(Jac, i);
  bid1 = emlrtNonNegativeCheckR2012b(obj->PositionNumber, &ac_emlrtDCI, sp);
  loop_ub = 6 * (int32_T)emlrtIntegerCheckR2012b(bid1, &yb_emlrtDCI, sp) - 1;
  for (i = 0; i <= loop_ub; i++) {
    Jac->data[i] = 0.0;
  }

  i = kinematicPathIndices->size[1] - 2;
  emxInit_real_T(&JacSlice, 2);
  emxInit_real_T(&a, 2);
  emxInit_real_T(&joint, 2);
  for (d_i = 0; d_i <= i; d_i++) {
    i1 = kinematicPathIndices->size[1];
    if (kinematicPathIndices->data[emlrtDynamicBoundsCheckR2012b(d_i + 1, 1, i1,
         &bd_emlrtBCI, sp) - 1] != 0.0) {
      i1 = kinematicPathIndices->size[1];
      bid1 = kinematicPathIndices->data[emlrtDynamicBoundsCheckR2012b(d_i + 1, 1,
        i1, &ed_emlrtBCI, sp) - 1];
      i1 = (int32_T)emlrtIntegerCheckR2012b(bid1, &cc_emlrtDCI, sp) - 1;
      body1 = obj->Bodies[emlrtDynamicBoundsCheckR2012b(i1, 0, 2, &dd_emlrtBCI,
        sp)];
    } else {
      body1 = &obj->Base;
    }

    i1 = kinematicPathIndices->size[1];
    if (kinematicPathIndices->data[emlrtDynamicBoundsCheckR2012b(d_i + 2, 1, i1,
         &cd_emlrtBCI, sp) - 1] != 0.0) {
      i1 = kinematicPathIndices->size[1];
      bid1 = kinematicPathIndices->data[emlrtDynamicBoundsCheckR2012b(d_i + 2, 1,
        i1, &gd_emlrtBCI, sp) - 1];
      i1 = (int32_T)emlrtIntegerCheckR2012b(bid1, &dc_emlrtDCI, sp) - 1;
      body2 = obj->Bodies[emlrtDynamicBoundsCheckR2012b(i1, 0, 2, &fd_emlrtBCI,
        sp)];
    } else {
      body2 = &obj->Base;
    }

    nextBodyIsParent = (body2->Index == body1->ParentIndex);
    if (nextBodyIsParent) {
      body2 = body1;
      jointSign = 1;
    } else {
      jointSign = -1;
    }

    b_joint = body2->JointInternal;
    if (e_strcmp(b_joint->Type)) {
      st.site = &tg_emlrtRSI;
      rigidBodyJoint_transformBodyToParent(&st, b_joint, Tc2p);
    } else {
      i1 = (int32_T)emlrtIntegerCheckR2012b(body2->Index, &vb_emlrtDCI, sp);
      minPathLength = emlrtDynamicBoundsCheckR2012b(i1, 1, 3, &mc_emlrtBCI, sp);
      for (i1 = 0; i1 < 2; i1++) {
        qidx[i1] = obj->PositionDoFMap[(minPathLength + 3 * i1) - 1];
      }

      if (qidx[0] > qidx[1]) {
        i1 = 0;
        i2 = -1;
      } else {
        i1 = (int32_T)emlrtIntegerCheckR2012b(qidx[0], &ub_emlrtDCI, sp);
        i1 = emlrtDynamicBoundsCheckR2012b(i1, 1, 2, &lc_emlrtBCI, sp) - 1;
        i2 = (int32_T)emlrtIntegerCheckR2012b(qidx[1], &tb_emlrtDCI, sp);
        i2 = emlrtDynamicBoundsCheckR2012b(i2, 1, 2, &kc_emlrtBCI, sp) - 1;
      }

      qv_size[0] = (i2 - i1) + 1;
      loop_ub = i2 - i1;
      for (i2 = 0; i2 <= loop_ub; i2++) {
        qidx[i2] = qv[i1 + i2];
      }

      st.site = &sg_emlrtRSI;
      b_rigidBodyJoint_transformBodyToParent(&st, b_joint, qidx, qv_size, Tc2p);
      i1 = (int32_T)emlrtIntegerCheckR2012b(body2->Index, &sb_emlrtDCI, sp);
      minPathLength = emlrtDynamicBoundsCheckR2012b(i1, 1, 3, &jc_emlrtBCI, sp);
      for (i1 = 0; i1 < 2; i1++) {
        qidx[i1] = obj->VelocityDoFMap[(minPathLength + 3 * i1) - 1];
      }

      if (nextBodyIsParent) {
        for (i1 = 0; i1 < 16; i1++) {
          Tj[i1] = b_joint->ChildToJointTransform[i1];
        }
      } else {
        for (i1 = 0; i1 < 16; i1++) {
          Tj1[i1] = b_joint->JointToParentTransform[i1];
        }

        for (i1 = 0; i1 < 3; i1++) {
          for (i2 = 0; i2 < 3; i2++) {
            R[i2 + 3 * i1] = Tj1[i1 + (i2 << 2)];
          }
        }

        for (i1 = 0; i1 < 9; i1++) {
          c_R[i1] = -R[i1];
        }

        for (i1 = 0; i1 < 3; i1++) {
          d_R[i1] = 0.0;
          for (i2 = 0; i2 < 3; i2++) {
            Tj[i2 + (i1 << 2)] = R[i2 + 3 * i1];
            d_R[i1] += c_R[i1 + 3 * i2] * Tj1[i2 + 12];
          }

          Tj[i1 + 12] = d_R[i1];
        }

        for (i1 = 0; i1 < 4; i1++) {
          Tj[(i1 << 2) + 3] = (real_T)iv[i1];
        }
      }

      for (i1 = 0; i1 < 4; i1++) {
        for (i2 = 0; i2 < 4; i2++) {
          T1j[i1 + (i2 << 2)] = 0.0;
          for (minPathLength = 0; minPathLength < 4; minPathLength++) {
            T1j[i1 + (i2 << 2)] += Tj[i1 + (minPathLength << 2)] *
              T1[minPathLength + (i2 << 2)];
          }
        }
      }

      for (i1 = 0; i1 < 3; i1++) {
        for (i2 = 0; i2 < 3; i2++) {
          R[i2 + 3 * i1] = T1j[i1 + (i2 << 2)];
        }
      }

      for (i1 = 0; i1 < 9; i1++) {
        c_R[i1] = -R[i1];
      }

      for (i1 = 0; i1 < 3; i1++) {
        d_R[i1] = 0.0;
        for (i2 = 0; i2 < 3; i2++) {
          Tj1[i2 + (i1 << 2)] = R[i2 + 3 * i1];
          d_R[i1] += c_R[i1 + 3 * i2] * T1j[i2 + 12];
        }

        Tj1[i1 + 12] = d_R[i1];
      }

      for (i1 = 0; i1 < 4; i1++) {
        Tj1[(i1 << 2) + 3] = (real_T)iv[i1];
      }

      for (i1 = 0; i1 < 3; i1++) {
        for (i2 = 0; i2 < 3; i2++) {
          R[i2 + 3 * i1] = Tj1[i2 + (i1 << 2)];
        }
      }

      c_R[0] = 0.0;
      c_R[3] = -Tj1[14];
      c_R[6] = Tj1[13];
      c_R[1] = Tj1[14];
      c_R[4] = 0.0;
      c_R[7] = -Tj1[12];
      c_R[2] = -Tj1[13];
      c_R[5] = Tj1[12];
      c_R[8] = 0.0;
      for (i1 = 0; i1 < 3; i1++) {
        for (i2 = 0; i2 < 3; i2++) {
          dv[i1 + 3 * i2] = 0.0;
          for (minPathLength = 0; minPathLength < 3; minPathLength++) {
            dv[i1 + 3 * i2] += c_R[i1 + 3 * minPathLength] * R[minPathLength + 3
              * i2];
          }

          b_T1[i2 + 6 * i1] = R[i2 + 3 * i1];
          b_T1[i2 + 6 * (i1 + 3)] = 0.0;
        }
      }

      for (i1 = 0; i1 < 3; i1++) {
        for (i2 = 0; i2 < 3; i2++) {
          b_T1[(i2 + 6 * i1) + 3] = dv[i2 + 3 * i1];
          b_T1[(i2 + 6 * (i1 + 3)) + 3] = R[i2 + 3 * i1];
        }
      }

      i1 = joint->size[0] * joint->size[1];
      joint->size[0] = 6;
      joint->size[1] = b_joint->MotionSubspace->size[1];
      emxEnsureCapacity_real_T(joint, i1);
      loop_ub = b_joint->MotionSubspace->size[0] * b_joint->MotionSubspace->
        size[1];
      for (i1 = 0; i1 < loop_ub; i1++) {
        joint->data[i1] = b_joint->MotionSubspace->data[i1];
      }

      st.site = &rg_emlrtRSI;
      eml_mtimes_helper(b_T1, joint, a);
      i1 = JacSlice->size[0] * JacSlice->size[1];
      JacSlice->size[0] = 6;
      JacSlice->size[1] = a->size[1];
      emxEnsureCapacity_real_T(JacSlice, i1);
      loop_ub = 6 * a->size[1] - 1;
      for (i1 = 0; i1 <= loop_ub; i1++) {
        JacSlice->data[i1] = a->data[i1] * (real_T)jointSign;
      }

      if (qidx[0] > qidx[1]) {
        i1 = 0;
        i2 = -1;
      } else {
        i1 = Jac->size[1];
        i2 = (int32_T)emlrtIntegerCheckR2012b(qidx[0], &rb_emlrtDCI, sp);
        i1 = emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &ic_emlrtBCI, sp) - 1;
        i2 = Jac->size[1];
        minPathLength = (int32_T)emlrtIntegerCheckR2012b(qidx[1], &qb_emlrtDCI,
          sp);
        i2 = emlrtDynamicBoundsCheckR2012b(minPathLength, 1, i2, &hc_emlrtBCI,
          sp) - 1;
      }

      iv1[0] = 6;
      iv1[1] = (i2 - i1) + 1;
      emlrtSubAssignSizeCheckR2012b(iv1, 2, *(int32_T (*)[2])JacSlice->size, 2,
        &x_emlrtECI, sp);
      loop_ub = JacSlice->size[1];
      for (i2 = 0; i2 < loop_ub; i2++) {
        for (minPathLength = 0; minPathLength < 6; minPathLength++) {
          Jac->data[minPathLength + 6 * (i1 + i2)] = JacSlice->
            data[minPathLength + 6 * i2];
        }
      }
    }

    if (nextBodyIsParent) {
      for (i1 = 0; i1 < 4; i1++) {
        for (i2 = 0; i2 < 4; i2++) {
          b_R[i1 + (i2 << 2)] = 0.0;
          for (minPathLength = 0; minPathLength < 4; minPathLength++) {
            b_R[i1 + (i2 << 2)] += Tc2p[i1 + (minPathLength << 2)] *
              T1[minPathLength + (i2 << 2)];
          }
        }
      }

      memcpy(&T1[0], &b_R[0], sizeof(real_T) << 4);
    } else {
      for (i1 = 0; i1 < 3; i1++) {
        for (i2 = 0; i2 < 3; i2++) {
          R[i2 + 3 * i1] = Tc2p[i1 + (i2 << 2)];
        }
      }

      for (i1 = 0; i1 < 9; i1++) {
        c_R[i1] = -R[i1];
      }

      for (i1 = 0; i1 < 3; i1++) {
        d_R[i1] = 0.0;
        for (i2 = 0; i2 < 3; i2++) {
          e_R[i2 + (i1 << 2)] = R[i2 + 3 * i1];
          d_R[i1] += c_R[i1 + 3 * i2] * Tc2p[i2 + 12];
        }

        e_R[i1 + 12] = d_R[i1];
      }

      for (i1 = 0; i1 < 4; i1++) {
        e_R[(i1 << 2) + 3] = (real_T)iv[i1];
      }

      for (i1 = 0; i1 < 4; i1++) {
        for (i2 = 0; i2 < 4; i2++) {
          b_R[i1 + (i2 << 2)] = 0.0;
          for (minPathLength = 0; minPathLength < 4; minPathLength++) {
            b_R[i1 + (i2 << 2)] += e_R[i1 + (minPathLength << 2)] *
              T1[minPathLength + (i2 << 2)];
          }
        }
      }

      memcpy(&T1[0], &b_R[0], sizeof(real_T) << 4);
    }
  }

  emxFree_real_T(&joint);
  emxFree_real_T(&a);
  emxFree_real_T(&JacSlice);
  emxFree_real_T(&kinematicPathIndices);
  for (i = 0; i < 3; i++) {
    for (i1 = 0; i1 < 3; i1++) {
      b_T1[i1 + 6 * i] = T1[i1 + (i << 2)];
      b_T1[i1 + 6 * (i + 3)] = 0.0;
      b_T1[(i1 + 6 * i) + 3] = 0.0;
      b_T1[(i1 + 6 * (i + 3)) + 3] = T1[i1 + (i << 2)];
    }
  }

  emxInit_real_T(&b_Jac, 2);
  i = b_Jac->size[0] * b_Jac->size[1];
  b_Jac->size[0] = 6;
  b_Jac->size[1] = Jac->size[1];
  emxEnsureCapacity_real_T(b_Jac, i);
  loop_ub = Jac->size[0] * Jac->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_Jac->data[i] = Jac->data[i];
  }

  st.site = &ng_emlrtRSI;
  mtimes(b_T1, b_Jac, Jac);
  T_size[0] = 4;
  T_size[1] = 4;
  emxFree_real_T(&b_Jac);
  for (i = 0; i < 16; i++) {
    T_data[i] = T1[i];
  }
}

static real_T f_RigidBodyTree_validateInputBodyName(const emlrtStack *sp,
  robotics_manip_internal_RigidBodyTree_1 *obj, emxArray_char_T *bodyname)
{
  real_T bid;
  emlrtStack st;
  emlrtStack b_st;
  emxArray_char_T *bname;
  int32_T i;
  int32_T loop_ub;
  real_T d;
  int32_T b_i;
  boolean_T exitg1;
  robotics_manip_internal_RigidBody_1 *b_obj;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emxInit_char_T(&bname, 2);
  st.site = &jc_emlrtRSI;
  bid = -1.0;
  b_st.site = &tb_emlrtRSI;
  b_validateattributes(&b_st, bodyname);
  b_st.site = &ub_emlrtRSI;
  i = bname->size[0] * bname->size[1];
  bname->size[0] = 1;
  bname->size[1] = obj->Base.NameInternal->size[1];
  emxEnsureCapacity_char_T(bname, i);
  loop_ub = obj->Base.NameInternal->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    bname->data[i] = obj->Base.NameInternal->data[i];
  }

  if (d_strcmp(bname, bodyname)) {
    bid = 0.0;
  } else {
    d = obj->NumBodies;
    emlrtForLoopVectorCheckR2012b(1.0, 1.0, d, mxDOUBLE_CLASS, (int32_T)d,
      &emlrtRTEI, &st);
    b_i = 0;
    exitg1 = false;
    while ((!exitg1) && (b_i <= (int32_T)d - 1)) {
      b_st.site = &vb_emlrtRSI;
      b_obj = obj->Bodies[emlrtDynamicBoundsCheckR2012b(b_i, 0, 2, &emlrtBCI,
        &b_st)];
      i = bname->size[0] * bname->size[1];
      bname->size[0] = 1;
      bname->size[1] = b_obj->NameInternal->size[1];
      emxEnsureCapacity_char_T(bname, i);
      loop_ub = b_obj->NameInternal->size[1] - 1;
      for (i = 0; i <= loop_ub; i++) {
        bname->data[i] = b_obj->NameInternal->data[i];
      }

      if (d_strcmp(bname, bodyname)) {
        bid = (real_T)b_i + 1.0;
        exitg1 = true;
      } else {
        b_i++;
      }
    }
  }

  emxFree_char_T(&bname);
  if (bid == -1.0) {
    st.site = &kc_emlrtRSI;
    c_error(&st, bodyname);
  }

  return bid;
}

static real_T g_RigidBodyTree_validateInputBodyName(const emlrtStack *sp,
  robotics_manip_internal_RigidBodyTree_1 *obj, emxArray_char_T *bodyname)
{
  real_T bid;
  emlrtStack st;
  emlrtStack b_st;
  emxArray_char_T *bname;
  int32_T i;
  int32_T loop_ub;
  real_T d;
  int32_T b_i;
  boolean_T exitg1;
  robotics_manip_internal_RigidBody_1 *b_obj;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emxInit_char_T(&bname, 2);
  st.site = &jc_emlrtRSI;
  bid = -1.0;
  b_st.site = &tb_emlrtRSI;
  b_validateattributes(&b_st, bodyname);
  b_st.site = &ub_emlrtRSI;
  i = bname->size[0] * bname->size[1];
  bname->size[0] = 1;
  bname->size[1] = obj->Base.NameInternal->size[1];
  emxEnsureCapacity_char_T(bname, i);
  loop_ub = obj->Base.NameInternal->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    bname->data[i] = obj->Base.NameInternal->data[i];
  }

  if (d_strcmp(bname, bodyname)) {
    bid = 0.0;
  } else {
    d = obj->NumBodies;
    emlrtForLoopVectorCheckR2012b(1.0, 1.0, d, mxDOUBLE_CLASS, (int32_T)d,
      &emlrtRTEI, &st);
    b_i = 0;
    exitg1 = false;
    while ((!exitg1) && (b_i <= (int32_T)d - 1)) {
      b_st.site = &vb_emlrtRSI;
      b_obj = obj->Bodies[emlrtDynamicBoundsCheckR2012b(b_i, 0, 2, &emlrtBCI,
        &b_st)];
      i = bname->size[0] * bname->size[1];
      bname->size[0] = 1;
      bname->size[1] = b_obj->NameInternal->size[1];
      emxEnsureCapacity_char_T(bname, i);
      loop_ub = b_obj->NameInternal->size[1] - 1;
      for (i = 0; i <= loop_ub; i++) {
        bname->data[i] = b_obj->NameInternal->data[i];
      }

      if (d_strcmp(bname, bodyname)) {
        bid = (real_T)b_i + 1.0;
        exitg1 = true;
      } else {
        b_i++;
      }
    }
  }

  emxFree_char_T(&bname);
  if (bid == -1.0) {
    st.site = &kc_emlrtRSI;
    c_error(&st, bodyname);
  }

  return bid;
}

static void k_dynamic_size_checks(const emlrtStack *sp, emxArray_real_T *a,
  int32_T innerDimA)
{
  emlrtStack st;
  char_T b_u[15];
  char_T c_u[45];
  int32_T i;
  const mxArray *y;
  static char_T d_u[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'i', 'n', 'n',
    'e', 'r', 'd', 'i', 'm' };

  static char_T e_u[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D', 'y',
    'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p', 'a',
    'n', 's', 'i', 'o', 'n' };

  const mxArray *m;
  static const int32_T iv[2] = { 1, 15 };

  static const int32_T iv1[2] = { 1, 45 };

  const mxArray *b_y;
  static const int32_T iv2[2] = { 1, 15 };

  static const int32_T iv3[2] = { 1, 45 };

  st.prev = sp;
  st.tls = sp->tls;
  if (innerDimA != 2) {
    if ((a->size[0] == 1) && (a->size[1] == 1)) {
      for (i = 0; i < 45; i++) {
        c_u[i] = e_u[i];
      }

      y = NULL;
      m = emlrtCreateCharArray(2, iv1);
      emlrtInitCharArrayR2013a(sp, 45, m, &c_u[0]);
      emlrtAssign(&y, m);
      for (i = 0; i < 45; i++) {
        c_u[i] = e_u[i];
      }

      b_y = NULL;
      m = emlrtCreateCharArray(2, iv3);
      emlrtInitCharArrayR2013a(sp, 45, m, &c_u[0]);
      emlrtAssign(&b_y, m);
      st.site = &hl_emlrtRSI;
      f_error(&st, y, getString(&st, b_message(&st, b_y, &bb_emlrtMCI),
               &bb_emlrtMCI), &bb_emlrtMCI);
    } else {
      for (i = 0; i < 15; i++) {
        b_u[i] = d_u[i];
      }

      y = NULL;
      m = emlrtCreateCharArray(2, iv);
      emlrtInitCharArrayR2013a(sp, 15, m, &b_u[0]);
      emlrtAssign(&y, m);
      for (i = 0; i < 15; i++) {
        b_u[i] = d_u[i];
      }

      b_y = NULL;
      m = emlrtCreateCharArray(2, iv2);
      emlrtInitCharArrayR2013a(sp, 15, m, &b_u[0]);
      emlrtAssign(&b_y, m);
      st.site = &il_emlrtRSI;
      f_error(&st, y, getString(&st, b_message(&st, b_y, &ab_emlrtMCI),
               &ab_emlrtMCI), &ab_emlrtMCI);
    }
  }
}

static void l_mtimes(emxArray_real_T *A, real_T B[4], emxArray_real_T *C)
{
  char_T TRANSB1;
  int32_T i;
  char_T TRANSA1;
  real_T alpha1;
  real_T beta1;
  ptrdiff_t m_t;
  int32_T loop_ub;
  ptrdiff_t n_t;
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  if ((A->size[0] == 0) || (A->size[1] == 0)) {
    i = C->size[0] * C->size[1];
    C->size[0] = A->size[0];
    C->size[1] = 2;
    emxEnsureCapacity_real_T(C, i);
    loop_ub = (A->size[0] << 1) - 1;
    for (i = 0; i <= loop_ub; i++) {
      C->data[i] = 0.0;
    }
  } else {
    TRANSB1 = 'N';
    TRANSA1 = 'N';
    alpha1 = 1.0;
    beta1 = 0.0;
    m_t = (ptrdiff_t)A->size[0];
    n_t = (ptrdiff_t)2;
    k_t = (ptrdiff_t)2;
    lda_t = (ptrdiff_t)A->size[0];
    ldb_t = (ptrdiff_t)2;
    ldc_t = (ptrdiff_t)A->size[0];
    i = C->size[0] * C->size[1];
    C->size[0] = A->size[0];
    C->size[1] = 2;
    emxEnsureCapacity_real_T(C, i);
    dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, &A->data[0], &lda_t,
          &B[0], &ldb_t, &beta1, &C->data[0], &ldc_t);
  }
}

static void l_dynamic_size_checks(const emlrtStack *sp, int32_T innerDimB)
{
  emlrtStack st;
  char_T b_u[15];
  int32_T i;
  const mxArray *y;
  static char_T c_u[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'i', 'n', 'n',
    'e', 'r', 'd', 'i', 'm' };

  const mxArray *m;
  static const int32_T iv[2] = { 1, 15 };

  const mxArray *b_y;
  static const int32_T iv1[2] = { 1, 15 };

  st.prev = sp;
  st.tls = sp->tls;
  if (2 != innerDimB) {
    for (i = 0; i < 15; i++) {
      b_u[i] = c_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, iv);
    emlrtInitCharArrayR2013a(sp, 15, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 15; i++) {
      b_u[i] = c_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, iv1);
    emlrtInitCharArrayR2013a(sp, 15, m, &b_u[0]);
    emlrtAssign(&b_y, m);
    st.site = &il_emlrtRSI;
    f_error(&st, y, getString(&st, b_message(&st, b_y, &ab_emlrtMCI),
             &ab_emlrtMCI), &ab_emlrtMCI);
  }
}

static void m_mtimes(real_T A[4], emxArray_real_T *B, real_T C[4])
{
  int32_T j;
  int32_T coffset;
  int32_T boffset;
  int32_T i;
  int32_T k;
  int32_T aoffset;
  real_T temp;
  for (j = 0; j < 2; j++) {
    coffset = (j << 1) - 1;
    boffset = (j << 1) - 1;
    for (i = 0; i < 2; i++) {
      C[(coffset + i) + 1] = 0.0;
    }

    for (k = 0; k < 2; k++) {
      aoffset = (k << 1) - 1;
      temp = B->data[(boffset + k) + 1];
      for (i = 0; i < 2; i++) {
        C[(coffset + i) + 1] += temp * A[(aoffset + i) + 1];
      }
    }
  }
}

static void m_dynamic_size_checks(const emlrtStack *sp, emxArray_real_T *b_b,
  int32_T innerDimB)
{
  emlrtStack st;
  char_T b_u[15];
  char_T c_u[45];
  int32_T i;
  const mxArray *y;
  static char_T d_u[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'i', 'n', 'n',
    'e', 'r', 'd', 'i', 'm' };

  static char_T e_u[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D', 'y',
    'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p', 'a',
    'n', 's', 'i', 'o', 'n' };

  const mxArray *m;
  static const int32_T iv[2] = { 1, 15 };

  static const int32_T iv1[2] = { 1, 45 };

  const mxArray *b_y;
  static const int32_T iv2[2] = { 1, 15 };

  static const int32_T iv3[2] = { 1, 45 };

  st.prev = sp;
  st.tls = sp->tls;
  if (2 != innerDimB) {
    if (b_b->size[0] == 1) {
      for (i = 0; i < 45; i++) {
        c_u[i] = e_u[i];
      }

      y = NULL;
      m = emlrtCreateCharArray(2, iv1);
      emlrtInitCharArrayR2013a(sp, 45, m, &c_u[0]);
      emlrtAssign(&y, m);
      for (i = 0; i < 45; i++) {
        c_u[i] = e_u[i];
      }

      b_y = NULL;
      m = emlrtCreateCharArray(2, iv3);
      emlrtInitCharArrayR2013a(sp, 45, m, &c_u[0]);
      emlrtAssign(&b_y, m);
      st.site = &hl_emlrtRSI;
      f_error(&st, y, getString(&st, b_message(&st, b_y, &bb_emlrtMCI),
               &bb_emlrtMCI), &bb_emlrtMCI);
    } else {
      for (i = 0; i < 15; i++) {
        b_u[i] = d_u[i];
      }

      y = NULL;
      m = emlrtCreateCharArray(2, iv);
      emlrtInitCharArrayR2013a(sp, 15, m, &b_u[0]);
      emlrtAssign(&y, m);
      for (i = 0; i < 15; i++) {
        b_u[i] = d_u[i];
      }

      b_y = NULL;
      m = emlrtCreateCharArray(2, iv2);
      emlrtInitCharArrayR2013a(sp, 15, m, &b_u[0]);
      emlrtAssign(&b_y, m);
      st.site = &il_emlrtRSI;
      f_error(&st, y, getString(&st, b_message(&st, b_y, &ab_emlrtMCI),
               &ab_emlrtMCI), &ab_emlrtMCI);
    }
  }
}

static real_T n_mtimes(real_T A[2], emxArray_real_T *B)
{
  return xdotu(A, B);
}

static void n_dynamic_size_checks(const emlrtStack *sp, emxArray_real_T *a,
  int32_T innerDimA)
{
  emlrtStack st;
  char_T b_u[15];
  char_T c_u[45];
  int32_T i;
  const mxArray *y;
  static char_T d_u[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'i', 'n', 'n',
    'e', 'r', 'd', 'i', 'm' };

  static char_T e_u[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D', 'y',
    'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p', 'a',
    'n', 's', 'i', 'o', 'n' };

  const mxArray *m;
  static const int32_T iv[2] = { 1, 15 };

  static const int32_T iv1[2] = { 1, 45 };

  const mxArray *b_y;
  static const int32_T iv2[2] = { 1, 15 };

  static const int32_T iv3[2] = { 1, 45 };

  st.prev = sp;
  st.tls = sp->tls;
  if (innerDimA != 2) {
    if (a->size[1] == 1) {
      for (i = 0; i < 45; i++) {
        c_u[i] = e_u[i];
      }

      y = NULL;
      m = emlrtCreateCharArray(2, iv1);
      emlrtInitCharArrayR2013a(sp, 45, m, &c_u[0]);
      emlrtAssign(&y, m);
      for (i = 0; i < 45; i++) {
        c_u[i] = e_u[i];
      }

      b_y = NULL;
      m = emlrtCreateCharArray(2, iv3);
      emlrtInitCharArrayR2013a(sp, 45, m, &c_u[0]);
      emlrtAssign(&b_y, m);
      st.site = &hl_emlrtRSI;
      f_error(&st, y, getString(&st, b_message(&st, b_y, &bb_emlrtMCI),
               &bb_emlrtMCI), &bb_emlrtMCI);
    } else {
      for (i = 0; i < 15; i++) {
        b_u[i] = d_u[i];
      }

      y = NULL;
      m = emlrtCreateCharArray(2, iv);
      emlrtInitCharArrayR2013a(sp, 15, m, &b_u[0]);
      emlrtAssign(&y, m);
      for (i = 0; i < 15; i++) {
        b_u[i] = d_u[i];
      }

      b_y = NULL;
      m = emlrtCreateCharArray(2, iv2);
      emlrtInitCharArrayR2013a(sp, 15, m, &b_u[0]);
      emlrtAssign(&b_y, m);
      st.site = &il_emlrtRSI;
      f_error(&st, y, getString(&st, b_message(&st, b_y, &ab_emlrtMCI),
               &ab_emlrtMCI), &ab_emlrtMCI);
    }
  }
}

static void o_mtimes(real_T A[4], real_T B[4], real_T C[4])
{
  int32_T i;
  int32_T i1;
  int32_T i2;
  for (i = 0; i < 2; i++) {
    for (i1 = 0; i1 < 2; i1++) {
      C[i + (i1 << 1)] = 0.0;
      for (i2 = 0; i2 < 2; i2++) {
        C[i + (i1 << 1)] += A[i + (i2 << 1)] * B[i1 + (i2 << 1)];
      }
    }
  }
}

static boolean_T isPositiveDefinite(const emlrtStack *sp, real_T B[4])
{
  emlrtStack st;
  emlrtStack b_st;
  real_T A_data[4];
  int32_T i;
  ptrdiff_t info_t;
  int32_T info;
  int32_T b_info;
  char_T b_u[30];
  const mxArray *y;
  static char_T c_u[30] = { 'C', 'o', 'd', 'e', 'r', ':', 'b', 'u', 'i', 'l',
    't', 'i', 'n', 's', ':', 'A', 's', 's', 'e', 'r', 't', 'i', 'o', 'n', 'F',
    'a', 'i', 'l', 'e', 'd' };

  const mxArray *m;
  static const int32_T iv[2] = { 1, 30 };

  const mxArray *b_y;
  static const int32_T iv1[2] = { 1, 30 };

  st.prev = sp;
  st.tls = sp->tls;
  st.site = &nj_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  b_st.site = &oj_emlrtRSI;
  for (i = 0; i < 4; i++) {
    A_data[i] = B[i];
  }

  info_t = LAPACKE_dpotrf_work(102, 'L', (ptrdiff_t)2, &A_data[0], (ptrdiff_t)2);
  info = (int32_T)info_t;
  if (info == 0) {
    b_info = 3;
  } else {
    b_info = info;
  }

  if (!(b_info - 1 <= 2)) {
    for (i = 0; i < 30; i++) {
      b_u[i] = c_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, iv);
    emlrtInitCharArrayR2013a(&st, 30, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 30; i++) {
      b_u[i] = c_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, iv1);
    emlrtInitCharArrayR2013a(&st, 30, m, &b_u[0]);
    emlrtAssign(&b_y, m);
    b_st.site = &gl_emlrtRSI;
    f_error(&b_st, y, getString(&b_st, b_message(&b_st, b_y, &mb_emlrtMCI),
             &mb_emlrtMCI), &mb_emlrtMCI);
  }

  return info == 0;
}

static real_T d_IKHelpers_evaluateSolution(const emlrtStack *sp,
  robotics_manip_internal_IKExtraArgs *args)
{
  emlrtStack st;
  real_T y[6];
  real_T a[36];
  int32_T k;
  emxArray_real_T *b_b;
  int32_T loop_ub;
  int32_T aoffset;
  real_T b_y;
  st.prev = sp;
  st.tls = sp->tls;
  for (k = 0; k < 36; k++) {
    a[k] = args->WeightMatrix[k];
  }

  emxInit_real_T1(&b_b, 1);
  k = b_b->size[0];
  b_b->size[0] = args->ErrTemp->size[0];
  emxEnsureCapacity_real_T1(b_b, k);
  loop_ub = args->ErrTemp->size[0];
  for (k = 0; k < loop_ub; k++) {
    b_b->data[k] = args->ErrTemp->data[k];
  }

  st.site = &og_emlrtRSI;
  f_dynamic_size_checks(&st, b_b, b_b->size[0]);
  if (b_b->size[0] == 1) {
    for (k = 0; k < 6; k++) {
      y[k] = 0.0;
      for (loop_ub = 0; loop_ub < 6; loop_ub++) {
        b_y = y[k] + a[k + 6 * loop_ub] * b_b->data[loop_ub];
        y[k] = b_y;
      }
    }
  } else {
    for (loop_ub = 0; loop_ub < 6; loop_ub++) {
      y[loop_ub] = 0.0;
    }

    for (k = 0; k < 6; k++) {
      aoffset = k * 6 - 1;
      for (loop_ub = 0; loop_ub < 6; loop_ub++) {
        y[loop_ub] += b_b->data[k] * a[(aoffset + loop_ub) + 1];
      }
    }
  }

  emxFree_real_T(&b_b);
  return c_norm(y);
}

static boolean_T DampedBFGSwGradientProjection_searchDirectionInvalid(const
  emlrtStack *sp, robotics_core_internal_DampedBFGSwGradientProjection *obj,
  real_T xNew[2])
{
  boolean_T flag;
  emlrtStack st;
  emxArray_real_T *a;
  emxArray_real_T *r;
  emxArray_boolean_T *r1;
  int32_T i;
  int32_T loop_ub;
  int32_T i1;
  real_T d;
  int32_T b_loop_ub;
  st.prev = sp;
  st.tls = sp->tls;
  emxInit_real_T(&a, 2);
  emxInit_real_T1(&r, 1);
  emxInit_boolean_T(&r1, 1);
  if (obj->ConstraintsOn) {
    i = a->size[0] * a->size[1];
    a->size[0] = obj->ConstraintMatrix->size[0];
    a->size[1] = obj->ConstraintMatrix->size[1];
    emxEnsureCapacity_real_T(a, i);
    loop_ub = obj->ConstraintMatrix->size[0] * obj->ConstraintMatrix->size[1] -
      1;
    for (i = 0; i <= loop_ub; i++) {
      a->data[i] = obj->ConstraintMatrix->data[i];
    }

    st.site = &og_emlrtRSI;
    dynamic_size_checks(&st, a, a->size[0]);
    if (a->size[0] == 1) {
      i = r->size[0];
      r->size[0] = a->size[1];
      emxEnsureCapacity_real_T1(r, i);
      loop_ub = a->size[1];
      for (i = 0; i < loop_ub; i++) {
        r->data[i] = 0.0;
        b_loop_ub = a->size[0];
        for (i1 = 0; i1 < b_loop_ub; i1++) {
          r->data[i] += a->data[i1 + a->size[0] * i] * xNew[i1];
        }
      }
    } else {
      st.site = &ng_emlrtRSI;
      c_mtimes(a, xNew, r);
    }

    i = r->size[0];
    i1 = obj->ConstraintBound->size[0];
    emlrtSizeEqCheck1DR2012b(i, i1, &ab_emlrtECI, sp);
    d = 2.2204460492503131E-16;
    st.site = &sj_emlrtRSI;
    b_sqrt(&st, &d);
    i = r1->size[0];
    r1->size[0] = r->size[0];
    emxEnsureCapacity_boolean_T(r1, i);
    loop_ub = r->size[0];
    for (i = 0; i < loop_ub; i++) {
      r1->data[i] = (r->data[i] - obj->ConstraintBound->data[i] >
                     1.4901161193847656E-8);
    }

    st.site = &sj_emlrtRSI;
    if (any(&st, r1)) {
      flag = true;
    } else {
      flag = false;
    }
  } else {
    flag = false;
  }

  emxFree_boolean_T(&r1);
  emxFree_real_T(&r);
  emxFree_real_T(&a);
  return flag;
}

static real_T e_IKHelpers_evaluateSolution(const emlrtStack *sp,
  robotics_manip_internal_IKExtraArgs *args)
{
  emlrtStack st;
  real_T y[6];
  real_T a[36];
  int32_T k;
  emxArray_real_T *b_b;
  int32_T loop_ub;
  int32_T aoffset;
  real_T b_y;
  st.prev = sp;
  st.tls = sp->tls;
  for (k = 0; k < 36; k++) {
    a[k] = args->WeightMatrix[k];
  }

  emxInit_real_T1(&b_b, 1);
  k = b_b->size[0];
  b_b->size[0] = args->ErrTemp->size[0];
  emxEnsureCapacity_real_T1(b_b, k);
  loop_ub = args->ErrTemp->size[0];
  for (k = 0; k < loop_ub; k++) {
    b_b->data[k] = args->ErrTemp->data[k];
  }

  st.site = &og_emlrtRSI;
  f_dynamic_size_checks(&st, b_b, b_b->size[0]);
  if (b_b->size[0] == 1) {
    for (k = 0; k < 6; k++) {
      y[k] = 0.0;
      for (loop_ub = 0; loop_ub < 6; loop_ub++) {
        b_y = y[k] + a[k + 6 * loop_ub] * b_b->data[loop_ub];
        y[k] = b_y;
      }
    }
  } else {
    for (loop_ub = 0; loop_ub < 6; loop_ub++) {
      y[loop_ub] = 0.0;
    }

    for (k = 0; k < 6; k++) {
      aoffset = k * 6 - 1;
      for (loop_ub = 0; loop_ub < 6; loop_ub++) {
        y[loop_ub] += b_b->data[k] * a[(aoffset + loop_ub) + 1];
      }
    }
  }

  emxFree_real_T(&b_b);
  return c_norm(y);
}

static real_T f_IKHelpers_evaluateSolution(const emlrtStack *sp,
  robotics_manip_internal_IKExtraArgs *args)
{
  emlrtStack st;
  real_T y[6];
  real_T a[36];
  int32_T k;
  emxArray_real_T *b_b;
  int32_T loop_ub;
  int32_T aoffset;
  real_T b_y;
  st.prev = sp;
  st.tls = sp->tls;
  for (k = 0; k < 36; k++) {
    a[k] = args->WeightMatrix[k];
  }

  emxInit_real_T1(&b_b, 1);
  k = b_b->size[0];
  b_b->size[0] = args->ErrTemp->size[0];
  emxEnsureCapacity_real_T1(b_b, k);
  loop_ub = args->ErrTemp->size[0];
  for (k = 0; k < loop_ub; k++) {
    b_b->data[k] = args->ErrTemp->data[k];
  }

  st.site = &og_emlrtRSI;
  f_dynamic_size_checks(&st, b_b, b_b->size[0]);
  if (b_b->size[0] == 1) {
    for (k = 0; k < 6; k++) {
      y[k] = 0.0;
      for (loop_ub = 0; loop_ub < 6; loop_ub++) {
        b_y = y[k] + a[k + 6 * loop_ub] * b_b->data[loop_ub];
        y[k] = b_y;
      }
    }
  } else {
    for (loop_ub = 0; loop_ub < 6; loop_ub++) {
      y[loop_ub] = 0.0;
    }

    for (k = 0; k < 6; k++) {
      aoffset = k * 6 - 1;
      for (loop_ub = 0; loop_ub < 6; loop_ub++) {
        y[loop_ub] += b_b->data[k] * a[(aoffset + loop_ub) + 1];
      }
    }
  }

  emxFree_real_T(&b_b);
  return c_norm(y);
}

static void b_isfinite(emxArray_real_T *x, emxArray_boolean_T *b_b)
{
  int32_T i;
  int32_T loop_ub;
  emxArray_boolean_T *r;
  i = b_b->size[0];
  b_b->size[0] = x->size[0];
  emxEnsureCapacity_boolean_T(b_b, i);
  loop_ub = x->size[0];
  for (i = 0; i < loop_ub; i++) {
    b_b->data[i] = muDoubleScalarIsInf(x->data[i]);
  }

  emxInit_boolean_T(&r, 1);
  i = r->size[0];
  r->size[0] = x->size[0];
  emxEnsureCapacity_boolean_T(r, i);
  loop_ub = x->size[0];
  for (i = 0; i < loop_ub; i++) {
    r->data[i] = muDoubleScalarIsNaN(x->data[i]);
  }

  i = b_b->size[0];
  emxEnsureCapacity_boolean_T(b_b, i);
  loop_ub = b_b->size[0];
  for (i = 0; i < loop_ub; i++) {
    b_b->data[i] = ((!b_b->data[i]) && (!r->data[i]));
  }

  emxFree_boolean_T(&r);
}

static void c_rand(InstanceStruct_99HJ2LsbXT8ZQdi4PHECuF *moduleInstance, const
                   emlrtStack *sp, real_T varargin_1, emxArray_real_T *r)
{
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  int32_T i;
  int32_T k;
  real_T d;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &ib_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b_st.site = &jb_emlrtRSI;
  i = r->size[0];
  r->size[0] = (int32_T)emlrtNonNegativeCheckR2012b(varargin_1, &ec_emlrtDCI,
    &b_st);
  emxEnsureCapacity_real_T1(r, i);
  i = (int32_T)varargin_1 - 1;
  for (k = 0; k <= i; k++) {
    c_st.site = &kb_emlrtRSI;
    d = eml_rand_mt19937ar(&c_st, moduleInstance->c_state);
    r->data[k] = d;
  }
}

static void randn(InstanceStruct_99HJ2LsbXT8ZQdi4PHECuF *moduleInstance, const
                  emlrtStack *sp, real_T varargin_1[2], emxArray_real_T *r)
{
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  int32_T i;
  int32_T k;
  real_T d;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &dk_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  b_st.site = &ek_emlrtRSI;
  c_st.site = &jb_emlrtRSI;
  i = r->size[0] * r->size[1];
  r->size[0] = (int32_T)varargin_1[0];
  r->size[1] = 1;
  emxEnsureCapacity_real_T(r, i);
  i = r->size[0] - 1;
  for (k = 0; k <= i; k++) {
    d_st.site = &fk_emlrtRSI;
    d = b_eml_rand_mt19937ar(&d_st, moduleInstance->c_state);
    r->data[k] = d;
  }
}

static void b_abs(emxArray_real_T *x, emxArray_real_T *y)
{
  int32_T nx;
  int32_T k;
  nx = x->size[0] - 1;
  k = y->size[0] * y->size[1];
  y->size[0] = x->size[0];
  y->size[1] = 1;
  emxEnsureCapacity_real_T(y, k);
  for (k = 0; k <= nx; k++) {
    y->data[k] = muDoubleScalarAbs(x->data[k]);
  }
}

static void b_DampedBFGSwGradientProjection_solveInternal(const emlrtStack *sp,
  robotics_core_internal_DampedBFGSwGradientProjection *obj, real_T xSol[2],
  b_robotics_core_internal_NLPSolverExitFlags *exitFlag, real_T *err, real_T
  *iter)
{
  emlrtStack st;
  emlrtStack b_st;
  real_T x[2];
  int32_T i;
  emxArray_real_T *grad;
  emxArray_real_T *unusedU1;
  robotics_manip_internal_IKExtraArgs *r;
  real_T cost;
  real_T unusedU0[36];
  robotics_manip_internal_IKExtraArgs *args;
  real_T b_cost;
  int32_T b_i;
  int32_T loop_ub;
  real_T H[4];
  emxArray_boolean_T *activeSet;
  emxArray_real_T *A;
  emxArray_real_T *alpha;
  emxArray_real_T *B;
  emxArray_int32_T *ii;
  real_T y[2];
  emxArray_real_T *b_y;
  emxArray_real_T *c_y;
  emxArray_real_T *b_A;
  emxArray_real_T *c_A;
  int32_T i1;
  emxArray_real_T *d_A;
  emxArray_real_T *e_A;
  emxArray_real_T *f_A;
  emxArray_real_T *g_A;
  int32_T end;
  int32_T k;
  int32_T n;
  int32_T i2;
  real_T d;
  emxArray_real_T *bIn;
  emxArray_int32_T *inactiveConstraintIndices;
  emxArray_real_T *gradNew;
  emxArray_int32_T *r1;
  emxArray_int32_T *r2;
  emxArray_int32_T *r3;
  emxArray_int32_T *r4;
  emxArray_int32_T *r5;
  emxArray_real_T *d_y;
  emxArray_real_T *b_b;
  emxArray_real_T *e_y;
  emxArray_boolean_T *b_bIn;
  emxArray_boolean_T *b_activeSet;
  emxArray_boolean_T *c_activeSet;
  emxArray_real_T *h_A;
  emxArray_real_T *i_A;
  emxArray_real_T *b_alpha;
  emxArray_real_T *c_alpha;
  emxArray_real_T *b_grad;
  real_T f_y;
  int32_T exitg2;
  robotics_core_internal_DampedBFGSwGradientProjection *b_obj;
  real_T beta;
  boolean_T flag;
  real_T V[4];
  real_T Hg[2];
  boolean_T guard1 = false;
  boolean_T guard2 = false;
  real_T sigma;
  boolean_T guard3 = false;
  int32_T idxl;
  real_T lambda;
  real_T b_gamma;
  static char_T cv[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'd', 'i', 'm', 'a',
    'g', 'r', 'e', 'e' };

  real_T b_x[2];
  robotics_manip_internal_IKExtraArgs *r6;
  real_T costNew;
  real_T b_costNew;
  static char_T cv1[36] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'a', 'u', 't', 'o', 'D', 'i', 'm', 'I', 'n', 'c', 'o',
    'm', 'p', 'a', 't', 'i', 'b', 'i', 'l', 'i', 't', 'y' };

  static char_T cv2[39] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'e', 'm', 'l', '_', 'm', 'i', 'n', '_', 'o', 'r', '_',
    'm', 'a', 'x', '_', 'v', 'a', 'r', 'D', 'i', 'm', 'Z', 'e', 'r', 'o' };

  real_T m;
  int32_T exitg1;
  boolean_T exitg3;
  robotics_manip_internal_IKExtraArgs *r7;
  real_T c_costNew;
  int32_T iv[2];
  int32_T g_y[2];
  real_T b_V[4];
  real_T P[4];
  static real_T h_y[4] = { 1.4901161193847656E-8, 0.0, 0.0,
    1.4901161193847656E-8 };

  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  for (i = 0; i < 2; i++) {
    x[i] = obj->SeedInternal[i];
  }

  emxInit_real_T1(&grad, 1);
  emxInit_real_T(&unusedU1, 2);
  st.site = &pf_emlrtRSI;
  SystemTimeProvider_reset(&obj->TimeObjInternal);
  st.site = &qf_emlrtRSI;
  d_IKHelpers_computeCost(&st, x, obj->ExtraArgs, &cost, unusedU0, unusedU1, &r);
  args = r;
  b_cost = cost;
  obj->ExtraArgs = args;
  st.site = &rf_emlrtRSI;
  args = obj->ExtraArgs;
  b_i = grad->size[0];
  grad->size[0] = args->GradTemp->size[0];
  emxEnsureCapacity_real_T1(grad, b_i);
  loop_ub = args->GradTemp->size[0];
  for (b_i = 0; b_i < loop_ub; b_i++) {
    grad->data[b_i] = args->GradTemp->data[b_i];
  }

  b_eye(H);
  emxInit_boolean_T(&activeSet, 1);
  emxInit_real_T(&A, 2);
  emxInit_real_T1(&alpha, 1);
  emxInit_real_T(&B, 2);
  emxInit_int32_T1(&ii, 1);
  if (obj->ConstraintsOn) {
    b_i = B->size[0] * B->size[1];
    B->size[0] = obj->ConstraintMatrix->size[0];
    B->size[1] = obj->ConstraintMatrix->size[1];
    emxEnsureCapacity_real_T(B, b_i);
    loop_ub = obj->ConstraintMatrix->size[0] * obj->ConstraintMatrix->size[1] -
      1;
    for (b_i = 0; b_i <= loop_ub; b_i++) {
      B->data[b_i] = obj->ConstraintMatrix->data[b_i];
    }

    st.site = &og_emlrtRSI;
    dynamic_size_checks(&st, B, B->size[0]);
    if (B->size[0] == 1) {
      b_i = alpha->size[0];
      alpha->size[0] = B->size[1];
      emxEnsureCapacity_real_T1(alpha, b_i);
      loop_ub = B->size[1];
      for (b_i = 0; b_i < loop_ub; b_i++) {
        alpha->data[b_i] = 0.0;
        end = B->size[0];
        for (i1 = 0; i1 < end; i1++) {
          alpha->data[b_i] += B->data[i1 + B->size[0] * b_i] * x[i1];
        }
      }
    } else {
      st.site = &ng_emlrtRSI;
      c_mtimes(B, x, alpha);
    }

    b_i = alpha->size[0];
    i1 = obj->ConstraintBound->size[0];
    emlrtSizeEqCheck1DR2012b(b_i, i1, &w_emlrtECI, sp);
    b_i = activeSet->size[0];
    activeSet->size[0] = alpha->size[0];
    emxEnsureCapacity_boolean_T(activeSet, b_i);
    loop_ub = alpha->size[0];
    for (b_i = 0; b_i < loop_ub; b_i++) {
      activeSet->data[b_i] = (alpha->data[b_i] >= obj->ConstraintBound->data[b_i]);
    }

    end = activeSet->size[0] - 1;
    n = 0;
    for (i = 0; i <= end; i++) {
      if (activeSet->data[i]) {
        n++;
      }
    }

    b_i = ii->size[0];
    ii->size[0] = n;
    emxEnsureCapacity_int32_T(ii, b_i);
    n = 0;
    for (i = 0; i <= end; i++) {
      if (activeSet->data[i]) {
        ii->data[n] = i + 1;
        n++;
      }
    }

    n = obj->ConstraintMatrix->size[1];
    loop_ub = obj->ConstraintMatrix->size[0];
    b_i = A->size[0] * A->size[1];
    A->size[0] = loop_ub;
    A->size[1] = ii->size[0];
    emxEnsureCapacity_real_T(A, b_i);
    end = ii->size[0];
    for (b_i = 0; b_i < end; b_i++) {
      for (i1 = 0; i1 < loop_ub; i1++) {
        i2 = ii->data[b_i];
        A->data[i1 + A->size[0] * b_i] = obj->ConstraintMatrix->data[i1 +
          obj->ConstraintMatrix->size[0] * (emlrtDynamicBoundsCheckR2012b(i2, 1,
          n, &xb_emlrtBCI, sp) - 1)];
      }
    }
  } else {
    y[0] = (real_T)obj->ConstraintBound->size[0];
    b_i = activeSet->size[0];
    activeSet->size[0] = (int32_T)y[0];
    emxEnsureCapacity_boolean_T(activeSet, b_i);
    loop_ub = (int32_T)y[0];
    for (b_i = 0; b_i < loop_ub; b_i++) {
      activeSet->data[b_i] = false;
    }

    A->size[0] = 2;
    A->size[1] = 0;
  }

  b_i = A->size[1] - 1;
  emxInit_real_T(&b_y, 2);
  emxInit_real_T(&c_y, 2);
  emxInit_real_T1(&b_A, 1);
  emxInit_real_T1(&c_A, 1);
  emxInit_real_T1(&d_A, 1);
  emxInit_real_T1(&e_A, 1);
  emxInit_real_T(&f_A, 2);
  emxInit_real_T1(&g_A, 1);
  for (k = 0; k <= b_i; k++) {
    i1 = A->size[1];
    emlrtDynamicBoundsCheckR2012b(k + 1, 1, i1, &wb_emlrtBCI, sp);
    i1 = A->size[0];
    loop_ub = A->size[0];
    i2 = e_A->size[0];
    e_A->size[0] = loop_ub;
    emxEnsureCapacity_real_T1(e_A, i2);
    for (i2 = 0; i2 < loop_ub; i2++) {
      e_A->data[i2] = A->data[i2 + A->size[0] * k];
    }

    st.site = &og_emlrtRSI;
    b_dynamic_size_checks(&st, e_A, i1);
    i1 = A->size[0];
    if (i1 == 1) {
      loop_ub = A->size[0];
      i1 = f_A->size[0] * f_A->size[1];
      f_A->size[0] = 1;
      f_A->size[1] = loop_ub;
      emxEnsureCapacity_real_T(f_A, i1);
      for (i1 = 0; i1 < loop_ub; i1++) {
        f_A->data[i1] = A->data[i1 + A->size[0] * k];
      }

      for (i1 = 0; i1 < 2; i1++) {
        y[i1] = 0.0;
        for (i2 = 0; i2 < 2; i2++) {
          f_y = y[i1] + f_A->data[i2] * H[i2 + (i1 << 1)];
          y[i1] = f_y;
        }
      }
    } else {
      loop_ub = A->size[0];
      i1 = d_A->size[0];
      d_A->size[0] = loop_ub;
      emxEnsureCapacity_real_T1(d_A, i1);
      for (i1 = 0; i1 < loop_ub; i1++) {
        d_A->data[i1] = A->data[i1 + A->size[0] * k];
      }

      d_mtimes(d_A, H, y);
    }

    i1 = A->size[0];
    loop_ub = A->size[0];
    i2 = c_A->size[0];
    c_A->size[0] = loop_ub;
    emxEnsureCapacity_real_T1(c_A, i2);
    for (i2 = 0; i2 < loop_ub; i2++) {
      c_A->data[i2] = A->data[i2 + A->size[0] * k];
    }

    st.site = &og_emlrtRSI;
    c_dynamic_size_checks(&st, c_A, i1);
    i1 = A->size[0];
    if (i1 == 1) {
      loop_ub = A->size[0];
      i1 = g_A->size[0];
      g_A->size[0] = loop_ub;
      emxEnsureCapacity_real_T1(g_A, i1);
      for (i1 = 0; i1 < loop_ub; i1++) {
        g_A->data[i1] = A->data[i1 + A->size[0] * k];
      }

      beta = 0.0;
      for (i1 = 0; i1 < 2; i1++) {
        beta += y[i1] * g_A->data[i1];
      }
    } else {
      loop_ub = A->size[0];
      i1 = b_A->size[0];
      b_A->size[0] = loop_ub;
      emxEnsureCapacity_real_T1(b_A, i1);
      for (i1 = 0; i1 < loop_ub; i1++) {
        b_A->data[i1] = A->data[i1 + A->size[0] * k];
      }

      beta = xdotu(y, b_A);
    }

    beta = 1.0 / beta;
    for (i1 = 0; i1 < 4; i1++) {
      V[i1] = beta * H[i1];
    }

    loop_ub = A->size[0];
    end = A->size[0];
    i1 = b_y->size[0] * b_y->size[1];
    b_y->size[0] = loop_ub;
    b_y->size[1] = end;
    emxEnsureCapacity_real_T(b_y, i1);
    for (i1 = 0; i1 < end; i1++) {
      for (i2 = 0; i2 < loop_ub; i2++) {
        b_y->data[i2 + b_y->size[0] * i1] = A->data[i2 + A->size[0] * k] *
          A->data[i1 + A->size[0] * k];
      }
    }

    st.site = &og_emlrtRSI;
    d_dynamic_size_checks(&st, b_y, b_y->size[0]);
    if (b_y->size[0] == 1) {
      i1 = c_y->size[0] * c_y->size[1];
      c_y->size[0] = 2;
      c_y->size[1] = b_y->size[1];
      emxEnsureCapacity_real_T(c_y, i1);
      for (i1 = 0; i1 < 2; i1++) {
        loop_ub = b_y->size[1];
        for (i2 = 0; i2 < loop_ub; i2++) {
          c_y->data[i1 + (i2 << 1)] = 0.0;
          for (n = 0; n < 2; n++) {
            c_y->data[i1 + (i2 << 1)] += V[i1 + (n << 1)] * b_y->data[n +
              b_y->size[0] * i2];
          }
        }
      }
    } else {
      st.site = &ng_emlrtRSI;
      e_mtimes(V, b_y, c_y);
    }

    st.site = &og_emlrtRSI;
    e_dynamic_size_checks(&st, c_y->size[1]);
    if (c_y->size[1] == 1) {
      for (i1 = 0; i1 < 2; i1++) {
        for (i2 = 0; i2 < 2; i2++) {
          V[i1 + (i2 << 1)] = 0.0;
          for (n = 0; n < 2; n++) {
            V[i1 + (i2 << 1)] += c_y->data[i1 + (n << 1)] * H[n + (i2 << 1)];
          }
        }
      }
    } else {
      f_mtimes(c_y, H, V);
    }

    for (i1 = 0; i1 < 4; i1++) {
      H[i1] -= V[i1];
    }
  }

  emxFree_real_T(&g_A);
  emxFree_real_T(&f_A);
  emxFree_real_T(&e_A);
  emxFree_real_T(&d_A);
  emxFree_real_T(&c_A);
  emxFree_real_T(&b_A);
  for (i = 0; i < 2; i++) {
    xSol[i] = x[i];
  }

  d = obj->MaxNumIterationInternal;
  emlrtForLoopVectorCheckR2012b(1.0, 1.0, d, mxDOUBLE_CLASS, (int32_T)d,
    &f_emlrtRTEI, sp);
  i = 0;
  emxInit_real_T1(&bIn, 1);
  emxInit_int32_T1(&inactiveConstraintIndices, 1);
  emxInit_real_T1(&gradNew, 1);
  emxInit_int32_T1(&r1, 1);
  emxInit_int32_T1(&r2, 1);
  emxInit_int32_T1(&r3, 1);
  emxInit_int32_T1(&r4, 1);
  emxInit_int32_T1(&r5, 1);
  emxInit_real_T(&d_y, 2);
  emxInit_real_T(&b_b, 2);
  emxInit_real_T(&e_y, 2);
  emxInit_boolean_T(&b_bIn, 1);
  emxInit_boolean_T(&b_activeSet, 1);
  emxInit_boolean_T(&c_activeSet, 1);
  emxInit_real_T(&h_A, 2);
  emxInit_real_T(&i_A, 2);
  emxInit_real_T(&b_alpha, 2);
  emxInit_real_T(&c_alpha, 2);
  emxInit_real_T(&b_grad, 2);
  do {
    exitg2 = 0;
    if (i <= (int32_T)d - 1) {
      st.site = &sf_emlrtRSI;
      b_obj = obj;
      b_st.site = &sf_emlrtRSI;
      beta = SystemTimeProvider_getElapsedTime(&b_st, &obj->TimeObjInternal);
      flag = (beta > b_obj->MaxTimeInternal);
      if (flag) {
        *exitFlag = robotics_core_internal_NLPSolverExitFlags_TimeLimitExceeded;
        st.site = &tf_emlrtRSI;
        *err = g_IKHelpers_evaluateSolution(&st, obj->ExtraArgs);
        *iter = (real_T)i + 1.0;
        exitg2 = 1;
      } else {
        if ((A->size[0] == 0) || (A->size[1] == 0)) {
          b_i = alpha->size[0];
          alpha->size[0] = 1;
          emxEnsureCapacity_real_T1(alpha, b_i);
          alpha->data[0] = 0.0;
        } else {
          st.site = &og_emlrtRSI;
          g_dynamic_size_checks(&st, A, A, A->size[0], A->size[0]);
          if (A->size[0] == 1) {
            b_i = b_y->size[0] * b_y->size[1];
            b_y->size[0] = A->size[1];
            b_y->size[1] = A->size[1];
            emxEnsureCapacity_real_T(b_y, b_i);
            loop_ub = A->size[1];
            for (b_i = 0; b_i < loop_ub; b_i++) {
              end = A->size[1];
              for (i1 = 0; i1 < end; i1++) {
                b_y->data[b_i + b_y->size[0] * i1] = 0.0;
                n = A->size[0];
                for (i2 = 0; i2 < n; i2++) {
                  b_y->data[b_i + b_y->size[0] * i1] += A->data[i2 + A->size[0] *
                    b_i] * A->data[i2 + A->size[0] * i1];
                }
              }
            }
          } else {
            st.site = &ng_emlrtRSI;
            g_mtimes(A, A, b_y);
          }

          b_i = i_A->size[0] * i_A->size[1];
          i_A->size[0] = A->size[1];
          i_A->size[1] = A->size[0];
          emxEnsureCapacity_real_T(i_A, b_i);
          loop_ub = A->size[0];
          for (b_i = 0; b_i < loop_ub; b_i++) {
            end = A->size[1];
            for (i1 = 0; i1 < end; i1++) {
              i_A->data[i1 + i_A->size[0] * b_i] = A->data[b_i + A->size[0] * i1];
            }
          }

          st.site = &uf_emlrtRSI;
          mldivide(&st, b_y, i_A, B);
          st.site = &og_emlrtRSI;
          h_dynamic_size_checks(&st, B, grad, B->size[1], grad->size[0]);
          if ((B->size[1] == 1) || (grad->size[0] == 1)) {
            b_i = alpha->size[0];
            alpha->size[0] = B->size[0];
            emxEnsureCapacity_real_T1(alpha, b_i);
            loop_ub = B->size[0];
            for (b_i = 0; b_i < loop_ub; b_i++) {
              alpha->data[b_i] = 0.0;
              end = B->size[1];
              for (i1 = 0; i1 < end; i1++) {
                alpha->data[b_i] += B->data[b_i + B->size[0] * i1] * grad->
                  data[i1];
              }
            }
          } else {
            st.site = &ng_emlrtRSI;
            h_mtimes(B, grad, alpha);
          }
        }

        st.site = &og_emlrtRSI;
        i_dynamic_size_checks(&st, grad, grad->size[0]);
        if (grad->size[0] == 1) {
          for (b_i = 0; b_i < 2; b_i++) {
            Hg[b_i] = 0.0;
            for (i1 = 0; i1 < 2; i1++) {
              sigma = Hg[b_i] + H[b_i + (i1 << 1)] * grad->data[i1];
              Hg[b_i] = sigma;
            }
          }
        } else {
          i_mtimes(H, grad, Hg);
        }

        st.site = &vf_emlrtRSI;
        if (b_DampedBFGSwGradientProjection_atLocalMinimum(&st, obj, Hg, alpha))
        {
          *exitFlag =
            robotics_core_internal_NLPSolverExitFlags_LocalMinimumFound;
          st.site = &wf_emlrtRSI;
          *err = h_IKHelpers_evaluateSolution(&st, obj->ExtraArgs);
          *iter = (real_T)i + 1.0;
          exitg2 = 1;
        } else {
          guard1 = false;
          guard2 = false;
          guard3 = false;
          if (obj->ConstraintsOn && ((A->size[0] != 0) && (A->size[1] != 0))) {
            st.site = &og_emlrtRSI;
            g_dynamic_size_checks(&st, A, A, A->size[0], A->size[0]);
            if (A->size[0] == 1) {
              b_i = b_y->size[0] * b_y->size[1];
              b_y->size[0] = A->size[1];
              b_y->size[1] = A->size[1];
              emxEnsureCapacity_real_T(b_y, b_i);
              loop_ub = A->size[1];
              for (b_i = 0; b_i < loop_ub; b_i++) {
                end = A->size[1];
                for (i1 = 0; i1 < end; i1++) {
                  b_y->data[b_i + b_y->size[0] * i1] = 0.0;
                  n = A->size[0];
                  for (i2 = 0; i2 < n; i2++) {
                    b_y->data[b_i + b_y->size[0] * i1] += A->data[i2 + A->size[0]
                      * b_i] * A->data[i2 + A->size[0] * i1];
                  }
                }
              }
            } else {
              st.site = &ng_emlrtRSI;
              g_mtimes(A, A, b_y);
            }

            st.site = &xf_emlrtRSI;
            b_inv(&st, b_y, B);
            st.site = &yf_emlrtRSI;
            diag(&st, B, gradNew);
            st.site = &yf_emlrtRSI;
            d_sqrt(&st, gradNew);
            if (!scalexpCompatible(alpha, gradNew)) {
              st.site = &tk_emlrtRSI;
              f_error(&st, c_emlrt_marshallOut(&st, cv), getString(&st,
                       b_message(&st, c_emlrt_marshallOut(&st, cv), &u_emlrtMCI),
                       &u_emlrtMCI), &u_emlrtMCI);
            }

            b_i = alpha->size[0];
            emxEnsureCapacity_real_T1(alpha, b_i);
            loop_ub = alpha->size[0];
            for (b_i = 0; b_i < loop_ub; b_i++) {
              alpha->data[b_i] /= gradNew->data[b_i];
            }

            if ((alpha->size[0] == 1) || (alpha->size[0] != 1)) {
            } else {
              st.site = &uk_emlrtRSI;
              f_error(&st, d_emlrt_marshallOut(&st, cv1), getString(&st,
                       b_message(&st, d_emlrt_marshallOut(&st, cv1), &v_emlrtMCI),
                       &v_emlrtMCI), &v_emlrtMCI);
            }

            if (!(alpha->size[0] >= 1)) {
              st.site = &sk_emlrtRSI;
              f_error(&st, b_emlrt_marshallOut(&st, cv2), getString(&st,
                       b_message(&st, b_emlrt_marshallOut(&st, cv2), &w_emlrtMCI),
                       &w_emlrtMCI), &w_emlrtMCI);
            }

            n = alpha->size[0];
            if (alpha->size[0] <= 2) {
              if (alpha->size[0] == 1) {
                beta = alpha->data[0];
                idxl = 0;
              } else if ((alpha->data[0] < alpha->data[1]) ||
                         (muDoubleScalarIsNaN(alpha->data[0]) &&
                          (!muDoubleScalarIsNaN(alpha->data[1])))) {
                beta = alpha->data[1];
                idxl = 1;
              } else {
                beta = alpha->data[0];
                idxl = 0;
              }
            } else {
              if (!muDoubleScalarIsNaN(alpha->data[0])) {
                idxl = 1;
              } else {
                idxl = 0;
                k = 2;
                exitg3 = false;
                while ((!exitg3) && (k <= alpha->size[0])) {
                  if (!muDoubleScalarIsNaN(alpha->data[k - 1])) {
                    idxl = k;
                    exitg3 = true;
                  } else {
                    k++;
                  }
                }
              }

              if (idxl == 0) {
                beta = alpha->data[0];
              } else {
                beta = alpha->data[idxl - 1];
                for (k = idxl + 1; k <= n; k++) {
                  if (beta < alpha->data[k - 1]) {
                    beta = alpha->data[k - 1];
                    idxl = k;
                  }
                }

                idxl--;
              }
            }

            if (d_norm(Hg) < 0.5 * beta) {
              st.site = &ff_emlrtRSI;
              b_eml_find(&st, activeSet, ii);
              b_i = alpha->size[0];
              alpha->size[0] = ii->size[0];
              emxEnsureCapacity_real_T1(alpha, b_i);
              loop_ub = ii->size[0];
              for (b_i = 0; b_i < loop_ub; b_i++) {
                alpha->data[b_i] = (real_T)ii->data[b_i];
              }

              b_i = alpha->size[0];
              emlrtDynamicBoundsCheckR2012b(idxl + 1, 1, b_i, &vb_emlrtBCI, sp);
              b_i = activeSet->size[0];
              i1 = (int32_T)alpha->data[idxl];
              activeSet->data[emlrtDynamicBoundsCheckR2012b(i1, 1, b_i,
                &bc_emlrtBCI, sp) - 1] = false;
              end = activeSet->size[0] - 1;
              n = 0;
              for (k = 0; k <= end; k++) {
                if (activeSet->data[k]) {
                  n++;
                }
              }

              b_i = r3->size[0];
              r3->size[0] = n;
              emxEnsureCapacity_int32_T(r3, b_i);
              n = 0;
              for (k = 0; k <= end; k++) {
                if (activeSet->data[k]) {
                  r3->data[n] = k + 1;
                  n++;
                }
              }

              n = obj->ConstraintMatrix->size[1];
              loop_ub = obj->ConstraintMatrix->size[0];
              b_i = A->size[0] * A->size[1];
              A->size[0] = loop_ub;
              A->size[1] = r3->size[0];
              emxEnsureCapacity_real_T(A, b_i);
              end = r3->size[0];
              for (b_i = 0; b_i < end; b_i++) {
                for (i1 = 0; i1 < loop_ub; i1++) {
                  i2 = r3->data[b_i];
                  A->data[i1 + A->size[0] * b_i] = obj->ConstraintMatrix->
                    data[i1 + obj->ConstraintMatrix->size[0] *
                    (emlrtDynamicBoundsCheckR2012b(i2, 1, n, &cc_emlrtBCI, sp) -
                     1)];
                }
              }

              st.site = &og_emlrtRSI;
              g_dynamic_size_checks(&st, A, A, A->size[0], A->size[0]);
              if ((A->size[0] == 1) || (A->size[0] == 1)) {
                b_i = b_y->size[0] * b_y->size[1];
                b_y->size[0] = A->size[1];
                b_y->size[1] = A->size[1];
                emxEnsureCapacity_real_T(b_y, b_i);
                loop_ub = A->size[1];
                for (b_i = 0; b_i < loop_ub; b_i++) {
                  end = A->size[1];
                  for (i1 = 0; i1 < end; i1++) {
                    b_y->data[b_i + b_y->size[0] * i1] = 0.0;
                    n = A->size[0];
                    for (i2 = 0; i2 < n; i2++) {
                      b_y->data[b_i + b_y->size[0] * i1] += A->data[i2 + A->
                        size[0] * b_i] * A->data[i2 + A->size[0] * i1];
                    }
                  }
                }
              } else {
                st.site = &ng_emlrtRSI;
                g_mtimes(A, A, b_y);
              }

              b_i = h_A->size[0] * h_A->size[1];
              h_A->size[0] = A->size[1];
              h_A->size[1] = A->size[0];
              emxEnsureCapacity_real_T(h_A, b_i);
              loop_ub = A->size[0];
              for (b_i = 0; b_i < loop_ub; b_i++) {
                end = A->size[1];
                for (i1 = 0; i1 < end; i1++) {
                  h_A->data[i1 + h_A->size[0] * b_i] = A->data[b_i + A->size[0] *
                    i1];
                }
              }

              st.site = &ag_emlrtRSI;
              mldivide(&st, b_y, h_A, b_b);
              st.site = &og_emlrtRSI;
              g_dynamic_size_checks(&st, A, b_b, A->size[1], b_b->size[0]);
              if ((A->size[1] == 1) || (b_b->size[0] == 1)) {
                b_i = B->size[0] * B->size[1];
                B->size[0] = A->size[0];
                B->size[1] = b_b->size[1];
                emxEnsureCapacity_real_T(B, b_i);
                loop_ub = A->size[0];
                for (b_i = 0; b_i < loop_ub; b_i++) {
                  end = b_b->size[1];
                  for (i1 = 0; i1 < end; i1++) {
                    B->data[b_i + B->size[0] * i1] = 0.0;
                    n = A->size[1];
                    for (i2 = 0; i2 < n; i2++) {
                      B->data[b_i + B->size[0] * i1] += A->data[b_i + A->size[0]
                        * i2] * b_b->data[i2 + b_b->size[0] * i1];
                    }
                  }
                }
              } else {
                st.site = &ng_emlrtRSI;
                j_mtimes(A, b_b, B);
              }

              for (b_i = 0; b_i < 2; b_i++) {
                iv[b_i] = 2;
              }

              for (b_i = 0; b_i < 2; b_i++) {
                g_y[b_i] = B->size[b_i];
              }

              emlrtSizeEqCheckNDR2012b(iv, g_y, &v_emlrtECI, sp);
              b_eye(P);
              for (b_i = 0; b_i < 4; b_i++) {
                beta = P[b_i] - B->data[b_i];
                P[b_i] = beta;
              }

              sigma = alpha->data[idxl];
              loop_ub = obj->ConstraintMatrix->size[0];
              b_i = obj->ConstraintMatrix->size[1];
              b_i = emlrtDynamicBoundsCheckR2012b((int32_T)sigma, 1, b_i,
                &ub_emlrtBCI, sp);
              i1 = alpha->size[0];
              alpha->size[0] = loop_ub;
              emxEnsureCapacity_real_T1(alpha, i1);
              for (i1 = 0; i1 < loop_ub; i1++) {
                alpha->data[i1] = obj->ConstraintMatrix->data[i1 +
                  obj->ConstraintMatrix->size[0] * (b_i - 1)];
              }

              st.site = &og_emlrtRSI;
              b_dynamic_size_checks(&st, alpha, alpha->size[0]);
              if (alpha->size[0] == 1) {
                b_i = c_alpha->size[0] * c_alpha->size[1];
                c_alpha->size[0] = 1;
                c_alpha->size[1] = alpha->size[0];
                emxEnsureCapacity_real_T(c_alpha, b_i);
                loop_ub = alpha->size[0];
                for (b_i = 0; b_i < loop_ub; b_i++) {
                  c_alpha->data[b_i] = alpha->data[b_i];
                }

                for (b_i = 0; b_i < 2; b_i++) {
                  y[b_i] = 0.0;
                  for (i1 = 0; i1 < 2; i1++) {
                    f_y = y[b_i] + c_alpha->data[i1] * P[i1 + (b_i << 1)];
                    y[b_i] = f_y;
                  }
                }
              } else {
                d_mtimes(alpha, P, y);
              }

              st.site = &og_emlrtRSI;
              c_dynamic_size_checks(&st, alpha, alpha->size[0]);
              if (alpha->size[0] == 1) {
                f_y = 0.0;
                for (b_i = 0; b_i < 2; b_i++) {
                  f_y += y[b_i] * alpha->data[b_i];
                }
              } else {
                f_y = xdotu(y, alpha);
              }

              beta = 1.0 / f_y;
              for (b_i = 0; b_i < 4; b_i++) {
                V[b_i] = beta * P[b_i];
              }

              b_i = b_y->size[0] * b_y->size[1];
              b_y->size[0] = alpha->size[0];
              b_y->size[1] = alpha->size[0];
              emxEnsureCapacity_real_T(b_y, b_i);
              loop_ub = alpha->size[0];
              for (b_i = 0; b_i < loop_ub; b_i++) {
                end = alpha->size[0];
                for (i1 = 0; i1 < end; i1++) {
                  b_y->data[i1 + b_y->size[0] * b_i] = alpha->data[i1] *
                    alpha->data[b_i];
                }
              }

              st.site = &og_emlrtRSI;
              d_dynamic_size_checks(&st, b_y, b_y->size[0]);
              if (b_y->size[0] == 1) {
                b_i = c_y->size[0] * c_y->size[1];
                c_y->size[0] = 2;
                c_y->size[1] = b_y->size[1];
                emxEnsureCapacity_real_T(c_y, b_i);
                for (b_i = 0; b_i < 2; b_i++) {
                  loop_ub = b_y->size[1];
                  for (i1 = 0; i1 < loop_ub; i1++) {
                    c_y->data[b_i + (i1 << 1)] = 0.0;
                    for (i2 = 0; i2 < 2; i2++) {
                      c_y->data[b_i + (i1 << 1)] += V[b_i + (i2 << 1)] *
                        b_y->data[i2 + b_y->size[0] * i1];
                    }
                  }
                }
              } else {
                st.site = &ng_emlrtRSI;
                e_mtimes(V, b_y, c_y);
              }

              st.site = &og_emlrtRSI;
              e_dynamic_size_checks(&st, c_y->size[1]);
              if (c_y->size[1] == 1) {
                for (b_i = 0; b_i < 2; b_i++) {
                  for (i1 = 0; i1 < 2; i1++) {
                    V[b_i + (i1 << 1)] = 0.0;
                    for (i2 = 0; i2 < 2; i2++) {
                      V[b_i + (i1 << 1)] += c_y->data[b_i + (i2 << 1)] * P[i2 +
                        (i1 << 1)];
                    }
                  }
                }
              } else {
                f_mtimes(c_y, P, V);
              }

              for (b_i = 0; b_i < 4; b_i++) {
                H[b_i] += V[b_i];
              }

              i++;
            } else {
              guard3 = true;
            }
          } else {
            guard3 = true;
          }

          if (guard3) {
            for (b_i = 0; b_i < 2; b_i++) {
              Hg[b_i] = -Hg[b_i];
            }

            idxl = -1;
            if (obj->ConstraintsOn) {
              b_i = c_activeSet->size[0];
              c_activeSet->size[0] = activeSet->size[0];
              emxEnsureCapacity_boolean_T(c_activeSet, b_i);
              loop_ub = activeSet->size[0];
              for (b_i = 0; b_i < loop_ub; b_i++) {
                c_activeSet->data[b_i] = !activeSet->data[b_i];
              }

              st.site = &bg_emlrtRSI;
              if (any(&st, c_activeSet)) {
                end = activeSet->size[0] - 1;
                n = 0;
                for (k = 0; k <= end; k++) {
                  if (!activeSet->data[k]) {
                    n++;
                  }
                }

                b_i = r1->size[0];
                r1->size[0] = n;
                emxEnsureCapacity_int32_T(r1, b_i);
                n = 0;
                for (k = 0; k <= end; k++) {
                  if (!activeSet->data[k]) {
                    r1->data[n] = k + 1;
                    n++;
                  }
                }

                n = obj->ConstraintBound->size[0];
                b_i = bIn->size[0];
                bIn->size[0] = r1->size[0];
                emxEnsureCapacity_real_T1(bIn, b_i);
                loop_ub = r1->size[0];
                for (b_i = 0; b_i < loop_ub; b_i++) {
                  i1 = r1->data[b_i];
                  bIn->data[b_i] = obj->ConstraintBound->
                    data[emlrtDynamicBoundsCheckR2012b(i1, 1, n, &yb_emlrtBCI,
                    sp) - 1];
                }

                end = activeSet->size[0] - 1;
                n = 0;
                for (k = 0; k <= end; k++) {
                  if (!activeSet->data[k]) {
                    n++;
                  }
                }

                b_i = r2->size[0];
                r2->size[0] = n;
                emxEnsureCapacity_int32_T(r2, b_i);
                n = 0;
                for (k = 0; k <= end; k++) {
                  if (!activeSet->data[k]) {
                    r2->data[n] = k + 1;
                    n++;
                  }
                }

                n = obj->ConstraintMatrix->size[1];
                loop_ub = obj->ConstraintMatrix->size[0];
                b_i = B->size[0] * B->size[1];
                B->size[0] = loop_ub;
                B->size[1] = r2->size[0];
                emxEnsureCapacity_real_T(B, b_i);
                end = r2->size[0];
                for (b_i = 0; b_i < end; b_i++) {
                  for (i1 = 0; i1 < loop_ub; i1++) {
                    i2 = r2->data[b_i];
                    B->data[i1 + B->size[0] * b_i] = obj->ConstraintMatrix->
                      data[i1 + obj->ConstraintMatrix->size[0] *
                      (emlrtDynamicBoundsCheckR2012b(i2, 1, n, &ac_emlrtBCI, sp)
                       - 1)];
                  }
                }

                b_i = b_activeSet->size[0];
                b_activeSet->size[0] = activeSet->size[0];
                emxEnsureCapacity_boolean_T(b_activeSet, b_i);
                loop_ub = activeSet->size[0];
                for (b_i = 0; b_i < loop_ub; b_i++) {
                  b_activeSet->data[b_i] = !activeSet->data[b_i];
                }

                st.site = &ff_emlrtRSI;
                b_eml_find(&st, b_activeSet, ii);
                b_i = inactiveConstraintIndices->size[0];
                inactiveConstraintIndices->size[0] = ii->size[0];
                emxEnsureCapacity_int32_T(inactiveConstraintIndices, b_i);
                loop_ub = ii->size[0];
                for (b_i = 0; b_i < loop_ub; b_i++) {
                  inactiveConstraintIndices->data[b_i] = ii->data[b_i];
                }

                st.site = &og_emlrtRSI;
                dynamic_size_checks(&st, B, B->size[0]);
                if (B->size[0] == 1) {
                  b_i = alpha->size[0];
                  alpha->size[0] = B->size[1];
                  emxEnsureCapacity_real_T1(alpha, b_i);
                  loop_ub = B->size[1];
                  for (b_i = 0; b_i < loop_ub; b_i++) {
                    alpha->data[b_i] = 0.0;
                    end = B->size[0];
                    for (i1 = 0; i1 < end; i1++) {
                      alpha->data[b_i] += B->data[i1 + B->size[0] * b_i] * x[i1];
                    }
                  }
                } else {
                  st.site = &ng_emlrtRSI;
                  c_mtimes(B, x, alpha);
                }

                b_i = bIn->size[0];
                i1 = alpha->size[0];
                emlrtSizeEqCheck1DR2012b(b_i, i1, &u_emlrtECI, sp);
                st.site = &og_emlrtRSI;
                dynamic_size_checks(&st, B, B->size[0]);
                if (B->size[0] == 1) {
                  b_i = gradNew->size[0];
                  gradNew->size[0] = B->size[1];
                  emxEnsureCapacity_real_T1(gradNew, b_i);
                  loop_ub = B->size[1];
                  for (b_i = 0; b_i < loop_ub; b_i++) {
                    gradNew->data[b_i] = 0.0;
                    end = B->size[0];
                    for (i1 = 0; i1 < end; i1++) {
                      gradNew->data[b_i] += B->data[i1 + B->size[0] * b_i] *
                        Hg[i1];
                    }
                  }
                } else {
                  st.site = &ng_emlrtRSI;
                  c_mtimes(B, Hg, gradNew);
                }

                b_i = bIn->size[0];
                emxEnsureCapacity_real_T1(bIn, b_i);
                loop_ub = bIn->size[0];
                for (b_i = 0; b_i < loop_ub; b_i++) {
                  bIn->data[b_i] -= alpha->data[b_i];
                }

                if (!scalexpCompatible(bIn, gradNew)) {
                  st.site = &tk_emlrtRSI;
                  f_error(&st, c_emlrt_marshallOut(&st, cv), getString(&st,
                           b_message(&st, c_emlrt_marshallOut(&st, cv),
                                     &u_emlrtMCI), &u_emlrtMCI), &u_emlrtMCI);
                }

                b_i = bIn->size[0];
                emxEnsureCapacity_real_T1(bIn, b_i);
                loop_ub = bIn->size[0];
                for (b_i = 0; b_i < loop_ub; b_i++) {
                  bIn->data[b_i] /= gradNew->data[b_i];
                }

                b_i = b_bIn->size[0];
                b_bIn->size[0] = bIn->size[0];
                emxEnsureCapacity_boolean_T(b_bIn, b_i);
                loop_ub = bIn->size[0];
                for (b_i = 0; b_i < loop_ub; b_i++) {
                  b_bIn->data[b_i] = (bIn->data[b_i] > 0.0);
                }

                st.site = &ff_emlrtRSI;
                b_eml_find(&st, b_bIn, ii);
                b_i = alpha->size[0];
                alpha->size[0] = ii->size[0];
                emxEnsureCapacity_real_T1(alpha, b_i);
                loop_ub = ii->size[0];
                for (b_i = 0; b_i < loop_ub; b_i++) {
                  alpha->data[b_i] = (real_T)ii->data[b_i];
                }

                if (alpha->size[0] != 0) {
                  end = bIn->size[0] - 1;
                  n = 0;
                  for (k = 0; k <= end; k++) {
                    if (bIn->data[k] > 0.0) {
                      n++;
                    }
                  }

                  b_i = r4->size[0];
                  r4->size[0] = n;
                  emxEnsureCapacity_int32_T(r4, b_i);
                  n = 0;
                  for (k = 0; k <= end; k++) {
                    if (bIn->data[k] > 0.0) {
                      r4->data[n] = k + 1;
                      n++;
                    }
                  }

                  n = bIn->size[0];
                  loop_ub = r4->size[0];
                  for (b_i = 0; b_i < loop_ub; b_i++) {
                    i1 = r4->data[b_i];
                    emlrtDynamicBoundsCheckR2012b(i1, 1, n, &fc_emlrtBCI, sp);
                  }

                  if ((r4->size[0] == 1) || (r4->size[0] != 1)) {
                  } else {
                    st.site = &uk_emlrtRSI;
                    f_error(&st, d_emlrt_marshallOut(&st, cv1), getString(&st,
                             b_message(&st, d_emlrt_marshallOut(&st, cv1),
                                       &v_emlrtMCI), &v_emlrtMCI), &v_emlrtMCI);
                  }

                  if (!(r4->size[0] >= 1)) {
                    st.site = &sk_emlrtRSI;
                    f_error(&st, b_emlrt_marshallOut(&st, cv2), getString(&st,
                             b_message(&st, b_emlrt_marshallOut(&st, cv2),
                                       &w_emlrtMCI), &w_emlrtMCI), &w_emlrtMCI);
                  }

                  n = r4->size[0];
                  if (r4->size[0] <= 2) {
                    if (r4->size[0] == 1) {
                      lambda = bIn->data[r4->data[0] - 1];
                      idxl = 1;
                    } else if ((bIn->data[r4->data[0] - 1] > bIn->data[r4->data
                                [1] - 1]) || (muDoubleScalarIsNaN(bIn->data
                                 [r4->data[0] - 1]) && (!muDoubleScalarIsNaN
                                 (bIn->data[r4->data[1] - 1])))) {
                      lambda = bIn->data[r4->data[1] - 1];
                      idxl = 2;
                    } else {
                      lambda = bIn->data[r4->data[0] - 1];
                      idxl = 1;
                    }
                  } else {
                    if (!muDoubleScalarIsNaN(bIn->data[r4->data[0] - 1])) {
                      idxl = 1;
                    } else {
                      idxl = 0;
                      k = 2;
                      exitg3 = false;
                      while ((!exitg3) && (k <= r4->size[0])) {
                        if (!muDoubleScalarIsNaN(bIn->data[r4->data[k - 1] - 1]))
                        {
                          idxl = k;
                          exitg3 = true;
                        } else {
                          k++;
                        }
                      }
                    }

                    if (idxl == 0) {
                      lambda = bIn->data[r4->data[0] - 1];
                      idxl = 1;
                    } else {
                      lambda = bIn->data[r4->data[idxl - 1] - 1];
                      for (k = idxl + 1; k <= n; k++) {
                        if (lambda > bIn->data[r4->data[k - 1] - 1]) {
                          lambda = bIn->data[r4->data[k - 1] - 1];
                          idxl = k;
                        }
                      }
                    }
                  }

                  b_i = inactiveConstraintIndices->size[0];
                  i1 = alpha->size[0];
                  i1 = (int32_T)alpha->data[emlrtDynamicBoundsCheckR2012b(idxl,
                    1, i1, &gc_emlrtBCI, sp) - 1];
                  idxl = inactiveConstraintIndices->
                    data[emlrtDynamicBoundsCheckR2012b(i1, 1, b_i, &gc_emlrtBCI,
                    sp) - 1];
                } else {
                  lambda = 0.0;
                }
              } else {
                lambda = 0.0;
              }
            } else {
              lambda = 0.0;
            }

            if (lambda > 0.0) {
              b_gamma = muDoubleScalarMin(1.0, lambda);
            } else {
              b_gamma = 1.0;
            }

            beta = obj->ArmijoRuleBeta;
            sigma = obj->ArmijoRuleSigma;
            for (b_i = 0; b_i < 2; b_i++) {
              b_x[b_i] = x[b_i] + b_gamma * Hg[b_i];
            }

            st.site = &cg_emlrtRSI;
            e_IKHelpers_computeCost(&st, b_x, obj->ExtraArgs, &b_costNew,
              unusedU0, unusedU1, &r6);
            args = r6;
            costNew = b_costNew;
            obj->ExtraArgs = args;
            m = 0.0;
            do {
              exitg1 = 0;
              b_i = d_y->size[0] * d_y->size[1];
              d_y->size[0] = 1;
              d_y->size[1] = grad->size[0];
              emxEnsureCapacity_real_T(d_y, b_i);
              loop_ub = grad->size[0];
              for (b_i = 0; b_i < loop_ub; b_i++) {
                d_y->data[b_i] = -sigma * grad->data[b_i];
              }

              for (b_i = 0; b_i < 2; b_i++) {
                y[b_i] = b_gamma * Hg[b_i];
              }

              st.site = &og_emlrtRSI;
              j_dynamic_size_checks(&st, d_y, d_y->size[1]);
              if (d_y->size[1] == 1) {
                f_y = 0.0;
                for (b_i = 0; b_i < 2; b_i++) {
                  f_y += d_y->data[b_i] * y[b_i];
                }
              } else {
                f_y = k_mtimes(d_y, y);
              }

              if (b_cost - costNew < f_y) {
                st.site = &dg_emlrtRSI;
                flag = (b_gamma < obj->StepTolerance);
                if (flag) {
                  *exitFlag =
                    robotics_core_internal_NLPSolverExitFlags_StepSizeBelowMinimum;
                  st.site = &eg_emlrtRSI;
                  *err = i_IKHelpers_evaluateSolution(&st, obj->ExtraArgs);
                  *iter = (real_T)i + 1.0;
                  exitg1 = 1;
                } else {
                  b_gamma *= beta;
                  m++;
                  for (b_i = 0; b_i < 2; b_i++) {
                    b_x[b_i] = x[b_i] + b_gamma * Hg[b_i];
                  }

                  st.site = &fg_emlrtRSI;
                  f_IKHelpers_computeCost(&st, b_x, obj->ExtraArgs, &c_costNew,
                    unusedU0, unusedU1, &r7);
                  args = r7;
                  costNew = c_costNew;
                  obj->ExtraArgs = args;
                }
              } else {
                for (k = 0; k < 2; k++) {
                  xSol[k] = x[k] + b_gamma * Hg[k];
                }

                st.site = &gg_emlrtRSI;
                args = obj->ExtraArgs;
                b_i = gradNew->size[0];
                gradNew->size[0] = args->GradTemp->size[0];
                emxEnsureCapacity_real_T1(gradNew, b_i);
                loop_ub = args->GradTemp->size[0];
                for (b_i = 0; b_i < loop_ub; b_i++) {
                  gradNew->data[b_i] = args->GradTemp->data[b_i];
                }

                exitg1 = 2;
              }
            } while (exitg1 == 0);

            if (exitg1 == 1) {
              exitg2 = 1;
            } else if (m == 0.0) {
              sigma = 2.2204460492503131E-16;
              st.site = &hg_emlrtRSI;
              b_sqrt(&st, &sigma);
              if (muDoubleScalarAbs(b_gamma - lambda) < 1.4901161193847656E-8) {
                loop_ub = obj->ConstraintMatrix->size[0];
                b_i = obj->ConstraintMatrix->size[1];
                n = emlrtDynamicBoundsCheckR2012b(idxl, 1, b_i, &tb_emlrtBCI, sp);
                b_i = alpha->size[0];
                alpha->size[0] = loop_ub;
                emxEnsureCapacity_real_T1(alpha, b_i);
                for (b_i = 0; b_i < loop_ub; b_i++) {
                  alpha->data[b_i] = obj->ConstraintMatrix->data[b_i +
                    obj->ConstraintMatrix->size[0] * (n - 1)];
                }

                b_i = activeSet->size[0];
                activeSet->data[emlrtDynamicBoundsCheckR2012b(idxl, 1, b_i,
                  &dc_emlrtBCI, sp) - 1] = true;
                end = activeSet->size[0] - 1;
                n = 0;
                for (k = 0; k <= end; k++) {
                  if (activeSet->data[k]) {
                    n++;
                  }
                }

                b_i = r5->size[0];
                r5->size[0] = n;
                emxEnsureCapacity_int32_T(r5, b_i);
                n = 0;
                for (k = 0; k <= end; k++) {
                  if (activeSet->data[k]) {
                    r5->data[n] = k + 1;
                    n++;
                  }
                }

                n = obj->ConstraintMatrix->size[1];
                loop_ub = obj->ConstraintMatrix->size[0];
                b_i = A->size[0] * A->size[1];
                A->size[0] = loop_ub;
                A->size[1] = r5->size[0];
                emxEnsureCapacity_real_T(A, b_i);
                end = r5->size[0];
                for (b_i = 0; b_i < end; b_i++) {
                  for (i1 = 0; i1 < loop_ub; i1++) {
                    i2 = r5->data[b_i];
                    A->data[i1 + A->size[0] * b_i] = obj->ConstraintMatrix->
                      data[i1 + obj->ConstraintMatrix->size[0] *
                      (emlrtDynamicBoundsCheckR2012b(i2, 1, n, &ec_emlrtBCI, sp)
                       - 1)];
                  }
                }

                st.site = &og_emlrtRSI;
                b_dynamic_size_checks(&st, alpha, alpha->size[0]);
                if (alpha->size[0] == 1) {
                  b_i = b_alpha->size[0] * b_alpha->size[1];
                  b_alpha->size[0] = 1;
                  b_alpha->size[1] = alpha->size[0];
                  emxEnsureCapacity_real_T(b_alpha, b_i);
                  loop_ub = alpha->size[0];
                  for (b_i = 0; b_i < loop_ub; b_i++) {
                    b_alpha->data[b_i] = alpha->data[b_i];
                  }

                  for (b_i = 0; b_i < 2; b_i++) {
                    y[b_i] = 0.0;
                    for (i1 = 0; i1 < 2; i1++) {
                      f_y = y[b_i] + b_alpha->data[i1] * H[i1 + (b_i << 1)];
                      y[b_i] = f_y;
                    }
                  }
                } else {
                  d_mtimes(alpha, H, y);
                }

                st.site = &og_emlrtRSI;
                c_dynamic_size_checks(&st, alpha, alpha->size[0]);
                if (alpha->size[0] == 1) {
                  f_y = 0.0;
                  for (b_i = 0; b_i < 2; b_i++) {
                    f_y += y[b_i] * alpha->data[b_i];
                  }
                } else {
                  f_y = xdotu(y, alpha);
                }

                b_i = b_y->size[0] * b_y->size[1];
                b_y->size[0] = alpha->size[0];
                b_y->size[1] = alpha->size[0];
                emxEnsureCapacity_real_T(b_y, b_i);
                loop_ub = alpha->size[0];
                for (b_i = 0; b_i < loop_ub; b_i++) {
                  end = alpha->size[0];
                  for (i1 = 0; i1 < end; i1++) {
                    b_y->data[i1 + b_y->size[0] * b_i] = alpha->data[i1] *
                      alpha->data[b_i];
                  }
                }

                st.site = &og_emlrtRSI;
                k_dynamic_size_checks(&st, b_y, b_y->size[1]);
                if (b_y->size[1] == 1) {
                  b_i = e_y->size[0] * e_y->size[1];
                  e_y->size[0] = b_y->size[0];
                  e_y->size[1] = 2;
                  emxEnsureCapacity_real_T(e_y, b_i);
                  loop_ub = b_y->size[0];
                  for (b_i = 0; b_i < loop_ub; b_i++) {
                    for (i1 = 0; i1 < 2; i1++) {
                      e_y->data[b_i + e_y->size[0] * i1] = 0.0;
                      end = b_y->size[1];
                      for (i2 = 0; i2 < end; i2++) {
                        e_y->data[b_i + e_y->size[0] * i1] += b_y->data[b_i +
                          b_y->size[0] * i2] * H[i2 + (i1 << 1)];
                      }
                    }
                  }
                } else {
                  st.site = &ng_emlrtRSI;
                  l_mtimes(b_y, H, e_y);
                }

                st.site = &og_emlrtRSI;
                l_dynamic_size_checks(&st, e_y->size[0]);
                if (e_y->size[0] == 1) {
                  for (b_i = 0; b_i < 2; b_i++) {
                    for (i1 = 0; i1 < 2; i1++) {
                      V[b_i + (i1 << 1)] = 0.0;
                      for (i2 = 0; i2 < 2; i2++) {
                        V[b_i + (i1 << 1)] += H[b_i + (i2 << 1)] * e_y->data[i2
                          + (i1 << 1)];
                      }
                    }
                  }
                } else {
                  m_mtimes(H, e_y, V);
                }

                beta = 1.0 / f_y;
                for (b_i = 0; b_i < 4; b_i++) {
                  H[b_i] -= beta * V[b_i];
                }

                guard1 = true;
              } else {
                guard2 = true;
              }
            } else {
              guard2 = true;
            }
          }

          if (guard2) {
            b_i = gradNew->size[0];
            i1 = grad->size[0];
            emlrtSizeEqCheck1DR2012b(b_i, i1, &t_emlrtECI, sp);
            b_i = grad->size[0];
            grad->size[0] = gradNew->size[0];
            emxEnsureCapacity_real_T1(grad, b_i);
            loop_ub = gradNew->size[0];
            for (b_i = 0; b_i < loop_ub; b_i++) {
              grad->data[b_i] = gradNew->data[b_i] - grad->data[b_i];
            }

            st.site = &og_emlrtRSI;
            m_dynamic_size_checks(&st, grad, grad->size[0]);
            if (grad->size[0] == 1) {
              sigma = 0.0;
              for (b_i = 0; b_i < 2; b_i++) {
                sigma += Hg[b_i] * grad->data[b_i];
              }
            } else {
              sigma = n_mtimes(Hg, grad);
            }

            b_i = d_y->size[0] * d_y->size[1];
            d_y->size[0] = 1;
            d_y->size[1] = grad->size[0];
            emxEnsureCapacity_real_T(d_y, b_i);
            loop_ub = grad->size[0];
            for (b_i = 0; b_i < loop_ub; b_i++) {
              d_y->data[b_i] = 0.2 * grad->data[b_i];
            }

            st.site = &og_emlrtRSI;
            n_dynamic_size_checks(&st, d_y, d_y->size[1]);
            if (d_y->size[1] == 1) {
              for (b_i = 0; b_i < 2; b_i++) {
                y[b_i] = 0.0;
                for (i1 = 0; i1 < 2; i1++) {
                  f_y = y[b_i] + d_y->data[i1] * H[i1 + (b_i << 1)];
                  y[b_i] = f_y;
                }
              }
            } else {
              REFxGEMM(d_y, H, y);
            }

            st.site = &og_emlrtRSI;
            c_dynamic_size_checks(&st, grad, grad->size[0]);
            if (grad->size[0] == 1) {
              f_y = 0.0;
              for (b_i = 0; b_i < 2; b_i++) {
                f_y += y[b_i] * grad->data[b_i];
              }
            } else {
              f_y = xdotu(y, grad);
            }

            if (sigma < f_y) {
              b_i = d_y->size[0] * d_y->size[1];
              d_y->size[0] = 1;
              d_y->size[1] = grad->size[0];
              emxEnsureCapacity_real_T(d_y, b_i);
              loop_ub = grad->size[0];
              for (b_i = 0; b_i < loop_ub; b_i++) {
                d_y->data[b_i] = 0.8 * grad->data[b_i];
              }

              st.site = &og_emlrtRSI;
              n_dynamic_size_checks(&st, d_y, d_y->size[1]);
              if (d_y->size[1] == 1) {
                for (b_i = 0; b_i < 2; b_i++) {
                  y[b_i] = 0.0;
                  for (i1 = 0; i1 < 2; i1++) {
                    f_y = y[b_i] + d_y->data[i1] * H[i1 + (b_i << 1)];
                    y[b_i] = f_y;
                  }
                }
              } else {
                REFxGEMM(d_y, H, y);
              }

              st.site = &og_emlrtRSI;
              c_dynamic_size_checks(&st, grad, grad->size[0]);
              if (grad->size[0] == 1) {
                f_y = 0.0;
                for (b_i = 0; b_i < 2; b_i++) {
                  f_y += y[b_i] * grad->data[b_i];
                }
              } else {
                f_y = xdotu(y, grad);
              }

              st.site = &og_emlrtRSI;
              b_dynamic_size_checks(&st, grad, grad->size[0]);
              if (grad->size[0] == 1) {
                b_i = b_grad->size[0] * b_grad->size[1];
                b_grad->size[0] = 1;
                b_grad->size[1] = grad->size[0];
                emxEnsureCapacity_real_T(b_grad, b_i);
                loop_ub = grad->size[0];
                for (b_i = 0; b_i < loop_ub; b_i++) {
                  b_grad->data[b_i] = grad->data[b_i];
                }

                for (b_i = 0; b_i < 2; b_i++) {
                  y[b_i] = 0.0;
                  for (i1 = 0; i1 < 2; i1++) {
                    beta = y[b_i] + b_grad->data[i1] * H[i1 + (b_i << 1)];
                    y[b_i] = beta;
                  }
                }
              } else {
                d_mtimes(grad, H, y);
              }

              st.site = &og_emlrtRSI;
              c_dynamic_size_checks(&st, grad, grad->size[0]);
              if (grad->size[0] == 1) {
                beta = 0.0;
                for (b_i = 0; b_i < 2; b_i++) {
                  beta += y[b_i] * grad->data[b_i];
                }
              } else {
                beta = xdotu(y, grad);
              }

              st.site = &og_emlrtRSI;
              m_dynamic_size_checks(&st, grad, grad->size[0]);
              if (grad->size[0] == 1) {
                sigma = 0.0;
                for (b_i = 0; b_i < 2; b_i++) {
                  sigma += Hg[b_i] * grad->data[b_i];
                }
              } else {
                sigma = n_mtimes(Hg, grad);
              }

              beta = f_y / (beta - sigma);
            } else {
              beta = 1.0;
            }

            for (b_i = 0; b_i < 4; b_i++) {
              V[b_i] = (1.0 - beta) * H[b_i];
            }

            st.site = &og_emlrtRSI;
            i_dynamic_size_checks(&st, grad, grad->size[0]);
            if (grad->size[0] == 1) {
              for (b_i = 0; b_i < 2; b_i++) {
                b_x[b_i] = 0.0;
                for (i1 = 0; i1 < 2; i1++) {
                  sigma = b_x[b_i] + V[b_i + (i1 << 1)] * grad->data[i1];
                  b_x[b_i] = sigma;
                }
              }

              for (b_i = 0; b_i < 2; b_i++) {
                y[b_i] = b_x[b_i];
              }
            } else {
              i_mtimes(V, grad, b_x);
              for (b_i = 0; b_i < 2; b_i++) {
                y[b_i] = b_x[b_i];
              }
            }

            for (b_i = 0; b_i < 2; b_i++) {
              Hg[b_i] = beta * Hg[b_i] + y[b_i];
            }

            st.site = &og_emlrtRSI;
            m_dynamic_size_checks(&st, grad, grad->size[0]);
            if (grad->size[0] == 1) {
              beta = 0.0;
              for (b_i = 0; b_i < 2; b_i++) {
                beta += Hg[b_i] * grad->data[b_i];
              }
            } else {
              beta = n_mtimes(Hg, grad);
            }

            b_i = c_y->size[0] * c_y->size[1];
            c_y->size[0] = 2;
            c_y->size[1] = grad->size[0];
            emxEnsureCapacity_real_T(c_y, b_i);
            for (b_i = 0; b_i < 2; b_i++) {
              loop_ub = grad->size[0];
              for (i1 = 0; i1 < loop_ub; i1++) {
                sigma = Hg[b_i] * grad->data[i1];
                c_y->data[b_i + (i1 << 1)] = sigma / beta;
              }
            }

            for (b_i = 0; b_i < 2; b_i++) {
              iv[b_i] = 2;
            }

            for (b_i = 0; b_i < 2; b_i++) {
              g_y[b_i] = c_y->size[b_i];
            }

            emlrtSizeEqCheckNDR2012b(iv, g_y, &s_emlrtECI, sp);
            b_eye(V);
            for (b_i = 0; b_i < 4; b_i++) {
              sigma = V[b_i] - c_y->data[b_i];
              V[b_i] = sigma;
            }

            for (b_i = 0; b_i < 2; b_i++) {
              for (i1 = 0; i1 < 2; i1++) {
                b_V[b_i + (i1 << 1)] = 0.0;
                for (i2 = 0; i2 < 2; i2++) {
                  b_V[b_i + (i1 << 1)] += V[b_i + (i2 << 1)] * H[i2 + (i1 << 1)];
                }
              }
            }

            o_mtimes(b_V, V, P);
            for (b_i = 0; b_i < 2; b_i++) {
              for (i1 = 0; i1 < 2; i1++) {
                H[b_i + (i1 << 1)] = P[b_i + (i1 << 1)] + Hg[b_i] * Hg[i1] /
                  beta;
              }
            }

            for (b_i = 0; b_i < 4; b_i++) {
              V[b_i] = H[b_i] + h_y[b_i];
            }

            st.site = &ig_emlrtRSI;
            if (!isPositiveDefinite(&st, V)) {
              *exitFlag =
                c_robotics_core_internal_NLPSolverExitFlags_HessianNotPositiveSe;
              st.site = &jg_emlrtRSI;
              *err = j_IKHelpers_evaluateSolution(&st, obj->ExtraArgs);
              *iter = (real_T)i + 1.0;
              exitg2 = 1;
            } else {
              guard1 = true;
            }
          }

          if (guard1) {
            st.site = &kg_emlrtRSI;
            if (b_DampedBFGSwGradientProjection_searchDirectionInvalid(&st, obj,
                 xSol)) {
              for (k = 0; k < 2; k++) {
                xSol[k] = x[k];
              }

              *exitFlag =
                robotics_core_internal_NLPSolverExitFlags_SearchDirectionInvalid;
              st.site = &lg_emlrtRSI;
              *err = k_IKHelpers_evaluateSolution(&st, obj->ExtraArgs);
              *iter = (real_T)i + 1.0;
              exitg2 = 1;
            } else {
              for (k = 0; k < 2; k++) {
                x[k] = xSol[k];
              }

              b_i = grad->size[0];
              grad->size[0] = gradNew->size[0];
              emxEnsureCapacity_real_T1(grad, b_i);
              loop_ub = gradNew->size[0];
              for (b_i = 0; b_i < loop_ub; b_i++) {
                grad->data[b_i] = gradNew->data[b_i];
              }

              b_cost = costNew;
              i++;
            }
          }
        }
      }
    } else {
      *exitFlag =
        robotics_core_internal_NLPSolverExitFlags_IterationLimitExceeded;
      st.site = &mg_emlrtRSI;
      *err = l_IKHelpers_evaluateSolution(&st, obj->ExtraArgs);
      *iter = obj->MaxNumIterationInternal;
      exitg2 = 1;
    }
  } while (exitg2 == 0);

  emxFree_real_T(&b_grad);
  emxFree_real_T(&c_alpha);
  emxFree_real_T(&b_alpha);
  emxFree_real_T(&i_A);
  emxFree_real_T(&h_A);
  emxFree_boolean_T(&c_activeSet);
  emxFree_boolean_T(&b_activeSet);
  emxFree_boolean_T(&b_bIn);
  emxFree_real_T(&e_y);
  emxFree_int32_T(&ii);
  emxFree_real_T(&b_b);
  emxFree_real_T(&d_y);
  emxFree_real_T(&c_y);
  emxFree_real_T(&b_y);
  emxFree_int32_T(&r5);
  emxFree_int32_T(&r4);
  emxFree_int32_T(&r3);
  emxFree_int32_T(&r2);
  emxFree_int32_T(&r1);
  emxFree_real_T(&unusedU1);
  emxFree_real_T(&gradNew);
  emxFree_int32_T(&inactiveConstraintIndices);
  emxFree_real_T(&bIn);
  emxFree_real_T(&B);
  emxFree_real_T(&alpha);
  emxFree_real_T(&A);
  emxFree_boolean_T(&activeSet);
  emxFree_real_T(&grad);
}

static void d_IKHelpers_computeCost(const emlrtStack *sp, real_T x[2],
  robotics_manip_internal_IKExtraArgs *args, real_T *cost, real_T W[36],
  emxArray_real_T *Jac, robotics_manip_internal_IKExtraArgs **b_args)
{
  emlrtStack st;
  emxArray_char_T *bodyName;
  robotics_manip_internal_RigidBodyTree_1 *treeInternal;
  int32_T i;
  int32_T loop_ub;
  real_T Td[16];
  emxArray_real_T *J;
  real_T T_data[16];
  int32_T T_size[2];
  real_T e[6];
  real_T y;
  real_T b_e[6];
  emxArray_real_T *b_y;
  st.prev = sp;
  st.tls = sp->tls;
  emxInit_char_T(&bodyName, 2);
  *b_args = args;
  treeInternal = (*b_args)->Robot;
  i = bodyName->size[0] * bodyName->size[1];
  bodyName->size[0] = 1;
  bodyName->size[1] = (*b_args)->BodyName->size[1];
  emxEnsureCapacity_char_T(bodyName, i);
  loop_ub = (*b_args)->BodyName->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    bodyName->data[i] = (*b_args)->BodyName->data[i];
  }

  for (i = 0; i < 16; i++) {
    Td[i] = (*b_args)->Tform[i];
  }

  for (i = 0; i < 36; i++) {
    W[i] = (*b_args)->WeightMatrix[i];
  }

  emxInit_real_T(&J, 2);
  st.site = &pg_emlrtRSI;
  d_RigidBodyTree_efficientFKAndJacobianForIK(&st, treeInternal, x, bodyName,
    T_data, T_size, J);
  i = Jac->size[0] * Jac->size[1];
  Jac->size[0] = 6;
  Jac->size[1] = J->size[1];
  emxEnsureCapacity_real_T(Jac, i);
  loop_ub = 6 * J->size[1] - 1;
  emxFree_char_T(&bodyName);
  for (i = 0; i <= loop_ub; i++) {
    Jac->data[i] = -J->data[i];
  }

  emxFree_real_T(&J);
  st.site = &qg_emlrtRSI;
  IKHelpers_poseError(&st, Td, T_data, T_size, e);
  i = (*b_args)->ErrTemp->size[0];
  (*b_args)->ErrTemp->size[0] = 6;
  emxEnsureCapacity_real_T1((*b_args)->ErrTemp, i);
  for (i = 0; i < 6; i++) {
    (*b_args)->ErrTemp->data[i] = e[i];
  }

  for (i = 0; i < 6; i++) {
    b_e[i] = 0.0;
    for (loop_ub = 0; loop_ub < 6; loop_ub++) {
      y = b_e[i] + 0.5 * e[loop_ub] * W[loop_ub + 6 * i];
      b_e[i] = y;
    }
  }

  y = 0.0;
  for (loop_ub = 0; loop_ub < 6; loop_ub++) {
    y += b_e[loop_ub] * e[loop_ub];
  }

  (*b_args)->CostTemp = y;
  for (i = 0; i < 6; i++) {
    b_e[i] = 0.0;
    for (loop_ub = 0; loop_ub < 6; loop_ub++) {
      y = b_e[i] + e[loop_ub] * W[loop_ub + 6 * i];
      b_e[i] = y;
    }
  }

  emxInit_real_T(&b_y, 2);
  st.site = &ng_emlrtRSI;
  b_mtimes(b_e, Jac, b_y);
  i = (*b_args)->GradTemp->size[0];
  (*b_args)->GradTemp->size[0] = b_y->size[1];
  emxEnsureCapacity_real_T1((*b_args)->GradTemp, i);
  loop_ub = b_y->size[1];
  for (i = 0; i < loop_ub; i++) {
    (*b_args)->GradTemp->data[i] = b_y->data[i];
  }

  emxFree_real_T(&b_y);
  y = (*b_args)->CostTemp;
  *cost = y;
}

static void d_RigidBodyTree_efficientFKAndJacobianForIK(const emlrtStack *sp,
  robotics_manip_internal_RigidBodyTree_1 *obj, real_T qv[2], emxArray_char_T
  *body1Name, real_T T_data[], int32_T T_size[2], emxArray_real_T *Jac)
{
  emlrtStack st;
  emlrtStack b_st;
  emxArray_char_T *body2Name;
  int32_T i;
  int32_T loop_ub;
  real_T bid1;
  real_T bid2;
  robotics_manip_internal_RigidBody_1 *body1;
  robotics_manip_internal_RigidBody_1 *body2;
  emxArray_real_T *ancestorIndices1;
  robotics_manip_internal_RigidBody_1 *body;
  uint32_T b_i;
  emxArray_real_T *ancestorIndices2;
  int32_T i1;
  uint32_T c_i;
  int32_T i2;
  int32_T minPathLength;
  int32_T d_i;
  boolean_T exitg1;
  emxArray_real_T *kinematicPathIndices;
  real_T T1[16];
  emxArray_real_T *JacSlice;
  emxArray_real_T *a;
  emxArray_real_T *joint;
  real_T b_T1[36];
  boolean_T nextBodyIsParent;
  emxArray_real_T *b_Jac;
  int32_T jointSign;
  rigidBodyJoint *b_joint;
  real_T Tc2p[16];
  real_T qidx[2];
  real_T R[9];
  real_T b_R[16];
  real_T c_R[9];
  int32_T qv_size[1];
  real_T d_R[3];
  real_T e_R[16];
  static int8_T iv[4] = { 0, 0, 0, 1 };

  real_T Tj1[16];
  real_T Tj[16];
  real_T T1j[16];
  real_T dv[9];
  int32_T iv1[2];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emxInit_char_T(&body2Name, 2);
  st.site = &xg_emlrtRSI;
  i = body2Name->size[0] * body2Name->size[1];
  body2Name->size[0] = 1;
  body2Name->size[1] = obj->Base.NameInternal->size[1];
  emxEnsureCapacity_char_T(body2Name, i);
  loop_ub = obj->Base.NameInternal->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    body2Name->data[i] = obj->Base.NameInternal->data[i];
  }

  st.site = &wg_emlrtRSI;
  bid1 = h_RigidBodyTree_validateInputBodyName(&st, obj, body1Name);
  st.site = &vg_emlrtRSI;
  bid2 = i_RigidBodyTree_validateInputBodyName(&st, obj, body2Name);
  emxFree_char_T(&body2Name);
  if (bid1 == 0.0) {
    body1 = &obj->Base;
  } else {
    body1 = obj->Bodies[emlrtDynamicBoundsCheckR2012b((int32_T)bid1 - 1, 0, 2,
      &sc_emlrtBCI, sp)];
  }

  if (bid2 == 0.0) {
    body2 = &obj->Base;
  } else {
    body2 = obj->Bodies[emlrtDynamicBoundsCheckR2012b((int32_T)bid2 - 1, 0, 2,
      &tc_emlrtBCI, sp)];
  }

  emxInit_real_T(&ancestorIndices1, 2);
  st.site = &ug_emlrtRSI;
  b_st.site = &yg_emlrtRSI;
  body = body1;
  i = ancestorIndices1->size[0] * ancestorIndices1->size[1];
  ancestorIndices1->size[0] = 1;
  bid1 = obj->NumBodies + 1.0;
  bid1 = emlrtNonNegativeCheckR2012b(bid1, &xb_emlrtDCI, &b_st);
  ancestorIndices1->size[1] = (int32_T)emlrtIntegerCheckR2012b(bid1,
    &wb_emlrtDCI, &b_st);
  emxEnsureCapacity_real_T(ancestorIndices1, i);
  bid1 = obj->NumBodies + 1.0;
  bid1 = emlrtNonNegativeCheckR2012b(bid1, &xb_emlrtDCI, &b_st);
  loop_ub = (int32_T)emlrtIntegerCheckR2012b(bid1, &wb_emlrtDCI, &b_st) - 1;
  for (i = 0; i <= loop_ub; i++) {
    ancestorIndices1->data[i] = 0.0;
  }

  b_i = 2U;
  i = ancestorIndices1->size[1];
  emlrtDynamicBoundsCheckR2012b(1, 1, i, &rc_emlrtBCI, &b_st);
  ancestorIndices1->data[0] = body1->Index;
  while (body->ParentIndex > 0.0) {
    i = (int32_T)emlrtIntegerCheckR2012b(body->ParentIndex, &bc_emlrtDCI, &b_st)
      - 1;
    body = obj->Bodies[emlrtDynamicBoundsCheckR2012b(i, 0, 2, &uc_emlrtBCI,
      &b_st)];
    i = ancestorIndices1->size[1];
    ancestorIndices1->data[emlrtDynamicBoundsCheckR2012b((int32_T)b_i, 1, i,
      &wc_emlrtBCI, &b_st) - 1] = body->Index;
    b_i++;
  }

  if (body->Index > 0.0) {
    i = ancestorIndices1->size[1];
    ancestorIndices1->data[emlrtDynamicBoundsCheckR2012b((int32_T)b_i, 1, i,
      &vc_emlrtBCI, &b_st) - 1] = body->ParentIndex;
    b_i++;
  }

  emxInit_real_T(&ancestorIndices2, 2);
  i = ancestorIndices1->size[1];
  emlrtDynamicBoundsCheckR2012b(1, 1, i, &qc_emlrtBCI, &b_st);
  i = ancestorIndices1->size[1];
  i = emlrtDynamicBoundsCheckR2012b((int32_T)(b_i - 1U), 1, i, &pc_emlrtBCI,
    &b_st);
  i1 = ancestorIndices1->size[0] * ancestorIndices1->size[1];
  ancestorIndices1->size[1] = (int32_T)(b_i - 1U);
  emxEnsureCapacity_real_T(ancestorIndices1, i1);
  b_st.site = &ah_emlrtRSI;
  body = body2;
  i1 = ancestorIndices2->size[0] * ancestorIndices2->size[1];
  ancestorIndices2->size[0] = 1;
  bid1 = obj->NumBodies + 1.0;
  bid1 = emlrtNonNegativeCheckR2012b(bid1, &xb_emlrtDCI, &b_st);
  ancestorIndices2->size[1] = (int32_T)emlrtIntegerCheckR2012b(bid1,
    &wb_emlrtDCI, &b_st);
  emxEnsureCapacity_real_T(ancestorIndices2, i1);
  bid1 = obj->NumBodies + 1.0;
  bid1 = emlrtNonNegativeCheckR2012b(bid1, &xb_emlrtDCI, &b_st);
  loop_ub = (int32_T)emlrtIntegerCheckR2012b(bid1, &wb_emlrtDCI, &b_st) - 1;
  for (i1 = 0; i1 <= loop_ub; i1++) {
    ancestorIndices2->data[i1] = 0.0;
  }

  c_i = 2U;
  i1 = ancestorIndices2->size[1];
  emlrtDynamicBoundsCheckR2012b(1, 1, i1, &rc_emlrtBCI, &b_st);
  ancestorIndices2->data[0] = body2->Index;
  while (body->ParentIndex > 0.0) {
    i1 = (int32_T)emlrtIntegerCheckR2012b(body->ParentIndex, &bc_emlrtDCI, &b_st)
      - 1;
    body = obj->Bodies[emlrtDynamicBoundsCheckR2012b(i1, 0, 2, &uc_emlrtBCI,
      &b_st)];
    i1 = ancestorIndices2->size[1];
    ancestorIndices2->data[emlrtDynamicBoundsCheckR2012b((int32_T)c_i, 1, i1,
      &wc_emlrtBCI, &b_st) - 1] = body->Index;
    c_i++;
  }

  if (body->Index > 0.0) {
    i1 = ancestorIndices2->size[1];
    ancestorIndices2->data[emlrtDynamicBoundsCheckR2012b((int32_T)c_i, 1, i1,
      &vc_emlrtBCI, &b_st) - 1] = body->ParentIndex;
    c_i++;
  }

  i1 = ancestorIndices2->size[1];
  emlrtDynamicBoundsCheckR2012b(1, 1, i1, &qc_emlrtBCI, &b_st);
  i1 = ancestorIndices2->size[1];
  i1 = emlrtDynamicBoundsCheckR2012b((int32_T)(c_i - 1U), 1, i1, &pc_emlrtBCI,
    &b_st);
  i2 = ancestorIndices2->size[0] * ancestorIndices2->size[1];
  ancestorIndices2->size[1] = (int32_T)(c_i - 1U);
  emxEnsureCapacity_real_T(ancestorIndices2, i2);
  minPathLength = (int32_T)muDoubleScalarMin((real_T)b_i - 1.0, (real_T)c_i -
    1.0);
  d_i = 1;
  exitg1 = false;
  while ((!exitg1) && (d_i - 1 <= minPathLength - 2)) {
    if (ancestorIndices1->data[emlrtDynamicBoundsCheckR2012b(i - d_i, 1, i,
         &xc_emlrtBCI, &st) - 1] != ancestorIndices2->
        data[emlrtDynamicBoundsCheckR2012b(i1 - d_i, 1, i1, &yc_emlrtBCI, &st) -
        1]) {
      minPathLength = d_i;
      exitg1 = true;
    } else {
      d_i++;
    }
  }

  bid1 = ancestorIndices1->data[emlrtDynamicBoundsCheckR2012b((i - minPathLength)
    + 1, 1, i, &ad_emlrtBCI, &st) - 1];
  i2 = i - minPathLength;
  if (1 > i2) {
    loop_ub = -1;
  } else {
    loop_ub = emlrtDynamicBoundsCheckR2012b(i2, 1, i, &nc_emlrtBCI, &st) - 1;
  }

  i = i1 - minPathLength;
  if (1 > i) {
    i = 0;
    i1 = 1;
    i2 = -1;
  } else {
    i = emlrtDynamicBoundsCheckR2012b(i, 1, i1, &oc_emlrtBCI, &st) - 1;
    i1 = -1;
    i2 = 0;
  }

  emxInit_real_T(&kinematicPathIndices, 2);
  minPathLength = kinematicPathIndices->size[0] * kinematicPathIndices->size[1];
  kinematicPathIndices->size[0] = 1;
  b_st.site = &ug_emlrtRSI;
  kinematicPathIndices->size[1] = (loop_ub + div_s32_floor(&b_st, i2 - i, i1)) +
    3;
  emxEnsureCapacity_real_T(kinematicPathIndices, minPathLength);
  for (minPathLength = 0; minPathLength <= loop_ub; minPathLength++) {
    kinematicPathIndices->data[minPathLength] = ancestorIndices1->
      data[minPathLength];
  }

  emxFree_real_T(&ancestorIndices1);
  kinematicPathIndices->data[loop_ub + 1] = bid1;
  b_st.site = &am_emlrtRSI;
  minPathLength = div_s32_floor(&b_st, i2 - i, i1);
  for (i2 = 0; i2 <= minPathLength; i2++) {
    kinematicPathIndices->data[(i2 + loop_ub) + 2] = ancestorIndices2->data[i +
      i1 * i2];
  }

  emxFree_real_T(&ancestorIndices2);
  for (i = 0; i < 16; i++) {
    T1[i] = 0.0;
  }

  for (minPathLength = 0; minPathLength < 4; minPathLength++) {
    T1[minPathLength + (minPathLength << 2)] = 1.0;
  }

  i = Jac->size[0] * Jac->size[1];
  Jac->size[0] = 6;
  bid1 = emlrtNonNegativeCheckR2012b(obj->PositionNumber, &ac_emlrtDCI, sp);
  Jac->size[1] = (int32_T)emlrtIntegerCheckR2012b(bid1, &yb_emlrtDCI, sp);
  emxEnsureCapacity_real_T(Jac, i);
  bid1 = emlrtNonNegativeCheckR2012b(obj->PositionNumber, &ac_emlrtDCI, sp);
  loop_ub = 6 * (int32_T)emlrtIntegerCheckR2012b(bid1, &yb_emlrtDCI, sp) - 1;
  for (i = 0; i <= loop_ub; i++) {
    Jac->data[i] = 0.0;
  }

  i = kinematicPathIndices->size[1] - 2;
  emxInit_real_T(&JacSlice, 2);
  emxInit_real_T(&a, 2);
  emxInit_real_T(&joint, 2);
  for (d_i = 0; d_i <= i; d_i++) {
    i1 = kinematicPathIndices->size[1];
    if (kinematicPathIndices->data[emlrtDynamicBoundsCheckR2012b(d_i + 1, 1, i1,
         &bd_emlrtBCI, sp) - 1] != 0.0) {
      i1 = kinematicPathIndices->size[1];
      bid1 = kinematicPathIndices->data[emlrtDynamicBoundsCheckR2012b(d_i + 1, 1,
        i1, &ed_emlrtBCI, sp) - 1];
      i1 = (int32_T)emlrtIntegerCheckR2012b(bid1, &cc_emlrtDCI, sp) - 1;
      body1 = obj->Bodies[emlrtDynamicBoundsCheckR2012b(i1, 0, 2, &dd_emlrtBCI,
        sp)];
    } else {
      body1 = &obj->Base;
    }

    i1 = kinematicPathIndices->size[1];
    if (kinematicPathIndices->data[emlrtDynamicBoundsCheckR2012b(d_i + 2, 1, i1,
         &cd_emlrtBCI, sp) - 1] != 0.0) {
      i1 = kinematicPathIndices->size[1];
      bid1 = kinematicPathIndices->data[emlrtDynamicBoundsCheckR2012b(d_i + 2, 1,
        i1, &gd_emlrtBCI, sp) - 1];
      i1 = (int32_T)emlrtIntegerCheckR2012b(bid1, &dc_emlrtDCI, sp) - 1;
      body2 = obj->Bodies[emlrtDynamicBoundsCheckR2012b(i1, 0, 2, &fd_emlrtBCI,
        sp)];
    } else {
      body2 = &obj->Base;
    }

    nextBodyIsParent = (body2->Index == body1->ParentIndex);
    if (nextBodyIsParent) {
      body2 = body1;
      jointSign = 1;
    } else {
      jointSign = -1;
    }

    b_joint = body2->JointInternal;
    if (e_strcmp(b_joint->Type)) {
      st.site = &tg_emlrtRSI;
      rigidBodyJoint_transformBodyToParent(&st, b_joint, Tc2p);
    } else {
      i1 = (int32_T)emlrtIntegerCheckR2012b(body2->Index, &vb_emlrtDCI, sp);
      minPathLength = emlrtDynamicBoundsCheckR2012b(i1, 1, 3, &mc_emlrtBCI, sp);
      for (i1 = 0; i1 < 2; i1++) {
        qidx[i1] = obj->PositionDoFMap[(minPathLength + 3 * i1) - 1];
      }

      if (qidx[0] > qidx[1]) {
        i1 = 0;
        i2 = -1;
      } else {
        i1 = (int32_T)emlrtIntegerCheckR2012b(qidx[0], &ub_emlrtDCI, sp);
        i1 = emlrtDynamicBoundsCheckR2012b(i1, 1, 2, &lc_emlrtBCI, sp) - 1;
        i2 = (int32_T)emlrtIntegerCheckR2012b(qidx[1], &tb_emlrtDCI, sp);
        i2 = emlrtDynamicBoundsCheckR2012b(i2, 1, 2, &kc_emlrtBCI, sp) - 1;
      }

      qv_size[0] = (i2 - i1) + 1;
      loop_ub = i2 - i1;
      for (i2 = 0; i2 <= loop_ub; i2++) {
        qidx[i2] = qv[i1 + i2];
      }

      st.site = &sg_emlrtRSI;
      b_rigidBodyJoint_transformBodyToParent(&st, b_joint, qidx, qv_size, Tc2p);
      i1 = (int32_T)emlrtIntegerCheckR2012b(body2->Index, &sb_emlrtDCI, sp);
      minPathLength = emlrtDynamicBoundsCheckR2012b(i1, 1, 3, &jc_emlrtBCI, sp);
      for (i1 = 0; i1 < 2; i1++) {
        qidx[i1] = obj->VelocityDoFMap[(minPathLength + 3 * i1) - 1];
      }

      if (nextBodyIsParent) {
        for (i1 = 0; i1 < 16; i1++) {
          Tj[i1] = b_joint->ChildToJointTransform[i1];
        }
      } else {
        for (i1 = 0; i1 < 16; i1++) {
          Tj1[i1] = b_joint->JointToParentTransform[i1];
        }

        for (i1 = 0; i1 < 3; i1++) {
          for (i2 = 0; i2 < 3; i2++) {
            R[i2 + 3 * i1] = Tj1[i1 + (i2 << 2)];
          }
        }

        for (i1 = 0; i1 < 9; i1++) {
          c_R[i1] = -R[i1];
        }

        for (i1 = 0; i1 < 3; i1++) {
          d_R[i1] = 0.0;
          for (i2 = 0; i2 < 3; i2++) {
            Tj[i2 + (i1 << 2)] = R[i2 + 3 * i1];
            d_R[i1] += c_R[i1 + 3 * i2] * Tj1[i2 + 12];
          }

          Tj[i1 + 12] = d_R[i1];
        }

        for (i1 = 0; i1 < 4; i1++) {
          Tj[(i1 << 2) + 3] = (real_T)iv[i1];
        }
      }

      for (i1 = 0; i1 < 4; i1++) {
        for (i2 = 0; i2 < 4; i2++) {
          T1j[i1 + (i2 << 2)] = 0.0;
          for (minPathLength = 0; minPathLength < 4; minPathLength++) {
            T1j[i1 + (i2 << 2)] += Tj[i1 + (minPathLength << 2)] *
              T1[minPathLength + (i2 << 2)];
          }
        }
      }

      for (i1 = 0; i1 < 3; i1++) {
        for (i2 = 0; i2 < 3; i2++) {
          R[i2 + 3 * i1] = T1j[i1 + (i2 << 2)];
        }
      }

      for (i1 = 0; i1 < 9; i1++) {
        c_R[i1] = -R[i1];
      }

      for (i1 = 0; i1 < 3; i1++) {
        d_R[i1] = 0.0;
        for (i2 = 0; i2 < 3; i2++) {
          Tj1[i2 + (i1 << 2)] = R[i2 + 3 * i1];
          d_R[i1] += c_R[i1 + 3 * i2] * T1j[i2 + 12];
        }

        Tj1[i1 + 12] = d_R[i1];
      }

      for (i1 = 0; i1 < 4; i1++) {
        Tj1[(i1 << 2) + 3] = (real_T)iv[i1];
      }

      for (i1 = 0; i1 < 3; i1++) {
        for (i2 = 0; i2 < 3; i2++) {
          R[i2 + 3 * i1] = Tj1[i2 + (i1 << 2)];
        }
      }

      c_R[0] = 0.0;
      c_R[3] = -Tj1[14];
      c_R[6] = Tj1[13];
      c_R[1] = Tj1[14];
      c_R[4] = 0.0;
      c_R[7] = -Tj1[12];
      c_R[2] = -Tj1[13];
      c_R[5] = Tj1[12];
      c_R[8] = 0.0;
      for (i1 = 0; i1 < 3; i1++) {
        for (i2 = 0; i2 < 3; i2++) {
          dv[i1 + 3 * i2] = 0.0;
          for (minPathLength = 0; minPathLength < 3; minPathLength++) {
            dv[i1 + 3 * i2] += c_R[i1 + 3 * minPathLength] * R[minPathLength + 3
              * i2];
          }

          b_T1[i2 + 6 * i1] = R[i2 + 3 * i1];
          b_T1[i2 + 6 * (i1 + 3)] = 0.0;
        }
      }

      for (i1 = 0; i1 < 3; i1++) {
        for (i2 = 0; i2 < 3; i2++) {
          b_T1[(i2 + 6 * i1) + 3] = dv[i2 + 3 * i1];
          b_T1[(i2 + 6 * (i1 + 3)) + 3] = R[i2 + 3 * i1];
        }
      }

      i1 = joint->size[0] * joint->size[1];
      joint->size[0] = 6;
      joint->size[1] = b_joint->MotionSubspace->size[1];
      emxEnsureCapacity_real_T(joint, i1);
      loop_ub = b_joint->MotionSubspace->size[0] * b_joint->MotionSubspace->
        size[1];
      for (i1 = 0; i1 < loop_ub; i1++) {
        joint->data[i1] = b_joint->MotionSubspace->data[i1];
      }

      st.site = &rg_emlrtRSI;
      eml_mtimes_helper(b_T1, joint, a);
      i1 = JacSlice->size[0] * JacSlice->size[1];
      JacSlice->size[0] = 6;
      JacSlice->size[1] = a->size[1];
      emxEnsureCapacity_real_T(JacSlice, i1);
      loop_ub = 6 * a->size[1] - 1;
      for (i1 = 0; i1 <= loop_ub; i1++) {
        JacSlice->data[i1] = a->data[i1] * (real_T)jointSign;
      }

      if (qidx[0] > qidx[1]) {
        i1 = 0;
        i2 = -1;
      } else {
        i1 = Jac->size[1];
        i2 = (int32_T)emlrtIntegerCheckR2012b(qidx[0], &rb_emlrtDCI, sp);
        i1 = emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &ic_emlrtBCI, sp) - 1;
        i2 = Jac->size[1];
        minPathLength = (int32_T)emlrtIntegerCheckR2012b(qidx[1], &qb_emlrtDCI,
          sp);
        i2 = emlrtDynamicBoundsCheckR2012b(minPathLength, 1, i2, &hc_emlrtBCI,
          sp) - 1;
      }

      iv1[0] = 6;
      iv1[1] = (i2 - i1) + 1;
      emlrtSubAssignSizeCheckR2012b(iv1, 2, *(int32_T (*)[2])JacSlice->size, 2,
        &x_emlrtECI, sp);
      loop_ub = JacSlice->size[1];
      for (i2 = 0; i2 < loop_ub; i2++) {
        for (minPathLength = 0; minPathLength < 6; minPathLength++) {
          Jac->data[minPathLength + 6 * (i1 + i2)] = JacSlice->
            data[minPathLength + 6 * i2];
        }
      }
    }

    if (nextBodyIsParent) {
      for (i1 = 0; i1 < 4; i1++) {
        for (i2 = 0; i2 < 4; i2++) {
          b_R[i1 + (i2 << 2)] = 0.0;
          for (minPathLength = 0; minPathLength < 4; minPathLength++) {
            b_R[i1 + (i2 << 2)] += Tc2p[i1 + (minPathLength << 2)] *
              T1[minPathLength + (i2 << 2)];
          }
        }
      }

      memcpy(&T1[0], &b_R[0], sizeof(real_T) << 4);
    } else {
      for (i1 = 0; i1 < 3; i1++) {
        for (i2 = 0; i2 < 3; i2++) {
          R[i2 + 3 * i1] = Tc2p[i1 + (i2 << 2)];
        }
      }

      for (i1 = 0; i1 < 9; i1++) {
        c_R[i1] = -R[i1];
      }

      for (i1 = 0; i1 < 3; i1++) {
        d_R[i1] = 0.0;
        for (i2 = 0; i2 < 3; i2++) {
          e_R[i2 + (i1 << 2)] = R[i2 + 3 * i1];
          d_R[i1] += c_R[i1 + 3 * i2] * Tc2p[i2 + 12];
        }

        e_R[i1 + 12] = d_R[i1];
      }

      for (i1 = 0; i1 < 4; i1++) {
        e_R[(i1 << 2) + 3] = (real_T)iv[i1];
      }

      for (i1 = 0; i1 < 4; i1++) {
        for (i2 = 0; i2 < 4; i2++) {
          b_R[i1 + (i2 << 2)] = 0.0;
          for (minPathLength = 0; minPathLength < 4; minPathLength++) {
            b_R[i1 + (i2 << 2)] += e_R[i1 + (minPathLength << 2)] *
              T1[minPathLength + (i2 << 2)];
          }
        }
      }

      memcpy(&T1[0], &b_R[0], sizeof(real_T) << 4);
    }
  }

  emxFree_real_T(&joint);
  emxFree_real_T(&a);
  emxFree_real_T(&JacSlice);
  emxFree_real_T(&kinematicPathIndices);
  for (i = 0; i < 3; i++) {
    for (i1 = 0; i1 < 3; i1++) {
      b_T1[i1 + 6 * i] = T1[i1 + (i << 2)];
      b_T1[i1 + 6 * (i + 3)] = 0.0;
      b_T1[(i1 + 6 * i) + 3] = 0.0;
      b_T1[(i1 + 6 * (i + 3)) + 3] = T1[i1 + (i << 2)];
    }
  }

  emxInit_real_T(&b_Jac, 2);
  i = b_Jac->size[0] * b_Jac->size[1];
  b_Jac->size[0] = 6;
  b_Jac->size[1] = Jac->size[1];
  emxEnsureCapacity_real_T(b_Jac, i);
  loop_ub = Jac->size[0] * Jac->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_Jac->data[i] = Jac->data[i];
  }

  st.site = &ng_emlrtRSI;
  mtimes(b_T1, b_Jac, Jac);
  T_size[0] = 4;
  T_size[1] = 4;
  emxFree_real_T(&b_Jac);
  for (i = 0; i < 16; i++) {
    T_data[i] = T1[i];
  }
}

static real_T h_RigidBodyTree_validateInputBodyName(const emlrtStack *sp,
  robotics_manip_internal_RigidBodyTree_1 *obj, emxArray_char_T *bodyname)
{
  real_T bid;
  emlrtStack st;
  emlrtStack b_st;
  emxArray_char_T *bname;
  int32_T i;
  int32_T loop_ub;
  real_T d;
  int32_T b_i;
  boolean_T exitg1;
  robotics_manip_internal_RigidBody_1 *b_obj;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emxInit_char_T(&bname, 2);
  st.site = &jc_emlrtRSI;
  bid = -1.0;
  b_st.site = &tb_emlrtRSI;
  b_validateattributes(&b_st, bodyname);
  b_st.site = &ub_emlrtRSI;
  i = bname->size[0] * bname->size[1];
  bname->size[0] = 1;
  bname->size[1] = obj->Base.NameInternal->size[1];
  emxEnsureCapacity_char_T(bname, i);
  loop_ub = obj->Base.NameInternal->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    bname->data[i] = obj->Base.NameInternal->data[i];
  }

  if (d_strcmp(bname, bodyname)) {
    bid = 0.0;
  } else {
    d = obj->NumBodies;
    emlrtForLoopVectorCheckR2012b(1.0, 1.0, d, mxDOUBLE_CLASS, (int32_T)d,
      &emlrtRTEI, &st);
    b_i = 0;
    exitg1 = false;
    while ((!exitg1) && (b_i <= (int32_T)d - 1)) {
      b_st.site = &vb_emlrtRSI;
      b_obj = obj->Bodies[emlrtDynamicBoundsCheckR2012b(b_i, 0, 2, &emlrtBCI,
        &b_st)];
      i = bname->size[0] * bname->size[1];
      bname->size[0] = 1;
      bname->size[1] = b_obj->NameInternal->size[1];
      emxEnsureCapacity_char_T(bname, i);
      loop_ub = b_obj->NameInternal->size[1] - 1;
      for (i = 0; i <= loop_ub; i++) {
        bname->data[i] = b_obj->NameInternal->data[i];
      }

      if (d_strcmp(bname, bodyname)) {
        bid = (real_T)b_i + 1.0;
        exitg1 = true;
      } else {
        b_i++;
      }
    }
  }

  emxFree_char_T(&bname);
  if (bid == -1.0) {
    st.site = &kc_emlrtRSI;
    c_error(&st, bodyname);
  }

  return bid;
}

static real_T i_RigidBodyTree_validateInputBodyName(const emlrtStack *sp,
  robotics_manip_internal_RigidBodyTree_1 *obj, emxArray_char_T *bodyname)
{
  real_T bid;
  emlrtStack st;
  emlrtStack b_st;
  emxArray_char_T *bname;
  int32_T i;
  int32_T loop_ub;
  real_T d;
  int32_T b_i;
  boolean_T exitg1;
  robotics_manip_internal_RigidBody_1 *b_obj;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emxInit_char_T(&bname, 2);
  st.site = &jc_emlrtRSI;
  bid = -1.0;
  b_st.site = &tb_emlrtRSI;
  b_validateattributes(&b_st, bodyname);
  b_st.site = &ub_emlrtRSI;
  i = bname->size[0] * bname->size[1];
  bname->size[0] = 1;
  bname->size[1] = obj->Base.NameInternal->size[1];
  emxEnsureCapacity_char_T(bname, i);
  loop_ub = obj->Base.NameInternal->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    bname->data[i] = obj->Base.NameInternal->data[i];
  }

  if (d_strcmp(bname, bodyname)) {
    bid = 0.0;
  } else {
    d = obj->NumBodies;
    emlrtForLoopVectorCheckR2012b(1.0, 1.0, d, mxDOUBLE_CLASS, (int32_T)d,
      &emlrtRTEI, &st);
    b_i = 0;
    exitg1 = false;
    while ((!exitg1) && (b_i <= (int32_T)d - 1)) {
      b_st.site = &vb_emlrtRSI;
      b_obj = obj->Bodies[emlrtDynamicBoundsCheckR2012b(b_i, 0, 2, &emlrtBCI,
        &b_st)];
      i = bname->size[0] * bname->size[1];
      bname->size[0] = 1;
      bname->size[1] = b_obj->NameInternal->size[1];
      emxEnsureCapacity_char_T(bname, i);
      loop_ub = b_obj->NameInternal->size[1] - 1;
      for (i = 0; i <= loop_ub; i++) {
        bname->data[i] = b_obj->NameInternal->data[i];
      }

      if (d_strcmp(bname, bodyname)) {
        bid = (real_T)b_i + 1.0;
        exitg1 = true;
      } else {
        b_i++;
      }
    }
  }

  emxFree_char_T(&bname);
  if (bid == -1.0) {
    st.site = &kc_emlrtRSI;
    c_error(&st, bodyname);
  }

  return bid;
}

static real_T g_IKHelpers_evaluateSolution(const emlrtStack *sp,
  robotics_manip_internal_IKExtraArgs *args)
{
  emlrtStack st;
  real_T y[6];
  real_T a[36];
  int32_T k;
  emxArray_real_T *b_b;
  int32_T loop_ub;
  int32_T aoffset;
  real_T b_y;
  st.prev = sp;
  st.tls = sp->tls;
  for (k = 0; k < 36; k++) {
    a[k] = args->WeightMatrix[k];
  }

  emxInit_real_T1(&b_b, 1);
  k = b_b->size[0];
  b_b->size[0] = args->ErrTemp->size[0];
  emxEnsureCapacity_real_T1(b_b, k);
  loop_ub = args->ErrTemp->size[0];
  for (k = 0; k < loop_ub; k++) {
    b_b->data[k] = args->ErrTemp->data[k];
  }

  st.site = &og_emlrtRSI;
  f_dynamic_size_checks(&st, b_b, b_b->size[0]);
  if (b_b->size[0] == 1) {
    for (k = 0; k < 6; k++) {
      y[k] = 0.0;
      for (loop_ub = 0; loop_ub < 6; loop_ub++) {
        b_y = y[k] + a[k + 6 * loop_ub] * b_b->data[loop_ub];
        y[k] = b_y;
      }
    }
  } else {
    for (loop_ub = 0; loop_ub < 6; loop_ub++) {
      y[loop_ub] = 0.0;
    }

    for (k = 0; k < 6; k++) {
      aoffset = k * 6 - 1;
      for (loop_ub = 0; loop_ub < 6; loop_ub++) {
        y[loop_ub] += b_b->data[k] * a[(aoffset + loop_ub) + 1];
      }
    }
  }

  emxFree_real_T(&b_b);
  return c_norm(y);
}

static boolean_T b_DampedBFGSwGradientProjection_atLocalMinimum(const emlrtStack
  *sp, robotics_core_internal_DampedBFGSwGradientProjection *obj, real_T Hg[2],
  emxArray_real_T *alpha)
{
  boolean_T flag;
  emlrtStack st;
  emxArray_boolean_T *b_alpha;
  int32_T i;
  int32_T loop_ub;
  st.prev = sp;
  st.tls = sp->tls;
  emxInit_boolean_T(&b_alpha, 1);
  if (d_norm(Hg) < obj->GradientTolerance) {
    i = b_alpha->size[0];
    b_alpha->size[0] = alpha->size[0];
    emxEnsureCapacity_boolean_T(b_alpha, i);
    loop_ub = alpha->size[0];
    for (i = 0; i < loop_ub; i++) {
      b_alpha->data[i] = (alpha->data[i] <= 0.0);
    }

    st.site = &hj_emlrtRSI;
    if (all(&st, b_alpha)) {
      flag = true;
    } else {
      flag = false;
    }
  } else {
    flag = false;
  }

  emxFree_boolean_T(&b_alpha);
  return flag;
}

static real_T h_IKHelpers_evaluateSolution(const emlrtStack *sp,
  robotics_manip_internal_IKExtraArgs *args)
{
  emlrtStack st;
  real_T y[6];
  real_T a[36];
  int32_T k;
  emxArray_real_T *b_b;
  int32_T loop_ub;
  int32_T aoffset;
  real_T b_y;
  st.prev = sp;
  st.tls = sp->tls;
  for (k = 0; k < 36; k++) {
    a[k] = args->WeightMatrix[k];
  }

  emxInit_real_T1(&b_b, 1);
  k = b_b->size[0];
  b_b->size[0] = args->ErrTemp->size[0];
  emxEnsureCapacity_real_T1(b_b, k);
  loop_ub = args->ErrTemp->size[0];
  for (k = 0; k < loop_ub; k++) {
    b_b->data[k] = args->ErrTemp->data[k];
  }

  st.site = &og_emlrtRSI;
  f_dynamic_size_checks(&st, b_b, b_b->size[0]);
  if (b_b->size[0] == 1) {
    for (k = 0; k < 6; k++) {
      y[k] = 0.0;
      for (loop_ub = 0; loop_ub < 6; loop_ub++) {
        b_y = y[k] + a[k + 6 * loop_ub] * b_b->data[loop_ub];
        y[k] = b_y;
      }
    }
  } else {
    for (loop_ub = 0; loop_ub < 6; loop_ub++) {
      y[loop_ub] = 0.0;
    }

    for (k = 0; k < 6; k++) {
      aoffset = k * 6 - 1;
      for (loop_ub = 0; loop_ub < 6; loop_ub++) {
        y[loop_ub] += b_b->data[k] * a[(aoffset + loop_ub) + 1];
      }
    }
  }

  emxFree_real_T(&b_b);
  return c_norm(y);
}

static void e_IKHelpers_computeCost(const emlrtStack *sp, real_T x[2],
  robotics_manip_internal_IKExtraArgs *args, real_T *cost, real_T W[36],
  emxArray_real_T *Jac, robotics_manip_internal_IKExtraArgs **b_args)
{
  emlrtStack st;
  emxArray_char_T *bodyName;
  robotics_manip_internal_RigidBodyTree_1 *treeInternal;
  int32_T i;
  int32_T loop_ub;
  real_T Td[16];
  emxArray_real_T *J;
  real_T T_data[16];
  int32_T T_size[2];
  real_T e[6];
  real_T y;
  real_T b_e[6];
  emxArray_real_T *b_y;
  st.prev = sp;
  st.tls = sp->tls;
  emxInit_char_T(&bodyName, 2);
  *b_args = args;
  treeInternal = (*b_args)->Robot;
  i = bodyName->size[0] * bodyName->size[1];
  bodyName->size[0] = 1;
  bodyName->size[1] = (*b_args)->BodyName->size[1];
  emxEnsureCapacity_char_T(bodyName, i);
  loop_ub = (*b_args)->BodyName->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    bodyName->data[i] = (*b_args)->BodyName->data[i];
  }

  for (i = 0; i < 16; i++) {
    Td[i] = (*b_args)->Tform[i];
  }

  for (i = 0; i < 36; i++) {
    W[i] = (*b_args)->WeightMatrix[i];
  }

  emxInit_real_T(&J, 2);
  st.site = &pg_emlrtRSI;
  e_RigidBodyTree_efficientFKAndJacobianForIK(&st, treeInternal, x, bodyName,
    T_data, T_size, J);
  i = Jac->size[0] * Jac->size[1];
  Jac->size[0] = 6;
  Jac->size[1] = J->size[1];
  emxEnsureCapacity_real_T(Jac, i);
  loop_ub = 6 * J->size[1] - 1;
  emxFree_char_T(&bodyName);
  for (i = 0; i <= loop_ub; i++) {
    Jac->data[i] = -J->data[i];
  }

  emxFree_real_T(&J);
  st.site = &qg_emlrtRSI;
  IKHelpers_poseError(&st, Td, T_data, T_size, e);
  i = (*b_args)->ErrTemp->size[0];
  (*b_args)->ErrTemp->size[0] = 6;
  emxEnsureCapacity_real_T1((*b_args)->ErrTemp, i);
  for (i = 0; i < 6; i++) {
    (*b_args)->ErrTemp->data[i] = e[i];
  }

  for (i = 0; i < 6; i++) {
    b_e[i] = 0.0;
    for (loop_ub = 0; loop_ub < 6; loop_ub++) {
      y = b_e[i] + 0.5 * e[loop_ub] * W[loop_ub + 6 * i];
      b_e[i] = y;
    }
  }

  y = 0.0;
  for (loop_ub = 0; loop_ub < 6; loop_ub++) {
    y += b_e[loop_ub] * e[loop_ub];
  }

  (*b_args)->CostTemp = y;
  for (i = 0; i < 6; i++) {
    b_e[i] = 0.0;
    for (loop_ub = 0; loop_ub < 6; loop_ub++) {
      y = b_e[i] + e[loop_ub] * W[loop_ub + 6 * i];
      b_e[i] = y;
    }
  }

  emxInit_real_T(&b_y, 2);
  st.site = &ng_emlrtRSI;
  b_mtimes(b_e, Jac, b_y);
  i = (*b_args)->GradTemp->size[0];
  (*b_args)->GradTemp->size[0] = b_y->size[1];
  emxEnsureCapacity_real_T1((*b_args)->GradTemp, i);
  loop_ub = b_y->size[1];
  for (i = 0; i < loop_ub; i++) {
    (*b_args)->GradTemp->data[i] = b_y->data[i];
  }

  emxFree_real_T(&b_y);
  y = (*b_args)->CostTemp;
  *cost = y;
}

static void e_RigidBodyTree_efficientFKAndJacobianForIK(const emlrtStack *sp,
  robotics_manip_internal_RigidBodyTree_1 *obj, real_T qv[2], emxArray_char_T
  *body1Name, real_T T_data[], int32_T T_size[2], emxArray_real_T *Jac)
{
  emlrtStack st;
  emlrtStack b_st;
  emxArray_char_T *body2Name;
  int32_T i;
  int32_T loop_ub;
  real_T bid1;
  real_T bid2;
  robotics_manip_internal_RigidBody_1 *body1;
  robotics_manip_internal_RigidBody_1 *body2;
  emxArray_real_T *ancestorIndices1;
  robotics_manip_internal_RigidBody_1 *body;
  uint32_T b_i;
  emxArray_real_T *ancestorIndices2;
  int32_T i1;
  uint32_T c_i;
  int32_T i2;
  int32_T minPathLength;
  int32_T d_i;
  boolean_T exitg1;
  emxArray_real_T *kinematicPathIndices;
  real_T T1[16];
  emxArray_real_T *JacSlice;
  emxArray_real_T *a;
  emxArray_real_T *joint;
  real_T b_T1[36];
  boolean_T nextBodyIsParent;
  emxArray_real_T *b_Jac;
  int32_T jointSign;
  rigidBodyJoint *b_joint;
  real_T Tc2p[16];
  real_T qidx[2];
  real_T R[9];
  real_T b_R[16];
  real_T c_R[9];
  int32_T qv_size[1];
  real_T d_R[3];
  real_T e_R[16];
  static int8_T iv[4] = { 0, 0, 0, 1 };

  real_T Tj1[16];
  real_T Tj[16];
  real_T T1j[16];
  real_T dv[9];
  int32_T iv1[2];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emxInit_char_T(&body2Name, 2);
  st.site = &xg_emlrtRSI;
  i = body2Name->size[0] * body2Name->size[1];
  body2Name->size[0] = 1;
  body2Name->size[1] = obj->Base.NameInternal->size[1];
  emxEnsureCapacity_char_T(body2Name, i);
  loop_ub = obj->Base.NameInternal->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    body2Name->data[i] = obj->Base.NameInternal->data[i];
  }

  st.site = &wg_emlrtRSI;
  bid1 = j_RigidBodyTree_validateInputBodyName(&st, obj, body1Name);
  st.site = &vg_emlrtRSI;
  bid2 = k_RigidBodyTree_validateInputBodyName(&st, obj, body2Name);
  emxFree_char_T(&body2Name);
  if (bid1 == 0.0) {
    body1 = &obj->Base;
  } else {
    body1 = obj->Bodies[emlrtDynamicBoundsCheckR2012b((int32_T)bid1 - 1, 0, 2,
      &sc_emlrtBCI, sp)];
  }

  if (bid2 == 0.0) {
    body2 = &obj->Base;
  } else {
    body2 = obj->Bodies[emlrtDynamicBoundsCheckR2012b((int32_T)bid2 - 1, 0, 2,
      &tc_emlrtBCI, sp)];
  }

  emxInit_real_T(&ancestorIndices1, 2);
  st.site = &ug_emlrtRSI;
  b_st.site = &yg_emlrtRSI;
  body = body1;
  i = ancestorIndices1->size[0] * ancestorIndices1->size[1];
  ancestorIndices1->size[0] = 1;
  bid1 = obj->NumBodies + 1.0;
  bid1 = emlrtNonNegativeCheckR2012b(bid1, &xb_emlrtDCI, &b_st);
  ancestorIndices1->size[1] = (int32_T)emlrtIntegerCheckR2012b(bid1,
    &wb_emlrtDCI, &b_st);
  emxEnsureCapacity_real_T(ancestorIndices1, i);
  bid1 = obj->NumBodies + 1.0;
  bid1 = emlrtNonNegativeCheckR2012b(bid1, &xb_emlrtDCI, &b_st);
  loop_ub = (int32_T)emlrtIntegerCheckR2012b(bid1, &wb_emlrtDCI, &b_st) - 1;
  for (i = 0; i <= loop_ub; i++) {
    ancestorIndices1->data[i] = 0.0;
  }

  b_i = 2U;
  i = ancestorIndices1->size[1];
  emlrtDynamicBoundsCheckR2012b(1, 1, i, &rc_emlrtBCI, &b_st);
  ancestorIndices1->data[0] = body1->Index;
  while (body->ParentIndex > 0.0) {
    i = (int32_T)emlrtIntegerCheckR2012b(body->ParentIndex, &bc_emlrtDCI, &b_st)
      - 1;
    body = obj->Bodies[emlrtDynamicBoundsCheckR2012b(i, 0, 2, &uc_emlrtBCI,
      &b_st)];
    i = ancestorIndices1->size[1];
    ancestorIndices1->data[emlrtDynamicBoundsCheckR2012b((int32_T)b_i, 1, i,
      &wc_emlrtBCI, &b_st) - 1] = body->Index;
    b_i++;
  }

  if (body->Index > 0.0) {
    i = ancestorIndices1->size[1];
    ancestorIndices1->data[emlrtDynamicBoundsCheckR2012b((int32_T)b_i, 1, i,
      &vc_emlrtBCI, &b_st) - 1] = body->ParentIndex;
    b_i++;
  }

  emxInit_real_T(&ancestorIndices2, 2);
  i = ancestorIndices1->size[1];
  emlrtDynamicBoundsCheckR2012b(1, 1, i, &qc_emlrtBCI, &b_st);
  i = ancestorIndices1->size[1];
  i = emlrtDynamicBoundsCheckR2012b((int32_T)(b_i - 1U), 1, i, &pc_emlrtBCI,
    &b_st);
  i1 = ancestorIndices1->size[0] * ancestorIndices1->size[1];
  ancestorIndices1->size[1] = (int32_T)(b_i - 1U);
  emxEnsureCapacity_real_T(ancestorIndices1, i1);
  b_st.site = &ah_emlrtRSI;
  body = body2;
  i1 = ancestorIndices2->size[0] * ancestorIndices2->size[1];
  ancestorIndices2->size[0] = 1;
  bid1 = obj->NumBodies + 1.0;
  bid1 = emlrtNonNegativeCheckR2012b(bid1, &xb_emlrtDCI, &b_st);
  ancestorIndices2->size[1] = (int32_T)emlrtIntegerCheckR2012b(bid1,
    &wb_emlrtDCI, &b_st);
  emxEnsureCapacity_real_T(ancestorIndices2, i1);
  bid1 = obj->NumBodies + 1.0;
  bid1 = emlrtNonNegativeCheckR2012b(bid1, &xb_emlrtDCI, &b_st);
  loop_ub = (int32_T)emlrtIntegerCheckR2012b(bid1, &wb_emlrtDCI, &b_st) - 1;
  for (i1 = 0; i1 <= loop_ub; i1++) {
    ancestorIndices2->data[i1] = 0.0;
  }

  c_i = 2U;
  i1 = ancestorIndices2->size[1];
  emlrtDynamicBoundsCheckR2012b(1, 1, i1, &rc_emlrtBCI, &b_st);
  ancestorIndices2->data[0] = body2->Index;
  while (body->ParentIndex > 0.0) {
    i1 = (int32_T)emlrtIntegerCheckR2012b(body->ParentIndex, &bc_emlrtDCI, &b_st)
      - 1;
    body = obj->Bodies[emlrtDynamicBoundsCheckR2012b(i1, 0, 2, &uc_emlrtBCI,
      &b_st)];
    i1 = ancestorIndices2->size[1];
    ancestorIndices2->data[emlrtDynamicBoundsCheckR2012b((int32_T)c_i, 1, i1,
      &wc_emlrtBCI, &b_st) - 1] = body->Index;
    c_i++;
  }

  if (body->Index > 0.0) {
    i1 = ancestorIndices2->size[1];
    ancestorIndices2->data[emlrtDynamicBoundsCheckR2012b((int32_T)c_i, 1, i1,
      &vc_emlrtBCI, &b_st) - 1] = body->ParentIndex;
    c_i++;
  }

  i1 = ancestorIndices2->size[1];
  emlrtDynamicBoundsCheckR2012b(1, 1, i1, &qc_emlrtBCI, &b_st);
  i1 = ancestorIndices2->size[1];
  i1 = emlrtDynamicBoundsCheckR2012b((int32_T)(c_i - 1U), 1, i1, &pc_emlrtBCI,
    &b_st);
  i2 = ancestorIndices2->size[0] * ancestorIndices2->size[1];
  ancestorIndices2->size[1] = (int32_T)(c_i - 1U);
  emxEnsureCapacity_real_T(ancestorIndices2, i2);
  minPathLength = (int32_T)muDoubleScalarMin((real_T)b_i - 1.0, (real_T)c_i -
    1.0);
  d_i = 1;
  exitg1 = false;
  while ((!exitg1) && (d_i - 1 <= minPathLength - 2)) {
    if (ancestorIndices1->data[emlrtDynamicBoundsCheckR2012b(i - d_i, 1, i,
         &xc_emlrtBCI, &st) - 1] != ancestorIndices2->
        data[emlrtDynamicBoundsCheckR2012b(i1 - d_i, 1, i1, &yc_emlrtBCI, &st) -
        1]) {
      minPathLength = d_i;
      exitg1 = true;
    } else {
      d_i++;
    }
  }

  bid1 = ancestorIndices1->data[emlrtDynamicBoundsCheckR2012b((i - minPathLength)
    + 1, 1, i, &ad_emlrtBCI, &st) - 1];
  i2 = i - minPathLength;
  if (1 > i2) {
    loop_ub = -1;
  } else {
    loop_ub = emlrtDynamicBoundsCheckR2012b(i2, 1, i, &nc_emlrtBCI, &st) - 1;
  }

  i = i1 - minPathLength;
  if (1 > i) {
    i = 0;
    i1 = 1;
    i2 = -1;
  } else {
    i = emlrtDynamicBoundsCheckR2012b(i, 1, i1, &oc_emlrtBCI, &st) - 1;
    i1 = -1;
    i2 = 0;
  }

  emxInit_real_T(&kinematicPathIndices, 2);
  minPathLength = kinematicPathIndices->size[0] * kinematicPathIndices->size[1];
  kinematicPathIndices->size[0] = 1;
  b_st.site = &ug_emlrtRSI;
  kinematicPathIndices->size[1] = (loop_ub + div_s32_floor(&b_st, i2 - i, i1)) +
    3;
  emxEnsureCapacity_real_T(kinematicPathIndices, minPathLength);
  for (minPathLength = 0; minPathLength <= loop_ub; minPathLength++) {
    kinematicPathIndices->data[minPathLength] = ancestorIndices1->
      data[minPathLength];
  }

  emxFree_real_T(&ancestorIndices1);
  kinematicPathIndices->data[loop_ub + 1] = bid1;
  b_st.site = &am_emlrtRSI;
  minPathLength = div_s32_floor(&b_st, i2 - i, i1);
  for (i2 = 0; i2 <= minPathLength; i2++) {
    kinematicPathIndices->data[(i2 + loop_ub) + 2] = ancestorIndices2->data[i +
      i1 * i2];
  }

  emxFree_real_T(&ancestorIndices2);
  for (i = 0; i < 16; i++) {
    T1[i] = 0.0;
  }

  for (minPathLength = 0; minPathLength < 4; minPathLength++) {
    T1[minPathLength + (minPathLength << 2)] = 1.0;
  }

  i = Jac->size[0] * Jac->size[1];
  Jac->size[0] = 6;
  bid1 = emlrtNonNegativeCheckR2012b(obj->PositionNumber, &ac_emlrtDCI, sp);
  Jac->size[1] = (int32_T)emlrtIntegerCheckR2012b(bid1, &yb_emlrtDCI, sp);
  emxEnsureCapacity_real_T(Jac, i);
  bid1 = emlrtNonNegativeCheckR2012b(obj->PositionNumber, &ac_emlrtDCI, sp);
  loop_ub = 6 * (int32_T)emlrtIntegerCheckR2012b(bid1, &yb_emlrtDCI, sp) - 1;
  for (i = 0; i <= loop_ub; i++) {
    Jac->data[i] = 0.0;
  }

  i = kinematicPathIndices->size[1] - 2;
  emxInit_real_T(&JacSlice, 2);
  emxInit_real_T(&a, 2);
  emxInit_real_T(&joint, 2);
  for (d_i = 0; d_i <= i; d_i++) {
    i1 = kinematicPathIndices->size[1];
    if (kinematicPathIndices->data[emlrtDynamicBoundsCheckR2012b(d_i + 1, 1, i1,
         &bd_emlrtBCI, sp) - 1] != 0.0) {
      i1 = kinematicPathIndices->size[1];
      bid1 = kinematicPathIndices->data[emlrtDynamicBoundsCheckR2012b(d_i + 1, 1,
        i1, &ed_emlrtBCI, sp) - 1];
      i1 = (int32_T)emlrtIntegerCheckR2012b(bid1, &cc_emlrtDCI, sp) - 1;
      body1 = obj->Bodies[emlrtDynamicBoundsCheckR2012b(i1, 0, 2, &dd_emlrtBCI,
        sp)];
    } else {
      body1 = &obj->Base;
    }

    i1 = kinematicPathIndices->size[1];
    if (kinematicPathIndices->data[emlrtDynamicBoundsCheckR2012b(d_i + 2, 1, i1,
         &cd_emlrtBCI, sp) - 1] != 0.0) {
      i1 = kinematicPathIndices->size[1];
      bid1 = kinematicPathIndices->data[emlrtDynamicBoundsCheckR2012b(d_i + 2, 1,
        i1, &gd_emlrtBCI, sp) - 1];
      i1 = (int32_T)emlrtIntegerCheckR2012b(bid1, &dc_emlrtDCI, sp) - 1;
      body2 = obj->Bodies[emlrtDynamicBoundsCheckR2012b(i1, 0, 2, &fd_emlrtBCI,
        sp)];
    } else {
      body2 = &obj->Base;
    }

    nextBodyIsParent = (body2->Index == body1->ParentIndex);
    if (nextBodyIsParent) {
      body2 = body1;
      jointSign = 1;
    } else {
      jointSign = -1;
    }

    b_joint = body2->JointInternal;
    if (e_strcmp(b_joint->Type)) {
      st.site = &tg_emlrtRSI;
      rigidBodyJoint_transformBodyToParent(&st, b_joint, Tc2p);
    } else {
      i1 = (int32_T)emlrtIntegerCheckR2012b(body2->Index, &vb_emlrtDCI, sp);
      minPathLength = emlrtDynamicBoundsCheckR2012b(i1, 1, 3, &mc_emlrtBCI, sp);
      for (i1 = 0; i1 < 2; i1++) {
        qidx[i1] = obj->PositionDoFMap[(minPathLength + 3 * i1) - 1];
      }

      if (qidx[0] > qidx[1]) {
        i1 = 0;
        i2 = -1;
      } else {
        i1 = (int32_T)emlrtIntegerCheckR2012b(qidx[0], &ub_emlrtDCI, sp);
        i1 = emlrtDynamicBoundsCheckR2012b(i1, 1, 2, &lc_emlrtBCI, sp) - 1;
        i2 = (int32_T)emlrtIntegerCheckR2012b(qidx[1], &tb_emlrtDCI, sp);
        i2 = emlrtDynamicBoundsCheckR2012b(i2, 1, 2, &kc_emlrtBCI, sp) - 1;
      }

      qv_size[0] = (i2 - i1) + 1;
      loop_ub = i2 - i1;
      for (i2 = 0; i2 <= loop_ub; i2++) {
        qidx[i2] = qv[i1 + i2];
      }

      st.site = &sg_emlrtRSI;
      b_rigidBodyJoint_transformBodyToParent(&st, b_joint, qidx, qv_size, Tc2p);
      i1 = (int32_T)emlrtIntegerCheckR2012b(body2->Index, &sb_emlrtDCI, sp);
      minPathLength = emlrtDynamicBoundsCheckR2012b(i1, 1, 3, &jc_emlrtBCI, sp);
      for (i1 = 0; i1 < 2; i1++) {
        qidx[i1] = obj->VelocityDoFMap[(minPathLength + 3 * i1) - 1];
      }

      if (nextBodyIsParent) {
        for (i1 = 0; i1 < 16; i1++) {
          Tj[i1] = b_joint->ChildToJointTransform[i1];
        }
      } else {
        for (i1 = 0; i1 < 16; i1++) {
          Tj1[i1] = b_joint->JointToParentTransform[i1];
        }

        for (i1 = 0; i1 < 3; i1++) {
          for (i2 = 0; i2 < 3; i2++) {
            R[i2 + 3 * i1] = Tj1[i1 + (i2 << 2)];
          }
        }

        for (i1 = 0; i1 < 9; i1++) {
          c_R[i1] = -R[i1];
        }

        for (i1 = 0; i1 < 3; i1++) {
          d_R[i1] = 0.0;
          for (i2 = 0; i2 < 3; i2++) {
            Tj[i2 + (i1 << 2)] = R[i2 + 3 * i1];
            d_R[i1] += c_R[i1 + 3 * i2] * Tj1[i2 + 12];
          }

          Tj[i1 + 12] = d_R[i1];
        }

        for (i1 = 0; i1 < 4; i1++) {
          Tj[(i1 << 2) + 3] = (real_T)iv[i1];
        }
      }

      for (i1 = 0; i1 < 4; i1++) {
        for (i2 = 0; i2 < 4; i2++) {
          T1j[i1 + (i2 << 2)] = 0.0;
          for (minPathLength = 0; minPathLength < 4; minPathLength++) {
            T1j[i1 + (i2 << 2)] += Tj[i1 + (minPathLength << 2)] *
              T1[minPathLength + (i2 << 2)];
          }
        }
      }

      for (i1 = 0; i1 < 3; i1++) {
        for (i2 = 0; i2 < 3; i2++) {
          R[i2 + 3 * i1] = T1j[i1 + (i2 << 2)];
        }
      }

      for (i1 = 0; i1 < 9; i1++) {
        c_R[i1] = -R[i1];
      }

      for (i1 = 0; i1 < 3; i1++) {
        d_R[i1] = 0.0;
        for (i2 = 0; i2 < 3; i2++) {
          Tj1[i2 + (i1 << 2)] = R[i2 + 3 * i1];
          d_R[i1] += c_R[i1 + 3 * i2] * T1j[i2 + 12];
        }

        Tj1[i1 + 12] = d_R[i1];
      }

      for (i1 = 0; i1 < 4; i1++) {
        Tj1[(i1 << 2) + 3] = (real_T)iv[i1];
      }

      for (i1 = 0; i1 < 3; i1++) {
        for (i2 = 0; i2 < 3; i2++) {
          R[i2 + 3 * i1] = Tj1[i2 + (i1 << 2)];
        }
      }

      c_R[0] = 0.0;
      c_R[3] = -Tj1[14];
      c_R[6] = Tj1[13];
      c_R[1] = Tj1[14];
      c_R[4] = 0.0;
      c_R[7] = -Tj1[12];
      c_R[2] = -Tj1[13];
      c_R[5] = Tj1[12];
      c_R[8] = 0.0;
      for (i1 = 0; i1 < 3; i1++) {
        for (i2 = 0; i2 < 3; i2++) {
          dv[i1 + 3 * i2] = 0.0;
          for (minPathLength = 0; minPathLength < 3; minPathLength++) {
            dv[i1 + 3 * i2] += c_R[i1 + 3 * minPathLength] * R[minPathLength + 3
              * i2];
          }

          b_T1[i2 + 6 * i1] = R[i2 + 3 * i1];
          b_T1[i2 + 6 * (i1 + 3)] = 0.0;
        }
      }

      for (i1 = 0; i1 < 3; i1++) {
        for (i2 = 0; i2 < 3; i2++) {
          b_T1[(i2 + 6 * i1) + 3] = dv[i2 + 3 * i1];
          b_T1[(i2 + 6 * (i1 + 3)) + 3] = R[i2 + 3 * i1];
        }
      }

      i1 = joint->size[0] * joint->size[1];
      joint->size[0] = 6;
      joint->size[1] = b_joint->MotionSubspace->size[1];
      emxEnsureCapacity_real_T(joint, i1);
      loop_ub = b_joint->MotionSubspace->size[0] * b_joint->MotionSubspace->
        size[1];
      for (i1 = 0; i1 < loop_ub; i1++) {
        joint->data[i1] = b_joint->MotionSubspace->data[i1];
      }

      st.site = &rg_emlrtRSI;
      eml_mtimes_helper(b_T1, joint, a);
      i1 = JacSlice->size[0] * JacSlice->size[1];
      JacSlice->size[0] = 6;
      JacSlice->size[1] = a->size[1];
      emxEnsureCapacity_real_T(JacSlice, i1);
      loop_ub = 6 * a->size[1] - 1;
      for (i1 = 0; i1 <= loop_ub; i1++) {
        JacSlice->data[i1] = a->data[i1] * (real_T)jointSign;
      }

      if (qidx[0] > qidx[1]) {
        i1 = 0;
        i2 = -1;
      } else {
        i1 = Jac->size[1];
        i2 = (int32_T)emlrtIntegerCheckR2012b(qidx[0], &rb_emlrtDCI, sp);
        i1 = emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &ic_emlrtBCI, sp) - 1;
        i2 = Jac->size[1];
        minPathLength = (int32_T)emlrtIntegerCheckR2012b(qidx[1], &qb_emlrtDCI,
          sp);
        i2 = emlrtDynamicBoundsCheckR2012b(minPathLength, 1, i2, &hc_emlrtBCI,
          sp) - 1;
      }

      iv1[0] = 6;
      iv1[1] = (i2 - i1) + 1;
      emlrtSubAssignSizeCheckR2012b(iv1, 2, *(int32_T (*)[2])JacSlice->size, 2,
        &x_emlrtECI, sp);
      loop_ub = JacSlice->size[1];
      for (i2 = 0; i2 < loop_ub; i2++) {
        for (minPathLength = 0; minPathLength < 6; minPathLength++) {
          Jac->data[minPathLength + 6 * (i1 + i2)] = JacSlice->
            data[minPathLength + 6 * i2];
        }
      }
    }

    if (nextBodyIsParent) {
      for (i1 = 0; i1 < 4; i1++) {
        for (i2 = 0; i2 < 4; i2++) {
          b_R[i1 + (i2 << 2)] = 0.0;
          for (minPathLength = 0; minPathLength < 4; minPathLength++) {
            b_R[i1 + (i2 << 2)] += Tc2p[i1 + (minPathLength << 2)] *
              T1[minPathLength + (i2 << 2)];
          }
        }
      }

      memcpy(&T1[0], &b_R[0], sizeof(real_T) << 4);
    } else {
      for (i1 = 0; i1 < 3; i1++) {
        for (i2 = 0; i2 < 3; i2++) {
          R[i2 + 3 * i1] = Tc2p[i1 + (i2 << 2)];
        }
      }

      for (i1 = 0; i1 < 9; i1++) {
        c_R[i1] = -R[i1];
      }

      for (i1 = 0; i1 < 3; i1++) {
        d_R[i1] = 0.0;
        for (i2 = 0; i2 < 3; i2++) {
          e_R[i2 + (i1 << 2)] = R[i2 + 3 * i1];
          d_R[i1] += c_R[i1 + 3 * i2] * Tc2p[i2 + 12];
        }

        e_R[i1 + 12] = d_R[i1];
      }

      for (i1 = 0; i1 < 4; i1++) {
        e_R[(i1 << 2) + 3] = (real_T)iv[i1];
      }

      for (i1 = 0; i1 < 4; i1++) {
        for (i2 = 0; i2 < 4; i2++) {
          b_R[i1 + (i2 << 2)] = 0.0;
          for (minPathLength = 0; minPathLength < 4; minPathLength++) {
            b_R[i1 + (i2 << 2)] += e_R[i1 + (minPathLength << 2)] *
              T1[minPathLength + (i2 << 2)];
          }
        }
      }

      memcpy(&T1[0], &b_R[0], sizeof(real_T) << 4);
    }
  }

  emxFree_real_T(&joint);
  emxFree_real_T(&a);
  emxFree_real_T(&JacSlice);
  emxFree_real_T(&kinematicPathIndices);
  for (i = 0; i < 3; i++) {
    for (i1 = 0; i1 < 3; i1++) {
      b_T1[i1 + 6 * i] = T1[i1 + (i << 2)];
      b_T1[i1 + 6 * (i + 3)] = 0.0;
      b_T1[(i1 + 6 * i) + 3] = 0.0;
      b_T1[(i1 + 6 * (i + 3)) + 3] = T1[i1 + (i << 2)];
    }
  }

  emxInit_real_T(&b_Jac, 2);
  i = b_Jac->size[0] * b_Jac->size[1];
  b_Jac->size[0] = 6;
  b_Jac->size[1] = Jac->size[1];
  emxEnsureCapacity_real_T(b_Jac, i);
  loop_ub = Jac->size[0] * Jac->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_Jac->data[i] = Jac->data[i];
  }

  st.site = &ng_emlrtRSI;
  mtimes(b_T1, b_Jac, Jac);
  T_size[0] = 4;
  T_size[1] = 4;
  emxFree_real_T(&b_Jac);
  for (i = 0; i < 16; i++) {
    T_data[i] = T1[i];
  }
}

static real_T j_RigidBodyTree_validateInputBodyName(const emlrtStack *sp,
  robotics_manip_internal_RigidBodyTree_1 *obj, emxArray_char_T *bodyname)
{
  real_T bid;
  emlrtStack st;
  emlrtStack b_st;
  emxArray_char_T *bname;
  int32_T i;
  int32_T loop_ub;
  real_T d;
  int32_T b_i;
  boolean_T exitg1;
  robotics_manip_internal_RigidBody_1 *b_obj;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emxInit_char_T(&bname, 2);
  st.site = &jc_emlrtRSI;
  bid = -1.0;
  b_st.site = &tb_emlrtRSI;
  b_validateattributes(&b_st, bodyname);
  b_st.site = &ub_emlrtRSI;
  i = bname->size[0] * bname->size[1];
  bname->size[0] = 1;
  bname->size[1] = obj->Base.NameInternal->size[1];
  emxEnsureCapacity_char_T(bname, i);
  loop_ub = obj->Base.NameInternal->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    bname->data[i] = obj->Base.NameInternal->data[i];
  }

  if (d_strcmp(bname, bodyname)) {
    bid = 0.0;
  } else {
    d = obj->NumBodies;
    emlrtForLoopVectorCheckR2012b(1.0, 1.0, d, mxDOUBLE_CLASS, (int32_T)d,
      &emlrtRTEI, &st);
    b_i = 0;
    exitg1 = false;
    while ((!exitg1) && (b_i <= (int32_T)d - 1)) {
      b_st.site = &vb_emlrtRSI;
      b_obj = obj->Bodies[emlrtDynamicBoundsCheckR2012b(b_i, 0, 2, &emlrtBCI,
        &b_st)];
      i = bname->size[0] * bname->size[1];
      bname->size[0] = 1;
      bname->size[1] = b_obj->NameInternal->size[1];
      emxEnsureCapacity_char_T(bname, i);
      loop_ub = b_obj->NameInternal->size[1] - 1;
      for (i = 0; i <= loop_ub; i++) {
        bname->data[i] = b_obj->NameInternal->data[i];
      }

      if (d_strcmp(bname, bodyname)) {
        bid = (real_T)b_i + 1.0;
        exitg1 = true;
      } else {
        b_i++;
      }
    }
  }

  emxFree_char_T(&bname);
  if (bid == -1.0) {
    st.site = &kc_emlrtRSI;
    c_error(&st, bodyname);
  }

  return bid;
}

static real_T k_RigidBodyTree_validateInputBodyName(const emlrtStack *sp,
  robotics_manip_internal_RigidBodyTree_1 *obj, emxArray_char_T *bodyname)
{
  real_T bid;
  emlrtStack st;
  emlrtStack b_st;
  emxArray_char_T *bname;
  int32_T i;
  int32_T loop_ub;
  real_T d;
  int32_T b_i;
  boolean_T exitg1;
  robotics_manip_internal_RigidBody_1 *b_obj;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emxInit_char_T(&bname, 2);
  st.site = &jc_emlrtRSI;
  bid = -1.0;
  b_st.site = &tb_emlrtRSI;
  b_validateattributes(&b_st, bodyname);
  b_st.site = &ub_emlrtRSI;
  i = bname->size[0] * bname->size[1];
  bname->size[0] = 1;
  bname->size[1] = obj->Base.NameInternal->size[1];
  emxEnsureCapacity_char_T(bname, i);
  loop_ub = obj->Base.NameInternal->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    bname->data[i] = obj->Base.NameInternal->data[i];
  }

  if (d_strcmp(bname, bodyname)) {
    bid = 0.0;
  } else {
    d = obj->NumBodies;
    emlrtForLoopVectorCheckR2012b(1.0, 1.0, d, mxDOUBLE_CLASS, (int32_T)d,
      &emlrtRTEI, &st);
    b_i = 0;
    exitg1 = false;
    while ((!exitg1) && (b_i <= (int32_T)d - 1)) {
      b_st.site = &vb_emlrtRSI;
      b_obj = obj->Bodies[emlrtDynamicBoundsCheckR2012b(b_i, 0, 2, &emlrtBCI,
        &b_st)];
      i = bname->size[0] * bname->size[1];
      bname->size[0] = 1;
      bname->size[1] = b_obj->NameInternal->size[1];
      emxEnsureCapacity_char_T(bname, i);
      loop_ub = b_obj->NameInternal->size[1] - 1;
      for (i = 0; i <= loop_ub; i++) {
        bname->data[i] = b_obj->NameInternal->data[i];
      }

      if (d_strcmp(bname, bodyname)) {
        bid = (real_T)b_i + 1.0;
        exitg1 = true;
      } else {
        b_i++;
      }
    }
  }

  emxFree_char_T(&bname);
  if (bid == -1.0) {
    st.site = &kc_emlrtRSI;
    c_error(&st, bodyname);
  }

  return bid;
}

static real_T i_IKHelpers_evaluateSolution(const emlrtStack *sp,
  robotics_manip_internal_IKExtraArgs *args)
{
  emlrtStack st;
  real_T y[6];
  real_T a[36];
  int32_T k;
  emxArray_real_T *b_b;
  int32_T loop_ub;
  int32_T aoffset;
  real_T b_y;
  st.prev = sp;
  st.tls = sp->tls;
  for (k = 0; k < 36; k++) {
    a[k] = args->WeightMatrix[k];
  }

  emxInit_real_T1(&b_b, 1);
  k = b_b->size[0];
  b_b->size[0] = args->ErrTemp->size[0];
  emxEnsureCapacity_real_T1(b_b, k);
  loop_ub = args->ErrTemp->size[0];
  for (k = 0; k < loop_ub; k++) {
    b_b->data[k] = args->ErrTemp->data[k];
  }

  st.site = &og_emlrtRSI;
  f_dynamic_size_checks(&st, b_b, b_b->size[0]);
  if (b_b->size[0] == 1) {
    for (k = 0; k < 6; k++) {
      y[k] = 0.0;
      for (loop_ub = 0; loop_ub < 6; loop_ub++) {
        b_y = y[k] + a[k + 6 * loop_ub] * b_b->data[loop_ub];
        y[k] = b_y;
      }
    }
  } else {
    for (loop_ub = 0; loop_ub < 6; loop_ub++) {
      y[loop_ub] = 0.0;
    }

    for (k = 0; k < 6; k++) {
      aoffset = k * 6 - 1;
      for (loop_ub = 0; loop_ub < 6; loop_ub++) {
        y[loop_ub] += b_b->data[k] * a[(aoffset + loop_ub) + 1];
      }
    }
  }

  emxFree_real_T(&b_b);
  return c_norm(y);
}

static void f_IKHelpers_computeCost(const emlrtStack *sp, real_T x[2],
  robotics_manip_internal_IKExtraArgs *args, real_T *cost, real_T W[36],
  emxArray_real_T *Jac, robotics_manip_internal_IKExtraArgs **b_args)
{
  emlrtStack st;
  emxArray_char_T *bodyName;
  robotics_manip_internal_RigidBodyTree_1 *treeInternal;
  int32_T i;
  int32_T loop_ub;
  real_T Td[16];
  emxArray_real_T *J;
  real_T T_data[16];
  int32_T T_size[2];
  real_T e[6];
  real_T y;
  real_T b_e[6];
  emxArray_real_T *b_y;
  st.prev = sp;
  st.tls = sp->tls;
  emxInit_char_T(&bodyName, 2);
  *b_args = args;
  treeInternal = (*b_args)->Robot;
  i = bodyName->size[0] * bodyName->size[1];
  bodyName->size[0] = 1;
  bodyName->size[1] = (*b_args)->BodyName->size[1];
  emxEnsureCapacity_char_T(bodyName, i);
  loop_ub = (*b_args)->BodyName->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    bodyName->data[i] = (*b_args)->BodyName->data[i];
  }

  for (i = 0; i < 16; i++) {
    Td[i] = (*b_args)->Tform[i];
  }

  for (i = 0; i < 36; i++) {
    W[i] = (*b_args)->WeightMatrix[i];
  }

  emxInit_real_T(&J, 2);
  st.site = &pg_emlrtRSI;
  f_RigidBodyTree_efficientFKAndJacobianForIK(&st, treeInternal, x, bodyName,
    T_data, T_size, J);
  i = Jac->size[0] * Jac->size[1];
  Jac->size[0] = 6;
  Jac->size[1] = J->size[1];
  emxEnsureCapacity_real_T(Jac, i);
  loop_ub = 6 * J->size[1] - 1;
  emxFree_char_T(&bodyName);
  for (i = 0; i <= loop_ub; i++) {
    Jac->data[i] = -J->data[i];
  }

  emxFree_real_T(&J);
  st.site = &qg_emlrtRSI;
  IKHelpers_poseError(&st, Td, T_data, T_size, e);
  i = (*b_args)->ErrTemp->size[0];
  (*b_args)->ErrTemp->size[0] = 6;
  emxEnsureCapacity_real_T1((*b_args)->ErrTemp, i);
  for (i = 0; i < 6; i++) {
    (*b_args)->ErrTemp->data[i] = e[i];
  }

  for (i = 0; i < 6; i++) {
    b_e[i] = 0.0;
    for (loop_ub = 0; loop_ub < 6; loop_ub++) {
      y = b_e[i] + 0.5 * e[loop_ub] * W[loop_ub + 6 * i];
      b_e[i] = y;
    }
  }

  y = 0.0;
  for (loop_ub = 0; loop_ub < 6; loop_ub++) {
    y += b_e[loop_ub] * e[loop_ub];
  }

  (*b_args)->CostTemp = y;
  for (i = 0; i < 6; i++) {
    b_e[i] = 0.0;
    for (loop_ub = 0; loop_ub < 6; loop_ub++) {
      y = b_e[i] + e[loop_ub] * W[loop_ub + 6 * i];
      b_e[i] = y;
    }
  }

  emxInit_real_T(&b_y, 2);
  st.site = &ng_emlrtRSI;
  b_mtimes(b_e, Jac, b_y);
  i = (*b_args)->GradTemp->size[0];
  (*b_args)->GradTemp->size[0] = b_y->size[1];
  emxEnsureCapacity_real_T1((*b_args)->GradTemp, i);
  loop_ub = b_y->size[1];
  for (i = 0; i < loop_ub; i++) {
    (*b_args)->GradTemp->data[i] = b_y->data[i];
  }

  emxFree_real_T(&b_y);
  y = (*b_args)->CostTemp;
  *cost = y;
}

static void f_RigidBodyTree_efficientFKAndJacobianForIK(const emlrtStack *sp,
  robotics_manip_internal_RigidBodyTree_1 *obj, real_T qv[2], emxArray_char_T
  *body1Name, real_T T_data[], int32_T T_size[2], emxArray_real_T *Jac)
{
  emlrtStack st;
  emlrtStack b_st;
  emxArray_char_T *body2Name;
  int32_T i;
  int32_T loop_ub;
  real_T bid1;
  real_T bid2;
  robotics_manip_internal_RigidBody_1 *body1;
  robotics_manip_internal_RigidBody_1 *body2;
  emxArray_real_T *ancestorIndices1;
  robotics_manip_internal_RigidBody_1 *body;
  uint32_T b_i;
  emxArray_real_T *ancestorIndices2;
  int32_T i1;
  uint32_T c_i;
  int32_T i2;
  int32_T minPathLength;
  int32_T d_i;
  boolean_T exitg1;
  emxArray_real_T *kinematicPathIndices;
  real_T T1[16];
  emxArray_real_T *JacSlice;
  emxArray_real_T *a;
  emxArray_real_T *joint;
  real_T b_T1[36];
  boolean_T nextBodyIsParent;
  emxArray_real_T *b_Jac;
  int32_T jointSign;
  rigidBodyJoint *b_joint;
  real_T Tc2p[16];
  real_T qidx[2];
  real_T R[9];
  real_T b_R[16];
  real_T c_R[9];
  int32_T qv_size[1];
  real_T d_R[3];
  real_T e_R[16];
  static int8_T iv[4] = { 0, 0, 0, 1 };

  real_T Tj1[16];
  real_T Tj[16];
  real_T T1j[16];
  real_T dv[9];
  int32_T iv1[2];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emxInit_char_T(&body2Name, 2);
  st.site = &xg_emlrtRSI;
  i = body2Name->size[0] * body2Name->size[1];
  body2Name->size[0] = 1;
  body2Name->size[1] = obj->Base.NameInternal->size[1];
  emxEnsureCapacity_char_T(body2Name, i);
  loop_ub = obj->Base.NameInternal->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    body2Name->data[i] = obj->Base.NameInternal->data[i];
  }

  st.site = &wg_emlrtRSI;
  bid1 = l_RigidBodyTree_validateInputBodyName(&st, obj, body1Name);
  st.site = &vg_emlrtRSI;
  bid2 = m_RigidBodyTree_validateInputBodyName(&st, obj, body2Name);
  emxFree_char_T(&body2Name);
  if (bid1 == 0.0) {
    body1 = &obj->Base;
  } else {
    body1 = obj->Bodies[emlrtDynamicBoundsCheckR2012b((int32_T)bid1 - 1, 0, 2,
      &sc_emlrtBCI, sp)];
  }

  if (bid2 == 0.0) {
    body2 = &obj->Base;
  } else {
    body2 = obj->Bodies[emlrtDynamicBoundsCheckR2012b((int32_T)bid2 - 1, 0, 2,
      &tc_emlrtBCI, sp)];
  }

  emxInit_real_T(&ancestorIndices1, 2);
  st.site = &ug_emlrtRSI;
  b_st.site = &yg_emlrtRSI;
  body = body1;
  i = ancestorIndices1->size[0] * ancestorIndices1->size[1];
  ancestorIndices1->size[0] = 1;
  bid1 = obj->NumBodies + 1.0;
  bid1 = emlrtNonNegativeCheckR2012b(bid1, &xb_emlrtDCI, &b_st);
  ancestorIndices1->size[1] = (int32_T)emlrtIntegerCheckR2012b(bid1,
    &wb_emlrtDCI, &b_st);
  emxEnsureCapacity_real_T(ancestorIndices1, i);
  bid1 = obj->NumBodies + 1.0;
  bid1 = emlrtNonNegativeCheckR2012b(bid1, &xb_emlrtDCI, &b_st);
  loop_ub = (int32_T)emlrtIntegerCheckR2012b(bid1, &wb_emlrtDCI, &b_st) - 1;
  for (i = 0; i <= loop_ub; i++) {
    ancestorIndices1->data[i] = 0.0;
  }

  b_i = 2U;
  i = ancestorIndices1->size[1];
  emlrtDynamicBoundsCheckR2012b(1, 1, i, &rc_emlrtBCI, &b_st);
  ancestorIndices1->data[0] = body1->Index;
  while (body->ParentIndex > 0.0) {
    i = (int32_T)emlrtIntegerCheckR2012b(body->ParentIndex, &bc_emlrtDCI, &b_st)
      - 1;
    body = obj->Bodies[emlrtDynamicBoundsCheckR2012b(i, 0, 2, &uc_emlrtBCI,
      &b_st)];
    i = ancestorIndices1->size[1];
    ancestorIndices1->data[emlrtDynamicBoundsCheckR2012b((int32_T)b_i, 1, i,
      &wc_emlrtBCI, &b_st) - 1] = body->Index;
    b_i++;
  }

  if (body->Index > 0.0) {
    i = ancestorIndices1->size[1];
    ancestorIndices1->data[emlrtDynamicBoundsCheckR2012b((int32_T)b_i, 1, i,
      &vc_emlrtBCI, &b_st) - 1] = body->ParentIndex;
    b_i++;
  }

  emxInit_real_T(&ancestorIndices2, 2);
  i = ancestorIndices1->size[1];
  emlrtDynamicBoundsCheckR2012b(1, 1, i, &qc_emlrtBCI, &b_st);
  i = ancestorIndices1->size[1];
  i = emlrtDynamicBoundsCheckR2012b((int32_T)(b_i - 1U), 1, i, &pc_emlrtBCI,
    &b_st);
  i1 = ancestorIndices1->size[0] * ancestorIndices1->size[1];
  ancestorIndices1->size[1] = (int32_T)(b_i - 1U);
  emxEnsureCapacity_real_T(ancestorIndices1, i1);
  b_st.site = &ah_emlrtRSI;
  body = body2;
  i1 = ancestorIndices2->size[0] * ancestorIndices2->size[1];
  ancestorIndices2->size[0] = 1;
  bid1 = obj->NumBodies + 1.0;
  bid1 = emlrtNonNegativeCheckR2012b(bid1, &xb_emlrtDCI, &b_st);
  ancestorIndices2->size[1] = (int32_T)emlrtIntegerCheckR2012b(bid1,
    &wb_emlrtDCI, &b_st);
  emxEnsureCapacity_real_T(ancestorIndices2, i1);
  bid1 = obj->NumBodies + 1.0;
  bid1 = emlrtNonNegativeCheckR2012b(bid1, &xb_emlrtDCI, &b_st);
  loop_ub = (int32_T)emlrtIntegerCheckR2012b(bid1, &wb_emlrtDCI, &b_st) - 1;
  for (i1 = 0; i1 <= loop_ub; i1++) {
    ancestorIndices2->data[i1] = 0.0;
  }

  c_i = 2U;
  i1 = ancestorIndices2->size[1];
  emlrtDynamicBoundsCheckR2012b(1, 1, i1, &rc_emlrtBCI, &b_st);
  ancestorIndices2->data[0] = body2->Index;
  while (body->ParentIndex > 0.0) {
    i1 = (int32_T)emlrtIntegerCheckR2012b(body->ParentIndex, &bc_emlrtDCI, &b_st)
      - 1;
    body = obj->Bodies[emlrtDynamicBoundsCheckR2012b(i1, 0, 2, &uc_emlrtBCI,
      &b_st)];
    i1 = ancestorIndices2->size[1];
    ancestorIndices2->data[emlrtDynamicBoundsCheckR2012b((int32_T)c_i, 1, i1,
      &wc_emlrtBCI, &b_st) - 1] = body->Index;
    c_i++;
  }

  if (body->Index > 0.0) {
    i1 = ancestorIndices2->size[1];
    ancestorIndices2->data[emlrtDynamicBoundsCheckR2012b((int32_T)c_i, 1, i1,
      &vc_emlrtBCI, &b_st) - 1] = body->ParentIndex;
    c_i++;
  }

  i1 = ancestorIndices2->size[1];
  emlrtDynamicBoundsCheckR2012b(1, 1, i1, &qc_emlrtBCI, &b_st);
  i1 = ancestorIndices2->size[1];
  i1 = emlrtDynamicBoundsCheckR2012b((int32_T)(c_i - 1U), 1, i1, &pc_emlrtBCI,
    &b_st);
  i2 = ancestorIndices2->size[0] * ancestorIndices2->size[1];
  ancestorIndices2->size[1] = (int32_T)(c_i - 1U);
  emxEnsureCapacity_real_T(ancestorIndices2, i2);
  minPathLength = (int32_T)muDoubleScalarMin((real_T)b_i - 1.0, (real_T)c_i -
    1.0);
  d_i = 1;
  exitg1 = false;
  while ((!exitg1) && (d_i - 1 <= minPathLength - 2)) {
    if (ancestorIndices1->data[emlrtDynamicBoundsCheckR2012b(i - d_i, 1, i,
         &xc_emlrtBCI, &st) - 1] != ancestorIndices2->
        data[emlrtDynamicBoundsCheckR2012b(i1 - d_i, 1, i1, &yc_emlrtBCI, &st) -
        1]) {
      minPathLength = d_i;
      exitg1 = true;
    } else {
      d_i++;
    }
  }

  bid1 = ancestorIndices1->data[emlrtDynamicBoundsCheckR2012b((i - minPathLength)
    + 1, 1, i, &ad_emlrtBCI, &st) - 1];
  i2 = i - minPathLength;
  if (1 > i2) {
    loop_ub = -1;
  } else {
    loop_ub = emlrtDynamicBoundsCheckR2012b(i2, 1, i, &nc_emlrtBCI, &st) - 1;
  }

  i = i1 - minPathLength;
  if (1 > i) {
    i = 0;
    i1 = 1;
    i2 = -1;
  } else {
    i = emlrtDynamicBoundsCheckR2012b(i, 1, i1, &oc_emlrtBCI, &st) - 1;
    i1 = -1;
    i2 = 0;
  }

  emxInit_real_T(&kinematicPathIndices, 2);
  minPathLength = kinematicPathIndices->size[0] * kinematicPathIndices->size[1];
  kinematicPathIndices->size[0] = 1;
  b_st.site = &ug_emlrtRSI;
  kinematicPathIndices->size[1] = (loop_ub + div_s32_floor(&b_st, i2 - i, i1)) +
    3;
  emxEnsureCapacity_real_T(kinematicPathIndices, minPathLength);
  for (minPathLength = 0; minPathLength <= loop_ub; minPathLength++) {
    kinematicPathIndices->data[minPathLength] = ancestorIndices1->
      data[minPathLength];
  }

  emxFree_real_T(&ancestorIndices1);
  kinematicPathIndices->data[loop_ub + 1] = bid1;
  b_st.site = &am_emlrtRSI;
  minPathLength = div_s32_floor(&b_st, i2 - i, i1);
  for (i2 = 0; i2 <= minPathLength; i2++) {
    kinematicPathIndices->data[(i2 + loop_ub) + 2] = ancestorIndices2->data[i +
      i1 * i2];
  }

  emxFree_real_T(&ancestorIndices2);
  for (i = 0; i < 16; i++) {
    T1[i] = 0.0;
  }

  for (minPathLength = 0; minPathLength < 4; minPathLength++) {
    T1[minPathLength + (minPathLength << 2)] = 1.0;
  }

  i = Jac->size[0] * Jac->size[1];
  Jac->size[0] = 6;
  bid1 = emlrtNonNegativeCheckR2012b(obj->PositionNumber, &ac_emlrtDCI, sp);
  Jac->size[1] = (int32_T)emlrtIntegerCheckR2012b(bid1, &yb_emlrtDCI, sp);
  emxEnsureCapacity_real_T(Jac, i);
  bid1 = emlrtNonNegativeCheckR2012b(obj->PositionNumber, &ac_emlrtDCI, sp);
  loop_ub = 6 * (int32_T)emlrtIntegerCheckR2012b(bid1, &yb_emlrtDCI, sp) - 1;
  for (i = 0; i <= loop_ub; i++) {
    Jac->data[i] = 0.0;
  }

  i = kinematicPathIndices->size[1] - 2;
  emxInit_real_T(&JacSlice, 2);
  emxInit_real_T(&a, 2);
  emxInit_real_T(&joint, 2);
  for (d_i = 0; d_i <= i; d_i++) {
    i1 = kinematicPathIndices->size[1];
    if (kinematicPathIndices->data[emlrtDynamicBoundsCheckR2012b(d_i + 1, 1, i1,
         &bd_emlrtBCI, sp) - 1] != 0.0) {
      i1 = kinematicPathIndices->size[1];
      bid1 = kinematicPathIndices->data[emlrtDynamicBoundsCheckR2012b(d_i + 1, 1,
        i1, &ed_emlrtBCI, sp) - 1];
      i1 = (int32_T)emlrtIntegerCheckR2012b(bid1, &cc_emlrtDCI, sp) - 1;
      body1 = obj->Bodies[emlrtDynamicBoundsCheckR2012b(i1, 0, 2, &dd_emlrtBCI,
        sp)];
    } else {
      body1 = &obj->Base;
    }

    i1 = kinematicPathIndices->size[1];
    if (kinematicPathIndices->data[emlrtDynamicBoundsCheckR2012b(d_i + 2, 1, i1,
         &cd_emlrtBCI, sp) - 1] != 0.0) {
      i1 = kinematicPathIndices->size[1];
      bid1 = kinematicPathIndices->data[emlrtDynamicBoundsCheckR2012b(d_i + 2, 1,
        i1, &gd_emlrtBCI, sp) - 1];
      i1 = (int32_T)emlrtIntegerCheckR2012b(bid1, &dc_emlrtDCI, sp) - 1;
      body2 = obj->Bodies[emlrtDynamicBoundsCheckR2012b(i1, 0, 2, &fd_emlrtBCI,
        sp)];
    } else {
      body2 = &obj->Base;
    }

    nextBodyIsParent = (body2->Index == body1->ParentIndex);
    if (nextBodyIsParent) {
      body2 = body1;
      jointSign = 1;
    } else {
      jointSign = -1;
    }

    b_joint = body2->JointInternal;
    if (e_strcmp(b_joint->Type)) {
      st.site = &tg_emlrtRSI;
      rigidBodyJoint_transformBodyToParent(&st, b_joint, Tc2p);
    } else {
      i1 = (int32_T)emlrtIntegerCheckR2012b(body2->Index, &vb_emlrtDCI, sp);
      minPathLength = emlrtDynamicBoundsCheckR2012b(i1, 1, 3, &mc_emlrtBCI, sp);
      for (i1 = 0; i1 < 2; i1++) {
        qidx[i1] = obj->PositionDoFMap[(minPathLength + 3 * i1) - 1];
      }

      if (qidx[0] > qidx[1]) {
        i1 = 0;
        i2 = -1;
      } else {
        i1 = (int32_T)emlrtIntegerCheckR2012b(qidx[0], &ub_emlrtDCI, sp);
        i1 = emlrtDynamicBoundsCheckR2012b(i1, 1, 2, &lc_emlrtBCI, sp) - 1;
        i2 = (int32_T)emlrtIntegerCheckR2012b(qidx[1], &tb_emlrtDCI, sp);
        i2 = emlrtDynamicBoundsCheckR2012b(i2, 1, 2, &kc_emlrtBCI, sp) - 1;
      }

      qv_size[0] = (i2 - i1) + 1;
      loop_ub = i2 - i1;
      for (i2 = 0; i2 <= loop_ub; i2++) {
        qidx[i2] = qv[i1 + i2];
      }

      st.site = &sg_emlrtRSI;
      b_rigidBodyJoint_transformBodyToParent(&st, b_joint, qidx, qv_size, Tc2p);
      i1 = (int32_T)emlrtIntegerCheckR2012b(body2->Index, &sb_emlrtDCI, sp);
      minPathLength = emlrtDynamicBoundsCheckR2012b(i1, 1, 3, &jc_emlrtBCI, sp);
      for (i1 = 0; i1 < 2; i1++) {
        qidx[i1] = obj->VelocityDoFMap[(minPathLength + 3 * i1) - 1];
      }

      if (nextBodyIsParent) {
        for (i1 = 0; i1 < 16; i1++) {
          Tj[i1] = b_joint->ChildToJointTransform[i1];
        }
      } else {
        for (i1 = 0; i1 < 16; i1++) {
          Tj1[i1] = b_joint->JointToParentTransform[i1];
        }

        for (i1 = 0; i1 < 3; i1++) {
          for (i2 = 0; i2 < 3; i2++) {
            R[i2 + 3 * i1] = Tj1[i1 + (i2 << 2)];
          }
        }

        for (i1 = 0; i1 < 9; i1++) {
          c_R[i1] = -R[i1];
        }

        for (i1 = 0; i1 < 3; i1++) {
          d_R[i1] = 0.0;
          for (i2 = 0; i2 < 3; i2++) {
            Tj[i2 + (i1 << 2)] = R[i2 + 3 * i1];
            d_R[i1] += c_R[i1 + 3 * i2] * Tj1[i2 + 12];
          }

          Tj[i1 + 12] = d_R[i1];
        }

        for (i1 = 0; i1 < 4; i1++) {
          Tj[(i1 << 2) + 3] = (real_T)iv[i1];
        }
      }

      for (i1 = 0; i1 < 4; i1++) {
        for (i2 = 0; i2 < 4; i2++) {
          T1j[i1 + (i2 << 2)] = 0.0;
          for (minPathLength = 0; minPathLength < 4; minPathLength++) {
            T1j[i1 + (i2 << 2)] += Tj[i1 + (minPathLength << 2)] *
              T1[minPathLength + (i2 << 2)];
          }
        }
      }

      for (i1 = 0; i1 < 3; i1++) {
        for (i2 = 0; i2 < 3; i2++) {
          R[i2 + 3 * i1] = T1j[i1 + (i2 << 2)];
        }
      }

      for (i1 = 0; i1 < 9; i1++) {
        c_R[i1] = -R[i1];
      }

      for (i1 = 0; i1 < 3; i1++) {
        d_R[i1] = 0.0;
        for (i2 = 0; i2 < 3; i2++) {
          Tj1[i2 + (i1 << 2)] = R[i2 + 3 * i1];
          d_R[i1] += c_R[i1 + 3 * i2] * T1j[i2 + 12];
        }

        Tj1[i1 + 12] = d_R[i1];
      }

      for (i1 = 0; i1 < 4; i1++) {
        Tj1[(i1 << 2) + 3] = (real_T)iv[i1];
      }

      for (i1 = 0; i1 < 3; i1++) {
        for (i2 = 0; i2 < 3; i2++) {
          R[i2 + 3 * i1] = Tj1[i2 + (i1 << 2)];
        }
      }

      c_R[0] = 0.0;
      c_R[3] = -Tj1[14];
      c_R[6] = Tj1[13];
      c_R[1] = Tj1[14];
      c_R[4] = 0.0;
      c_R[7] = -Tj1[12];
      c_R[2] = -Tj1[13];
      c_R[5] = Tj1[12];
      c_R[8] = 0.0;
      for (i1 = 0; i1 < 3; i1++) {
        for (i2 = 0; i2 < 3; i2++) {
          dv[i1 + 3 * i2] = 0.0;
          for (minPathLength = 0; minPathLength < 3; minPathLength++) {
            dv[i1 + 3 * i2] += c_R[i1 + 3 * minPathLength] * R[minPathLength + 3
              * i2];
          }

          b_T1[i2 + 6 * i1] = R[i2 + 3 * i1];
          b_T1[i2 + 6 * (i1 + 3)] = 0.0;
        }
      }

      for (i1 = 0; i1 < 3; i1++) {
        for (i2 = 0; i2 < 3; i2++) {
          b_T1[(i2 + 6 * i1) + 3] = dv[i2 + 3 * i1];
          b_T1[(i2 + 6 * (i1 + 3)) + 3] = R[i2 + 3 * i1];
        }
      }

      i1 = joint->size[0] * joint->size[1];
      joint->size[0] = 6;
      joint->size[1] = b_joint->MotionSubspace->size[1];
      emxEnsureCapacity_real_T(joint, i1);
      loop_ub = b_joint->MotionSubspace->size[0] * b_joint->MotionSubspace->
        size[1];
      for (i1 = 0; i1 < loop_ub; i1++) {
        joint->data[i1] = b_joint->MotionSubspace->data[i1];
      }

      st.site = &rg_emlrtRSI;
      eml_mtimes_helper(b_T1, joint, a);
      i1 = JacSlice->size[0] * JacSlice->size[1];
      JacSlice->size[0] = 6;
      JacSlice->size[1] = a->size[1];
      emxEnsureCapacity_real_T(JacSlice, i1);
      loop_ub = 6 * a->size[1] - 1;
      for (i1 = 0; i1 <= loop_ub; i1++) {
        JacSlice->data[i1] = a->data[i1] * (real_T)jointSign;
      }

      if (qidx[0] > qidx[1]) {
        i1 = 0;
        i2 = -1;
      } else {
        i1 = Jac->size[1];
        i2 = (int32_T)emlrtIntegerCheckR2012b(qidx[0], &rb_emlrtDCI, sp);
        i1 = emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &ic_emlrtBCI, sp) - 1;
        i2 = Jac->size[1];
        minPathLength = (int32_T)emlrtIntegerCheckR2012b(qidx[1], &qb_emlrtDCI,
          sp);
        i2 = emlrtDynamicBoundsCheckR2012b(minPathLength, 1, i2, &hc_emlrtBCI,
          sp) - 1;
      }

      iv1[0] = 6;
      iv1[1] = (i2 - i1) + 1;
      emlrtSubAssignSizeCheckR2012b(iv1, 2, *(int32_T (*)[2])JacSlice->size, 2,
        &x_emlrtECI, sp);
      loop_ub = JacSlice->size[1];
      for (i2 = 0; i2 < loop_ub; i2++) {
        for (minPathLength = 0; minPathLength < 6; minPathLength++) {
          Jac->data[minPathLength + 6 * (i1 + i2)] = JacSlice->
            data[minPathLength + 6 * i2];
        }
      }
    }

    if (nextBodyIsParent) {
      for (i1 = 0; i1 < 4; i1++) {
        for (i2 = 0; i2 < 4; i2++) {
          b_R[i1 + (i2 << 2)] = 0.0;
          for (minPathLength = 0; minPathLength < 4; minPathLength++) {
            b_R[i1 + (i2 << 2)] += Tc2p[i1 + (minPathLength << 2)] *
              T1[minPathLength + (i2 << 2)];
          }
        }
      }

      memcpy(&T1[0], &b_R[0], sizeof(real_T) << 4);
    } else {
      for (i1 = 0; i1 < 3; i1++) {
        for (i2 = 0; i2 < 3; i2++) {
          R[i2 + 3 * i1] = Tc2p[i1 + (i2 << 2)];
        }
      }

      for (i1 = 0; i1 < 9; i1++) {
        c_R[i1] = -R[i1];
      }

      for (i1 = 0; i1 < 3; i1++) {
        d_R[i1] = 0.0;
        for (i2 = 0; i2 < 3; i2++) {
          e_R[i2 + (i1 << 2)] = R[i2 + 3 * i1];
          d_R[i1] += c_R[i1 + 3 * i2] * Tc2p[i2 + 12];
        }

        e_R[i1 + 12] = d_R[i1];
      }

      for (i1 = 0; i1 < 4; i1++) {
        e_R[(i1 << 2) + 3] = (real_T)iv[i1];
      }

      for (i1 = 0; i1 < 4; i1++) {
        for (i2 = 0; i2 < 4; i2++) {
          b_R[i1 + (i2 << 2)] = 0.0;
          for (minPathLength = 0; minPathLength < 4; minPathLength++) {
            b_R[i1 + (i2 << 2)] += e_R[i1 + (minPathLength << 2)] *
              T1[minPathLength + (i2 << 2)];
          }
        }
      }

      memcpy(&T1[0], &b_R[0], sizeof(real_T) << 4);
    }
  }

  emxFree_real_T(&joint);
  emxFree_real_T(&a);
  emxFree_real_T(&JacSlice);
  emxFree_real_T(&kinematicPathIndices);
  for (i = 0; i < 3; i++) {
    for (i1 = 0; i1 < 3; i1++) {
      b_T1[i1 + 6 * i] = T1[i1 + (i << 2)];
      b_T1[i1 + 6 * (i + 3)] = 0.0;
      b_T1[(i1 + 6 * i) + 3] = 0.0;
      b_T1[(i1 + 6 * (i + 3)) + 3] = T1[i1 + (i << 2)];
    }
  }

  emxInit_real_T(&b_Jac, 2);
  i = b_Jac->size[0] * b_Jac->size[1];
  b_Jac->size[0] = 6;
  b_Jac->size[1] = Jac->size[1];
  emxEnsureCapacity_real_T(b_Jac, i);
  loop_ub = Jac->size[0] * Jac->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_Jac->data[i] = Jac->data[i];
  }

  st.site = &ng_emlrtRSI;
  mtimes(b_T1, b_Jac, Jac);
  T_size[0] = 4;
  T_size[1] = 4;
  emxFree_real_T(&b_Jac);
  for (i = 0; i < 16; i++) {
    T_data[i] = T1[i];
  }
}

static real_T l_RigidBodyTree_validateInputBodyName(const emlrtStack *sp,
  robotics_manip_internal_RigidBodyTree_1 *obj, emxArray_char_T *bodyname)
{
  real_T bid;
  emlrtStack st;
  emlrtStack b_st;
  emxArray_char_T *bname;
  int32_T i;
  int32_T loop_ub;
  real_T d;
  int32_T b_i;
  boolean_T exitg1;
  robotics_manip_internal_RigidBody_1 *b_obj;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emxInit_char_T(&bname, 2);
  st.site = &jc_emlrtRSI;
  bid = -1.0;
  b_st.site = &tb_emlrtRSI;
  b_validateattributes(&b_st, bodyname);
  b_st.site = &ub_emlrtRSI;
  i = bname->size[0] * bname->size[1];
  bname->size[0] = 1;
  bname->size[1] = obj->Base.NameInternal->size[1];
  emxEnsureCapacity_char_T(bname, i);
  loop_ub = obj->Base.NameInternal->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    bname->data[i] = obj->Base.NameInternal->data[i];
  }

  if (d_strcmp(bname, bodyname)) {
    bid = 0.0;
  } else {
    d = obj->NumBodies;
    emlrtForLoopVectorCheckR2012b(1.0, 1.0, d, mxDOUBLE_CLASS, (int32_T)d,
      &emlrtRTEI, &st);
    b_i = 0;
    exitg1 = false;
    while ((!exitg1) && (b_i <= (int32_T)d - 1)) {
      b_st.site = &vb_emlrtRSI;
      b_obj = obj->Bodies[emlrtDynamicBoundsCheckR2012b(b_i, 0, 2, &emlrtBCI,
        &b_st)];
      i = bname->size[0] * bname->size[1];
      bname->size[0] = 1;
      bname->size[1] = b_obj->NameInternal->size[1];
      emxEnsureCapacity_char_T(bname, i);
      loop_ub = b_obj->NameInternal->size[1] - 1;
      for (i = 0; i <= loop_ub; i++) {
        bname->data[i] = b_obj->NameInternal->data[i];
      }

      if (d_strcmp(bname, bodyname)) {
        bid = (real_T)b_i + 1.0;
        exitg1 = true;
      } else {
        b_i++;
      }
    }
  }

  emxFree_char_T(&bname);
  if (bid == -1.0) {
    st.site = &kc_emlrtRSI;
    c_error(&st, bodyname);
  }

  return bid;
}

static real_T m_RigidBodyTree_validateInputBodyName(const emlrtStack *sp,
  robotics_manip_internal_RigidBodyTree_1 *obj, emxArray_char_T *bodyname)
{
  real_T bid;
  emlrtStack st;
  emlrtStack b_st;
  emxArray_char_T *bname;
  int32_T i;
  int32_T loop_ub;
  real_T d;
  int32_T b_i;
  boolean_T exitg1;
  robotics_manip_internal_RigidBody_1 *b_obj;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emxInit_char_T(&bname, 2);
  st.site = &jc_emlrtRSI;
  bid = -1.0;
  b_st.site = &tb_emlrtRSI;
  b_validateattributes(&b_st, bodyname);
  b_st.site = &ub_emlrtRSI;
  i = bname->size[0] * bname->size[1];
  bname->size[0] = 1;
  bname->size[1] = obj->Base.NameInternal->size[1];
  emxEnsureCapacity_char_T(bname, i);
  loop_ub = obj->Base.NameInternal->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    bname->data[i] = obj->Base.NameInternal->data[i];
  }

  if (d_strcmp(bname, bodyname)) {
    bid = 0.0;
  } else {
    d = obj->NumBodies;
    emlrtForLoopVectorCheckR2012b(1.0, 1.0, d, mxDOUBLE_CLASS, (int32_T)d,
      &emlrtRTEI, &st);
    b_i = 0;
    exitg1 = false;
    while ((!exitg1) && (b_i <= (int32_T)d - 1)) {
      b_st.site = &vb_emlrtRSI;
      b_obj = obj->Bodies[emlrtDynamicBoundsCheckR2012b(b_i, 0, 2, &emlrtBCI,
        &b_st)];
      i = bname->size[0] * bname->size[1];
      bname->size[0] = 1;
      bname->size[1] = b_obj->NameInternal->size[1];
      emxEnsureCapacity_char_T(bname, i);
      loop_ub = b_obj->NameInternal->size[1] - 1;
      for (i = 0; i <= loop_ub; i++) {
        bname->data[i] = b_obj->NameInternal->data[i];
      }

      if (d_strcmp(bname, bodyname)) {
        bid = (real_T)b_i + 1.0;
        exitg1 = true;
      } else {
        b_i++;
      }
    }
  }

  emxFree_char_T(&bname);
  if (bid == -1.0) {
    st.site = &kc_emlrtRSI;
    c_error(&st, bodyname);
  }

  return bid;
}

static real_T j_IKHelpers_evaluateSolution(const emlrtStack *sp,
  robotics_manip_internal_IKExtraArgs *args)
{
  emlrtStack st;
  real_T y[6];
  real_T a[36];
  int32_T k;
  emxArray_real_T *b_b;
  int32_T loop_ub;
  int32_T aoffset;
  real_T b_y;
  st.prev = sp;
  st.tls = sp->tls;
  for (k = 0; k < 36; k++) {
    a[k] = args->WeightMatrix[k];
  }

  emxInit_real_T1(&b_b, 1);
  k = b_b->size[0];
  b_b->size[0] = args->ErrTemp->size[0];
  emxEnsureCapacity_real_T1(b_b, k);
  loop_ub = args->ErrTemp->size[0];
  for (k = 0; k < loop_ub; k++) {
    b_b->data[k] = args->ErrTemp->data[k];
  }

  st.site = &og_emlrtRSI;
  f_dynamic_size_checks(&st, b_b, b_b->size[0]);
  if (b_b->size[0] == 1) {
    for (k = 0; k < 6; k++) {
      y[k] = 0.0;
      for (loop_ub = 0; loop_ub < 6; loop_ub++) {
        b_y = y[k] + a[k + 6 * loop_ub] * b_b->data[loop_ub];
        y[k] = b_y;
      }
    }
  } else {
    for (loop_ub = 0; loop_ub < 6; loop_ub++) {
      y[loop_ub] = 0.0;
    }

    for (k = 0; k < 6; k++) {
      aoffset = k * 6 - 1;
      for (loop_ub = 0; loop_ub < 6; loop_ub++) {
        y[loop_ub] += b_b->data[k] * a[(aoffset + loop_ub) + 1];
      }
    }
  }

  emxFree_real_T(&b_b);
  return c_norm(y);
}

static boolean_T b_DampedBFGSwGradientProjection_searchDirectionInvalid(const
  emlrtStack *sp, robotics_core_internal_DampedBFGSwGradientProjection *obj,
  real_T xNew[2])
{
  boolean_T flag;
  emlrtStack st;
  emxArray_real_T *a;
  emxArray_real_T *r;
  emxArray_boolean_T *r1;
  int32_T i;
  int32_T loop_ub;
  int32_T i1;
  real_T d;
  int32_T b_loop_ub;
  st.prev = sp;
  st.tls = sp->tls;
  emxInit_real_T(&a, 2);
  emxInit_real_T1(&r, 1);
  emxInit_boolean_T(&r1, 1);
  if (obj->ConstraintsOn) {
    i = a->size[0] * a->size[1];
    a->size[0] = obj->ConstraintMatrix->size[0];
    a->size[1] = obj->ConstraintMatrix->size[1];
    emxEnsureCapacity_real_T(a, i);
    loop_ub = obj->ConstraintMatrix->size[0] * obj->ConstraintMatrix->size[1] -
      1;
    for (i = 0; i <= loop_ub; i++) {
      a->data[i] = obj->ConstraintMatrix->data[i];
    }

    st.site = &og_emlrtRSI;
    dynamic_size_checks(&st, a, a->size[0]);
    if (a->size[0] == 1) {
      i = r->size[0];
      r->size[0] = a->size[1];
      emxEnsureCapacity_real_T1(r, i);
      loop_ub = a->size[1];
      for (i = 0; i < loop_ub; i++) {
        r->data[i] = 0.0;
        b_loop_ub = a->size[0];
        for (i1 = 0; i1 < b_loop_ub; i1++) {
          r->data[i] += a->data[i1 + a->size[0] * i] * xNew[i1];
        }
      }
    } else {
      st.site = &ng_emlrtRSI;
      c_mtimes(a, xNew, r);
    }

    i = r->size[0];
    i1 = obj->ConstraintBound->size[0];
    emlrtSizeEqCheck1DR2012b(i, i1, &ab_emlrtECI, sp);
    d = 2.2204460492503131E-16;
    st.site = &sj_emlrtRSI;
    b_sqrt(&st, &d);
    i = r1->size[0];
    r1->size[0] = r->size[0];
    emxEnsureCapacity_boolean_T(r1, i);
    loop_ub = r->size[0];
    for (i = 0; i < loop_ub; i++) {
      r1->data[i] = (r->data[i] - obj->ConstraintBound->data[i] >
                     1.4901161193847656E-8);
    }

    st.site = &sj_emlrtRSI;
    if (any(&st, r1)) {
      flag = true;
    } else {
      flag = false;
    }
  } else {
    flag = false;
  }

  emxFree_boolean_T(&r1);
  emxFree_real_T(&r);
  emxFree_real_T(&a);
  return flag;
}

static real_T k_IKHelpers_evaluateSolution(const emlrtStack *sp,
  robotics_manip_internal_IKExtraArgs *args)
{
  emlrtStack st;
  real_T y[6];
  real_T a[36];
  int32_T k;
  emxArray_real_T *b_b;
  int32_T loop_ub;
  int32_T aoffset;
  real_T b_y;
  st.prev = sp;
  st.tls = sp->tls;
  for (k = 0; k < 36; k++) {
    a[k] = args->WeightMatrix[k];
  }

  emxInit_real_T1(&b_b, 1);
  k = b_b->size[0];
  b_b->size[0] = args->ErrTemp->size[0];
  emxEnsureCapacity_real_T1(b_b, k);
  loop_ub = args->ErrTemp->size[0];
  for (k = 0; k < loop_ub; k++) {
    b_b->data[k] = args->ErrTemp->data[k];
  }

  st.site = &og_emlrtRSI;
  f_dynamic_size_checks(&st, b_b, b_b->size[0]);
  if (b_b->size[0] == 1) {
    for (k = 0; k < 6; k++) {
      y[k] = 0.0;
      for (loop_ub = 0; loop_ub < 6; loop_ub++) {
        b_y = y[k] + a[k + 6 * loop_ub] * b_b->data[loop_ub];
        y[k] = b_y;
      }
    }
  } else {
    for (loop_ub = 0; loop_ub < 6; loop_ub++) {
      y[loop_ub] = 0.0;
    }

    for (k = 0; k < 6; k++) {
      aoffset = k * 6 - 1;
      for (loop_ub = 0; loop_ub < 6; loop_ub++) {
        y[loop_ub] += b_b->data[k] * a[(aoffset + loop_ub) + 1];
      }
    }
  }

  emxFree_real_T(&b_b);
  return c_norm(y);
}

static real_T l_IKHelpers_evaluateSolution(const emlrtStack *sp,
  robotics_manip_internal_IKExtraArgs *args)
{
  emlrtStack st;
  real_T y[6];
  real_T a[36];
  int32_T k;
  emxArray_real_T *b_b;
  int32_T loop_ub;
  int32_T aoffset;
  real_T b_y;
  st.prev = sp;
  st.tls = sp->tls;
  for (k = 0; k < 36; k++) {
    a[k] = args->WeightMatrix[k];
  }

  emxInit_real_T1(&b_b, 1);
  k = b_b->size[0];
  b_b->size[0] = args->ErrTemp->size[0];
  emxEnsureCapacity_real_T1(b_b, k);
  loop_ub = args->ErrTemp->size[0];
  for (k = 0; k < loop_ub; k++) {
    b_b->data[k] = args->ErrTemp->data[k];
  }

  st.site = &og_emlrtRSI;
  f_dynamic_size_checks(&st, b_b, b_b->size[0]);
  if (b_b->size[0] == 1) {
    for (k = 0; k < 6; k++) {
      y[k] = 0.0;
      for (loop_ub = 0; loop_ub < 6; loop_ub++) {
        b_y = y[k] + a[k + 6 * loop_ub] * b_b->data[loop_ub];
        y[k] = b_y;
      }
    }
  } else {
    for (loop_ub = 0; loop_ub < 6; loop_ub++) {
      y[loop_ub] = 0.0;
    }

    for (k = 0; k < 6; k++) {
      aoffset = k * 6 - 1;
      for (loop_ub = 0; loop_ub < 6; loop_ub++) {
        y[loop_ub] += b_b->data[k] * a[(aoffset + loop_ub) + 1];
      }
    }
  }

  emxFree_real_T(&b_b);
  return c_norm(y);
}

static boolean_T b_any(boolean_T x[2])
{
  boolean_T y;
  int32_T k;
  boolean_T exitg1;
  y = false;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 2)) {
    if (x[k]) {
      y = true;
      exitg1 = true;
    } else {
      k++;
    }
  }

  return y;
}

static void g_warning(const emlrtStack *sp)
{
  emlrtStack st;
  char_T msgID[55];
  int32_T i;
  char_T b_u[7];
  static char_T b_msgID[55] = { 'r', 'o', 'b', 'o', 't', 'i', 'c', 's', ':', 'r',
    'o', 'b', 'o', 't', 'm', 'a', 'n', 'i', 'p', ':', 'r', 'i', 'g', 'i', 'd',
    'b', 'o', 'd', 'y', 't', 'r', 'e', 'e', ':', 'I', 'n', 'v', 'a', 'l', 'i',
    'd', 'D', 'y', 'n', 'a', 'm', 'i', 'c', 's', 'R', 'e', 's', 'u', 'l', 't' };

  const mxArray *y;
  static char_T c_u[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };

  const mxArray *m;
  static const int32_T iv[2] = { 1, 7 };

  const mxArray *b_y;
  static char_T d_u[7] = { 'm', 'e', 's', 's', 'a', 'g', 'e' };

  static const int32_T iv1[2] = { 1, 7 };

  const mxArray *c_y;
  static const int32_T iv2[2] = { 1, 55 };

  st.prev = sp;
  st.tls = sp->tls;
  for (i = 0; i < 55; i++) {
    msgID[i] = b_msgID[i];
  }

  for (i = 0; i < 7; i++) {
    b_u[i] = c_u[i];
  }

  y = NULL;
  m = emlrtCreateCharArray(2, iv);
  emlrtInitCharArrayR2013a(sp, 7, m, &b_u[0]);
  emlrtAssign(&y, m);
  for (i = 0; i < 7; i++) {
    b_u[i] = d_u[i];
  }

  b_y = NULL;
  m = emlrtCreateCharArray(2, iv1);
  emlrtInitCharArrayR2013a(sp, 7, m, &b_u[0]);
  emlrtAssign(&b_y, m);
  c_y = NULL;
  m = emlrtCreateCharArray(2, iv2);
  emlrtInitCharArrayR2013a(sp, 55, m, &msgID[0]);
  emlrtAssign(&c_y, m);
  st.site = &xl_emlrtRSI;
  b_feval(&st, y, feval(&st, b_y, c_y, &j_emlrtMCI), &k_emlrtMCI);
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *a__output_of_sprintf_, const char_T *identifier, char_T y[14])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  b_emlrt_marshallIn(sp, emlrtAlias(a__output_of_sprintf_), &thisId, y);
  emlrtDestroyArray(&a__output_of_sprintf_);
}

static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_u, const
  emlrtMsgIdentifier *parentId, char_T y[14])
{
  c_emlrt_marshallIn(sp, emlrtAlias(b_u), parentId, y);
  emlrtDestroyArray(&b_u);
}

static const mxArray *emlrt_marshallOut(const emlrtStack *sp, const char_T b_u
  [30])
{
  const mxArray *y;
  const mxArray *m;
  static const int32_T iv[2] = { 1, 30 };

  y = NULL;
  m = emlrtCreateCharArray(2, iv);
  emlrtInitCharArrayR2013a(sp, 30, m, &b_u[0]);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *b_emlrt_marshallOut(const emlrtStack *sp, const char_T
  b_u[39])
{
  const mxArray *y;
  const mxArray *m;
  static const int32_T iv[2] = { 1, 39 };

  y = NULL;
  m = emlrtCreateCharArray(2, iv);
  emlrtInitCharArrayR2013a(sp, 39, m, &b_u[0]);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *c_emlrt_marshallOut(const emlrtStack *sp, const char_T
  b_u[15])
{
  const mxArray *y;
  const mxArray *m;
  static const int32_T iv[2] = { 1, 15 };

  y = NULL;
  m = emlrtCreateCharArray(2, iv);
  emlrtInitCharArrayR2013a(sp, 15, m, &b_u[0]);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *d_emlrt_marshallOut(const emlrtStack *sp, const char_T
  b_u[36])
{
  const mxArray *y;
  const mxArray *m;
  static const int32_T iv[2] = { 1, 36 };

  y = NULL;
  m = emlrtCreateCharArray(2, iv);
  emlrtInitCharArrayR2013a(sp, 36, m, &b_u[0]);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *message(const emlrtStack *sp, const mxArray *c, const
  mxArray *d, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m;
  pArrays[0] = c;
  pArrays[1] = d;
  return emlrtCallMATLABR2012b(sp, 1, &m, 2, pArrays, "message", true, location);
}

static const mxArray *getString(const emlrtStack *sp, const mxArray *c,
  emlrtMCInfo *location)
{
  const mxArray *pArray;
  const mxArray *m;
  pArray = c;
  return emlrtCallMATLABR2012b(sp, 1, &m, 1, &pArray, "getString", true,
    location);
}

static void f_error(const emlrtStack *sp, const mxArray *c, const mxArray *d,
                    emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  pArrays[0] = c;
  pArrays[1] = d;
  emlrtCallMATLABR2012b(sp, 0, NULL, 2, pArrays, "error", true, location);
}

static const mxArray *b_message(const emlrtStack *sp, const mxArray *c,
  emlrtMCInfo *location)
{
  const mxArray *pArray;
  const mxArray *m;
  pArray = c;
  return emlrtCallMATLABR2012b(sp, 1, &m, 1, &pArray, "message", true, location);
}

static const mxArray *c_message(const emlrtStack *sp, const mxArray *c, const
  mxArray *d, const mxArray *e, const mxArray *f, emlrtMCInfo *location)
{
  const mxArray *pArrays[4];
  const mxArray *m;
  pArrays[0] = c;
  pArrays[1] = d;
  pArrays[2] = e;
  pArrays[3] = f;
  return emlrtCallMATLABR2012b(sp, 1, &m, 4, pArrays, "message", true, location);
}

static const mxArray *feval(const emlrtStack *sp, const mxArray *c, const
  mxArray *d, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m;
  pArrays[0] = c;
  pArrays[1] = d;
  return emlrtCallMATLABR2012b(sp, 1, &m, 2, pArrays, "feval", true, location);
}

static void b_feval(const emlrtStack *sp, const mxArray *c, const mxArray *d,
                    emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  pArrays[0] = c;
  pArrays[1] = d;
  emlrtCallMATLABR2012b(sp, 0, NULL, 2, pArrays, "feval", true, location);
}

static const mxArray *d_message(const emlrtStack *sp, const mxArray *c, const
  mxArray *d, const mxArray *e, emlrtMCInfo *location)
{
  const mxArray *pArrays[3];
  const mxArray *m;
  pArrays[0] = c;
  pArrays[1] = d;
  pArrays[2] = e;
  return emlrtCallMATLABR2012b(sp, 1, &m, 3, pArrays, "message", true, location);
}

static const mxArray *b_sprintf(const emlrtStack *sp, const mxArray *c, const
  mxArray *d, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m;
  pArrays[0] = c;
  pArrays[1] = d;
  return emlrtCallMATLABR2012b(sp, 1, &m, 2, pArrays, "sprintf", true, location);
}

static const mxArray *c_feval(const emlrtStack *sp, const mxArray *c, const
  mxArray *d, const mxArray *e, emlrtMCInfo *location)
{
  const mxArray *pArrays[3];
  const mxArray *m;
  pArrays[0] = c;
  pArrays[1] = d;
  pArrays[2] = e;
  return emlrtCallMATLABR2012b(sp, 1, &m, 3, pArrays, "feval", true, location);
}

static const mxArray *d_feval(const emlrtStack *sp, const mxArray *c, const
  mxArray *d, const mxArray *e, const mxArray *f, emlrtMCInfo *location)
{
  const mxArray *pArrays[4];
  const mxArray *m;
  pArrays[0] = c;
  pArrays[1] = d;
  pArrays[2] = e;
  pArrays[3] = f;
  return emlrtCallMATLABR2012b(sp, 1, &m, 4, pArrays, "feval", true, location);
}

static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, char_T ret[14])
{
  static const int32_T dims[2] = { 1, 14 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "char", false, 2U, dims);
  emlrtImportCharArrayR2015b(sp, src, &ret[0], 14);
  emlrtDestroyArray(&src);
}

static real_T eml_rand_mt19937ar(const emlrtStack *sp, uint32_T e_state[625])
{
  real_T r;
  emlrtStack st;
  emlrtStack b_st;
  int32_T exitg1;
  uint32_T b_u[2];
  char_T c_u[37];
  int32_T i;
  const mxArray *y;
  static char_T d_u[37] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
    'A', 'B', ':', 'r', 'a', 'n', 'd', '_', 'i', 'n', 'v', 'a', 'l', 'i', 'd',
    'T', 'w', 'i', 's', 't', 'e', 'r', 'S', 't', 'a', 't', 'e' };

  const mxArray *m;
  static const int32_T iv[2] = { 1, 37 };

  const mxArray *b_y;
  static const int32_T iv1[2] = { 1, 37 };

  st.prev = sp;
  st.tls = sp->tls;
  st.site = &lb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;

  /* ========================= COPYRIGHT NOTICE ============================ */
  /*  This is a uniform (0,1) pseudorandom number generator based on:        */
  /*                                                                         */
  /*  A C-program for MT19937, with initialization improved 2002/1/26.       */
  /*  Coded by Takuji Nishimura and Makoto Matsumoto.                        */
  /*                                                                         */
  /*  Copyright (C) 1997 - 2002, Makoto Matsumoto and Takuji Nishimura,      */
  /*  All rights reserved.                                                   */
  /*                                                                         */
  /*  Redistribution and use in source and binary forms, with or without     */
  /*  modification, are permitted provided that the following conditions     */
  /*  are met:                                                               */
  /*                                                                         */
  /*    1. Redistributions of source code must retain the above copyright    */
  /*       notice, this list of conditions and the following disclaimer.     */
  /*                                                                         */
  /*    2. Redistributions in binary form must reproduce the above copyright */
  /*       notice, this list of conditions and the following disclaimer      */
  /*       in the documentation and/or other materials provided with the     */
  /*       distribution.                                                     */
  /*                                                                         */
  /*    3. The names of its contributors may not be used to endorse or       */
  /*       promote products derived from this software without specific      */
  /*       prior written permission.                                         */
  /*                                                                         */
  /*  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS    */
  /*  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT      */
  /*  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR  */
  /*  A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT  */
  /*  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,  */
  /*  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT       */
  /*  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,  */
  /*  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY  */
  /*  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT    */
  /*  (INCLUDING  NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE */
  /*  OF THIS  SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.  */
  /*                                                                         */
  /* =============================   END   ================================= */
  do {
    exitg1 = 0;
    genrand_uint32_vector(e_state, b_u);
    r = 1.1102230246251565E-16 * ((real_T)(b_u[0] >> 5U) * 6.7108864E+7 +
      (real_T)(b_u[1] >> 6U));
    if (r == 0.0) {
      if (!is_valid_state(e_state)) {
        for (i = 0; i < 37; i++) {
          c_u[i] = d_u[i];
        }

        y = NULL;
        m = emlrtCreateCharArray(2, iv);
        emlrtInitCharArrayR2013a(&st, 37, m, &c_u[0]);
        emlrtAssign(&y, m);
        for (i = 0; i < 37; i++) {
          c_u[i] = d_u[i];
        }

        b_y = NULL;
        m = emlrtCreateCharArray(2, iv1);
        emlrtInitCharArrayR2013a(&st, 37, m, &c_u[0]);
        emlrtAssign(&b_y, m);
        b_st.site = &el_emlrtRSI;
        f_error(&b_st, y, getString(&b_st, b_message(&b_st, b_y, &b_emlrtMCI),
                 &b_emlrtMCI), &b_emlrtMCI);
      }
    } else {
      exitg1 = 1;
    }
  } while (exitg1 == 0);

  return r;
}

static void genrand_uint32_vector(uint32_T mt[625], uint32_T b_u[2])
{
  int32_T j;
  uint32_T mti;
  int32_T kk;
  uint32_T y;
  uint32_T b_y;
  uint32_T c_y;
  uint32_T d_y;
  for (j = 0; j < 2; j++) {
    mti = mt[624] + 1U;
    if (mti >= 625U) {
      for (kk = 0; kk < 227; kk++) {
        y = (mt[kk] & 2147483648U) | (mt[kk + 1] & 2147483647U);
        if ((y & 1U) == 0U) {
          b_y = y >> 1U;
        } else {
          b_y = y >> 1U ^ 2567483615U;
        }

        mt[kk] = mt[kk + 397] ^ b_y;
      }

      for (kk = 0; kk < 396; kk++) {
        y = (mt[kk + 227] & 2147483648U) | (mt[kk + 228] & 2147483647U);
        if ((y & 1U) == 0U) {
          d_y = y >> 1U;
        } else {
          d_y = y >> 1U ^ 2567483615U;
        }

        mt[kk + 227] = mt[kk] ^ d_y;
      }

      y = (mt[623] & 2147483648U) | (mt[0] & 2147483647U);
      if ((y & 1U) == 0U) {
        c_y = y >> 1U;
      } else {
        c_y = y >> 1U ^ 2567483615U;
      }

      mt[623] = mt[396] ^ c_y;
      mti = 1U;
    }

    y = mt[(int32_T)mti - 1];
    mt[624] = mti;
    y ^= y >> 11U;
    y ^= y << 7U & 2636928640U;
    y ^= y << 15U & 4022730752U;
    y ^= y >> 18U;
    b_u[j] = y;
  }
}

static void b_sqrt(const emlrtStack *sp, real_T *x)
{
  emlrtStack st;
  char_T b_u[30];
  int32_T i;
  const mxArray *y;
  static char_T c_u[30] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'E', 'l', 'F', 'u', 'n', 'D', 'o', 'm', 'a', 'i', 'n',
    'E', 'r', 'r', 'o', 'r' };

  const mxArray *m;
  static const int32_T iv[2] = { 1, 30 };

  const mxArray *b_y;
  static const int32_T iv1[2] = { 1, 30 };

  char_T d_u[4];
  const mxArray *c_y;
  static char_T e_u[4] = { 's', 'q', 'r', 't' };

  static const int32_T iv2[2] = { 1, 4 };

  st.prev = sp;
  st.tls = sp->tls;
  if (*x < 0.0) {
    for (i = 0; i < 30; i++) {
      b_u[i] = c_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, iv);
    emlrtInitCharArrayR2013a(sp, 30, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 30; i++) {
      b_u[i] = c_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, iv1);
    emlrtInitCharArrayR2013a(sp, 30, m, &b_u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 4; i++) {
      d_u[i] = e_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, iv2);
    emlrtInitCharArrayR2013a(sp, 4, m, &d_u[0]);
    emlrtAssign(&c_y, m);
    st.site = &vk_emlrtRSI;
    f_error(&st, y, getString(&st, message(&st, b_y, c_y, &p_emlrtMCI),
             &p_emlrtMCI), &p_emlrtMCI);
  }

  *x = muDoubleScalarSqrt(*x);
}

static void RigidBodyTree_validateConfiguration(const emlrtStack *sp,
  robotics_manip_internal_RigidBodyTree_1 *obj, real_T Q[2])
{
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  real_T sz[2];
  boolean_T p;
  int32_T k;
  boolean_T exitg1;
  char_T b_u[52];
  const mxArray *y;
  static char_T c_u[52] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'v', 'a', 'l',
    'i', 'd', 'a', 't', 'e', 'D', 'y', 'n', 'a', 'm', 'i', 'c', 's', 'F', 'u',
    'n', 'c', 't', 'i', 'o', 'n', 'I', 'n', 'p', 'u', 't', 's', ':', 'e', 'x',
    'p', 'e', 'c', 't', 'e', 'd', 'N', 'o', 'n', 'N', 'a', 'N' };

  const mxArray *m;
  static const int32_T iv[2] = { 1, 52 };

  char_T d_u[46];
  static char_T e_u[52] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'v', 'a', 'l',
    'i', 'd', 'a', 't', 'e', 'D', 'y', 'n', 'a', 'm', 'i', 'c', 's', 'F', 'u',
    'n', 'c', 't', 'i', 'o', 'n', 'I', 'n', 'p', 'u', 't', 's', ':', 'e', 'x',
    'p', 'e', 'c', 't', 'e', 'd', 'F', 'i', 'n', 'i', 't', 'e' };

  const mxArray *b_y;
  static char_T f_u[46] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'N', 'o', 'n', 'N', 'a', 'N' };

  static const int32_T iv1[2] = { 1, 52 };

  static const int32_T iv2[2] = { 1, 46 };

  char_T g_u[38];
  char_T h_u[25];
  static char_T i_u[38] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'v', 'a', 'l',
    'i', 'd', 'a', 't', 'e', 'a', 't', 't', 'r', 'i', 'b', 'u', 't', 'e', 's',
    ':', 'b', 'a', 'd', 'S', 'i', 'z', 'e', 'A', 'r', 'r', 'a', 'y' };

  static const int32_T iv3[2] = { 1, 38 };

  static char_T j_u[46] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'F', 'i', 'n', 'i', 't', 'e' };

  const mxArray *c_y;
  static char_T k_u[25] = { 'j', 'o', 'i', 'n', 't', ' ', 'p', 'o', 's', 'i',
    't', 'i', 'o', 'n', ' ', 'v', 'e', 'c', 't', 'o', 'r', ' ', '(', 'q', ')' };

  char_T l_u[51];
  static const int32_T iv4[2] = { 1, 46 };

  static const int32_T iv5[2] = { 1, 25 };

  int32_T b_k;
  static char_T m_u[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'v', 'a', 'l',
    'i', 'd', 'a', 't', 'e', 'D', 'y', 'n', 'a', 'm', 'i', 'c', 's', 'F', 'u',
    'n', 'c', 't', 'i', 'o', 'n', 'I', 'n', 'p', 'u', 't', 's', ':', 'i', 'n',
    'c', 'o', 'r', 'r', 'e', 'c', 't', 'S', 'i', 'z', 'e' };

  static const int32_T iv6[2] = { 1, 51 };

  static const int32_T iv7[2] = { 1, 38 };

  char_T n_u[45];
  static const int32_T iv8[2] = { 1, 25 };

  static char_T o_u[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'i', 'n', 'c', 'o', 'r', 'r', 'e', 'c',
    't', 'S', 'i', 'z', 'e' };

  static const int32_T iv9[2] = { 1, 45 };

  static const int32_T iv10[2] = { 1, 25 };

  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  sz[0] = obj->PositionNumber;
  sz[1] = 1.0;
  st.site = &gf_emlrtRSI;
  b_st.site = &sb_emlrtRSI;
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 2)) {
    if (!muDoubleScalarIsNaN(Q[k])) {
      k++;
    } else {
      p = false;
      exitg1 = true;
    }
  }

  if (!p) {
    for (k = 0; k < 52; k++) {
      b_u[k] = c_u[k];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, iv);
    emlrtInitCharArrayR2013a(&b_st, 52, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (k = 0; k < 46; k++) {
      d_u[k] = f_u[k];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, iv2);
    emlrtInitCharArrayR2013a(&b_st, 46, m, &d_u[0]);
    emlrtAssign(&b_y, m);
    for (k = 0; k < 25; k++) {
      h_u[k] = k_u[k];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, iv5);
    emlrtInitCharArrayR2013a(&b_st, 25, m, &h_u[0]);
    emlrtAssign(&c_y, m);
    c_st.site = &yk_emlrtRSI;
    f_error(&c_st, y, getString(&c_st, message(&c_st, b_y, c_y, &e_emlrtMCI),
             &e_emlrtMCI), &e_emlrtMCI);
  }

  b_st.site = &sb_emlrtRSI;
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 2)) {
    if ((!muDoubleScalarIsInf(Q[k])) && (!muDoubleScalarIsNaN(Q[k]))) {
      k++;
    } else {
      p = false;
      exitg1 = true;
    }
  }

  if (!p) {
    for (k = 0; k < 52; k++) {
      b_u[k] = e_u[k];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, iv1);
    emlrtInitCharArrayR2013a(&b_st, 52, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (k = 0; k < 46; k++) {
      d_u[k] = j_u[k];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, iv4);
    emlrtInitCharArrayR2013a(&b_st, 46, m, &d_u[0]);
    emlrtAssign(&b_y, m);
    for (k = 0; k < 25; k++) {
      h_u[k] = k_u[k];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, iv8);
    emlrtInitCharArrayR2013a(&b_st, 25, m, &h_u[0]);
    emlrtAssign(&c_y, m);
    c_st.site = &xk_emlrtRSI;
    f_error(&c_st, y, getString(&c_st, message(&c_st, b_y, c_y, &f_emlrtMCI),
             &f_emlrtMCI), &f_emlrtMCI);
  }

  b_st.site = &sb_emlrtRSI;
  p = true;
  for (k = 0; k < 2; k++) {
    if (p && ((sz[k] != sz[k]) || ((!muDoubleScalarIsInf(sz[k])) && (sz[k] >=
           0.0) && (sz[k] == muDoubleScalarFloor(sz[k]))))) {
      p = true;
    } else {
      p = false;
    }
  }

  if (!p) {
    for (k = 0; k < 38; k++) {
      g_u[k] = i_u[k];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, iv3);
    emlrtInitCharArrayR2013a(&b_st, 38, m, &g_u[0]);
    emlrtAssign(&y, m);
    for (k = 0; k < 38; k++) {
      g_u[k] = i_u[k];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, iv7);
    emlrtInitCharArrayR2013a(&b_st, 38, m, &g_u[0]);
    emlrtAssign(&b_y, m);
    c_st.site = &fl_emlrtRSI;
    f_error(&c_st, y, getString(&c_st, b_message(&c_st, b_y, &r_emlrtMCI),
             &r_emlrtMCI), &r_emlrtMCI);
  }

  p = true;
  for (k = 0; k < 2; k++) {
    if (p) {
      if (sz[k] != sz[k]) {
        p = true;
      } else {
        if (k + 1 <= 1) {
          b_k = 2;
        } else {
          b_k = 1;
        }

        if (sz[k] == (real_T)b_k) {
          p = true;
        } else {
          p = false;
        }
      }
    } else {
      p = false;
    }
  }

  if (!p) {
    for (k = 0; k < 51; k++) {
      l_u[k] = m_u[k];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, iv6);
    emlrtInitCharArrayR2013a(&b_st, 51, m, &l_u[0]);
    emlrtAssign(&y, m);
    for (k = 0; k < 45; k++) {
      n_u[k] = o_u[k];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, iv9);
    emlrtInitCharArrayR2013a(&b_st, 45, m, &n_u[0]);
    emlrtAssign(&b_y, m);
    for (k = 0; k < 25; k++) {
      h_u[k] = k_u[k];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, iv10);
    emlrtInitCharArrayR2013a(&b_st, 25, m, &h_u[0]);
    emlrtAssign(&c_y, m);
    c_st.site = &wk_emlrtRSI;
    f_error(&c_st, y, getString(&c_st, message(&c_st, b_y, c_y, &s_emlrtMCI),
             &s_emlrtMCI), &s_emlrtMCI);
  }
}

static void c_sqrt(creal_T *x)
{
  real_T xr;
  real_T xi;
  real_T absxi;
  real_T absxr;
  xr = x->re;
  xi = x->im;
  if (xi == 0.0) {
    if (xr < 0.0) {
      absxi = 0.0;
      xr = muDoubleScalarSqrt(-xr);
    } else {
      absxi = muDoubleScalarSqrt(xr);
      xr = 0.0;
    }
  } else if (xr == 0.0) {
    if (xi < 0.0) {
      absxi = muDoubleScalarSqrt(-xi / 2.0);
      xr = -absxi;
    } else {
      absxi = muDoubleScalarSqrt(xi / 2.0);
      xr = absxi;
    }
  } else if (muDoubleScalarIsNaN(xr)) {
    absxi = xr;
  } else if (muDoubleScalarIsNaN(xi)) {
    absxi = xi;
    xr = xi;
  } else if (muDoubleScalarIsInf(xi)) {
    absxi = muDoubleScalarAbs(xi);
    xr = xi;
  } else if (muDoubleScalarIsInf(xr)) {
    if (xr < 0.0) {
      absxi = 0.0;
      xr = xi * -xr;
    } else {
      absxi = xr;
      xr = 0.0;
    }
  } else {
    absxr = muDoubleScalarAbs(xr);
    absxi = muDoubleScalarAbs(xi);
    if ((absxr > 4.4942328371557893E+307) || (absxi > 4.4942328371557893E+307))
    {
      absxr *= 0.5;
      absxi *= 0.5;
      absxi = muDoubleScalarHypot(absxr, absxi);
      if (absxi > absxr) {
        absxi = muDoubleScalarSqrt(absxi) * muDoubleScalarSqrt(absxr / absxi +
          1.0);
      } else {
        absxi = muDoubleScalarSqrt(absxi) * 1.4142135623730951;
      }
    } else {
      absxi = muDoubleScalarSqrt((muDoubleScalarHypot(absxr, absxi) + absxr) *
        0.5);
    }

    if (xr > 0.0) {
      xr = 0.5 * (xi / absxi);
    } else {
      if (xi < 0.0) {
        xr = -absxi;
      } else {
        xr = absxi;
      }

      absxi = 0.5 * (xi / xr);
    }
  }

  x->re = absxi;
  x->im = xr;
}

static real_T rescale(real_T *re, real_T *im)
{
  real_T scale;
  real_T absim;
  scale = muDoubleScalarAbs(*re);
  absim = muDoubleScalarAbs(*im);
  if (scale > absim) {
    if (*re < 0.0) {
      *re = -1.0;
    } else {
      *re = 1.0;
    }

    *im /= scale;
  } else if (absim > scale) {
    *re /= absim;
    if (*im < 0.0) {
      *im = -1.0;
    } else {
      *im = 1.0;
    }

    scale = absim;
  } else {
    if (*re < 0.0) {
      *re = -1.0;
    } else {
      *re = 1.0;
    }

    if (*im < 0.0) {
      *im = -1.0;
    } else {
      *im = 1.0;
    }
  }

  return scale;
}

static void xscal(int32_T n, real_T a, real_T x[9], int32_T ix0)
{
  int32_T i;
  int32_T k;
  i = ix0 + n;
  for (k = ix0; k < i; k++) {
    x[k - 1] *= a;
  }
}

static void xaxpy(int32_T n, real_T a, int32_T ix0, real_T y[9], int32_T iy0)
{
  int32_T ix;
  int32_T iy;
  int32_T k;
  if (!(a == 0.0)) {
    ix = ix0;
    iy = iy0 - 1;
    for (k = 0; k < n; k++) {
      y[iy] += a * y[ix - 1];
      ix++;
      iy++;
    }
  }
}

static void b_xscal(real_T a, real_T x[3], int32_T ix0)
{
  int32_T k;
  for (k = ix0; k <= ix0 + 1; k++) {
    x[k - 1] *= a;
  }
}

static void b_xaxpy(int32_T n, real_T a, real_T x[9], int32_T ix0, real_T y[3],
                    int32_T iy0)
{
  int32_T ix;
  int32_T iy;
  int32_T k;
  if (!(a == 0.0)) {
    ix = ix0;
    iy = iy0 - 1;
    for (k = 0; k < n; k++) {
      y[iy] += a * x[ix - 1];
      ix++;
      iy++;
    }
  }
}

static void c_xaxpy(int32_T n, real_T a, real_T x[3], int32_T ix0, real_T y[9],
                    int32_T iy0)
{
  int32_T ix;
  int32_T iy;
  int32_T k;
  if (!(a == 0.0)) {
    ix = ix0;
    iy = iy0 - 1;
    for (k = 0; k < n; k++) {
      y[iy] += a * x[ix - 1];
      ix++;
      iy++;
    }
  }
}

static void c_xscal(real_T a, real_T x[9], int32_T ix0)
{
  int32_T k;
  for (k = ix0; k <= ix0 + 2; k++) {
    x[k - 1] *= a;
  }
}

static void xrotg(real_T *a, real_T *b_b, real_T *c, real_T *s)
{
  *c = 0.0;
  *s = 0.0;
  drotg(a, b_b, c, s);
}

static void xrot(real_T x[9], int32_T ix0, int32_T iy0, real_T c, real_T s)
{
  int32_T ix;
  int32_T iy;
  int32_T k;
  real_T temp;
  ix = ix0 - 1;
  iy = iy0 - 1;
  for (k = 0; k < 3; k++) {
    temp = c * x[ix] + s * x[iy];
    x[iy] = c * x[iy] - s * x[ix];
    x[ix] = temp;
    iy++;
    ix++;
  }
}

static void xswap(real_T x[9], int32_T ix0, int32_T iy0)
{
  int32_T ix;
  int32_T iy;
  int32_T k;
  real_T temp;
  ix = ix0 - 1;
  iy = iy0 - 1;
  for (k = 0; k < 3; k++) {
    temp = x[ix];
    x[ix] = x[iy];
    x[iy] = temp;
    ix++;
    iy++;
  }
}

static void d_sqrt(const emlrtStack *sp, emxArray_real_T *x)
{
  emlrtStack st;
  boolean_T p;
  int32_T nx;
  int32_T k;
  char_T b_u[30];
  const mxArray *y;
  static char_T c_u[30] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'E', 'l', 'F', 'u', 'n', 'D', 'o', 'm', 'a', 'i', 'n',
    'E', 'r', 'r', 'o', 'r' };

  const mxArray *m;
  static const int32_T iv[2] = { 1, 30 };

  const mxArray *b_y;
  static const int32_T iv1[2] = { 1, 30 };

  char_T d_u[4];
  const mxArray *c_y;
  static char_T e_u[4] = { 's', 'q', 'r', 't' };

  static const int32_T iv2[2] = { 1, 4 };

  st.prev = sp;
  st.tls = sp->tls;
  p = false;
  nx = x->size[0] - 1;
  for (k = 0; k <= nx; k++) {
    if (p || (x->data[k] < 0.0)) {
      p = true;
    } else {
      p = false;
    }
  }

  if (p) {
    for (nx = 0; nx < 30; nx++) {
      b_u[nx] = c_u[nx];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, iv);
    emlrtInitCharArrayR2013a(sp, 30, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (nx = 0; nx < 30; nx++) {
      b_u[nx] = c_u[nx];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, iv1);
    emlrtInitCharArrayR2013a(sp, 30, m, &b_u[0]);
    emlrtAssign(&b_y, m);
    for (nx = 0; nx < 4; nx++) {
      d_u[nx] = e_u[nx];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, iv2);
    emlrtInitCharArrayR2013a(sp, 4, m, &d_u[0]);
    emlrtAssign(&c_y, m);
    st.site = &vk_emlrtRSI;
    f_error(&st, y, getString(&st, message(&st, b_y, c_y, &p_emlrtMCI),
             &p_emlrtMCI), &p_emlrtMCI);
  }

  nx = x->size[0] - 1;
  for (k = 0; k <= nx; k++) {
    x->data[k] = muDoubleScalarSqrt(x->data[k]);
  }
}

static real_T b_eml_rand_mt19937ar(const emlrtStack *sp, uint32_T e_state[625])
{
  real_T r;
  emlrtStack st;
  emlrtStack b_st;
  int32_T exitg1;
  uint32_T u32[2];
  int32_T i;
  static real_T dv[257] = { 0.0, 0.215241895984875, 0.286174591792068,
    0.335737519214422, 0.375121332878378, 0.408389134611989, 0.43751840220787,
    0.46363433679088, 0.487443966139235, 0.50942332960209, 0.529909720661557,
    0.549151702327164, 0.567338257053817, 0.584616766106378, 0.601104617755991,
    0.61689699000775, 0.63207223638606, 0.646695714894993, 0.660822574244419,
    0.674499822837293, 0.687767892795788, 0.700661841106814, 0.713212285190975,
    0.725446140909999, 0.737387211434295, 0.749056662017815, 0.760473406430107,
    0.771654424224568, 0.782615023307232, 0.793369058840623, 0.80392911698997,
    0.814306670135215, 0.824512208752291, 0.834555354086381, 0.844444954909153,
    0.854189171008163, 0.863795545553308, 0.87327106808886, 0.882622229585165,
    0.891855070732941, 0.900975224461221, 0.909987953496718, 0.91889818364959,
    0.927710533401999, 0.936429340286575, 0.945058684468165, 0.953602409881086,
    0.96206414322304, 0.970447311064224, 0.978755155294224, 0.986990747099062,
    0.99515699963509, 1.00325667954467, 1.01129241744, 1.01926671746548,
    1.02718196603564, 1.03504043983344, 1.04284431314415, 1.05059566459093,
    1.05829648333067, 1.06594867476212, 1.07355406579244, 1.0811144097034,
    1.08863139065398, 1.09610662785202, 1.10354167942464, 1.11093804601357,
    1.11829717411934, 1.12562045921553, 1.13290924865253, 1.14016484436815,
    1.14738850542085, 1.15458145035993, 1.16174485944561, 1.16887987673083,
    1.17598761201545, 1.18306914268269, 1.19012551542669, 1.19715774787944,
    1.20416683014438, 1.2111537262437, 1.21811937548548, 1.22506469375653,
    1.23199057474614, 1.23889789110569, 1.24578749554863, 1.2526602218949,
    1.25951688606371, 1.26635828701823, 1.27318520766536, 1.27999841571382,
    1.28679866449324, 1.29358669373695, 1.30036323033084, 1.30712898903073,
    1.31388467315022, 1.32063097522106, 1.32736857762793, 1.33409815321936,
    1.3408203658964, 1.34753587118059, 1.35424531676263, 1.36094934303328,
    1.36764858359748, 1.37434366577317, 1.38103521107586, 1.38772383568998,
    1.39441015092814, 1.40109476367925, 1.4077782768464, 1.41446128977547,
    1.42114439867531, 1.42782819703026, 1.43451327600589, 1.44120022484872,
    1.44788963128058, 1.45458208188841, 1.46127816251028, 1.46797845861808,
    1.47468355569786, 1.48139403962819, 1.48811049705745, 1.49483351578049,
    1.50156368511546, 1.50830159628131, 1.51504784277671, 1.521803020761,
    1.52856772943771, 1.53534257144151, 1.542128153229, 1.54892508547417,
    1.55573398346918, 1.56255546753104, 1.56939016341512, 1.57623870273591,
    1.58310172339603, 1.58997987002419, 1.59687379442279, 1.60378415602609,
    1.61071162236983, 1.61765686957301, 1.62462058283303, 1.63160345693487,
    1.63860619677555, 1.64562951790478, 1.65267414708306, 1.65974082285818,
    1.66683029616166, 1.67394333092612, 1.68108070472517, 1.68824320943719,
    1.69543165193456, 1.70264685479992, 1.7098896570713, 1.71716091501782,
    1.72446150294804, 1.73179231405296, 1.73915426128591, 1.74654827828172,
    1.75397532031767, 1.76143636531891, 1.76893241491127, 1.77646449552452,
    1.78403365954944, 1.79164098655216, 1.79928758454972, 1.80697459135082,
    1.81470317596628, 1.82247454009388, 1.83028991968276, 1.83815058658281,
    1.84605785028518, 1.8540130597602, 1.86201760539967, 1.87007292107127,
    1.878180486293, 1.88634182853678, 1.8945585256707, 1.90283220855043,
    1.91116456377125, 1.91955733659319, 1.92801233405266, 1.93653142827569,
    1.94511656000868, 1.95376974238465, 1.96249306494436, 1.97128869793366,
    1.98015889690048, 1.98910600761744, 1.99813247135842, 2.00724083056053,
    2.0164337349062, 2.02571394786385, 2.03508435372962, 2.04454796521753,
    2.05410793165065, 2.06376754781173, 2.07353026351874, 2.0833996939983,
    2.09337963113879, 2.10347405571488, 2.11368715068665, 2.12402331568952,
    2.13448718284602, 2.14508363404789, 2.15581781987674, 2.16669518035431,
    2.17772146774029, 2.18890277162636, 2.20024554661128, 2.21175664288416,
    2.22344334009251, 2.23531338492992, 2.24737503294739, 2.25963709517379,
    2.27210899022838, 2.28480080272449, 2.29772334890286, 2.31088825060137,
    2.32430801887113, 2.33799614879653, 2.35196722737914, 2.36623705671729,
    2.38082279517208, 2.39574311978193, 2.41101841390112, 2.42667098493715,
    2.44272531820036, 2.4592083743347, 2.47614993967052, 2.49358304127105,
    2.51154444162669, 2.53007523215985, 2.54922155032478, 2.56903545268184,
    2.58957598670829, 2.61091051848882, 2.63311639363158, 2.65628303757674,
    2.68051464328574, 2.70593365612306, 2.73268535904401, 2.76094400527999,
    2.79092117400193, 2.82287739682644, 2.85713873087322, 2.89412105361341,
    2.93436686720889, 2.97860327988184, 3.02783779176959, 3.08352613200214,
    3.147889289518, 3.2245750520478, 3.32024473383983, 3.44927829856143,
    3.65415288536101, 3.91075795952492 };

  real_T b_u;
  static real_T dv1[257] = { 1.0, 0.977101701267673, 0.959879091800108,
    0.9451989534423, 0.932060075959231, 0.919991505039348, 0.908726440052131,
    0.898095921898344, 0.887984660755834, 0.878309655808918, 0.869008688036857,
    0.860033621196332, 0.851346258458678, 0.842915653112205, 0.834716292986884,
    0.826726833946222, 0.818929191603703, 0.811307874312656, 0.803849483170964,
    0.796542330422959, 0.789376143566025, 0.782341832654803, 0.775431304981187,
    0.768637315798486, 0.761953346836795, 0.755373506507096, 0.748892447219157,
    0.742505296340151, 0.736207598126863, 0.729995264561476, 0.72386453346863,
    0.717811932630722, 0.711834248878248, 0.705928501332754, 0.700091918136512,
    0.694321916126117, 0.688616083004672, 0.682972161644995, 0.677388036218774,
    0.671861719897082, 0.66639134390875, 0.660975147776663, 0.655611470579697,
    0.650298743110817, 0.645035480820822, 0.639820277453057, 0.634651799287624,
    0.629528779924837, 0.624450015547027, 0.619414360605834, 0.614420723888914,
    0.609468064925773, 0.604555390697468, 0.599681752619125, 0.594846243767987,
    0.590047996332826, 0.585286179263371, 0.580559996100791, 0.575868682972354,
    0.571211506735253, 0.566587763256165, 0.561996775814525, 0.557437893618766,
    0.552910490425833, 0.548413963255266, 0.543947731190026, 0.539511234256952,
    0.535103932380458, 0.530725304403662, 0.526374847171684, 0.522052074672322,
    0.517756517229756, 0.513487720747327, 0.509245245995748, 0.505028667943468,
    0.500837575126149, 0.49667156905249, 0.492530263643869, 0.488413284705458,
    0.484320269426683, 0.480250865909047, 0.476204732719506, 0.47218153846773,
    0.468180961405694, 0.464202689048174, 0.460246417812843, 0.456311852678716,
    0.452398706861849, 0.448506701507203, 0.444635565395739, 0.440785034665804,
    0.436954852547985, 0.433144769112652, 0.429354541029442, 0.425583931338022,
    0.421832709229496, 0.418100649837848, 0.414387534040891, 0.410693148270188,
    0.407017284329473, 0.403359739221114, 0.399720314980197, 0.396098818515832,
    0.392495061459315, 0.388908860018789, 0.385340034840077, 0.381788410873393,
    0.378253817245619, 0.374736087137891, 0.371235057668239, 0.367750569779032,
    0.364282468129004, 0.360830600989648, 0.357394820145781, 0.353974980800077,
    0.350570941481406, 0.347182563956794, 0.343809713146851, 0.340452257044522,
    0.337110066637006, 0.333783015830718, 0.330470981379163, 0.327173842813601,
    0.323891482376391, 0.320623784956905, 0.317370638029914, 0.314131931596337,
    0.310907558126286, 0.307697412504292, 0.30450139197665, 0.301319396100803,
    0.298151326696685, 0.294997087799962, 0.291856585617095, 0.288729728482183,
    0.285616426815502, 0.282516593083708, 0.279430141761638, 0.276356989295668,
    0.273297054068577, 0.270250256365875, 0.267216518343561, 0.264195763997261,
    0.261187919132721, 0.258192911337619, 0.255210669954662, 0.252241126055942,
    0.249284212418529, 0.246339863501264, 0.24340801542275, 0.240488605940501,
    0.237581574431238, 0.23468686187233, 0.231804410824339, 0.228934165414681,
    0.226076071322381, 0.223230075763918, 0.220396127480152, 0.217574176724331,
    0.214764175251174, 0.211966076307031, 0.209179834621125, 0.206405406397881,
    0.203642749310335, 0.200891822494657, 0.198152586545776, 0.195425003514135,
    0.192709036903589, 0.190004651670465, 0.187311814223801, 0.1846304924268,
    0.181960655599523, 0.179302274522848, 0.176655321443735, 0.174019770081839,
    0.171395595637506, 0.168782774801212, 0.166181285764482, 0.163591108232366,
    0.161012223437511, 0.158444614155925, 0.15588826472448, 0.153343161060263,
    0.150809290681846, 0.148286642732575, 0.145775208005994, 0.143274978973514,
    0.140785949814445, 0.138308116448551, 0.135841476571254, 0.133386029691669,
    0.130941777173644, 0.12850872228, 0.126086870220186, 0.123676228201597,
    0.12127680548479, 0.11888861344291, 0.116511665625611, 0.114145977827839,
    0.111791568163838, 0.109448457146812, 0.107116667774684, 0.104796225622487,
    0.102487158941935, 0.10018949876881, 0.0979032790388625, 0.095628536713009,
    0.093365311912691, 0.0911136480663738, 0.0888735920682759,
    0.0866451944505581, 0.0844285095703535, 0.082223595813203,
    0.0800305158146631, 0.0778493367020961, 0.0756801303589272,
    0.0735229737139814, 0.0713779490588905, 0.0692451443970068,
    0.0671246538277886, 0.065016577971243, 0.0629210244377582, 0.06083810834954,
    0.0587679529209339, 0.0567106901062031, 0.0546664613248891,
    0.0526354182767924, 0.0506177238609479, 0.0486135532158687,
    0.0466230949019305, 0.0446465522512946, 0.0426841449164746,
    0.0407361106559411, 0.0388027074045262, 0.0368842156885674,
    0.0349809414617162, 0.0330932194585786, 0.0312214171919203,
    0.0293659397581334, 0.0275272356696031, 0.0257058040085489,
    0.0239022033057959, 0.0221170627073089, 0.0203510962300445,
    0.0186051212757247, 0.0168800831525432, 0.0151770883079353,
    0.0134974506017399, 0.0118427578579079, 0.0102149714397015,
    0.00861658276939875, 0.00705087547137324, 0.00552240329925101,
    0.00403797259336304, 0.00260907274610216, 0.0012602859304986,
    0.000477467764609386 };

  real_T x;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &gk_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  do {
    exitg1 = 0;
    genrand_uint32_vector(e_state, u32);
    i = (int32_T)((u32[1] >> 24U) + 1U);
    r = (((real_T)(u32[0] >> 3U) * 1.6777216E+7 + (real_T)((int32_T)u32[1] &
           16777215)) * 2.2204460492503131E-16 - 1.0) * dv[i];
    if (muDoubleScalarAbs(r) <= dv[i - 1]) {
      exitg1 = 1;
    } else if (i < 256) {
      b_st.site = &hk_emlrtRSI;
      b_u = genrandu(&b_st, e_state);
      if (dv1[i] + b_u * (dv1[i - 1] - dv1[i]) < muDoubleScalarExp(-0.5 * r * r))
      {
        exitg1 = 1;
      }
    } else {
      do {
        b_st.site = &ik_emlrtRSI;
        b_u = genrandu(&b_st, e_state);
        x = muDoubleScalarLog(b_u) * 0.273661237329758;
        b_st.site = &jk_emlrtRSI;
        b_u = genrandu(&b_st, e_state);
      } while (!(-2.0 * muDoubleScalarLog(b_u) > x * x));

      if (r < 0.0) {
        r = x - 3.65415288536101;
      } else {
        r = 3.65415288536101 - x;
      }

      exitg1 = 1;
    }
  } while (exitg1 == 0);

  return r;
}

static real_T genrandu(const emlrtStack *sp, uint32_T mt[625])
{
  real_T r;
  emlrtStack st;
  int32_T exitg1;
  uint32_T b_u[2];
  char_T c_u[37];
  int32_T i;
  const mxArray *y;
  static char_T d_u[37] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
    'A', 'B', ':', 'r', 'a', 'n', 'd', '_', 'i', 'n', 'v', 'a', 'l', 'i', 'd',
    'T', 'w', 'i', 's', 't', 'e', 'r', 'S', 't', 'a', 't', 'e' };

  const mxArray *m;
  static const int32_T iv[2] = { 1, 37 };

  const mxArray *b_y;
  static const int32_T iv1[2] = { 1, 37 };

  st.prev = sp;
  st.tls = sp->tls;

  /* ========================= COPYRIGHT NOTICE ============================ */
  /*  This is a uniform (0,1) pseudorandom number generator based on:        */
  /*                                                                         */
  /*  A C-program for MT19937, with initialization improved 2002/1/26.       */
  /*  Coded by Takuji Nishimura and Makoto Matsumoto.                        */
  /*                                                                         */
  /*  Copyright (C) 1997 - 2002, Makoto Matsumoto and Takuji Nishimura,      */
  /*  All rights reserved.                                                   */
  /*                                                                         */
  /*  Redistribution and use in source and binary forms, with or without     */
  /*  modification, are permitted provided that the following conditions     */
  /*  are met:                                                               */
  /*                                                                         */
  /*    1. Redistributions of source code must retain the above copyright    */
  /*       notice, this list of conditions and the following disclaimer.     */
  /*                                                                         */
  /*    2. Redistributions in binary form must reproduce the above copyright */
  /*       notice, this list of conditions and the following disclaimer      */
  /*       in the documentation and/or other materials provided with the     */
  /*       distribution.                                                     */
  /*                                                                         */
  /*    3. The names of its contributors may not be used to endorse or       */
  /*       promote products derived from this software without specific      */
  /*       prior written permission.                                         */
  /*                                                                         */
  /*  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS    */
  /*  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT      */
  /*  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR  */
  /*  A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT  */
  /*  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,  */
  /*  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT       */
  /*  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,  */
  /*  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY  */
  /*  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT    */
  /*  (INCLUDING  NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE */
  /*  OF THIS  SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.  */
  /*                                                                         */
  /* =============================   END   ================================= */
  do {
    exitg1 = 0;
    genrand_uint32_vector(mt, b_u);
    r = 1.1102230246251565E-16 * ((real_T)(b_u[0] >> 5U) * 6.7108864E+7 +
      (real_T)(b_u[1] >> 6U));
    if (r == 0.0) {
      if (!is_valid_state(mt)) {
        for (i = 0; i < 37; i++) {
          c_u[i] = d_u[i];
        }

        y = NULL;
        m = emlrtCreateCharArray(2, iv);
        emlrtInitCharArrayR2013a(sp, 37, m, &c_u[0]);
        emlrtAssign(&y, m);
        for (i = 0; i < 37; i++) {
          c_u[i] = d_u[i];
        }

        b_y = NULL;
        m = emlrtCreateCharArray(2, iv1);
        emlrtInitCharArrayR2013a(sp, 37, m, &c_u[0]);
        emlrtAssign(&b_y, m);
        st.site = &el_emlrtRSI;
        f_error(&st, y, getString(&st, b_message(&st, b_y, &b_emlrtMCI),
                 &b_emlrtMCI), &b_emlrtMCI);
      }
    } else {
      exitg1 = 1;
    }
  } while (exitg1 == 0);

  return r;
}

static void emxInitStruct_robotics_slmanip_
  (robotics_slmanip_internal_block_IKBlock *pStruct)
{
  emxInitStruct_robotics_manip_in(&pStruct->TreeInternal);
  emxInitStruct_inverseKinematics(&pStruct->IKInternal);
}

static void emxInitStruct_robotics_manip_in
  (robotics_manip_internal_RigidBodyTree *pStruct)
{
  b_emxInitStruct_robotics_manip_in(&pStruct->Base);
}

static void b_emxInitStruct_robotics_manip_in(robotics_manip_internal_RigidBody *
  pStruct)
{
  emxInit_char_T(&pStruct->NameInternal, 2);
  emxInitStruct_rigidBodyJoint(&pStruct->JointInternal);
}

static void emxInit_char_T(emxArray_char_T **pEmxArray, int32_T b_numDimensions)
{
  emxArray_char_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_char_T *)emlrtMallocMex(sizeof(emxArray_char_T));
  emxArray = *pEmxArray;
  emxArray->data = (char_T *)NULL;
  emxArray->numDimensions = b_numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    b_numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < b_numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

static void emxInitStruct_rigidBodyJoint(rigidBodyJoint *pStruct)
{
  emxInit_char_T(&pStruct->Type, 2);
  emxInit_real_T(&pStruct->MotionSubspace, 2);
  emxInit_char_T(&pStruct->NameInternal, 2);
  emxInit_real_T(&pStruct->PositionLimitsInternal, 2);
  emxInit_real_T1(&pStruct->HomePositionInternal, 1);
}

static void emxInit_real_T(emxArray_real_T **pEmxArray, int32_T b_numDimensions)
{
  emxArray_real_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_real_T *)emlrtMallocMex(sizeof(emxArray_real_T));
  emxArray = *pEmxArray;
  emxArray->data = (real_T *)NULL;
  emxArray->numDimensions = b_numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    b_numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < b_numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

static void emxInit_real_T1(emxArray_real_T **pEmxArray, int32_T b_numDimensions)
{
  emxArray_real_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_real_T *)emlrtMallocMex(sizeof(emxArray_real_T));
  emxArray = *pEmxArray;
  emxArray->data = (real_T *)NULL;
  emxArray->numDimensions = b_numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    b_numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < b_numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

static void emxInitStruct_inverseKinematics(inverseKinematics *pStruct)
{
  emxInit_real_T(&pStruct->Limits, 2);
}

static void emxInitStruct_robotics_core_int
  (robotics_core_internal_DampedBFGSwGradientProjection *pStruct)
{
  emxInit_real_T(&pStruct->ConstraintMatrix, 2);
  emxInit_real_T1(&pStruct->ConstraintBound, 1);
}

static void c_emxInitStruct_robotics_manip_in
  (robotics_manip_internal_IKExtraArgs *pStruct)
{
  emxInit_char_T(&pStruct->BodyName, 2);
  emxInit_real_T1(&pStruct->ErrTemp, 1);
  emxInit_real_T1(&pStruct->GradTemp, 1);
}

static void d_emxInitStruct_robotics_manip_in
  (robotics_manip_internal_RigidBodyTree_1 *pStruct)
{
  e_emxInitStruct_robotics_manip_in(&pStruct->Base);
}

static void e_emxInitStruct_robotics_manip_in
  (robotics_manip_internal_RigidBody_1 *pStruct)
{
  emxInit_char_T(&pStruct->NameInternal, 2);
}

static void emxFree_char_T(emxArray_char_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_char_T *)NULL) {
    if (((*pEmxArray)->data != (char_T *)NULL) && (*pEmxArray)->canFreeData) {
      emlrtFreeMex((*pEmxArray)->data);
    }

    emlrtFreeMex((*pEmxArray)->size);
    emlrtFreeMex(*pEmxArray);
    *pEmxArray = (emxArray_char_T *)NULL;
  }
}

static void emxFreeStruct_robotics_manip_in(robotics_manip_internal_RigidBody
  *pStruct)
{
  emxFree_char_T(&pStruct->NameInternal);
  emxFreeStruct_rigidBodyJoint(&pStruct->JointInternal);
}

static void emxFreeStruct_rigidBodyJoint(rigidBodyJoint *pStruct)
{
  emxFree_char_T(&pStruct->Type);
  emxFree_real_T(&pStruct->MotionSubspace);
  emxFree_char_T(&pStruct->NameInternal);
  emxFree_real_T(&pStruct->PositionLimitsInternal);
  emxFree_real_T(&pStruct->HomePositionInternal);
}

static void emxFree_real_T(emxArray_real_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_real_T *)NULL) {
    if (((*pEmxArray)->data != (real_T *)NULL) && (*pEmxArray)->canFreeData) {
      emlrtFreeMex((*pEmxArray)->data);
    }

    emlrtFreeMex((*pEmxArray)->size);
    emlrtFreeMex(*pEmxArray);
    *pEmxArray = (emxArray_real_T *)NULL;
  }
}

static void b_emxFreeStruct_robotics_manip_in
  (robotics_manip_internal_RigidBodyTree *pStruct)
{
  emxFreeStruct_robotics_manip_in(&pStruct->Base);
}

static void emxFreeStruct_robotics_slmanip_
  (robotics_slmanip_internal_block_IKBlock *pStruct)
{
  b_emxFreeStruct_robotics_manip_in(&pStruct->TreeInternal);
  emxFreeStruct_inverseKinematics(&pStruct->IKInternal);
}

static void emxFreeStruct_inverseKinematics(inverseKinematics *pStruct)
{
  emxFree_real_T(&pStruct->Limits);
}

static void emxFreeStruct_robotics_core_int
  (robotics_core_internal_DampedBFGSwGradientProjection *pStruct)
{
  emxFree_real_T(&pStruct->ConstraintMatrix);
  emxFree_real_T(&pStruct->ConstraintBound);
}

static void c_emxFreeStruct_robotics_manip_in
  (robotics_manip_internal_IKExtraArgs *pStruct)
{
  emxFree_char_T(&pStruct->BodyName);
  emxFree_real_T(&pStruct->ErrTemp);
  emxFree_real_T(&pStruct->GradTemp);
}

static void d_emxFreeStruct_robotics_manip_in
  (robotics_manip_internal_RigidBody_1 *pStruct)
{
  emxFree_char_T(&pStruct->NameInternal);
}

static void e_emxFreeStruct_robotics_manip_in
  (robotics_manip_internal_RigidBodyTree_1 *pStruct)
{
  d_emxFreeStruct_robotics_manip_in(&pStruct->Base);
}

static void emxEnsureCapacity_char_T(emxArray_char_T *emxArray, int32_T oldNumel)
{
  int32_T newNumel;
  int32_T i;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel *= emxArray->size[i];
  }

  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }

    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i <<= 1;
      }
    }

    newData = emlrtCallocMex((uint32_T)i, sizeof(char_T));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(char_T) * (uint32_T)oldNumel);
      if (emxArray->canFreeData) {
        emlrtFreeMex(emxArray->data);
      }
    }

    emxArray->data = (char_T *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

static void emxEnsureCapacity_real_T(emxArray_real_T *emxArray, int32_T oldNumel)
{
  int32_T newNumel;
  int32_T i;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel *= emxArray->size[i];
  }

  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }

    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i <<= 1;
      }
    }

    newData = emlrtCallocMex((uint32_T)i, sizeof(real_T));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(real_T) * (uint32_T)oldNumel);
      if (emxArray->canFreeData) {
        emlrtFreeMex(emxArray->data);
      }
    }

    emxArray->data = (real_T *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

static void emxEnsureCapacity_real_T1(emxArray_real_T *emxArray, int32_T
  oldNumel)
{
  int32_T newNumel;
  int32_T i;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel *= emxArray->size[i];
  }

  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }

    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i <<= 1;
      }
    }

    newData = emlrtCallocMex((uint32_T)i, sizeof(real_T));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(real_T) * (uint32_T)oldNumel);
      if (emxArray->canFreeData) {
        emlrtFreeMex(emxArray->data);
      }
    }

    emxArray->data = (real_T *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

static void emxEnsureCapacity_int32_T(emxArray_int32_T *emxArray, int32_T
  oldNumel)
{
  int32_T newNumel;
  int32_T i;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel *= emxArray->size[i];
  }

  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }

    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i <<= 1;
      }
    }

    newData = emlrtCallocMex((uint32_T)i, sizeof(int32_T));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(int32_T) * (uint32_T)oldNumel);
      if (emxArray->canFreeData) {
        emlrtFreeMex(emxArray->data);
      }
    }

    emxArray->data = (int32_T *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

static void emxEnsureCapacity_int8_T(emxArray_int8_T *emxArray, int32_T oldNumel)
{
  int32_T newNumel;
  int32_T i;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel *= emxArray->size[i];
  }

  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }

    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i <<= 1;
      }
    }

    newData = emlrtCallocMex((uint32_T)i, sizeof(int8_T));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(int8_T) * (uint32_T)oldNumel);
      if (emxArray->canFreeData) {
        emlrtFreeMex(emxArray->data);
      }
    }

    emxArray->data = (int8_T *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

static void emxEnsureCapacity_int32_T1(emxArray_int32_T *emxArray, int32_T
  oldNumel)
{
  int32_T newNumel;
  int32_T i;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel *= emxArray->size[i];
  }

  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }

    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i <<= 1;
      }
    }

    newData = emlrtCallocMex((uint32_T)i, sizeof(int32_T));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(int32_T) * (uint32_T)oldNumel);
      if (emxArray->canFreeData) {
        emlrtFreeMex(emxArray->data);
      }
    }

    emxArray->data = (int32_T *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

static void emxInit_int8_T(emxArray_int8_T **pEmxArray, int32_T b_numDimensions)
{
  emxArray_int8_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_int8_T *)emlrtMallocMex(sizeof(emxArray_int8_T));
  emxArray = *pEmxArray;
  emxArray->data = (int8_T *)NULL;
  emxArray->numDimensions = b_numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    b_numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < b_numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

static void emxInit_int32_T(emxArray_int32_T **pEmxArray, int32_T
  b_numDimensions)
{
  emxArray_int32_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_int32_T *)emlrtMallocMex(sizeof(emxArray_int32_T));
  emxArray = *pEmxArray;
  emxArray->data = (int32_T *)NULL;
  emxArray->numDimensions = b_numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    b_numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < b_numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

static void emxInit_int32_T1(emxArray_int32_T **pEmxArray, int32_T
  b_numDimensions)
{
  emxArray_int32_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_int32_T *)emlrtMallocMex(sizeof(emxArray_int32_T));
  emxArray = *pEmxArray;
  emxArray->data = (int32_T *)NULL;
  emxArray->numDimensions = b_numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    b_numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < b_numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

static void emxFree_int8_T(emxArray_int8_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_int8_T *)NULL) {
    if (((*pEmxArray)->data != (int8_T *)NULL) && (*pEmxArray)->canFreeData) {
      emlrtFreeMex((*pEmxArray)->data);
    }

    emlrtFreeMex((*pEmxArray)->size);
    emlrtFreeMex(*pEmxArray);
    *pEmxArray = (emxArray_int8_T *)NULL;
  }
}

static void emxFree_int32_T(emxArray_int32_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_int32_T *)NULL) {
    if (((*pEmxArray)->data != (int32_T *)NULL) && (*pEmxArray)->canFreeData) {
      emlrtFreeMex((*pEmxArray)->data);
    }

    emlrtFreeMex((*pEmxArray)->size);
    emlrtFreeMex(*pEmxArray);
    *pEmxArray = (emxArray_int32_T *)NULL;
  }
}

static void emxEnsureCapacity_boolean_T(emxArray_boolean_T *emxArray, int32_T
  oldNumel)
{
  int32_T newNumel;
  int32_T i;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel *= emxArray->size[i];
  }

  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }

    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i <<= 1;
      }
    }

    newData = emlrtCallocMex((uint32_T)i, sizeof(boolean_T));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(boolean_T) * (uint32_T)oldNumel);
      if (emxArray->canFreeData) {
        emlrtFreeMex(emxArray->data);
      }
    }

    emxArray->data = (boolean_T *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

static void emxInit_boolean_T(emxArray_boolean_T **pEmxArray, int32_T
  b_numDimensions)
{
  emxArray_boolean_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_boolean_T *)emlrtMallocMex(sizeof(emxArray_boolean_T));
  emxArray = *pEmxArray;
  emxArray->data = (boolean_T *)NULL;
  emxArray->numDimensions = b_numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    b_numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < b_numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

static void emxFree_boolean_T(emxArray_boolean_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_boolean_T *)NULL) {
    if (((*pEmxArray)->data != (boolean_T *)NULL) && (*pEmxArray)->canFreeData)
    {
      emlrtFreeMex((*pEmxArray)->data);
    }

    emlrtFreeMex((*pEmxArray)->size);
    emlrtFreeMex(*pEmxArray);
    *pEmxArray = (emxArray_boolean_T *)NULL;
  }
}

static void emxEnsureCapacity_ptrdiff_t(emxArray_ptrdiff_t *emxArray, int32_T
  oldNumel)
{
  int32_T newNumel;
  int32_T i;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel *= emxArray->size[i];
  }

  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }

    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i <<= 1;
      }
    }

    newData = emlrtCallocMex((uint32_T)i, sizeof(ptrdiff_t));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(ptrdiff_t) * (uint32_T)oldNumel);
      if (emxArray->canFreeData) {
        emlrtFreeMex(emxArray->data);
      }
    }

    emxArray->data = (ptrdiff_t *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

static void emxInit_ptrdiff_t(emxArray_ptrdiff_t **pEmxArray, int32_T
  b_numDimensions)
{
  emxArray_ptrdiff_t *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_ptrdiff_t *)emlrtMallocMex(sizeof(emxArray_ptrdiff_t));
  emxArray = *pEmxArray;
  emxArray->data = (ptrdiff_t *)NULL;
  emxArray->numDimensions = b_numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    b_numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < b_numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

static void emxFree_ptrdiff_t(emxArray_ptrdiff_t **pEmxArray)
{
  if (*pEmxArray != (emxArray_ptrdiff_t *)NULL) {
    if (((*pEmxArray)->data != (ptrdiff_t *)NULL) && (*pEmxArray)->canFreeData)
    {
      emlrtFreeMex((*pEmxArray)->data);
    }

    emlrtFreeMex((*pEmxArray)->size);
    emlrtFreeMex(*pEmxArray);
    *pEmxArray = (emxArray_ptrdiff_t *)NULL;
  }
}

static int32_T div_nzp_s32(int32_T numerator, int32_T denominator)
{
  int32_T quotient;
  uint32_T absNumerator;
  uint32_T absDenominator;
  boolean_T quotientNeedsNegation;
  if (numerator < 0) {
    absNumerator = ~(uint32_T)numerator + 1U;
  } else {
    absNumerator = (uint32_T)numerator;
  }

  if (denominator < 0) {
    absDenominator = ~(uint32_T)denominator + 1U;
  } else {
    absDenominator = (uint32_T)denominator;
  }

  quotientNeedsNegation = ((numerator < 0) != (denominator < 0));
  absNumerator /= absDenominator;
  if (quotientNeedsNegation) {
    quotient = -(int32_T)absNumerator;
  } else {
    quotient = (int32_T)absNumerator;
  }

  return quotient;
}

static int32_T div_s32_floor(const emlrtStack *sp, int32_T numerator, int32_T
  denominator)
{
  int32_T quotient;
  uint32_T absNumerator;
  uint32_T absDenominator;
  boolean_T quotientNeedsNegation;
  uint32_T tempAbsQuotient;
  if (denominator == 0) {
    if (numerator >= 0) {
      quotient = MAX_int32_T;
    } else {
      quotient = MIN_int32_T;
    }

    emlrtDivisionByZeroWarningOrError2018b(NULL, sp);
  } else {
    if (numerator < 0) {
      absNumerator = ~(uint32_T)numerator + 1U;
    } else {
      absNumerator = (uint32_T)numerator;
    }

    if (denominator < 0) {
      absDenominator = ~(uint32_T)denominator + 1U;
    } else {
      absDenominator = (uint32_T)denominator;
    }

    quotientNeedsNegation = ((numerator < 0) != (denominator < 0));
    tempAbsQuotient = absNumerator / absDenominator;
    if (quotientNeedsNegation) {
      absNumerator %= absDenominator;
      if (absNumerator > 0U) {
        tempAbsQuotient++;
      }
    }

    if (quotientNeedsNegation) {
      quotient = -(int32_T)tempAbsQuotient;
    } else {
      quotient = (int32_T)tempAbsQuotient;
    }
  }

  return quotient;
}

static void init_simulink_io_address(InstanceStruct_99HJ2LsbXT8ZQdi4PHECuF
  *moduleInstance)
{
  moduleInstance->emlrtRootTLSGlobal = (void *)cgxertGetEMLRTCtx
    (moduleInstance->S);
  moduleInstance->u0 = (real_T (*)[16])cgxertGetInputPortSignal
    (moduleInstance->S, 0);
  moduleInstance->u1 = (real_T (*)[6])cgxertGetInputPortSignal(moduleInstance->S,
    1);
  moduleInstance->u2 = (real_T (*)[2])cgxertGetInputPortSignal(moduleInstance->S,
    2);
  moduleInstance->b_y0 = (real_T (*)[2])cgxertGetOutputPortSignal
    (moduleInstance->S, 0);
  moduleInstance->b_y1 = (ikblock_info_bus *)cgxertGetOutputPortSignal
    (moduleInstance->S, 1);
}

/* CGXE Glue Code */
static void mdlOutputs_99HJ2LsbXT8ZQdi4PHECuF(SimStruct *S, int_T tid)
{
  InstanceStruct_99HJ2LsbXT8ZQdi4PHECuF *moduleInstance =
    (InstanceStruct_99HJ2LsbXT8ZQdi4PHECuF *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_outputs(moduleInstance);
}

static void mdlInitialize_99HJ2LsbXT8ZQdi4PHECuF(SimStruct *S)
{
  InstanceStruct_99HJ2LsbXT8ZQdi4PHECuF *moduleInstance =
    (InstanceStruct_99HJ2LsbXT8ZQdi4PHECuF *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_initialize(moduleInstance);
}

static void mdlUpdate_99HJ2LsbXT8ZQdi4PHECuF(SimStruct *S, int_T tid)
{
  InstanceStruct_99HJ2LsbXT8ZQdi4PHECuF *moduleInstance =
    (InstanceStruct_99HJ2LsbXT8ZQdi4PHECuF *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_update(moduleInstance);
}

static void mdlTerminate_99HJ2LsbXT8ZQdi4PHECuF(SimStruct *S)
{
  InstanceStruct_99HJ2LsbXT8ZQdi4PHECuF *moduleInstance =
    (InstanceStruct_99HJ2LsbXT8ZQdi4PHECuF *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_terminate(moduleInstance);
  free((void *)moduleInstance);
}

static void mdlEnable_99HJ2LsbXT8ZQdi4PHECuF(SimStruct *S)
{
  InstanceStruct_99HJ2LsbXT8ZQdi4PHECuF *moduleInstance =
    (InstanceStruct_99HJ2LsbXT8ZQdi4PHECuF *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_enable(moduleInstance);
}

static void mdlDisable_99HJ2LsbXT8ZQdi4PHECuF(SimStruct *S)
{
  InstanceStruct_99HJ2LsbXT8ZQdi4PHECuF *moduleInstance =
    (InstanceStruct_99HJ2LsbXT8ZQdi4PHECuF *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_disable(moduleInstance);
}

static void mdlStart_99HJ2LsbXT8ZQdi4PHECuF(SimStruct *S)
{
  InstanceStruct_99HJ2LsbXT8ZQdi4PHECuF *moduleInstance =
    (InstanceStruct_99HJ2LsbXT8ZQdi4PHECuF *)calloc(1, sizeof
    (InstanceStruct_99HJ2LsbXT8ZQdi4PHECuF));
  moduleInstance->S = S;
  cgxertSetRuntimeInstance(S, (void *)moduleInstance);
  ssSetmdlOutputs(S, mdlOutputs_99HJ2LsbXT8ZQdi4PHECuF);
  ssSetmdlInitializeConditions(S, mdlInitialize_99HJ2LsbXT8ZQdi4PHECuF);
  ssSetmdlUpdate(S, mdlUpdate_99HJ2LsbXT8ZQdi4PHECuF);
  ssSetmdlTerminate(S, mdlTerminate_99HJ2LsbXT8ZQdi4PHECuF);
  ssSetmdlEnable(S, mdlEnable_99HJ2LsbXT8ZQdi4PHECuF);
  ssSetmdlDisable(S, mdlDisable_99HJ2LsbXT8ZQdi4PHECuF);
  cgxe_mdl_start(moduleInstance);

  {
    uint_T options = ssGetOptions(S);
    options |= SS_OPTION_RUNTIME_EXCEPTION_FREE_CODE;
    ssSetOptions(S, options);
  }
}

static void mdlProcessParameters_99HJ2LsbXT8ZQdi4PHECuF(SimStruct *S)
{
}

void method_dispatcher_99HJ2LsbXT8ZQdi4PHECuF(SimStruct *S, int_T method, void
  *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_99HJ2LsbXT8ZQdi4PHECuF(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_99HJ2LsbXT8ZQdi4PHECuF(S);
    break;

   default:
    /* Unhandled method */
    /*
       sf_mex_error_message("Stateflow Internal Error:\n"
       "Error calling method dispatcher for module: 99HJ2LsbXT8ZQdi4PHECuF.\n"
       "Can't handle method %d.\n", method);
     */
    break;
  }
}

mxArray *cgxe_99HJ2LsbXT8ZQdi4PHECuF_BuildInfoUpdate(void)
{
  mxArray * mxBIArgs;
  mxArray * elem_1;
  mxArray * elem_2;
  mxArray * elem_3;
  mxArray * elem_4;
  mxArray * elem_5;
  mxArray * elem_6;
  mxArray * elem_7;
  mxArray * elem_8;
  mxArray * elem_9;
  mxArray * elem_10;
  mxArray * elem_11;
  mxArray * elem_12;
  mxArray * elem_13;
  mxArray * elem_14;
  mxArray * elem_15;
  mxArray * elem_16;
  mxArray * elem_17;
  mxArray * elem_18;
  mxArray * elem_19;
  mxArray * elem_20;
  mxArray * elem_21;
  mxArray * elem_22;
  mxArray * elem_23;
  mxArray * elem_24;
  mxArray * elem_25;
  mxArray * elem_26;
  mxArray * elem_27;
  mxArray * elem_28;
  mxBIArgs = mxCreateCellMatrix(1,3);
  elem_1 = mxCreateCellMatrix(1,6);
  elem_2 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,0,elem_2);
  elem_3 = mxCreateCellMatrix(1,4);
  elem_4 = mxCreateString("addIncludeFiles");
  mxSetCell(elem_3,0,elem_4);
  elem_5 = mxCreateCellMatrix(1,4);
  elem_6 = mxCreateString("<string.h>");
  mxSetCell(elem_5,0,elem_6);
  elem_7 = mxCreateString("blas.h");
  mxSetCell(elem_5,1,elem_7);
  elem_8 = mxCreateString("ctimefun.h");
  mxSetCell(elem_5,2,elem_8);
  elem_9 = mxCreateString("lapacke.h");
  mxSetCell(elem_5,3,elem_9);
  mxSetCell(elem_3,1,elem_5);
  elem_10 = mxCreateCellMatrix(1,4);
  elem_11 = mxCreateString("");
  mxSetCell(elem_10,0,elem_11);
  elem_12 = mxCreateString("");
  mxSetCell(elem_10,1,elem_12);
  elem_13 = mxCreateString("");
  mxSetCell(elem_10,2,elem_13);
  elem_14 = mxCreateString("");
  mxSetCell(elem_10,3,elem_14);
  mxSetCell(elem_3,2,elem_10);
  elem_15 = mxCreateCellMatrix(1,4);
  elem_16 = mxCreateString("__EMLJITSupported__");
  mxSetCell(elem_15,0,elem_16);
  elem_17 = mxCreateString("__EMLJITSupported__");
  mxSetCell(elem_15,1,elem_17);
  elem_18 = mxCreateString("CustomCode");
  mxSetCell(elem_15,2,elem_18);
  elem_19 = mxCreateString("__EMLJITSupported__");
  mxSetCell(elem_15,3,elem_19);
  mxSetCell(elem_3,3,elem_15);
  mxSetCell(elem_1,1,elem_3);
  elem_20 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,2,elem_20);
  elem_21 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,3,elem_21);
  elem_22 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,4,elem_22);
  elem_23 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,5,elem_23);
  mxSetCell(mxBIArgs,0,elem_1);
  elem_24 = mxCreateCellMatrix(1,3);
  elem_25 = mxCreateString("robotics.core.internal.SystemTimeProvider");
  mxSetCell(elem_24,0,elem_25);
  elem_26 = mxCreateString("coder.internal.blas.BLASApi");
  mxSetCell(elem_24,1,elem_26);
  elem_27 = mxCreateString("coder.internal.lapack.LAPACKApi");
  mxSetCell(elem_24,2,elem_27);
  mxSetCell(mxBIArgs,1,elem_24);
  elem_28 = mxCreateCellMatrix(1,0);
  mxSetCell(mxBIArgs,2,elem_28);
  return mxBIArgs;
}

mxArray *cgxe_99HJ2LsbXT8ZQdi4PHECuF_fallback_info(void)
{
  const char* fallbackInfoFields[] = { "fallbackType", "incompatiableSymbol" };

  mxArray* fallbackInfoStruct = mxCreateStructMatrix(1, 1, 2, fallbackInfoFields);
  mxArray* fallbackType = mxCreateString("thirdPartyLibs");
  mxArray* incompatibleSymbol = mxCreateString(
    "robotics.core.internal.SystemTimeProvider");
  mxSetFieldByNumber(fallbackInfoStruct, 0, 0, fallbackType);
  mxSetFieldByNumber(fallbackInfoStruct, 0, 1, incompatibleSymbol);
  return fallbackInfoStruct;
}
