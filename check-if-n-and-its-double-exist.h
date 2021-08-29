#ifndef CHECK_IF_N_AND_ITS_DOUBLE_EXIST_H_
#define CHECK_IF_N_AND_ITS_DOUBLE_EXIST_H_

#include <unordered_map>
#include <vector>

namespace solution {

bool checkIfExist(std::vector<int>& arr) {
  // with map
  // Runtime: 4 ms, faster than 94.80% of C++ online submissions for Check If N and Its Double Exist.
  // Memory Usage: 11.4 MB, less than 5.56% of C++ online submissions for Check If N and Its Double Exist.
  //
  std::unordered_map<int, int> m;

  for (const auto& i : arr) {
    ++m[i];
  }
  for (size_t i = 0; i < arr.size(); ++i) {
    if (arr[i] == 0) {
      if (m[0] > 1) return true;
    } else {
      if (m[arr[i] * 2] > 0 || (arr[i] % 2 == 0 && m[arr[i] / 2] > 0)) return true;
    }
  }

  return false;
}


}


#endif  // CHECK_IF_N_AND_ITS_DOUBLE_EXIST_H_
