#include <bits/stdc++.h>
using namespace std;
vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
    int n = mat.size();
    int m = mat[0].size();
    int index = -1;
    int maxCount = INT_MIN;
    for(int i = 0;i<n;i++){
        int count = 0;
        for(int j = 0;j<m;j++){
            if(mat[i][j]==1) count++;
        }
        if(count>maxCount){
            index = i;
            maxCount = count;
        }
    }
    return {index,maxCount};
}
int main() {
    vector<vector<int>> v = {{0,1},{1,0}};
    cout<<rowAndMaximumOnes(v)[0]<<endl;
    cout<<rowAndMaximumOnes(v)[1]<<endl;
    return 0;
}