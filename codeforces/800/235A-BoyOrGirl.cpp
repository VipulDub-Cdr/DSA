#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin>>str;
    set<char> s;
    for(auto it:str){
        s.insert(it);
    }
    (s.size()%2==0) ? cout<<"CHAT WITH HER!" : cout<<"IGNORE HIM!";
    return 0;
}