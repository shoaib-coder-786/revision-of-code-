#include<iostream>
using namespace std;
#include<queue>
 template <typename T>
    
 class queues{
T *data;
int nextindex;
int firstindex;
int capacity;
int size;

public :

queues(int s){
    data = new T[s];
    nextindex = 0;
    firstindex =-1;
    size = 0;
    capacity =s;
}

int getsize(){
    return size;
}

bool isEmpty(){
    return size == 0;
}

T top(){
    if(isEmpty()){
        return 0;
    }
    return data[firstindex];
}

void enqueue(T element){
if(size== capacity){
    cout<<"queue is full"<<endl;
    return;
}
data[nextindex] = element;
nextindex = (nextindex +1)%capacity;
if(firstindex == -1){
    firstindex =0;
}
size++;


}

T dequeue(){
    if (isEmpty())
    {
        cout<<"queue is empty : ";
       return 0;
    }

    T ans = data[firstindex];
    firstindex = (firstindex +1)% capacity;   // circularly move firstindex 
    size--;
    return ans;
    
}



      };
      
int main(){
      queues<char> q(4);
      q.enqueue('A');
      q.enqueue('B');
      q.enqueue('C');
      q.enqueue('D');
      q.enqueue('E');
     cout<<"number of element :  "<<q.getsize()<<endl;
     cout<<"top element "<<q.top()<<endl;
     cout<<"isempyt : "<<q.isEmpty()<<endl;

     cout<<"element dequeue : "<<q.dequeue()<<endl;
     cout<<"element dequeue : "<<q.dequeue()<<endl;
     cout<<"element dequeue : "<<q.dequeue()<<endl;
cout<<"number of element :  "<<q.getsize()<<endl;
     cout<<"top element "<<q.top()<<endl;
 return 0; 
}