/**
 * Marlin 2.1.x Configuration.h (excerpt tailored)
 * Ender 3 Pro + Creality 4.2.7 + Sprite Extruder Pro (Direct Drive)
 * LCD: CR10_STOCKDISPLAY (12864)
 * Features: Mesh Bed Leveling (3x3), Babystepping, Linear Advance (K set via M900), EEPROM
 */

#pragma once

#define CONFIGURATION_H_VERSION 02010300

// SERIAL
#define BAUDRATE 115200
#define SERIAL_PORT 1

// MOTHERBOARD
#define MOTHERBOARD BOARD_CREALITY_V427
#define CUSTOM_MACHINE_NAME "E3Pro SpritePro 4.2.7"

// Bed size / axes
#define X_BED_SIZE 220
#define Y_BED_SIZE 220
#define Z_MAX_POS 250

// Endstops
#define USE_XMIN_PLUG
#define USE_YMIN_PLUG
#define USE_ZMIN_PLUG
#define X_MIN_ENDSTOP_INVERTING false
#define Y_MIN_ENDSTOP_INVERTING false
#define Z_MIN_ENDSTOP_INVERTING false

// Steppers per unit
#define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, 400, 424.9 }  // X,Y,Z,E (Sprite Pro E-steps)

// Temperatures
#define TEMP_SENSOR_0 1        // Creality 100K NTC
#define TEMP_SENSOR_BED 1
#define HEATER_0_MAXTEMP 300
#define BED_MAXTEMP 120

// PID
#define PIDTEMP
#define BANG_MAX 255
#define PID_MAX 255
#define PIDTEMPBED

// Thermal protection
#define THERMAL_PROTECTION_HOTENDS
#define THERMAL_PROTECTION_BED

// Power supply
#define PSU_DEFAULT_OFF false

// Mechanical settings
#define INVERT_X_DIR false
#define INVERT_Y_DIR false
#define INVERT_Z_DIR true

#define X_DRIVER_TYPE  TMC2208_STANDALONE
#define Y_DRIVER_TYPE  TMC2208_STANDALONE
#define Z_DRIVER_TYPE  TMC2208_STANDALONE
#define E0_DRIVER_TYPE TMC2208_STANDALONE

#define DEFAULT_MAX_FEEDRATE          { 500, 500, 5, 50 }
#define DEFAULT_MAX_ACCELERATION      { 500, 500, 100, 1000 }
#define DEFAULT_ACCELERATION          500
#define DEFAULT_RETRACT_ACCELERATION  1000
#define DEFAULT_TRAVEL_ACCELERATION   500

#define CLASSIC_JERK
#define DEFAULT_XJERK 8.0
#define DEFAULT_YJERK 8.0
#define DEFAULT_ZJERK 0.4
#define DEFAULT_EJERK 5.0

// LCD
#define CR10_STOCKDISPLAY

// EEPROM
#define EEPROM_SETTINGS
#define EEPROM_CHITCHAT

// Bed leveling
#define MESH_BED_LEVELING
#if ENABLED(MESH_BED_LEVELING)
  #define GRID_MAX_POINTS_X 3
  #define GRID_MAX_POINTS_Y 3
  #define UBL_MESH_WIZARD  // optional helper in menu
#endif

#define LCD_BED_LEVELING
#define LEVEL_BED_CORNERS
#define Z_SAFE_HOMING
#define RESTORE_LEVELING_AFTER_G28
#define ENABLE_LEVELING_FADE_HEIGHT

// Babystepping
#define BABYSTEPPING
#if ENABLED(BABYSTEPPING)
  #define BABYSTEP_ZPROBE_OFFSET
  #define DOUBLECLICK_FOR_Z_BABYSTEPPING
  #define BABYSTEP_MULTIPLICATOR_Z  1
#endif

// Nozzle park
#define NOZZLE_PARK_FEATURE

// Filament change
#define ADVANCED_PAUSE_FEATURE

// SD card
#define SDSUPPORT

// Preheat presets
#define PREHEAT_1_LABEL       "PLA"
#define PREHEAT_1_TEMP_HOTEND 200
#define PREHEAT_1_TEMP_BED    60
#define PREHEAT_1_FAN_SPEED   0

#define PREHEAT_2_LABEL       "PETG"
#define PREHEAT_2_TEMP_HOTEND 240
#define PREHEAT_2_TEMP_BED    80
#define PREHEAT_2_FAN_SPEED   0
