#include <bits/stdc++.h>
using namespace std;
int maximumWealth(vector<vector<int>>& accounts) {
    int n = accounts.size();
    int m = accounts[0].size();
    int maxMoney = INT_MIN;
    for(int i = 0;i<n;i++){
        int money = 0;
        for(int j = 0;j<m;j++){
            money+=accounts[i][j];
        }
        maxMoney = max(maxMoney,money);
    }
    return maxMoney;
}
int main() {
    vector<vector<int>> v = {{1,2,3},{3,2,1}};
    cout<<maximumWealth(v);
    return 0;
}