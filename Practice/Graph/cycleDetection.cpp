#include <bits/stdc++.h>
using namespace std;
//n is the number of vertices and m is the number of edges
bool detectCycle(vector<vector<int>> &edges,int n,int m){
    unordered_map<int,bool> visited;
    unordered_map<int,list<int>> adjList;
    for(int i = 0;i<m;i++){
        int u = edges[i][0];
        int v = edges[i][1];

        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
    for(int i = 0;i<n;i++){
        if(!visited[i]){
            bool ans = isCycleBFS(adjList,visited,i);
            if(ans) return true;
        }
    }
    return false;
}
bool isCycleBFS(unordered_map<int,list<int>> adjList,unordered_map<int,bool> &visited,int startingNode){
    queue<int> q;
    vector<int,int> parent;
    visited[startingNode] = true;
    q.push(startingNode);
    parent[startingNode] = -1;
    while(!q.empty()){
        int frontVal = q.front();
        q.pop();
        for(auto neighbour:adjList[frontVal]){
            // This line is vvimp!
            if(visited[neighbour]==true and parent[frontVal]!=neighbour){
                return true;
            }
            if(!visited[neighbour]){
                visited[neighbour] = true;
                q.push(neighbour);
                parent[neighbour] = frontVal;
            }
        }
    }
    return false;
}
int main() {
    
    return 0;
}