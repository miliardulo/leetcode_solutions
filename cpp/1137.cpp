/*
1137. N-th Tribonacci Number
Easy

The Tribonacci sequence Tn is defined as follows:

T0 = 0, T1 = 1, T2 = 1, and Tn+3 = Tn + Tn+1 + Tn+2 for n >= 0.

Given n, return the value of Tn.
*/

#include <bits/stdc++.h>

using namespace std;

int tribonacci(int n) {
  vector<int> t = {0, 1, 1};
  for (int i = 3; i <= n; i++)
    t.push_back(t[i - 3] + t[i - 2] + t[i - 1]);
  return t[n];
}
