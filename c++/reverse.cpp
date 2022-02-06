// #include<iostream>
// using namespace std;
      
// int main(){
//       int arr[] = {1,2,3,4,5,6};
// int start = 0;
// int end = 5;
// for (int i = start; i <=end; i++)
// {int temp = arr[start];
// arr[start] = arr[end];
// arr[end] = temp;
// start++;
// end--;    
// }for (int i = 0; i < 6; i++)
// {
//    cout<<arr[i]<<" ";
// }
// cout<<endl;

// for(int j = start; j<=(end-3);j++){
//     int temp = arr[start];
// arr[start] = arr[end];
// arr[end] = temp;
// start++;
// end--;
// }
// for (int i = 0; i < 6; i++)
// {
//    cout<<arr[i]<<" ";
   
// }





//      return 0; 
// }



#include<iostream>
using namespace std;
     void sort012(int *arr, int n)
{
    int nz = 0;
    int nt = n-1;
    int i = 1;
    while(i<n){  switch(arr[i])
        {  
            case 0: 
        int temp = arr[i];
        arr[i] = arr[nz];
        arr[nz] = temp;
        nz++;
        i++;
        break;
        
        case 1: 
         i++;
        break;
        case 2:
         int temp = arr[i];
        arr[i] = arr[nt];
        arr[nt] = temp;
        nt--;
         break;
        }
    i++;
}
int main(){
     

   
    return 0; 
}