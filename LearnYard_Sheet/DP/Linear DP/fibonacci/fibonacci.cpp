#include <bits/stdc++.h>
using namespace std;
int fibonacciRecursive(int n){
    if(n==1 or n==0) return n;

    int left = fibonacciRecursive(n-1);
    int right = fibonacciRecursive(n-2);

    int value = left+right;

    return value;
}

int solve1(int n, vector<int>& dp){
    if(n==1 or n==0){
        dp[n] = n;
        return n;
    }

    if(dp[n]!=-1) return dp[n];

    int left = solve1(n-1,dp);
    int right = solve1(n-2,dp);

    dp[n] = left+right;

    return dp[n];
}

int fibonacciTB(int n){
    vector<int> dp(n+1,-1);
    int ans = solve1(n, dp);
    return ans;
}

//bottom to top approach is known as tabulation and is the better approach over memoization.
int solve2(int n, vector<int>& dp){
    if(n==0 or n==1) return n;
    dp[0] = 0;
    dp[1] = 1;
    for(int i=2;i<=n;i++){
        dp[i] = dp[i-1]+dp[i-2]; 
    }
    return dp[n];
}

int fibonacciBT(int n){
    vector<int> dp(n+1,-1);
    int ans = solve2(n,dp);
    return ans;
}

int main() {
    int n = 6;
    int term = fibonacciRecursive(n);
    cout<<term<<endl;
    int term2 = fibonacciTB(n);
    cout<<term2<<endl;
    int term3 = fibonacciBT(n);
    cout<<term3<<endl;
    return 0;
}