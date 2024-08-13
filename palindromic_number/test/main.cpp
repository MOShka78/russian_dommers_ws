#include <gtest/gtest.h>

#include <palindromic_number.hpp>

TEST(Test_Solution, Case_1) {
  auto solution = std::make_shared<Solution>();

  int s = 121;

  bool output = solution->longestPalindrome(s);

  bool output_find = true;
  ASSERT_EQ(output, output_find);
}

TEST(Test_Solution, Case_2) {
  auto solution = std::make_shared<Solution>();

  int s = -121;

  bool output = solution->longestPalindrome(s);

  bool output_find = false;
  ASSERT_EQ(output, output_find);
}

TEST(Test_Solution, Case_3) {
  auto solution = std::make_shared<Solution>();

  int s = 10;

  bool output = solution->longestPalindrome(s);

  bool output_find = false;
  ASSERT_EQ(output, output_find);
}

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);

  return RUN_ALL_TESTS();
}