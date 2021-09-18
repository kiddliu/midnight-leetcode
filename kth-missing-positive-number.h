#ifndef KTH_MISSING_POSITIVE_NUMBER_H_
#define KTH_MISSING_POSITIVE_NUMBER_H_

#include <vector>

namespace solution {

int findKthPositive(std::vector<int>& arr, int begin, int end, int k) {
  auto mid = (begin + end) / 2;
  auto slots = arr[mid - 1] - mid;

  if (k > slots) {
    return end - 1 > mid ? findKthPositive(arr, mid, end, k)
                         : arr[mid - 1] + k - slots;
  } else {
    return begin != mid ? findKthPositive(arr, begin, mid, k) : k;
  }
}

int findKthPositive(std::vector<int>& arr, int k) {
  // binary search
  // Runtime: 4 ms, faster than 82.36% of C++ online submissions for Kth Missing Positive Number.
  // Memory Usage: 9.5 MB, less than 94.91% of C++ online submissions for Kth Missing Positive Number.
  //
  int size = arr.size(), last = arr.back();

  if (size == last) return last + k;
  auto slots{last - size};
  if (slots < k) return last + k - slots;
  
  return findKthPositive(arr, 1, size, k);
}

}

#endif  // KTH_MISSING_POSITIVE_NUMBER_H_
