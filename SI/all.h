// <SI/all.h> - includes all SI lib's header files (for convenience)
#pragma once

#include "datatypes.h"    // <-- Datatypes such as SI::length or SI::time
#include "units.h"        // <-- Units such as SI::meters or SI::seconds
#include "literals.h"     // <-- Literals such as 100_m or 60_s
#include "constants.h"    // <-- Constants such as SI::constant::speed_of_light
#include "formulas.h"     // <-- Formulas such as SI::formula::wavelength()
#include "from_string.h"  // <-- Convert from string functions 
#include "to_string.h"    // <-- Convert to string functions
#include "to_equivalent.h"// <-- Convert to equivalent functions
#include "print.h"        // <-- Simple print to console functions 
#include "unit_tests.h"   // <-- Unit tests at compile-time to verify everything
