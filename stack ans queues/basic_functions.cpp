// isEmpty() , size(),full() ,push(),pop(),top()
#include<iostream>
using namespace std;
      class stack{
int *data;
int nextindex;
int capacity;
public:
stack(){
data = new int[5];
nextindex =0;
capacity =5;}

bool isEmpty(){
    if(nextindex==0){
return true;
    }else{
    return false;
    }
}

bool isFull(){
    if(nextindex == capacity){
        cout<<"stack is full"<<endl;
        return true;
    }else{
        return false;
    }
}
int size(){

    return nextindex;
}
int top(){
return data[nextindex-1];
}

void push(int element){
if(nextindex == capacity){
int *newdata = new int[2*capacity];
for(int i =0; i<capacity;i++){
    newdata[i] = data[i];
    }
  capacity *= 2;
  delete []data;
  data = newdata;
}
    data[nextindex] = element;
    nextindex++;

}

int pop(){
    if(isEmpty()){
        cout<<"stack is Empty"<<endl;
        return INT8_MIN;
    }else{
        nextindex--;
        return data[nextindex];
    }
}

      };
int main(){
      stack s1;
      s1.push(10);
      s1.push(20);
      s1.push(30);
      s1.push(40);
      s1.push(50);
      cout<<"size of stack is : "<<s1.size()<<endl;
      s1.push(60);

      cout<<s1.top()<<endl;
      cout<<"size of stack is : "<<s1.size()<<endl;
cout<<s1.isEmpty()<<endl;
cout<<s1.pop()<<endl;
      cout<<s1.top()<<endl;
      cout<<s1.isFull()<<endl;
      cout<<"size of stack is : "<<s1.size()<<endl;


     return 0; 
}