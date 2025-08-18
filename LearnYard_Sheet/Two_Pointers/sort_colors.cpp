#include <bits/stdc++.h>
using namespace std;


// Dutch National Flag algorithm
void sortColors(vector<int>& nums){
    int n = nums.size();
    int left = -1;
    int current = 0;
    int right = n;
    while(current<right){
        if(nums[current]==0){
            swap(nums[++left],nums[current++]);
        }
        else if(nums[current]==2){
            swap(nums[--right],nums[current]);
        }
        else{
            current++;
        }
    }
}

int main() {
    
    return 0;
}