#ifndef PEEKING_ITERATOR
#define PEEKING_ITERATOR

#include <vector>

#include "iterator.h"

/// <summary>
/// with copy constructor
/// Runtime: 3 ms, faster than 79.17% of C++ online submissions for Peeking Iterator.
/// Memory Usage: 7.9 MB, less than 6.21% of C++ online submissions for Peeking Iterator.
/// </summary>
class PeekingIterator : public Iterator {
 public:
  PeekingIterator(const std::vector<int>& nums) : Iterator(nums) {}

  int peek() { return Iterator(*this).next(); }
};

#endif  // PEEKING_ITERATOR
