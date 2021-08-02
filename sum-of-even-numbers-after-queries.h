#ifndef SUM_OF_EVEN_NUMBERS_AFTER_QUERIES_H_
#define SUM_OF_EVEN_NUMBERS_AFTER_QUERIES_H_

#include <vector>

namespace solution {

std::vector<int> sumEvenAfterQueries(std::vector<int>& nums,
                                     std::vector<std::vector<int>>& queries) {
  // direct
  // Runtime: 96 ms, faster than 82.10% of C++ online submissions for Sum of Even Numbers After Queries.
  // Memory Usage: 45.4 MB, less than 91.20% of C++ online submissions for Sum of Even Numbers After Queries.
  //
  std::vector<int> v;
  v.reserve(queries.size());

  auto sum{0};
  for (const auto& q : nums) {
    if (q % 2 == 0) sum += q;
  }

  for (const auto& q : queries) {
    if (nums[q[1]] % 2 == 0) sum -= nums[q[1]];
    nums[q[1]] += q[0];
    if (nums[q[1]] % 2 == 0) sum += nums[q[1]];

    v.push_back(sum);
  }

  return v;
}

}

#endif  // SUM_OF_EVEN_NUMBERS_AFTER_QUERIES_H_
