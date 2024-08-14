# russian_dommers_ws

## build and run test
Чтобы сбилдить и запустить тесты всех пакетов
```
cmake -Bbuild .
cmake --build build/
ctest --test-dir build/ --progress -V
```

Чтобы сбилдить и запустить конкретный пакет
```
cmake -S. -Bbuild package_name/
cmake --build build/
ctest --test-dir build/ -V --progress
```

## Выполненные задания Leetcode
1) `Two Sum`

Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
You can return the answer in any order.

2) `Add Two Numbers`

You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.
You may assume the two numbers do not contain any leading zero, except the number 0 itself.

3) `Longest Substring Without Repeating Characters`

Given a string s, find the length of the longest substring without repeating characters.

4) `Median of Two Sorted Arrays`

Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.
The overall run time complexity should be O(log (m+n)).

5) `Reverse Integer`

Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range, then return 0.
Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

6) `String to Integer (atoi)`

Implement the myAtoi(string s) function, which converts a string to a 32-bit signed integer.
The algorithm for myAtoi(string s) is as follows:

7) `Palindrome Number`

Given an integer x, return true if x is a palindrome, and false otherwise.

8) `Container With Most Water`

You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).

9) `Integer to Roman`

Roman numerals are formed by appending the conversions of decimal place values from highest to lowest. Converting a decimal place value into a Roman numeral has the following rules:

- If the value does not start with 4 or 9, select the symbol of the maximal value that can be subtracted from the input, append that symbol to the result, subtract its value, and convert the remainder to a Roman numeral.

- If the value starts with 4 or 9 use the subtractive form representing one symbol subtracted from the following symbol, for example, 4 is 1 (I) less than 5 (V): IV and 9 is 1 (I) less than 10 (X): IX. Only the following subtractive forms are used: 4 (IV), 9 (IX), 40 (XL), 90 (XC), 400 (CD) and 900 (CM).

- Only powers of 10 (I, X, C, M) can be appended consecutively at most 3 times to represent multiples of 10. You cannot append 5 (V), 50 (L), or 500 (D) multiple times. If you need to append a symbol 4 times use the subtractive form.