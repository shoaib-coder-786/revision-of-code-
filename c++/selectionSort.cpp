#include<iostream>
using namespace std;
      void selection_Sort(int arr[], int n){
          for (int i = 0; i < n-1; i++)
          {
            int min = arr[i] ;
            int minIndex = i;
            for (int j = i+1; j < n;j++)
            {
               if(min > arr[j]){
                   min = arr[j];
                    minIndex = j;
               }
              
            }  
                 int temp = arr[i];
                arr[i] = arr[minIndex];
               arr[minIndex] = temp;       
          }     
      }
int main(){
      int size ;
      cout<<"Enter size of array\n";
      cin>>size;
      int arr[size];
      cout<<"Enter  array\n";
      for (int i = 0; i < size; i++)
      {
        cin>>arr[i];
      }
      cout<<"array is \n";
      for (int j = 0; j< size; j++)
      {
          cout<<arr[j]<<" ";
      }
      cout<<"\nsorted array is\n";
     selection_Sort(arr,size);
      for(int k = 0 ; k<size;k++){
          cout<<arr[k]<<" "; }
      
     return 0; 
}