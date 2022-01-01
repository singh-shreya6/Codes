/* https://leetcode.com/problems/best-time-to-buy-and-sell-stock/ */

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mn = INT_MAX;
        int mx = 0;
        for(int i = 0;i < prices.size(); i++){
            mn = min(mn, prices[i]);
            mx = max(mx, prices[i] - mn);   
        }
        return mx;
    }
};