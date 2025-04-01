#include <bits/stdc++.h>
using namespace std;
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int p = m+n-1;
    int e1 = m-1;
    int e2 = n-1;
    // Think more about this below condition 
    // Actually rather than using the another loop to place the remaining elements we can have the separarte condition inside the union condition
    //let's name it as union condition
    while(e2>=0 || e1>=0){
        if(e2>=0 and e1>=0){
            if(nums1[e1]>nums2[e2]){
                nums1[p] = nums1[e1];
                e1--;
                p--;
            }
            else if(nums1[e1]<=nums2[e2]){
                nums1[p] = nums2[e2];
                e2--;
                p--;
            }
        }
        else if(e1>=0){
            nums1[p] = nums1[e1];
                e1--;
                p--;
        }
        else{
            nums1[p] = nums2[e2];
                e2--;
                p--;
        }
    }

}
int main() {
    
    return 0;
}