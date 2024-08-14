#include <gtest/gtest.h>
#include <int_to_roman.h>
TEST(Test_Solution, Case1) {
  auto solution = std::make_shared<Solution>();

  int input = 3749;

  std::string output = solution->intToRoman(input);

  std::string output_find = "MMMDCCXLIX";
  ASSERT_EQ(output, output_find);
}

TEST(Test_Solution, Case2) {
  auto solution = std::make_shared<Solution>();

  int input = 58;

  std::string output = solution->intToRoman(input);

  std::string output_find = "LVIII";
  ASSERT_EQ(output, output_find);
}

TEST(Test_Solution, Case3) {
  auto solution = std::make_shared<Solution>();

  int input = 1994;

  std::string output = solution->intToRoman(input);

  std::string output_find = "MCMXCIV";
  ASSERT_EQ(output, output_find);
}

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);

  return RUN_ALL_TESTS();
}