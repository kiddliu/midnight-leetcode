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

#include "number-of-students-unable-to-eat-lunch.h"

int main() {
  std::vector<int> v{1, 1, 1, 0, 0, 1};
  std::vector<int> v2{1, 0, 0, 0, 1, 1};
  solution::countStudents(v, v2);
}
