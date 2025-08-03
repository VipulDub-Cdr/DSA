#include <bits/stdc++.h>
using namespace std;

//without dp (using recursion only)
class Solution{
private:
    int t[301][5001];
    int solve(int i, int amount,vector<int>& coins){
        int n = coins.size();
        if(amount ==0) return 1;
        if(i==n) return 0;
        if(amount < coins[i]){
            return solve(i+1,amount, coins);
        }
        
        int take = solve(i,amount-coins[i],coins);
        int skip = solve(i+1, amount,coins);

        return take+skip;
    }
public:
    int change(int amount, vector<int>& coins) {
        int n = coins.size();
        int i = 0;
        memset(t,-1,sizeof(t));
        int ans = solve(i, amount,coins);
                
    }
};

//using dp;
class Solution {
    int t[301][5001];
    int solve(int i,int amount,vector<int> coins){
        if(amount==0) return 1;
        if(i==coins.size()) return 0;
        if(t[i][amount]!=-1){
            return t[i][amount];
        }
        if(amount<coins[i]){
            return t[i][amount] = solve(i+1,amount,coins);
        }

        int take = solve(i,amount-coins[i],coins);
        int skip = solve(i+1,amount,coins);

        return t[i][amount] = take+skip;
    }
public:
    int change(int amount, vector<int>& coins) {
        int n = coins.size();
        int i = 0;
        memset(t,-1,sizeof(t));
        int combinations = solve(i,amount,coins);
        return combinations;
    }
};
int main() {
    cout<<"inside main"<<endl;
    return 0;
}