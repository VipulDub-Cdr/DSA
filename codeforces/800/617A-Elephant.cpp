#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    cin>>x;
    int i = 5;
    int sum = 0;
    int count = 0;
    while(i){
        if(i>(x-sum)){
            i--;
            continue;
        }
        sum+=i;
        count++;
        if(sum==x) break;
    }
    cout<<count;
    return 0;
}