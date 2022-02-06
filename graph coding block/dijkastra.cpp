

#include<bits/stdc++.h>
using namespace std;
      class Graph{
unordered_map<string,list<pair<string,int>>> ugraph;

public:

void add_edges(string v1,string v2, int weight,bool direction = true){
    ugraph[v1].push_back(make_pair(v2,weight));
    if(direction){
        ugraph[v2].push_back(make_pair(v1,weight));
    }
}

void print(){
for(auto root : ugraph){
    string city = root.first;
    cout<<city<<"->";
    list<pair<string,int>> child = root.second;
for(auto x : child){
    cout<<x.first<<" "<<x.second;
}
cout<<endl;
}

}

void dijkastra(string s){
    unordered_map<string,int> dist;

    //set all distance at infitity
    for(auto root : ugraph){

dist[root.first] = INT_MAX;
    }

    // make a set to findout the node with  minimum distance
    set<pair<int,string>> sset;
   dist[s] = 0;
    sset.insert(make_pair(0,s));
while(!sset.empty())
{
// first element in set 
auto  p = *(sset.begin());
string node = p.second;
int nodedist = p.first;
sset.erase(sset.begin());    //  erase from the set 

// iterate over childern of current node
for(auto childpair : ugraph[node]){
    if(nodedist + childpair.second < dist[childpair.first]){   //initial node dist + edge ka distance < infinity

    //in the set/priority queue updation is not possible so we have to remove the old pair from the set and 
    //   update in the set to get the best minimum possible distance of a particular node
    string destination = childpair.first;
    auto f = sset.find(make_pair(dist[destination] , destination));
    if(f != sset.end()){
        sset.erase(f);
    }
// insert the new pair in set

        dist[destination] = nodedist + childpair.second;
        sset.insert(make_pair(dist[destination] , destination));


    }
}
}

for(auto d : dist){
    cout<<d.first<< " is located at distance "<<d.second<<endl;
}

}

      };
int main(){
      Graph g;
      g.add_edges("Amritsar" , "delhi" , 1);
      g.add_edges("Amritsar" , "jaipur" , 4);
      g.add_edges("jaipur" , "delhi" , 2);
      g.add_edges("jaipur" , "mumbai" ,8);
      g.add_edges("bhopal" , "agra" ,2);
      g.add_edges("mumbai" , "bhopal" ,3);
      g.add_edges("agra" , "delhi" , 1);
  
  g.dijkastra("Amritsasr");
// g.print();

     return 0; 
}