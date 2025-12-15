#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[5][5];
    int r,c;
    for(int i = 0;i<5;i++){
        for(int j = 0;j<5;j++){
            int val;
            cin>>val;
            if(val==1){
                r=i,
                c=j;
            }
            arr[i][j] = val; 
        }
    }
    int ans = abs(r-2)+abs(c-2);
    cout<<ans;
    return 0;
}