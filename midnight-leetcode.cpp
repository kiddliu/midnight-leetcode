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

#include "reorder-data-in-log-files.h"

int main() {
  std::vector<std::string> v{"dig1 8 1 5 1", "let1 art can", "dig2 3 6",
                             "let2 own kit dig", "let3 art zero"};
  solution::reorderLogFiles(v);
}
