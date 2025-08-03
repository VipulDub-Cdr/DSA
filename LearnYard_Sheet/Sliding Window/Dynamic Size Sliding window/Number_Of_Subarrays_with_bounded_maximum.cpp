//leetcode-795
#include <bits/stdc++.h>
using namespace std;

// approach kuch aise hai ki agar hum find karle number of subarrays jinke maxelement less than left ho and number of subarrays jinke maximum element less than equal to right ho aur un dono ko minus karde toh hume wo subarrays ka count miljaayga jinke maximum element left and right ke beechme hai including left and right

int countSubarrays(vector<int> arr,int bound){
    int count = 0;
    int ans = 0;
    for(int i = 0;i<arr.size();i++){
        if(arr[i]<=bound) count++;
        else count = 0;
        ans+=count;
    }
    return ans;
}
int numSubarrayBoundedMax(vector<int>& arr, int left, int right) {
    // take care of the bound here
    return countSubarrays(arr,right)-countSubarrays(arr,left-1);
}
int main() {
    
    return 0;
}