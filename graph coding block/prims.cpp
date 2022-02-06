// prims algorithm using adjacecny list and priority queue
#include<bits/stdc++.h>
using namespace std;
      class Graph{
vector<pair<int,int>> *l;// adjacency list
int v ;  
public:
Graph(int n){
    v = n ;
    l = new vector<pair<int,int>>[n];
}

void addedges(int v1,int v2, int weight){
   l[v1].push_back({v2,weight});
   l[v2].push_back({v1,weight});
}

int prims_mst(){
    // min priority queue
priority_queue<pair<int,int> , vector<pair<int,int>>, greater<pair<int,int>>> q;
// visited array 
bool*visited = new bool[v]{0};
int min_cost =0;

q.push({0,0});  // weight , node

while(!q.empty()){
auto curr = q.top();   // minimum weight element are in top of pqueue
q.pop();

int node = curr.second;
int wt = curr.first; 

//check if node is already visited or not
if(visited[node]){
    continue;
}

min_cost += wt;
visited[node] = true;
//add child of current node 
for(auto x : l[node]){
int childNode = x.first;    // in list we have  vector<pair<node,weight>>
int childNode_weight = x.second;

if(!visited[x.first]){   // if not visited then insert a pair in priority queue
q.push({childNode_weight,childNode});
}
}

}
return min_cost;
}





      };
int main(){
//       Graph g(4);
// g.addedges(0,1,1);
// g.addedges(3,2,4);
// g.addedges(1,3,3);
// g.addedges(2,0,2);
// g.addedges(0,3,2);
// g.addedges(1,2,2);

Graph g(4);
g.addedges(0,1,10);
g.addedges(1,2,15);
g.addedges(0,2,5);
g.addedges(3,1,2);
g.addedges(3,2,40);
cout<<g.prims_mst()<<endl;
     return 0; 
}