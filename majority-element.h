#ifndef MAJOR_ELEMENT_H_
#define MAJOR_ELEMENT_H_

#include <vector>

namespace solution {

int majorityElement(std::vector<int>& nums) {
  // the majority alway trimph in the end
  // so make the guess and mark it +1 and everything else -1
  // Runtime: 12 ms, faster than 95.61% of C++ online submissions for Majority Element.
  // Memory Usage: 19.7 MB, less than 33.40% of C++ online submissions for Majority Element.
  //
  int* major = nullptr;
  int count = 0;

  for (auto& i : nums) {
    if (count == 0) {
      major = &i;
    }

    count += (*major == i ? 1 : -1);
  }
  return *major;
}


}


#endif  // MAJOR_ELEMENT_H_
