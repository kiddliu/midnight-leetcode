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

#include "longest-continuous-increasing-subsequence.h"

int main() {
  std::vector<int> v{1, 3, 5, 4, 2, 3, 4, 5};
  solution::findLengthOfLCIS(v);
}
