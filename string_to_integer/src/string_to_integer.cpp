#include <string_to_integer.hpp>

int Solution::myAtoi(std::string s) {
  int output = 0;
  std::map<std::string, int> number_list{{"0", 0}, {"1", 1}, {"2", 2}, {"3", 3},
                                         {"4", 4}, {"5", 5}, {"6", 6}, {"7", 7},
                                         {"8", 8}, {"9", 9}};
  bool init = false;
  int K_MINUS = 1;

  for (const auto& symbol : s) {
    std::string current_symbol(1, symbol);

    if (current_symbol == " ") {
      continue;
    }
    if ((current_symbol == "-") && (!init)) {
      K_MINUS = -1;
      init = true;
      continue;
    }
    if ((current_symbol == "+") && (!init)) {
      K_MINUS = 1;
      init = true;
      continue;
    }
    if (number_list.find(current_symbol) == number_list.end()) {
      return output * K_MINUS;
    }
    if ((output * K_MINUS) > (INT32_MAX / 10)) {
      return INT32_MAX * K_MINUS;
    }
    if ((output * K_MINUS) < (INT32_MIN / 10)) {
      return INT32_MIN * K_MINUS;
    }
    output = output * 10 + number_list[current_symbol];
    init = true;
  }
  return output * K_MINUS;
}