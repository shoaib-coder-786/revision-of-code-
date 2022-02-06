#include<iostream>
using namespace std;
      class Heap_sort{
          public:
          int *arr;
          int capacity;
          int heap_size;
        Heap_sort(int size){
            arr = new int[size];
            capacity = size ;
            heap_size = 0;
             }

int parent(int i ){
    return (i-1)/2;
}
int left_child(int i ){
    return (2*i +1);
    }
int right_child(int i){
    return (2*i + 2);
}

int extractMin(){
    if(heap_size<=0){
        return INT16_MIN;
    }
    if(heap_size ==1){
        heap_size --;
        return arr[0];
    }
    int root = arr[0];
    arr[0] = arr[heap_size-1];
    heap_size--;
    Heapify(0);
    return root;
}

void Heapify(int i ){
int l = left_child(i);
int r = right_child(i);
int smallest = i ;

if (l<heap_size && arr[parent(i)] > arr[l] )
{
    smallest  = l;
}
if(r < heap_size && arr[l] > arr[r]){
    smallest = r;
}

if( smallest != 0 ){
    int temp = arr[i];
    arr[i] = arr[smallest];
    arr[smallest] = temp ;

Heapify(smallest);
}


}





      };
int main(){
      int s;
      cout<<"Enter size of heap array\n";
      cin>>s;
      Heap_sort obj(s);
cout<<"Enter element in heap\n";


     return 0; 
}