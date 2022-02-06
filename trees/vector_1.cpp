#include<iostream>
#include<vector>
using namespace std;
      
int main(){
     vector<int> v; //static representation of vector
     v.push_back(10);
     v.push_back(20);
     v.push_back(30);
     v.push_back(40);

v[1] = 200;
v[2] = 300;
v[4] = 400;

v.push_back(50);

    //  cout<<v[0]<<" "
    //         <<v[1]<<" "
    //         <<v[2]<<" "
    //         <<v[3]<<" "
    //         <<v[4]<<" ";
cout<<"using forloop to print all elements in vector\n";
for (int i = 0; i <100; i++)
{
  cout<<"capacity of verctor "<<v.capacity()<<endl;
  cout<<v.at(i)<<" ";
}
// cout<<"\n using forloop to print all elements using at function in vector\n";
// for (int i = 0; i <v.size(); i++)
// {
//   cout<<v.at(i)<<" ";
// }


// cout<<"\n size of vector is "<<v.size()<<endl;
// cout<<v.at(4)<<endl;
     return 0; 
}