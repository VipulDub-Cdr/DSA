#include <bits/stdc++.h>
using namespace std;
//Brute-force
bool isValidSudoku4ms(vector<vector<char>>& mat) {
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
bool isValidSudoku7ms(vector<vector<char>>& board) {
    vector<unordered_set<char>> rows(9),cols(9),boxes(9);
    for(int i = 0;i<9;i++){
        for(int j=0;j<9;j++){
            char ch = board[i][j];
            if(ch=='.') continue;
            int boxnumber = (i/3)*3+(j/3);
            if(rows[i].count(ch)||cols[j].count(ch)|| boxes[boxnumber].count(ch)){
                return false;
            }
            rows[i].insert(ch);
            cols[j].insert(ch);
            boxes[boxnumber].insert(ch);
        }
    }
    return true;
}
int main() {
    
    return 0;
}