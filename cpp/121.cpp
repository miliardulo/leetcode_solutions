/* 
121. Best Time to Buy and Sell Stock
Easy

You are given an array prices where prices[i] is the price of a given stock on the ith day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.
 */

#include <vector>

using namespace std;

int maxProfit(vector<int> &prices) {
  int profit = 0;
  int buy = prices[0];
  int pl = prices.size();
  for (int i = 1; i < pl; i++) {
    int x = prices[i];
    if (x < buy)
      buy = x;
    if (x > buy)
      profit = max(profit, x - buy);
  }
  return profit;
}
