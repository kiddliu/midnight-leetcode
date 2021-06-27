#ifndef IMAGE_SMOOTHER_H_
#define IMAGE_SMOOTHER_H_

#include <string>
#include <map>
#include <vector>

namespace solution {

std::vector<std::vector<int>> imageSmoother(std::vector<std::vector<int>>& img) {
  // direct
  // Runtime: 52 ms, faster than 67.55% of C++ online submissions for Image Smoother.
  // Memory Usage: 22.2 MB, less than 22.87% of C++ online submissions for Image Smoother.
  //
  if (img.size() == 1 && img[0].size() == 1) return img;
  if (img.size() < 3 && img[0].size() < 3) {
    auto sum{0}, count{0};
    for (size_t i = 0; i < img.size(); ++i) {
      for (size_t j = 0; j < img[i].size(); ++j) {
        sum += img[i][j];
        ++count;
      }
    }
    return std::vector<std::vector<int>>(img.size(), std::vector<int>(img[0].size(), sum / count));
  }

  std::vector<std::vector<int>> r(img.size(), std::vector<int>(img[0].size(), 0));

  for (size_t i = 0; i < img.size(); ++i) {
    img[i].insert(img[i].begin(), 0);
    img[i].insert(img[i].end(), 0);
  }
  img.insert(img.begin(), std::vector<int>(img[0].size(), 0));
  img.insert(img.end(), std::vector<int>(img[0].size(), 0));

  for (size_t i = 1; i < img.size() - 1; ++i) {
    for (size_t j = 1; j < img[i].size() - 1; ++j) {
      auto sum = img[i - 1][j - 1] + img[i - 1][j] + img[i - 1][j + 1] +
                 img[i][j - 1] + img[i][j] + img[i][j + 1] + img[i + 1][j - 1] +
                 img[i + 1][j] + img[i + 1][j + 1];
      auto count{9};
      if ((i == 1 || i == img.size() - 2) && (j == 1 || j == img[i].size() - 2)) {
        count = (img.size() - 2 == 1 || img[0].size() - 2 == 1) ? 2 : 4;
      } else if ((i == 1 || i == img.size() - 2) || (j == 1 || j == img[i].size() - 2)) {
        count = (img.size() - 2 == 1 || img[0].size() - 2 == 1) ? 3 : 6;
      }
      r[i - 1][j - 1] = sum / count;
    }
  }
  return r;
}

}

#endif  // IMAGE_SMOOTHER_H_
