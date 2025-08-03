#include <bits/stdc++.h>
using namespace std;

class Solution {
    int t[101][101];
    int solve(int i,int j,vector<vector<int>> grid){
        int m = grid.size();
        int n = grid[0].size();

        if(i==m or j==n) return 0;
        if(grid[i][j]==1) return 0;
        
        if(t[i][j]!=-1) return t[i][j];

        if(i==m-1 and j==n-1) return 1;

        return t[i][j] = solve(i+1,j,grid)+solve(i,j+1,grid);
        
    }
public:
    int uniquePathsWithObstacles(vector<vector<int>>& grid) {
        int i = 0;
        int j = 0;
        memset(t,-1,sizeof(t));
        int ans = solve(i,j,grid);
        return ans;
    }
};
int main() {

    Solution obj;
    vector<vector<int>> obstacleGrid = {{0,0,0},{0,1,0},{0,0,0}};
    int ans = obj.uniquePathsWithObstacles(obstacleGrid);
    cout<<ans<<endl;
    return 0;
}