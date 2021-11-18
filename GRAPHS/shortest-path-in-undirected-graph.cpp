#include<bits/stdc++.h>

using namespace std;

int main() {
    int v,e,src,a;
    cin>>v>>e>>src>>a;
    vector<int> adj[v];
    for(int i=0; i<e; i++) {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int> dist(v,INT_MAX);
    queue<int> q;
    dist[src] = 0;
    q.push(src);
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        
        for(auto it:adj[node]) {
            if(dist[node]+1 < dist[it]) {
                dist[it] = dist[node]+1;
                q.push(it);
            }
        }
    }
    
    for(int i=0; i<v; i++)
        if(a==i) cout<<"shortest distance is "<<dist[i]<<endl;
}