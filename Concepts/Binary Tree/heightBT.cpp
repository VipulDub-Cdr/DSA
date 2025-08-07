#include <bits/stdc++.h>
#include<constructBT.h>
using namespace std;

int height(node* root){
    if(root==NULL) return 0;

    int leftMax = height(root->left);
    int rightMax = height(root->right);

    //left ki height and right ki height me se konsi zyaada hai wo choose krlenge
    return max(leftMax,rightMax)+1;
}

int main() {
    node* root = buildTree(NULL);
    return 0;
}