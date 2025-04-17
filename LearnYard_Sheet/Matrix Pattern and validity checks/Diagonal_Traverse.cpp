#include <bits/stdc++.h>
using namespace std;
vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
    int n = mat.size();
    int m = mat[0].size();
    vector<int> ans;
    int topRight = true;
    int i= 0,j=0;
    while(ans.size()<m*n){
        ans.push_back(mat[i][j]);
        if(topRight){
            if(i==0){
                j++;
                topRight = !topRight;
            }
            else if(j==m-1){
                i++;
                topRight = !topRight;
            }
            else{
                i--;
                j++;
            }
        }
        else{
            if(i == n-1){
                j++;
                topRight = true;
            }
            else if(j==0){
                i++;
                topRight = true;
            }
            else{
                i++;j--;
            }
        }
    }
    return ans;
}
int main() {
    
    return 0;
}