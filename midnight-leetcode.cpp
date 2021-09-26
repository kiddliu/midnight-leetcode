// midnight-leetcode.cpp : This file contains the 'main' function. Program
// execution begins and ends there.
//

#include <cassert>
#include <iostream>
#include <string>
#include <vector>

#include "list-node.h"
#include "node.h"
#include "tree-node.h"

#include "largest-substring-between-two-equal-characters.h"

int main() {
  std::vector<int> v{6,  0, 7, 0, 7, 5, 7, 8,  3, 4, 0, 7, 8, 1,
                     6,  8, 1, 1, 2, 4, 8, 1,  9, 5, 4, 3, 8, 5,
                     10, 8, 6, 6, 1, 0, 6, 10, 8, 2, 3, 4};
  solution::maxLengthBetweenEqualCharacters(
      "dsulgfjebclnbbqtdscfojqmushpobmamzfysvutyycuumhyfvopskszaodxssnjoajokdqn"
      "hoociziepuybpnnchdvvgvkmihcpdwwsqkcuqmsjvfhzcofcmmdwzfbyrfborhybjelhqisf"
      "ankgncetkammtxphgbcoxhnobwvtfglmwoarbymflbcajimmltrelpvqqypvsrnsxvvobwfc"
      "ymupgrkdshp");
}
