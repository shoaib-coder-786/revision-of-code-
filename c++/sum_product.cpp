#include<iostream>
using namespace std;
      int sum(int n){
          int add = 0;
          while(n!=0){
              add = add +n;
              n--;
          }
          return add;
      }

int multi(int n ){
    int fect = 0;
    if (n==0 || n==1)
    {
        return 1;
    }else{
        fect = n*multi(n-1);
    }
    return fect;
}

int main(){
      int n ;
      int c;
      cin>>n>>c;
      switch (c)
      {
      case 1:         
        cout<<sum(n);        
          break;

      case 2:      
        cout<< multi(n);
          break;

      default:cout<<"-1";
          break;
      }
 
   
     return 0; 
}