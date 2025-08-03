#include <bits/stdc++.h>
using namespace std;
//m =rows, n = cols

vector<vector<int>> solve10ms(vector<int>& original, int m, int n) {
    vector<vector<int>> mat;
    vector<int> temp;
    int count = 0;
    //It checks ki har ek block matrix ka fill hoga ya nahi agar nahi hoga then we have to simply return empty matrix.
    if(original.size()!=m*n) return mat;
    for(auto num:original){
        count++;
        temp.push_back(num);
        if(count==n){
            mat.push_back(temp);
            temp.clear();
            count = 0;
        }
    }
    return mat;
}

vector<vector<int>> solve2ms(vector<int>& original, int m, int n) {
    if (original.size() != m * n) return {};
    // The below line initializes a matrix with size m x n and fills it with 0s
    vector<vector<int>> res(m,vector<int>(n,0));
    int idx = 0;
    for (int i = 0; i < m; i ++) {
        for (int j = 0; j < n; j ++) {
            res[i][j] = original[idx++];
        }
    }
    return res;
}

int main() {
    vector<int> original = {1,2,3,4};
    int m = 2, n = 2;
    vector<vector<int>> result = solve10ms(original, m, n);
    for (const auto& row : result) {
        for (const auto& elem : row) {
            cout << elem << " ";
        }
        cout << endl;
    }
    return 0;
}