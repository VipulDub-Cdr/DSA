#include <bits/stdc++.h>
using namespace std;

int M = 1e9+7;
//This solution gives TLE
int lengthAfterTransformations(string s, int t, vector<int>& nums) {
    vector<int> arr(26,0);
    for(auto ch:s){
        arr[ch-'a']=(arr[ch-'a']+1)%M;
    }
    while(t--){
        vector<int> temp(26,0);
        for(int i=0;i<26;i++){
            if(arr[i]>0){
                for(int m = 1;m<=nums[i];m++){
                    temp[(i+m)%26] =(temp[(i+m)%26] + arr[i])%M; 
                }
            }
        }
        arr.clear();
        arr = temp;
    }
    int count = 0;
    for(auto val:arr){
        count = (count+val)%M;
    }
    return count;
}
int main() {
    
    return 0;
}