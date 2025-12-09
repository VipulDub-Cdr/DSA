#include <bits/stdc++.h>
using namespace std;
//leetcode 403 - Frog jump

class Solution {
public:
    int dp[2001][2001];
    bool solve(int csi,int pj, unordered_map<int,int>& umpp,vector<int>& stones){
        if(csi==stones.size()-1) return true;
        if(dp[csi][pj]!=-1) return dp[csi][pj];
        int result = false; 
        for(int nextjump = pj-1;nextjump<=pj+1;nextjump++){
            if(nextjump>0 and umpp.find(stones[csi]+nextjump)!=umpp.end()){
                result = result || solve(umpp[stones[csi]+nextjump],nextjump,umpp,stones);
            }
        }
        return dp[csi][pj] = result;
    }
    bool canCross(vector<int>& stones) {
        unordered_map<int,int> umpp;
        for(int i=0;i<stones.size();i++){
            umpp[stones[i]] = i;
        }
        memset(dp,-1,sizeof(dp));
        if(stones[1]!=1) return false;
        int ans = solve(1,1,umpp,stones);
        return ans;
    }
};


// my iterative solution - 15/55 test cases passed gives TLE (3^n)
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