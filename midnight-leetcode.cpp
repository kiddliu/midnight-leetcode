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

#include "accounts-merge.h"

int main() {
  std::vector<std::vector<std::string>>
      v{{ "David", "David0@m.co", "David1@m.co" },
        { "David", "David3@m.co", "David4@m.co" },
        { "David", "David4@m.co", "David5@m.co" },
        { "David", "David2@m.co", "David3@m.co" },
        { "David", "David1@m.co", "David2@m.co" }};
  auto result = solution::accountsMerge(v);

  return 0;
}
