#ifndef GUESS_NUMBER_HIGHER_OR_LOWER_H_
#define GUESS_NUMBER_HIGHER_OR_LOWER_H_

namespace solution {

int guess(int num);

int guessNumber(int n) {
  // binary search
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Guess Number Higher or Lower.
  // Memory Usage: 5.9 MB, less than 60.36% of C++ online submissions for Guess Number Higher or Lower.
  //
  if (n == 1) return 1;

  auto begin{1}, mid{0}, end{n}, result{0};
  while (true) {
    mid = begin + (end - begin) >> 1;
    result = guess(mid);
    
    switch (result) { 
      case 0:
        return mid;
      case 1:
        begin = mid + 1;
        break;
      case -1:
        end = mid - 1;
        break;
    }
  }
}

}

#endif  // GUESS_NUMBER_HIGHER_OR_LOWER_H_
