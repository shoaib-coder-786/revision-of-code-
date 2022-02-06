#include<iostream>
#include<queue>
using namespace std;
void reverseQueue(queue<int> &input) {
	// Write your code here
    if(input.size()==0||input.size()==1){
        return;
    }
    
    int x = input.front();
    input.pop();
    
    reverseQueue(input);
    input.push(x);

}
int main(){
      queue <int> q;
      q.push(10);
      q.push(20);
      q.push(30);
      q.push(40);
      q.push(50);
      q.push(60);
      q.push(70);
      q.push(80);
      q.push(90);

//       cout<<"front element : "<<q.front()<<endl;
//       cout<<"size of queue : "<<q.size()<<endl;
//       q.pop();
//       q.pop();
//       cout<<"front element : "<<q.front()<<endl;
//       cout<<"size of queue : "<<q.size()<<endl;
// cout<<"is queue empty : "<<q.empty()<<endl;
// cout<<"all elements are : ";
reverseQueue(q);
while (!q.empty())
{
    cout<<q.front()<<" ";
    q.pop();
}


     return 0; 
}