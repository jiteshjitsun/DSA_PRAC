#include<bits/stdc++.h>
using namespace std;

void dfs(int node, vector<int> &vis,vector<int> adj[], vector<int> &storeDfs) {
    storeDfs.push_back(node);
    vis[node] = 1;
    for(auto it:adj[node]) {
        if(!vis[it]) {
            dfs(it, vis,adj,storeDfs);
        }
    }
}

int main() {
    int v,e;
    cin>>v>>e;
    vector<int> adj[v+1];
    for(int i=0; i<e; i++) {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int> vis(v+1,0);
    vector<int> storeDfs;
    for(int i=1; i<=v; i++){
        if(!vis[i]) 
            dfs(i,vis,adj,storeDfs);
    }
    for(int i=0; i<storeDfs.size(); i++)
        cout<<storeDfs[i]<<" ";
}