#include <bits/stdc++.h>
using namespace std;
//Yahaan par apan ko base condition ki zaroorat nahi padh rahi hai
void solve(vector<vector<int>> &adj, int startingNode, unordered_map<int, bool> &visited) { 
    visited[startingNode] = true;
    for(auto it : adj[startingNode]){
        if(!visited[it]){
            cout<<it<<" ";
            solve(adj, it, visited);
        }
    }
}

void DFS(vector<vector<int>> &adj,int startingNode){
    unordered_map<int, bool> visited;
    cout<<startingNode<<" ";
    solve(adj, startingNode, visited);
}

void BFS(vector<vector<int>> &adj,int startingNode){
    queue<int> q;
    q.push(startingNode);
    unordered_map<int, bool> visited;
    visited[startingNode] = true;
    while(!q.empty()){
        //Node uthao 
        int fontNode = q.front();
        q.pop();
        //print karo
        cout<<fontNode<<" ";
        //adjacent nodes ko push kardo
        for(auto it : adj[fontNode]){
            if(!visited[it]){
                q.push(it);
                visited[it] = true;
            }       
        }
    }
}
int main() {
    // vector<vector<int>> adj = {{1, 2}, {0, 2}, {0,1,3,4}, {2}, {2}};
    vector<vector<int>> adj = {{2,3,1}, {0}, {0,4}, {0}, {2}};
    DFS(adj,0);
    cout<<endl;
    BFS(adj,0);
    return 0;
}