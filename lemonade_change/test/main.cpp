#include <gtest/gtest.h>

#include <lemonade_change.hpp>

TEST(Test_Solution, Case_1) {
  auto solution = std::make_shared<Solution>();

  std::vector<int> input = {5, 5, 5, 10, 20};

  bool output = solution->lemonadeChange(input);

  bool output_find = true;
  ASSERT_EQ(output, output_find);
}

TEST(Test_Solution, Case_2) {
  auto solution = std::make_shared<Solution>();

  std::vector<int> input = {5, 5, 10, 10, 20};

  bool output = solution->lemonadeChange(input);

  bool output_find = false;
  ASSERT_EQ(output, output_find);
}

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);

  return RUN_ALL_TESTS();
}