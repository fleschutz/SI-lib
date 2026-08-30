// This header file includes all other header files (very convenient to use).
// USAGE: #include <SI/all.h>
#pragma once

#include "datatypes.h"    // <-- datatypes such as SI::length
#include "units.h"        // <-- units such as SI::meters
#include "literals.h"     // <-- literals such as 100_m
#include "constants.h"    // <-- constants such as SI::constant::speed_of_light
#include "formulas.h"     // <-- formulas such as SI::formula::wavelength()
#include "conversions.h"  // <-- conversion functions such as SI::to_string()
#include "print.h"        // <-- simple print to console functions 
#include "unit_tests.h"   // <-- unit tests at compile-time to verify everything
