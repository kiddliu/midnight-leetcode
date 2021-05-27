#ifndef RANSOM_NOTE_H_
#define RANSOM_NOTE_H_

#include <algorithm>
#include <string>

namespace solution {

bool canConstruct(std::string ransomNote, std::string magazine) {
  // should use multiset instead of reading through
  // Runtime: 32 ms, faster than 11.39% of C++ online submissions for Ransom Note.
  // Memory Usage: 8.8 MB, less than 50.30% of C++ online submissions for Ransom Note.
  //
  if (ransomNote.size() > magazine.size()) return false;

  std::sort(ransomNote.begin(), ransomNote.end());
  std::sort(magazine.begin(), magazine.end());

  auto p1 = ransomNote.cbegin(), end1 = ransomNote.cend();
  size_t offset{std::string::npos};
  while (p1 != end1) {
    offset = magazine.find_first_of(*p1, ++offset);
    if (offset == std::string::npos) {
      return false;
    }
    p1++;
  }
  return true;
}

}

#endif  // RANSOM_NOTE_H_
