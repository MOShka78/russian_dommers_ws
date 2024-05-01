#include <add_two_numbers.h>
#include <gtest/gtest.h>

class TestCustomSolution {
 public:
  TestCustomSolution(int size_1, int size_2) {
    if (size_1 > size_2) {
      sum_value.resize(size_1);
    } else {
      sum_value.resize(size_2);
    }
    genereteListNode(generate_list_node_1, size_1);
    genereteListNode(generate_list_node_2, size_2);
  }

  void genereteListNode(ListNode*& list_node, int size_list) {
    list_node = new ListNode(0, nullptr);
    ListNode* current_list_node = list_node;

    for (int cur = 0; cur < size_list; cur++) {
      int rand_value = rand() % 10;
      current_list_node->next = new ListNode(rand_value, nullptr);
      current_list_node = current_list_node->next;
      sum_value[cur] += rand_value;
    }
  }
  std::vector<int> getSumValue() {
    std::vector<int> result_;
    int last_k = 0;
    for (auto value : sum_value) {
      value += last_k;
      result_.push_back(value % 10);
      last_k = value / 10;
    }
    return result_;
  }

  void updateVectorSum(std::vector<int>& sum_value_vector,
                       std::vector<int>& max_value_vector,
                       std::vector<int>& min_value_vector) {
    int last_upgrade_value = 0;

    for (int cur = 0; cur < max_value_vector.size(); cur++) {
      int sum_value = last_upgrade_value;
      if (min_value_vector.size() < max_value_vector.size()) {
        sum_value += max_value_vector[cur] + min_value_vector[cur];
        last_upgrade_value = sum_value / 10;
        sum_value_vector.push_back(sum_value % 10);
      } else if (last_upgrade_value) {
        sum_value += max_value_vector[cur];
        last_upgrade_value = sum_value / 10;
        sum_value_vector.push_back(sum_value % 10);
      } else {
        sum_value_vector.push_back(max_value_vector[cur]);
      }
    }
  }

  std::vector<int> getListNodeVectorValue(ListNode* list_node) {
    std::vector<int> result_list;
    while (list_node) {
      result_list.push_back(list_node->val);
      list_node = list_node->next;
    }
    return result_list;
  }

  ListNode* getListNodeFirst() { return generate_list_node_1->next; }
  ListNode* getListNodeSecond() { return generate_list_node_2->next; }

  ListNode* generate_list_node_1;
  ListNode* generate_list_node_2;

  std::vector<int> sum_value;
};

TEST(Test_Solution, same_sizes) {
  auto test_list_node_ = std::make_shared<TestCustomSolution>(10, 10);
  auto add_two_numbers_ = std::make_shared<Solution>();

  ListNode* value_list_node =
      add_two_numbers_->addTwoNumbers(test_list_node_->getListNodeFirst(),
                                      test_list_node_->getListNodeSecond());

  std::vector<int> result_value =
      test_list_node_->getListNodeVectorValue(value_list_node);
  std::vector<int> real_value = test_list_node_->getSumValue();

  ASSERT_EQ(result_value, real_value);
}

TEST(Test_Solution, max_first_sizes) {
  auto test_list_node_ = std::make_shared<TestCustomSolution>(20, 10);
  auto add_two_numbers_ = std::make_shared<Solution>();

  ListNode* value_list_node =
      add_two_numbers_->addTwoNumbers(test_list_node_->getListNodeFirst(),
                                      test_list_node_->getListNodeSecond());

  std::vector<int> result_value =
      test_list_node_->getListNodeVectorValue(value_list_node);
  std::vector<int> real_value = test_list_node_->getSumValue();

  ASSERT_EQ(result_value, real_value);
}

TEST(Test_Solution, min_first_sizes) {
  auto test_list_node_ = std::make_shared<TestCustomSolution>(10, 20);
  auto add_two_numbers_ = std::make_shared<Solution>();

  ListNode* value_list_node =
      add_two_numbers_->addTwoNumbers(test_list_node_->getListNodeFirst(),
                                      test_list_node_->getListNodeSecond());

  std::vector<int> result_value =
      test_list_node_->getListNodeVectorValue(value_list_node);
  std::vector<int> real_value = test_list_node_->getSumValue();

  ASSERT_EQ(result_value, real_value);
}

TEST(Test_Solution, zero) {
  auto test_list_node_ = std::make_shared<TestCustomSolution>(0, 20);
  auto add_two_numbers_ = std::make_shared<Solution>();

  ListNode* value_list_node =
      add_two_numbers_->addTwoNumbers(test_list_node_->getListNodeFirst(),
                                      test_list_node_->getListNodeSecond());

  std::vector<int> result_value =
      test_list_node_->getListNodeVectorValue(value_list_node);
  std::vector<int> real_value = test_list_node_->getSumValue();

  ASSERT_EQ(result_value, real_value);
}

TEST(Test_Solution, big_size) {
  auto test_list_node_ = std::make_shared<TestCustomSolution>(99, 444);
  auto add_two_numbers_ = std::make_shared<Solution>();

  ListNode* value_list_node =
      add_two_numbers_->addTwoNumbers(test_list_node_->getListNodeFirst(),
                                      test_list_node_->getListNodeSecond());

  std::vector<int> result_value =
      test_list_node_->getListNodeVectorValue(value_list_node);
  std::vector<int> real_value = test_list_node_->getSumValue();

  ASSERT_EQ(result_value, real_value);
}

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);

  return RUN_ALL_TESTS();
}