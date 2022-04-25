#ifndef ITERATOR_H_
#define ITERATOR_H_

#include <vector>

class Iterator {
  struct Data;
  Data* data;

 public:
  Iterator(const std::vector<int>& nums);
  Iterator(const Iterator& iter);

  // Returns the next element in the iteration.
  int next();

  // Returns true if the iteration has more elements.
  bool hasNext() const;
};

#endif  // ITERATOR_H_
