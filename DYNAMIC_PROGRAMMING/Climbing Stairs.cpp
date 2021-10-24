// link: https://leetcode.com/problems/climbing-stairs/

class Solution
{
public:
    int climbStairs(int n)
    {
        int a = 0, b = 1, c = 2;
        //  if(n==1) return 1;
        // if(n==2) return 2;
        // else
        //     return climbStairs(n-1) + climbStairs(n-2);

        for (int i = 3; i <= n; i++)
        {
            a = b + c;
            b = c;
            c = a;
        }
        if (n == 1)
            return a = b;
        if (n == 2)
            return a = c;
        return a;
    }
};



// 2nd solution 

class Solution {
public:
    int climbStairs(int n) {
        int arr[n+1];
        arr[0] = 1;
        arr[1] = 1;
        for(int i=2; i<=n; i++) {
            arr[i] = arr[i-1] + arr[i-2];
        }
        return arr[n];
    }
};