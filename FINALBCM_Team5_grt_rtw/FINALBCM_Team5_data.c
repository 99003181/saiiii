/*
 * FINALBCM_Team5_data.c
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

/* Block parameters (default storage) */
P_FINALBCM_Team5_T FINALBCM_Team5_P = {
  /* Computed Parameter: Out1_Y0
   * Referenced by: '<S51>/Out1'
   */
  0.0,

  /* Expression: 50
   * Referenced by: '<S10>/scaling_factor'
   */
  50.0,

  /* Expression: 1
   * Referenced by: '<S10>/Ignition'
   */
  1.0,

  /* Expression: 48
   * Referenced by: '<S52>/Constant3'
   */
  48.0,

  /* Expression: 30
   * Referenced by: '<S52>/Constant2'
   */
  30.0,

  /* Expression: 20
   * Referenced by: '<S52>/Constant1'
   */
  20.0,

  /* Expression: 0
   * Referenced by: '<S52>/Constant'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S19>/Enable_Input'
   */
  1.0,

  /* Computed Parameter: Enable_Input_Period
   * Referenced by: '<S19>/Enable_Input'
   */
  2.0,

  /* Computed Parameter: Enable_Input_Duty
   * Referenced by: '<S19>/Enable_Input'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S19>/Enable_Input'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S71>/Enable_Input'
   */
  1.0,

  /* Computed Parameter: Enable_Input_Period_j
   * Referenced by: '<S71>/Enable_Input'
   */
  2.0,

  /* Computed Parameter: Enable_Input_Duty_f
   * Referenced by: '<S71>/Enable_Input'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S71>/Enable_Input'
   */
  0.0,

  /* Expression: 50
   * Referenced by: '<S62>/scaling_factor'
   */
  50.0,

  /* Expression: 1
   * Referenced by: '<S62>/Ignition'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S104>/Constant'
   */
  0.0,

  /* Expression: 20
   * Referenced by: '<S104>/Constant1'
   */
  20.0,

  /* Expression: 30
   * Referenced by: '<S104>/Constant2'
   */
  30.0,

  /* Expression: 48
   * Referenced by: '<S104>/Constant3'
   */
  48.0,

  /* Expression: 1
   * Referenced by: '<S123>/Enable_Input'
   */
  1.0,

  /* Computed Parameter: Enable_Input_Period_b
   * Referenced by: '<S123>/Enable_Input'
   */
  2.0,

  /* Computed Parameter: Enable_Input_Duty_l
   * Referenced by: '<S123>/Enable_Input'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S123>/Enable_Input'
   */
  0.0,

  /* Expression: 50
   * Referenced by: '<S114>/scaling_factor'
   */
  50.0,

  /* Expression: 1
   * Referenced by: '<S114>/Ignition'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S156>/Constant'
   */
  0.0,

  /* Expression: 20
   * Referenced by: '<S156>/Constant1'
   */
  20.0,

  /* Expression: 30
   * Referenced by: '<S156>/Constant2'
   */
  30.0,

  /* Expression: 48
   * Referenced by: '<S156>/Constant3'
   */
  48.0,

  /* Start of '<S114>/Enable Subsystem' */
  {
    /* Computed Parameter: Out1_Y0
     * Referenced by: '<S155>/Out1'
     */
    0.0
  }
  ,

  /* End of '<S114>/Enable Subsystem' */

  /* Start of '<S123>/Triggered Subsystem' */
  {
    /* Computed Parameter: Output_Y0
     * Referenced by: '<S127>/Output'
     */
    0
  }
  ,

  /* End of '<S123>/Triggered Subsystem' */

  /* Start of '<S62>/Enable Subsystem' */
  {
    /* Computed Parameter: Out1_Y0
     * Referenced by: '<S103>/Out1'
     */
    0.0
  }
  ,

  /* End of '<S62>/Enable Subsystem' */

  /* Start of '<S71>/Triggered Subsystem' */
  {
    /* Computed Parameter: Output_Y0
     * Referenced by: '<S75>/Output'
     */
    0
  }
  ,

  /* End of '<S71>/Triggered Subsystem' */

  /* Start of '<S19>/Triggered Subsystem' */
  {
    /* Computed Parameter: Output_Y0
     * Referenced by: '<S23>/Output'
     */
    0
  }
  /* End of '<S19>/Triggered Subsystem' */
};
