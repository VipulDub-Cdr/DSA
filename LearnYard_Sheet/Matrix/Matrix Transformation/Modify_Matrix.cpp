// Question - Jahaan jahaan par -1 hai wahaan par us column ka maximum element rakhna hai
// Tip - Translate the question in hindi and solve
#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
    int cols = matrix[0].size(), rows = matrix.size();
    for(int i = 0;i<cols;i++){
        int maxelement = INT_MIN;
        for(int j = 0;j<rows;j++){
            maxelement = max(maxelement, matrix[j][i]);
        }
        for(int j = 0;j<rows;j++){
            if(matrix[j][i]==-1){
                matrix[j][i] = maxelement;
            }
        }
    }
    return matrix;
}
int main() {
    vector<vector<int>> matrix = {
        {1, -1, 3},
        {-1, 5, -1},
        {7, 8, 9}
    };
    vector<vector<int>> result = modifiedMatrix(matrix);
    for (const auto& row : result) {
        for (const auto& elem : row) {
            cout << elem << " ";
        }
        cout << endl;
    }
    return 0;
}