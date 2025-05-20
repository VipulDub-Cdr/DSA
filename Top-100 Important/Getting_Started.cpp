#include <bits/stdc++.h>
using namespace std;
// Find if is even or odd
bool isEven(int num){
    return !(num&1);
}
// Find the Sum of N Natural Numbers using recursion
int getSum(int n){
    if(n==0) return n;
    return n+getSum(n-1);
}
// Find the Sum of Numbers in a Given Interval [a,b] a<b using recursion
int sumRange(int a,int b){
    if(a>b) return 0;
    return a+sumRange(a+1,b);
}
//Leap year
bool isleapyr(int year){
    if(year%400==0) return true;
    else if(year%4==0 and year%100!=0) return true;
    return false;
}
//is prime number or not (most optimal) T.c - O(rootn) here we're also skipping all the even iterations
bool isPrime(int n){
    if(n<2) return false;
    if(n==2) return true;
    if(n%2==0) return false;
    int limit = sqrt(n);
    for(int i = 3;i<=limit;i+=2){
        if(n%i==0) return false;
    }
    return true;
}
//recursive approach for the above question
bool isPrimeRecursive(int n,int i){
    if(n<2) return false;
    if(n==i) return true;
    if(n%i==0) return false;
    i+=1;
    return isPrimeRecursive(n,i);
}

//Prime numbers within a given range
//Brute force solution T.C - O(N*sqrt(N))
//using seive of eratosthenes - T.C- O(Nlog(logN)) kaise aayi ye Time complexity?
//1. Make and array of n+1 size and sabko 1 mark kardo (initially hum ye bol rahe hain ki saare 2 to n tak prime hai )
//2. Apply the logic agar koi bhi prime milta hai toh uske multiples prime nahi honge isliye wahaan value zero kardo
//3. For optimization i*2 se naa shuru karte hue i*i se shuru karo j ko.
void primeNumbersOptimal(int n){
    if(n<2) return;
    vector<int> arr(n+1,1);
    arr[0] = arr[1] = 0;
    for(int i = 2;i<=n;i++){
        if(arr[i]){
            for(int j=i*2;j<=n;j+=i){
                arr[j] = 0;
            }
        }
    }
    for(int i = 2;i<=n;i++){
        if(arr[i]) cout<<i<<endl;
    }
}
//Sum of digits of a number using recursion
int sumOfDigits(int sum, int n){
    if(n==0) return sum;
    int ld = n%10;
    sum+=ld;
    return sumOfDigits(sum,n/10);
}   
//reverse a number using recursion auxiliary space complexity : O(N)
int revNumber(int rev,int n){
    if(n==0) return rev;
    int ld = n%10;
    rev = rev*10+ld;
    return revNumber(rev,n/10);
}
//Palindrome - A number is a Palindrome number if the reverse of the number and the numbers itself are equal
// abcd… = a^n + b^n + c^n + d^n + …  Where n is the order(length/digits in number)

//Fibonacci series
void fib1(int n){
    int a = 0;
    cout<<a<<endl;
    int b = 1;
    cout<<b<<endl;
    for(int i=2;i<n;i++){
        int nextTerm = a+b;
        a = b;
        b = nextTerm;
        cout<<nextTerm<<endl;
    }
}
//static variable has local scope but static(persistent) storage duration
void fib2(int n){
    static int a = 0,b = 1,nextTerm;
    if(n>0){
        nextTerm = a+b;
        a = b;
        b = nextTerm;
        cout<<nextTerm<<" ";
        fib2(n-1);
    }
}
//without using static variable O(N)
int fib3(int n){
    if(n<=1) return n;
    return fib3(n-1)+fib3(n-2);
}

//using dp
//bottom - up approach : tabulation
//bottom se top jaate jaate hum result ko store karaate jaatein hain taaki aage uski need padhne par hume result firse na calc karna padhe
int fib4(int n){
    if(n<=1) return n;
    vector<int> dp(n+1,0);
    dp[0] = 0;
    dp[1] = 1;
    for(int i=2;i<=n;i++){
        dp[i] = dp[i-1]+dp[i-2];
    }
    return dp[n-1];
}

//Find the power of a number using power exponentiation A^B
int calcPower(int a,int b){
    int val = 0;
    while(b!=1){
        if(b%2==1) val = a;
        a = a*a;
        b = b/2;
    }
    return a*val;
}
int main() {
    // primeNumbersOptimal(13);
    // cout<<fib4(6);
    cout<<calcPower(2,10);
    return 0;
}