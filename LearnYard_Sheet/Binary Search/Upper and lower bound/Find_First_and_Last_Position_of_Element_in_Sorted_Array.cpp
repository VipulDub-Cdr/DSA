#include <bits/stdc++.h>
using namespace std;
int firstOcc(vector<int>& nums, int target){
    int s = 0,e = nums.size()-1;
    int mid = (s+e)/2;
    int index = -1;
    while(s<=e){
        if(target==nums[mid]){
            index = mid;
            e = mid-1;
        }
        else if(target>nums[mid]){
            s = mid+1;
        }
        else{
            e = mid-1;
        }
        mid = (s+e)/2;
    }
    return index;
}
int lastOcc(vector<int>& nums, int target){
    int s = 0,e = nums.size()-1;
    int mid = (s+e)/2;
    int index = -1;
    while(s<=e){
        if(target==nums[mid]){
            index = mid;
            s = mid+1;
        }
        else if(target>nums[mid]){
            s = mid+1;
        }
        else{
            e = mid-1;
        }
        mid = (s+e)/2;
    }
    return index;
}
vector<int> searchRange(vector<int>& nums, int target) {
    vector<int> ans;
    ans.push_back(firstOcc(nums,target));
    ans.push_back(lastOcc(nums,target));
    return ans;
}
int main() {
    vector<int> nums = {5,7,7,8,8,10};
    vector<int> ans = searchRange(nums,7);
    for(auto it:ans){
        cout<<it<<" ";
    }
    return 0;
}