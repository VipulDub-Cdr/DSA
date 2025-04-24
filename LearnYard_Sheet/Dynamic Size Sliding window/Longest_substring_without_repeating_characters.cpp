#include <bits/stdc++.h>
using namespace std;
int lengthOfLongestSubstring(string s) {
    int i = 0;
    int j = 0;
    int maxlen = 0;
    unordered_map<int,int> umpp;
    while(j<s.length()){
        if(!umpp[s[j]]){
            umpp[s[j]] = 1;
            maxlen = max(maxlen,j-i+1);
            j++;
        }
        else{
            umpp.erase(s[i]);
            i++;
        }
    }
    return maxlen;
}
int main() {
    string s = "abcabcbb";
    string s1 = "pwwkew";
    cout<<lengthOfLongestSubstring(s);
    cout<<endl;
    cout<<lengthOfLongestSubstring(s1);
    return 0;
}