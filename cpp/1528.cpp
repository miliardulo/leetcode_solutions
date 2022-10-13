/* 
1528. Shuffle String
Easy

You are given a string s and an integer array indices of the same length. The string s will be shuffled such that the character at the ith position moves to indices[i] in the shuffled string.

Return the shuffled string.
 */

#include <bits/stdc++.h>

using namespace std;

string restoreString(string s, vector<int> &indices) {
  string newstr = s;
  for (int i = 0; i < s.size(); i++)
    newstr[indices[i]] = s[i];
  return newstr;
}
