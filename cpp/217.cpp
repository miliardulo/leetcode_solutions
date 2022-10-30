/* 217. Contains Duplicate
Easy

Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct. */

#include <bits/stdc++.h>

using namespace std;

bool containsDuplicate(vector<int> &nums) {
  return nums.size() > unordered_set<int>(nums.begin(), nums.end()).size();
}
