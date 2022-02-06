// dsu -> disjoint union set 
// we have to check graph contains cycle or not using dsu

#include<bits/stdc++.h>
using namespace std;
      class Graph{
          list<pair<int,int>> l;// edge list representation of graph
          int v;     
// to represent graph we have three method 1)adjacency matrix ,2) adjacency list , and 3( edge list
public:
Graph(int v){
    this->v = v;
}
void add_edges(int v1 , int v2){
    l.push_back(make_pair(v1,v2));
}
// find function using dsu   complexity o(n)
int findset( int x , int parent[]){
if(parent[x]==-1){
    return x;
}
// path compression optimization
return parent[x] =findset(parent[x] , parent);
}
// union function complexity o(n)
void unionset(int i , int j , int parent[]){

int s1 = findset(i , parent);   // find parent of i in set
int s2 = findset(j , parent );  // find parent of j in another set
if(s1 != s2){    // if both parent belong to different set 
    parent[s1] = s2;    // link both parent ,,,,,now both parent belongs to same set or we can say that union of two set happend

}
}

// detect cycle in graph
bool detectcycle(){
int *parent = new int[v];   // parent array 
// initially every element is the parent of itself ...each belong to the set itself
for(int i=0 ; i<v;i++){
    parent[i] = -1;
}

// iterate the edge list 
for(auto edge : l){

int i = edge.first;
int j = edge.second;

int s1 = findset(i,parent);
int s2 = findset(j,parent);
if(s1 != s2){
    unionset(s1,s2,parent);
}else{
    cout<<"same parent "<<s1<<"=="<<s2<<endl;
    return true;
}
}
delete []parent;
return false;
}

  };
int main(){
      Graph g(5);
      g.add_edges(0,1);
      g.add_edges(1,2);
      g.add_edges(2,3);
      g.add_edges(3,4);
      g.add_edges(4,0);
cout<<g.detectcycle()<<endl;




     return 0; 
}