#include <gtest/gtest.h>

#include <reverse_int.hpp>

TEST(Test_Solution, Case_1) {
  auto solution = std::make_shared<Solution>();

  int input = 123;

  double output = solution->reverse(input);

  int output_find = 321;
  ASSERT_EQ(output, output_find);
}

TEST(Test_Solution, Case_2) {
  auto solution = std::make_shared<Solution>();

  int input = -123;

  double output = solution->reverse(input);

  int output_find = -321;
  ASSERT_EQ(output, output_find);
}

TEST(Test_Solution, Case3) {
  auto solution = std::make_shared<Solution>();

  int input = 120;

  double output = solution->reverse(input);

  int output_find = 21;
  ASSERT_EQ(output, output_find);
}

TEST(Test_Solution, Case4) {
  auto solution = std::make_shared<Solution>();

  int input = 0;

  double output = solution->reverse(input);

  int output_find = 0;
  ASSERT_EQ(output, output_find);
}

TEST(Test_Solution, Case5) {
  auto solution = std::make_shared<Solution>();

  int input = 1534236469;

  double output = solution->reverse(input);

  int output_find = 0;
  ASSERT_EQ(output, output_find);
}

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);

  return RUN_ALL_TESTS();
}