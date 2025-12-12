#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    string ans;
    ans = "NO";
    for(int i=0;i<s.length();i++){
        if(s[i]=='H' or s[i]=='Q' or s[i]=='9'){
            ans="YES";
            break;
        }
    }
    cout<<ans;
    return 0;
}