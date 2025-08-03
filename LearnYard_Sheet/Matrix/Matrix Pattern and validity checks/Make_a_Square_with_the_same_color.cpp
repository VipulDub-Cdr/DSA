#include <bits/stdc++.h>
using namespace std;
bool canMakeSquare(vector<vector<char>>& grid) {
    for(int i = 0;i<2;i++){
        for(int j=0;j<2;j++){
            int cntblack = 0,cntwhite = 0;
            //considering square with topleft index at i,j
            for(int x = 0;x<2;x++){
                for(int y = 0;y<2;y++){
                    if(grid[i+x][j+y]=='B') cntblack++;
                    else cntwhite++;
                }
            }
            if(cntwhite>=3 || cntblack>=3 ) return true;
        }
    }
    return false;
}
int main() {
    
    return 0;
}