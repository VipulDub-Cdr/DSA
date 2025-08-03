#include <bits/stdc++.h>
using namespace std;
int rangeSum(vector<int> arr,int left,int right){
    int n = arr.size();
    vector<int> prefixSum(n);
    prefixSum[0] = arr[0];
    for(int i=1;i<n;i++){
        prefixSum[i] = prefixSum[i-1] + arr[i];
    }
    //The edge case should be considered in this case!
    if(left == 0) return prefixSum[right];
    return prefixSum[right] - prefixSum[left-1];
}
int main() {

    vector<int> arr = {1, 2, 3, 4, 5};
    int left = 1, right = 3;
    cout << "Sum of elements from index " << left << " to " << right << " is: " << rangeSum(arr, left, right) << endl;
    return 0;
}