#include <palindromic_number.hpp>

bool Solution::isPalindrome(int x) {
  std::string str_x = std::to_string(x);
  std::string reverse_str_x = str_x;

  std::reverse(reverse_str_x.begin(), reverse_str_x.end());

  for (size_t cur_num = 0; cur_num < str_x.size(); cur_num++) {
    if (str_x[cur_num] != reverse_str_x[cur_num]) {
      return false;
    }
  }
  return true;
}
