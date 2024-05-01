#include <two_sum.h>
std::vector<int> Solution::twoSum(std::vector<int>& nums, int target) {
  for (int i = 0; i < nums.size(); i++) {
    int complement = target - nums[i];

    auto result{std::find(nums.begin() + i + 1, nums.end(), complement)};

    if (result != nums.end()) {
      int cur_target = result - nums.begin();
      return {i, cur_target};
    }
  }

  throw std::runtime_error("No two sum solution");
}