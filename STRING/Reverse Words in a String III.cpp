//  link: https://leetcode.com/problems/reverse-words-in-a-string-iii/

class Solution {
public:
    string reverseWords(string s) {
        int i=0;
        int length = s.length();
        for(i=0; i<s.length(); i++) {
            int start = i;
            while(s[i]!=' ' && i<length) {
                i+=1;
            }
            
            int l=start,r=i-1;
            while(l<r) {
                swap(s[l], s[r]);
                l++; r--;
            }
            // while (i < length && s[i] == ' ') {
            //     i++;
            // }
        }
        return s;
    }
};