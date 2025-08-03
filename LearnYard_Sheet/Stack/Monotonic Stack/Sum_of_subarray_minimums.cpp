#include <bits/stdc++.h>
using namespace std;
int m = 1e9+7;
//Brute force
int sumSubarrayMins(vector<int>& arr) {
    long long sum = 0;
    for(int i=0;i<arr.size();i++){
        for(int j = i;j<arr.size();j++){
            int minval = INT_MAX;
            for(int k = i;k<=j;k++){
                minval = min(minval,arr[k]);
            }
            sum=(sum+minval)%m;   
        }
    }
    return (int)sum;
}
//optimal
int main() {
    
    return 0;
}