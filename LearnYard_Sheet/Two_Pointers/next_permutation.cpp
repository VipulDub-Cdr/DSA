#include <bits/stdc++.h>
using namespace std;

void next_permutation(vector<int>& nums){
    int n = nums.size();
    
    int pivot_index = -1;

    //find the pivot index
    for(int i = n-1;i>0;i--){
        if(nums[i]>nums[i-1]){
            pivot_index = i-1;
            break;
        }
    }

    // check if pivot index exist then find the next greater element index
    if(pivot_index!=-1){
        int swap_index = pivot_index;
        for(int i=n-1;i>=pivot_index+1;i--){
            if(nums[i]>nums[pivot_index]){
                swap_index = i;
                break;
            }
        }
        swap(nums[pivot_index],nums[swap_index]);
    }
    
    reverse(nums.begin()+pivot_index+1,nums.end());

}

int main() {
    
    return 0;
}