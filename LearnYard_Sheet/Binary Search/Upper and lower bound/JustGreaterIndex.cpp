#include<bits/stdc++.h>
using namespace std;

//write a function that takes sorted vector and a variable as an input and return the index of the a number which is just greater than equal to the variable using binary search using (logn) time complexity

int index(vector<int> arr, int value){
    int n = arr.size();
    int left = 0;
    int right = n-1;
    int mid = (left+right)/2;
    int justGreaterIndex = -1;
    while(left<=right){
        if(arr[mid]<value){
            left = mid+1;
        }
        else if(arr[mid]>=value){
            justGreaterIndex = mid;
            right = mid-1;
        }
        mid = (left+right)/2;
    }
    return justGreaterIndex;
}
int main(){
    vector<int> v = {1,2,3,4,5};
    int value = 2;//1.4
    cout<<index(v,value)<<endl;
    return 0;
}