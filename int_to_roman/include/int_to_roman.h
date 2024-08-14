#pragma once

#include <iostream>
#include <unordered_map>
#include <vector>

class Solution {
 public:
  std::string intToRoman(int num);
  std::vector<std::string> m = {"", "M", "MM", "MMM"};
  std::vector<std::string> c = {"",  "C",  "CC",  "CCC",  "CD",
                                "D", "DC", "DCC", "DCCC", "CM"};
  std::vector<std::string> x = {"",  "X",  "XX",  "XXX",  "XL",
                                "L", "LX", "LXX", "LXXX", "XC"};
  std::vector<std::string> i = {"",  "I",  "II",  "III",  "IV",
                                "V", "VI", "VII", "VIII", "IX"};
};