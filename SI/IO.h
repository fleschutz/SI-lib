// <SI/IO.h> - I/O functions to print single and multiple SI datatypes, equivalents, and text.
#pragma once
#include <iostream>
#include <SI/conversion.h>

namespace SI
{
	// the internal print function
	void _print(const std::string& text)
	{
		std::cout << text;
	}

	// print a single SI value
	template <typename T>
	void print(T value)
	{
		_print(to_string(value));
	}

	// print 2 SI values
	template <typename T1, typename T2>
	void print(T1 v1, T2 v2)
	{
		_print(to_string(v1) + ", " + to_string(v2));
	}

	// print 3 SI values
	template <typename T1, typename T2, typename T3>
	void print(T1 v1, T2 v2, T3 v3)
	{
		_print(to_string(v1) + ", " + to_string(v2) + ", " + to_string(v3));
	}

	// print 4 SI values
	template <typename T1, typename T2, typename T3, typename T4>
	void print(T1 v1, T2 v2, T3 v3, T4 v4)
	{
		_print(to_string(v1) + ", " + to_string(v2) + ", " + to_string(v3) + ", " + to_string(v4));
	}

	// print 5 SI values
	template <typename T1, typename T2, typename T3, typename T4, typename T5>
	void print(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5)
	{
		_print(to_string(v1) + ", " + to_string(v2) + ", " + to_string(v3) + ", " + to_string(v4) + ", " + to_string(v5));
	}

} // namespace SI

// References
// ----------
// 1. https://en.wikipedia.org/wiki/International_System_of_Units
