#include <bits/stdc++.h>
#include<constructBT.h>

using namespace std;

bool isIdentical(node* root1, node* root2){
    if(root1==NULL and root2==NULL) return true;
    if(root1==NULL or root2==NULL) return false;

    bool isLeft = isIdentical(root1->left, root2->right);
    bool isRight = isIdentical(root1->right,root2->right);
    bool isEqual = root1->data==root2->data;

    return isLeft and isRight and isEqual;
}

int main() {
    
    return 0;
}