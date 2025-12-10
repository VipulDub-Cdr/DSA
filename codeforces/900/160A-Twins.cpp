#include <bits/stdc++.h>
using namespace std;
// codeforces 160A-Twins
int main() {
    int n;
    cin>>n;
    vector<int> arr(n,0);
    while(n--){
        int value;
        cin>>value;
        arr.push_back(value);
    }
    sort(arr.begin(),arr.end());
    int tsum = 0;
    for(auto it:arr){
        tsum += it;
    }
    int ans = 0;
    int sum = 0;
    for(int i = arr.size()-1;i>=0;i--){
        sum+=arr[i];
        int remsum = tsum-sum;
        ans++;
        if(sum>remsum){
            cout<<ans;
            break;
        }
    }
    return 0;
}