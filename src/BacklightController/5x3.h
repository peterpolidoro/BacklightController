// ----------------------------------------------------------------------------
// 5x3.h
//
//
// Authors:
// Peter Polidoro peterpolidoro@gmail.com
// ----------------------------------------------------------------------------
#ifndef BACKLIGHT_CONTROLLER_5X3_CONSTANTS_H
#define BACKLIGHT_CONTROLLER_5X3_CONSTANTS_H
#include "Constants.h"


#if defined(__MK64FX512__)

namespace backlight_controller
{
namespace constants
{
//MAX values must be >= 1, >= created/copied count, < RAM limit
enum{PIN_COUNT_MAX=1};

enum {CHANNEL_COUNT=16};
enum {IR_LIGHT_CHANNEL_COUNT=4};
enum {VISIBLE_LIGHT_CHANNEL_COUNT=4};
enum {HIGH_POWER_CHANNEL_COUNT=4};
enum {LOW_POWER_CHANNEL_COUNT=4};

extern const size_t channel_pins[CHANNEL_COUNT];
extern const size_t ir_light_channels[IR_LIGHT_CHANNEL_COUNT];
extern const size_t visible_light_channels[VISIBLE_LIGHT_CHANNEL_COUNT];
extern const size_t high_power_channels[HIGH_POWER_CHANNEL_COUNT];
extern const size_t low_power_channels[LOW_POWER_CHANNEL_COUNT];


// Pins

// Units

// Properties
// Property values must be long, double, bool, long[], double[], bool[], char[], ConstantString *, (ConstantString *)[]

// Parameters

// Functions

// Callbacks

// Errors
}
}
#endif
#endif
