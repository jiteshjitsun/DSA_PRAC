#include<bits/stdc++.h>

using namespace std;

int main() {
    int v,e,src;
    cin>>v>>e>>src;
    vector<pair<int,int>> adj[v+1];
    for(int i=0; i<e; i++) {
        int u,v,wt;
        cin>>u>>v>>wt;
        adj[u].push_back({v,wt});
    }

    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
    vector<int> disTo(v+1,INT_MAX);
    disTo[src] = 0;
    pq.push({0,src});  //(dist,from)

    while(!pq.empty()) {
        int dist = pq.top().first;
        int prev = pq.top().second;
        pq.pop();

        vector<pair<int,int>>::iterator it;
        for(auto it:adj[prev]) {
            int next = it.first;
            int nextDist = it.second;
            if(disTo[next] > disTo[prev] + nextDist) {
                disTo[next] = disTo[prev] + nextDist;
                pq.push({disTo[next],next});
            }
        }
    }

    cout<<" the distance from the source "<<src<<", are: \n";
    for(int i=1; i<=v; i++) cout<<disTo[i]<<" ";
}