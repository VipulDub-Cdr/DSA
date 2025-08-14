#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int n;
    unordered_set<string> st;
    int t[301];
    bool solve(int i,string& s){
        if(i>=n) return true;

        if(t[i]!=-1) return t[i];

        if(st.find(s) != st.end()) return true;

        // i index se har ek length ke liye check karenge 
        for(int l = 1;l<=n;l++){
            string temp = s.substr(i,l);

            if(st.find(temp) != st.end() and solve(i+l,s)){
                return t[i] = true;
            }
        }
        return t[i]=false;
    }
    int wordBreaK(string s,vector<string>& v){
        n = s.length();
        int i = 0;
        for(auto s:v){
            st.insert(s);
        }
        memset(t,-1,sizeof(t));
        int ans = solve(i,s);
        return ans;
    }

};

int main() {
    
    return 0;
}