#include <bits/stdc++.h>
using namespace std;

// Question - Given an array of integers temperatures represents the daily temperatures, return an array answer such that answer[i] is the number of days you have to wait after the ith day to get a warmer temperature. If there is no future day for which this is possible, keep answer[i] == 0 instead.


// Input: temperatures = [73,74,75,71,69,72,76,73]
// Output: [1,1,4,2,1,1,0,0]

vector<int> dailyTemperatures(vector<int>& arr) {
    stack<int> stk;
    int n = arr.size();
    vector<int> result(n);
    for(int i = n-1;i>=0;i--){
        //jabtak temperature stk ke top ke index ki value se zyaada hai tab tak pop karenge
        while(!stk.empty() and arr[i]>=arr[stk.top()]){
            stk.pop();
        }
        //agar stack khaali hai to simply push kardo index and kyoki stk khaali hai uske aage koi bhi usse badaa temperature nahi milega
        if(stk.empty()){
            stk.push(i);
            result[i] = 0;
        }
        //agar temperature kam hai stk.top() se top ye karo
        else if(arr[i]<arr[stk.top()]){
            result[i] = stk.top()-i;
            stk.push(i);
        }   
    }
    return result;
}
int main() {
    
    return 0;
}