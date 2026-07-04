#include<cmath> // required for INT_MAX
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_price = INT_MAX;// Start with the highest possible upper bound
        int max_profit = 0;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<min_price){
                min_price = prices[i];//// Found a cheaper valley day to buy
            }
            else{
                int profit = prices[i] - min_price;
                if(profit > max_profit){
                    max_profit = profit;
                }
            }
        }
        return max_profit;
    }
};

/*
❌ DO NOT DO THIS (Time Limit Exceeded)
for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
        max_profit = max(max_profit, prices[j] - prices[i]);
    }
}
While logically sound, this O(N^2) brute force approach will hit a hard wall and crash with a Time Limit Exceeded (TLE) error on LeetCode's massive test cases.I must use the single-pass tracking method
*/