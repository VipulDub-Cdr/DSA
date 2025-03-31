#include <bits/stdc++.h>
using namespace std;
//n is number of rows
void pyramid(int n){
    for(int i =0;i<n;i++){
        for(int j = 0;j<n-i-1;j++){
            cout<<" ";
        }
        for(int j = n-i-1;j<n+i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
} 

int main() {
    pyramid(5);
    return 0;
}