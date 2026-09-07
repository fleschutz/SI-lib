// USAGE:       #include <SI/all.h>
// DESCRIPTION: Header file to include all header files for convenience.

#pragma once

#include "datatypes.h"    // <-- datatypes such as SI::length
#include "units.h"        // <-- units such as SI::meters
#include "literals.h"     // <-- literals such as 100_m
#include "constants.h"    // <-- constants such as SI::constant::speed_of_light
#include "formulas.h"     // <-- formula functions such as SI::formula::wavelength()
#include "conversions.h"  // <-- conversion functions such as SI::to_string()
#include "print.h"        // <-- simple print to console functions 
#include "tests.h"        // <-- unit tests at compile-time to verify everything
