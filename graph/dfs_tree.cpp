// height and depth of a generic tree using dfs

#include<bits/stdc++.h>
using namespace std;
  const int N= 1e3+10;
  vector<int> g[N];    
int height[N] , depth[N];
void dfs(int vertex, int parent=0){
// no need for visited array we have to maintain for parent variable thats it
            for(int child : g[vertex]){
                if(child==parent){continue;}
                    depth[child ] = depth[vertex] +1;
                dfs(child,vertex);
height[vertex] = max(height[vertex] , height[child]+1);
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
      for (int i = 0; i < n; i++)
      {
     cout<<"height  "<<height[i]<<" "
     <<"depth "<<depth[i]<<endl;
      }
      
     return 0; 
}