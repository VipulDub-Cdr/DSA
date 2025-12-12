#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int k;
    cin>>k;
    vector<int> arr(n,0);
    int j = 0;
    for(int i=1;i<=n;i++){
        if(i%2!=0){ arr[j] = i;j++;}
    }
    for(int i=1;i<=n;i++){
        if(i%2==0){
             arr[j] = i;j++;
        };
    }
    cout<<arr[k-1];
    return 0;
}