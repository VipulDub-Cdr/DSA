#include <bits/stdc++.h>
using namespace std;
//you have to check both the starting and ending character of the string for the vowel
bool isVowelStartAndEnd(string s){
    int last = s.size()-1;
    if((s[0]=='a' || s[0]=='e' || s[0]=='i' || s[0]=='o' || s[0]=='u') and (s[last]=='a' || s[last]=='e' || s[last]=='i' || s[last]=='o' || s[last]=='u')){
        return true;
    }
    return false;
}
vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
    vector<int> prefix(words.size());
    int count = 0;
    for(int i =0;i<words.size();i++){
        if(isVowelStartAndEnd(words[i])){
            count++;
        }
        prefix[i] = count;
    }
    vector<int> ans;
    for(auto it:queries){
        int l = it[0];
        int r = it[1];
        ans.push_back(l!=0?(prefix[r]-prefix[l-1]):prefix[r]);
    }
    // return prefix;
    return ans;
}
int main() {    
    vector<string> words = {"bzmxvzjxfddcuznspdcbwiojiqf","mwguoaskvramwgiweogzulcinycosovozppl","uigevazgbrddbcsvrvnngfrvkhmqszjicpieahs","uivcdsboxnraqpokjzaayedf","yalc","bbhlbmpskgxmxosft","vigplemkoni","krdrlctodtmprpxwditvcps","gqjwokkskrb","bslxxpabivbvzkozzvdaykaatzrpe","qwhzcwkchluwdnqjwhabroyyxbtsrsxqjnfpadi","siqbezhkohmgbenbkikcxmvz","ddmaireeouzcvffkcohxus","kjzguljbwsxlrd","gqzuqcljvcpmoqlnrxvzqwoyas","vadguvpsubcwbfbaviedr","nxnorutztxfnpvmukpwuraen","imgvujjeygsiymdxp","rdzkpk","cuap","qcojjumwp","pyqzshwykhtyzdwzakjejqyxbganow","cvxuskhcloxykcu","ul","axzscbjajazvbxffrydajapweci"};
    cout<<words.size()<<endl;
    vector<vector<int>> queries = {{4, 4},{6, 17},{10, 17},{9, 18},{17, 22},{5, 23},{2, 5},{17, 21},{5, 17},{4, 8},{7, 17},{16, 19},{7, 12},{9, 20},{13, 23},{1, 5},{19, 19}};
    vector<int> ans = vowelStrings(words,queries);
    for(int it: ans){
        cout<<it<<" ";
    }
    return 0;
}