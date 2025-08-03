#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> restoreMatrix(vector<int>& rowsum, vector<int>& colsum) {
    int m = rowsum.size();
    int n = colsum.size();
    vector<vector<int>> mat(m,vector<int>(n,0));
    int i = 0;
    int j = 0;
    while(i<m and j<n){
        int minval = min(rowsum[i],colsum[j]);
        mat[i][j] = minval;
        rowsum[i]-=minval;colsum[j]-=minval;
        if(rowsum[i]==0) i++;
        if(colsum[j]==0) j++;
    }
    return mat;
}
int main() {
    
    return 0;
}