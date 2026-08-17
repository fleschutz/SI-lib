// This header file includes all other header files (very convenient to use).
// USAGE: #include <SI/all.h>
#pragma once

#include "datatypes.h"    // <-- datatypes such as SI::length or SI::time
#include "units.h"        // <-- units such as SI::meters or SI::seconds
#include "literals.h"     // <-- literals such as 100_m or 60_s
#include "constants.h"    // <-- constants such as SI::constant::speed_of_light
#include "formulas.h"     // <-- formulas such as SI::formula::wavelength()
#include "from_string.h"  // <-- convert from string functions 
#include "to_string.h"    // <-- convert to string functions
#include "to_equivalent.h"// <-- convert to equivalent functions
#include "print.h"        // <-- simple print to console functions 
#include "unit_tests.h"   // <-- unit tests at compile-time to verify everything
