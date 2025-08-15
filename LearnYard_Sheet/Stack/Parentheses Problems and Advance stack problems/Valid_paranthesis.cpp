#include <bits/stdc++.h>
using namespace std;

bool correspondingBracket(char c1,char c2){
    if( c1=='{' and c2=='}') return true;
    if( c1=='(' and c2==')') return true;
    if( c1=='[' and c2==']') return true;
    return false;
}

bool isOpeningBracket(char ch){
    if(ch=='[' or ch=='{' or ch=='(') return true;
    return false;
}

bool isBracket(char ch){
    if( ch=='[' or ch=='{' or ch=='(' or ch==']' or ch=='}' or ch==')') return true;
    return false;
}

int validParanthesis(string s){
    int n = s.length();
    stack<char> stk;
    for(int i = 0;i<n;i++){
        char ch = s[i];
        
        if(isBracket(ch)){
            if(isOpeningBracket(ch)){
                stk.push(ch);
            }
            else{
                if(stk.empty()) return 0;
                if(correspondingBracket(stk.top(),ch)) stk.pop();
                else return 0;
            }
        }
    }
    if(!stk.empty()) return 0;
    return 1;
}

int main() {
    // Write C++ code here
    std::cout << "Try programiz.pro";

    return 0;
}