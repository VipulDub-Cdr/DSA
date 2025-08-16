#include <bits/stdc++.h>
using namespace std;


//O(n^2)
vector<int> twoSum_BRUTE(vector<int>& nums, int target) {
        int n = nums.size();
        for(int i = 0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i!=j){
                    if(nums[i]+nums[j]==target) return {i,j};
                }
            }
        }
        return {};
}

//Optimal
vector<int> twoSum(vector<int>& nums, int target) {
    int n = nums.size();
    unordered_map<int,int> umpp;
    vector<int> result(2,-1);
    for(int i = 0;i<n;i++){
        if(umpp.find(nums[i])!=umpp.end()){
            result[0] =umpp[nums[i]];
            cout<<result[0];
            result[1] = i;
            cout<<result[1];
            break;
        } 
        umpp[target-nums[i]] = i;
    }
    return result;
}

//Try solving this problem using sorting and two pointers because this will help you in three sum problem
//Here you need to take care that the solution will be the numbers not the indices
//Time complexity = O(nlogn) Space Complexity = O(1)

pair<int,int> TwoSum_sorting(vector<int>& nums,int target){
    int n = nums.size();
    sort(nums.begin(),nums.end());
    int i = 0;
    int j = n-1;
    while(i<j){
        int sum = nums[i]+nums[j];
        if(sum>0) j--;
        if(sum<0) i++;
        else return {nums[i],nums[j]};
    }
    return {-1,-1};
}
int main() {
    vector<int> v = {3,2,4};
    vector<int> result = twoSum(v,6);
    return 0;
}