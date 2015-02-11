#ifndef MG_HAL_IO_MAP_H
#define MG_HAL_IO_MAP_H
//=============================================================================
//
//       COPYRIGHT, 2008, Delphi Technologies, Inc. All Rights reserved
//
//       Delphi Confidential
//
// ============================================================================
// %name:            mg_hal_io_map.h %
//
// created_by:       zzrfyj %
//
// date_created:      %
//
// %derived_by:      tzwfxv %
//
// %date_modified:                  %
//
// %version:         11 %
//
//=============================================================================

#include "io.h"
#include "io_interface.h"
#include "mg_io_interface_override.h"

#define MG_MTSA_CONFIG_KP254_TRIG_DIAG \
         (   KP254_Set_Device_Index( 0,KP254_INDEX_0                 ) |\
           KP254_Set_Reset_Strategy( 0,KP254_RESET_FAILURES          ) |\
                  KP254_Set_Message( 0,KP254_MESSAGE_Trigger_DIAG) )

#define MG_MTSA_CONFIG_KP254_ACQ_ID \
         (   KP254_Set_Device_Index( 0,KP254_INDEX_0                 ) |\
           KP254_Set_Reset_Strategy( 0,KP254_RESET_FAILURES          ) |\
                  KP254_Set_Message( 0,KP254_MESSAGE_ACQ_ID) )

// analog input map
#define   MG_HIODEVICE_AN00                      (void *)&ESCHiVI
#define   MG_HIODEVICE_AN01                      (void *)&ESCLoVI
#define   MG_HIODEVICE_AN02                      (void *)&MAPSVI
#define   MG_HIODEVICE_AN03                      (void *)&ACPVI
#define   MG_HIODEVICE_AN04                      (void *)&EGRFBVI
#define   MG_HIODEVICE_AN05                      (void *)&TPS1VI
#define   MG_HIODEVICE_AN06                      (void *)&TPS2VI
#define   MG_HIODEVICE_AN07                      (void *)&PPS1VI
#define   MG_HIODEVICE_AN08                      NULL
#define   MG_HIODEVICE_AN09                      (void *)&PPS2VI 
#define   MG_HIODEVICE_AN10                      NULL
#define   MG_HIODEVICE_AN11                      (void *)&FLVI 
#define   MG_HIODEVICE_AN12                      (void *)&SPA1VI
#define   MG_HIODEVICE_AN13                      (void *)&O2AVI
#define   MG_HIODEVICE_AN14                      (void *)&O2BVI
#define   MG_HIODEVICE_AN15                      (void *)&CRUCTLVI
#define   MG_HIODEVICE_AN16                      (void *)&CLTVI 
#define   MG_HIODEVICE_AN17                      (void *)&MATVI
#define   MG_HIODEVICE_AN18                      (void *)&BSTATVI
#define   MG_HIODEVICE_AN19                      NULL
#define   MG_HIODEVICE_AN20                      NULL
#define   MG_HIODEVICE_AN21                      (void *)&FETVI
#define   MG_HIODEVICE_AN22                      (void *)&BRKPVI
#define   MG_HIODEVICE_AN23                      (void *)&RREPVI
#define   MG_HIODEVICE_AN24                      (void *)&BSTPVI
#define   MG_HIODEVICE_AN25                      (void *)&RRVI 
#define   MG_HIODEVICE_AN26                      NULL
#define   MG_HIODEVICE_AN27                      (void *)&PSREF1
#define   MG_HIODEVICE_AN28                      (void *)&PSREF2
#define   MG_HIODEVICE_AN29                      NULL
#define   MG_HIODEVICE_AN30                      (void *)&IGNVI
#define   MG_HIODEVICE_AN31                      (void *)&_58XRAWIN
#define   MG_HIODEVICE_AN32                      (void *)&PBATTVI
#define   MG_HIODEVICE_AN33                      (void *)&GND123VI
#define   MG_HIODEVICE_AN34                      (void *)&GND122VI 
#define   MG_HIODEVICE_AN35                      (void *)&GND121VI 
#define   MG_HIODEVICE_AN36                      NULL
#define   MG_HIODEVICE_AN37                      NULL
#define   MG_HIODEVICE_AN38                      (void *)&HWCFGVI
#define   MG_HIODEVICE_AN39                      (void *)&DETVCC2

