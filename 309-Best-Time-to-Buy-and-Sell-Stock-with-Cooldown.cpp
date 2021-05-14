class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<int> hold(prices.size(), 0);
        vector<int> sold(prices.size(), 0);
        vector<int> rest(prices.size(), 0);
        
        hold[0] = -prices[0];
        sold[0] = INT_MIN;
        rest[0] = 0;
        
        for(int i=1; i<prices.size(); i++){
            hold[i] = max(hold[i-1], rest[i-1]-prices[i]);
            sold[i] = hold[i-1] + prices[i];
            rest[i] = max(rest[i-1], sold[i-1]);
        }
        
        //s0: rest
        //s1: hold
        //s2: sold
        
        // s0[i] = max(s0[i - 1], s2[i - 1]); 
        // Stay at s0, or rest from s2    
        // Can buy, ie, we have no stock now, and the max profit should be ''last no stock profit'' or ''last rest profit''
        
        // s1[i] = max(s1[i - 1], s0[i - 1] - prices[i]); 
        // Stay at s1, or buy from s0     
        // Can sell, ie, we now have stock, and the profit should be ''last stock profit'' or ''last no stock but buy this time'' 

        // s2[i] = s1[i - 1] + prices[i]; 
        // Only one way from s1  
        // We should sell then take a rest
        
        return max(sold[prices.size()-1], rest[prices.size()-1]);
    }
};

/* 309. Best-Time-to-Buy-and-Sell-Stock-with-Cooldown.cpp
//////////////////////////////////////////////////
You are given an array prices where prices[i] is the price of a given stock on the ith day.

Find the maximum profit you can achieve. You may complete as many transactions as you like 
(i.e., buy one and sell one share of the stock multiple times) with the following restrictions:

After you sell your stock, you cannot buy stock on the next day (i.e., cooldown one day).
Note: You may not engage in multiple transactions simultaneously (i.e., you must sell the stock before you buy again).

Example 1:

Input: prices = [1,2,3,0,2]
Output: 3
Explanation: transactions = [buy, sell, cooldown, buy, sell]

https://leetcode.com/problems/best-time-to-buy-and-sell-stock-with-cooldown/
//////////////////////////////////////////////////
*/
