#include<iostream>
using namespace std;
      
int main(){
      int n ;
    cin>>n;
    int series = 0 ;
    int p = n;
    int count = 1;
    int i = 1;
    for (int  count = 1; count <=p; count++)
    {
        series = (3*i)+2;
       if (series%4!=0)
       {
       cout<<series<<" ";
         i++;
         count++;
           }else
         continue;
       
            i++;
       
    }
    
     return 0; 
}