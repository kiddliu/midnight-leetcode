#ifndef COUNT_OF_MATCHES_IN_TOURNAMENT_H_
#define COUNT_OF_MATCHES_IN_TOURNAMENT_H_

namespace solution {

int numberOfMatches(int n) {
  // one match, one player gone
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Count of Matches in Tournament.
  // Memory Usage: 5.9 MB, less than 68.51% of C++ online submissions for Count of Matches in Tournament.
  //
  return n - 1;
}

}

#endif  // !COUNT_OF_MATCHES_IN_TOURNAMENT_H_
