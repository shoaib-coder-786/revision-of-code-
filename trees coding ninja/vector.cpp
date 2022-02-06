#include<iostream>
#include<vector>
using namespace std;
      
int main(){
      vector<int> v;
      v.push_back(1);
      v.push_back(2);
      v.push_back(3);
      v.push_back(4);
      v.push_back(5);
      v.push_back(6);
      v.push_back(7);
      v.push_back(8);

      v.pop_back();
      v.pop_back();
      v.pop_back();

      for (int i = 0; i <v.size(); i++)        
      {
        // v.push_back(i+1);
          cout<<"element : "<<v.at(i)<<endl;
          cout<<"capacity of vector "<<v.capacity()<<endl;
        cout<<"size : "<<v.size()<<endl;
      }
      
     return 0; 
}