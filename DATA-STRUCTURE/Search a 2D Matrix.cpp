// link: https://leetcode.com/problems/search-a-2d-matrix/

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        vector<int> v;
        for(int i=0; i<matrix.size(); i++) {
            for(int j=0; j<matrix[0].size(); j++) {
               v.push_back(matrix[i][j]);
            }
        }
        
        int l = 0, r = v.size()-1,mid;
        while(l<=r) {
            mid = (l+r)/2;
            if(v[mid] == target) return true;
            else if(v[mid] > target) r = mid-1;
            else l = mid+1;
        }
        return false;
    }
};