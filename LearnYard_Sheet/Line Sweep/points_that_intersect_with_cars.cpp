#include <bits/stdc++.h>
using namespace std;
int numberOfPoints(vector<vector<int>>& nums) {
    vector<int> diff(102,0);
    //set 1 on starti and -1 at endi
    for(auto it: nums){
        int start = it[0];
        int end = it[1];
        diff[start]+=1;
        diff[end+1]-=1;
    }
    //calculate the prefix sum
    for(int i = 1;i<diff.size();i++){
        diff[i] = diff[i-1]+diff[i];
    }
    int count = 0;
    for(auto n:diff){
        if(n>0){
            count++;
        }
    }
    return count;
}
int main() {
    return 0;
}