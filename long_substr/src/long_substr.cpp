#include <long_substr.h>

int Solution::lengthOfLongestSubstring(std::string s) {
  int n = s.size();
  if (n == 0) {
    return 0;
  }
  std::unordered_map<char, int> charIdxMap;
  int left = 0;
  int maxLength = 0;

  for (int right = 0; right < n; right++) {
    char c = s[right];
    if (charIdxMap.count(c) > 0 && charIdxMap[c] >= left) {
      left = charIdxMap[c] + 1;
    }
    charIdxMap[c] = right;
    maxLength = std::max(maxLength, right - left + 1);
  }

  return maxLength;
}