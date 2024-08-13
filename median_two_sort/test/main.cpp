#include <gtest/gtest.h>

#include <median_two_sort.hpp>

TEST(Test_Solution, Case_1) {
  auto solution = std::make_shared<Solution>();

  std::vector<int> nums1 = {1, 3};
  std::vector<int> nums2 = {2};

  double output = solution->findMedianSortedArrays(nums1, nums2);

  double output_find = 2.0;
  ASSERT_EQ(output, output_find);
}

TEST(Test_Solution, Case_2) {
  auto solution = std::make_shared<Solution>();

  std::vector<int> nums1 = {1, 2};
  std::vector<int> nums2 = {3, 4};

  double output = solution->findMedianSortedArrays(nums1, nums2);

  double output_find = 2.5;
  ASSERT_EQ(output, output_find);
}

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);

  return RUN_ALL_TESTS();
}