#include <bits/stdc++.h>
using namespace std;
vector<int> lRSumDifference(vector<int> &arr){
    int n = arr.size();
    vector<int> left(n), right(n);
    left[0] = arr[0];
    for(int i = 1; i < n; i++){
        left[i] = left[i-1] + arr[i];
    }
    right[n-1] = arr[n-1];
    for(int i = n-2; i >= 0; i--){
        right[i] = right[i+1] + arr[i];
    }
    for(int i = 0; i < n; i++){
        left[i] = abs(left[i] - right[i]);
    }
    return arr;
}
int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    vector<int> result = lRSumDifference(arr);
    return 0;
}