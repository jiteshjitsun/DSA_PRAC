#include<bits/stdc++.h>
using namespace std;

bool checkCycle(int node,vector<int> adj[],vector<int> vis,vector<int> dfsvis) {
    vis[node] = 1;
    dfsvis[node] = 1;
    for(auto it:adj[node]) {
        if(!vis[it]) {
            if(checkCycle(it,adj,vis,dfsvis)) return true;
        }
        else if(dfsvis[it]) return true;
    }
    dfsvis[node] = 0;
    return false;
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
    vector<int> dfsvis(v,0);
    for(int i=0; i<v; i++) {
        if(!vis[i]) {
            if(checkCycle(i,adj,vis,dfsvis)) {
                cout<<"yes";
                return 0;}
        }
    }
    cout<<"NO"<<endl;

}
//Hare krishna hare krishna krishna krishna hare hare hare ram hare ram ram ram hare hare jai srila parabhupada
