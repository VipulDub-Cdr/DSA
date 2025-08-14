#include <bits/stdc++.h>
using namespace std;
class Solution {
    int len;
    int t[21][2001];
    int solve(int i,int sum,int target, vector<int>& nums){
        if(i==nums.size()){
            if(sum==target) return 1;
            else return 0;
        }

        if(t[i][sum+1000]!=-1) return t[i][sum+1000];

        return t[i][sum+1000] = solve(i+1,sum+nums[i],target,nums) + solve(i+1,sum-nums[i],target,nums);
    }
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int i = 0;
        len = nums.size();
        memset(t,-1,sizeof(t));
        int ans = solve(i,0,target,nums);
        return ans;
    }
};
int main() {
    
    return 0;
}