#ifndef FRACTION_TO_RECURRING_DECIMAL_H_
#define FRACTION_TO_RECURRING_DECIMAL_H_

#include <string>
#include <unordered_map>

namespace solution {

std::string fractionToDecimal(long long numerator, long long denominator) {
  // ridiculous type conversion
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Fraction to Recurring Decimal.
  // Memory Usage: 6.4 MB, less than 32.58% of C++ online submissions for Fraction to Recurring Decimal.
  //
  auto quotient = numerator / denominator, reminder = numerator % denominator;
  if (reminder == 0) return std::to_string(quotient);
  std::string result, fraction, repeat;
  if (numerator > 0 ^ denominator > 0) result.push_back('-');
  numerator = std::abs(numerator), denominator = std::abs(denominator),
  quotient = numerator / denominator;
  result += std::to_string(quotient) + '.';
  std::unordered_map<long, int> memo;  

  while (reminder) {
    if (memo.count(reminder)) {
      result.insert(memo[reminder], "(");
      result += ')';
      break;
    }
    memo[reminder] = result.size();
    reminder *= 10;
    result += std::to_string(reminder / denominator);
    reminder %= denominator;
  }

  return result;
}

}  // namespace solution

#endif  // !FRACTION_TO_RECURRING_DECIMAL_H_
