/* 
338. Counting Bits
Easy

Given an integer n, return an array ans of length n + 1 such that for each i (0 <= i <= n), ans[i] is the number of 1's in the binary representation of i.
 */

#include <bits/stdc++.h>

using namespace std;

vector<int> countBits(int n) {
  vector<int> arr(n + 1, 0);
  for (int i = 1; i <= n; i++)
    arr[i] = arr[i >> 1] + (i & 1);
  return arr;
}
