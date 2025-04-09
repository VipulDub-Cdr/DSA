#include <bits/stdc++.h>
using namespace std;
int upperBound(vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size()-1;
    int mid = (left+right)/2;
    int ans = arr.size();
    while(left<=right){
        if(arr[mid]>target){
            ans = mid;
            right = mid-1;
        }
        else
            left = mid+1;
        mid = (left+right)/2;
    }
    return ans;
}

int lowerBound(vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size()-1;
    int mid = (left+right)/2;
    int ans = arr.size();
    while(left<=right){
        if(arr[mid]>=target){
            ans = mid;
            right = mid-1;
        }
        else
            left = mid+1;
        mid = (left+right)/2;
    }
    return ans;
}
int main() {
    vector<int> arr = {1, 2, 2, 2, 3, 4, 5};
    int target = 2;
    cout << "Upper Bound: " << upperBound(arr, target) << endl; // 4
    cout << "Lower Bound: " << lowerBound(arr, target) << endl; // 1
    return 0;
}