#include <bits/stdc++.h>
using namespace std;
//without memoization
class Solution {
    int n;
    int solve(int i, int p, vector<int>& nums){
        if(i>=n) return 0;
        
        int take = 0;
        if(p==-1 or nums[p]<nums[i]){
            take = 1+solve(i+1,i,nums);
        }

        int skip = solve(i+1,p,nums);

        return max(take, skip);
    }
public:
    int lengthOfLIS(vector<int>& nums) {
        int i = 0;
        int p = -1;
        n = nums.size();
        int ans = solve(i,p,nums);
        return ans;
    }
};

//with memoization
class Solution {
    int n;
    int t[2501][2501];
    int solve(int i, int p, vector<int>& nums){
        if(i>=n) return 0;
        
        if(p!=-1 and t[i][p]!=-1) return t[i][p];

        int take = 0;
        if(p==-1 or nums[p]<nums[i]){
            take = 1+solve(i+1,i,nums);
        }

        int skip = solve(i+1,p,nums);

        if(p!=-1){
            t[i][p] = max(take,skip);
        }

        return max(take, skip);
    }
public:
    int lengthOfLIS(vector<int>& nums) {
        int i = 0;
        int p = -1;
        n = nums.size();
        memset(t,-1,sizeof(t));
        int ans = solve(i,p,nums);
        return ans;
    }
};
int main() {
    
    return 0;
}