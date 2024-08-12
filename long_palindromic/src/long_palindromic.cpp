#include <long_palindromic.hpp>

std::string Solution::longestPalindrome(std::string s) {
  std::string reverse_s = s;
  std::reverse(reverse_s.begin(), reverse_s.end());
  std::string last_p = "";
  std::vector<std::string> palindromic_list;
  for (int cur = 0; cur < s.size(); cur++) {
    if (s[cur] == last_p[last_p.size() - 1]) {
      int k = 1;
      for (int j = cur; j < last_p.size(); j++) {
        if (last_p[last_p.size() - k] == s[j]){
          palindromic_list.
        } 
      }
    } else {
      last_p += s[cur];
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
