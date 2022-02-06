//for generic tree ......... for a given q queries , q <= 10^5
/*in each qury given v,
print subtree sum of v and number of even nodes in subtree of v */

#include<bits/stdc++.h>
using namespace std;
  const int N= 1e3+10;
  vector<int> g[N];    
int subtree_sum[N] , even_sum[N];
void dfs(int vertex,int parent=0){

            subtree_sum[vertex] += vertex;
            if(vertex%2==0){
                even_sum[vertex]++;
            }
            for(int child : g[vertex]){
                 if(child==parent){continue;}

                dfs(child,vertex);

      subtree_sum[vertex] += subtree_sum[child];
          even_sum[vertex] += even_sum[child]; 

            }

}
  
int main(){
      // in tree for n vertex there is n-1 edges
      int n;
      cin>>n;

      for(int i=0; i<n-1;i++){
          int v1,v2;
          cin>>v1>>v2;
g[v1].push_back(v2);
g[v2].push_back(v1);
      }

      dfs(1);
      for(int i=1 ; i<=n;i++)
      {
          cout<<"subtree sum : "<<subtree_sum[i]<<"  count: "<<even_sum[i]<<endl;
      }
      
     return 0; 
}


// input of graph 
/* 13
1 2
1 3
1 13
2 5
3 4
5 6
5 7
5 8
8 12
4 9
4 10
10 11*/