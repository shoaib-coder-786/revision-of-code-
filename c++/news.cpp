#include<bits/stdc++.h>
using namespace std;
bool pallindrome(char str[]){

int i =0 ;
int s = strlen(str);
while (i!='\0')
{
  if(str[i]!= str[s-1-i]){
      return false;

  }
  else{
      i++;
  } 

  }  return true;
}

int main(){
char str[1000];
cin>>str;
// cout<<(pallindrome(str)? "true" : "false");
// pallindrome(str);
int i = 0;
while(i!='\0'){
    cout<<i<<endl;
    i++;
}
    return true;
}