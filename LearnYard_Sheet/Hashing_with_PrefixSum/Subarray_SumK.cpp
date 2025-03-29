#include <bits/stdc++.h>
using namespace std;
int subarraySum(vector<int>& nums, int k) {
    unordered_map<int,int> umpp;
    // umpp - <prefixSum, frequency>
    umpp[0] = 1;
    int sum = 0, result = 0;
    for(int i=0;i<nums.size();i++){
        sum += nums[i];
        if(umpp.find(sum - k) != umpp.end()){
            result += umpp[sum - k];
        }
        umpp[sum]++;
    }
    return result;
}  
int main() {
    vector<int> nums = {1, 1, 1};
    int k = 2;
    cout << subarraySum(nums, k) << endl;
    return 0;
}