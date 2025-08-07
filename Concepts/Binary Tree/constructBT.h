#include <bits/stdc++.h>
using namespace std;

class node{ 
    public:
    int data;
    node* left;
    node* right;
        node(int data){
            this->data = data;
            left = NULL;
            right = NULL;
        }
};

node* buildTree(node* root){
    cout<<"Enter the data: ";
    int data;
    cin>>data;

    if(data==-1) return NULL;

    root = new node(data);

    cout<<"Enter the data to be inserted to the left of"<<data<<" : ";
    root ->left = buildTree(root->left);
    
    cout<<"Enter the data to be inserted to the right of"<<data<<" : ";
    root ->right = buildTree(root->right);
    
    return root;
    
}

int main() {
    node* root = buildTree(NULL);
    return 0;
}