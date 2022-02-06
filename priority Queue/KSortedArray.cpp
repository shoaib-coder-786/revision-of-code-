#include<iostream>
#include<queue>
using namespace std;
      
      void kSortedArray(int *arr,int size,int k){
          priority_queue<int > pq;
          for (int i = 0; i <k; i++)
          {
              pq.push(arr[i]);
          }
          int j =0;
          for (int i = k; i <size; i++)
          {
            arr[j] = pq.top();
            pq.pop();
            pq.push(arr[i]);
            j++;
          }
        while (!pq.empty())
        {
            arr[j] = pq.top();
            pq.pop();
            j++;
        }
        
          
      }
int main(){
      int arr[] = {10,12,15,6,9};
      int k=3;
      kSortedArray(arr,5,k);
      cout<<"sorted k array is : ";
      for (int i = 0; i < 5; i++)
      {
          cout<<arr[i]<<" ";
      }
      
     return 0; 
}