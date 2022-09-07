/*
1. Two Sum
Easy

Given an array of integers nums and an integer target, return indices of the two
numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not
use the same element twice.

You can return the answer in any order.
 */

#include <unordered_map>
#include <vector>

using namespace std;

/*
// O(N^2) solution. Brute-force. Intuitive.
vector<int>
twoSum(vector<int>& nums, int target)
{
  int nl = nums.size();
  for (int i = 0; i < nl - 1; i++)
    for (int j = i + 1; j < nl; j++)
      if (nums[i] + nums[j] == target)
        return { i, j };
  return { -1, -1 };
}
 */

// O(N) solution. Use hashmap.
vector<int>
twoSum(vector<int>& nums, int target)
{
  int nl = nums.size();
  unordered_map<int, int> h;
  for (int i = 0; i < nl; i++) {
    auto iter = h.find(target - nums[i]);
    if (iter != h.end())
      return { i, iter->second };
    h[nums[i]] = i;
  }
  return { -1, -1 };
}