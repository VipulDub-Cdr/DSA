#include <bits/stdc++.h>
using namespace std;
int subarraysDivByK(vector<int> arr,int k){
    unordered_map<int,int> umpp;
    int sum = 0;
    int count = 0;
    umpp[0] = 1;
    for(auto num:arr){
        sum+=num;
        int mod = sum%k;
        if(mod<0){
            mod+=k;
        }
        if(umpp.find(mod)!=umpp.end()){
            count+=umpp[mod];
        }
        umpp[mod]++;
    }
}
int main() {
    
    return 0;
}