#include <bits/stdc++.h>
using namespace std;

// Time Complexity - O(nk)

class SolutionBrute {
    int vowelCount(string s){
        int countVowel = 0;
        for(int i = 0;i<s.length();i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
                countVowel++;
            }
        }
        return countVowel;
    }
public:
    int maxVowels(string s, int k) {
        int maxVowel = INT_MIN;
        for(int i = 0;i<s.length();i++){
                string ss = s.substr(i,k);
                maxVowel = max(maxVowel,vowelCount(ss));
        }
        return maxVowel;
    }
};

//Optimal -
class Solution {
    bool isVowel(char c){
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
            return true;
        }
        return false;
    }
public:
    int maxVowels(string s, int k){
        int i = 0,j = 0;
        int count = 0,maxCount = INT_MIN;
        while(j<k){
             if(isVowel(s[j])){
                count++;
                maxCount = max(maxCount,count);
             }
            j++;
        }
        j--;
        cout<<j<<count<<endl;
        while(j<s.length()){
            if(isVowel(s[i])){
                count--;
            }
            i++;
            j++;
            if(isVowel(s[j])){
                count++;
            }
            maxCount = max(maxCount,count);
        }
        return maxCount;
    }
};
int main() {
    
    return 0;
}