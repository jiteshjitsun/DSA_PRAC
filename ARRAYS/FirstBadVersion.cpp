// link: https://leetcode.com/problems/first-bad-version/

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int l=1,r=n,mid,res;
        while(l<=r) {
            mid =r- (r-l)/2;
            if(isBadVersion(mid))
            {
                
                res = mid;r=mid-1;
                
            }
            else l = mid+1;
            
        }
        return res;
    }
};