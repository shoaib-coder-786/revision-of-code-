#include<bits/stdc++.h>
using namespace std;
      const int N =1e3+10;
      int visit[N];
      vector<int>g[N];
void dfs(int vertex){

visit[vertex] = true;

for(int child : g[vertex]){
    if(visit[child]) continue;

    dfs(child);
}

}
int main(){
      int v ,e;
      cin>>v>>e;
      for (int i = 0; i <e; i++)
      {
          int v1, v2;
          cin>>v1>>v2;
            g[v1].push_back(v2);
            g[v2].push_back(v1);
      }
      int count =0; 
      for (int i = 1; i <=v; i++)
      {
          if(visit[i]) continue;
        dfs(i);
        count++;          
          }
      cout<<count;


     return 0; 
}