// {{1,2,3},{4,5,6},{7,8,9}}
// After rotate by 90 degrees clockwise
// {{7,4,1},{8,5,2},{9,6,3}}   

// SOLUTION
// first find the transpose and then reverse the rows
// Since in the question it is given that the matrix is square matrix so we can do the transpose in place

#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> transpose(vector<vector<int>>& matrix) {
    int m = matrix.size();
    int n = matrix[0].size();
    vector<vector<int>> ans(n,vector<int>(m));
    for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
            ans[j][i] = matrix[i][j];
        } 
    }
    return ans;
}
void rotateImage(vector<vector<int>> &matrix){
    vector<vector<int>> transposeMatrix = transpose(matrix);
    int rows = transposeMatrix.size();
    int cols = transposeMatrix[0].size();
    
    matrix.resize(rows);
    for(int i = 0; i < rows; i++) {
        matrix[i] = transposeMatrix[i];
        reverse(matrix[i].begin(), matrix[i].end());
    }
}
int main() {
    
    return 0;
}