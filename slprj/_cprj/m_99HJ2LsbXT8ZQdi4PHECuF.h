#ifndef __99HJ2LsbXT8ZQdi4PHECuF_h__
#define __99HJ2LsbXT8ZQdi4PHECuF_h__

/* Include files */
#include "simstruc.h"
#include "rtwtypes.h"
#include "multiword_types.h"
#include "slexec_vm_zc_functions.h"
#include "slexec_vm_simstruct_bridge.h"
#include "sl_sfcn_cov/sl_sfcn_cov_bridge.h"

/* Type Definitions */
#ifndef struct_ikblock_info_bus_tag
#define struct_ikblock_info_bus_tag

struct ikblock_info_bus_tag
{
  real_T Iterations;
  real_T PoseErrorNorm;
  uint16_T ExitFlag;
  uint8_T Status;
};

#endif                                 /*struct_ikblock_info_bus_tag*/

#ifndef typedef_ikblock_info_bus
#define typedef_ikblock_info_bus

typedef struct ikblock_info_bus_tag ikblock_info_bus;

#endif                                 /*typedef_ikblock_info_bus*/

#ifndef struct_tag_sNwZyi0mdNnKOcSoslkxMwD
#define struct_tag_sNwZyi0mdNnKOcSoslkxMwD

struct tag_sNwZyi0mdNnKOcSoslkxMwD
{
  boolean_T EnforceJointLimits;
  boolean_T AllowRandomRestart;
  real_T MaxIterations;
  real_T MaxTime;
  real_T GradientTolerance;
  real_T SolutionTolerance;
  real_T StepTolerance;
};

#endif                                 /*struct_tag_sNwZyi0mdNnKOcSoslkxMwD*/

#ifndef typedef_sNwZyi0mdNnKOcSoslkxMwD
#define typedef_sNwZyi0mdNnKOcSoslkxMwD

typedef struct tag_sNwZyi0mdNnKOcSoslkxMwD sNwZyi0mdNnKOcSoslkxMwD;

#endif                                 /*typedef_sNwZyi0mdNnKOcSoslkxMwD*/

#ifndef struct_tag_skA4KFEZ4HPkJJBOYCrevdH
#define struct_tag_skA4KFEZ4HPkJJBOYCrevdH

struct tag_skA4KFEZ4HPkJJBOYCrevdH
{
  uint32_T SafeEq;
  uint32_T Absolute;
  uint32_T NaNBias;
  uint32_T NaNWithFinite;
  uint32_T FiniteWithNaN;
  uint32_T NaNWithNaN;
};

#endif                                 /*struct_tag_skA4KFEZ4HPkJJBOYCrevdH*/

#ifndef typedef_skA4KFEZ4HPkJJBOYCrevdH
#define typedef_skA4KFEZ4HPkJJBOYCrevdH

typedef struct tag_skA4KFEZ4HPkJJBOYCrevdH skA4KFEZ4HPkJJBOYCrevdH;

#endif                                 /*typedef_skA4KFEZ4HPkJJBOYCrevdH*/

#ifndef enum_robotics_core_internal_NLPSolverExitFlags
#define enum_robotics_core_internal_NLPSolverExitFlags

enum robotics_core_internal_NLPSolverExitFlags
{
  robotics_core_internal_NLPSolverExitFlags_LocalMinimumFound = 1,/* Default value */
  robotics_core_internal_NLPSolverExitFlags_IterationLimitExceeded,
  robotics_core_internal_NLPSolverExitFlags_TimeLimitExceeded,
  robotics_core_internal_NLPSolverExitFlags_StepSizeBelowMinimum,
  robotics_core_internal_NLPSolverExitFlags_ChangeInErrorBelowMinimum,
  robotics_core_internal_NLPSolverExitFlags_SearchDirectionInvalid,
  robotics_core_internal_NLPSolverExitFlags_HessianNotPositiveSemidefinite,
  robotics_core_internal_NLPSolverExitFlags_TrustRegionRadiusBelowMinimum
};

#endif                                 /*enum_robotics_core_internal_NLPSolverExitFlags*/

#ifndef typedef_robotics_core_internal_NLPSolverExitFlags
#define typedef_robotics_core_internal_NLPSolverExitFlags

