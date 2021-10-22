/* link: https://leetcode.com/problems/maximum-subarray/ */

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0, a = INT_MIN;
        for(int i=0; i<nums.size(); i++) {
            sum+=nums[i];
            if(a < sum) a = sum;
            if(sum<0) sum = 0;
        }
        return a;
    }
};