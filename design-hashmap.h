#ifndef DESIGN_HASHMAP_H_
#define DESIGN_HASHMAP_H_

#include <functional>
#include <vector>

namespace solution {

class MyHashMap {
 public:
  /** Initialize your data structure here. */
  MyHashMap(int capacity = 16)
      : size_(0),
        capacity_(capacity),
        k_(std::vector<int>(capacity_, -1)),
        v_(std::vector<int>(capacity_, -1)) {}

  /** value will always be non-negative. */
  void put(int key, int value) {
    if (size_ == capacity_) rehash(capacity_ * 2);

    auto i = find(key);
    k_[i] = key;
    v_[i] = value;
    ++size_;
  }

  /** Returns the value to which the specified key is mapped, or -1 if this map
   * contains no mapping for the key */
  int get(int key) {
    auto i = find(key);
    if (i == -1) return -1;
    return k_[i] != -1 ? v_[i] : -1;
  }

  /** Removes the mapping of the specified value key if this map contains a
   * mapping for the key */
  void remove(int key) {
    auto i = find(key);
    if (k_[i] != -1) {
      k_[i] = -1;
      v_[i] = -1;
      --size_;
    }
  }

 private:
  size_t size_;
  size_t capacity_;
  std::vector<int> k_;
  std::vector<int> v_;

  void rehash(size_t new_capacity) {
    k_.insert(k_.end(), capacity_, -1);
    v_.insert(v_.end(), capacity_, -1);
    auto old_capacity = capacity_;
    capacity_ = new_capacity;
    
    for (size_t i = 0; i < old_capacity; ++i) {
      if (k_[i] != -1) {
        auto j = find(k_[i]);
        if (i != j) {
          std::swap(k_[i], k_[j]);
          std::swap(v_[i], v_[j]);
        }
      }
    }    
  }

  int find(int key) {
    auto o = std::hash<int>{}(key) % capacity_, j = o;
    while (k_[j] != -1 && k_[j] != key) {
      ++j;
      if (j == capacity_) j -= capacity_;
      if (j == o) return -1;
    }
    return j;
  }
};

}  // namespace solution

#endif  // DESIGN_HASHMAP_H_
