    // simple representation of graph using adjacency list 
    // space complexity is optimized O(V+E); 
//   adjacecny matrix disadvantages
//   N != 10^5 / n<= 10^3
//  space complexity is O(N*N)


#include<bits/stdc++.h>

using namespace std;
const int N = 1e3+10;
//    vector<int> graph[N];   // for undirected graph
   vector<pair<int,int>> graph[N] ; // for weighted undirected graph
int main(){
      int v , e ;  // v->no. of vertex  ,,e->no. of edge  ,, wt -> weight on edge
      for (int i = 0; i <e; i++)
      {
          int v1 , v2, wt;
          cin>>v1>>v2>>wt;
          // for undirected graph using adjacency list 
// graph[v1].push_back(v2);               // 1->2 first vertex is connected to second
// graph[v2].push_back(v1);                // 2->1 second vertex connected to first

// for weighted undirected graph using adjacency list
graph[v1].push_back({v2,wt});
graph[v2].push_back({v1,wt});


      }
      
     return 0; 
}