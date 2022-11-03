/* 347. Top K Frequent Elements
Medium

Given an integer array nums and an integer k, return the k most frequent elements. You may return the answer in any order. */

#include <bits/stdc++.h>

using namespace std;

vector<int> topKFrequent(vector<int> &nums, int k) {
  unordered_map<int, int> dict;
  for (auto &i : nums)
    dict[i]++;
  vector<pair<int, int>> vec(dict.begin(), dict.end());
  sort(vec.begin(), vec.end(),
       [](const pair<int, int> &a, const pair<int, int> &b) -> bool {
         return a.second > b.second;
       });
  vector<int> ret;
  for (int i = 0; i < k; i++)
    ret.push_back(vec[i].first);
  return ret;
}
