#include <gtest/gtest.h>

#include <long_palindromic.hpp>

TEST(Test_Solution, Case_1) {
  auto solution = std::make_shared<Solution>();

  std::string s = "babad";

  std::string output = solution->longestPalindrome(s);

  std::string output_find = "aba";
  ASSERT_EQ(output, output_find);
}

TEST(Test_Solution, Case_2) {
  auto solution = std::make_shared<Solution>();

  std::string s = "cbbd";

  std::string output = solution->longestPalindrome(s);

  std::string output_find = "bb";
  ASSERT_EQ(output, output_find);
}

TEST(Test_Solution, Case_3) {
  auto solution = std::make_shared<Solution>();

  std::string s = "a";

  std::string output = solution->longestPalindrome(s);

  std::string output_find = "a";
  ASSERT_EQ(output, output_find);
}

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);

  return RUN_ALL_TESTS();
}