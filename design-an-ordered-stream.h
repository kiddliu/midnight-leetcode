#ifndef DESIGN_AN_ORDERED_STREAM_H_
#define DESIGN_AN_ORDERED_STREAM_H_

#include <string>
#include <vector>


// straight forward
// Runtime: 96 ms, faster than 87.67% of C++ online submissions for Design an Ordered Stream.
// Memory Usage: 83.6 MB, less than 73.50% of C++ online submissions for Design an Ordered Stream.
//
class OrderedStream {
 public:
  OrderedStream(int n) : v_{std::vector<std::string>(n, "")}, offset_{0} {}

  std::vector<std::string> insert(int idKey, std::string value) {
    v_[idKey - 1] = value;

    std::vector<std::string> v;
    while (offset_ < v_.size() && v_[offset_].size() == 5) {
      v.push_back(v_[offset_++]);
    }
    return v;
  }

 private:
  std::vector<std::string> v_;
  int offset_;
};

#endif  // DESIGN_AN_ORDERED_STREAM_H_
