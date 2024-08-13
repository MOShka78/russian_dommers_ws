#include <string_to_integer.hpp>

int Solution::myAtoi(std::string s) {
  int n = s.length();
  long long ans = 0;
  int sign = 1;
  int i = 0;
  while (i < n && s[i] == ' ') {
    i++;
  }

  if (i < n && s[i] == '-' || s[i] == '+') {
    sign = (s[i] == '-') ? -1 : 1;
    i++;
  }

  while (i < n && isdigit(s[i])) {
    ans = ans * 10 + (s[i] - '0');

    if (ans > INT32_MAX) {
      return (sign == -1) ? INT32_MIN : INT32_MAX;
    }
    i++;
  }

  return static_cast<int>(ans * sign);
}