#include <int_to_roman.h>
std::string Solution::intToRoman(int num) {
  std::string thousand = m[num / 1000];
  std::string hundread = c[(num / 100) % 10];
  std::string dec = x[(num / 10) % 10];
  std::string number = i[num % 10];
  return thousand + hundread + dec + number;
}
