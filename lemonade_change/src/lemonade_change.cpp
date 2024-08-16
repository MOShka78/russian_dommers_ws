#include <lemonade_change.hpp>
bool Solution::lemonadeChange(std::vector<int>& bills) {
  int change_five = 0;
  int change_ten = 0;

  for (const int& client : bills) {
    if (client == 5) {
      change_five++;
      continue;
    }

    if (client == 10) {
      if (change_five != 0) {
        change_five--;
        change_ten++;
        continue;
      } else {
        return false;
      }
    }

    if ((client == 20)) {
      if ((change_five != 0) && (change_ten != 0)) {
        change_five--;
        change_ten--;
        continue;
      } else if (change_five >= 3) {
        change_five -= 3;
      } else {
        return false;
      }
    }
  }
  return true;
}