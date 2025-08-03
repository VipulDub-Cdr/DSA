#include <bits/stdc++.h>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& s) {
        
}
//without sorting
vector<vector<string>> groupAnagrams(vector<string>& arr) {
    unordered_map<string,vector<string>> umpp;
    vector<vector<string>> result;
    for(auto s:arr){
        vector<int> count(27,0);
        for(auto c:s){
            count[c-'a']++;
        }
        string key = "";
        for(int i = 0;i<26;i++){
            key+='#'+to_string(count[i]);
        }
        umpp[key].push_back(s);
    }
    for(auto it:umpp){
        result.push_back(it.second);
    }
    return result;
}
int main() {
    string s = to_string(1);
    cout<<s<<endl;
    return 0;
}