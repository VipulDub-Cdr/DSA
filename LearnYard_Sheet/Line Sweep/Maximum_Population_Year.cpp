#include <bits/stdc++.h>
using namespace std;
int maximumPopulation(vector<vector<int>>& logs) {
    vector<int> prefix(101,0);
    //index = year - 1950;
    for(auto it:logs){
        prefix[it[0]-1950]++;
        prefix[it[1]-1950]--;
    }
    for(int i=1;i<prefix.size();i++){
        prefix[i] = prefix[i-1]+prefix[i];
    }
    int maxPopulation = INT_MIN;
    int minIndex = -1;
    for(int i = 0;i<prefix.size();i++){
        if(maxPopulation>prefix[i]){
            maxPopulation = prefix[i];
            minIndex = i;
        }
    }
    return 1950+minIndex;
}

int main() {
    return 0;
}