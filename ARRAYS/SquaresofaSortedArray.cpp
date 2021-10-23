// link: https://leetcode.com/problems/squares-of-a-sorted-array/


class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int l = 0,r = nums.size()-1;
        int res[nums.size()];
        for(int i=r; i>=0; i--) {
            if(abs(nums[l]) > nums[r]) {
                res[i] = nums[l]*nums[l];
                l++;
            }
            else {
                res[i] = nums[r]*nums[r];
                r--;
            }
        }
        for(int i=0; i<nums.size(); i++) {
            nums[i] = res[i];
        }
        return nums;
    }
};