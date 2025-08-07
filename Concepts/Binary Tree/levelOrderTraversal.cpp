#include <bits/stdc++.h>
#include<constructBT.h>
using namespace std;

//without separator
void levelOrderTraversal(node* root){
    if(root==NULL){ cout<<"Tree is empty"; return;}
    queue<node*> q;
    q.push(root);
    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        cout<<temp->data<<endl;
        if(temp->left) q.push(temp->left);
        if(temp->right) q.push(temp->right);
    }
}

//with separator as NULL
void levelOrderTraversal(node* root){
    if(root==NULL){cout<<"Tree is empty";return;}
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        if(temp==NULL){
            if(!q.empty()){
                q.push(temp);
            }
        }
    }
}

int main() {
    
    return 0;
}