// <SI/all.h> - includes all SI lib's header files (for convenience)
#pragma once

#include "datatypes.h" // <-- Datatypes such as SI::length or SI::time
#include "units.h"     // <-- Units such as SI::meters or SI::seconds
#include "literals.h"  // <-- Literals such as 100_m or 60_s
#include "constants.h" // <-- Constants such as SI::constant::speed_of_light
#include "formulas.h"  // <-- Formulas such as SI::formula::wavelength()
#include "conversion.h"// <-- Conversion functions such as SI::to_string()
#include "IO.h"        // <-- I/O functions such as SI::print()
#include "tests.h"     // <-- Unit tests at compile-time to verify everything
