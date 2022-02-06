#include<iostream>
using namespace std;
      
int main(){
char c ;
c = cin.get();   // cin.get read the space , enter ,new line as well
int count = 0;
while(c!= '$'){
count++;
c= cin.get();
}
 cout<<count<<endl;;     
     return 0; 
}