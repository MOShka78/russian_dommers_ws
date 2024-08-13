#include <median_two_sort.hpp>

double Solution::findMedianSortedArrays(std::vector<int>& nums1,
                                        std::vector<int>& nums2) {
  std::vector<int> merge_nums = nums1;
  for (const auto& num : nums2) {
    merge_nums.push_back(num);
  }
  std::sort(std::begin(merge_nums), std::end(merge_nums));
  size_t size_merge_array = merge_nums.size();
  if (size_merge_array % 2) {
    return merge_nums[size_merge_array / 2];
  } else {
    int right_med = size_merge_array / 2;
    int left_med = right_med - 1;

    return (double(merge_nums[left_med]) + double(merge_nums[right_med])) / 2;
  }
}