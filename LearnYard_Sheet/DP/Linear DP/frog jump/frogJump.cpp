#include <bits/stdc++.h>
using namespace std;
//leetcode 403

class Solution {
public:
    bool canCross(vector<int>& stones) {
        
    }
};
int main() {
    
    return 0;
}
// my iterative solution - 15/55 test cases passed gives TLE
class SolutionTLE {
    bool solve(int i, unordered_map<int,int>& umpp,vector<int>& stones, vector<int>& dp){
        if(i==stones.size()-1) return true;
        int k1 = dp[i]-1;
        int k2 = dp[i];
        int k3 = dp[i]+1;
        int ans1 = false, ans2 = false, ans3 = false;
        if(umpp.count(stones[i]+k1) and umpp[stones[i]+k1]>i){
            dp[umpp[stones[i]+k1]] = k1;
            ans1 = solve(umpp[stones[i]+k1], umpp, stones, dp);
            dp[umpp[stones[i]+k1]] = -1;
        }
        if(umpp.count(stones[i]+k2) and umpp[stones[i]+k2]>i){
            dp[umpp[stones[i]+k2]] = k2;
            ans2 = solve(umpp[stones[i]+k2], umpp, stones, dp);
            dp[umpp[stones[i]+k2]] = -1;
        }
        if(umpp.count(stones[i]+k3) and umpp[stones[i]+k3]>i){
            dp[umpp[stones[i]+k3]] = k3;
            ans3 = solve(umpp[stones[i]+k3], umpp, stones, dp);
            dp[umpp[stones[i]+k3]] = -1;
        }
        if(ans1 or ans2 or ans3) return true;

        return false;
        
    }
public:
    bool canCross(vector<int>& stones) {
        int n = stones.size();
        vector<int> dp(n+1,-1);
        if((stones[1]-stones[0])!=1) return false;
        dp[1] = 1;
        unordered_map<int,int> umpp;
        for(int i = 0;i<n;i++){
            umpp[stones[i]] = i;
        }
        bool ans = solve(1, umpp, stones, dp);
        return ans;
    }
};