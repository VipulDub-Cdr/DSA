#include <bits/stdc++.h>
#include "functions.h"
using namespace std;

//HCF - highest common factor or GCD - Greatest common divisor
//hcf of 36,60
// 36 = 2 x 2 x 3 x 3
// 60 = 2 x 2 x 3 x 5
//HCF = 2 x 2 x 3 = 12 
int hcfBrute(int a,int b){
    int hcf = 0;    
    for(int i = 1;i<=min(a,b);i++){
        if(a%i==0 and b%i==0) hcf = i;
    }
    return hcf;
}
int hcfOptimal(int a,int b){
    return b==0?a:hcfOptimal(b,a%b);
}

//LCM of 5 and 6
// 5 = 5,10,15,20,25,"30"
// 6 = 6,12,18,24,"30"

int lcmBrute(int a,int b){
    int i = max(a,b);
    for(;i<=a*b;i++){
        if(i%a==0 and i%b==0) return i;
    }
    return -1;
}
// o(log(min(a,b)))
int lcmOptimal(int a,int b){
    return (a/hcfOptimal(a,b))*b;
}

// x base to decimal conversion questions

//For these conversion extract the digit and multipy with the power of base
// Binary to Decimal
int binaryToDecimal(int n){
    int decimal = 0;
    int i = 0;
    while(n){
        int ld = n%10;
        decimal += ld*pow(2,i);
        i++;
        n/=10;
    }
    return decimal;
}

int binaryToDecimalOptimal(string bn){
    int dn = stoi(bn,0,2);
    return dn;
}

// octal to decimal
int octalToDecimal(int n){
    int decimal = 0;
    int i = 0;
    while(n){
        int ld = n%10;
        decimal += ld*pow(8,i);
        i++;
        n/=10;
    }
    return decimal;
}

//hexadecimal to decimal
int hexToDecimal(string n){
    int decimal = 0;
    int p = 0;
    int len = n.size();
    for(int i = len-1;i>=0;i--){
        if(n[i]>='0' and n[i]<='9'){
            int digit  = n[i]-48;
            decimal+=digit*pow(16,p);
        }
        else if(n[i]>='A' and n[i]<='Z'){
            int digit= n[i]-55;
            decimal+=digit*pow(16,p);
        }
        p++;
    }
    return decimal;
}

// decimal to binary
// push the remainder got by dividing the number by 2 in the array
vector<int> decToBinary(int n){
    if(n==0) return {0};
    vector<int> binaryarr;
    int i = 0;
    while(n){
        binaryarr.push_back(n%2);
        n/=2;
    }
    reverse(binaryarr.begin(),binaryarr.end());
    return binaryarr;
}

// decimal to octal
// push the remainder got by dividing the number by 8 in the array
vector<int> decToOctal(int n){
    if(n==0) return {0};
    vector<int> octalarr;
    while(n){
        octalarr.push_back(n%8);
        n/=8;
    }
    reverse(octalarr.begin(),octalarr.end());
    return octalarr;
}

//decimal to hexadecimal
// push the remainder got by dividing the number by 16 in the array
vector<char> decimalToHex(int n){
    vector<char> hexarr;
    while(n){
        int rem = n%16;
        hexarr.push_back((rem>=10 and rem<=15)?char(rem+55):char(rem+48));
        n/=16;
    }
    reverse(begin(hexarr),end(hexarr));
    return hexarr;
}

//binary to octal 
//3 3 ke pair banaake unko binary ki tarah treat karo 
void binToOctal(int n) {
    if (n == 0) {
        std::cout << 0 << std::endl;
        return;
    }

    // A vector is better for dynamic sizing, you might not need 32 slots.
    // If you stick with a fixed size, you need to manage 'pos' carefully.
    std::vector<int> octalArr;

    int currentOctalDigit = 0;
    int powerOf2 = 0; // Represents 2^0, 2^1, 2^2 for the current group
    int bitCount = 0; // Counts bits processed in the current group

    while (n > 0) {
        int lastBinaryDigit = n % 10; // Get the rightmost binary digit
        n /= 10;                      // Remove the rightmost binary digit

        // Basic validation (optional but good practice)
        if (lastBinaryDigit != 0 && lastBinaryDigit != 1) {
            std::cout << "Invalid binary input." << std::endl;
            return;
        }

        currentOctalDigit += lastBinaryDigit * std::pow(2, powerOf2);
        powerOf2++;
        bitCount++;

        // If a group of 3 bits is complete OR no more binary digits are left
        if (bitCount == 3 || n == 0) {
            octalArr.push_back(currentOctalDigit);
            // Reset for the next group
            currentOctalDigit = 0;
            powerOf2 = 0;
            bitCount = 0;
        }
    }

    // Print the octal digits from the last calculated (most significant)
    for (int j = octalArr.size() - 1; j >= 0; j--) {
        std::cout << octalArr[j];
    }
    std::cout << std::endl;
}

