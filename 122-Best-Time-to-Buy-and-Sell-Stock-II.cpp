class Solution {
public:
    int maxProfit(vector<int> &prices) {
        int ret = 0;
        for (int p = 1; p < prices.size(); p++){
          ret += max(prices[p] - prices[p - 1], 0);      
        }
        return ret;
    }
};

/* 122. Best-Time-to-Buy-and-Sell-Stock-II.cpp
//////////////////////////////////////////////////
Say you have an array prices for which the ith element is the price of a given stock on day i.
Design an algorithm to find the maximum profit. 
You may complete as many transactions as you like (i.e., buy one and sell one share of the stock multiple times).
Note: You may not engage in multiple transactions at the same time (i.e., you must sell the stock before you buy again).

Input: [7,1,5,3,6,4]
Output: 7
Explanation: Buy on day 2 (price = 1) and sell on day 3 (price = 5), profit = 5-1 = 4.
             Then buy on day 4 (price = 3) and sell on day 5 (price = 6), profit = 6-3 = 3.

https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/
//////////////////////////////////////////////////
*/
