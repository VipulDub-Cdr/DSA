#include <bits/stdc++.h>
using namespace std;
int numOfSubarrays(vector<int>& arr, int k, int threshold) {
    int i = 0,j=0;
    long long sum = 0;
    int count=0;
    while(j<k){
        sum +=arr[j];
        j++;
    }
    j--;
    if((sum/k)>=threshold) count++;
    while(j<arr.size()){
        sum-=arr[i];
        i++;
        j++;
        if(j<arr.size()){
            sum+=arr[j];
            if((sum/k)>=threshold) count++;
        }
    }
    return count;
}
int main() {
    vector<int> arr = {1,1,1,1,1};
    cout<<numOfSubarrays(arr,1,0);
    return 0;
}