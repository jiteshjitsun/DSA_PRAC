#include<bits/stdc++.h>
using namespace std;

void findToposort(int node,vector<int> &vis,vector<int> adj[],stack<int> &s) {
    vis[node] = 1;
    for(auto it:adj[node]) {
        if(!vis[it])
            findToposort(it,vis,adj,s);
    }
    s.push(node);
}

int main() {
    int v,e;
    cin>>v>>e;
    vector<int> adj[v];
    for(int i=0; i<e; i++) {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
    }

    vector<int> vis(v,0);
    stack<int> s;
    for(int i=0; i<v; i++) {
        if(!vis[i]) {
            findToposort(i,vis,adj,s);
        }
    }

    vector<int> ans;
    while(!s.empty()) {
        ans.push_back(s.top());
        s.pop();
    }

    for(int i=0; i<ans.size(); i++) { 
        cout<<ans[i]<<" ";    
    }
}