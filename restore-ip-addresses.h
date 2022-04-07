#ifndef RESTORE_IP_ADDRESSES_H_
#define RESTORE_IP_ADDRESSES_H_

#include <string>
#include <vector>

namespace solution {

std::vector<std::string> restoreIpAddresses(std::string s, std::size_t part = 4, std::size_t offset = 0) {
  // DP...
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Restore IP Addresses.
  // Memory Usage: 6.6 MB, less than 40.09% of C++ online submissions for Restore IP Addresses.
  //
  std::vector<std::string> result;
  if (s.size() - offset > 3 * part || s.size() - offset < part) return result;

  if (part == 1) {
    auto n{s.substr(offset)};
    if (n.size() > 1 && s[offset] == '0') return result;
    if (n.size() > 2 && std::stoi(n) > 255) return result;
    result.push_back(n);
  } else {
    for (auto i{1}; i <= 3; ++i) {
      auto n{s.substr(offset, i)};
      if (i > 1 && s[offset] == '0') break;
      if (i > 2 && std::stoi(n) > 255) break;

      for (auto& s : restoreIpAddresses(s, part - 1, offset + i)) {
        result.push_back(n + '.' + s);
      }
    }
  }

  return result;
}

}

#endif  // RESTORE_IP_ADDRESSES_H_
