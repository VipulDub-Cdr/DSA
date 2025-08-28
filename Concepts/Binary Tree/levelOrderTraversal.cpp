#include <bits/stdc++.h>
#include<constructBT.h>
using namespace std;

//without separator
// void levelOrderTraversal(node* root){
//     if(root==NULL){ cout<<"Tree is empty"; return;}
//     queue<node*> q;
//     q.push(root);
//     while(!q.empty()){
//         node* temp = q.front();
//         q.pop();
//         cout<<temp->data<<endl;
//         if(temp->left) q.push(temp->left);
//         if(temp->right) q.push(temp->right);
//     }
// }

void levelOrderTraversal(node* root){
    if(root==NULL) return;
    queue<node*> q;
    q.push(root);
    while(!q.empty()){
        node* temp = q.front();
        int data = temp->data;
        q.pop();

        if(temp->left) q.push(temp->left);
        if(temp->right) q.push(temp->left);
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
        cout<<temp->data<<" ";
        q.pop();
        if(temp->left) q.push(temp->left);
        if(temp->right) q.push(temp->right);
    }
}

int main() {
    return 0;
}