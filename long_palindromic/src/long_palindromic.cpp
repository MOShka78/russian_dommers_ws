#include <long_palindromic.hpp>

std::string Solution::longestPalindrome(std::string s) {
  std::string reverse_s = s;
  std::reverse(reverse_s.begin(), reverse_s.end());
  std::string last_p = "";
  std::vector<std::string> palindromic_list;
  for (size_t cur = 0; cur < s.size(); cur++) {
    if (s[cur] == reverse_s[cur]) {
      last_p += s[cur];
    } else {
      palindromic_list.push_back(last_p);
      last_p = "";
    }
  }
  if (last_p != "") {
    palindromic_list.push_back(last_p);
  }
  std::string output = "";
  for (const auto& ones_palindromic : palindromic_list) {
    if (output.size() < ones_palindromic.size()) {
      output = ones_palindromic;
    }
  }
  if (output == "") {
    output = s[0];
  }
  return output;
}
