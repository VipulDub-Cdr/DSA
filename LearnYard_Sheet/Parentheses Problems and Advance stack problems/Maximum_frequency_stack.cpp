//leetcode -895
#include <bits/stdc++.h>
using namespace std;

class FreqStack {
public:
    unordered_map<int,stack<int>> grp;
    unordered_map<int,int> freq;
    int maxFreq = 0;
    FreqStack() {
    }
    
    void push(int val) {
        //pehli baar value aayi hai toh
        if(freq.find(val)==freq.end()){
            freq[val] = 1;
            (grp[1]).push(val);
        }
        else{
            freq[val]++;
            (grp[freq[val]]).push(val);
        }
        maxFreq = max(maxFreq,freq[val]);
    }

    int pop() {
        int value = (grp[maxFreq]).top();
        (grp[maxFreq]).pop();
        if((grp[maxFreq]).empty()){ 
            grp.erase(maxFreq);
            maxFreq--;
        }
        freq[value]--;
        if(freq[value]==0) freq.erase(value);
        return value;
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */
int main() {
    
    return 0;
}