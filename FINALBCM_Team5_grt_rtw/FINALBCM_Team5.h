/*
 * FINALBCM_Team5.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "FINALBCM_Team5".
 *
 * Model version              : 1.0
 * Simulink Coder version : 9.4 (R2020b) 29-Jul-2020
 * C source code generated on : Mon Jan 11 18:17:04 2021
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objective: Debugging
 * Validation result: Not run
 */

#ifndef RTW_HEADER_FINALBCM_Team5_h_
#define RTW_HEADER_FINALBCM_Team5_h_
#include <math.h>
#include <float.h>
#include <string.h>
#include <stddef.h>
#ifndef FINALBCM_Team5_COMMON_INCLUDES_
#define FINALBCM_Team5_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "rt_logging.h"
#endif                                 /* FINALBCM_Team5_COMMON_INCLUDES_ */

#include "FINALBCM_Team5_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rt_zcfcn.h"
#include "rt_nonfinite.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetFinalTime
#define rtmGetFinalTime(rtm)           ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetRTWLogInfo
#define rtmGetRTWLogInfo(rtm)          ((rtm)->rtwLogInfo)
#endif

#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
#define rtmGetStopRequested(rtm)       ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
#define rtmSetStopRequested(rtm, val)  ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
#define rtmGetStopRequestedPtr(rtm)    (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
#define rtmGetT(rtm)                   (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmGetTFinal
#define rtmGetTFinal(rtm)              ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetTPtr
#define rtmGetTPtr(rtm)                ((rtm)->Timing.t)
#endif

/* Block signals for system '<S19>/Triggered Subsystem' */
typedef struct {
  boolean_T In1;                       /* '<S23>/In1' */
} B_TriggeredSubsystem_FINALBCM_T;

/* Zero-crossing (trigger) state for system '<S19>/Triggered Subsystem' */
typedef struct {
  ZCSigState TriggeredSubsystem_Trig_ZCE;/* '<S19>/Triggered Subsystem' */
} ZCE_TriggeredSubsystem_FINALB_T;

/* Block signals for system '<S62>/Enable Subsystem' */
typedef struct {
  real_T In1;                          /* '<S103>/In1' */
} B_EnableSubsystem_FINALBCM_Te_T;

/* Block signals (default storage) */
typedef struct {
  real_T FromWs[20];                   /* '<S4>/FromWs' */
  real_T scaling_factor;               /* '<S10>/scaling_factor' */
  real_T Merge;                        /* '<S52>/Merge' */
  real_T Enable_Input;                 /* '<S19>/Enable_Input' */
  real_T Enable_Input_h;               /* '<S71>/Enable_Input' */
  real_T scaling_factor_j;             /* '<S62>/scaling_factor' */
  real_T Merge_h;                      /* '<S104>/Merge' */
  real_T Enable_Input_c;               /* '<S123>/Enable_Input' */
  real_T scaling_factor_e;             /* '<S114>/scaling_factor' */
  real_T Merge_j;                      /* '<S156>/Merge' */
  real_T In1;                          /* '<S51>/In1' */
  boolean_T AND2;                      /* '<S19>/AND2' */
  boolean_T AND2_b;                    /* '<S71>/AND2' */
  boolean_T AND2_g;                    /* '<S123>/AND2' */
  B_EnableSubsystem_FINALBCM_Te_T EnableSubsystem_j;/* '<S114>/Enable Subsystem' */
  B_TriggeredSubsystem_FINALBCM_T TriggeredSubsystem_i;/* '<S123>/Triggered Subsystem' */
  B_EnableSubsystem_FINALBCM_Te_T EnableSubsystem_e;/* '<S62>/Enable Subsystem' */
  B_TriggeredSubsystem_FINALBCM_T TriggeredSubsystem_h;/* '<S71>/Triggered Subsystem' */
  B_TriggeredSubsystem_FINALBCM_T TriggeredSubsystem;/* '<S19>/Triggered Subsystem' */
} B_FINALBCM_Team5_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  struct {
    void *TimePtr;
    void *DataPtr;
    void *RSimInfoPtr;
  } FromWs_PWORK;                      /* '<S4>/FromWs' */

  int32_T clockTickCounter;            /* '<S19>/Enable_Input' */
  int32_T clockTickCounter_a;          /* '<S71>/Enable_Input' */
  int32_T clockTickCounter_k;          /* '<S123>/Enable_Input' */
  struct {
    int_T PrevIndex;
  } FromWs_IWORK;                      /* '<S4>/FromWs' */

  int8_T threshold_comparison_ActiveSubs;/* '<S52>/threshold_comparison' */
  boolean_T EnableSubsystem_MODE;      /* '<S10>/Enable Subsystem' */
} DW_FINALBCM_Team5_T;

/* Zero-crossing (trigger) state */
typedef struct {
  ZCE_TriggeredSubsystem_FINALB_T TriggeredSubsystem_i;/* '<S123>/Triggered Subsystem' */
  ZCE_TriggeredSubsystem_FINALB_T TriggeredSubsystem_h;/* '<S71>/Triggered Subsystem' */
  ZCE_TriggeredSubsystem_FINALB_T TriggeredSubsystem;/* '<S19>/Triggered Subsystem' */
} PrevZCX_FINALBCM_Team5_T;

/* Parameters for system: '<S19>/Triggered Subsystem' */
struct P_TriggeredSubsystem_FINALBCM_T_ {
  boolean_T Output_Y0;                 /* Computed Parameter: Output_Y0
                                        * Referenced by: '<S23>/Output'
                                        */
};

/* Parameters for system: '<S62>/Enable Subsystem' */
struct P_EnableSubsystem_FINALBCM_Te_T_ {
  real_T Out1_Y0;                      /* Computed Parameter: Out1_Y0
                                        * Referenced by: '<S103>/Out1'
                                        */
};

/* Parameters (default storage) */
struct P_FINALBCM_Team5_T_ {
  real_T Out1_Y0;                      /* Computed Parameter: Out1_Y0
                                        * Referenced by: '<S51>/Out1'
                                        */
  real_T scaling_factor_Gain;          /* Expression: 50
                                        * Referenced by: '<S10>/scaling_factor'
                                        */
  real_T Ignition_Value;               /* Expression: 1
                                        * Referenced by: '<S10>/Ignition'
                                        */
  real_T Constant3_Value;              /* Expression: 48
                                        * Referenced by: '<S52>/Constant3'
                                        */
  real_T Constant2_Value;              /* Expression: 30
                                        * Referenced by: '<S52>/Constant2'
                                        */
  real_T Constant1_Value;              /* Expression: 20
                                        * Referenced by: '<S52>/Constant1'
                                        */
  real_T Constant_Value;               /* Expression: 0
                                        * Referenced by: '<S52>/Constant'
                                        */
  real_T Enable_Input_Amp;             /* Expression: 1
                                        * Referenced by: '<S19>/Enable_Input'
                                        */
  real_T Enable_Input_Period;         /* Computed Parameter: Enable_Input_Period
                                       * Referenced by: '<S19>/Enable_Input'
                                       */
  real_T Enable_Input_Duty;            /* Computed Parameter: Enable_Input_Duty
                                        * Referenced by: '<S19>/Enable_Input'
                                        */
  real_T Enable_Input_PhaseDelay;      /* Expression: 0
                                        * Referenced by: '<S19>/Enable_Input'
                                        */
  real_T Enable_Input_Amp_m;           /* Expression: 1
                                        * Referenced by: '<S71>/Enable_Input'
                                        */
  real_T Enable_Input_Period_j;     /* Computed Parameter: Enable_Input_Period_j
                                     * Referenced by: '<S71>/Enable_Input'
                                     */
  real_T Enable_Input_Duty_f;         /* Computed Parameter: Enable_Input_Duty_f
                                       * Referenced by: '<S71>/Enable_Input'
                                       */
  real_T Enable_Input_PhaseDelay_j;    /* Expression: 0
                                        * Referenced by: '<S71>/Enable_Input'
                                        */
  real_T scaling_factor_Gain_b;        /* Expression: 50
                                        * Referenced by: '<S62>/scaling_factor'
                                        */
  real_T Ignition_Value_l;             /* Expression: 1
                                        * Referenced by: '<S62>/Ignition'
                                        */
  real_T Constant_Value_c;             /* Expression: 0
                                        * Referenced by: '<S104>/Constant'
                                        */
  real_T Constant1_Value_l;            /* Expression: 20
                                        * Referenced by: '<S104>/Constant1'
                                        */
  real_T Constant2_Value_n;            /* Expression: 30
                                        * Referenced by: '<S104>/Constant2'
                                        */
  real_T Constant3_Value_f;            /* Expression: 48
                                        * Referenced by: '<S104>/Constant3'
                                        */
  real_T Enable_Input_Amp_j;           /* Expression: 1
                                        * Referenced by: '<S123>/Enable_Input'
                                        */
  real_T Enable_Input_Period_b;     /* Computed Parameter: Enable_Input_Period_b
                                     * Referenced by: '<S123>/Enable_Input'
                                     */
  real_T Enable_Input_Duty_l;         /* Computed Parameter: Enable_Input_Duty_l
                                       * Referenced by: '<S123>/Enable_Input'
                                       */
  real_T Enable_Input_PhaseDelay_ji;   /* Expression: 0
                                        * Referenced by: '<S123>/Enable_Input'
                                        */
  real_T scaling_factor_Gain_l;        /* Expression: 50
                                        * Referenced by: '<S114>/scaling_factor'
                                        */
  real_T Ignition_Value_e;             /* Expression: 1
                                        * Referenced by: '<S114>/Ignition'
                                        */
  real_T Constant_Value_b;             /* Expression: 0
                                        * Referenced by: '<S156>/Constant'
                                        */
  real_T Constant1_Value_b;            /* Expression: 20
                                        * Referenced by: '<S156>/Constant1'
                                        */
  real_T Constant2_Value_f;            /* Expression: 30
                                        * Referenced by: '<S156>/Constant2'
                                        */
  real_T Constant3_Value_c;            /* Expression: 48
                                        * Referenced by: '<S156>/Constant3'
                                        */
  P_EnableSubsystem_FINALBCM_Te_T EnableSubsystem_j;/* '<S114>/Enable Subsystem' */
  P_TriggeredSubsystem_FINALBCM_T TriggeredSubsystem_i;/* '<S123>/Triggered Subsystem' */
  P_EnableSubsystem_FINALBCM_Te_T EnableSubsystem_e;/* '<S62>/Enable Subsystem' */
  P_TriggeredSubsystem_FINALBCM_T TriggeredSubsystem_h;/* '<S71>/Triggered Subsystem' */
  P_TriggeredSubsystem_FINALBCM_T TriggeredSubsystem;/* '<S19>/Triggered Subsystem' */
};

