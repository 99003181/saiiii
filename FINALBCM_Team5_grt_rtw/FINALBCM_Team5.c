/*
 * FINALBCM_Team5.c
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

#include "FINALBCM_Team5.h"
#include "FINALBCM_Team5_private.h"

/* Block signals (default storage) */
B_FINALBCM_Team5_T FINALBCM_Team5_B;

/* Block states (default storage) */
DW_FINALBCM_Team5_T FINALBCM_Team5_DW;

/* Previous zero-crossings (trigger) states */
PrevZCX_FINALBCM_Team5_T FINALBCM_Team5_PrevZCX;

/* Real-time model */
static RT_MODEL_FINALBCM_Team5_T FINALBCM_Team5_M_;
RT_MODEL_FINALBCM_Team5_T *const FINALBCM_Team5_M = &FINALBCM_Team5_M_;

/*
 * System initialize for trigger system:
 *    '<S19>/Triggered Subsystem'
 *    '<S71>/Triggered Subsystem'
 *    '<S123>/Triggered Subsystem'
 */
void FINALBC_TriggeredSubsystem_Init(B_TriggeredSubsystem_FINALBCM_T *localB,
  P_TriggeredSubsystem_FINALBCM_T *localP)
{
  /* SystemInitialize for Outport: '<S23>/Output' incorporates:
   *  Inport: '<S23>/In1'
   */
  localB->In1 = localP->Output_Y0;
}

/*
 * Output and update for trigger system:
 *    '<S19>/Triggered Subsystem'
 *    '<S71>/Triggered Subsystem'
 *    '<S123>/Triggered Subsystem'
 */
void FINALBCM_Tea_TriggeredSubsystem(real_T rtu_Trigger, boolean_T rtu_In1,
  B_TriggeredSubsystem_FINALBCM_T *localB, ZCE_TriggeredSubsystem_FINALB_T
  *localZCE)
{
  ZCEventType zcEvent;

  /* Outputs for Triggered SubSystem: '<S19>/Triggered Subsystem' incorporates:
   *  TriggerPort: '<S23>/Trigger'
   */
  zcEvent = rt_ZCFcn(ANY_ZERO_CROSSING,&localZCE->TriggeredSubsystem_Trig_ZCE,
                     (rtu_Trigger));
  if (zcEvent != NO_ZCEVENT) {
    /* Inport: '<S23>/In1' */
    localB->In1 = rtu_In1;
  }

  /* End of Outputs for SubSystem: '<S19>/Triggered Subsystem' */
}

/*
 * Output and update for action system:
 *    '<S52>/action_block1'
 *    '<S52>/action_block2'
 *    '<S52>/action_block3'
 *    '<S52>/action_block4'
 *    '<S104>/action_block1'
 *    '<S104>/action_block2'
 *    '<S104>/action_block3'
 *    '<S104>/action_block4'
 *    '<S156>/action_block1'
 *    '<S156>/action_block2'
 *    ...
 */
void FINALBCM_Team5_action_block1(real_T rtu_In1, real_T *rty_Out1)
{
  /* Inport: '<S53>/In1' */
  *rty_Out1 = rtu_In1;
}

/*
 * System initialize for enable system:
 *    '<S62>/Enable Subsystem'
 *    '<S114>/Enable Subsystem'
 */
void FINALBCM_T_EnableSubsystem_Init(B_EnableSubsystem_FINALBCM_Te_T *localB,
  P_EnableSubsystem_FINALBCM_Te_T *localP)
{
  /* SystemInitialize for Outport: '<S103>/Out1' incorporates:
   *  Inport: '<S103>/In1'
   */
  localB->In1 = localP->Out1_Y0;
}

/*
 * Output and update for enable system:
 *    '<S62>/Enable Subsystem'
 *    '<S114>/Enable Subsystem'
 */
void FINALBCM_Team5_EnableSubsystem(real_T rtu_Enable, real_T rtu_In1,
  B_EnableSubsystem_FINALBCM_Te_T *localB)
{
  /* Outputs for Enabled SubSystem: '<S62>/Enable Subsystem' incorporates:
   *  EnablePort: '<S103>/Enable'
   */
  if (rtu_Enable > 0.0) {
    /* Inport: '<S103>/In1' */
    localB->In1 = rtu_In1;
  }

  /* End of Outputs for SubSystem: '<S62>/Enable Subsystem' */
}

