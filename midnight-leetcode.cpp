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

#include "find-the-town-judge.h"

int main() {
  std::vector<std::vector<int>> v{{1, 3}, {1, 4}, {2, 3}, {2, 4}, {4, 3}};
  solution::findJudge(4, v);
}
