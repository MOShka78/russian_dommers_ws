#include <reverse_int.hpp>

int Solution::reverse(int x) {
  int reverse_x = 0;
  while (x != 0) {
    if ((reverse_x < -214748363) || (reverse_x > 214748363)) {
      return 0;
    }
    reverse_x = reverse_x * 10 + x % 10;
    x /= 10;
  }
  return reverse_x;
}