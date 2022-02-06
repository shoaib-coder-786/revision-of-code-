// adjacency list using class 
#include<bits/stdc++.h>
using namespace std;
      class Graph{
int v;
vector<int>*g;
public:
 Graph(int v){
     this->v = v;
     g = new vector<int>[v];
 }

void add_edges(int v1 , int v2){  // v1 and v2 are vertexes of graph
    g[v1].push_back(v2);
    g[v2].push_back(v1);
}

void print(){
    for (int i = 0; i <v; i++)
    {cout<<"vertex "<< i<< "->";
        for(int child: g[i]){
            cout<<child<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

      };
int main(){
      
      Graph g(4);
     g.add_edges(0,1);
     g.add_edges(0,2);
     g.add_edges(1,2);
     g.add_edges(2,3);
g.print();

     return 0; 
}