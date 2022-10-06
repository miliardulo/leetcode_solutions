/* 
119. Pascal's Triangle II
Easy

Given an integer rowIndex, return the rowIndexth (0-indexed) row of the Pascal's triangle.
 */

#include <vector>

using namespace std;

vector<int> getRow(int rowIndex) {
  vector<int> row = {1};
  for (int i = 0; i < rowIndex; i++) {
    for (int j = i; j > 0; j--)
      row[j] += row[j - 1];
    row.push_back(1);
  }
  return row;
}
