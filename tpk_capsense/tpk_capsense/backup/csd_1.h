//*****************************************************************************
//*****************************************************************************
//  FILENAME: CSD_1.h
//   Version: 1.70, Updated on 2011/12/1 at 17:22:2
//  Generated by PSoC Designer 5.2.2401
//
//  DESCRIPTION: CSD User Module C Language interface file
//-----------------------------------------------------------------------------
//  Copyright (c) Cypress Semiconductor 2011. All Rights Reserved.
//*****************************************************************************
//*****************************************************************************
#ifndef CSD_1_INCLUDE
#define CSD_1_INCLUDE

#include <m8c.h>

//--------------------------------------------------
// Constants for CSD_1
//--------------------------------------------------

#define CSD_1_TotalSensorCount                    0x1
#define CSD_1_ButtonCount                         0x1
#define CSD_1_SliderCount                         0x0 + 0x0

#define CSD_1_BUTTONS_EXIST                       0x1
#define CSD_1_SLIDERS_EXIST                       0x0 | 0x0

//--------------------------------------------------
// Constants for Scan Speed values
//--------------------------------------------------
#define CSD_1_ULTRA_FAST_SPEED                    0x00
#define CSD_1_FAST_SPEED                          0x01
#define CSD_1_NORMAL_SPEED                        0x02
#define CSD_1_SLOW_SPEED                          0x03
#define CSD_1_SCANNING_SPEED                      0x2

//--------------------------------------------------
// Constants for Thresholds values
//--------------------------------------------------
#define CSD_1_FINGER_THRESHOLD                    0x28
#define CSD_1_NOISE_THRESHOLD                     0x14
#define CSD_1_BASELINE_UPDATE_THRESHOLD           0xc8
#define CSD_1_HYSTERESIS                          0xa

//--------------------------------------------------
// Constants for Resolution values
//--------------------------------------------------
#define CSD_1_MIN_RESOLUTION                      9
#define CSD_1_9_BIT_RESOLUTION                    9
#define CSD_1_10_BIT_RESOLUTION                   10
#define CSD_1_11_BIT_RESOLUTION                   11
#define CSD_1_12_BIT_RESOLUTION                   12
#define CSD_1_13_BIT_RESOLUTION                   13
#define CSD_1_14_BIT_RESOLUTION                   14
#define CSD_1_15_BIT_RESOLUTION                   15
#define CSD_1_16_BIT_RESOLUTION                   16
#define CSD_1_MAX_RESOLUTION                      16
#define CSD_1_RESOLUTION                         0xc

//--------------------------------------------------
// Variables for CSD_1.
//--------------------------------------------------
extern BYTE CSD_1_bNoiseThreshold;
extern BYTE CSD_1_bNegativeNoiseThreshold;
extern BYTE CSD_1_bBaselineUpdateThreshold;
extern BYTE CSD_1_bHysteresis;
extern BYTE CSD_1_bDebounce;
extern BYTE CSD_1_bLowBaselineReset;

extern WORD CSD_1_waSnsResult[];
extern WORD CSD_1_waSnsBaseline[];
extern WORD CSD_1_waSnsDiff[];
extern BYTE CSD_1_baSnsOnMask[];
extern BYTE CSD_1_baBtnFThreshold[];

// Low Level scan API
#pragma fastcall16 CSD_1_Start
#pragma fastcall16 CSD_1_Stop
#pragma fastcall16 CSD_1_ScanSensor
#pragma fastcall16 CSD_1_ScanAllSensors
#pragma fastcall16 CSD_1_ClearSensors
#pragma fastcall16 CSD_1_wReadSensor
#pragma fastcall16 CSD_1_wGetPortPin
#pragma fastcall16 CSD_1_EnableSensor
#pragma fastcall16 CSD_1_DisableSensor
#pragma fastcall16 CSD_1_SetScanMode
#pragma fastcall16 CSD_1_SetRefValue

// High Level API
#pragma fastcall16 CSD_1_UpdateSensorBaseline
#pragma fastcall16 CSD_1_bIsSensorActive
#pragma fastcall16 CSD_1_bIsAnySensorActive
#pragma fastcall16 CSD_1_SetDefaultFingerThresholds
#pragma fastcall16 CSD_1_InitializeSensorBaseline
#pragma fastcall16 CSD_1_InitializeBaselines
#pragma fastcall16 CSD_1_UpdateAllBaselines
#pragma fastcall16 CSD_1_wGetCentroidPos
#pragma fastcall16 CSD_1_wGetRadialPos
#pragma fastcall16 CSD_1_wGetRadialInc

//-------------------------------------------------
// C prototypes of the CSD_1 API.
//-------------------------------------------------

extern void CSD_1_Start(void);
extern void CSD_1_Stop(void);
extern void CSD_1_ScanSensor(BYTE bSensor);
extern void CSD_1_ScanAllSensors(void);
extern void CSD_1_ClearSensors(void);
extern WORD CSD_1_wReadSensor(BYTE bSensor);
extern WORD CSD_1_wGetPortPin(BYTE bSensor);
extern void CSD_1_EnableSensor(BYTE bMask, BYTE bPort);
extern void CSD_1_DisableSensor(BYTE bMask, BYTE bPort);
extern void CSD_1_SetScanMode(BYTE bSpeed, BYTE bResolution);
extern void CSD_1_SetRefValue(BYTE bRefValue);

//-------------------------------------------------
// High level functions
//-------------------------------------------------

