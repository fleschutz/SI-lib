// <SI/to_equivalent.h> - convert a single SI value into an equivalent string, e.g. to_equivalent(100_kmh); 
#pragma once
#include <string>
#include <SI/literals.h>

namespace SI
{
	/// Returns the length in Imperial units.
	std::string to_equivalent(length d)
	{
		if (d <= -1_mi || d >= 1_mi)
			return _join(d / 1_mi, "mi");
		if (d <= -1_yd || d >= 1_yd)
			return _join(d / 1_yd, "yd");
		if (d <= -1_ft || d >= 1_ft)
			return _join(d / 1_ft, "ft");
		return _join(d / 1_in, "in");
	}

	/// Returns the velocity in Imperial units.
	std::string to_equivalent(velocity V)
	{
		return _join(V / 1_mph, "mph");
	}

	/// Returns the temperature in Fahrenheit.
	std::string to_equivalent(temperature T)
	{
		return _join(fahrenheit(T), "°F");
	}

	/// Returns the power intensity in Imperial units.
	std::string to_equivalent(power_intensity I)
	{
		return _join(10.0 * std::log10((I / 1_W_per_m²) / 1e-12), "dB");
	}

	/// Returns the energy in Hiroshima bombs or kg TNT.
	std::string to_equivalent(energy E)
	{
		const auto Hiroshima_bomb = 62_TJ; // (explosion energy of the Hiroshima bomb)
		if (E >= Hiroshima_bomb)
			return _join(E / Hiroshima_bomb, " Hiroshima bombs");

		const auto one_kg_TNT = 4.184_MJ; // (explosion energy of 1kg Trinitrotoluol)
		mass kgTNT = kilograms(E / one_kg_TNT);
		return to_string(kgTNT) + " TNT";
	}

} // namespace SI

// References
// ----------
// 1. https://en.wikipedia.org/wiki/International_System_of_Units
