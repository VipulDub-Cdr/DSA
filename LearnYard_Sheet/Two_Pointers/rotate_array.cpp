#include <bits/stdc++.h>
using namespace std;


// Rotate the array to the right by k steps
void rotate(vector<int>& arr, int k){
    int n = arr.size();

    reverse(arr.begin(),arr.end());
    reverse(arr.begin(),arr.begin()+k);
    reverse(arr.begin()+k,arr.end());
}

int main() {
    vector<int> v = {1,2,3,4,5,6,7};
    rotate(v,3);
    for(auto it:v){
        cout<<it<<" ";
    }
    return 0;
}