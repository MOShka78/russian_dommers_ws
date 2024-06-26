# russian_dommers_ws


## add_two_numbers
Вам даны два непустых связанных списка, представляющих два неотрицательных целых числа. Цифры хранятся в обратном порядке, и каждый из их узлов содержит одну цифру. Сложите два числа и верните сумму в виде связанного списка.

Вы можете предположить, что эти два числа не содержат ведущих нулей, кроме самого числа 0.

Example 1:
```
Input: l1 = [2,4,3], l2 = [5,6,4]
Output: [7,0,8]
Explanation: 342 + 465 = 807.
```
Example 2:
```
Input: l1 = [0], l2 = [0]
Output: [0]
```
Example 3:
```
Input: l1 = [9,9,9,9,9,9,9], l2 = [9,9,9,9]
Output: [8,9,9,9,0,0,0,1]
```
Constraints:

- The number of nodes in each linked list is in the range [1, 100].
- 0 <= Node.val <= 9
 - It is guaranteed that the list represents a number that does not have leading zeros.

 ``` cpp
 /**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
    }
};
 ```

### build and run test
```
cmake -S. -Bbuild add_two_numbers/
cmake --build build/
ctest --test-dir build/ -V
```

## two_sum

Учитывая массив целых чисел `nums` и integer `target`, верните индексы двух чисел так, чтобы их сумма составляла `target`.

Вы можете предположить, что каждый вход будет иметь ровно одно решение, и вы не можете использовать один и тот же элемент дважды.

Вы можете вернуть ответ в любом порядке.

Example 1:
```
Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
```
Example 2:
```
Input: nums = [3,2,4], target = 6
Output: [1,2]
```
Example 3:
```
Input: nums = [3,3], target = 6
Output: [0,1]
```
Constraints:

   - 2 <= nums.length <= 10^4
   - -10^9 <= nums[i] <= 10^9
   - -10^9 <= target <= 10^9
   - Only one valid answer exists.

``` cpp
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
    }
};
```

### build and run test
```
cmake -S. -Bbuild two_sum/
cmake --build build/
ctest --test-dir build/ -V
```

## long_substr

Учитывая строку `s`, найдите длину самой длинной `substring` без повторяющихся символов.


> Longest Substring Without Repeating Characters


Example 1:
```
Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.
```
Example 2:
```
Input: s = "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.
```
Example 3:
```
Input: s = "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3.
Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.
```

Constraints:

- `0 <= s.length <= 5 * 10^4`
- `s` consists of English letters, digits, symbols and spaces.


``` cpp
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
    }
};
```

### build and run test
```
cmake -S. -Bbuild long_substr/
cmake --build build/
ctest --test-dir build/ -V
```