#ifndef SEARCH_SUGGESTIONS_SYSTEM_H_
#define SEARCH_SUGGESTIONS_SYSTEM_H_

#include <algorithm>
#include <string>
#include <vector>

#include "trie.h"

namespace solution {

// https://gcc.gnu.org/onlinedocs/libstdc++/ext/pb_ds/trie_based_containers.html
// 
//std::vector<std::vector<std::string>> suggestedProducts(
//    std::vector<std::string>& products, std::string searchWord) {
//  trie trie;
//  for (auto& product : products) {
//    trie.insert(product);
//  }
//
//  std::vector<std::vector<std::string>> result;
//
//  for (auto i{1}; i < searchWord.size(); ++i) {
//    result.push_back(trie.search(searchWord.substr(0, i)));
//  }
//
//  return result;
//}

std::vector<std::vector<std::string>> suggestedProducts(
    std::vector<std::string>& products, std::string searchWord) {
  // binary search
  // Runtime: 55 ms, faster than 88.28% of C++ online submissions for Search Suggestions System.
  // Memory Usage: 26.5 MB, less than 78.13% of C++ online submissions for Search Suggestions System.
  //
  auto begin{products.begin()}, end{products.end()};
  std::sort(begin, end);

  std::vector<std::vector<std::string>> result;
  std::string search;

  for (auto& c : searchWord) {
    search += c;

    std::vector<std::string> v;
    begin = std::lower_bound(begin, end, search);
    for (auto i{0}; i < 3 && begin + i != products.end(); ++i) {
      auto& s = *(begin + i);
      if (s.find(search) == std::string::npos) break;

      v.push_back(s);
    }

    result.push_back(v);
  }

  return result;
}

}  // namespace solution

#endif  // !SEARCH_SUGGESTIONS_SYSTEM_H_
