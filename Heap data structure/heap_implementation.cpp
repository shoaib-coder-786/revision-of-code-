#include<bits/stdc++.h>
#include<math.h>
using namespace std;

void swap(int &x, int &y){
    int temp = x;
    x = y;
    y = temp;
}


  class MInHeap{
public:
int *arr_heap;
int capacity;
int heap_size;
MInHeap(int cap){
    heap_size= 0;
    capacity = cap;
    arr_heap = new int[cap];
}

int parent(int i ){
    return (i-1)/2 ;
}
int left_child(int i ){
    return (2*i +1);
}
int right_child(int i ){
    return (2*i + 2);
}

// function for inserting element in heap 
void insert(int k ){
    if(heap_size == capacity){
        cout<<"heap overflow\n";
        return ;
    }
heap_size = heap_size+1;
int i  = heap_size - 1;
arr_heap[i] = k;

while (i!= 0 && arr_heap[parent(i)] >  arr_heap[i])
{ swap(arr_heap[i],arr_heap[parent(i)]);
i = parent(i);
}
}

// heapify function maintain the mean heap in array
void Heapify(int i ){
 int l = left_child(i);
int r = right_child(i);
int smallest  = i;
if(l<heap_size && arr_heap[l]<arr_heap[i]){
    smallest = l;
}
if(r< heap_size && arr_heap[r]< arr_heap[smallest]){
    smallest = r;
}
if(smallest != i){
    swap( arr_heap[i], arr_heap[smallest] );
    Heapify(smallest);
}
}

// extract min heap ....delete the lowest or min element 
int extractMin(){
if(heap_size <= 0){
    return INT_MAX;
}
if(heap_size ==1){
    heap_size--;
    return arr_heap[0];
}
 int root = arr_heap[0];
 arr_heap[0] = arr_heap[heap_size-1];
 heap_size--;
 Heapify(0);
 return root;
}

void linearSearch(int val){
    for (int i = 0; i <heap_size; i++)
    {
       if(arr_heap[i]== val){
           cout<<"Element found in heap \n";
           return;
       }       
    }
   cout<<"value not found\n";
}

void display(){
    for (int i = 0; i < heap_size; i++)
    {
        cout<<arr_heap[i]<<" ";
    }
    cout<<endl;    
}

int height(){
    return ceil(log2(heap_size +1)) -1 ;
}

// delete key in heap
void decreaseKey(int i , int new_val){
    arr_heap[i] = new_val;

    while(i!= 0  && arr_heap[parent(i)] > arr_heap[i]){
        swap(arr_heap[parent(i)] , arr_heap[i]);
        i = parent(i);
    }
}
void Delete(int i){

decreaseKey(i, INT_MIN);
extractMin();

}




  } ;

int main(){

 int size;
 cout<<"Enter the size of heap :  ";
 cin>>size;
 cout<<"MIn heap created \n "  ;
MInHeap obj(size);
 int option , val;
 do
 {
  cout<<"\n what operation do you want to perform ? \n ";
  cout<<"select option number . Enter 0 to EXIT. \n";
  cout<<"1. insert key \n ";
  cout<<"2. search key \n ";
  cout<<"3. delete key \n ";
  cout<<"4. Get MIN \n ";
  cout<<"5. Extract Min \n ";
  cout<<"6. Height of heap \n  ";
  cout<<"7. print heap values \n ";
  cout<<"8. Clear Screen \n ";
  cout<<"0. ->Exit <- \n ";

  cin>>option;
  switch (option)
  {
  case 0:
  
      break;
  case 1:
       cout<<"InSERT operation "<<endl;
       cout<<"Insert values in heap \n";
       cin>>val;
 obj.insert(val);
 cout<<endl;
      break;
  case 2:
       cout<<"Search operation "<<endl;
       cout<<"search values in heap \n";
       cin>>val;
//  obj.Insert();
      break;
  case 3:
       cout<<"Delete operation "<<endl;
       cout<<"delete values in heap \n";
       cin>>val;
 obj.Delete(val);
 cout<<endl;
      break;
  case 4:
       cout<<"Get MIn value"<<endl;
      
      break;
  case 5:
       cout<<"Extract MIN VAlue "<<endl;
      cout<<"the root value deleted :  " <<obj.extractMin();
      break;
  case 6:
       cout<<"Heap tree height  "<<endl;
      
      break;
  case 7:
       cout<<"print heap array  "<<endl;
      obj.display();
      cout<<endl;
      break;
  case 8:
      system("cls");      
      break;

  default:
  cout<<"Enter proper option number "<<endl;
      break;
  }
 




 } while (option != 0);
 



     return 0; 
}