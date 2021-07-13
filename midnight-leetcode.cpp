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

#include "most-common-word.h"

int main() {
  std::vector<std::string> v{"hit"};
  solution::mostCommonWord(
      "Bob hit a ball, the hit BALL flew far after it was hit.", v);
}
