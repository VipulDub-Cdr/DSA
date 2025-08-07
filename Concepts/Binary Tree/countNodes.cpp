#include <bits/stdc++.h>
#include<constructBT.h>
using namespace std;

int countNodes(node* root){
    if(root==NULL) return 0;
    if(root->left ==NULL and root->right==NULL) return 1;

    int count = 1+countNodes(root->left)+countNodes(root->right);
    return count;
}

int main() {
    
    return 0;
}