#include <add_two_numbers.h>
#include <gtest/gtest.h>
TEST(example_1, compute_test) {
  ASSERT_EQ(2, 2);
  std::cout << "continue test" << std::endl;  // не будет выведено на экран
}
int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);

  return RUN_ALL_TESTS();
}