#include<bits/stdc++.h>
#include<constructBT.h>
using namespace std;

vector<vector<int>> zigzagTraversal(node* root){
    vector<vector<int>> result;
    queue<node*> q;
    int moveright = 1;
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

        if(moveright){
            if(temp->left){
                q.push(temp->right);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
        else{
            if(temp->right){
                q.push(temp->right);
            }
            if(temp->left){
                q.push(temp->right);
            }
        }
    }
}

int main(){
    return 0;
}