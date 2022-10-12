/* 
2114. Maximum Number of Words Found in Sentences
Easy

A sentence is a list of words that are separated by a single space with no leading or trailing spaces.

You are given an array of strings sentences, where each sentences[i] represents a single sentence.

Return the maximum number of words that appear in a single sentence.
 */

#include <bits/stdc++.h>

using namespace std;

int mostWordsFound(vector<string> &sentences) {
  int mword = 0;
  for (string &s : sentences) {
    int cnt = 0;
    for (char &c : s)
      if (c == ' ')
        cnt++;
    mword = max(mword, cnt + 1);
  }
  return mword;
}
