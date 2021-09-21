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

#include "detect-pattern-of-length-m-repeated-k-or-more-times.h"

int main() {
  std::vector<int> v{3, 2, 1, 2, 1, 1, 1, 3};
  solution::containsPattern(v, 2, 3);
}
