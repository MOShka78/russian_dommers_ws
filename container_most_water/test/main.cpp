#include <gtest/gtest.h>

#include <container_most_water.hpp>

TEST(Test_Solution, Case_1) {
  auto solution = std::make_shared<Solution>();

  std::vector<int> s = {1, 8, 6, 2, 5, 4, 8, 3, 7};

  int output = solution->maxArea(s);

  int output_find = 49;
  ASSERT_EQ(output, output_find);
}

TEST(Test_Solution, Case_2) {
  auto solution = std::make_shared<Solution>();

  std::vector<int> s = {1, 1};

  int output = solution->maxArea(s);

  int output_find = 1;
  ASSERT_EQ(output, output_find);
}

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);

  return RUN_ALL_TESTS();
}