/* 
118. Pascal's Triangle
Easy

Given an integer numRows, return the first numRows of Pascal's triangle.

In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:
 */

#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> generate(int numRows) {
  vector<vector<int>> tri(numRows);
  for (int i = 0; i < numRows; i++) {
    tri[i] = vector<int>(i + 1, 1);
    for (int j = 1; j < i; j++)
      tri[i][j] = tri[i - 1][j - 1] + tri[i - 1][j];
  }
  return tri;
}
