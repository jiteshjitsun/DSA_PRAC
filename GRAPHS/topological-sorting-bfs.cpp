#include<bits/stdc++.h>

using namespace std;

int main() {
    int v,e;
    cin>>v>>e;
    vector<int> adj[v];
    for(int i=0; i<e; i++) {
        int u,v;
        cin>>u,v;
        adj[u].push_back(v);
    }

    
    vector<int> indegree(v,0);
    for(int i=0; i<v; i++) {
        for(auto it:adj[i]) {
            indegree[it]++;
        }
        cout<<indegree[i]<<" "; 
    }
    cout<<endl;
    queue<int> q;
    for(int i=0; i<v; i++) {
        if(indegree[i]==0) {
            q.push(i);
        }
    }

    vector<int> ans;
    while(!q.empty()) {
        int node = q.front();
        q.pop();
        ans.push_back(node);
        for(auto it:adj[node]) {
            indegree[it]--;
            if(indegree[it]==0) {
                ans.push_back(it);
            }
        }
    }

    for(int i=0; i<ans.size(); i++) {
        cout<<ans[i]<<" ";
    }
    
}