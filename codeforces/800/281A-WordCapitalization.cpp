#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    int asci = s[0];
    if(asci>=97) asci-=32;
    char ch = asci;
    s[0] = ch;
    cout<<s;
    return 0;
}