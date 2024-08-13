#include <gtest/gtest.h>

#include <string_to_integer.hpp>

TEST(Test_Solution, Case_1) {
  auto solution = std::make_shared<Solution>();

  std::string input = "42";

  int output = solution->myAtoi(input);

  int output_find = 42;
  ASSERT_EQ(output, output_find);
}

TEST(Test_Solution, Case_2) {
  auto solution = std::make_shared<Solution>();

  std::string input = " -042";

  int output = solution->myAtoi(input);

  int output_find = -42;
  ASSERT_EQ(output, output_find);
}

TEST(Test_Solution, Case3) {
  auto solution = std::make_shared<Solution>();

  std::string input = "1337c0d3";

  int output = solution->myAtoi(input);

  int output_find = 1337;
  ASSERT_EQ(output, output_find);
}

TEST(Test_Solution, Case4) {
  auto solution = std::make_shared<Solution>();

  std::string input = "0-1";

  int output = solution->myAtoi(input);

  int output_find = 0;
  ASSERT_EQ(output, output_find);
}

TEST(Test_Solution, Case5) {
  auto solution = std::make_shared<Solution>();

  std::string input = "words and 987";

  int output = solution->myAtoi(input);

  int output_find = 0;
  ASSERT_EQ(output, output_find);
}

TEST(Test_Solution, Case6) {
  auto solution = std::make_shared<Solution>();

  std::string input = "-91283472332";

  int output = solution->myAtoi(input);

  int output_find = -2147483648;
  ASSERT_EQ(output, output_find);
}

TEST(Test_Solution, Case7) {
  auto solution = std::make_shared<Solution>();

  std::string input = "+1";

  int output = solution->myAtoi(input);

  int output_find = 1;
  ASSERT_EQ(output, output_find);
}
TEST(Test_Solution, Case8) {
  auto solution = std::make_shared<Solution>();

  std::string input = "+-12";

  int output = solution->myAtoi(input);

  int output_find = 0;
  ASSERT_EQ(output, output_find);
}
TEST(Test_Solution, Case9) {
  auto solution = std::make_shared<Solution>();

  std::string input = "21474836460";

  int output = solution->myAtoi(input);

  int output_find = 2147483647;
  ASSERT_EQ(output, output_find);
}

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);

  return RUN_ALL_TESTS();
}