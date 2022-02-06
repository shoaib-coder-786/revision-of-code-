#include<bits/stdc++.h>
using namespace std;
class dsu{
int * parent;
int *rank;
public:

dsu(int v){
    parent = new int[v];
    rank = new int[v];
    for (int i = 0; i <v; i++)
    {
        parent[i] = -1;
        rank[i] = 1;
    }
     
}

// find by dsu
int find(int i){
    // base case
    if(parent[i]==-1){
        return i;
    }
    // recuresive call by path compression of dsu
    return parent[i] = find(parent[i]);
}

// union of two sets by dsu called unites 
void unites(int x , int y ){
int s1 = find(x);
int s2 = find(y);

if(s1 != s2){
    // union by rank 
if(rank[s1]<rank[s2]){
    parent[s1] = s2;
    rank[s2] += rank[s1];
}else{
    parent[s2] = s1;
    rank[s1]+= rank[s2];
}

}
}
};

class Graph{
vector<vector<int>>edgelist ;  // { {weight,vertex1,vertex2},{}, {}}  
int v;
public:
Graph(int v){
    this->v = v;
}
void add_edges(int v1, int v2, int weight){
edgelist.push_back({weight,v1,v2});   // we have insert weight first becz we have to sort graph according to weight
}

int krushka_mst(){
// sort all edges based upon on their weights
sort(edgelist.begin() , edgelist.end());

// initialise dsu
dsu s(v);
int minimum_cost =0;

for(auto node : edgelist){

int w = node[0];
int x = node[1];
int y = node[2];

// take that edge in mst if it don't make a cycle 
if(s.find(x)!= s.find(y)){  // x and y are two independent vertex means they dont have same parent according to dsu
    s.unites(x,y);          // add edges between them means  union of two sets acc. to dsu 
    minimum_cost += w;      // add their minimum edge weight because edges are already sorted 
}

}

return minimum_cost;
}



};

int main(){
// Graph g(4);
// g.add_edges(0,1,1);
// g.add_edges(3,2,4);
// g.add_edges(1,3,3);
// g.add_edges(2,0,2);
// g.add_edges(0,3,2);
// g.add_edges(1,2,2);

Graph g(4);
g.add_edges(0,1,10);
g.add_edges(1,2,15);
g.add_edges(0,2,5);
g.add_edges(3,1,2);
g.add_edges(3,2,40);

cout<<g.krushka_mst()<<endl;





    return 0;
}