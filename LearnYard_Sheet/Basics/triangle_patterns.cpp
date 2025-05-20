#include <bits/stdc++.h>
using namespace std;

void triangle(int n){
    for(int i = 0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void hollowTriangleRight(int n){
    for(int i=0;i<n;i++) {
        for(int j =0;j<n;j++){
            if(j==0 || i==j || i==n-1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

void invertedrightTriangle(int n){
    for(int i=n-1;i>=0;i--){
        for(int j=n-i;j<n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void rightTriangle(int n){
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n-i-1;j++){
            cout<<" ";
        }
        for(int j = n-i-1;j<n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main() {
    // triangle(5);
    // hollowTriangleRight(5);
    rightTriangle(5);
    // invertedrightTriangle(5);
    return 0;
}