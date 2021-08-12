#ifndef DEFANGING_AN_IP_ADDRESS_H_
#define DEFANGING_AN_IP_ADDRESS_H_

#include <regex>
#include <string>

namespace solution {

std::string defangIPaddr(std::string address) {
  // practise STL is the right course
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Defanging an IP Address.
  // Memory Usage: 6.8 MB, less than 20.83% of C++ online submissions for Defanging an IP Address.
  //
  return std::regex_replace(address, std::regex{"\\."}, "[.]");
}

}


#endif  // DEFANGING_AN_IP_ADDRESS_H_
