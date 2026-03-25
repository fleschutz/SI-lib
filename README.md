[![CMake on multiple platforms](https://github.com/fleschutz/Math/actions/workflows/cmake-multi-platform.yml/badge.svg)](https://github.com/fleschutz/Math/actions/workflows/cmake-multi-platform.yml)

Type-safe SI Library in C++
===========================

Units library to apply math with physical units correct, convenient and with high precision. This lib provides:

- [x] **Strong type-safety** for datatypes, constants, formulas, and literals (can't add a mass to a length).
- [x] **High precision:** SI base units internally, 64-bit floating points, and CODATA 2022 constants.
- [x] **Blazing fast** due to no runtime overhead, it just compiles to simple doubles.
- [x] **Supports** convenient literals (e.g. 24_h) and SI units, Imperial units, Astronomical units, and more.
- [x] **Modern C++ 17 lib**: header only, no dependencies, everything in namespace 'SI' only.
- [x] **Cross-platform** support for Linux (clang/gcc, x86/arm) and Windows (VS2017-VS2026).

🧱 Building Blocks
------------------
1. **Datatypes** such as SI::length or SI::time in [SI/datatypes.h](SI/datatypes.h)
2. **Units** such as SI::meters or SI::seconds in [SI/units.h](SI/units.h)
3. **Literals** such as 100_m or 60_s in [SI/literals.h](SI/literals.h)
4. **Constants** such as SI::constant::speed_of_light in [SI/constants.h](SI/constants.h)
5. **Formulas** such as SI::formula::wavelength() in [SI/formulas.h](SI/formulas.h)
6. **Unit tests** at compile-time in [SI/tests.h](SI/tests.h) and continuously by [GitHub Actions](https://github.com/fleschutz/libSI/actions)
7. **Basic datasets** such as chemical elements in 📂[datasets](datasets/)

🔎 Example Usage
-----------------
```cpp
#include <SI/all.h>
using namespace SI;

int main() {	
	mass m = 1_g;
	velocity c = constant::speed_of_light;
	energy E = m * c * c;
    println("The potential energy of just 1g mass is: ", E);
}
```
Executing: `cmake . && make && ./examples` writes the following output:
```
The potential energy of just 1g is: 89.88TJ
```
Please find 42 more examples in: [examples.cpp](examples.cpp)

💡 FAQ
-------
* **What is SI?** It's the [International System of Units](https://en.wikipedia.org/wiki/International_System_of_Units) which is made up of 7 base units that define the 22 derived units.
* **What is CODATA?** It's the [Committee On Data](https://codata.org) of the International Science Council (ISC).
* **What are use-cases for libSI?** Applied math such as simulations, simulators, astronomy/physics calculations, games, etc.
* **What are numbers like 1.2e23?** It's the scientific notation in C/C++ for 1.2 x 10²³, the letter 'e' or 'E' represents the 'times 10 to the power of' part.
* **How to import/export numbers?** Import `double x = 42;` with `length dist = x * 1_m;` and export with `double y = dist / 1_m;`.
* **How to import/export as text?** Import with `from_string("42m", dist)` and export with `std::string str = to_string(dist);`
* **Where are the list of references?** References are always listed at the end of each source code file.
* **Where are libSI's files and folders?** Here is the project structure:
```
├📄CMakeLists.txt 
├📄examples.cpp 
├📄LICENSE 
├📄README.md
├📂SI
|  ├📄all.h 
|  ├📄constants.h
|  ├📄datatypes.h 
|  ├📄formulas.h
|  ├📄internal.h 
|  ├📄IO.h
|  ├📄literals.h 
|  ├📄tests.h
|  ├📄units.h
├📂datasets
   ├📄all.h
   ├📄chemical_elements.csv 
   ├📄chemical_elements.h
   ...
   (59 files, 3 folders, 19MB total)
```

🤝 Contributing
---------------
* Contributions, suggestions, and improvements are welcome!
* Open an Issue if you encounter bugs or have feature ideas.
* Create a Pull Request if you'd like to improve something.


📜 License & Copyright
-----------------------
This open source project is licensed under the CC0-1.0 license. All trademarks are the property of their respective owners.
