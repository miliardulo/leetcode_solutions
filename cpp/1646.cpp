/* 
1646. Get Maximum in Generated Array
Easy

You are given an integer n. A 0-indexed integer array nums of length n + 1 is generated in the following way:

    nums[0] = 0
    nums[1] = 1
    nums[2 * i] = nums[i] when 2 <= 2 * i <= n
    nums[2 * i + 1] = nums[i] + nums[i + 1] when 2 <= 2 * i + 1 <= n

Return the maximum integer in the array nums​​​.
 */

#include <vector>

using namespace std;

int getMaximumGenerated(int n) {
  if (n < 2)
    return n;
  vector<int> nums(n + 1);
  nums[0] = 0;
  nums[1] = 1;
  int mnum = 1;
  for (int i = 2; i <= n; i++) {
    nums[i] = (i % 2 == 0 ? nums[i / 2] : nums[i / 2] + nums[1 + i / 2]);
    mnum = max(mnum, nums[i]);
  }
  return mnum;
}
