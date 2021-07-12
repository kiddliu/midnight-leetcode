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

#include "subdomain-visit-count.h"

int main() {
  std::vector<std::string> v{"900 google.mail.com", "50 yahoo.com",
                             "1 intel.mail.com", "5 wiki.org"};
  solution::subdomainVisits(v);
}
