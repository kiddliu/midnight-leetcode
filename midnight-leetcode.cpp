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

#include "kth-distinct-string-in-an-array.h"

int main() {
  std::vector<std::string> v{"d", "b", "c", "b", "c", "a"};
  solution::kthDistinct(v, 2);
}
