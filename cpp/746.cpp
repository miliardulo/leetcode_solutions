/* 
746. Min Cost Climbing Stairs
Easy

You are given an integer array cost where cost[i] is the cost of ith step on a staircase. Once you pay the cost, you can either climb one or two steps.

You can either start from the step with index 0, or the step with index 1.

Return the minimum cost to reach the top of the floor.
 */

#include <vector>

using namespace std;

int minCostClimbingStairs(vector<int> &cost) {
  int cl = cost.size();
  for (int i = 2; i < cl; i++)
    cost[i] += min(cost[i - 2], cost[i - 1]);
  return min(cost[cl - 2], cost[cl - 1]);
}
