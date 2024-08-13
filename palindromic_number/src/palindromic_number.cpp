#include <palindromic_number.hpp>

bool Solution::longestPalindrome(int x) {
  std::string str_x = std::to_string(x);
  std::reverse(str_x.begin(), str_x.end());
}
