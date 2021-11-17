#include<bits/stdc++.h>
using namespace std;

bool bipartite(int node,vector<int> adj[],vector<int> color) {
    if(color[node]==-1) color[node]=1;

    for(auto it:adj[node]) {
        if(color[it]==-1) {
            color[it] = 1-color[node];
            if(!bipartite(it,adj,color)) {
                return false;
            }
        }
    }
    return true;
}

bool checkBipartite(int node,vector<int> adj[]) {
    vector<int> color(node,-1);
    for(int i=0; i<node; i++) {
        if(color[i]==-1){
            if(bipartite(i, adj, color)) return true;
        }
    }
    return false;
}

int main() {
    int v,e;
    cin>>v>>e;
    vector<int> adj[v];
    for(int i=0; i<=e; i++) {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    if(checkBipartite(v,adj)) cout<<"yes";
    else cout<<"No";
}