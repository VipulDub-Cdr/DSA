#include <bits/stdc++.h>
using namespace std;
int longestValidParenthesis(string s){
    stack<int> stk;
    stk.push(-1);
    int maxlen = 0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='('){
            stk.push(s[i]);
        }
        else{
            stk.pop();
            if(stk.empty()){
                stk.push(i);
            }
            else{
                maxlen = max(maxlen,i-stk.top());
            }
        }
    }
    return maxlen;
}
int main() {
    string s = ")(())";
    cout<<longestValidParenthesis(s)<<endl;
    return 0;
}