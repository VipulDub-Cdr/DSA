#include <bits/stdc++.h>
#include <constructBT.h>
using namespace std;

int getHeight(node* root){
    if(root==NULL) return 0;

    int leftHeight = getHeight(root->left);
    int rightHeight = getHeight(root->right);

    return max(leftHeight,rightHeight)+1;
}

int getDiameter(node* root){
    if(root==NULL) return 0;

    int d1 = getDiameter(root->left);
    int d2 = getDiameter(root->right);
    int d3 = getHeight(root->left)+getHeight(root->right)+1;

    return max(d1,max(d2,d3));
}

int main() {
    
    return 0;
}