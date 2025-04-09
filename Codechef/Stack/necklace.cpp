#include <bits/stdc++.h>
using namespace std;

// Problem Statement:

// Given a necklace represented as a circular array of n integers, where each integer represents a pearl, and a shift value k, determine the resulting necklace after shifting each pearl k positions to the left.

// Input:

// n: The number of pearls in the necklace.
// An array of n integers representing the initial order of the pearls in the necklace.
// k: The number of positions to shift each pearl to the left.
// Output:

// An array of n integers representing the final order of the pearls in the necklace after the left shift.
// Example:

// Input:
// n=5
// Necklace: [1,5,3,4,2]
// k=2
// Output:
// [3,4,2,1,5]

//The question is very similar to the left rotate by k times problem.
void withoutStack(){
    int T;
    cin>>T;
    while(T--){
        int n,k;
        cin>>n;
        cin>>k;
        int arr[n];
        for(int i = 0;i<n;i++){
            cin>>arr[i];
        }
        reverse(arr,arr+k);
        reverse(arr+k,arr+n);
        reverse(arr,arr+n);
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}
// The logic to solve the problem using stack is that we'll push the elements from the end till n-k times into the stack and then pop them out and push them back to the answer array. Then we'll iterate through the array from 0 to k-1 and push the elements into the answer array
int withStack(){
    int T;
    cin>>T;
    while(T--){
        int n,k;
        cin>>n;
        cin>>k;
        int arr[n];
        for(int i = 0;i<n;i++){
            cin>>arr[i];
        }
        stack<int> s;
        
        // same order me nikaalni hai values to end se push karna hoga
        // reverse order me value nikaalni hai to shuru se push karna hoga

        int i = n-1;
        int count = n-k;

        while(count--){
            s.push(arr[i]);
            i--;
        }
        vector<int> ans;
        while(!s.empty()){
            ans.push_back(s.top());
            s.pop();
        }
        for(int j = 0;j<k;j++){
            ans.push_back(arr[j]);
        }
        for(auto it:ans){
            cout<<it<<" ";
        }
        cout<<endl;
    }
}
int main(){
    withoutStack();
    withStack();
    return 0;
}
