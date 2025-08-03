#include <bits/stdc++.h>
using namespace std;
int numSubmatrixSumTarget(vector<vector<int>>& matrix, int target) {
    int m = matrix.size();
    int n = matrix[0].size();
    //Find the prefix sum
    for(int i = 0;i<m;i++){
        for(int j = 1;j<n;j++){
            matrix[i][j] +=matrix[i][j-1];
        }
    }
    int count = 0;
    for(int c1 = 0;c1<n;c1++){
        for(int c2 = c1;c2<n;c2++){
            unordered_map<int,int> umpp;
            int currSum = 0;
            umpp[0] = 1;
            for(int row = 0;row<m;row++){
                currSum+=matrix[row][c2]-(c1>0?matrix[row][c1-1]:0);
                if(umpp[currSum-target]){
                    count+=umpp[currSum-target];
                }
                umpp[currSum]++;
            }
        }
    }
    return count;
}
int main() {
    
    return 0;
}