/* Model step function */
void FINALBCM_Team5_step(void)
{
  int8_T rtAction;

  /* FromWorkspace: '<S4>/FromWs' */
  {
    real_T *pDataValues = (real_T *) FINALBCM_Team5_DW.FromWs_PWORK.DataPtr;
    real_T *pTimeValues = (real_T *) FINALBCM_Team5_DW.FromWs_PWORK.TimePtr;
    int_T currTimeIndex = FINALBCM_Team5_DW.FromWs_IWORK.PrevIndex;
    real_T t = FINALBCM_Team5_M->Timing.t[0];

    /* Get index */
    if (t <= pTimeValues[0]) {
      currTimeIndex = 0;
    } else if (t >= pTimeValues[69]) {
      currTimeIndex = 68;
    } else {
      if (t < pTimeValues[currTimeIndex]) {
        while (t < pTimeValues[currTimeIndex]) {
          currTimeIndex--;
        }
      } else {
        while (t >= pTimeValues[currTimeIndex + 1]) {
          currTimeIndex++;
        }
      }
    }

    FINALBCM_Team5_DW.FromWs_IWORK.PrevIndex = currTimeIndex;

    /* Post output */
    {
      real_T t1 = pTimeValues[currTimeIndex];
      real_T t2 = pTimeValues[currTimeIndex + 1];
      if (t1 == t2) {
        if (t < t1) {
          {
            int_T elIdx;
            for (elIdx = 0; elIdx < 20; ++elIdx) {
              (&FINALBCM_Team5_B.FromWs[0])[elIdx] = pDataValues[currTimeIndex];
              pDataValues += 70;
            }
          }
        } else {
          {
            int_T elIdx;
            for (elIdx = 0; elIdx < 20; ++elIdx) {
              (&FINALBCM_Team5_B.FromWs[0])[elIdx] = pDataValues[currTimeIndex +
                1];
              pDataValues += 70;
            }
          }
        }
      } else {
        real_T f1 = (t2 - t) / (t2 - t1);
        real_T f2 = 1.0 - f1;
        real_T d1;
        real_T d2;
        int_T TimeIndex= currTimeIndex;

        {
          int_T elIdx;
          for (elIdx = 0; elIdx < 20; ++elIdx) {
            d1 = pDataValues[TimeIndex];
            d2 = pDataValues[TimeIndex + 1];
            (&FINALBCM_Team5_B.FromWs[0])[elIdx] = (real_T) rtInterpolate(d1, d2,
              f1, f2);
            pDataValues += 70;
          }
        }
      }
    }
  }

  /* Gain: '<S10>/scaling_factor' */
  FINALBCM_Team5_B.scaling_factor = FINALBCM_Team5_P.scaling_factor_Gain *
    FINALBCM_Team5_B.FromWs[9];

  /* Outputs for Enabled SubSystem: '<S10>/Enable Subsystem' incorporates:
   *  EnablePort: '<S51>/Enable'
   */
  /* Constant: '<S10>/Ignition' */
  FINALBCM_Team5_DW.EnableSubsystem_MODE = (FINALBCM_Team5_P.Ignition_Value >
    0.0);
  if (FINALBCM_Team5_DW.EnableSubsystem_MODE) {
    /* Inport: '<S51>/In1' */
    FINALBCM_Team5_B.In1 = FINALBCM_Team5_B.scaling_factor;
  }

  /* End of Outputs for SubSystem: '<S10>/Enable Subsystem' */

  /* If: '<S52>/threshold_comparison' incorporates:
   *  Constant: '<S52>/Constant'
   *  Constant: '<S52>/Constant1'
   *  Constant: '<S52>/Constant2'
   *  Constant: '<S52>/Constant3'
   */
  if (FINALBCM_Team5_B.In1 <= 10.0) {
    rtAction = 0;

    /* Outputs for IfAction SubSystem: '<S52>/action_block1' incorporates:
     *  ActionPort: '<S53>/Action Port'
     */
    FINALBCM_Team5_action_block1(FINALBCM_Team5_P.Constant_Value,
      &FINALBCM_Team5_B.Merge);

    /* End of Outputs for SubSystem: '<S52>/action_block1' */
  } else if (FINALBCM_Team5_B.In1 <= 30.0) {
    rtAction = 1;

    /* Outputs for IfAction SubSystem: '<S52>/action_block2' incorporates:
     *  ActionPort: '<S54>/Action Port'
     */
    FINALBCM_Team5_action_block1(FINALBCM_Team5_P.Constant1_Value,
      &FINALBCM_Team5_B.Merge);

    /* End of Outputs for SubSystem: '<S52>/action_block2' */
  } else if (FINALBCM_Team5_B.In1 <= 50.0) {
    rtAction = 2;

    /* Outputs for IfAction SubSystem: '<S52>/action_block3' incorporates:
     *  ActionPort: '<S55>/Action Port'
     */
    FINALBCM_Team5_action_block1(FINALBCM_Team5_P.Constant2_Value,
      &FINALBCM_Team5_B.Merge);

    /* End of Outputs for SubSystem: '<S52>/action_block3' */
  } else {
    rtAction = 3;

    /* Outputs for IfAction SubSystem: '<S52>/action_block4' incorporates:
     *  ActionPort: '<S56>/Action Port'
     */
    FINALBCM_Team5_action_block1(FINALBCM_Team5_P.Constant3_Value,
      &FINALBCM_Team5_B.Merge);

    /* End of Outputs for SubSystem: '<S52>/action_block4' */
  }

  FINALBCM_Team5_DW.threshold_comparison_ActiveSubs = rtAction;

  /* End of If: '<S52>/threshold_comparison' */
  /* DiscretePulseGenerator: '<S19>/Enable_Input' */
  FINALBCM_Team5_B.Enable_Input = (FINALBCM_Team5_DW.clockTickCounter <
    FINALBCM_Team5_P.Enable_Input_Duty) && (FINALBCM_Team5_DW.clockTickCounter >=
    0) ? FINALBCM_Team5_P.Enable_Input_Amp : 0.0;

  /* DiscretePulseGenerator: '<S19>/Enable_Input' */
  if (FINALBCM_Team5_DW.clockTickCounter >= FINALBCM_Team5_P.Enable_Input_Period
      - 1.0) {
    FINALBCM_Team5_DW.clockTickCounter = 0;
  } else {
    FINALBCM_Team5_DW.clockTickCounter++;
  }

  /* Logic: '<S19>/AND2' */
  FINALBCM_Team5_B.AND2 = ((FINALBCM_Team5_B.Enable_Input != 0.0) &&
    (FINALBCM_Team5_B.FromWs[3] != 0.0));

  /* Outputs for Triggered SubSystem: '<S19>/Triggered Subsystem' */
  FINALBCM_Tea_TriggeredSubsystem(FINALBCM_Team5_B.Enable_Input,
    FINALBCM_Team5_B.AND2, &FINALBCM_Team5_B.TriggeredSubsystem,
    &FINALBCM_Team5_PrevZCX.TriggeredSubsystem);

  /* End of Outputs for SubSystem: '<S19>/Triggered Subsystem' */

  /* DiscretePulseGenerator: '<S71>/Enable_Input' */
  FINALBCM_Team5_B.Enable_Input_h = (FINALBCM_Team5_DW.clockTickCounter_a <
    FINALBCM_Team5_P.Enable_Input_Duty_f) &&
    (FINALBCM_Team5_DW.clockTickCounter_a >= 0) ?
    FINALBCM_Team5_P.Enable_Input_Amp_m : 0.0;

  /* DiscretePulseGenerator: '<S71>/Enable_Input' */
  if (FINALBCM_Team5_DW.clockTickCounter_a >=
      FINALBCM_Team5_P.Enable_Input_Period_j - 1.0) {
    FINALBCM_Team5_DW.clockTickCounter_a = 0;
  } else {
    FINALBCM_Team5_DW.clockTickCounter_a++;
  }

  /* Logic: '<S71>/AND2' */
  FINALBCM_Team5_B.AND2_b = false;

  /* Outputs for Triggered SubSystem: '<S71>/Triggered Subsystem' */
  FINALBCM_Tea_TriggeredSubsystem(FINALBCM_Team5_B.Enable_Input_h,
    FINALBCM_Team5_B.AND2_b, &FINALBCM_Team5_B.TriggeredSubsystem_h,
    &FINALBCM_Team5_PrevZCX.TriggeredSubsystem_h);

  /* End of Outputs for SubSystem: '<S71>/Triggered Subsystem' */

  /* Gain: '<S62>/scaling_factor' */
  FINALBCM_Team5_B.scaling_factor_j = FINALBCM_Team5_P.scaling_factor_Gain_b *
    0.0;

  /* Outputs for Enabled SubSystem: '<S62>/Enable Subsystem' */
  /* Constant: '<S62>/Ignition' */
  FINALBCM_Team5_EnableSubsystem(FINALBCM_Team5_P.Ignition_Value_l,
    FINALBCM_Team5_B.scaling_factor_j, &FINALBCM_Team5_B.EnableSubsystem_e);

  /* End of Outputs for SubSystem: '<S62>/Enable Subsystem' */

  /* If: '<S104>/threshold_comparison' incorporates:
   *  Constant: '<S104>/Constant'
   *  Constant: '<S104>/Constant1'
   *  Constant: '<S104>/Constant2'
   *  Constant: '<S104>/Constant3'
   */
  if (FINALBCM_Team5_B.EnableSubsystem_e.In1 <= 10.0) {
    /* Outputs for IfAction SubSystem: '<S104>/action_block1' incorporates:
     *  ActionPort: '<S105>/Action Port'
     */
    FINALBCM_Team5_action_block1(FINALBCM_Team5_P.Constant_Value_c,
      &FINALBCM_Team5_B.Merge_h);

    /* End of Outputs for SubSystem: '<S104>/action_block1' */
  } else if (FINALBCM_Team5_B.EnableSubsystem_e.In1 <= 30.0) {
    /* Outputs for IfAction SubSystem: '<S104>/action_block2' incorporates:
     *  ActionPort: '<S106>/Action Port'
     */
    FINALBCM_Team5_action_block1(FINALBCM_Team5_P.Constant1_Value_l,
      &FINALBCM_Team5_B.Merge_h);

    /* End of Outputs for SubSystem: '<S104>/action_block2' */
  } else if (FINALBCM_Team5_B.EnableSubsystem_e.In1 <= 50.0) {
    /* Outputs for IfAction SubSystem: '<S104>/action_block3' incorporates:
     *  ActionPort: '<S107>/Action Port'
     */
    FINALBCM_Team5_action_block1(FINALBCM_Team5_P.Constant2_Value_n,
      &FINALBCM_Team5_B.Merge_h);

    /* End of Outputs for SubSystem: '<S104>/action_block3' */
  } else {
    /* Outputs for IfAction SubSystem: '<S104>/action_block4' incorporates:
     *  ActionPort: '<S108>/Action Port'
     */
    FINALBCM_Team5_action_block1(FINALBCM_Team5_P.Constant3_Value_f,
      &FINALBCM_Team5_B.Merge_h);

    /* End of Outputs for SubSystem: '<S104>/action_block4' */
  }

  /* End of If: '<S104>/threshold_comparison' */

  /* DiscretePulseGenerator: '<S123>/Enable_Input' */
  FINALBCM_Team5_B.Enable_Input_c = (FINALBCM_Team5_DW.clockTickCounter_k <
    FINALBCM_Team5_P.Enable_Input_Duty_l) &&
    (FINALBCM_Team5_DW.clockTickCounter_k >= 0) ?
    FINALBCM_Team5_P.Enable_Input_Amp_j : 0.0;

  /* DiscretePulseGenerator: '<S123>/Enable_Input' */
  if (FINALBCM_Team5_DW.clockTickCounter_k >=
      FINALBCM_Team5_P.Enable_Input_Period_b - 1.0) {
    FINALBCM_Team5_DW.clockTickCounter_k = 0;
  } else {
    FINALBCM_Team5_DW.clockTickCounter_k++;
  }

  /* Logic: '<S123>/AND2' */
  FINALBCM_Team5_B.AND2_g = false;

  /* Outputs for Triggered SubSystem: '<S123>/Triggered Subsystem' */
  FINALBCM_Tea_TriggeredSubsystem(FINALBCM_Team5_B.Enable_Input_c,
    FINALBCM_Team5_B.AND2_g, &FINALBCM_Team5_B.TriggeredSubsystem_i,
    &FINALBCM_Team5_PrevZCX.TriggeredSubsystem_i);

  /* End of Outputs for SubSystem: '<S123>/Triggered Subsystem' */

  /* Gain: '<S114>/scaling_factor' */
  FINALBCM_Team5_B.scaling_factor_e = FINALBCM_Team5_P.scaling_factor_Gain_l *
    0.0;

  /* Outputs for Enabled SubSystem: '<S114>/Enable Subsystem' */
  /* Constant: '<S114>/Ignition' */
  FINALBCM_Team5_EnableSubsystem(FINALBCM_Team5_P.Ignition_Value_e,
    FINALBCM_Team5_B.scaling_factor_e, &FINALBCM_Team5_B.EnableSubsystem_j);

  /* End of Outputs for SubSystem: '<S114>/Enable Subsystem' */

  /* If: '<S156>/threshold_comparison' incorporates:
   *  Constant: '<S156>/Constant'
   *  Constant: '<S156>/Constant1'
   *  Constant: '<S156>/Constant2'
   *  Constant: '<S156>/Constant3'
   */
  if (FINALBCM_Team5_B.EnableSubsystem_j.In1 <= 10.0) {
    /* Outputs for IfAction SubSystem: '<S156>/action_block1' incorporates:
     *  ActionPort: '<S157>/Action Port'
     */
    FINALBCM_Team5_action_block1(FINALBCM_Team5_P.Constant_Value_b,
      &FINALBCM_Team5_B.Merge_j);

    /* End of Outputs for SubSystem: '<S156>/action_block1' */
  } else if (FINALBCM_Team5_B.EnableSubsystem_j.In1 <= 30.0) {
    /* Outputs for IfAction SubSystem: '<S156>/action_block2' incorporates:
     *  ActionPort: '<S158>/Action Port'
     */
    FINALBCM_Team5_action_block1(FINALBCM_Team5_P.Constant1_Value_b,
      &FINALBCM_Team5_B.Merge_j);

    /* End of Outputs for SubSystem: '<S156>/action_block2' */
  } else if (FINALBCM_Team5_B.EnableSubsystem_j.In1 <= 50.0) {
    /* Outputs for IfAction SubSystem: '<S156>/action_block3' incorporates:
     *  ActionPort: '<S159>/Action Port'
     */
    FINALBCM_Team5_action_block1(FINALBCM_Team5_P.Constant2_Value_f,
      &FINALBCM_Team5_B.Merge_j);

    /* End of Outputs for SubSystem: '<S156>/action_block3' */
  } else {
    /* Outputs for IfAction SubSystem: '<S156>/action_block4' incorporates:
     *  ActionPort: '<S160>/Action Port'
     */
    FINALBCM_Team5_action_block1(FINALBCM_Team5_P.Constant3_Value_c,
      &FINALBCM_Team5_B.Merge_j);

    /* End of Outputs for SubSystem: '<S156>/action_block4' */
  }

  /* End of If: '<S156>/threshold_comparison' */

  /* Matfile logging */
  rt_UpdateTXYLogVars(FINALBCM_Team5_M->rtwLogInfo, (FINALBCM_Team5_M->Timing.t));

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.0s, 0.0s] */
    if ((rtmGetTFinal(FINALBCM_Team5_M)!=-1) &&
        !((rtmGetTFinal(FINALBCM_Team5_M)-FINALBCM_Team5_M->Timing.t[0]) >
          FINALBCM_Team5_M->Timing.t[0] * (DBL_EPSILON))) {
      rtmSetErrorStatus(FINALBCM_Team5_M, "Simulation finished");
    }
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++FINALBCM_Team5_M->Timing.clockTick0)) {
    ++FINALBCM_Team5_M->Timing.clockTickH0;
  }

  FINALBCM_Team5_M->Timing.t[0] = FINALBCM_Team5_M->Timing.clockTick0 *
    FINALBCM_Team5_M->Timing.stepSize0 + FINALBCM_Team5_M->Timing.clockTickH0 *
    FINALBCM_Team5_M->Timing.stepSize0 * 4294967296.0;

  {
    /* Update absolute timer for sample time: [0.5s, 0.0s] */
    /* The "clockTick1" counts the number of times the code of this task has
     * been executed. The resolution of this integer timer is 0.5, which is the step size
     * of the task. Size of "clockTick1" ensures timer will not overflow during the
     * application lifespan selected.
     * Timer of this task consists of two 32 bit unsigned integers.
     * The two integers represent the low bits Timing.clockTick1 and the high bits
     * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
     */
    FINALBCM_Team5_M->Timing.clockTick1++;
    if (!FINALBCM_Team5_M->Timing.clockTick1) {
      FINALBCM_Team5_M->Timing.clockTickH1++;
    }
  }
}

