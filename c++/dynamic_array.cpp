#include<iostream>
using namespace std;
      class dynamicArray{
int *data;
int nextIndex;
int capacity;
public:
dynamicArray(){
    data = new int [5];
    nextIndex =0;
    capacity =5;
}

void add(int element ){
    if(nextIndex == capacity){
        int *newdata = new int[2*capacity];
        for (int i = 0; i <nextIndex; i++)
        {
         newdata[i] = data[i];
        }
        capacity *=2;
        delete [] data ;
        data = newdata;
    }

    data[nextIndex] =element;
    nextIndex++;
}
void add(int i , int element){
    if(i<nextIndex){
        data[i] = element;
    }else if(i==nextIndex){
        add(element);
    }else{
        return;
    }
}
int get(int i){
    if(i<nextIndex){
        return data[i];
    }else{
        return -1;
    }
}

void print(){
    for (int i = 0; i <nextIndex; i++)
{
       cout<<data[i]<<" ";
    }
    cout<<endl;
}
      };
int main(){
      dynamicArray d1;
d1.add(5);
d1.add(10);
d1.add(15);
d1.add(20);
d1.add(25);
cout <<d1.get(2)<<endl;
d1.print();
d1.add(30);
d1.add(35);
d1.print();


dynamicArray d2(d1);
d2.print();
d1.add(5,100);
d2.print();
     return 0; 
}