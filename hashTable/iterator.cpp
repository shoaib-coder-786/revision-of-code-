#include<iostream>
#include<unordered_map>
#include<string>
#include<vector>
using namespace std;
   
int main(){
      unordered_map<string,int>map;
      map["abc"] = 1;
      map["abc1"] = 2;
      map["abc2"] = 3;
      map["abc3"] = 4;
      map["abc4"] = 5;
      map["abc5"] = 6;
      map["abc6"] = 7;
unordered_map<string,int>::iterator it;
unordered_map<string,int>::iterator  it1 = map.find("abc");
map.erase(it1);

for (it = map.begin(); it!= map.end(); it++)
{
  cout<<"key value "<<it->first<<"  value is  "<<it->second<<endl;
}

vector<int> v;
v.push_back(1);
v.push_back(2);
v.push_back(3);
v.push_back(4);
v.push_back(5);
v.push_back(6);
v.push_back(7);
v.push_back(8);
v.push_back(9);
v.push_back(10);

vector<int> :: iterator vt = v.begin();
while (vt!=v.end())
{
    cout<<"key : "<<*vt<<endl;
    vt++;
}



     return 0; 
}