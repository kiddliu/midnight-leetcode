#ifndef PRINT_IN_ORDER_H_
#define PRINT_IN_ORDER_H_

#include <condition_variable>
#include <functional>

namespace solution {

// i don't think using only 1 cv is correct
// Runtime: 51 ms, faster than 93.28% of C++ online submissions for Print in Order.
// Memory Usage: 7.2 MB, less than 58.20% of C++ online submissions for Print in Order.
//
class Foo {
 public:
  Foo() : first_(false), second_(false) {}

  void first(std::function<void()> printFirst) {
    first_ = true;
    cv_.notify_one();

    // printFirst() outputs "first". Do not change or remove this line.
    printFirst();
  }

  void second(std::function<void()> printSecond) {
    std::unique_lock<std::mutex> lk(m_);
    cv_.wait(lk, [this] { return first_ == true; });

    second_ = true;
    cv2_.notify_one();

    // printSecond() outputs "second". Do not change or remove this line.
    printSecond();
  }

  void third(std::function<void()> printThird) {
    std::unique_lock<std::mutex> lk(m_);
    cv_.wait(lk, [this] { return second_ == true; });

    // printThird() outputs "third". Do not change or remove this line.
    printThird();
  }

 private:
  bool first_, second_;
  std::mutex m_;
  std::condition_variable cv_;
  std::condition_variable cv2_;
};


}

#endif  // PRINT_IN_ORDER_H_
