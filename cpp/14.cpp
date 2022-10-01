/*
14. Longest Common Prefix
Easy

Write a function to find the longest common prefix string amongst an array of
strings.

If there is no common prefix, return an empty string "".
 */

#include <string>
#include <vector>

using namespace std;

// O(NM) solution (N: size of strs, M: length of the shortest string)
string longestCommonPrefix(vector<string> &strs) {
  bool nextbreak = false;
  string ret = "";
  string target = strs[0];
  int tl = target.length();
  for (int i = 0; i < tl; i++) {
    for (auto j = strs.begin() + 1; j != strs.end(); j++)
      if (i >= j->length() || target[i] != (*j)[i])
        goto endOfLoop;
    ret += target[i];
  }
endOfLoop:
  return ret;
}
