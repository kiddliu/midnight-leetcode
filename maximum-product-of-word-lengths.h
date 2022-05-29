#ifndef MAXIMUM_PRODUCT_OF_WORD_LENGTHS_H_
#define MAXIMUM_PRODUCT_OF_WORD_LENGTHS_H_

#include <algorithm>
#include <bitset>
#include <iterator>
#include <string>
#include <vector>

namespace solution {

int maxProduct(std::vector<std::string>& words) {
  // with bitset...
  // Runtime: 54 ms, faster than 78.87% of C++ online submissions for Maximum Product of Word Lengths.
  // Memory Usage: 16.8 MB, less than 39.62% of C++ online submissions for Maximum Product of Word Lengths.
  //
  std::vector<std::pair<int, std::bitset<26>>> transformed;

  std::transform(words.cbegin(), words.cend(), std::back_inserter(transformed),
                 [](const std::string& word) {
                   std::bitset<26> result;

                   for (auto& c : word) {
                     result.set(c - 'a');
                   }

                   return std::pair<int, std::bitset<26>>{word.length(), result};
                 });

  int size = words.size(), result{0};
  for (auto i{0}; i < size; ++i) {
    for (auto j{i + 1}; j < size; ++j) {
      auto& [length_i, bitset_i] = transformed[i];
      auto& [length_j, bitset_j] = transformed[j];

      if ((bitset_i & bitset_j).none()) {
        result = std::max(result, length_i * length_j);
      }
    }
  }
  return result;
}

}  // namespace solution

#endif  // !MAXIMUM_PRODUCT_OF_WORD_LENGTHS_H_
