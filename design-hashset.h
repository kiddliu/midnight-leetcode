#ifndef DESIGN_HASHSET_H_
#define DESIGN_HASHSET_H_

#include <functional>
#include <vector>

namespace solution {

// naive
// Runtime: 84 ms, faster than 68.68% of C++ online submissions for Design HashSet.
// Memory Usage: 39.5 MB, less than 95.21% of C++ online submissions for Design HashSet.
//
class MyHashSet {
 public:
  /** Initialize your data structure here. */
  MyHashSet() {
    data_ = std::vector<std::vector<int>>{16, std::vector<int>{}};
  }

  void add(int key) {
    auto& v = data_[std::hash<int>{}(key) % 16];
    if (std::find(v.cbegin(), v.cend(), key) == v.cend()) {
      v.push_back(key);
    }
  }

  void remove(int key) {
    auto& v = data_[std::hash<int>{}(key) % 16];
    auto p = std::find(v.cbegin(), v.cend(), key);
    if (p != v.cend()) {
      v.erase(p);
    }
  }

  /** Returns true if this set contains the specified element */
  bool contains(int key) {
    auto& v = data_[std::hash<int>{}(key) % 16];
    return std::find(v.cbegin(), v.cend(), key) != v.cend();
  }

 private:
  std::vector<std::vector<int>> data_;
};

}

#endif  // DESIGN_HASHSET_H_
