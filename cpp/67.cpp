/*
67. Add Binary
Easy

Given two binary strings a and b, return their sum as a binary string.
 */

#include <bits/stdc++.h>

using namespace std;

string addBinary(string a, string b) {
  string s = "";
  auto ita = a.rbegin(), itb = b.rbegin();
  int carry = 0;
  while (ita != a.rend() || itb != b.rend()) {
    int x = carry;
    if (ita != a.rend()) {
      x += *(ita) - '0';
      ita++;
    }
    if (itb != b.rend()) {
      x += *(itb) - '0';
      itb++;
    }
    s = (char)((int)('0') + (x & 1)) + s;
    carry = x >> 1;
  }
  if (carry == 1)
    s = '1' + s;
  return s;
}
