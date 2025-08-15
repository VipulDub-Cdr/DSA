#include <bits/stdc++.h>
using namespace std;


//Brute and also optimal - O(n) and O(n)
vector<int> pivotArray_BRUTE(vector<int>& nums, int pivot) {
    int n = nums.size();
    vector<int> result(n,0);

    int i = 0;

    for(auto num:nums){
        if(num<pivot){
            result[i] = num;
            i++;
        }
    }

    for(auto num:nums){
        if(num==pivot){
            result[i] = num;
            i++;
        }
    }

    for(auto num:nums){
        if(num>pivot){
            result[i] = num;
            i++;
        }
    }

    return result;
}

//Another approach
vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n = nums.size();

        int L = 0;
        int E = 0;
        
        for(auto num:nums){
            if(num<pivot) L++;
            if(num==pivot) E++;
        }

        int i = 0;
        int j = L;
        int k = L+E;

        vector<int> result(n);

        for(auto num:nums){
            if(num<pivot){
                result[i] = num;
                i++;
            }
            else if(num==pivot){
                result[j] = num;
                j++;
            }
            else if(num>pivot){
                result[k] = num;
                k++;
            }
        }

        return result;
        
    }

int main() {
    
    return 0;
}