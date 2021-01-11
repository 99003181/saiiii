/*
 * FINALBCM_Team5_private.h
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

#ifndef RTW_HEADER_FINALBCM_Team5_private_h_
#define RTW_HEADER_FINALBCM_Team5_private_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#include "FINALBCM_Team5.h"

/* Private macros used by the generated code to access rtModel */
#ifndef rtmIsMajorTimeStep
#define rtmIsMajorTimeStep(rtm)        (((rtm)->Timing.simTimeStep) == MAJOR_TIME_STEP)
#endif

#ifndef rtmIsMinorTimeStep
#define rtmIsMinorTimeStep(rtm)        (((rtm)->Timing.simTimeStep) == MINOR_TIME_STEP)
#endif

#ifndef rtmSetTFinal
#define rtmSetTFinal(rtm, val)         ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmSetTPtr
#define rtmSetTPtr(rtm, val)           ((rtm)->Timing.t = (val))
#endif

/* Used by FromWorkspace Block: '<S4>/FromWs' */
#ifndef rtInterpolate
# define rtInterpolate(v1,v2,f1,f2)    (((v1)==(v2))?((double)(v1)): (((f1)*((double)(v1)))+((f2)*((double)(v2)))))
#endif

#ifndef rtRound
# define rtRound(v)                    ( ((v) >= 0) ? floor((v) + 0.5) : ceil((v) - 0.5) )
#endif

extern void FINALBC_TriggeredSubsystem_Init(B_TriggeredSubsystem_FINALBCM_T
  *localB, P_TriggeredSubsystem_FINALBCM_T *localP);
extern void FINALBCM_Tea_TriggeredSubsystem(real_T rtu_Trigger, boolean_T
  rtu_In1, B_TriggeredSubsystem_FINALBCM_T *localB,
  ZCE_TriggeredSubsystem_FINALB_T *localZCE);
extern void FINALBCM_Team5_action_block1(real_T rtu_In1, real_T *rty_Out1);
extern void FINALBCM_T_EnableSubsystem_Init(B_EnableSubsystem_FINALBCM_Te_T
  *localB, P_EnableSubsystem_FINALBCM_Te_T *localP);
extern void FINALBCM_Team5_EnableSubsystem(real_T rtu_Enable, real_T rtu_In1,
  B_EnableSubsystem_FINALBCM_Te_T *localB);

#endif                                /* RTW_HEADER_FINALBCM_Team5_private_h_ */
