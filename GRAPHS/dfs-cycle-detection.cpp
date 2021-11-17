#include<bits/stdc++.h>
using namespace std;

bool dfs(int node, vector<int> &vis,vector<int> adj[],int parent) {
    vis[node] = 1;
    for(auto it:adj[node]) {
        if(!vis[it]) {
            if(dfs(it, vis,adj,node)) return true;
        }
        else if(it!=parent) return true;
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
            if(dfs(i,vis,adj,-1))
                cout<<"present"<<endl;
            else
                cout<<"not present"<<endl;
    }
}