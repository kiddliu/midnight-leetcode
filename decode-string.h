#ifndef DECODE_STRING_H_
#define DECODE_STRING_H_

#include <sstream>
#include <string>

namespace solution {

std::string write(std::string& source, int& begin) {
  if (std::isalpha(source[begin])) {
    auto next{source.find_first_of("0123456789]", begin)};
    auto result = source.substr(begin, next - begin);
    begin = next;
    while (begin < source.size() && source[begin] != ']') {
      result.append(write(source, begin));
    }
    return result;
  } else {
    auto next = source.find('[', begin);
    auto k{std::stoi(source.substr(begin, next - begin))}, n{0};
    begin = next + 1;
    std::string result{write(source, begin)}, total;
    while (n++ < k) {
      total.append(result);
    }
    ++begin;
    while (begin < source.size() && source[begin] != ']') {
      total.append(write(source, begin));
    }
    return total;
  }
}

std::string decodeString(std::string s) {
  // both case can concat the rest...
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Decode String.
  // Memory Usage: 6.6 MB, less than 31.99% of C++ online submissions for Decode String.
  //
  std::stringstream result;

  auto i{0};
  while (i < s.size()) {
    result << write(s, i);
  }

  return result.str();
}

}  // namespace solution

#endif  // !DECODE_STRING_H_
