#include <bits/stdc++.h>
#include<constructBT.h>
using namespace std;

int countLeafNodes(node* root){
    if(root==NULL) return 0;
    if(!root->left and !root->right) return 1;
    return countLeafNodes(root->left)+countLeafNodes(root->right);
}

int main() {
    node* root = buildTree(NULL);
    cout<<countLeafNodes(root);
    return 0;
}