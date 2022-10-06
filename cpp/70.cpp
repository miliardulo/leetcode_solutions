/* 
70. Climbing Stairs
Easy

You are climbing a staircase. It takes n steps to reach the top.

Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?
 */

using namespace std;

int climbStairs(int n) {
  if (n <= 3)
    return n;
  int low = 1, high = 2;
  for (int i = 2; i < n; i++) {
    int tmp = low + high;
    low = high;
    high = tmp;
  }
  return high;
}
