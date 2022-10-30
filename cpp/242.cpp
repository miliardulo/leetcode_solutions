/* 242. Valid Anagram
Easy

Given two strings s and t, return true if t is an anagram of s, and false otherwise.

An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once. */

#include <bits/stdc++.h>

using namespace std;

bool isAnagram(string s, string t) {
  if (s.length() != t.length())
    return false;
  vector<int> alphabet(26, 0);
  for (int i = 0; i < s.length(); i++) {
    alphabet[s[i] - 'a']++;
    alphabet[t[i] - 'a']--;
  }
  for (int i : alphabet)
    if (i != 0)
      return false;
  return true;
}
