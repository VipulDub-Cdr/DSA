#include <bits/stdc++.h>
using namespace std;
vector<int> luckyNumbers(vector<vector<int>>& mat) {
    int n = mat.size();
    int m = mat[0].size();
    unordered_map<int,int> umpp;
    for(int i = 0;i<n;i++){
        int rowMin = INT_MAX;
        for(int j = 0;j<m;j++){
            rowMin = min(rowMin,mat[i][j]);
        }
        umpp[rowMin]++;
    }
    for(int j = 0;j<m;j++){
        int colMax = INT_MIN;
       for(int i = 0;i<n;i++){
            colMax = max(colMax,mat[i][j]);
        }
        umpp[colMax]++;     
    }
    vector<int> ans;
    for(auto it:umpp){
        if(it.second==2) ans.push_back(it.first);
    }
    return ans;
}  
int main() {
    vector<vector<int>> v = {{3,7,8},{9,11,13},{15,16,17}};
    vector<int> ans = luckyNumbers(v);
    return 0;
}