#ifndef LRU_CACHE_H_
#define LRU_CACHE_H_

#include <algorithm>
#include <list>
#include <unordered_map>

namespace solution {

class LRUCache {
 public:
  LRUCache(int capacity) : capacity_{capacity} {
    // with list...
    // Runtime: 591 ms, faster than 51.67% of C++ online submissions for LRU Cache.
    // Memory Usage: 165 MB, less than 85.81% of C++ online submissions for LRU Cache.
    //
  }

  int get(int key) {
    if (map_.count(key)) {
      list_.splice(list_.begin(), list_, map_[key]);
      return map_[key]->second;
    }
    return -1;
  }

  void put(int key, int value) {
    if (map_.count(key)) {
      list_.splice(list_.begin(), list_, map_[key]);
      map_[key]->second = value;
      return;
    }

    if (map_.size() == capacity_) {
      map_.erase(list_.back().first);
      list_.pop_back();
    }
    list_.emplace_front(key, value);
    map_[key] = list_.begin();
  }

 private:
  int capacity_;
  std::unordered_map<int, std::list<std::pair<int, int>>::iterator> map_;
  std::list<std::pair<int, int>> list_;
};

}  // namespace solution

#endif  // LRU_CACHE_H_
