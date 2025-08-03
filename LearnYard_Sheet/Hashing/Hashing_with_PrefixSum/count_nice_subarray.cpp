#include <bits/stdc++.h>
using namespace std;
int solveTLE(vector<int> arr,int val){
    int n = arr.size();
    int ans= 0;
    for(int i=0;i<n;i++){
        for(int j = i;j<=n;j++){
            int count = 0;
            for(int k = i;k<j;k++){
                if(arr[k]==val) count++;
            }
            if(count%2!=0) ans++;
        }
    }
    return ans;
}

int solveOptimal(vector<int> arr,int k){
    unordered_map<int,int>  umpp;
    umpp[0] = 1;
    int oddCount = 0;
    int count = 0;
    for(auto num:arr){
        if(umpp[oddCount-k]){
            count+=umpp[oddCount];
        }
        umpp[oddCount]++;
    }
    return count;
}
int main() {
    
    return 0;
}