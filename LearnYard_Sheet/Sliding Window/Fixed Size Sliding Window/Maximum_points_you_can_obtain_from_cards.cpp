#include <bits/stdc++.h>
using namespace std;
int maxScore(vector<int>& arr, int k) {
    //find the tsum;
    int tsum = 0;
    for(int i = 0;i<arr.size();i++){
         tsum+=arr[i];
    }
    int windLength = arr.size()-k;
    int i = 0,j = 0;
    int slsum = 0;
    int maxSum = INT_MIN;
    while(j<windLength){
         slsum+=arr[j];
         j++;
    }
    j--;
    maxSum = max(maxSum,tsum-slsum);
    while(j<arr.size()){
         slsum-=arr[i];
         i++;
         j++;
         if(j<arr.size()){
             slsum+=arr[j];
             maxSum = max(maxSum,tsum-slsum);
         }
    }
    return maxSum;
 }
int main() {
    
    return 0;
}