#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int t;
    t = n;
    int sum = 0;
    while(t--){
        int p;
        cin>>p;
        sum+=p;
    }
    double ans = (double)sum / n;
    cout<<ans;
    return 0;
}
