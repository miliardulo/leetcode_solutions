/* 
771. Jewels and Stones
Easy

You're given strings jewels representing the types of stones that are jewels, and stones representing the stones you have. Each character in stones is a type of stone you have. You want to know how many of the stones you have are also jewels.

Letters are case sensitive, so "a" is considered a different type of stone from "A".
 */

#include <bits/stdc++.h>

using namespace std;

int numJewelsInStones(string jewels, string stones) {
  set<char> jset = set<char>(jewels.begin(), jewels.end());
  int cnt = 0;
  for (auto &c : stones)
    if (jset.find(c) != jset.end())
      cnt++;
  return cnt;
}
