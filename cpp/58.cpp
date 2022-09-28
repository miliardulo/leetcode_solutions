/*
58. Length of Last Word
Easy

Given a string s consisting of words and spaces, return the length of the last
word in the string.

A word is a maximal substring consisting of non-space characters only.
 */

#include <bits/stdc++.h>

using namespace std;

int lengthOfLastWord(string s) {
  string word;
  bool metspace = false;
  for (auto c : s) {
    if (c == ' ') {
      metspace = true;
      continue;
    }
    if (metspace) {
      word = string(1, c);
      metspace = false;
    } else {
      word += c;
    }
  }
  return word.length();
}
