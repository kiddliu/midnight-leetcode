#ifndef MAXIMUM_PRODUCT_SUBARRAY_H_
#define MAXIMUM_PRODUCT_SUBARRAY_H_

#include <algorithm>
#include <numeric>
#include <vector>

namespace solution {

//int maxProduct(std::vector<int>::const_iterator begin,
//               std::vector<int>::const_iterator end) {
//  if (begin + 1 == end) return *begin;
//  auto count =
//      std::count_if(begin, end, [](const int& first) { return first < 0; });
//
//  auto first =
//      std::find_if(begin, end, [](const int& first) { return first < 0; });
//  if (count == 1) {
//    return std::max(std::accumulate(begin, first, 1, std::multiplies<int>()),
//                    std::accumulate(first + 1, end, 1, std::multiplies<int>()));
//  } else if (count % 2) {
//    auto last = std::find_if(std::make_reverse_iterator(end),
//                             std::make_reverse_iterator(begin),
//                             [](const int& first) { return first < 0; });
//    return std::max(
//        std::accumulate(first, end, 1, std::multiplies<int>()),
//        std::accumulate(begin, last.base(), 1, std::multiplies<int>()));
//  } else {
//    return std::accumulate(begin, end, 1, std::multiplies<int>());
//  }
//}
//
//int maxProduct(std::vector<int>& nums) {
//  auto result{0};
//  auto start = nums.cbegin(), stop = start, end = nums.cend();
//
//  while (true) {
//    stop = std::find(start, end, 0);
//    result = std::max(result, maxProduct(start, stop));
//
//    if (stop != end) {
//      start =
//          std::find_if(stop, end, [](const int& first) { return first != 0; });
//    } else {
//      break;
//    }
//  }
//
//  return result;
//}

int maxProduct(std::vector<int>& nums) {
  // the solution makes me feel like a fool
  // Runtime: 4 ms, faster than 81.49% of C++ online submissions for Maximum Product Subarray.
  // Memory Usage: 11.8 MB, less than 52.62% of C++ online submissions for Maximum Product Subarray.
  //
  int prefix{0}, suffix{0}, result{nums[0]}, size = nums.size();
  for (auto i = 0; i < size; ++i) {
    prefix = (prefix ? prefix : 1) * nums[i];
    suffix = (suffix ? suffix : 1) * nums[nums.size() - 1 - i];
    result = std::max(result, std::max(prefix, suffix));
  }
  return result;
}

}  // namespace solution

#endif  // MAXIMUM_PRODUCT_SUBARRAY_H_
