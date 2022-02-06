#include<bits/stdc++.h>
using namespace std;
      class Graph{
map<int , vector<int>> graph;
public:

void add_edges(int v1,int v2){
graph[v1].push_back(v2);
graph[v2].push_back(v1);
}

void bfs(int vertex){
  queue<int> q ;
map<int,int > dist;
map<int,bool>visited ;

for(auto child : graph){
    int node = child.first;
    dist[node] = INT_MAX;
}
dist[vertex] = 0;
q.push(vertex);
visited[vertex] = true;


while(!q.empty()){
int current = q.front();
q.pop();
for(auto child : graph[current]){
    if(!visited[child]){   // or we can say  dist[child]== INT_MAX
        q.push(child);
        visited[child] = true;
dist[child] = dist[current] +1;
    }
}
}

for(auto root : graph){
int node = root.first;
int d = dist[node];
cout<<node<<" distance from source  "<<d<<endl;
}

}


      };
int main(){
   
      Graph g;
      g.add_edges(0,1);
      g.add_edges(1,2);
      g.add_edges(0,3);
     g.add_edges(2,3);
      g.add_edges(3,4);
      g.add_edges(4,5);

      g.bfs(0);
     return 0; 
}