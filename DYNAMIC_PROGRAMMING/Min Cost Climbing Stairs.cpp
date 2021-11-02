// link: https://leetcode.com/problems/min-cost-climbing-stairs/

class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int dp[cost.size()];
        if(cost.size()==1) return cost[0];
        dp[0] = cost[0];
        dp[1] = cost[1];
        
        for(int i=2; i<cost.size(); i++) {
            dp[i] = min(dp[i-1],dp[i-2]) + cost[i];
        }
        
        return min(dp[cost.size()-1], dp[cost.size()-2]);
    }
};