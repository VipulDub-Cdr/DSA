#include<cmath>
extern bool isPrime(int n){
    if(n<2) return false;
    if(n==2) return true;
    if(n%2==0) return false;
    int limit = sqrt(n);
    for(int i = 3;i<=limit;i+=2){
        if(n%i==0) return false;
    }
    return true;
}
extern int factorial(int n){
    if(n==0||n==1) return 1;
    return n*factorial(n-1);
}


