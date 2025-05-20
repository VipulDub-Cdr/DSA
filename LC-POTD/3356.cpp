#include <bits/stdc++.h>
using namespace std;
//zero array transformation II problem solve
//difference array CSMIK video watch

//Brute-force
bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
    for(auto it:queries){
        for(int i = it[0];i<=it[1];i++){
            if(nums[i]>0){
                nums[i]--;
            }
        }
    }
    for(auto it :nums){
        if(it!=0) return false;
    }
    return true;
}

//optimal solution - using difference array
bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        int n = nums.size();
        vector<int> diff(n,0);
        for(auto it:queries){
            int start = it[0];
            int end = it[1];
            diff[start] +=1;
            if(end+1<n) diff[end+1]-=1;
        }
        vector<int> result(n,0);
        int sum = 0;
        for(int i = 0;i<n;i++){
            sum+=diff[i];
            result[i] = sum;
        }
        for(int i = 0;i<n;i++){
            if(nums[i]>result[i]) return false;
        }
        return true;
}
int main() {
    
    return 0;
}