//permutation npr = n!/(n-r)!
int perm(int n,int r){
    return factorial(n)/factorial(n-r);
}

// For the number of handshakes to be maximum, every person should hand-shake with every other person in the room
// i.e. all persons present should shake hands.
// For the first person, there will be N-1 people to shake hands with
// For second person, there will be N -1 people available but as he has already shaken hands with the first person, there will be N-1-1 = N-2 shake-hands
// For third person, there will be N-1-1-1 = N-3, and So On…
// Therefore the total number of handshake   =   ( N – 1 + N – 2 +….+ 1 + 0 )   =   ( (N-1) * N ) / 2.

int maxHandshakes(int n){
    return (n-1)*n/2;
}

// (a/b) + (p/q)
void addTwoFractions(int a, int b,int p,int q){
    int lcm = lcmOptimal(b,q);
    int num = a*(lcm/b)+p*(lcm/q);
    int den = lcm;
    int hcf = hcfOptimal(num,den);
    num = num/hcf;
    den = den/hcf;
    cout<<num<<"/"<<den<<endl;
}

// Replace all the zeros with one in a given integer
int replace0with1(int n){
    int revnum = 0;
    while(n){
        int ld = n%10;
        revnum = revnum*10+(ld==0?1:ld);
        n/=10;
    }
    n = 0;
    while(revnum){
        int ld = revnum%10;
        n = n*10+ld;
        revnum/=10;
    }
    return n;
}

//Program to check whether a number be expressed as a sum of two prime numbers
bool isSumOfPrimes(int n){
    //starting from 2 because 1 is not a prime number
    for(int i = 2;i<=n/2;i++){
        if(isPrime(i) and isPrime(n-i)){
            return true;
        }
    }
    return false;
}


//** decoding digits

int decodeDigitsCount(string dig,int len){
    int cnt[len+1];
    cnt[0] = 1;
    cnt[1] = 1;
    for(int k = 2;k<=len;k++){
        cnt[k] = 0;
        // If the last digit is not '0', it can be decoded alone
        if(dig[k]>'0'){
            cnt[k] = cnt[k-1];
        }
        // If the last two digits form a number between 10 and 26
        if(dig[k-2]=='1' || (dig[k-2]=='2' and dig[k-1]<'7')){
            cnt[k]+=cnt[k-2];
        }
    }
    return cnt[len];   
}

//count the number of digits in an integer
int countDigits(int n){
    int count = 0;
    while(n){
        count++;
        n/=10;
    }
    return count;

    // count = floor(log10(n)+1);
}

//Convert numbers to words 0-9999 range
string numToWords(int n){
    if(n>9999) return "error";
    string ones[] = {"","one","two","three","four","five","six","seven","eight","nine"};
    string teens[] = {"ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
    string tens[] = {"","","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
    string words = "";
    if(n==0) return " zero ";
    if(n>=1000){
        words+=ones[n/1000]+" thousand ";
        n%=1000;
    }
    if(n>=100){
        words+=ones[n/100]+" hundred ";
        n%=100;
    }
    if(n>=20){
        words+=tens[n/10];
        n%=10;
    }else if(n>=10){
        words+=teens[n-10];
        return words;
    }
    if(n>0){
        words+=ones[n];
    }
    return words;
}

// Count the number of integers which has exactly x divisors
//Brute-force
int countDivisors(int n){
    int count = 0;
    for(int i = 1;i<=sqrt(n);i++){
        if(n%i==0){
            count++;
            if(n/i!=i) count++;
        }
    }
    return count;
}
int countDivisorsx(int n,int x){
    int count = 0;
    for(int i = 1;i<=n;i++){
        int counti = countDivisors(i);
        if(counti==x) count++;
    }
    return count;
}
// Optimal solution
int countDivisorsxOptimal(int n,int x){
    vector<int> arr(n+1);
    for(int i = 1;i<=n;i++){
        for(int j = i;j<=n;j+i){
            arr[j]++;
        }
    }
}

int main() {
// cout<<hcfOptimal(60,36);
// cout<<lcmBrute(5,6);
// cout<<lcmOptimal(5,6);
// binToOctal(11101011);
// addTwoFractions(1,3,3,9);
// replace0with1(12030);
// cout<<replace0with1(6003);
// cout<<numToWords(8346);
cout<<countDivisorsx(10,3);
    return 0;
}
