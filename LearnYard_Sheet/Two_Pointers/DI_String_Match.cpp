#include <bits/stdc++.h>
using namespace std;

// Question 

// Given a string s consisting of only characters 'I' (for increase) and 'D' (for decrease), reconstruct a permutation of the integers from 0 to n (inclusive), such that:

// For each index i:

// If s[i] == 'I', then perm[i] < perm[i+1]

// If s[i] == 'D', then perm[i] > perm[i+1]

// Return any such permutation

// Solution 
//Greedy + two pointer question
// Chota number chahiye toh wo dedo yaa badaa bymevr chahiye toh wo dedo

vector<int> diStringMatch(string s) {
    int n = s.length();
    int low = 0;
    int high = n;
    vector<int> ans;
    for(auto c:s){
        if(c=='I') ans.push_back(low++);
        else ans.push_back(high--);
    }
    ans.push_back(low);
    return ans;
}

int main() {
    string s = "DDI";
    vector<int> result = diStringMatch(s);
    for (int i : result) {
        cout << i << " ";
    }
    return 0;
}