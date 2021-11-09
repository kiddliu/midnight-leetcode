#ifndef UNIQUE_BINARY_SEARCH_TREES_H_
#define UNIQUE_BINARY_SEARCH_TREES_H_

#include <array>

namespace solution {

	unsigned nChoosek(unsigned n, unsigned k)
	{
		if (k > n) return 0;
		if (k * 2 > n) k = n - k;
		if (k == 0) return 1;

		int result = n;
		for (int i = 2; i <= k; ++i) {
			result *= (n - i + 1);
			result /= i;
		}
		return result;
	}

	int permutations(int slots, int items) {
		if (items == 0) return 1;
		if (items == 1) return slots;

		auto result{ 0 };
		for (auto i = 1; i <= items; ++i)
		{
			result += nChoosek(slots, i) * permutations(2 * i, items - i);
		}
		return result;
	}

	int numTrees(int n) {
		// it's catalan number, I was actually counting based on my observation
		// the number is not obvious to me...
		// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Unique Binary Search Trees.
		// Memory Usage : 5.9 MB, less than 64.22 % of C++ online submissions for Unique Binary Search Trees.
		//
		std::array<int, 20> results{ 0, 1, 2, 5 };

		if (n < 4) return results[n];
		auto current{ 4 };

		while (current <= n) {
			results[current] = results[current - 1] * 2 + permutations(4, current - 3);
			++current;
		}
		return results[n];
	}

}  // namespace solution

#endif  // UNIQUE_BINARY_SEARCH_TREES_H_
