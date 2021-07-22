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

#include "groups-of-special-equivalent-strings.h"

int main() {
  std::vector<std::string> v{"abc", "acb", "bac", "bca", "cab", "cba"};
  solution::numSpecialEquivGroups(v); 
}
