#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        if(n==0 or n==1) return n;
        vector<int> dp(n+1,-1);
        //even if you are coming from the step-1 still it is one way of doing the thing.
        dp[0] = 1;
        dp[1] = 1;
        for(int i = 2;i<=n;i++){
            dp[i] = dp[i-1]+dp[i-2];
        }
        return dp[n];
    }
};
