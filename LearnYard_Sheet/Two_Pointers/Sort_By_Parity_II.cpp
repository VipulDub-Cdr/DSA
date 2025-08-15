#include <bits/stdc++.h>
using namespace std;

// Given an array of integers nums, half of the integers in nums are odd, and the other half are even.
// Sort the array so that whenever nums[i] is odd, i is odd, and whenever nums[i] is even, i is even.
// Return any answer array that satisfies this condition.


void printvector(vector<int> result){
    for(auto it:result){
        cout<<it<<" ";
    }
    cout<<endl;
}


//O(n) and O(2n) space
vector<int> sortArrayByParityII_BRUTE(vector<int>& nums) {
        int n = nums.size();

        vector<int> evenarr;
        vector<int> oddarr;

        if(n%2!=0) return {};

        for(auto num:nums){
            if(num%2==0){
                evenarr.push_back(num);
            }
            else{
                oddarr.push_back(num);
            }
        }

        printvector(evenarr);
        printvector(oddarr);

        int e = 0;
        int o = 0;

        for(int i=0;i<n;i++){
            if(i%2==0){
                nums[i] = evenarr[e];
                e++;
            }
            else{
                nums[i] = oddarr[o];
                o++;
            }
        }
        return nums;
    }


//Two pointer method
vector<int> sortArrayByParityII(vector<int>& nums) {
        int n = nums.size();
        
        if(n%2!=0 || n==1) return {};

        int ei = 0;
        int oi = 1;

        while(ei<n and oi<n){
            if(nums[ei]%2==0) ei+=2;
            if(nums[oi]%2!=0) oi+=2;
            if(ei<n and oi<n){
                if(nums[ei]%2!=0 and nums[oi]%2==0) swap(nums[ei],nums[oi]);
            }
        }

        return nums;
}
int main() {
    
    vector<int> v = {4,2,5,7};
    vector<int> result = sortArrayByParityII(v);
    for(auto it:result){
        cout<<it<<" ";
    }
    return 0;
}