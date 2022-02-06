#include<iostream>
using namespace std;
      class queues{
int *data;
int nextindex;
int firstindex;
int capacity;
int size;

public :

queues(int s){
    data = new int[s];
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

int top(){
    if(isEmpty()){
        return 0;
    }
    return data[firstindex];
}

void enqueue(int element){
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

int dequeue(){
    if (isEmpty())
    {
        cout<<"queue is empty : ";
       return 0;
    }

    int ans = data[firstindex];
    firstindex = (firstindex +1)% capacity;   // circularly move firstindex 
    size--;
    return ans;
    
}



      };
int main(){
      queues q(4);
      q.enqueue(10);
      q.enqueue(20);
      q.enqueue(30);
      q.enqueue(40);
      q.enqueue(50);
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