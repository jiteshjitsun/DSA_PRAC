// bfs undirected graph
#include<bits/stdc++.h>
using namespace std;

// vector<int> bfsTraversal(int n, int m, vector<int> adj[]) {
//     vector<int> bfs;
//     vector<int> vis(n+1,0);

//     for(int i=1; i<=m; i++) {
//         if(!vis[i]) {
//             queue<int> q;
//             q.push(i);
//             vis[i] = 1;
//             while(!q.empty()) {
//                 int node = q.front();
//                 q.pop();
//                 bfs.push_back(node);

//                 for(auto it : adj[node]) {
//                     if(!vis[it]) {
//                         q.push(it);
//                         vis[it] = 1;
//                     }
//                 }
//             }
//         }
//     }
//     return bfs;
// }
void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    // adj[v].push_back(u);
}
int main(){
    int n,m; // n is node & m is edges 
    cin >>n>>m;
    vector<int> adj[n];

    int u,v;
    for(int i=0; i<m; i++) {
        cin>>u>>v;
        addEdge(adj,u,v);
    }

    for(int i=0; i<m; i++) {
        for(int j=0; j<adj[i].size(); j++) {
            cout<<adj[i][j]<<" ";
        }
    }
    // vector<int> res = bfsTraversal(n, m, adj);
    // for(int i=0; i<res.size(); i++) {
    //     cout<< res[i] << " ";
    // }
}