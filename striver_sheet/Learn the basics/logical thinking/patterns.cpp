#include <bits/stdc++.h>
using namespace std;

void traverse(char arr[5][5]){
    for(int i =0;i<5;i++){
        for(int j=0;j<5;j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }
}
void traverse2(int arr[5][5]){
    for(int i =0;i<5;i++){
        for(int j=0;j<5;j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }
}

void pattern1(){
    char arr[5][5];
    for(int i = 0;i<5;i++){
        for(int j = 0;j<5;j++){
            arr[i][j] = '*';
        }
    }
    traverse(arr);
}

void pattern2(){
    char arr[5][5];
    memset(arr,' ',sizeof(arr));
    for(int i = 0;i<5;i++){
        int end = i+1;
        for(int j = 0;j<end;j++){
            arr[i][j] = '*';
        }
    }
    traverse(arr);
}

void pattern3(){
    int arr[5][5];
    memset(arr,0,sizeof(arr));
    for(int i = 0;i<5;i++){
        int end = i+1;
        for(int j = 0;j<end;j++){
            arr[i][j] = j+1;
        }
    }
    traverse2(arr);
}

// 4444444
// 4333334
// 4322234
// 4321234
// 4322234
// 4333334
// 4444444

void pattern22(){
    int arr[7][7];
    memset(arr,' ',sizeof(arr));
    int left = 0, right = 7, top = 0, bottom = 7;
    int count = 4;
    while(left<=right){
        for(int i = left;i<right;i++){
            arr[top][i] = count;
        }
        top++;
        right--;
        for(int i = top;i<bottom;i++){
            arr[right][i] = count;
        }
        bottom--;
        // for(int i = right;i>=left;i--){
            // arr[bottom]
        // }

    }
}

int main() {
    // pattern1();
    // pattern2();
    pattern3();
    cout<<char('A'+1)<<endl;
    return 0;
}