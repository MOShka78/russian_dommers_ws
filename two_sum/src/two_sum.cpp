#include <two_sum.h>
std::vector<int> Solution::twoSum(std::vector<int>& nums, int target) {
  unordered_map<int, int> mp;
  for (int i = 0; i < nums.size(); i++) {
    // находим число-дополнение
    int complement = target - nums[i];
    // если находим дополнение в unordered_map
    if (mp.find(complement) != mp.end()) {
      // возвращаем его индекс и текущий индекс
      return {mp[complement], i};
    }
    // добавляем текущее число и его индекс в unordered_map
    mp[nums[i]] = i;
  }
  // если нет решения, выбрасываем исключение
  throw invalid_argument("No two sum solution");
}

//[6, 7, 12, 5, 4] target = 11
//[4, 5, 6, 7]