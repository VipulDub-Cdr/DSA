#include <bits/stdc++.h>
#include <constructBT.h>
using namespace std;

void reverseLevelOrderTraversal(node* root){
    stack<node*> stk;
    queue<node*> q;
    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        stk.push(temp);

        if(temp->right) q.push(temp->right);
        if(temp->left) q.push(temp->left);
    }
    while(!stk.empty()){
        cout<<(stk.top())->data<<" ";
        stk.pop();     
    }
}


int main() {
    
    return 0;
}