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

#include "count-the-number-of-consistent-strings.h"

int main() {
  std::vector<int> v{10, 5, 7, 7, 3, 2, 10, 3, 6, 9, 1, 6};
  std::vector<std::vector<int>> v2{{78}, {4, 64}, {91}};
  std::vector<std::string> v3{"ad", "bd", "aaab", "baa", "badab"};
  solution::countConsistentStrings("ab", v3);
}
