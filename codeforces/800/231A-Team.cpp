#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int ans = 0;
    // n-> 1000
    // O(n*3) = O(1000*3) = O(3000) = O(1);
    while(n--){
        int countSure = 0;
        for(int i = 1;i<=3;i++){
            int sure;
            cin>>sure;
            countSure+=sure;
        }
        if(countSure>=2) ans++;
    }
    cout<<ans;
    return 0;
}