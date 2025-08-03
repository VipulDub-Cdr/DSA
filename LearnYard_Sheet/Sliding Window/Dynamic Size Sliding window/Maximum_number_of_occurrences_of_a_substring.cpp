#include <bits/stdc++.h>
using namespace std;
//V.impppp question
int maxFreq(string s, int maxLetters, int minSize, int maxSize) {
    unordered_map<char,int> umpp1;
    unordered_map<string,int> umpp2;
    int maxCount = 0;
    int i = 0;
    for(int j = 0;j<s.length();j++){
        //jab aap umpp1 me char count increment  karte hain toh unique characters hi store hote hai
        umpp1[s[j]]++;
        if(j-i+1>minSize){    
            umpp1[s[i]]--;
            if(umpp1[s[i]]==0){
                umpp1.erase(s[i]);
            }
            i++;
        }
        if(j-i+1==minSize and umpp1.size()<=maxLetters){
            string sub = s.substr(i,minSize);
            umpp2[sub]++;
            maxCount = max(maxCount,umpp2[sub]);
        }
    }
    return maxCount;
}
int main() {
    string s = "aababcaab";
    int maxLetters = 2, minSize = 3, maxSize = 4;
    cout<<maxFreq(s,maxLetters,minSize,maxSize);
    return 0;
}