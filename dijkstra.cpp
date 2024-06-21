#include <bits/stdc++.h>
#define V 9
using namespace std;
int minDistance(int dist[],bool visitedSet[]){
    int minValue = INT_MAX, min_index;
    for(int v=0;v<V;v++){
        if(visitedSet[v]==false && dist[v]<=minValue){
            minValue=dist[v];
            min_index=v;
        }
    }
    return min_index;
}
void printSolution(int dist[]){
    cout<<"Vertex \t Distance from Source"<<endl;
    for(int i=0;i<V;i++){
        cout<<i<<" \t\t"<<dist[i]<<endl;
    }
}
void dijkstra(int graph[V][V], int src){
    int dist[V];
    bool visitedSet[V];
    for(int i=0;i<V;i++){
        dist[i]=INT_MAX, visitedSet[i]=false;
    }
    dist[src]=0;
    for(int count=0;count<V-1;count++){
        int u=minDistance(dist,visitedSet);
        visitedSet[u]=true;
        for(int v=0;v<V;v++){
            if(!visitedSet[v]&&graph[u][v]&&dist[u]!=INT_MAX&&dist[u]+graph[u][v]<dist[v]){
                dist[v]=dist[u]+graph[u][v];
            }
        }
    }
    printSolution(dist);
}
int main(){
    int graph[V][V]={0,2,3,0,0,
                    2,0,15,2,0,
                    3,15,0,0,13,
                    0,2,0,0,9,
                    0,0,13,9,0};
    dijkstra(graph,0);
}
