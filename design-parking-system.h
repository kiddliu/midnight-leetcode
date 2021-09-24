#ifndef DESIGN_PARKING_SYSTEM_H_
#define DESIGN_PARKING_SYSTEM_H_

#include <array>

namespace solution {

// using array
// Runtime: 52 ms, faster than 84.41% of C++ online submissions for Design Parking System.
// Memory Usage: 33.1 MB, less than 72.88% of C++ online submissions for Design Parking System.
//
class ParkingSystem {
 public:
  ParkingSystem(int big, int medium, int small) : array_({big, medium, small}) {}

  bool addCar(int carType) { return array_[carType - 1]-- > 0; }

 private:
  std::array<int, 3> array_;
};

}

#endif  // !DESIGN_PARKING_SYSTEM_H_
