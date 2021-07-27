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

#include "unique-email-addresses.h"

int main() {
  std::vector<std::string> v{"test.email+alex@leetcode.com",
                             "test.e.mail+bob.cathy@leetcode.com",
                             "testemail+david@lee.tcode.com"};
  solution::numUniqueEmails(v);
}
