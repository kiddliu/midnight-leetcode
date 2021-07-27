#ifndef UNIQUE_EMAIL_ADDRESSES_H_
#define UNIQUE_EMAIL_ADDRESSES_H_

#include <string>
#include <unordered_set>
#include <vector>

namespace solution {

int numUniqueEmails(std::vector<std::string>& emails) {
  // direct
  // Runtime: 16 ms, faster than 98.87% of C++ online submissions for Unique Email Addresses.
  // Memory Usage: 12.5 MB, less than 99.26% of C++ online submissions for Unique Email Addresses.
  //
  std::unordered_set<std::string> s;

  for (auto& email : emails) {
    auto end{email.find('@')}, p{0u};
    while (p < end) {
      if (email[p] == '.') {
        email.erase(p, 1);
        --end;
      } else if (email[p] == '+') {
        email.erase(p, end - p);
        break;
      } 
      ++p;
    }
    s.insert(email);
  }

  return s.size();
}

}

#endif  // UNIQUE_EMAIL_ADDRESSES_H_
