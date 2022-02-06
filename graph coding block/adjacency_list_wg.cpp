// adjacency list have directed and undirected edges both ith some weights.....

#include<bits/stdc++.h>
using namespace std;
      class Graph{
unordered_map<string,vector<pair<string,int>>> un_map;
public:

void add_edges(string v1,string v2,bool undirected,int weight ){
    un_map[v1].push_back(make_pair(v2,weight));
    if(undirected){
        un_map[v2].push_back(make_pair(v1,weight));
    }
}

void print(){
for(auto root : un_map){
string city = root.first;
vector<pair<string,int>> next_root = root.second;
cout<<city<<"->";

for(auto next_element : next_root){
    string destination = next_element.first;
    int distance = next_element.second;
    cout<<destination<<"  "<<distance<< " ,";
}
cout<<endl;

}

}
      };
int main(){
      Graph g;
      g.add_edges("A","C",true,10);
      g.add_edges("A","B",true,20);
      g.add_edges("B","D",true,30);
      g.add_edges("C","D",true,40);
      g.add_edges("A","D",false,50);

      g.print();
     return 0; 
}



            /*    graph-----------
            A -------------B
            |\     20      |
            |  \           |
        10  |    \  50     | 30
            |      \       |
            |         \ >  |
            C--------------D     // A TO D HAVE DIRECTED EDGE OF WEIGHT 50 
                  40





            */