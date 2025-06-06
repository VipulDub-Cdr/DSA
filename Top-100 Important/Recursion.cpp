#include <bits/stdc++.h>
using namespace std;

//Power of a number
int powerBrute(int b,int p){
    if(p==0) return 1;
    return b*powerBrute(b,p-1);
}
int powerOptimal(int b,int p){
    if(p==0) return 1;
    if(p%2==0){
        return powerOptimal(b*b,p/2);
    }
    else{
        return b*powerOptimal(b*b,(p-1)/2);
    }
}

//check if a number is prime or not
bool isPrime(int n,int i = 2){
    if(n==1) return false;
    if(i*i>n) return true;
    if(n%i==0) return false;
    return isPrime(n,i+1);
}

//largest element in an array
int largest_element(int arr[],int n){
    if(n==1) return arr[n-1];
    int larg = largest_element(arr,n-1);
    return arr[n-1]>larg?arr[n-1]:larg;
}

//smallest element in an array
int smallest_element(int arr[],int n){
    if(n==1) return arr[0];
    int minele = smallest_element(arr,n-1);
    return arr[n-1]<minele?arr[n-1]:minele;
}

//reversing a number using recursion
int reverseHelper(int n,int revnum){
    if(n==0) return revnum;
    return reverseHelper(n/10,revnum*10+n%10);
}
int reversenum(int n){
    return reverseHelper(n,0);
}

//hcf
int hcfOptimal(int a,int b){
    return b==0?a:hcfOptimal(b,a%b);
}

//find the length of c-style strings
int stringLength(const char* str) {
    if (*str == '\0') return 0;
    return 1 + stringLength(str + 1);
}

//permutation of the string (for best explanation refer to the website diagram)
//you can also use in built method next_permutation(str.begin(),str.end());
void permute(string s,int l,int r){
    if(l==r){
        cout<<s<<endl;
        return;
    }
    else{
        for(int i = l;i<=r;i++){
            swap(s[i],s[l]);
            permute(s,l+1,r);
            swap(s[i],s[l]);
        }
    }
}

//Find the nth term of the series - F(N)= (1) +(2*3) + (4*5*6) … N.
int term(int calculated,int current,int N){
    int i,curr;
    if(current==N+1) return 0;
    for(int i = calculated;i<current+calculated;i++){
        curr*i;
    }
    return curr+term(i,current+1,N);
}

//

int main() {
    // cout<<powerOptimal(3,4);
    int arr[] = {2,21,8,7,19};
    // cout<<largest_element(arr,5);
    // cout<<smallest_element(arr,5);
    cout<<reversenum(1234);
    return 0;
}