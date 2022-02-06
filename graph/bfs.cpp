//   bfs traversal using list
#include<bits/stdc++.h>
using namespace std;
      const int n= 1e5+10;
      bool visit[n];
      vector<int>g[n];
void bfs(int vertex){
queue<int>q;

q.push(vertex);
visit[vertex] = 1;

while(!q.empty()){
int current = q.front();
cout<<current<<" ";
q.pop();

for (int child: g[current] )
{if(!visit[child]){
    q.push(child);
    visit[child] =1;}
}



}

}

int main(){
      int N;
      cin>>N;
for (int i = 0; i <N-1; i++)
{
int v1 , v2;
cin>>v1>>v2;
g[v1].push_back(v2);
g[v2].push_back(v1);

}
bfs(1);      
     return 0; 
}