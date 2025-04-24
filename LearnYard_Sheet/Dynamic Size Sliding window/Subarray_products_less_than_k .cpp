#include <bits/stdc++.h>
using namespace std;

int solveOptimal(vector<int> arr,int k){
    if(k<=0) return 0;
    int i = 0;
    int count = 0;
    int product = 1;
    for(int j = 0;j<arr.size();j++){
        product*=arr[i];
        while(product>=k){
            product/=arr[i];
            i++;
        }
        count+=j-i+1;
    }
    return count;
}

int main() {
    vector<int> arr = {10,5,2,6};
    
    return 0;
}