/* Real-time Model Data Structure */
struct tag_RTM_FINALBCM_Team5_T {
  const char_T *errorStatus;
  RTWLogInfo *rtwLogInfo;
  RTWSolverInfo solverInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    uint32_T clockTick1;
    uint32_T clockTickH1;
    time_T tFinal;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *t;
    time_T tArray[2];
  } Timing;
};

/* Block parameters (default storage) */
extern P_FINALBCM_Team5_T FINALBCM_Team5_P;

/* Block signals (default storage) */
extern B_FINALBCM_Team5_T FINALBCM_Team5_B;

/* Block states (default storage) */
extern DW_FINALBCM_Team5_T FINALBCM_Team5_DW;

/* Zero-crossing (trigger) state */
extern PrevZCX_FINALBCM_Team5_T FINALBCM_Team5_PrevZCX;

/* Model entry point functions */
extern void FINALBCM_Team5_initialize(void);
extern void FINALBCM_Team5_step(void);
extern void FINALBCM_Team5_terminate(void);

/* Real-time Model object */
extern RT_MODEL_FINALBCM_Team5_T *const FINALBCM_Team5_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S11>/Constant' : Unused code path elimination
 * Block '<S15>/Clock' : Unused code path elimination
 * Block '<S15>/Constant' : Unused code path elimination
 * Block '<S15>/Constant1' : Unused code path elimination
 * Block '<S15>/Output' : Unused code path elimination
 * Block '<S15>/Product' : Unused code path elimination
 * Block '<S15>/Step' : Unused code path elimination
 * Block '<S15>/Sum' : Unused code path elimination
 * Block '<S11>/Switch' : Unused code path elimination
 * Block '<S12>/Constant' : Unused code path elimination
 * Block '<S16>/Clock' : Unused code path elimination
 * Block '<S16>/Constant' : Unused code path elimination
 * Block '<S16>/Constant1' : Unused code path elimination
 * Block '<S16>/Output' : Unused code path elimination
 * Block '<S16>/Product' : Unused code path elimination
 * Block '<S16>/Step' : Unused code path elimination
 * Block '<S16>/Sum' : Unused code path elimination
 * Block '<S12>/S1' : Unused code path elimination
 * Block '<S13>/Constant' : Unused code path elimination
 * Block '<S17>/Clock' : Unused code path elimination
 * Block '<S17>/Constant' : Unused code path elimination
 * Block '<S17>/Constant1' : Unused code path elimination
 * Block '<S17>/Output' : Unused code path elimination
 * Block '<S17>/Product' : Unused code path elimination
 * Block '<S17>/Step' : Unused code path elimination
 * Block '<S17>/Sum' : Unused code path elimination
 * Block '<S13>/Switch' : Unused code path elimination
 * Block '<S14>/Constant' : Unused code path elimination
 * Block '<S18>/Clock' : Unused code path elimination
 * Block '<S18>/Constant' : Unused code path elimination
 * Block '<S18>/Constant1' : Unused code path elimination
 * Block '<S18>/Output' : Unused code path elimination
 * Block '<S18>/Product' : Unused code path elimination
 * Block '<S18>/Step' : Unused code path elimination
 * Block '<S18>/Sum' : Unused code path elimination
 * Block '<S14>/Switch' : Unused code path elimination
 * Block '<S20>/AND' : Unused code path elimination
 * Block '<S20>/Constant' : Unused code path elimination
 * Block '<S20>/Constant2' : Unused code path elimination
 * Block '<S20>/Constant3' : Unused code path elimination
 * Block '<S20>/Default' : Unused code path elimination
 * Block '<S20>/Right_indicator' : Unused code path elimination
 * Block '<S20>/Switch' : Unused code path elimination
 * Block '<S20>/Switch1' : Unused code path elimination
 * Block '<S20>/Switch2' : Unused code path elimination
 * Block '<S21>/Deafult' : Unused code path elimination
 * Block '<S21>/I_Headlight_mode1' : Unused code path elimination
 * Block '<S21>/Input_HighBeam' : Unused code path elimination
 * Block '<S21>/Input_LowBeam' : Unused code path elimination
 * Block '<S21>/Switch' : Unused code path elimination
 * Block '<S21>/Switch1' : Unused code path elimination
 * Block '<S21>/Switch3' : Unused code path elimination
 * Block '<S22>/Default' : Unused code path elimination
 * Block '<S22>/I_Headlight_mode1' : Unused code path elimination
 * Block '<S22>/Input_HighBeam' : Unused code path elimination
 * Block '<S22>/Input_LowBeam' : Unused code path elimination
 * Block '<S22>/Switch' : Unused code path elimination
 * Block '<S22>/Switch1' : Unused code path elimination
 * Block '<S22>/Switch3' : Unused code path elimination
 * Block '<S24>/Constant' : Unused code path elimination
 * Block '<S24>/Gain' : Unused code path elimination
 * Block '<S28>/Clock' : Unused code path elimination
 * Block '<S28>/Constant' : Unused code path elimination
 * Block '<S28>/Constant1' : Unused code path elimination
 * Block '<S28>/Output' : Unused code path elimination
 * Block '<S28>/Product' : Unused code path elimination
 * Block '<S28>/Step' : Unused code path elimination
 * Block '<S28>/Sum' : Unused code path elimination
 * Block '<S29>/Clock' : Unused code path elimination
 * Block '<S29>/Constant' : Unused code path elimination
 * Block '<S29>/Constant1' : Unused code path elimination
 * Block '<S29>/Output' : Unused code path elimination
 * Block '<S29>/Product' : Unused code path elimination
 * Block '<S29>/Step' : Unused code path elimination
 * Block '<S29>/Sum' : Unused code path elimination
 * Block '<S24>/Switch' : Unused code path elimination
 * Block '<S24>/Switch1' : Unused code path elimination
 * Block '<S25>/Constant' : Unused code path elimination
 * Block '<S25>/Gain' : Unused code path elimination
 * Block '<S30>/Clock' : Unused code path elimination
 * Block '<S30>/Constant' : Unused code path elimination
 * Block '<S30>/Constant1' : Unused code path elimination
 * Block '<S30>/Output' : Unused code path elimination
 * Block '<S30>/Product' : Unused code path elimination
 * Block '<S30>/Step' : Unused code path elimination
 * Block '<S30>/Sum' : Unused code path elimination
 * Block '<S31>/Clock' : Unused code path elimination
 * Block '<S31>/Constant' : Unused code path elimination
 * Block '<S31>/Constant1' : Unused code path elimination
 * Block '<S31>/Output' : Unused code path elimination
 * Block '<S31>/Product' : Unused code path elimination
 * Block '<S31>/Step' : Unused code path elimination
 * Block '<S31>/Sum' : Unused code path elimination
 * Block '<S25>/Switch' : Unused code path elimination
 * Block '<S25>/Switch1' : Unused code path elimination
 * Block '<S26>/Constant' : Unused code path elimination
 * Block '<S26>/Gain' : Unused code path elimination
 * Block '<S32>/Clock' : Unused code path elimination
 * Block '<S32>/Constant' : Unused code path elimination
 * Block '<S32>/Constant1' : Unused code path elimination
 * Block '<S32>/Output' : Unused code path elimination
 * Block '<S32>/Product' : Unused code path elimination
 * Block '<S32>/Step' : Unused code path elimination
 * Block '<S32>/Sum' : Unused code path elimination
 * Block '<S33>/Clock' : Unused code path elimination
 * Block '<S33>/Constant' : Unused code path elimination
 * Block '<S33>/Constant1' : Unused code path elimination
 * Block '<S33>/Output' : Unused code path elimination
 * Block '<S33>/Product' : Unused code path elimination
 * Block '<S33>/Step' : Unused code path elimination
 * Block '<S33>/Sum' : Unused code path elimination
 * Block '<S26>/Switch' : Unused code path elimination
 * Block '<S26>/Switch1' : Unused code path elimination
 * Block '<S27>/Constant' : Unused code path elimination
 * Block '<S27>/Gain' : Unused code path elimination
 * Block '<S34>/Clock' : Unused code path elimination
 * Block '<S34>/Constant' : Unused code path elimination
 * Block '<S34>/Constant1' : Unused code path elimination
 * Block '<S34>/Output' : Unused code path elimination
 * Block '<S34>/Product' : Unused code path elimination
 * Block '<S34>/Step' : Unused code path elimination
 * Block '<S34>/Sum' : Unused code path elimination
 * Block '<S35>/Clock' : Unused code path elimination
 * Block '<S35>/Constant' : Unused code path elimination
 * Block '<S35>/Constant1' : Unused code path elimination
 * Block '<S35>/Output' : Unused code path elimination
 * Block '<S35>/Product' : Unused code path elimination
 * Block '<S35>/Step' : Unused code path elimination
 * Block '<S35>/Sum' : Unused code path elimination
 * Block '<S27>/Switch' : Unused code path elimination
 * Block '<S27>/Switch1' : Unused code path elimination
 * Block '<S36>/Constant ' : Unused code path elimination
 * Block '<S36>/Gain ' : Unused code path elimination
 * Block '<S38>/Clock' : Unused code path elimination
 * Block '<S38>/Constant' : Unused code path elimination
 * Block '<S38>/Constant1' : Unused code path elimination
 * Block '<S38>/Output' : Unused code path elimination
 * Block '<S38>/Product' : Unused code path elimination
 * Block '<S38>/Step' : Unused code path elimination
 * Block '<S38>/Sum' : Unused code path elimination
 * Block '<S39>/Clock' : Unused code path elimination
 * Block '<S39>/Constant' : Unused code path elimination
 * Block '<S39>/Constant1' : Unused code path elimination
 * Block '<S39>/Output' : Unused code path elimination
 * Block '<S39>/Product' : Unused code path elimination
 * Block '<S39>/Step' : Unused code path elimination
 * Block '<S39>/Sum' : Unused code path elimination
 * Block '<S36>/Switch ' : Unused code path elimination
 * Block '<S36>/Switch1 ' : Unused code path elimination
 * Block '<S37>/Constant ' : Unused code path elimination
 * Block '<S37>/Gain ' : Unused code path elimination
 * Block '<S40>/Clock' : Unused code path elimination
 * Block '<S40>/Constant' : Unused code path elimination
 * Block '<S40>/Constant1' : Unused code path elimination
 * Block '<S40>/Output' : Unused code path elimination
 * Block '<S40>/Product' : Unused code path elimination
 * Block '<S40>/Step' : Unused code path elimination
 * Block '<S40>/Sum' : Unused code path elimination
 * Block '<S41>/Clock' : Unused code path elimination
 * Block '<S41>/Constant' : Unused code path elimination
 * Block '<S41>/Constant1' : Unused code path elimination
 * Block '<S41>/Output' : Unused code path elimination
 * Block '<S41>/Product' : Unused code path elimination
 * Block '<S41>/Step' : Unused code path elimination
 * Block '<S41>/Sum' : Unused code path elimination
 * Block '<S37>/Switch ' : Unused code path elimination
 * Block '<S37>/Switch1 ' : Unused code path elimination
 * Block '<S9>/Constant' : Unused code path elimination
 * Block '<S9>/Constant1' : Unused code path elimination
 * Block '<S9>/Constant2' : Unused code path elimination
 * Block '<S9>/Constant3' : Unused code path elimination
 * Block '<S43>/Constant' : Unused code path elimination
 * Block '<S43>/Gain' : Unused code path elimination
 * Block '<S47>/Clock' : Unused code path elimination
 * Block '<S47>/Constant' : Unused code path elimination
 * Block '<S47>/Constant1' : Unused code path elimination
 * Block '<S47>/Output' : Unused code path elimination
 * Block '<S47>/Product' : Unused code path elimination
 * Block '<S47>/Step' : Unused code path elimination
 * Block '<S47>/Sum' : Unused code path elimination
 * Block '<S43>/Switch' : Unused code path elimination
 * Block '<S43>/Switch1' : Unused code path elimination
 * Block '<S44>/Constant' : Unused code path elimination
 * Block '<S44>/Gain' : Unused code path elimination
 * Block '<S48>/Clock' : Unused code path elimination
 * Block '<S48>/Constant' : Unused code path elimination
 * Block '<S48>/Constant1' : Unused code path elimination
 * Block '<S48>/Output' : Unused code path elimination
 * Block '<S48>/Product' : Unused code path elimination
 * Block '<S48>/Step' : Unused code path elimination
 * Block '<S48>/Sum' : Unused code path elimination
 * Block '<S44>/Switch' : Unused code path elimination
 * Block '<S44>/Switch1' : Unused code path elimination
 * Block '<S45>/Constant' : Unused code path elimination
 * Block '<S45>/Gain' : Unused code path elimination
 * Block '<S49>/Clock' : Unused code path elimination
 * Block '<S49>/Constant' : Unused code path elimination
 * Block '<S49>/Constant1' : Unused code path elimination
 * Block '<S49>/Output' : Unused code path elimination
 * Block '<S49>/Product' : Unused code path elimination
 * Block '<S49>/Step' : Unused code path elimination
 * Block '<S49>/Sum' : Unused code path elimination
 * Block '<S45>/Switch' : Unused code path elimination
 * Block '<S45>/Switch1' : Unused code path elimination
 * Block '<S46>/Constant' : Unused code path elimination
 * Block '<S46>/Gain' : Unused code path elimination
 * Block '<S50>/Clock' : Unused code path elimination
 * Block '<S50>/Constant' : Unused code path elimination
 * Block '<S50>/Constant1' : Unused code path elimination
 * Block '<S50>/Output' : Unused code path elimination
 * Block '<S50>/Product' : Unused code path elimination
 * Block '<S50>/Step' : Unused code path elimination
 * Block '<S50>/Sum' : Unused code path elimination
 * Block '<S46>/Switch' : Unused code path elimination
 * Block '<S46>/Switch1' : Unused code path elimination
 * Block '<S9>/Switch' : Unused code path elimination
 * Block '<S9>/Switch1' : Unused code path elimination
 * Block '<S9>/Switch2' : Unused code path elimination
 * Block '<S9>/Switch3' : Unused code path elimination
 * Block '<S63>/Constant' : Unused code path elimination
 * Block '<S67>/Clock' : Unused code path elimination
 * Block '<S67>/Constant' : Unused code path elimination
 * Block '<S67>/Constant1' : Unused code path elimination
 * Block '<S67>/Output' : Unused code path elimination
 * Block '<S67>/Product' : Unused code path elimination
 * Block '<S67>/Step' : Unused code path elimination
 * Block '<S67>/Sum' : Unused code path elimination
 * Block '<S63>/Switch' : Unused code path elimination
 * Block '<S64>/Constant' : Unused code path elimination
 * Block '<S68>/Clock' : Unused code path elimination
 * Block '<S68>/Constant' : Unused code path elimination
 * Block '<S68>/Constant1' : Unused code path elimination
 * Block '<S68>/Output' : Unused code path elimination
 * Block '<S68>/Product' : Unused code path elimination
 * Block '<S68>/Step' : Unused code path elimination
 * Block '<S68>/Sum' : Unused code path elimination
 * Block '<S64>/S1' : Unused code path elimination
 * Block '<S65>/Constant' : Unused code path elimination
 * Block '<S69>/Clock' : Unused code path elimination
 * Block '<S69>/Constant' : Unused code path elimination
 * Block '<S69>/Constant1' : Unused code path elimination
 * Block '<S69>/Output' : Unused code path elimination
 * Block '<S69>/Product' : Unused code path elimination
 * Block '<S69>/Step' : Unused code path elimination
 * Block '<S69>/Sum' : Unused code path elimination
 * Block '<S65>/Switch' : Unused code path elimination
 * Block '<S66>/Constant' : Unused code path elimination
 * Block '<S70>/Clock' : Unused code path elimination
 * Block '<S70>/Constant' : Unused code path elimination
 * Block '<S70>/Constant1' : Unused code path elimination
 * Block '<S70>/Output' : Unused code path elimination
 * Block '<S70>/Product' : Unused code path elimination
 * Block '<S70>/Step' : Unused code path elimination
 * Block '<S70>/Sum' : Unused code path elimination
 * Block '<S66>/Switch' : Unused code path elimination
 * Block '<S72>/AND' : Unused code path elimination
 * Block '<S72>/Constant' : Unused code path elimination
 * Block '<S72>/Constant2' : Unused code path elimination
 * Block '<S72>/Constant3' : Unused code path elimination
 * Block '<S72>/Default' : Unused code path elimination
 * Block '<S72>/Right_indicator' : Unused code path elimination
 * Block '<S72>/Switch' : Unused code path elimination
 * Block '<S72>/Switch1' : Unused code path elimination
 * Block '<S72>/Switch2' : Unused code path elimination
 * Block '<S73>/Deafult' : Unused code path elimination
 * Block '<S73>/I_Headlight_mode1' : Unused code path elimination
 * Block '<S73>/Input_HighBeam' : Unused code path elimination
 * Block '<S73>/Input_LowBeam' : Unused code path elimination
 * Block '<S73>/Switch' : Unused code path elimination
 * Block '<S73>/Switch1' : Unused code path elimination
 * Block '<S73>/Switch3' : Unused code path elimination
 * Block '<S74>/Default' : Unused code path elimination
 * Block '<S74>/I_Headlight_mode1' : Unused code path elimination
 * Block '<S74>/Input_HighBeam' : Unused code path elimination
 * Block '<S74>/Input_LowBeam' : Unused code path elimination
 * Block '<S74>/Switch' : Unused code path elimination
 * Block '<S74>/Switch1' : Unused code path elimination
 * Block '<S74>/Switch3' : Unused code path elimination
 * Block '<S76>/Constant' : Unused code path elimination
 * Block '<S76>/Gain' : Unused code path elimination
 * Block '<S80>/Clock' : Unused code path elimination
 * Block '<S80>/Constant' : Unused code path elimination
 * Block '<S80>/Constant1' : Unused code path elimination
 * Block '<S80>/Output' : Unused code path elimination
 * Block '<S80>/Product' : Unused code path elimination
 * Block '<S80>/Step' : Unused code path elimination
 * Block '<S80>/Sum' : Unused code path elimination
 * Block '<S81>/Clock' : Unused code path elimination
 * Block '<S81>/Constant' : Unused code path elimination
 * Block '<S81>/Constant1' : Unused code path elimination
 * Block '<S81>/Output' : Unused code path elimination
 * Block '<S81>/Product' : Unused code path elimination
 * Block '<S81>/Step' : Unused code path elimination
 * Block '<S81>/Sum' : Unused code path elimination
 * Block '<S76>/Switch' : Unused code path elimination
 * Block '<S76>/Switch1' : Unused code path elimination
 * Block '<S77>/Constant' : Unused code path elimination
 * Block '<S77>/Gain' : Unused code path elimination
 * Block '<S82>/Clock' : Unused code path elimination
 * Block '<S82>/Constant' : Unused code path elimination
 * Block '<S82>/Constant1' : Unused code path elimination
 * Block '<S82>/Output' : Unused code path elimination
 * Block '<S82>/Product' : Unused code path elimination
 * Block '<S82>/Step' : Unused code path elimination
 * Block '<S82>/Sum' : Unused code path elimination
 * Block '<S83>/Clock' : Unused code path elimination
 * Block '<S83>/Constant' : Unused code path elimination
 * Block '<S83>/Constant1' : Unused code path elimination
 * Block '<S83>/Output' : Unused code path elimination
 * Block '<S83>/Product' : Unused code path elimination
 * Block '<S83>/Step' : Unused code path elimination
 * Block '<S83>/Sum' : Unused code path elimination
 * Block '<S77>/Switch' : Unused code path elimination
 * Block '<S77>/Switch1' : Unused code path elimination
 * Block '<S78>/Constant' : Unused code path elimination
 * Block '<S78>/Gain' : Unused code path elimination
 * Block '<S84>/Clock' : Unused code path elimination
 * Block '<S84>/Constant' : Unused code path elimination
 * Block '<S84>/Constant1' : Unused code path elimination
 * Block '<S84>/Output' : Unused code path elimination
 * Block '<S84>/Product' : Unused code path elimination
 * Block '<S84>/Step' : Unused code path elimination
 * Block '<S84>/Sum' : Unused code path elimination
 * Block '<S85>/Clock' : Unused code path elimination
 * Block '<S85>/Constant' : Unused code path elimination
 * Block '<S85>/Constant1' : Unused code path elimination
 * Block '<S85>/Output' : Unused code path elimination
 * Block '<S85>/Product' : Unused code path elimination
 * Block '<S85>/Step' : Unused code path elimination
 * Block '<S85>/Sum' : Unused code path elimination
 * Block '<S78>/Switch' : Unused code path elimination
 * Block '<S78>/Switch1' : Unused code path elimination
 * Block '<S79>/Constant' : Unused code path elimination
 * Block '<S79>/Gain' : Unused code path elimination
 * Block '<S86>/Clock' : Unused code path elimination
 * Block '<S86>/Constant' : Unused code path elimination
 * Block '<S86>/Constant1' : Unused code path elimination
 * Block '<S86>/Output' : Unused code path elimination
 * Block '<S86>/Product' : Unused code path elimination
 * Block '<S86>/Step' : Unused code path elimination
 * Block '<S86>/Sum' : Unused code path elimination
 * Block '<S87>/Clock' : Unused code path elimination
 * Block '<S87>/Constant' : Unused code path elimination
 * Block '<S87>/Constant1' : Unused code path elimination
 * Block '<S87>/Output' : Unused code path elimination
 * Block '<S87>/Product' : Unused code path elimination
 * Block '<S87>/Step' : Unused code path elimination
 * Block '<S87>/Sum' : Unused code path elimination
 * Block '<S79>/Switch' : Unused code path elimination
 * Block '<S79>/Switch1' : Unused code path elimination
 * Block '<S88>/Constant ' : Unused code path elimination
 * Block '<S88>/Gain ' : Unused code path elimination
 * Block '<S90>/Clock' : Unused code path elimination
 * Block '<S90>/Constant' : Unused code path elimination
 * Block '<S90>/Constant1' : Unused code path elimination
 * Block '<S90>/Output' : Unused code path elimination
 * Block '<S90>/Product' : Unused code path elimination
 * Block '<S90>/Step' : Unused code path elimination
 * Block '<S90>/Sum' : Unused code path elimination
 * Block '<S91>/Clock' : Unused code path elimination
 * Block '<S91>/Constant' : Unused code path elimination
 * Block '<S91>/Constant1' : Unused code path elimination
 * Block '<S91>/Output' : Unused code path elimination
 * Block '<S91>/Product' : Unused code path elimination
 * Block '<S91>/Step' : Unused code path elimination
 * Block '<S91>/Sum' : Unused code path elimination
 * Block '<S88>/Switch ' : Unused code path elimination
 * Block '<S88>/Switch1 ' : Unused code path elimination
 * Block '<S89>/Constant ' : Unused code path elimination
 * Block '<S89>/Gain ' : Unused code path elimination
 * Block '<S92>/Clock' : Unused code path elimination
 * Block '<S92>/Constant' : Unused code path elimination
 * Block '<S92>/Constant1' : Unused code path elimination
 * Block '<S92>/Output' : Unused code path elimination
 * Block '<S92>/Product' : Unused code path elimination
 * Block '<S92>/Step' : Unused code path elimination
 * Block '<S92>/Sum' : Unused code path elimination
 * Block '<S93>/Clock' : Unused code path elimination
 * Block '<S93>/Constant' : Unused code path elimination
 * Block '<S93>/Constant1' : Unused code path elimination
 * Block '<S93>/Output' : Unused code path elimination
 * Block '<S93>/Product' : Unused code path elimination
 * Block '<S93>/Step' : Unused code path elimination
 * Block '<S93>/Sum' : Unused code path elimination
 * Block '<S89>/Switch ' : Unused code path elimination
 * Block '<S89>/Switch1 ' : Unused code path elimination
 * Block '<S61>/Constant' : Unused code path elimination
 * Block '<S61>/Constant1' : Unused code path elimination
 * Block '<S61>/Constant2' : Unused code path elimination
 * Block '<S61>/Constant3' : Unused code path elimination
 * Block '<S95>/Constant' : Unused code path elimination
 * Block '<S95>/Gain' : Unused code path elimination
 * Block '<S99>/Clock' : Unused code path elimination
 * Block '<S99>/Constant' : Unused code path elimination
 * Block '<S99>/Constant1' : Unused code path elimination
 * Block '<S99>/Output' : Unused code path elimination
 * Block '<S99>/Product' : Unused code path elimination
 * Block '<S99>/Step' : Unused code path elimination
 * Block '<S99>/Sum' : Unused code path elimination
 * Block '<S95>/Switch' : Unused code path elimination
 * Block '<S95>/Switch1' : Unused code path elimination
 * Block '<S96>/Constant' : Unused code path elimination
 * Block '<S96>/Gain' : Unused code path elimination
 * Block '<S100>/Clock' : Unused code path elimination
 * Block '<S100>/Constant' : Unused code path elimination
 * Block '<S100>/Constant1' : Unused code path elimination
 * Block '<S100>/Output' : Unused code path elimination
 * Block '<S100>/Product' : Unused code path elimination
 * Block '<S100>/Step' : Unused code path elimination
 * Block '<S100>/Sum' : Unused code path elimination
 * Block '<S96>/Switch' : Unused code path elimination
 * Block '<S96>/Switch1' : Unused code path elimination
 * Block '<S97>/Constant' : Unused code path elimination
 * Block '<S97>/Gain' : Unused code path elimination
 * Block '<S101>/Clock' : Unused code path elimination
 * Block '<S101>/Constant' : Unused code path elimination
 * Block '<S101>/Constant1' : Unused code path elimination
 * Block '<S101>/Output' : Unused code path elimination
 * Block '<S101>/Product' : Unused code path elimination
 * Block '<S101>/Step' : Unused code path elimination
 * Block '<S101>/Sum' : Unused code path elimination
 * Block '<S97>/Switch' : Unused code path elimination
 * Block '<S97>/Switch1' : Unused code path elimination
 * Block '<S98>/Constant' : Unused code path elimination
 * Block '<S98>/Gain' : Unused code path elimination
 * Block '<S102>/Clock' : Unused code path elimination
 * Block '<S102>/Constant' : Unused code path elimination
 * Block '<S102>/Constant1' : Unused code path elimination
 * Block '<S102>/Output' : Unused code path elimination
 * Block '<S102>/Product' : Unused code path elimination
 * Block '<S102>/Step' : Unused code path elimination
 * Block '<S102>/Sum' : Unused code path elimination
 * Block '<S98>/Switch' : Unused code path elimination
 * Block '<S98>/Switch1' : Unused code path elimination
 * Block '<S61>/Switch' : Unused code path elimination
 * Block '<S61>/Switch1' : Unused code path elimination
 * Block '<S61>/Switch2' : Unused code path elimination
 * Block '<S61>/Switch3' : Unused code path elimination
 * Block '<S115>/Constant' : Unused code path elimination
 * Block '<S119>/Clock' : Unused code path elimination
 * Block '<S119>/Constant' : Unused code path elimination
 * Block '<S119>/Constant1' : Unused code path elimination
 * Block '<S119>/Output' : Unused code path elimination
 * Block '<S119>/Product' : Unused code path elimination
 * Block '<S119>/Step' : Unused code path elimination
 * Block '<S119>/Sum' : Unused code path elimination
 * Block '<S115>/Switch' : Unused code path elimination
 * Block '<S116>/Constant' : Unused code path elimination
 * Block '<S120>/Clock' : Unused code path elimination
 * Block '<S120>/Constant' : Unused code path elimination
 * Block '<S120>/Constant1' : Unused code path elimination
 * Block '<S120>/Output' : Unused code path elimination
 * Block '<S120>/Product' : Unused code path elimination
 * Block '<S120>/Step' : Unused code path elimination
 * Block '<S120>/Sum' : Unused code path elimination
 * Block '<S116>/S1' : Unused code path elimination
 * Block '<S117>/Constant' : Unused code path elimination
 * Block '<S121>/Clock' : Unused code path elimination
 * Block '<S121>/Constant' : Unused code path elimination
 * Block '<S121>/Constant1' : Unused code path elimination
 * Block '<S121>/Output' : Unused code path elimination
 * Block '<S121>/Product' : Unused code path elimination
 * Block '<S121>/Step' : Unused code path elimination
 * Block '<S121>/Sum' : Unused code path elimination
 * Block '<S117>/Switch' : Unused code path elimination
 * Block '<S118>/Constant' : Unused code path elimination
 * Block '<S122>/Clock' : Unused code path elimination
 * Block '<S122>/Constant' : Unused code path elimination
 * Block '<S122>/Constant1' : Unused code path elimination
 * Block '<S122>/Output' : Unused code path elimination
 * Block '<S122>/Product' : Unused code path elimination
 * Block '<S122>/Step' : Unused code path elimination
 * Block '<S122>/Sum' : Unused code path elimination
 * Block '<S118>/Switch' : Unused code path elimination
 * Block '<S124>/AND' : Unused code path elimination
 * Block '<S124>/Constant' : Unused code path elimination
 * Block '<S124>/Constant2' : Unused code path elimination
 * Block '<S124>/Constant3' : Unused code path elimination
 * Block '<S124>/Default' : Unused code path elimination
 * Block '<S124>/Right_indicator' : Unused code path elimination
 * Block '<S124>/Switch' : Unused code path elimination
 * Block '<S124>/Switch1' : Unused code path elimination
 * Block '<S124>/Switch2' : Unused code path elimination
 * Block '<S125>/Deafult' : Unused code path elimination
 * Block '<S125>/I_Headlight_mode1' : Unused code path elimination
 * Block '<S125>/Input_HighBeam' : Unused code path elimination
 * Block '<S125>/Input_LowBeam' : Unused code path elimination
 * Block '<S125>/Switch' : Unused code path elimination
 * Block '<S125>/Switch1' : Unused code path elimination
 * Block '<S125>/Switch3' : Unused code path elimination
 * Block '<S126>/Default' : Unused code path elimination
 * Block '<S126>/I_Headlight_mode1' : Unused code path elimination
 * Block '<S126>/Input_HighBeam' : Unused code path elimination
 * Block '<S126>/Input_LowBeam' : Unused code path elimination
 * Block '<S126>/Switch' : Unused code path elimination
 * Block '<S126>/Switch1' : Unused code path elimination
 * Block '<S126>/Switch3' : Unused code path elimination
 * Block '<S128>/Constant' : Unused code path elimination
 * Block '<S128>/Gain' : Unused code path elimination
 * Block '<S132>/Clock' : Unused code path elimination
 * Block '<S132>/Constant' : Unused code path elimination
 * Block '<S132>/Constant1' : Unused code path elimination
 * Block '<S132>/Output' : Unused code path elimination
 * Block '<S132>/Product' : Unused code path elimination
 * Block '<S132>/Step' : Unused code path elimination
 * Block '<S132>/Sum' : Unused code path elimination
 * Block '<S133>/Clock' : Unused code path elimination
 * Block '<S133>/Constant' : Unused code path elimination
 * Block '<S133>/Constant1' : Unused code path elimination
 * Block '<S133>/Output' : Unused code path elimination
 * Block '<S133>/Product' : Unused code path elimination
 * Block '<S133>/Step' : Unused code path elimination
 * Block '<S133>/Sum' : Unused code path elimination
 * Block '<S128>/Switch' : Unused code path elimination
 * Block '<S128>/Switch1' : Unused code path elimination
 * Block '<S129>/Constant' : Unused code path elimination
 * Block '<S129>/Gain' : Unused code path elimination
 * Block '<S134>/Clock' : Unused code path elimination
 * Block '<S134>/Constant' : Unused code path elimination
 * Block '<S134>/Constant1' : Unused code path elimination
 * Block '<S134>/Output' : Unused code path elimination
 * Block '<S134>/Product' : Unused code path elimination
 * Block '<S134>/Step' : Unused code path elimination
 * Block '<S134>/Sum' : Unused code path elimination
 * Block '<S135>/Clock' : Unused code path elimination
 * Block '<S135>/Constant' : Unused code path elimination
 * Block '<S135>/Constant1' : Unused code path elimination
 * Block '<S135>/Output' : Unused code path elimination
 * Block '<S135>/Product' : Unused code path elimination
 * Block '<S135>/Step' : Unused code path elimination
 * Block '<S135>/Sum' : Unused code path elimination
 * Block '<S129>/Switch' : Unused code path elimination
 * Block '<S129>/Switch1' : Unused code path elimination
 * Block '<S130>/Constant' : Unused code path elimination
 * Block '<S130>/Gain' : Unused code path elimination
 * Block '<S136>/Clock' : Unused code path elimination
 * Block '<S136>/Constant' : Unused code path elimination
 * Block '<S136>/Constant1' : Unused code path elimination
 * Block '<S136>/Output' : Unused code path elimination
 * Block '<S136>/Product' : Unused code path elimination
 * Block '<S136>/Step' : Unused code path elimination
 * Block '<S136>/Sum' : Unused code path elimination
 * Block '<S137>/Clock' : Unused code path elimination
 * Block '<S137>/Constant' : Unused code path elimination
 * Block '<S137>/Constant1' : Unused code path elimination
 * Block '<S137>/Output' : Unused code path elimination
 * Block '<S137>/Product' : Unused code path elimination
 * Block '<S137>/Step' : Unused code path elimination
 * Block '<S137>/Sum' : Unused code path elimination
 * Block '<S130>/Switch' : Unused code path elimination
 * Block '<S130>/Switch1' : Unused code path elimination
 * Block '<S131>/Constant' : Unused code path elimination
 * Block '<S131>/Gain' : Unused code path elimination
 * Block '<S138>/Clock' : Unused code path elimination
 * Block '<S138>/Constant' : Unused code path elimination
 * Block '<S138>/Constant1' : Unused code path elimination
 * Block '<S138>/Output' : Unused code path elimination
 * Block '<S138>/Product' : Unused code path elimination
 * Block '<S138>/Step' : Unused code path elimination
 * Block '<S138>/Sum' : Unused code path elimination
 * Block '<S139>/Clock' : Unused code path elimination
 * Block '<S139>/Constant' : Unused code path elimination
 * Block '<S139>/Constant1' : Unused code path elimination
 * Block '<S139>/Output' : Unused code path elimination
 * Block '<S139>/Product' : Unused code path elimination
 * Block '<S139>/Step' : Unused code path elimination
 * Block '<S139>/Sum' : Unused code path elimination
 * Block '<S131>/Switch' : Unused code path elimination
 * Block '<S131>/Switch1' : Unused code path elimination
 * Block '<S140>/Constant ' : Unused code path elimination
 * Block '<S140>/Gain ' : Unused code path elimination
 * Block '<S142>/Clock' : Unused code path elimination
 * Block '<S142>/Constant' : Unused code path elimination
 * Block '<S142>/Constant1' : Unused code path elimination
 * Block '<S142>/Output' : Unused code path elimination
 * Block '<S142>/Product' : Unused code path elimination
 * Block '<S142>/Step' : Unused code path elimination
 * Block '<S142>/Sum' : Unused code path elimination
 * Block '<S143>/Clock' : Unused code path elimination
 * Block '<S143>/Constant' : Unused code path elimination
 * Block '<S143>/Constant1' : Unused code path elimination
 * Block '<S143>/Output' : Unused code path elimination
 * Block '<S143>/Product' : Unused code path elimination
 * Block '<S143>/Step' : Unused code path elimination
 * Block '<S143>/Sum' : Unused code path elimination
 * Block '<S140>/Switch ' : Unused code path elimination
 * Block '<S140>/Switch1 ' : Unused code path elimination
 * Block '<S141>/Constant ' : Unused code path elimination
 * Block '<S141>/Gain ' : Unused code path elimination
 * Block '<S144>/Clock' : Unused code path elimination
 * Block '<S144>/Constant' : Unused code path elimination
 * Block '<S144>/Constant1' : Unused code path elimination
 * Block '<S144>/Output' : Unused code path elimination
 * Block '<S144>/Product' : Unused code path elimination
 * Block '<S144>/Step' : Unused code path elimination
 * Block '<S144>/Sum' : Unused code path elimination
 * Block '<S145>/Clock' : Unused code path elimination
 * Block '<S145>/Constant' : Unused code path elimination
 * Block '<S145>/Constant1' : Unused code path elimination
 * Block '<S145>/Output' : Unused code path elimination
 * Block '<S145>/Product' : Unused code path elimination
 * Block '<S145>/Step' : Unused code path elimination
 * Block '<S145>/Sum' : Unused code path elimination
 * Block '<S141>/Switch ' : Unused code path elimination
 * Block '<S141>/Switch1 ' : Unused code path elimination
 * Block '<S113>/Constant' : Unused code path elimination
 * Block '<S113>/Constant1' : Unused code path elimination
 * Block '<S113>/Constant2' : Unused code path elimination
 * Block '<S113>/Constant3' : Unused code path elimination
 * Block '<S147>/Constant' : Unused code path elimination
 * Block '<S147>/Gain' : Unused code path elimination
 * Block '<S151>/Clock' : Unused code path elimination
 * Block '<S151>/Constant' : Unused code path elimination
 * Block '<S151>/Constant1' : Unused code path elimination
 * Block '<S151>/Output' : Unused code path elimination
 * Block '<S151>/Product' : Unused code path elimination
 * Block '<S151>/Step' : Unused code path elimination
 * Block '<S151>/Sum' : Unused code path elimination
 * Block '<S147>/Switch' : Unused code path elimination
 * Block '<S147>/Switch1' : Unused code path elimination
 * Block '<S148>/Constant' : Unused code path elimination
 * Block '<S148>/Gain' : Unused code path elimination
 * Block '<S152>/Clock' : Unused code path elimination
 * Block '<S152>/Constant' : Unused code path elimination
 * Block '<S152>/Constant1' : Unused code path elimination
 * Block '<S152>/Output' : Unused code path elimination
 * Block '<S152>/Product' : Unused code path elimination
 * Block '<S152>/Step' : Unused code path elimination
 * Block '<S152>/Sum' : Unused code path elimination
 * Block '<S148>/Switch' : Unused code path elimination
 * Block '<S148>/Switch1' : Unused code path elimination
 * Block '<S149>/Constant' : Unused code path elimination
 * Block '<S149>/Gain' : Unused code path elimination
 * Block '<S153>/Clock' : Unused code path elimination
 * Block '<S153>/Constant' : Unused code path elimination
 * Block '<S153>/Constant1' : Unused code path elimination
 * Block '<S153>/Output' : Unused code path elimination
 * Block '<S153>/Product' : Unused code path elimination
 * Block '<S153>/Step' : Unused code path elimination
 * Block '<S153>/Sum' : Unused code path elimination
 * Block '<S149>/Switch' : Unused code path elimination
 * Block '<S149>/Switch1' : Unused code path elimination
 * Block '<S150>/Constant' : Unused code path elimination
 * Block '<S150>/Gain' : Unused code path elimination
 * Block '<S154>/Clock' : Unused code path elimination
 * Block '<S154>/Constant' : Unused code path elimination
 * Block '<S154>/Constant1' : Unused code path elimination
 * Block '<S154>/Output' : Unused code path elimination
 * Block '<S154>/Product' : Unused code path elimination
 * Block '<S154>/Step' : Unused code path elimination
 * Block '<S154>/Sum' : Unused code path elimination
 * Block '<S150>/Switch' : Unused code path elimination
 * Block '<S150>/Switch1' : Unused code path elimination
 * Block '<S113>/Switch' : Unused code path elimination
 * Block '<S113>/Switch1' : Unused code path elimination
 * Block '<S113>/Switch2' : Unused code path elimination
 * Block '<S113>/Switch3' : Unused code path elimination
 * Block '<Root>/Display10' : Unused code path elimination
 * Block '<Root>/Display11' : Unused code path elimination
 * Block '<Root>/Display12' : Unused code path elimination
 * Block '<Root>/Display13' : Unused code path elimination
 * Block '<Root>/Display14' : Unused code path elimination
 * Block '<Root>/Display15' : Unused code path elimination
 * Block '<Root>/Display20' : Unused code path elimination
 * Block '<Root>/Display21' : Unused code path elimination
 * Block '<Root>/Display22' : Unused code path elimination
 * Block '<Root>/Display23' : Unused code path elimination
 * Block '<Root>/Display24' : Unused code path elimination
 * Block '<Root>/Display25' : Unused code path elimination
 * Block '<Root>/Display26' : Unused code path elimination
 * Block '<Root>/Display27' : Unused code path elimination
 * Block '<Root>/Display8' : Unused code path elimination
 * Block '<Root>/Display9' : Unused code path elimination
 * Block '<Root>/Indicator' : Unused code path elimination
 * Block '<Root>/LeftBackDown' : Unused code path elimination
 * Block '<Root>/LeftBackUp' : Unused code path elimination
 * Block '<Root>/LeftFrontDown' : Unused code path elimination
 * Block '<Root>/LeftFrontUp' : Unused code path elimination
 * Block '<Root>/Left_headlight' : Unused code path elimination
 * Block '<Root>/RightBackDown' : Unused code path elimination
 * Block '<Root>/RightBackUp' : Unused code path elimination
 * Block '<Root>/RightFrontDown' : Unused code path elimination
 * Block '<Root>/RightFrontUp' : Unused code path elimination
 * Block '<Root>/Right_headlight' : Unused code path elimination
 * Block '<Root>/hazard_left_indicator' : Unused code path elimination
 * Block '<Root>/hazard_right_indicator' : Unused code path elimination
 */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'FINALBCM_Team5'
 * '<S1>'   : 'FINALBCM_Team5/BCM'
 * '<S2>'   : 'FINALBCM_Team5/BCM1'
 * '<S3>'   : 'FINALBCM_Team5/BCM2'
 * '<S4>'   : 'FINALBCM_Team5/Signal Builder'
 * '<S5>'   : 'FINALBCM_Team5/BCM/Door lock control'
 * '<S6>'   : 'FINALBCM_Team5/BCM/External_Lighting'
 * '<S7>'   : 'FINALBCM_Team5/BCM/Mirrors'
 * '<S8>'   : 'FINALBCM_Team5/BCM/Seats'
 * '<S9>'   : 'FINALBCM_Team5/BCM/Windows'
 * '<S10>'  : 'FINALBCM_Team5/BCM/Wipers'
 * '<S11>'  : 'FINALBCM_Team5/BCM/Door lock control/Left Back Door 1'
 * '<S12>'  : 'FINALBCM_Team5/BCM/Door lock control/Left Front Door '
 * '<S13>'  : 'FINALBCM_Team5/BCM/Door lock control/Right Back Door 1'
 * '<S14>'  : 'FINALBCM_Team5/BCM/Door lock control/Right Front Door '
 * '<S15>'  : 'FINALBCM_Team5/BCM/Door lock control/Left Back Door 1/Ramp'
 * '<S16>'  : 'FINALBCM_Team5/BCM/Door lock control/Left Front Door /Ramp'
 * '<S17>'  : 'FINALBCM_Team5/BCM/Door lock control/Right Back Door 1/Ramp_input'
 * '<S18>'  : 'FINALBCM_Team5/BCM/Door lock control/Right Front Door /Ramp'
 * '<S19>'  : 'FINALBCM_Team5/BCM/External_Lighting/Hazard'
 * '<S20>'  : 'FINALBCM_Team5/BCM/External_Lighting/Indicator_subsystem'
 * '<S21>'  : 'FINALBCM_Team5/BCM/External_Lighting/Left_Headlight'
 * '<S22>'  : 'FINALBCM_Team5/BCM/External_Lighting/Right_Headlight'
 * '<S23>'  : 'FINALBCM_Team5/BCM/External_Lighting/Hazard/Triggered Subsystem'
 * '<S24>'  : 'FINALBCM_Team5/BCM/Mirrors/LeftMirrorPan'
 * '<S25>'  : 'FINALBCM_Team5/BCM/Mirrors/LeftMirrorTilt '
 * '<S26>'  : 'FINALBCM_Team5/BCM/Mirrors/RightMirrorPan'
 * '<S27>'  : 'FINALBCM_Team5/BCM/Mirrors/RightMirrorTilt '
 * '<S28>'  : 'FINALBCM_Team5/BCM/Mirrors/LeftMirrorPan/Ramp'
 * '<S29>'  : 'FINALBCM_Team5/BCM/Mirrors/LeftMirrorPan/Ramp1'
 * '<S30>'  : 'FINALBCM_Team5/BCM/Mirrors/LeftMirrorTilt /Ramp'
 * '<S31>'  : 'FINALBCM_Team5/BCM/Mirrors/LeftMirrorTilt /Ramp1'
 * '<S32>'  : 'FINALBCM_Team5/BCM/Mirrors/RightMirrorPan/Ramp'
 * '<S33>'  : 'FINALBCM_Team5/BCM/Mirrors/RightMirrorPan/Ramp1'
 * '<S34>'  : 'FINALBCM_Team5/BCM/Mirrors/RightMirrorTilt /Ramp'
 * '<S35>'  : 'FINALBCM_Team5/BCM/Mirrors/RightMirrorTilt /Ramp1'
 * '<S36>'  : 'FINALBCM_Team5/BCM/Seats/BackrestLean'
 * '<S37>'  : 'FINALBCM_Team5/BCM/Seats/SeatheightAdjustment'
 * '<S38>'  : 'FINALBCM_Team5/BCM/Seats/BackrestLean/Ramp '
 * '<S39>'  : 'FINALBCM_Team5/BCM/Seats/BackrestLean/Ramp1 '
 * '<S40>'  : 'FINALBCM_Team5/BCM/Seats/SeatheightAdjustment/Ramp '
 * '<S41>'  : 'FINALBCM_Team5/BCM/Seats/SeatheightAdjustment/Ramp1 '
 * '<S42>'  : 'FINALBCM_Team5/BCM/Windows/Motors'
 * '<S43>'  : 'FINALBCM_Team5/BCM/Windows/Motors/LeftBack(w)'
 * '<S44>'  : 'FINALBCM_Team5/BCM/Windows/Motors/LeftFront(w)'
 * '<S45>'  : 'FINALBCM_Team5/BCM/Windows/Motors/RightBack(w)'
 * '<S46>'  : 'FINALBCM_Team5/BCM/Windows/Motors/RightFront(w)'
 * '<S47>'  : 'FINALBCM_Team5/BCM/Windows/Motors/LeftBack(w)/Ramp'
 * '<S48>'  : 'FINALBCM_Team5/BCM/Windows/Motors/LeftFront(w)/Ramp'
 * '<S49>'  : 'FINALBCM_Team5/BCM/Windows/Motors/RightBack(w)/Ramp'
 * '<S50>'  : 'FINALBCM_Team5/BCM/Windows/Motors/RightFront(w)/Ramp'
 * '<S51>'  : 'FINALBCM_Team5/BCM/Wipers/Enable Subsystem'
 * '<S52>'  : 'FINALBCM_Team5/BCM/Wipers/Subsystem'
 * '<S53>'  : 'FINALBCM_Team5/BCM/Wipers/Subsystem/action_block1'
 * '<S54>'  : 'FINALBCM_Team5/BCM/Wipers/Subsystem/action_block2'
 * '<S55>'  : 'FINALBCM_Team5/BCM/Wipers/Subsystem/action_block3'
 * '<S56>'  : 'FINALBCM_Team5/BCM/Wipers/Subsystem/action_block4'
 * '<S57>'  : 'FINALBCM_Team5/BCM1/Door lock control'
 * '<S58>'  : 'FINALBCM_Team5/BCM1/External_Lighting'
 * '<S59>'  : 'FINALBCM_Team5/BCM1/Mirrors'
 * '<S60>'  : 'FINALBCM_Team5/BCM1/Seats'
 * '<S61>'  : 'FINALBCM_Team5/BCM1/Windows'
 * '<S62>'  : 'FINALBCM_Team5/BCM1/Wipers'
 * '<S63>'  : 'FINALBCM_Team5/BCM1/Door lock control/Left Back Door 1'
 * '<S64>'  : 'FINALBCM_Team5/BCM1/Door lock control/Left Front Door '
 * '<S65>'  : 'FINALBCM_Team5/BCM1/Door lock control/Right Back Door 1'
 * '<S66>'  : 'FINALBCM_Team5/BCM1/Door lock control/Right Front Door '
 * '<S67>'  : 'FINALBCM_Team5/BCM1/Door lock control/Left Back Door 1/Ramp'
 * '<S68>'  : 'FINALBCM_Team5/BCM1/Door lock control/Left Front Door /Ramp'
 * '<S69>'  : 'FINALBCM_Team5/BCM1/Door lock control/Right Back Door 1/Ramp_input'
 * '<S70>'  : 'FINALBCM_Team5/BCM1/Door lock control/Right Front Door /Ramp'
 * '<S71>'  : 'FINALBCM_Team5/BCM1/External_Lighting/Hazard'
 * '<S72>'  : 'FINALBCM_Team5/BCM1/External_Lighting/Indicator_subsystem'
 * '<S73>'  : 'FINALBCM_Team5/BCM1/External_Lighting/Left_Headlight'
 * '<S74>'  : 'FINALBCM_Team5/BCM1/External_Lighting/Right_Headlight'
 * '<S75>'  : 'FINALBCM_Team5/BCM1/External_Lighting/Hazard/Triggered Subsystem'
 * '<S76>'  : 'FINALBCM_Team5/BCM1/Mirrors/LeftMirrorPan'
 * '<S77>'  : 'FINALBCM_Team5/BCM1/Mirrors/LeftMirrorTilt '
 * '<S78>'  : 'FINALBCM_Team5/BCM1/Mirrors/RightMirrorPan'
 * '<S79>'  : 'FINALBCM_Team5/BCM1/Mirrors/RightMirrorTilt '
 * '<S80>'  : 'FINALBCM_Team5/BCM1/Mirrors/LeftMirrorPan/Ramp'
 * '<S81>'  : 'FINALBCM_Team5/BCM1/Mirrors/LeftMirrorPan/Ramp1'
 * '<S82>'  : 'FINALBCM_Team5/BCM1/Mirrors/LeftMirrorTilt /Ramp'
 * '<S83>'  : 'FINALBCM_Team5/BCM1/Mirrors/LeftMirrorTilt /Ramp1'
 * '<S84>'  : 'FINALBCM_Team5/BCM1/Mirrors/RightMirrorPan/Ramp'
 * '<S85>'  : 'FINALBCM_Team5/BCM1/Mirrors/RightMirrorPan/Ramp1'
 * '<S86>'  : 'FINALBCM_Team5/BCM1/Mirrors/RightMirrorTilt /Ramp'
 * '<S87>'  : 'FINALBCM_Team5/BCM1/Mirrors/RightMirrorTilt /Ramp1'
 * '<S88>'  : 'FINALBCM_Team5/BCM1/Seats/BackrestLean'
 * '<S89>'  : 'FINALBCM_Team5/BCM1/Seats/SeatheightAdjustment'
 * '<S90>'  : 'FINALBCM_Team5/BCM1/Seats/BackrestLean/Ramp '
 * '<S91>'  : 'FINALBCM_Team5/BCM1/Seats/BackrestLean/Ramp1 '
 * '<S92>'  : 'FINALBCM_Team5/BCM1/Seats/SeatheightAdjustment/Ramp '
 * '<S93>'  : 'FINALBCM_Team5/BCM1/Seats/SeatheightAdjustment/Ramp1 '
 * '<S94>'  : 'FINALBCM_Team5/BCM1/Windows/Motors'
 * '<S95>'  : 'FINALBCM_Team5/BCM1/Windows/Motors/LeftBack(w)'
 * '<S96>'  : 'FINALBCM_Team5/BCM1/Windows/Motors/LeftFront(w)'
 * '<S97>'  : 'FINALBCM_Team5/BCM1/Windows/Motors/RightBack(w)'
 * '<S98>'  : 'FINALBCM_Team5/BCM1/Windows/Motors/RightFront(w)'
 * '<S99>'  : 'FINALBCM_Team5/BCM1/Windows/Motors/LeftBack(w)/Ramp'
 * '<S100>' : 'FINALBCM_Team5/BCM1/Windows/Motors/LeftFront(w)/Ramp'
 * '<S101>' : 'FINALBCM_Team5/BCM1/Windows/Motors/RightBack(w)/Ramp'
 * '<S102>' : 'FINALBCM_Team5/BCM1/Windows/Motors/RightFront(w)/Ramp'
 * '<S103>' : 'FINALBCM_Team5/BCM1/Wipers/Enable Subsystem'
 * '<S104>' : 'FINALBCM_Team5/BCM1/Wipers/Subsystem'
 * '<S105>' : 'FINALBCM_Team5/BCM1/Wipers/Subsystem/action_block1'
 * '<S106>' : 'FINALBCM_Team5/BCM1/Wipers/Subsystem/action_block2'
 * '<S107>' : 'FINALBCM_Team5/BCM1/Wipers/Subsystem/action_block3'
 * '<S108>' : 'FINALBCM_Team5/BCM1/Wipers/Subsystem/action_block4'
 * '<S109>' : 'FINALBCM_Team5/BCM2/Door lock control'
 * '<S110>' : 'FINALBCM_Team5/BCM2/External_Lighting'
 * '<S111>' : 'FINALBCM_Team5/BCM2/Mirrors'
 * '<S112>' : 'FINALBCM_Team5/BCM2/Seats'
 * '<S113>' : 'FINALBCM_Team5/BCM2/Windows'
 * '<S114>' : 'FINALBCM_Team5/BCM2/Wipers'
 * '<S115>' : 'FINALBCM_Team5/BCM2/Door lock control/Left Back Door 1'
 * '<S116>' : 'FINALBCM_Team5/BCM2/Door lock control/Left Front Door '
 * '<S117>' : 'FINALBCM_Team5/BCM2/Door lock control/Right Back Door 1'
 * '<S118>' : 'FINALBCM_Team5/BCM2/Door lock control/Right Front Door '
 * '<S119>' : 'FINALBCM_Team5/BCM2/Door lock control/Left Back Door 1/Ramp'
 * '<S120>' : 'FINALBCM_Team5/BCM2/Door lock control/Left Front Door /Ramp'
 * '<S121>' : 'FINALBCM_Team5/BCM2/Door lock control/Right Back Door 1/Ramp_input'
 * '<S122>' : 'FINALBCM_Team5/BCM2/Door lock control/Right Front Door /Ramp'
 * '<S123>' : 'FINALBCM_Team5/BCM2/External_Lighting/Hazard'
 * '<S124>' : 'FINALBCM_Team5/BCM2/External_Lighting/Indicator_subsystem'
 * '<S125>' : 'FINALBCM_Team5/BCM2/External_Lighting/Left_Headlight'
 * '<S126>' : 'FINALBCM_Team5/BCM2/External_Lighting/Right_Headlight'
 * '<S127>' : 'FINALBCM_Team5/BCM2/External_Lighting/Hazard/Triggered Subsystem'
 * '<S128>' : 'FINALBCM_Team5/BCM2/Mirrors/LeftMirrorPan'
 * '<S129>' : 'FINALBCM_Team5/BCM2/Mirrors/LeftMirrorTilt '
 * '<S130>' : 'FINALBCM_Team5/BCM2/Mirrors/RightMirrorPan'
 * '<S131>' : 'FINALBCM_Team5/BCM2/Mirrors/RightMirrorTilt '
 * '<S132>' : 'FINALBCM_Team5/BCM2/Mirrors/LeftMirrorPan/Ramp'
 * '<S133>' : 'FINALBCM_Team5/BCM2/Mirrors/LeftMirrorPan/Ramp1'
 * '<S134>' : 'FINALBCM_Team5/BCM2/Mirrors/LeftMirrorTilt /Ramp'
 * '<S135>' : 'FINALBCM_Team5/BCM2/Mirrors/LeftMirrorTilt /Ramp1'
 * '<S136>' : 'FINALBCM_Team5/BCM2/Mirrors/RightMirrorPan/Ramp'
 * '<S137>' : 'FINALBCM_Team5/BCM2/Mirrors/RightMirrorPan/Ramp1'
 * '<S138>' : 'FINALBCM_Team5/BCM2/Mirrors/RightMirrorTilt /Ramp'
 * '<S139>' : 'FINALBCM_Team5/BCM2/Mirrors/RightMirrorTilt /Ramp1'
 * '<S140>' : 'FINALBCM_Team5/BCM2/Seats/BackrestLean'
 * '<S141>' : 'FINALBCM_Team5/BCM2/Seats/SeatheightAdjustment'
 * '<S142>' : 'FINALBCM_Team5/BCM2/Seats/BackrestLean/Ramp '
 * '<S143>' : 'FINALBCM_Team5/BCM2/Seats/BackrestLean/Ramp1 '
 * '<S144>' : 'FINALBCM_Team5/BCM2/Seats/SeatheightAdjustment/Ramp '
 * '<S145>' : 'FINALBCM_Team5/BCM2/Seats/SeatheightAdjustment/Ramp1 '
 * '<S146>' : 'FINALBCM_Team5/BCM2/Windows/Motors'
 * '<S147>' : 'FINALBCM_Team5/BCM2/Windows/Motors/LeftBack(w)'
 * '<S148>' : 'FINALBCM_Team5/BCM2/Windows/Motors/LeftFront(w)'
 * '<S149>' : 'FINALBCM_Team5/BCM2/Windows/Motors/RightBack(w)'
 * '<S150>' : 'FINALBCM_Team5/BCM2/Windows/Motors/RightFront(w)'
 * '<S151>' : 'FINALBCM_Team5/BCM2/Windows/Motors/LeftBack(w)/Ramp'
 * '<S152>' : 'FINALBCM_Team5/BCM2/Windows/Motors/LeftFront(w)/Ramp'
 * '<S153>' : 'FINALBCM_Team5/BCM2/Windows/Motors/RightBack(w)/Ramp'
 * '<S154>' : 'FINALBCM_Team5/BCM2/Windows/Motors/RightFront(w)/Ramp'
 * '<S155>' : 'FINALBCM_Team5/BCM2/Wipers/Enable Subsystem'
 * '<S156>' : 'FINALBCM_Team5/BCM2/Wipers/Subsystem'
 * '<S157>' : 'FINALBCM_Team5/BCM2/Wipers/Subsystem/action_block1'
 * '<S158>' : 'FINALBCM_Team5/BCM2/Wipers/Subsystem/action_block2'
 * '<S159>' : 'FINALBCM_Team5/BCM2/Wipers/Subsystem/action_block3'
 * '<S160>' : 'FINALBCM_Team5/BCM2/Wipers/Subsystem/action_block4'
 */
#endif                                 /* RTW_HEADER_FINALBCM_Team5_h_ */
