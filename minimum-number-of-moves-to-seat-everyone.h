#ifndef MINIMUM_NUMBER_OF_MOVES_TO_SEAT_EVERYONE_H_
#define MINIMUM_NUMBER_OF_MOVES_TO_SEAT_EVERYONE_H_

#include <algorithm>
#include <vector>

namespace solution {

int minMovesToSeat(std::vector<int>& seats, std::vector<int>& students) {
  auto result{0};

  std::sort(seats.begin(), seats.end());
  std::sort(students.begin(), students.end());

  for (auto i = 0; i < seats.size(); ++i) {
    result += std::abs(seats[i] - students[i]);
  }

  return result;
}

}

#endif  // MINIMUM_NUMBER_OF_MOVES_TO_SEAT_EVERYONE_H_
