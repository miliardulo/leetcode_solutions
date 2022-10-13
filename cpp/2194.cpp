/* 
2194. Cells in a Range on an Excel Sheet
Easy

A cell (r, c) of an excel sheet is represented as a string "<col><row>" where:

    <col> denotes the column number c of the cell. It is represented by alphabetical letters.
        For example, the 1st column is denoted by 'A', the 2nd by 'B', the 3rd by 'C', and so on.
    <row> is the row number r of the cell. The rth row is represented by the integer r.

You are given a string s in the format "<col1><row1>:<col2><row2>", where <col1> represents the column c1, <row1> represents the row r1, <col2> represents the column c2, and <row2> represents the row r2, such that r1 <= r2 and c1 <= c2.

Return the list of cells (x, y) such that r1 <= x <= r2 and c1 <= y <= c2. The cells should be represented as strings in the format mentioned above and be sorted in non-decreasing order first by columns and then by rows.
 */

#include <bits/stdc++.h>

using namespace std;

vector<string> cellsInRange(string s) {
  vector<string> ret;
  char col1 = s[0], col2 = s[3];
  int row1 = s[1] - '0', row2 = s[4] - '0';
  for (int i = 0; i <= col2 - col1; i++) {
    for (int j = 0; j <= row2 - row1; j++) {
      ret.push_back((char)(col1 + i) + to_string(row1 + j));
    }
  }
  return ret;
}
