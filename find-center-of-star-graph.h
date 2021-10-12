#ifndef FIND_CENTER_OF_STAR_GRAPH_H_
#define FIND_CENTER_OF_STAR_GRAPH_H_

#include <vector>

namespace solution {

int findCenter(std::vector<std::vector<int>>& e) {
  // straight forward
  // Runtime: 168 ms, faster than 94.23% of C++ online submissions for Find Center of Star Graph.
  // Memory Usage: 67.3 MB, less than 82.24% of C++ online submissions for Find Center of Star Graph.
  //
  return e[0][0] == e[1][0] || e[0][0] == e[1][1] ? e[0][0] : e[0][1];
}

}

#endif  // !FIND_CENTER_OF_STAR_GRAPH_H_
