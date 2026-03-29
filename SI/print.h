// <SI/print.h> - Simple print to console functions for SI datatypes, equivalents, and text (similar to C++23).
#pragma once
#include <iostream>
#include <SI/to_string.h>

namespace SI
{
	// print a single value
	template <typename T>
	void print(T value)
	{
		std::cout << to_string(value);
	}

	// print a single value + newline
	template <typename T>
	void println(T value)
	{
		std::cout << to_string(value) << std::endl;
	}

	// print two values
	template <typename T1, typename T2>
	void print(T1 v1, T2 v2)
	{
		std::cout << to_string(v1) << to_string(v2);
	}

	// print two values + newline
	template <typename T1, typename T2>
	void println(T1 v1, T2 v2)
	{
		std::cout << to_string(v1) << to_string(v2) << std::endl;
	}

	// print three values
	template <typename T1, typename T2, typename T3>
	void print(T1 v1, T2 v2, T3 v3)
	{
		std::cout << to_string(v1) << to_string(v2) << to_string(v3);
	}

	// print three values + newline
	template <typename T1, typename T2, typename T3>
	void println(T1 v1, T2 v2, T3 v3)
	{
		std::cout << to_string(v1) << to_string(v2) << to_string(v3) << std::endl;
	}

	// print four values
	template <typename T1, typename T2, typename T3, typename T4>
	void print(T1 v1, T2 v2, T3 v3, T4 v4)
	{
		std::cout << to_string(v1) << to_string(v2) << to_string(v3) << to_string(v4);
	}

	// print four values + newline
	template <typename T1, typename T2, typename T3, typename T4>
	void println(T1 v1, T2 v2, T3 v3, T4 v4)
	{
		std::cout << to_string(v1) << to_string(v2) << to_string(v3) << to_string(v4) << std::endl;
	}

	// print five values
	template <typename T1, typename T2, typename T3, typename T4, typename T5>
	void print(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5)
	{
		std::cout << to_string(v1) << to_string(v2) << to_string(v3) << to_string(v4) << to_string(v5);
	}

	// print five values + newline
	template <typename T1, typename T2, typename T3, typename T4, typename T5>
	void println(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5)
	{
		std::cout << to_string(v1) << to_string(v2) << to_string(v3) << to_string(v4) << to_string(v5) << std::endl;
	}

	// print six values
	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
	void print(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6)
	{
		std::cout << to_string(v1) << to_string(v2) << to_string(v3) << to_string(v4) << to_string(v5) << to_string(v6);
	}

	// print six values + newline
	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
	void println(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6)
	{
		std::cout << to_string(v1) << to_string(v2) << to_string(v3) << to_string(v4) << to_string(v5) << to_string(v6) << std::endl;
	}

	// print seven values
	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
	void print(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6, T7 v7)
	{
		std::cout << to_string(v1) << to_string(v2) << to_string(v3) << to_string(v4) << to_string(v5) << to_string(v6) << to_string(v7);
	}

	// print seven values + newline
	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
	void println(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6, T7 v7)
	{
		std::cout << to_string(v1) << to_string(v2) << to_string(v3) << to_string(v4) << to_string(v5) << to_string(v6) << to_string(v7) << std::endl;
	}

} // namespace SI

// References
// ----------
// 1. https://en.wikipedia.org/wiki/International_System_of_Units
