#include <bits/stdc++.h>
using namespace std;
//here n is the number of edges
int detectCycleDirectedGraph(int n, vector<pair<int,int>> & edges){
    //create adjacency list
    unordered_map<int,list<int>> adjList;
    for(auto row:edges){
        int u = row.first;
        int v = row.second;
        adjList[u].push_back(v);
    }

    //create indegree vector
    vector<int> indegree(n,0);
    for(auto i:adjList){
        for(auto j:i.second){
            indegree[j]++;
        }
    }

    queue<int> q;
    for(int i = 0;i<n;i++){
        if(indegree[i]==0) q.push(i);
    }

    int count = 0;
    while(!q.empty()){
        int fn = q.front();
        q.pop();
        count++;

        for(auto adjnode:adjList[fn]){
            indegree[adjnode]--;
            if(indegree[adjnode]==0) q.push(adjnode);
        }
    }
    return count==n?false:true;

}

int main() {
    
    return 0;
}