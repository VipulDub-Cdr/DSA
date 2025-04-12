#include <bits/stdc++.h>
using namespace std;

bool checkXMatrix(vector<vector<int>>& mat) {
    int m = mat.size();
    int n = mat[0].size();

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i==j || i+j==n-1){
                if(mat[i][j]==0) return false;
            }
            else{
                if(mat[i][j]!=0) return false;
            }
        }
    }
    return true;
}

int main() {
    
    return 0;
}