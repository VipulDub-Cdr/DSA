#include <bits/stdc++.h>
using namespace std;
//considering the elements of arr are positive according to the Question's contraint
int minOperations(vector<int>& arr, int x) {
    int n = arr.size();
    //accumulate functiont takes the argument start,end,startingValue;
    int target = accumulate(arr.begin(),arr.end(),0)-x;
    if(target==0) return 0;
    if(target<0) return -1;
    int left = 0;
    int sum = 0;
    int maxlen = -1;
    for(int right =0;right<n;right++){
        sum+=arr[right];
        while(sum>target){
            sum-=arr[left];
            left++;
        }
        if(sum==target){
            maxlen = max(maxlen,right-left+1);
        }
    }
    return maxlen!=-1?n-maxlen:-1;
}
int main() {
    vector<int> arr = {1,1,4,2,3};
    int x = 5;
    cout<<minOperations(arr,x)<<endl;
    return 0;
}