/* Model initialize function */
void FINALBCM_Team5_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)FINALBCM_Team5_M, 0,
                sizeof(RT_MODEL_FINALBCM_Team5_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&FINALBCM_Team5_M->solverInfo,
                          &FINALBCM_Team5_M->Timing.simTimeStep);
    rtsiSetTPtr(&FINALBCM_Team5_M->solverInfo, &rtmGetTPtr(FINALBCM_Team5_M));
    rtsiSetStepSizePtr(&FINALBCM_Team5_M->solverInfo,
                       &FINALBCM_Team5_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&FINALBCM_Team5_M->solverInfo, (&rtmGetErrorStatus
      (FINALBCM_Team5_M)));
    rtsiSetRTModelPtr(&FINALBCM_Team5_M->solverInfo, FINALBCM_Team5_M);
  }

  rtsiSetSimTimeStep(&FINALBCM_Team5_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetSolverName(&FINALBCM_Team5_M->solverInfo,"FixedStepDiscrete");
  rtmSetTPtr(FINALBCM_Team5_M, &FINALBCM_Team5_M->Timing.tArray[0]);
  rtmSetTFinal(FINALBCM_Team5_M, 4.0);
  FINALBCM_Team5_M->Timing.stepSize0 = 0.5;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = NULL;
    FINALBCM_Team5_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(FINALBCM_Team5_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(FINALBCM_Team5_M->rtwLogInfo, (NULL));
    rtliSetLogT(FINALBCM_Team5_M->rtwLogInfo, "tout");
    rtliSetLogX(FINALBCM_Team5_M->rtwLogInfo, "");
    rtliSetLogXFinal(FINALBCM_Team5_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(FINALBCM_Team5_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(FINALBCM_Team5_M->rtwLogInfo, 4);
    rtliSetLogMaxRows(FINALBCM_Team5_M->rtwLogInfo, 0);
    rtliSetLogDecimation(FINALBCM_Team5_M->rtwLogInfo, 1);
    rtliSetLogY(FINALBCM_Team5_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(FINALBCM_Team5_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(FINALBCM_Team5_M->rtwLogInfo, (NULL));
  }

  /* block I/O */
  (void) memset(((void *) &FINALBCM_Team5_B), 0,
                sizeof(B_FINALBCM_Team5_T));

  /* states (dwork) */
  (void) memset((void *)&FINALBCM_Team5_DW, 0,
                sizeof(DW_FINALBCM_Team5_T));

  /* Matfile logging */
  rt_StartDataLoggingWithStartTime(FINALBCM_Team5_M->rtwLogInfo, 0.0,
    rtmGetTFinal(FINALBCM_Team5_M), FINALBCM_Team5_M->Timing.stepSize0,
    (&rtmGetErrorStatus(FINALBCM_Team5_M)));

  /* Start for FromWorkspace: '<S4>/FromWs' */
  {
    static real_T pTimeValues0[] = { 0.0, 0.5, 0.5, 1.0, 1.0, 1.25, 1.25, 1.5,
      1.5, 2.0, 2.0, 2.5, 2.5, 3.0, 3.0, 3.5, 3.5, 3.8000000000000003,
      3.8000000000000003, 3.8200000000000003, 3.8200000000000003, 3.86, 3.86,
      4.0, 4.0, 4.5, 4.5, 5.0, 5.0, 5.39, 5.39, 5.43, 5.43, 5.5, 5.5, 5.71, 5.71,
      5.86, 5.86, 6.0, 6.0, 6.5, 6.5, 7.0, 7.0, 7.0200000000000005,
      7.0200000000000005, 7.0600000000000005, 7.0600000000000005, 7.5, 7.5, 7.58,
      7.58, 7.87, 7.87, 8.0, 8.0, 8.5, 8.5, 8.92, 8.92, 9.0, 9.0, 9.5, 9.5, 9.78,
      9.78, 9.92, 9.92, 10.0 } ;

    static real_T pDataValues0[] = { 0.995, 0.995, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0,
      0.0, 0.0, 0.98, 0.98, 0.0, 0.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 1.0, 1.0, 0.0, 0.0, 0.005, 0.005, 0.005, 0.005, 0.005,
      0.005, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.99, 0.99, 1.0, 1.0, 1.0, 1.0, -0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 3.0, 3.0, 0.0, 0.0, 2.0, 2.0, 2.0, 2.0,
      0.0, 0.0, 1.02, 1.02, 0.0, 0.0, 1.02, 1.02, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 2.0, 2.0, 0.0, 0.0, 2.98, 2.98, 2.98, 2.98, 2.98, 2.98, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 2.0, 2.0, 0.0, 0.0, 2.96, 2.96, 2.96, 2.96, 2.96, 2.96,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.0, 2.0, 0.0, 0.0, 0.0, 0.0, 0.98, 0.98,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 5.0, 5.0, 0.0, 0.0, 0.98, 0.98, 0.98, 0.98,
      0.0, 0.0, 3.0, 3.0, 0.0, 0.0, 5.0, 5.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 3.0, 3.0, 0.0, -0.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 1.02, 1.02, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, -0.02, -0.02, 0.0, 0.0, 0.0, 0.0, 3.0, 3.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 2.0, 2.0, 0.0, 0.0, 2.0, 2.0, 2.0, 2.0, 0.0, 0.0, 2.0,
      2.0, 0.0, 0.0, 2.0, 2.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.0, 2.0,
      0.0, 0.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.0,
      2.0, 0.0, 0.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      2.0, 2.0, 0.0, 0.0, 0.0, 0.0, 2.0, 2.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0,
      0.0, 0.0, 0.0, 0.0, -0.0, 1.05, 1.05, 1.05, 1.05, 1.05, 1.05, 1.05, 1.05,
      1.05, 1.05, 1.05, 1.05, 1.05, 1.05, 1.05, 1.05, 1.05, 1.05, 1.05, 1.05,
      1.05, 1.05, 1.05, 1.05, 1.05, 1.05, 1.05, 1.05, 1.05, 1.05, 1.05, 1.05,
      1.05, 1.05, 0.75, 0.75, 0.75, 0.75, 0.75, 0.75, 0.75, 0.75, 0.75, 0.75,
      0.75, 0.75, 0.75, 0.75, 0.75, 0.75, 0.75, 0.75, 0.75, 0.75, 0.75, 0.75,
      0.75, 0.75, 0.75, 0.75, 0.75, 0.75, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, -1.0, -1.0,
      -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0,
      -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0,
      -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0,
      -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0,
      -1.0, -1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
      1.0, 1.0, 1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0,
      -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0,
      -1.0, -1.0, -1.0, -1.0, 0.60000000000000009, 0.60000000000000009,
      0.60000000000000009, 0.60000000000000009, 0.60000000000000009,
      0.60000000000000009, 0.60000000000000009, 0.60000000000000009,
      0.60000000000000009, 0.60000000000000009, 0.60000000000000009,
      0.60000000000000009, 0.60000000000000009, 0.60000000000000009, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, -1.0,
      -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0,
      -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, -1.0,
      -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, 0.2, 0.2, 0.2, 0.2,
      0.4, 0.4, 0.4, 0.4, 0.4, 0.4, 0.6, 0.6, 0.6, 0.6, 0.2, 0.2, 0.2, 0.2, 0.2,
      0.2, 0.2, 0.2, 0.2, 0.2, 0.4, 0.4, 0.4, 0.4, 0.6, 0.6, 0.6, 0.6, 0.6, 0.6,
      0.6, 0.6, 0.6, 0.6, 0.6, 0.6, 0.2, 0.2, 0.2, 0.2, 0.4, 0.4, 0.4, 0.4, 0.4,
      0.4, 0.4, 0.4, 0.4, 0.4, 0.4, 0.4, 0.6, 0.6, 0.6, 0.6, 0.6, 0.6, 0.2, 0.2,
      0.2, 0.2, 0.2, 0.2, 0.2, 0.2, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0,
      1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0,
      1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
      1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
      1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0,
      -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0,
      -1.0, -1.0, -1.0, 0.60000000000000009, 0.60000000000000009,
      0.60000000000000009, 0.60000000000000009, 0.60000000000000009,
      0.60000000000000009, 0.60000000000000009, 0.60000000000000009,
      0.60000000000000009, 0.60000000000000009, 0.60000000000000009,
      0.60000000000000009, 0.60000000000000009, 0.60000000000000009, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, -1.0,
      -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0,
      -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0,
      1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
      1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
      1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
      1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
      1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
      1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
      1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
      1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0,
      1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
      1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
      1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0 } ;

    FINALBCM_Team5_DW.FromWs_PWORK.TimePtr = (void *) pTimeValues0;
    FINALBCM_Team5_DW.FromWs_PWORK.DataPtr = (void *) pDataValues0;
    FINALBCM_Team5_DW.FromWs_IWORK.PrevIndex = 0;
  }

  /* Start for If: '<S52>/threshold_comparison' */
  FINALBCM_Team5_DW.threshold_comparison_ActiveSubs = -1;

  /* Start for DiscretePulseGenerator: '<S19>/Enable_Input' */
  FINALBCM_Team5_DW.clockTickCounter = 0;

  /* Start for DiscretePulseGenerator: '<S71>/Enable_Input' */
  FINALBCM_Team5_DW.clockTickCounter_a = 0;

  /* Start for DiscretePulseGenerator: '<S123>/Enable_Input' */
  FINALBCM_Team5_DW.clockTickCounter_k = 0;
  FINALBCM_Team5_PrevZCX.TriggeredSubsystem_i.TriggeredSubsystem_Trig_ZCE =
    UNINITIALIZED_ZCSIG;
  FINALBCM_Team5_PrevZCX.TriggeredSubsystem_h.TriggeredSubsystem_Trig_ZCE =
    UNINITIALIZED_ZCSIG;
  FINALBCM_Team5_PrevZCX.TriggeredSubsystem.TriggeredSubsystem_Trig_ZCE =
    UNINITIALIZED_ZCSIG;

  /* SystemInitialize for Enabled SubSystem: '<S10>/Enable Subsystem' */
  /* SystemInitialize for Outport: '<S51>/Out1' incorporates:
   *  Inport: '<S51>/In1'
   */
  FINALBCM_Team5_B.In1 = FINALBCM_Team5_P.Out1_Y0;

  /* End of SystemInitialize for SubSystem: '<S10>/Enable Subsystem' */

  /* SystemInitialize for Triggered SubSystem: '<S19>/Triggered Subsystem' */
  FINALBC_TriggeredSubsystem_Init(&FINALBCM_Team5_B.TriggeredSubsystem,
    &FINALBCM_Team5_P.TriggeredSubsystem);

  /* End of SystemInitialize for SubSystem: '<S19>/Triggered Subsystem' */

  /* SystemInitialize for Triggered SubSystem: '<S71>/Triggered Subsystem' */
  FINALBC_TriggeredSubsystem_Init(&FINALBCM_Team5_B.TriggeredSubsystem_h,
    &FINALBCM_Team5_P.TriggeredSubsystem_h);

  /* End of SystemInitialize for SubSystem: '<S71>/Triggered Subsystem' */

  /* SystemInitialize for Enabled SubSystem: '<S62>/Enable Subsystem' */
  FINALBCM_T_EnableSubsystem_Init(&FINALBCM_Team5_B.EnableSubsystem_e,
    &FINALBCM_Team5_P.EnableSubsystem_e);

  /* End of SystemInitialize for SubSystem: '<S62>/Enable Subsystem' */

  /* SystemInitialize for Triggered SubSystem: '<S123>/Triggered Subsystem' */
  FINALBC_TriggeredSubsystem_Init(&FINALBCM_Team5_B.TriggeredSubsystem_i,
    &FINALBCM_Team5_P.TriggeredSubsystem_i);

  /* End of SystemInitialize for SubSystem: '<S123>/Triggered Subsystem' */

  /* SystemInitialize for Enabled SubSystem: '<S114>/Enable Subsystem' */
  FINALBCM_T_EnableSubsystem_Init(&FINALBCM_Team5_B.EnableSubsystem_j,
    &FINALBCM_Team5_P.EnableSubsystem_j);

  /* End of SystemInitialize for SubSystem: '<S114>/Enable Subsystem' */
}

/* Model terminate function */
void FINALBCM_Team5_terminate(void)
{
  /* (no terminate code required) */
}
