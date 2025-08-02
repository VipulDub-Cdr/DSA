#include<bits/stdc++.h>
using namespace std;

int coinChange(vector<int> coins, int amount){
    int n = coins.size();
    vector<int> dp(amount+1,INT_MAX);

    dp[0] = 0;
    for(int i =1;i<=amount;i++){
        for(int coin : coins){
            if((i-coin)>=0 and dp[i-coin]!=INT_MAX){
                dp[i] = min(dp[i],1+dp[i-coin]);
            }
        }
    }
    return dp[amount]==INT_MAX?-1:-dp[amount];
}
int main(){
    return 0;
}