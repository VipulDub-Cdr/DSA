#include <bits/stdc++.h>
using namespace std;
int M = 1e9+7;
int lengthAfterTransformations(string s, int t) {
    vector<int> arr(26,0);
    int n = s.length();
    for(auto it:s){
        arr[it-97]++;
    }
    while(t--){
        vector<int> temp(26,0);
        for(int i = 0;i<26;i++){
            if(i==25){
                temp[0] = (temp[0]+arr[25])%M;
                temp[1] = (temp[1]+arr[25])%M;
            }
            else temp[i+1] = (temp[i+1]+arr[i])%M;
        }
        arr.clear();
        arr = temp;
    }
    int count = 0;
    for(auto it:arr){
        count = (count+it)%M;
    }
    return count;
}
int main() {
    
    return 0;
}