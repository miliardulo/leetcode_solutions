/*
26. Remove Duplicates from Sorted Array
Easy

Given an integer array nums sorted in non-decreasing order, remove the
duplicates in-place such that each unique element appears only once. The
relative order of the elements should be kept the same.

Since it is impossible to change the length of the array in some languages, you
must instead have the result be placed in the first part of the array nums. More
formally, if there are k elements after removing the duplicates, then the first
k elements of nums should hold the final result. It does not matter what you
leave beyond the first k elements.

Return k after placing the final result in the first k slots of nums.

Do not allocate extra space for another array. You must do this by modifying the
input array in-place with O(1) extra memory.
 */

#include <bits/stdc++.h>

using namespace std;

// put unique elements to the front of the array

int removeDuplicates(vector<int> &nums) {
  int x = 0;
  for (auto &&i : nums) {
    if (i != nums[x]) {
      nums[++x] = i;
    }
  }
  return x + 1;
}

// actually delete duplicates ()
/*
int removeDuplicates(vector<int> &nums) {
  for (auto it = nums.begin(); it != nums.end() - 1;) {
    if (*it == *(it + 1))
      it = nums.erase(it);
    else
      it++;
  }
  return nums.size();
}
 */