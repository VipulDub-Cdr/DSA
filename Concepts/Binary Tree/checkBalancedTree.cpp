#include <bits/stdc++.h>
#include<constructBT.h>
using namespace std;

int getHeight(node* root){
    if(!root) return 0;

    int leftHeight = getHeight(root->left);
    int rightHeight = getHeight(root->right);

    return max(leftHeight,rightHeight)+1;
}

bool checkBalancedTree(node* root){
    if(root==NULL) return root;

    return abs(getHeight(root->left)-getHeight(root->right))>=2;
}

int main() {
    
    return 0;
}