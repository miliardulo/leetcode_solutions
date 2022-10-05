/* 
509. Fibonacci Number
Easy

The Fibonacci numbers, commonly denoted F(n) form a sequence, called the Fibonacci sequence, such that each number is the sum of the two preceding ones, starting from 0 and 1. That is,

F(0) = 0, F(1) = 1
F(n) = F(n - 1) + F(n - 2), for n > 1.

Given n, calculate F(n).
 */

#include <bits/stdc++.h>

using namespace std;

int fib(int n) {
  vector<int> fib = {0, 1};
  for (int i = 2; i <= n; i++)
    fib.push_back(fib[i - 2] + fib[i - 1]);
  return fib[n];
}
