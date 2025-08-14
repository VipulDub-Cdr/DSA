#include <bits/stdc++.h>
using namespace std;

//memoization - 46/47 test cases passed 
class Solution {
    int t[1001][1001];
    int m,n;
    int solve(int i, int j, string text1, string text2){
        if(i>=m or j>=n) return 0;

        if(t[i][j]!=-1){
            return t[i][j];
        }

        if(text1[i]==text2[j]){
            return t[i][j] = 1+solve(i+1,j+1,text1,text2);
        }

        return t[i][j] = max(solve(i+1,j,text1,text2),solve(i,j+1,text1,text2));
    }
public:
    int longestCommonSubsequence(string text1, string text2) {
        m = text1.length();
        n = text2.length();
        memset(t,-1,sizeof(t));
        int ans = solve(0,0,text1,text2);
        return ans;
    }
};

//Bottom-Up DP
class Solution2 {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int m = text1.size();   
        int n = text2.size(); 
        
        vector<vector<int>> dp(m+1,vector<int>(n+1,0));

        for(int i = 1;i<=m;i++){
            for(int j = 1;j<=n;j++){
                if(text1[i-1]==text2[j-1]) dp[i][j] = 1+dp[i-1][j-1];
                else dp[i][j] = max(dp[i][j-1],dp[i-1][j]);
            }
        }
        return dp[m][n];
    }
};

//There is more space optimised solution for this bu we'll do it later

int main() {
    int m = 5;
    int n = 3;
    vector<vector<int>> dp(m+1,vector<int>(n+1,0));

    for(auto row:dp){
        for(auto val:row){
            cout<<val<<" ";
        }
        cout<<endl;
    }
    return 0;
}