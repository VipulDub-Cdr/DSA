#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n1 = 'a'; //97
    int n2 = 'A'; //65
    //97-65 = 32 so if you add 32 you convert a uppercase letter to lowercase letter
    
    string s1;
    string s2;
    cin>>s1;
    cin>>s2;
    int ansgot = false;
    for(int i = 0;i<s1.length();i++){
        char s1c = s1[i];
        char s2c = s2[i];
        if(s1c<97) s1c+=32;
        if(s2c<97) s2c+=32;
        if(s1c<s2c){
            cout<<"-1";
            ansgot = true;
            break;
        }
        else if(s1c>s2c){
            cout<<"1";
            ansgot = true;
            break;
        }
    }
    if(!ansgot) cout<<"0";

    return 0;
}