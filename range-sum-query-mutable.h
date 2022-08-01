#ifndef RANGE_SUM_QUERY_MUTABLE_H_
#define RANGE_SUM_QUERY_MUTABLE_H_

#include <vector>

/// <summary>
/// https://en.wikipedia.org/wiki/Fenwick_tree
/// </summary>
class FenwickTree {
 public:
  FenwickTree(int n) : data(n + 1, 0) {}

  int getSum(int i) const {
    int sum = 0;
    ++i;
    while (i > 0) {
      sum += data[i];
      i = getParent(i);
    }
    return sum;
  }

  void update(int i, int v) {
    ++i;
    while (i < data.size()) {
      data[i] += v;
      i = getNext(i);
    }
  }

 private:
  std::vector<int> data;

  int getParent(int i) const { return i - (i & (-i)); }

  int getNext(int i) const { return i + (i & (-i)); }
};

/// <summary>
/// Binary index tree
/// Runtime: 488 ms, faster than 85.62% of C++ online submissions for Range Sum Query - Mutable.
/// Memory Usage: 150.7 MB, less than 79.56% of C++ online submissions for Range Sum Query - Mutable.
/// </summary>
class NumArray {
 public:
  NumArray(std::vector<int>& nums)
      : nums_(nums), tree_{FenwickTree(nums.size())} {
    for (auto i{0}; i < nums.size(); ++i) {
      tree_.update(i, nums[i]);
    }
  }

  void update(int index, int val) {
    auto diff{val - nums_[index]};
    tree_.update(index, diff);
    nums_[index] = val;
  }

  int sumRange(int left, int right) { return tree_.getSum(right) - tree_.getSum(left - 1); }

 private:
  std::vector<int> nums_;
  FenwickTree tree_;
};



#endif  // !RANGE_SUM_QUERY_MUTABLE_H_
