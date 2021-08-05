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

#include "partition-array-into-three-parts-with-equal-sum.h"

int main() {
  std::vector<int> v{1, -1, 1, -1};
  solution::canThreePartsEqualSum(v);
}