// knock analog map
#define   MG_HIODEVICE_KNOCK_HIGH          (void *)&ESCHiVI
#define   MG_HIODEVICE_KNOCK_LOW           (void *)&ESCLoVI
// discrete out map
#define   MG_HIODEVICE_DO_DFB05                  (void *)&MTSA_VSEP_D_OUT_MPR
#define   MG_HIODEVICE_DO_DFB06                  (void *)&MTSA_VSEP_D_OUT_J1_09
#define   MG_HIODEVICE_DO_DFB07                  (void *)&MTSA_VSEP_D_OUT_J1_10
#define   MG_HIODEVICE_DO_DFB08                  (void *)&MTSA_VSEP_D_OUT_FAN2
//#define   MG_HIODEVICE_DO_DFB11                  (void *)&MG_MTSA_D_OUT_INJ4
//#define   MG_HIODEVICE_DO_DFB12                  (void *)&MG_MTSA_D_OUT_INJ2
#define   MG_HIODEVICE_DO_DFB13                  (void *)&MTSA_PWM_FUEL_CONSUMPTION
#define   MG_HIODEVICE_DO_DFB14                  (void *)&MTSA_VSEP_D_OUT_IMMO_REQ
#define   MG_HIODEVICE_DO_DFB15                  (void *)&MTSA_PWM_FAN
#define   MG_HIODEVICE_DO_DFB16                  (void *)&MTSA_PWM_CCP
#define   MG_HIODEVICE_DO_DFB17                  (void *)&MTSA_PWM_VVT1//&MTSA_PWM_SAIC
#define   MG_HIODEVICE_DO_DFB18                  (void *)&MTSA_PWM_VVT2//&MTSA_PWM_EGR
#define   MG_HIODEVICE_DO_DFB19                  (void *)&MTSA_VSEP_D_OUT_J1_16
#define   MG_HIODEVICE_DO_DFB20                  (void *)&MTSA_VSEP_D_OUT_VGIS2
#define   MG_HIODEVICE_DO_DFB21                  (void *)&MTSA_PWM_FRONT_O2HEATER
#define   MG_HIODEVICE_DO_DFB22                  (void *)&MTSA_PWM_REAR_O2HEATER
#define   MG_HIODEVICE_DO_DFB23                  (void *)&MTSA_PWM_CLTPUMPCTL
#define   MG_HIODEVICE_DO_DFB24                  (void *)&MTSA_VSEP_PWM_J1_13
#define   MG_HIODEVICE_DO_DFB25                  (void *)&MTSA_VSEP_D_OUT_MIL
#define   MG_HIODEVICE_DO_DFB26                  (void *)&MTSA_VSEP_D_OUT_SVS
#define   MG_HIODEVICE_DO_DFB27                  (void *)&MTSA_PWM_CLTGAUGE
#define   MG_HIODEVICE_DO_DFB28                  (void *)&MTSA_PWM_SMR
#define   MG_HIODEVICE_DO_DFB29                  (void *)&MTSA_PWM_TACH
#define   MG_HIODEVICE_DO_DFB30                  (void *)&MTSA_D_OUT_CRUISICTL


// EST - EST1:DFB01 EST2:DFB02 EST3:DFB03 EST4:DFB04
#define   MG_HIODEVICE_SPARK                     (void *)&MTSA_SPARK
#define   MG_HIODEVICE_DO_EST1                   (void *)&MG_MTSA_D_OUT_EST1
#define   MG_HIODEVICE_DO_ESTSYNC                (void *)&MG_MTSA_D_OUT_ESTSYNC

