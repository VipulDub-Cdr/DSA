#include <bits/stdc++.h>
using namespace std;
// This somehow is wrong
int maximumend(vector<vector<int>> flowers){
    int maximum = INT_MIN;
    for(auto it:flowers){
           if(it[1]>maximum){
               maximum = it[1];
           }
    }
    return maximum;
}
vector<int> fullBloomFlowers(vector<vector<int>>& flowers, vector<int>& people) {
    int maximum = maximumend(flowers);
    vector<int> prefix(maximum+1,0);
    vector<int> ans;
    for(auto it:flowers){
        prefix[it[0]]++;
        prefix[(it[1]+1)]--;
    }
    for(int i =1;i<prefix.size();i++){
        prefix[i] = prefix[i-1]+prefix[i];
    }
    for(auto it:people){
        ans.push_back(prefix[it]);
    }
    return ans;

}
int main() {
    
    vector<vector<int>> flowers = {{1, 6}, {3, 7}, {9, 12}, {4, 13}};
    vector<int> people = {2, 3, 7, 11};
    for(auto it:flowers){
        cout<<it[0]<<" ";
        cout<<it[1]+1;
        cout<<endl;  
    }
    return 0;
}