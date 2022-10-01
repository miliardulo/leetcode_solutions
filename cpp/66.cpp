/*
66. Plus One
Easy

You are given a large integer represented as an integer array digits, where each
digits[i] is the ith digit of the integer. The digits are ordered from most
significant to least significant in left-to-right order. The large integer does
not contain any leading 0's.

Increment the large integer by one and return the resulting array of digits.
 */

#include <bits/stdc++.h>

using namespace std;

vector<int> plusOne(vector<int> &digits) {
  *(digits.rbegin()) += 1;
  for (auto it = digits.rbegin(); it != digits.rend() - 1 && *(it) > 9; it++) {
    *(it) = 0;
    *(it + 1) += 1;
  }
  if (digits[0] == 10) {
    digits[0] = 0;
    digits.insert(digits.begin(), 1);
  }
  return digits;
}
