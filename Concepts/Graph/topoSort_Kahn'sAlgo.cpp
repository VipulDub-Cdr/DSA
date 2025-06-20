#include <bits/stdc++.h>
using namespace std;

vector<int> topoSortKahn(vector<vector<int>> &edges, int V) {
    // Build adjacency list from edge list
    unordered_map<int, list<int>> adjList;
    for (int i = 0; i < edges.size(); i++) {
        int u = edges[i][0];
        int v = edges[i][1];
        adjList[u].push_back(v);
    }

    // Create indegree vector
    vector<int> indegree(V, 0);
    for (auto it : adjList) {
        for (auto node : it.second) {
            indegree[node]++;
        }
    }

    queue<int> q;
    for (int i = 0; i < V; i++) {
        if (indegree[i] == 0) q.push(i);
    }

    vector<int> topo;
    while (!q.empty()) {
        int front = q.front();
        q.pop();
        topo.push_back(front);

        for (auto node : adjList[front]) {
            indegree[node]--;
            if (indegree[node] == 0) q.push(node);
        }
    }

    return topo;
}

int main() {
    
    return 0;
}