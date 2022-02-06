#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;
      
int main(){
      unordered_map<string,int> ourmap;  // string is key and other is value
      //insert
      pair<string,int> p("abc",1);      // for inserting pair template is used
ourmap.insert(p);
ourmap["def"] = 2;      // we can insert directly by square bracket

// find or access values

cout<<ourmap["abc"]<<endl;
// cout<<ourmap.at("abc")<<endl;
cout<<ourmap["def"]<<endl;
// size 
cout<<"size : "<<ourmap.size()<<endl;

// if we access uninitialised key we get errors and others things
// cout<<"ghi uninitialised key  hai   "<<ourmap.at("ghi")<<endl; // it shows error 

cout<<"zero added successfully without initialised : "<<ourmap["ghi"]<<endl;   // it do not show error but it shows 0 that means not a key  but it increases the size of unrdered map carefuuly using it ...quit risky .......(.^.)....always use at function
cout<<"size : "<<ourmap.size()<<endl;

// check presence or not
if(ourmap.count("ghi")>0){
    cout<<"ghi is present";
}


     return 0; 
}