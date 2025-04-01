#include <bits/stdc++.h>
using namespace std;
// Merge with condition
// 1. Sort by id
// 2. union of both arrays
// 3. if id exist in both ? value from num1+value from num2 : value from either
vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
    int p=0,q=0;
    vector<vector<int>> ans;
    int n1 = nums1.size();
    int n2 = nums2.size();
    while(p<n1 || q<n2){
        if(p<n1 and q<n2){
            if(nums1[p][0]==nums2[q][0]){
                ans.push_back({nums1[p][0],nums1[p][1]+nums2[q][1]});
                p++;
                q++;
            }
            else if(nums1[p][0]<nums2[q][0]){
                ans.push_back({nums1[p][0],nums1[p][1]});
                p++;
            }
            else{
                ans.push_back({nums2[q][0],nums2[q][1]});
                q++;
            }
        }
        else if(p<n1){
            ans.push_back({nums1[p][0],nums1[p][1]});
            p++;
        }
        else{
            ans.push_back({nums2[q][0],nums2[q][1]});
            q++;
        }

    }
   
    return ans;
}
int main() {
    vector<std::vector<int>> nums1 = {{2, 4}, {3, 6}, {5, 5}};
    vector<std::vector<int>> nums2 = {{1, 3}, {4, 3}};
    vector<vector<int>> result = mergeArrays(nums1, nums2);
    for (const auto& row : result) {
        cout << "[" << row[0] << ", " << row[1] << "] ";
    }
    return 0;
}