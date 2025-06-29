#include <bits/stdc++.h>
using namespace std;

vector<string> partitionString(string s) {
    int n = s.length();
    int i = 0,j = 0;
    unordered_map<string,bool> umpp;
    vector<string> ans;
    while(j<n){
        int len = j-i+1;
        string segment = s.substr(i,len);
        if(umpp.find(segment)==umpp.end()){
            ans.push_back(segment);
            j = j+1;
            i = j;
            umpp[segment]==true;
        }
        else{
            j++;
        }
    }
    return ans;
}

int main() {
    string s = "abbccccd";
    vector<string> ans = partitionString(s);
    for(auto it:ans){
        cout<<it<<endl;
    }
    return 0;
}