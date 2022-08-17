#include<bits/stdc++.h>
#include<array>
#include<vector>
#include<deque>
using namespace std;
      
int main(){
    // stl array and thier functions 
  /*   array<int,5> a = {1,2,3,4,5};
cout<<"size of array : "<<a.size()<<endl;
cout<<"first element of array : "<<a.front()<<endl;
cout<<"last elemntof array : "<<a.back()<<endl;
cout<<" array empty or not : "<<a.empty()<<endl;
for (int i = 0; i <a.size(); i++)
{
    cout<<a.at(i)<<" ";}
*/

 /*
// vector in stl
//vector<int>v;// static vector
vector <int> v = new vector<int>();  // dynamic vector
v.push_back(1);
v.push_back(2);
v.push_back(3);
v.push_back(4);
v.push_back(5);

cout<<v[3]<<endl;
cout<<v.at(0)<<endl;
cout<<"size of vector : "<<v.capacity()<<endl;
cout<<"total elements of vector : "<<v.size()<<endl;
cout<<"first element "<<v.front()<<endl;
cout<<"last element "<<v.back()<<endl;
v.pop_back();
cout<<"total elements of vector : "<<v.size()<<endl;
v.clear();
cout<<"it clear the size of vector not capacity "<<v.size()<<endl;

vector<int> a(5,1) ;   // a(5,1) means size of 5 with initial value in vector is 1
for(int i:a){
    cout<<i<<" ";     //output 1 1 1 1 1
}

vector<int> b(a);
cout<<"\n copy of a element in b  "<<endl;
for(int i : b){
    cout<<i<<" ";
}

=========insert in vector ------
vector<int> myvector (3,100);
  vector<int>::iterator it;

  it = myvector.begin();
  it = myvector.insert ( it , 200 );

  myvector.insert (it,2,300);

  // "it" no longer valid, get a new one:
  it = myvector.begin();

  vector<int> anothervector (2,400);
  myvector.insert (it+2,anothervector.begin(),anothervector.end());

  int myarray [] = { 501,502,503 };
  myvector.insert (myvector.begin(), myarray, myarray+3);

  cout << "myvector contains:";
  for (it=myvector.begin(); it<myvector.end(); it++)
    cout << ' ' << *it;
  cout << '\n';

// output of insert vector : = myvector contains: 501 502 503 300 300 400 400 200 100 100 100
myvector.front(); // return first element 501
myvector.back(); // return last element  100

2D VECTOR (VECTOR OF VECTOR)

vector<vetor<int>> vect;
vector<vector<int>> vect(n , vector<int>(m,0));   // n rows and m column with initial value 0
// iteration of vector

for(int i =0 ; i<vect.size();i++){
    for(int j=0; j<vect[i].size();j++){
        vect[i].push_back(num);
        cout<<vect[i][j];
    }
}

// using shortcut
// for(vector<int> child_vector : vect){
//     for(vector<int> x : child_vector){
//         cout<<x<<" "<<endl;
//     }
// }

*/

/*
// deque double ended deque
deque<int> d;

d.push_back(10);
d.push_back(20);
d.push_back(30);
for (int i = 0; i <d.size(); i++)
{
    cout<<d.at(i)<<" ";
}

d.push_front(100);
d.push_front(200);
cout<<endl;
for (int i = 0; i <d.size(); i++)
{
    cout<<d.at(i)<<" ";
}
d.pop_back();
d.pop_front();
cout<<endl;

for (int i = 0; i <d.size(); i++)
{
    cout<<d.at(i)<<" ";
}
cout<<endl;
cout<<"first element in queue "<<d.front()<<endl;
cout<<"last element in queue  "<<d.back()<<endl;
cout<<"queue empty or not :  "<<d.empty()<<endl;
cout<<"size of queue "<<d.size() <<endl;
*/
/*
//doubly linkedlist 
list<int> l;

l.push_back(100);

l.push_front(10);
for(int i : l){
    cout<<i<<" ";
}
l.erase(l.begin());
cout<<endl;
for(int i : l){
    cout<<i<<" ";
}
cout<<"\n size of list : "<<l.size()<<endl;
list<int> n(10,100);
for(int i : n){
    cout<<i<<" ";
}
*/
/*
// priorty queue uses heap data structure
// max heap always maintaining maximum element at top of heap
priority_queue<int> maxi;

// min heap
priority_queue<int , vector<int> , greater<int> > mini;

maxi.push(0);
maxi.push(10);
maxi.push(5);
maxi.push(15);
maxi.push(2);

int n = maxi.size();
for (int i = 0; i <n; i++)
{
    cout<<maxi.top()<<" ";
    maxi.pop();
}
cout<<endl;


mini.push(0);
mini.push(10);
mini.push(5);
mini.push(15);
mini.push(2);

int m = mini.size();
for (int i = 0; i <m; i++)
{
    cout<<mini.top()<<" ";
    mini.pop();
}
cout<<"\nempty or not "<<maxi.empty()<<" "<<mini.empty()<<endl;
*/


/*
//sets -> it stores unique elements ...its implementation is done by using BST
// elements return in sorted array 

set<int>s;
s.insert(10);
s.insert(3);
s.insert(0);
s.insert(0);
s.insert(2);
s.insert(2);
s.insert(2);
s.insert(4);
s.insert(4);
s.insert(4);
for(auto i: s){
    cout<<i<<endl;
}
cout<<endl;
s.erase(s.begin());
cout<<"after erase first element : "<<endl;
for(auto i: s){
    cout<<i<<endl;
}
cout<<endl;
cout<<" 5 present or not : "<<s.count(5)<<endl;

*/

//map in stl takes unique keys and for different value
// return sorted keys 
// map<int,string> m;

// m[2] = "shoaib";   // 2 is key for shoaib string
// m[10] = "khan";
// m[4] = "hero";

// m.insert({5,"raju"});

// for(auto i : m){
//     cout<<i.first<<" "<<i.second<<endl;
// }
// cout<<"finding -10 : "<<m.count(-10);












     return 0; 
}