typedef enum robotics_core_internal_NLPSolverExitFlags
  robotics_core_internal_NLPSolverExitFlags;

#endif                                 /*typedef_robotics_core_internal_NLPSolverExitFlags*/

#ifndef typedef_robotics_core_internal_SystemTimeProvider
#define typedef_robotics_core_internal_SystemTimeProvider

typedef struct {
  real_T StartTime;
} robotics_core_internal_SystemTimeProvider;

#endif                                 /*typedef_robotics_core_internal_SystemTimeProvider*/

#ifndef struct_emxArray_char_T
#define struct_emxArray_char_T

struct emxArray_char_T
{
  char_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_char_T*/

#ifndef typedef_emxArray_char_T
#define typedef_emxArray_char_T

typedef struct emxArray_char_T emxArray_char_T;

#endif                                 /*typedef_emxArray_char_T*/

#ifndef struct_emxArray_real_T
#define struct_emxArray_real_T

struct emxArray_real_T
{
  real_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_real_T*/

#ifndef typedef_emxArray_real_T
#define typedef_emxArray_real_T

typedef struct emxArray_real_T emxArray_real_T;

#endif                                 /*typedef_emxArray_real_T*/

#ifndef struct_emxArray_int8_T
#define struct_emxArray_int8_T

struct emxArray_int8_T
{
  int8_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_int8_T*/

#ifndef typedef_emxArray_int8_T
#define typedef_emxArray_int8_T

typedef struct emxArray_int8_T emxArray_int8_T;

#endif                                 /*typedef_emxArray_int8_T*/

#ifndef struct_emxArray_int32_T
#define struct_emxArray_int32_T

struct emxArray_int32_T
{
  int32_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_int32_T*/

#ifndef typedef_emxArray_int32_T
#define typedef_emxArray_int32_T

typedef struct emxArray_int32_T emxArray_int32_T;

#endif                                 /*typedef_emxArray_int32_T*/

#ifndef struct_emxArray_boolean_T
#define struct_emxArray_boolean_T

struct emxArray_boolean_T
{
  boolean_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_boolean_T*/

#ifndef typedef_emxArray_boolean_T
#define typedef_emxArray_boolean_T

typedef struct emxArray_boolean_T emxArray_boolean_T;

#endif                                 /*typedef_emxArray_boolean_T*/

#ifndef struct_emxArray_ptrdiff_t
#define struct_emxArray_ptrdiff_t

struct emxArray_ptrdiff_t
{
  ptrdiff_t *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_ptrdiff_t*/

#ifndef typedef_emxArray_ptrdiff_t
#define typedef_emxArray_ptrdiff_t

typedef struct emxArray_ptrdiff_t emxArray_ptrdiff_t;

#endif                                 /*typedef_emxArray_ptrdiff_t*/

#ifndef typedef_rigidBodyJoint
#define typedef_rigidBodyJoint

typedef struct {
  emxArray_char_T *Type;
  real_T VelocityNumber;
  real_T PositionNumber;
  emxArray_real_T *MotionSubspace;
  boolean_T InTree;
  real_T JointToParentTransform[16];
  real_T ChildToJointTransform[16];
  emxArray_char_T *NameInternal;
  emxArray_real_T *PositionLimitsInternal;
  emxArray_real_T *HomePositionInternal;
  real_T JointAxisInternal[3];
} rigidBodyJoint;

#endif                                 /*typedef_rigidBodyJoint*/

#ifndef typedef_robotics_manip_internal_RigidBody_1
#define typedef_robotics_manip_internal_RigidBody_1

typedef struct {
  real_T Index;
  emxArray_char_T *NameInternal;
  rigidBodyJoint *JointInternal;
  real_T ParentIndex;
} robotics_manip_internal_RigidBody_1;

#endif                                 /*typedef_robotics_manip_internal_RigidBody_1*/

#ifndef typedef_robotics_manip_internal_RigidBodyTree_1
#define typedef_robotics_manip_internal_RigidBodyTree_1

typedef struct {
  real_T NumBodies;
  robotics_manip_internal_RigidBody_1 Base;
  robotics_manip_internal_RigidBody_1 *Bodies[3];
  real_T NumNonFixedBodies;
  real_T PositionNumber;
  real_T VelocityNumber;
  real_T PositionDoFMap[6];
  real_T VelocityDoFMap[6];
} robotics_manip_internal_RigidBodyTree_1;

#endif                                 /*typedef_robotics_manip_internal_RigidBodyTree_1*/

#ifndef typedef_robotics_manip_internal_IKExtraArgs
#define typedef_robotics_manip_internal_IKExtraArgs

typedef struct {
  robotics_manip_internal_RigidBodyTree_1 *Robot;
  real_T WeightMatrix[36];
  emxArray_char_T *BodyName;
  real_T Tform[16];
  emxArray_real_T *ErrTemp;
  real_T CostTemp;
  emxArray_real_T *GradTemp;
} robotics_manip_internal_IKExtraArgs;

#endif                                 /*typedef_robotics_manip_internal_IKExtraArgs*/

#ifndef typedef_robotics_core_internal_DampedBFGSwGradientProjection
#define typedef_robotics_core_internal_DampedBFGSwGradientProjection

typedef struct {
  char_T Name[22];
  emxArray_real_T *ConstraintMatrix;
  emxArray_real_T *ConstraintBound;
  boolean_T ConstraintsOn;
  real_T SolutionTolerance;
  boolean_T RandomRestart;
  robotics_manip_internal_IKExtraArgs *ExtraArgs;
  real_T MaxNumIteration;
  real_T MaxTime;
  real_T SeedInternal[2];
  real_T MaxTimeInternal;
  real_T MaxNumIterationInternal;
  real_T StepTolerance;
  robotics_core_internal_SystemTimeProvider TimeObj;
  real_T GradientTolerance;
  real_T ArmijoRuleBeta;
  real_T ArmijoRuleSigma;
  robotics_core_internal_SystemTimeProvider TimeObjInternal;
} robotics_core_internal_DampedBFGSwGradientProjection;

#endif                                 /*typedef_robotics_core_internal_DampedBFGSwGradientProjection*/

#ifndef typedef_robotics_manip_internal_RigidBody
#define typedef_robotics_manip_internal_RigidBody

typedef struct {
  real_T Index;
  emxArray_char_T *NameInternal;
  rigidBodyJoint JointInternal;
  real_T ParentIndex;
  real_T MassInternal;
  real_T CenterOfMassInternal[3];
  real_T InertiaInternal[9];
  real_T SpatialInertia[36];
} robotics_manip_internal_RigidBody;

#endif                                 /*typedef_robotics_manip_internal_RigidBody*/

#ifndef typedef_inverseKinematics
#define typedef_inverseKinematics

typedef struct {
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  robotics_core_internal_DampedBFGSwGradientProjection *Solver;
  emxArray_real_T *Limits;
  robotics_manip_internal_RigidBodyTree_1 *RigidBodyTreeInternal;
} inverseKinematics;

#endif                                 /*typedef_inverseKinematics*/

#ifndef typedef_robotics_manip_internal_RigidBodyTree
#define typedef_robotics_manip_internal_RigidBodyTree

typedef struct {
  real_T NumBodies;
  robotics_manip_internal_RigidBody Base;
  real_T Gravity[3];
  robotics_manip_internal_RigidBody *Bodies[3];
} robotics_manip_internal_RigidBodyTree;

#endif                                 /*typedef_robotics_manip_internal_RigidBodyTree*/

#ifndef typedef_robotics_slmanip_internal_block_IKBlock
#define typedef_robotics_slmanip_internal_block_IKBlock

typedef struct {
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  robotics_manip_internal_RigidBodyTree TreeInternal;
  inverseKinematics IKInternal;
} robotics_slmanip_internal_block_IKBlock;

#endif                                 /*typedef_robotics_slmanip_internal_block_IKBlock*/

#ifndef struct_tag_sw4DXKEmUOeLddTk47QV7BE
#define struct_tag_sw4DXKEmUOeLddTk47QV7BE

struct tag_sw4DXKEmUOeLddTk47QV7BE
{
  real_T NameLength;
  uint8_T Name[5];
  real_T ParentIndex;
  real_T NumChildren;
  real_T ChildrenIndices[3];
  real_T Mass;
  real_T CenterOfMass[3];
  real_T Inertia[9];
  real_T SpatialInertia[36];
};

#endif                                 /*struct_tag_sw4DXKEmUOeLddTk47QV7BE*/

#ifndef typedef_sw4DXKEmUOeLddTk47QV7BE
#define typedef_sw4DXKEmUOeLddTk47QV7BE

typedef struct tag_sw4DXKEmUOeLddTk47QV7BE sw4DXKEmUOeLddTk47QV7BE;

#endif                                 /*typedef_sw4DXKEmUOeLddTk47QV7BE*/

#ifndef struct_tag_snNPBQjGRZDk13cYPIP5bAE
#define struct_tag_snNPBQjGRZDk13cYPIP5bAE

struct tag_snNPBQjGRZDk13cYPIP5bAE
{
  uint8_T Type;
  real_T NameLength;
  uint8_T Name[8];
  real_T VelocityNumber;
  real_T PositionNumber;
  real_T MotionSubspace[36];
  real_T JointAxis[3];
  real_T PositionLimits[14];
  real_T HomePosition[7];
  real_T JointToParentTransform[16];
  real_T ChildToJointTransform[16];
};

#endif                                 /*struct_tag_snNPBQjGRZDk13cYPIP5bAE*/

#ifndef typedef_snNPBQjGRZDk13cYPIP5bAE
#define typedef_snNPBQjGRZDk13cYPIP5bAE

typedef struct tag_snNPBQjGRZDk13cYPIP5bAE snNPBQjGRZDk13cYPIP5bAE;

#endif                                 /*typedef_snNPBQjGRZDk13cYPIP5bAE*/

#ifndef struct_tag_sHHIORYD3gb9RawPNZ0N3dG
#define struct_tag_sHHIORYD3gb9RawPNZ0N3dG

struct tag_sHHIORYD3gb9RawPNZ0N3dG
{
  real_T NumBodies;
  real_T Gravity[3];
  real_T NumNonFixedBodies;
  real_T PositionNumber;
  real_T VelocityNumber;
  real_T PositionDoFMap[6];
  real_T VelocityDoFMap[6];
  real_T MaxNameLength;
  real_T MaxJointPositionNumber;
  uint8_T DataFormat;
  real_T JointPositionLimits[4];
  sw4DXKEmUOeLddTk47QV7BE Bodies[4];
  snNPBQjGRZDk13cYPIP5bAE Joints[4];
};

#endif                                 /*struct_tag_sHHIORYD3gb9RawPNZ0N3dG*/

#ifndef typedef_sHHIORYD3gb9RawPNZ0N3dG
#define typedef_sHHIORYD3gb9RawPNZ0N3dG

typedef struct tag_sHHIORYD3gb9RawPNZ0N3dG sHHIORYD3gb9RawPNZ0N3dG;

#endif                                 /*typedef_sHHIORYD3gb9RawPNZ0N3dG*/

#ifndef struct_tag_sJCxfmxS8gBOONUZjbjUd9E
#define struct_tag_sJCxfmxS8gBOONUZjbjUd9E

struct tag_sJCxfmxS8gBOONUZjbjUd9E
{
  boolean_T CaseSensitivity;
  boolean_T StructExpand;
  char_T PartialMatching[6];
  boolean_T IgnoreNulls;
};

#endif                                 /*struct_tag_sJCxfmxS8gBOONUZjbjUd9E*/

#ifndef typedef_sJCxfmxS8gBOONUZjbjUd9E
#define typedef_sJCxfmxS8gBOONUZjbjUd9E

typedef struct tag_sJCxfmxS8gBOONUZjbjUd9E sJCxfmxS8gBOONUZjbjUd9E;

#endif                                 /*typedef_sJCxfmxS8gBOONUZjbjUd9E*/

#ifndef typedef_b_robotics_core_internal_NLPSolverExitFlags
#define typedef_b_robotics_core_internal_NLPSolverExitFlags

typedef int32_T b_robotics_core_internal_NLPSolverExitFlags;

#endif                                 /*typedef_b_robotics_core_internal_NLPSolverExitFlags*/

#ifndef b_robotics_core_internal_NLPSolverExitFlags_constants
#define b_robotics_core_internal_NLPSolverExitFlags_constants

/* enum b_robotics_core_internal_NLPSolverExitFlags */
#define robotics_core_internal_NLPSolverExitFlags_LocalMinimumFound (1) /* Default value */
#define robotics_core_internal_NLPSolverExitFlags_IterationLimitExceeded (2)
#define robotics_core_internal_NLPSolverExitFlags_TimeLimitExceeded (3)
#define robotics_core_internal_NLPSolverExitFlags_StepSizeBelowMinimum (4)
#define robotics_core_internal_NLPSolverExitFlags_SearchDirectionInvalid (6)
#define c_robotics_core_internal_NLPSolverExitFlags_HessianNotPositiveSe (7)
#endif                                 /*b_robotics_core_internal_NLPSolverExitFlags_constants*/

#ifndef typedef_InstanceStruct_99HJ2LsbXT8ZQdi4PHECuF
#define typedef_InstanceStruct_99HJ2LsbXT8ZQdi4PHECuF

typedef struct {
  rigidBodyJoint gobj_42;
  rigidBodyJoint gobj_41;
  rigidBodyJoint gobj_40;
  rigidBodyJoint gobj_39;
  rigidBodyJoint gobj_38;
  rigidBodyJoint gobj_37;
  rigidBodyJoint gobj_36;
  rigidBodyJoint gobj_35;
  rigidBodyJoint gobj_34;
  rigidBodyJoint gobj_33;
  rigidBodyJoint gobj_32;
  rigidBodyJoint gobj_31;
  rigidBodyJoint gobj_30;
  rigidBodyJoint gobj_29;
  rigidBodyJoint gobj_28;
  rigidBodyJoint gobj_27;
  rigidBodyJoint gobj_26;
  rigidBodyJoint gobj_25;
  rigidBodyJoint gobj_24;
  rigidBodyJoint gobj_23;
  robotics_manip_internal_RigidBody_1 gobj_22;
  robotics_manip_internal_RigidBody_1 gobj_21;
  robotics_manip_internal_RigidBody_1 gobj_20;
  robotics_manip_internal_RigidBody_1 gobj_19;
  robotics_manip_internal_RigidBody_1 gobj_18;
  robotics_manip_internal_RigidBody_1 gobj_17;
  robotics_manip_internal_RigidBody_1 gobj_16;
  robotics_manip_internal_RigidBody_1 gobj_15;
  robotics_manip_internal_RigidBody_1 gobj_14;
  robotics_manip_internal_RigidBody_1 gobj_13;
  robotics_manip_internal_RigidBody_1 gobj_12;
  robotics_manip_internal_RigidBody_1 gobj_11;
  robotics_manip_internal_RigidBodyTree_1 gobj_10;
  robotics_manip_internal_RigidBodyTree_1 gobj_9;
  robotics_manip_internal_IKExtraArgs gobj_8;
  robotics_core_internal_DampedBFGSwGradientProjection gobj_7;
  robotics_core_internal_DampedBFGSwGradientProjection gobj_6;
  robotics_manip_internal_RigidBody gobj_5;
  robotics_manip_internal_RigidBody gobj_4;
  robotics_manip_internal_RigidBody gobj_3;
  robotics_manip_internal_RigidBody gobj_2;
  robotics_manip_internal_RigidBody gobj_1;
  robotics_manip_internal_RigidBody gobj_0;
  SimStruct *S;
  robotics_slmanip_internal_block_IKBlock sysobj;
  boolean_T sysobj_not_empty;
  uint32_T method;
  boolean_T method_not_empty;
  uint32_T state;
  boolean_T state_not_empty;
  uint32_T b_state[2];
  boolean_T b_state_not_empty;
  uint32_T c_state[625];
  boolean_T c_state_not_empty;
  uint32_T b_method;
  boolean_T b_method_not_empty;
  uint32_T d_state[2];
  boolean_T d_state_not_empty;
  void *emlrtRootTLSGlobal;
  real_T (*u0)[16];
  real_T (*u1)[6];
  real_T (*u2)[2];
  real_T (*b_y0)[2];
  ikblock_info_bus *b_y1;
} InstanceStruct_99HJ2LsbXT8ZQdi4PHECuF;

#endif                                 /*typedef_InstanceStruct_99HJ2LsbXT8ZQdi4PHECuF*/

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */

/* Function Definitions */
extern void method_dispatcher_99HJ2LsbXT8ZQdi4PHECuF(SimStruct *S, int_T method,
  void* data);

#endif