extern void CSD_1_UpdateSensorBaseline(BYTE bSensorNum);
extern BYTE CSD_1_bIsSensorActive(BYTE bSensorNum);
extern BYTE CSD_1_bIsAnySensorActive(void);
extern void CSD_1_SetDefaultFingerThresholds(void);
extern void CSD_1_InitializeSensorBaseline(BYTE bSensorNum);
extern void CSD_1_InitializeBaselines(void);
extern void CSD_1_UpdateAllBaselines(void);
#if CSD_1_SLIDERS_EXIST
  extern WORD CSD_1_wGetCentroidPos(BYTE bSnsGroup);
  extern WORD CSD_1_wGetRadialPos(BYTE bSnsGroup);
  extern WORD CSD_1_wGetRadialInc(BYTE bSnsGroup);
#endif

//-------------------------------------------------
// Register Addresses for CSD_1
//-------------------------------------------------
#pragma ioport  CSD_1_ACE_CONTROL1_REG: 0x076              // CMP block control Register 1
BYTE            CSD_1_ACE_CONTROL1_REG;
#pragma ioport  CSD_1_ACE_CONTROL2_REG: 0x077              // CMP block control Register 2
BYTE            CSD_1_ACE_CONTROL2_REG;

#pragma ioport  CSD_1_ASE_CONTROL_REG:  0x084              // CMP_REF block control Register 2
BYTE            CSD_1_ASE_CONTROL_REG;
#pragma ioport  CSD_1_ADC_TRIM_REG: 0x1e6                  // ADC trim register
BYTE            CSD_1_ADC_TRIM_REG;
#pragma ioport  CSD_1_ADC_CONTROL_REG:  0x069              // AMD control register
BYTE            CSD_1_ADC_CONTROL_REG;

#pragma ioport  CSD_1_CNT_FUNC_REG: 0x120                  // CNT Function Register
BYTE            CSD_1_CNT_FUNC_REG;
#pragma ioport  CSD_1_CNT_IN_REG:   0x121                  // CNT Input Register
BYTE            CSD_1_CNT_IN_REG;
#pragma ioport  CSD_1_CNT_OUT_REG:  0x122                  // CNT Output Register
BYTE            CSD_1_CNT_OUT_REG;
#pragma ioport  CSD_1_CNT_COUNTER_REG:  0x020              // CNT Counter Register
BYTE            CSD_1_CNT_COUNTER_REG;
#pragma ioport  CSD_1_CNT_PERIOD_REG:   0x021              // CNT Period Refister
BYTE            CSD_1_CNT_PERIOD_REG;
#pragma ioport  CSD_1_CNT_COMPARE_REG:  0x022              // CNT Compare Register
BYTE            CSD_1_CNT_COMPARE_REG;
#pragma ioport  CSD_1_CNT_CONTROL_REG:  0x023              // CNT Control Register
BYTE            CSD_1_CNT_CONTROL_REG;

#pragma ioport  CSD_1_PRS_FUNC_LSB_REG: 0x124              // PRS Function register LSB
BYTE            CSD_1_PRS_FUNC_LSB_REG;
#pragma ioport  CSD_1_PRS_FUNC_MSB_REG: 0x128              // PRS Function register MSB
BYTE            CSD_1_PRS_FUNC_MSB_REG;
#pragma ioport  CSD_1_PRS_IN_LSB_REG:   0x125              // PRS Input register LSB
BYTE            CSD_1_PRS_IN_LSB_REG;
#pragma ioport  CSD_1_PRS_IN_MSB_REG:   0x129              // PRS Input register MSB
BYTE            CSD_1_PRS_IN_MSB_REG;
#pragma ioport  CSD_1_PRS_OUT_LSB_REG:  0x126              // PRS Output register LSB
BYTE            CSD_1_PRS_OUT_LSB_REG;
#pragma ioport  CSD_1_PRS_OUT_MSB_REG:  0x12a              // PRS Output register MSB
BYTE            CSD_1_PRS_OUT_MSB_REG;
#pragma ioport  CSD_1_PRS_SHIFT_LSB_REG:    0x024          // PRS Shift register LSB
BYTE            CSD_1_PRS_SHIFT_LSB_REG;
#pragma ioport  CSD_1_PRS_SHIFT_MSB_REG:    0x028          // PRS Shift register MSB
BYTE            CSD_1_PRS_SHIFT_MSB_REG;
#pragma ioport  CSD_1_PRS_POLY_LSB_REG: 0x025              // PRS Polynomial register LSB
BYTE            CSD_1_PRS_POLY_LSB_REG;
#pragma ioport  CSD_1_PRS_POLY_MSB_REG: 0x029              // PRS Polynomial register MSB
BYTE            CSD_1_PRS_POLY_MSB_REG;
#pragma ioport  CSD_1_PRS_SEED_LSB_REG: 0x026              // PRS Seed register LSB
BYTE            CSD_1_PRS_SEED_LSB_REG;
#pragma ioport  CSD_1_PRS_SEED_MSB_REG: 0x02a              // PRS Seed register MSB
BYTE            CSD_1_PRS_SEED_MSB_REG;
#pragma ioport  CSD_1_PRS_CONTROL_LSB_REG:  0x027          // PRS Control register LSB
BYTE            CSD_1_PRS_CONTROL_LSB_REG;
#pragma ioport  CSD_1_PRS_CONTROL_MSB_REG:  0x02b          // PRS Control register MSB
BYTE            CSD_1_PRS_CONTROL_MSB_REG;

#endif