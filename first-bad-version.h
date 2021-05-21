#ifndef FIRST_BAD_VERSION_H_
#define FIRST_BAD_VERSION_H_

namespace solution {

bool isBadVersion(int version);

int firstBadVersion(int n) {
  // Binary Search
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for First Bad Version.
  // Memory Usage: 6 MB, less than 16.10% of C++ online submissions for First Bad Version.
  //
  if (n == 1) return 1;

  return firstBadVersionRange(0, n);
}

int firstBadVersionRange(int begin, int end) {
  auto mid = begin + (end - begin) / 2;
  if (isBadVersion(mid) != isBadVersion(mid + 1)) return mid + 1;
  if (isBadVersion(mid - 1) != isBadVersion(mid)) return mid;

  if (isBadVersion(mid)) {
    return firstBadVersionRange(begin, mid);
  } else {
    return firstBadVersionRange(mid + 1, end);
  }
}

}

#endif  // FIRST_BAD_VERSION_H_
