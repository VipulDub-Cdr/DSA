#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    int count = 1;
    int maxcount = INT_MIN;
    int curr = s[0];
    for(int i = 1;i<s.length();i++){
        if(curr!=s[i]){
            curr = s[i];
            count = 1;
            continue;
        }
        count++;
        maxcount = max(maxcount,count);
    }
    maxcount>=7 ? cout<<"YES" : cout<<"NO";
    return 0;
}