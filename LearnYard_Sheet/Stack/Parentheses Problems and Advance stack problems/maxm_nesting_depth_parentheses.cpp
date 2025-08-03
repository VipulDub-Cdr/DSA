#include <bits/stdc++.h>
using namespace std;
int solve(string s){
    stack<char> stk;
    int count = 0;
    int maxCount = 0;
    for(auto c:s){
        if(c == '('){
            stk.push(c);
            count++;
            maxCount = max(maxCount, count);
        }
        else if(c ==')'){
            stk.pop();
            count--;
        }
    }
    return maxCount;
}
int main() {
    string s = "abc";
    int n = s.length();
    cout<<n;
    return 0;
}