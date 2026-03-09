// <SI/to_equivalent.h> - convert SI datatypes to equivalents, e.g. to_equivalent(100_kmh); 
#pragma once
#include <string>
#include <SI/literals.h>

namespace SI
{
	std::string to_equivalent(length L)
	{
		return "(" + to_string(L / 1_ft) + "ft)";
	}

	std::string to_equivalent(velocity V)
	{
		return "(" + to_string(V / 1_mph) + "MPH)";
	}

	std::string to_equivalent(power_intensity I)
	{
		dimensionless decibel = 10.0 * std::log10((I / 1_W_per_m²) / 1e-12);
		return "(" + to_string(decibel) + "dB)";
	}

	std::string to_equivalent(energy E)
	{
		const auto one_kg_TNT = 4.184_MJ; // (explosion energy of 1kg Trinitrotoluol))
		const auto Hiroshima_bomb = 62_TJ; // (explosion energy of the Hiroshima bomb)
		mass TNT = kilograms(E / one_kg_TNT);
		dimensionless factor = E / Hiroshima_bomb;

		return "(" + to_string(TNT) + " TNT, " + to_string(factor) + " Hiroshima bombs)";
	}
} // namespace SI

// References
// ----------
// 1. https://en.wikipedia.org/wiki/International_System_of_Units