// INJ
#define   MG_HIODEVICE_DO_DFB09                  (void *)&MG_MTSA_D_OUT_INJ1
#define   MG_HIODEVICE_DO_DFB10                  (void *)&MG_MTSA_D_OUT_INJ2
#define   MG_HIODEVICE_DO_DFB11                  (void *)&MG_MTSA_D_OUT_INJ3
#define   MG_HIODEVICE_DO_DFB12                  (void *)&MG_MTSA_D_OUT_INJ4

// ETC
#define   MG_HIODEVICE_ETC_PWM                   (void *)&MTSA_PWM_ETCCTLPWM
#define   MG_HIODEVICE_ETCDIR                   (void *)&MTSA_D_OUT_ETC_DIR
#define   MG_HIODEVICE_ETCDIS                    (void *)&MTSA_D_OUT_ETC_DIS
#define   MG_HIODEVICE_ETCCS                     (void *)&MTSA_D_OUT_ETCCS

// RTI
#define   MG_HIODEVICE_RTI                       (void *)&MTSA_RTI_TIMER

// discrete in map
#define   MG_HIODEVICE_DI_MPIO1                  (void *)&MTSA_D_IN_J1_79
#define   MG_HIODEVICE_DI_MPIO2                  (void *)&MTSA_D_IN_J1_60
#define   MG_HIODEVICE_DI_MPIO3                  (void *)&MTSA_D_IN_J1_40
#define   MG_HIODEVICE_DI_GPIO139                (void *)&MTSA_D_IN_J1_35
#define   MG_HIODEVICE_DI_GPIO138                (void *)&MTSA_D_IN_J1_34
#define   MG_HIODEVICE_DI_GPIO224                (void *)&MTSA_D_IN_J1_33
#define   MG_HIODEVICE_DI_GPIO121                (void *)&MTSA_D_IN_J1_69
#define   MG_HIODEVICE_DI_GPIO122                (void *)&MTSA_D_IN_J1_45
#define   MG_HIODEVICE_DI_AN4                    (void *)&MTSA_D_IN_Analog_J1_55_LoActive
#define   MG_HIODEVICE_DI_AN12                   (void *)&MTSA_D_IN_Analog_J1_56_LoActive
#define   MG_HIODEVICE_DI_AN24                   (void *)&MTSA_D_IN_Analog_J1_57_LoActive
#define   MG_HIODEVICE_DI_AN3                    (void *)&MTSA_D_IN_Analog_J1_53_HighActive
#define   MG_HIODEVICE_DI_AN25                   (void *)&MTSA_D_IN_Analog_J1_59_HighActive
#define   MG_HIODEVICE_DI_AN23                   (void *)&MTSA_D_IN_Analog_J1_29_LoActive
#define   MG_HIODEVICE_DI_AN18                   (void *)&MTSA_D_IN_Analog_J1_72_LoActive
#define   MG_HIODEVICE_DI_AN15                   (void *)&MTSA_D_IN_Analog_J1_26_HighActive

// Frequency in map
#define   MG_HIODEVICE_FI_CAM1                   (void *)&MG_MTSA_IC_CAM1
#define   MG_HIODEVICE_FI_ABSPWM                 (void *)&MTSA_IC_WSSFI
#define   MG_HIODEVICE_FI_CAM2                   (void *)&MG_MTSA_IC_CAM2
#define   MG_HIODEVICE_FI_VSS                    (void *)&MG_MTSA_IC_VSS
#define   MG_HIODEVICE_FI_ENS                    (void *)&MG_MTSA_IC_ENS
#define   MG_HIODEVICE_FI_Alternator             (void *)&MTSA_IC_Alternator//zhoushenghui20131217
#define   MG_HIODEVICE_FI_58XPOS                 (void *)&MG_MTSA_IC_58XPOS

// Baro
#define	MG_HIODEVICE_BARO_PRESSURE		(void *)&BARO_Prussure_I
#define	MG_HIODEVICE_BARO_TEMPERATURE	(void *)&BARO_Temperature_I

#endif /* end of include guard: MG_HAL_IO_MAP_H */