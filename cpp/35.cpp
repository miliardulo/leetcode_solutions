/*
35. Search Insert Position
Easy

Given a sorted array of distinct integers and a target value, return the index
if the target is found. If not, return the index where it would be if it were
inserted in order.

You must write an algorithm with O(log n) runtime complexity.
 */

#include <bits/stdc++.h>

using namespace std;

// binary search : O(log n)

int searchInsert(vector<int> &nums, int target) {
  int left = 0, right = nums.size() - 1;
  while (left <= right) {
    int i = (left + right) / 2;
    int n = nums[i];
    if (n == target)
      return i;
    else if (n < target)
      left = i + 1;
    else
      right = i - 1;
  }
  return right;
}
