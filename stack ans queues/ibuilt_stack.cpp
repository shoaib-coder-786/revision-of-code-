#include<iostream>
#include<stack>
using namespace std;
      
int main(){
      stack<int> s;
      s.push(10);
      s.push(20);
      s.push(30);
      s.push(40);
      s.push(50);
      s.push(60);
      s.push(70);
      cout<<"size of stack : "<<s.size()<<endl;
      cout<<"top element :  "<<s.top()<<endl;
      s.pop();
      s.pop();
      cout<<"top element :  "<<s.top()<<endl;
      cout<<s.empty();
     return 0; 
}