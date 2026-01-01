#include <bits/stdc++.h>
using namespace std;

int main() {
    int k, n, w;
    cin>>k;
    cin>>n;
    cin>>w;
    int totalCost = k*(w*(w+1)/2);
    int ans = totalCost-n;
    cout<<ans;
    return 0;
}