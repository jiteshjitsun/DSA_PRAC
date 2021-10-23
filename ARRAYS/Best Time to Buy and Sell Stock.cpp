//  link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int m = 0;
        int minn = INT_MAX;
        for(int i=0; i<prices.size(); i++) {
            minn = min(minn, prices[i]);
            m = max(m, prices[i]-minn);
        }
        return m;
    }
};