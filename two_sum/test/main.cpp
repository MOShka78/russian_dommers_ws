#include <gtest/gtest.h>
#include <two_sum.h>

class TestTwoSum {
 public:
  TestTwoSum(size_t nums_size, int target) {
    nums_test.resize(nums_size);
    nums_test[0] = target - 3;
    nums_test[nums_size - 1] = 3;
  }
  int getSum(std::vector<int> len_vector) {
    int sum;
    for (const auto& len : len_vector) {
      sum += nums_test[len];
    }
    return sum;
  }
  std::vector<int> getNum() { return nums_test; }
  std::vector<int> nums_test;
};

TEST(Test_Solution, max_first_sizes) {
  int target = 11;
  auto test_two_sum_ = std::make_shared<TestTwoSum>(5, target);
  auto two_sum_ = std::make_shared<Solution>();

  std::vector<int> res_program =
      two_sum_->twoSum(test_two_sum_->getNum(), target);
  int real_sum = test_two_sum_->getSum(res_program);

  ASSERT_EQ(target, real_sum);
}

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);

  return RUN_ALL_TESTS();
}