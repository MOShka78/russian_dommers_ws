#include <container_most_water.hpp>

int Solution::maxArea(std::vector<int>& height) {
  int lenght_right = height.size() - 1;
  int lenght_left = 0;

  int max_area = 0;

  while (lenght_right != lenght_left) {
    max_area =
        std::max(max_area, std::min(height[lenght_left], height[lenght_right]) *
                               (lenght_right - lenght_left));
    if (height[lenght_left] < height[lenght_right]) {
      lenght_left += 1;
    } else {
      lenght_right -= 1;
    }
  }

  return max_area;
}
