#ifndef SUBDOMAIN_VISIT_COUNT_H_
#define SUBDOMAIN_VISIT_COUNT_H_

#include <string>
#include <unordered_map>
#include <vector>

namespace solution {

std::vector<std::string> subdomainVisits(std::vector<std::string>& cpdomains) {
  // hashmap
  // Runtime: 20 ms, faster than 28.52% of C++ online submissions for Subdomain Visit Count.
  // Memory Usage: 11.6 MB, less than 56.49% of C++ online submissions for Subdomain Visit Count.
  //
  std::unordered_map<std::string, int> m;
  for (auto& domain : cpdomains) {
    size_t offset{domain.find_first_of(' ') + 1}, next{offset},
        count = std::stoi(domain.substr(0, domain.find_first_of(' ')));
    do {
      next = domain.find_first_of('.', offset);
      m[domain.substr(offset)] += count;
    } while (next != std::string::npos && (offset = next + 1));
  }

  std::vector<std::string> v;
  for (const auto& p : m) {
    v.push_back(std::to_string(p.second) + " " + p.first);
  }
  return v;
}

}

#endif  // SUBDOMAIN_VISIT_COUNT_H_
