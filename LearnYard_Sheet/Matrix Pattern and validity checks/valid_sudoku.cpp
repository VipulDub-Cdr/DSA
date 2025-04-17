#include <bits/stdc++.h>
using namespace std;
//Brute-force
bool isValidSudoku(vector<vector<char>>& mat) {
    //check the rows
    unordered_map<int,int> umpp;
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if(mat[i][j]!='.'){
                umpp[mat[i][j]]++;
            }
        }
        for(auto it:umpp){
            if(it.second>=2) return false;
        }
        umpp.clear();
    }
    for(int j = 0;j<9;j++){
        for(int i=0;i<9;i++){
           if(mat[i][j]!='.'){umpp[mat[i][j]]++;}
        }
        for(auto it:umpp){
            if(it.second>=2) return false;
        }
        umpp.clear();
    }
    for(int i=0;i<9;i+=3){
        for(int j =0;j<9;j+=3){
            for(int r = i;r<i+3;r++){
                for(int c = j;c<j+3;c++){
                    if(mat[r][c]!='.'){umpp[mat[r][c]]++;}
                }
            }
            for(auto it:umpp){
                if(it.second>=2) return false;
            }
            umpp.clear();
        }
    }
    return true;

}
int main() {
    
    return 0;
}