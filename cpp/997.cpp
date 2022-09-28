/*
997. Find the Town Judge
Easy

In a town, there are n people labeled from 1 to n. There is a rumor that one of
these people is secretly the town judge.

If the town judge exists, then:

    The town judge trusts nobody.
    Everybody (except for the town judge) trusts the town judge.
    There is exactly one person that satisfies properties 1 and 2.

You are given an array trust where trust[i] = [ai, bi] representing that the
person labeled ai trusts the person labeled bi.

Return the label of the town judge if the town judge exists and can be
identified, or return -1 otherwise.
 */

#include <bits/stdc++.h>

using namespace std;

int findJudge(int n, vector<vector<int>> &trust) {
  vector<int> cntTrust(n, 0);
  for (auto &&v : trust) {
    int first = v[0] - 1, second = v[1] - 1;
    cntTrust.at(first) = -1;
    if (cntTrust.at(second) >= 0)
      cntTrust.at(second) += 1;
  }
  for (int i = 0; i < n; i++)
    if (cntTrust.at(i) == n - 1)
      return i + 1;
  return -1;
}
