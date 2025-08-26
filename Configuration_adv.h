/**
 * Marlin 2.1.x Configuration_adv.h (excerpt tailored)
 * Ender 3 Pro + 4.2.7 + Sprite Extruder Pro (Direct Drive)
 */

#pragma once

#define CONFIGURATION_ADV_H_VERSION 02010300

// Linear Advance
#define LIN_ADVANCE
#if ENABLED(LIN_ADVANCE)
  #define LIN_ADVANCE_K 0.00    // Calibrate and set via M900 K<value> then M500
  #define LA_DEBUG
#endif

// Junction Deviation (comment out to use Classic Jerk only)
//#define JUNCTION_DEVIATION_MM 0.02

// BabyStepping options (defaults are fine)
// Keep all defaults

// SD Card support
#define SD_CHECK_AND_RETRY

// StealthChop / SpreadCycle - (standalone drivers so not configurable here)

// Homing bump
#define HOMING_BUMP_MM      { 5, 5, 2 }

// Menu features
#define SDAUTOSORT

// Misc quality of life
#define ARC_SUPPORT
#define BEZIER_JERK_CONTROL

// Additional safety
#define PREVENT_COLD_EXTRUSION
#define EXTRUDE_MINTEMP 170
