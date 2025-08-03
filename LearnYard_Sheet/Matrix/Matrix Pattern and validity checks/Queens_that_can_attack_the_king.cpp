#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> queensAttacktheKing(vector<vector<int>>& queens, vector<int>& king) {
    vector<vector<int>> ans;
    vector<vector<int>> directions = {{-1,0},{0,-1},{1,0},{0,1},{-1,-1},{1,1},{1,-1},{-1,1}};

    int board[8][8] = {};
    for(auto it:queens){
        board[it[0]][it[1]] = true;
    }
    for(auto dir:directions){
        int x = king[0],y=king[1];
        while(x>0 and y>0 and x<8 and y<8){
            x+=dir[0];
            x+=dir[1];
            if(x>0 and y>0 and x<8 and y<8 and board[x][y]==1){
                ans.push_back({x,y});
                break;
            }
        }
    }
    return ans;
}
int main() {
    
    return 0;
}