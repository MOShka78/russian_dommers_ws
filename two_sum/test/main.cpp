#include <gtest/gtest.h>
#include <two_sum.h>

class TestTwoSum {
 public:
  TestTwoSum(size_t nums_size, int target, bool sol) {
    if (sol) {
      generateVectorSol(nums_size, target);
    } else {
      generateVectorFalseSol(nums_size, target);
    }
  }
  void generateVectorSol(size_t nums_size, int target) {
    while (first_num == second_num) {
      first_num = std::rand() % nums_size;
      second_num = std::rand() % nums_size;
    }

    nums_test.resize(nums_size);

    int del = std::rand() % target;
    nums_test[first_num] = target - del;
    nums_test[second_num] = del;
  }
  void generateVectorFalseSol(size_t nums_size, int target) {
    if (target) {
      nums_test.resize(nums_size);
    } else {
      nums_test.assign(nums_size, 1);
    }
  }
  int getSum(std::vector<int> len_vector) {
    int sum = 0;
    for (const auto& len : len_vector) {
      sum += nums_test[len];
    }
    return sum;
  }
  std::vector<int> getNum() { return nums_test; }

 private:
  int first_num = 0;
  int second_num = 0;
  std::vector<int> nums_test;
};

TEST(Test_Solution, min_size) {
  int target = 11;
  int size_num = 2;

  auto test_two_sum_ = std::make_shared<TestTwoSum>(size_num, target, true);
  auto two_sum_ = std::make_shared<Solution>();

  std::vector<int> nums = test_two_sum_->getNum();
  std::vector<int> res_program = two_sum_->twoSum(nums, target);
  int real_sum = test_two_sum_->getSum(res_program);

  ASSERT_EQ(target, real_sum);
}

TEST(Test_Solution, big_size) {
  int target = 11;
  int size_num = 104;

  auto test_two_sum_ = std::make_shared<TestTwoSum>(size_num, target, true);
  auto two_sum_ = std::make_shared<Solution>();

  std::vector<int> nums = test_two_sum_->getNum();
  std::vector<int> res_program = two_sum_->twoSum(nums, target);
  int real_sum = test_two_sum_->getSum(res_program);

  ASSERT_EQ(target, real_sum);
}

TEST(Test_Solution, negative_target) {
  int target = -109;
  int size_num = 10;

  auto test_two_sum_ = std::make_shared<TestTwoSum>(size_num, target, true);
  auto two_sum_ = std::make_shared<Solution>();

  std::vector<int> nums = test_two_sum_->getNum();
  std::vector<int> res_program = two_sum_->twoSum(nums, target);
  int real_sum = test_two_sum_->getSum(res_program);

  ASSERT_EQ(target, real_sum);
}

TEST(Test_Solution, positive_target) {
  int target = 109;
  int size_num = 10;

  auto test_two_sum_ = std::make_shared<TestTwoSum>(size_num, target, true);
  auto two_sum_ = std::make_shared<Solution>();

  std::vector<int> nums = test_two_sum_->getNum();
  std::vector<int> res_program = two_sum_->twoSum(nums, target);
  int real_sum = test_two_sum_->getSum(res_program);

  ASSERT_EQ(target, real_sum);
}

TEST(Test_Solution, throw_test) {
  int target = 0;
  int size_num = 10;

  auto test_two_sum_ = std::make_shared<TestTwoSum>(size_num, target, false);
  auto two_sum_ = std::make_shared<Solution>();

  std::vector<int> nums = test_two_sum_->getNum();
  EXPECT_THROW(two_sum_->twoSum(nums, target), std::runtime_error);
}

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);

  return RUN_ALL_TESTS();
}