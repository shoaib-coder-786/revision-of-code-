#include<bits/stdc++.h>
using namespace std;
      class Graph{
map<int,vector<int>>g;
public:

void add_edges(int v1,int v2){
    g[v1].push_back(v2);
    g[v2].push_back(v1);
}

void bfs(int vertex){
map<int ,bool> visited;
queue<int>q;
q.push(vertex);
visited[vertex] = true;
while (!q.empty())
{
    int current = q.front();
    cout<<current <<" ";
    q.pop();
    for(auto child : g[current]){
        if(!visited[child])
        {
            q.push(child);
            visited[child] = true;
        }
    }
}



}
      };
int main(){
      Graph g;
      g.add_edges(0,1);
      g.add_edges(1,2);
      g.add_edges(2,3);
      g.add_edges(3,4);
      g.add_edges(4,5);

      g.bfs(0);
     return 0; 
}