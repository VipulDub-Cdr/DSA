#include <bits/stdc++.h>
using namespace std; 
//Using tokenizer
void solve1(string s){
    stringstream ss(s);
    string token, result;
    while(ss>>token){
        result = token + " " + result;
    }
    cout<<result.substr(0, result.size()-1)<<endl;
}

void solve2(string &s){
    reverse(s.begin(),s.end());
    int n = s.length();
    int i = 0;
    int l = 0,r = 0;
    while(i<n){
        while(i<n and s[i]!=' '){
            s[r++] = s[i++];
        }
        if(l<r){
            reverse(s.begin()+l,s.begin()+r);
            s[r++] = ' ';
            l = r;
        }
        i++;
    }
    s = s.substr(0,r-1);
}
int main() {
    string s = "  I am   a     boy   ";
    solve2(s);
    cout<<s<<endl;
    return 0;
}