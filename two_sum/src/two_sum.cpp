#include <two_sum.h>
std::vector<int> Solution::twoSum(std::vector<int>& nums, int target) {
  std::vector<int> out;
  for (int current = 0; current < nums.size(); current++) {
    std::find(nums[current], nums.end(), 2);
  }
  return out;
}

//[6, 7, 12, 5, 4] target = 11
//[4, 5, 6, 7]