#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(n==1) cout<<0;
    // BBRBBRG
    // RRG
    if(n>=2){
        int count = 0;
        int prev = 0;
        int curr = 1;
        while(curr<n){
            if(s[curr]==s[prev]){
                count++;
            }
            curr++;
            prev++;
        }
        cout<<count;
    }
    return 0;
}