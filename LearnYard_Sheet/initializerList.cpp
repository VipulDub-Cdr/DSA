#include <bits/stdc++.h>
using namespace std;
// 1. Agar aapko members class ke andar private rakhni hai then you have to use getter and setter function to access them
// 2. constructor intializer list
class Node{
    int data;
    Node* next;
    Node* prev;
    public:
    Node(int data):data(data),next(nullptr),prev(nullptr){}
    //semi colon nahi aata hai {} ke baad   
    // we don’t need this->data = data; because member initializer lists directly initialize members before entering the constructor’s body.
};
int main() {
    
    return 0;
}