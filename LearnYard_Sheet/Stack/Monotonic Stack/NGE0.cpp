#include <bits/stdc++.h>
using namespace std;

vector<int> monotonicStack(vector<int> arr){
    int n = arr.size();
    stack<int> stk;
    vector<int> result(n,-1);
    
    for(int i = n-1;i>=0;i--){
    
        while(!stk.empty() and arr[i]>=stk.top()){
                stk.pop();
        }
        if(!stk.empty()){
            result[i] = stk.top();
        }
        stk.push(arr[i]);
    }
    return result;
}

int main() {
    
    return 0;
}