#include <bits/stdc++.h>
using namespace std;
int maxFreq(vector<int> arr,int k){
    int n = arr.size();
    int l = 0;
    long long tsum = 0;
    int result = 0;
    for(int r = 0;r<n;r++){
        tsum+=arr[r];
        while((long long)arr[r]*(r-l+1)-tsum>k){
            tsum-=arr[l];
            l++;
        }
        result = max(result,r-l+1);
    }
    return result;
}
int main() {
    vector<int> arr = {1,2,4};
    int k = 5;
    cout<<maxFreq(arr,k);
    return 0;
}