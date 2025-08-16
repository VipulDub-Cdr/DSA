#include <bits/stdc++.h>
using namespace std;


vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> result;
        sort(result.begin(),result.end());
        for(int i = 0;i<n;i++){
            if(i>0 and nums[i-1]==nums[i]) continue;
            int j = i+1;
            int k = n-1;
            while(j<k){
                int sum = nums[i]+nums[j]+nums[k];
                if(sum>0) k--;
                if(sum<0) j++;
                else{
                    vector<int> temp = {nums[i],nums[j],nums[k]};
                    j++;
                    k--;
                    while(j<k and nums[j-1]==nums[j]) j++;
                    while(j<k and nums[k-1]==nums[k]) k--;
                }
            }
        }
        return result;
}

int main() {
    
    return 0;
}