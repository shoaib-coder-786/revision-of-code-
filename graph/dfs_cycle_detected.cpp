#include<bits/stdc++.h>
using namespace std;
       const int N = 1e3+10;
       bool visit[N];
       vector<int> g[N];
bool dfs(int vertex , int parent){
    visit[vertex] = true;
    bool isLoopexits = false;
 for(int child: g[vertex])
    {
        if(visit[child] && child == parent){
            continue;
        }
        if(visit[child])
        {
            return true;
        }
        isLoopexits = isLoopexits  ||   dfs(child,vertex);
    }
    return isLoopexits;
}
int main(){
      int v ,e;
      cin>>v>>e;
      for (int i = 0; i <e; i++)
      {
          int v1,v2;
          cin>>v1>>v2;
          g[v1].push_back(v2);
          g[v2].push_back(v1);
      }
      bool ans = false;
      for(int i=1 ; i<=v;i++){
          if(visit[i]) continue;
          if(dfs(i,0)){
              ans = true;
              break;
          }
      }
      if(ans==true){
          cout<<"true"<<endl;
      }else{
          cout<<"false";
      }
     return 0; 
}