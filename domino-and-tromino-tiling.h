#ifndef DOMINO_AND_TROMINO_TILING_H_
#define DOMINO_AND_TROMINO_TILING_H_

#include <array>

namespace solution {

int numTilings(int n) {
  // always use array to speed up
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Domino and Tromino Tiling.
  // Memory Usage: 5.9 MB, less than 89.92% of C++ online submissions for Domino and Tromino Tiling.
  //
  if (n == 1) return 1;
  if (n == 2) return 2;
  if (n == 3) return 5;

  std::array<unsigned int, 1002> arr{1, 2, 5};
  auto count{3};
  while (count < n) {
    arr[count] = (2 * arr[count - 1] + arr[count - 3]) % 1000000007;
    ++count;
  }
  return arr[count - 1];
}

}

#endif  // DOMINO_AND_TROMINO_TILING_H_
