/* 49. Group Anagrams
Medium

Given an array of strings strs, group the anagrams together. You can return the answer in any order.

An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once. */

#include <bits/stdc++.h>

using namespace std;

vector<vector<string>> groupAnagrams(vector<string> &strs) {
  vector<vector<string>> ret;
  unordered_map<string, vector<string>> sm;
  for (string &s : strs) {
    string stmp = s;
    sort(s.begin(), s.end());
    sm[s].push_back(stmp);
  }
  for (auto &i : sm)
    ret.push_back(i.second);
  return ret;
}
