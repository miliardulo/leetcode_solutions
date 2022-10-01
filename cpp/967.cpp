/*
967. Numbers With Same Consecutive Differences
Medium

Return all non-negative integers of length n such that the absolute difference
between every two consecutive digits is k.

Note that every number in the answer must not have leading zeros. For example,
01 has one leading zero and is invalid.

You may return the answer in any order.
 */

#include <vector>

using namespace std;

void makenum(int x, int n, int k, vector<int> &v);

vector<int> numsSameConsecDiff(int n, int k) {
  vector<int> ret;
  for (int i = 1; i <= 9; i++) {
    makenum(i, n - 1, k, ret);
  }
  return ret;
}

void makenum(int x, int n, int k, vector<int> &v) {
  if (n == 0) {
    v.push_back(x);
    return;
  }
  int d = x % 10;
  int p = d + k;
  int s = d - k;
  x *= 10;
  if (p < 10) {
    makenum(x + p, n - 1, k, v);
  }
  if (s >= 0 && p != s) {
    makenum(x + s, n - 1, k, v);
  }
  return;
}
