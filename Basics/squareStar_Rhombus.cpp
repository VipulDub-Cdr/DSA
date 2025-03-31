#include <bits/stdc++.h>
using namespace std;

void squareStar(int n){
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void hollowSquarePattern(int n){
     for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            if(i == 0 || i == n-1 || j == 0 || j == n-1){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
void hollowWithDiagonal(int n){
    for(int i = 0;i<n;i++){
       for(int j = 0;j<n;j++){
           if(i == 0 || i == n-1 || j == 0 || j == n-1||i==j||i+j==n-1){
               cout<<"*";
           }else{
               cout<<" ";
           }
       }
       cout<<endl;
   }
}

void rhombus(int n){
    for(int i =0;i<n;i++){
        for(int j = 0;j<n-i;j++){
            cout<<""<<" ";
        }
        for(int j = n-i;j<=n-i+n-1;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}
// void mirrorRhombus(int n){
//     for(int i=0;i<n;i++){
//         for(int j=i;j<i+n-1;j++){

//         }
//     }
// }
int main() {
    // squareStar(5);
    // cout<<endl;
    // hollowSquarePattern(10);
    rhombus(5);
    return 0;
}