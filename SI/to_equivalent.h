// <SI/to_equivalent.h> - convert a single SI value into an equivalent string, e.g. to_equivalent(100_kmh); 
#pragma once
#include <string>
#include <SI/literals.h>

namespace SI
{
	std::string to_equivalent(length L)
	{
		return _join(L / 1_ft, "ft");
	}

	std::string to_equivalent(velocity V)
	{
		return _join(V / 1_mph, "MPH");
	}

	std::string to_equivalent(power_intensity I)
	{
		return _join(10.0 * std::log10((I / 1_W_per_m²) / 1e-12), "dB");
	}

	std::string to_equivalent(energy E)
	{
		const auto Hiroshima_bomb = 62_TJ; // (explosion energy of the Hiroshima bomb)
		if (E >= Hiroshima_bomb)
			return _join(E / Hiroshima_bomb, "Hiroshima bombs");

		const auto one_kg_TNT = 4.184_MJ; // (explosion energy of 1kg Trinitrotoluol))
		mass kgTNT = kilograms(E / one_kg_TNT);
		return to_string(kgTNT) + " TNT";
	}
} // namespace SI

// References
// ----------
// 1. https://en.wikipedia.org/wiki/International_System_of_Units
