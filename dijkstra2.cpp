#include <bits/stdc++.h> //more: use an array 1,2,3,4. update the node relaxed with relaxant
using namespace std; //more 2: 2nd shortest path
const int inf=1e7;
int main(){
    int n,m; //n=edge,m=vertex number
    cin>>n>>m;
    vector<int> dist(n+1,inf);
    vector<vector<pair<int,int>>> graph(n+1);
    for(int i=0;i<m;i++){
        int u,v,w;
        cin>>u>>v>>w;
        graph[u].push_back({v,w});
        graph[v].push_back({u,w});
    }
    int source;
    cin>>source;
    set<int> s; //set of unvisited elements
    s.insert(source);
    dist[source]=0;
    while(!s.empty()){
        auto x=*s.begin();
        s.erase(x); //erasing elements from set when visited
        for(auto it:graph[x]){
            if(dist[it.first]>dist[x]+it.second){
                dist[it.first]=dist[x]+it.second;
                s.insert(it.first);
            }
        }
    }
    for(int i=0;i<n;i++){
        if(dist[i]<inf){
            cout<<dist[i]<<" ";
        }
        else{
            cout<<-1<<" ";
        }
    }
}
/*4 5
0 1 2
0 2 1
0 3 5
3 2 5
3 1 3
0
*/
