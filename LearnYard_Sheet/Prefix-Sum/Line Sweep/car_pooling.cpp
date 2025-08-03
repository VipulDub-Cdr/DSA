#include <bits/stdc++.h>
using namespace std;
bool carPooling(vector<vector<int>>& trips, int capacity) {
    vector<int> prefix(1001,0);
    for(auto it: trips){
        prefix[it[1]] += it[0];
        prefix[it[2]] -= it[0];
    }
    for(int i = 1;i<prefix.size();i++){
        prefix[i] = prefix[i-1]+prefix[i];
    }
    for(auto it:prefix){
        if(it>capacity){
            return false;
        }
    }
    return true;

}
int main() {
    
    return 0;
}