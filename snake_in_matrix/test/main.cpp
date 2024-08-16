#include <gtest/gtest.h>
#include <snake_in_matrix.h>
TEST(Test_Solution, Case_1) {
  auto solution = std::make_shared<Solution>();

  int n = 2;
  std::vector<std::string> commands = {"RIGHT", "DOWN"};

  int output = solution->finalPositionOfSnake(n, commands);

  int output_find = 3;
  ASSERT_EQ(output, output_find);
}

TEST(Test_Solution, Case_2) {
  auto solution = std::make_shared<Solution>();

  int n = 3;
  std::vector<std::string> commands = {"DOWN", "RIGHT", "UP"};

  int output = solution->finalPositionOfSnake(n, commands);

  int output_find = 1;
  ASSERT_EQ(output, output_find);
}

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);

  return RUN_ALL_TESTS();
}