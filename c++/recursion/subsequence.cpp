#include<iostream>
using namespace std;
      int subsequence(string input , string output[]){
          if(input.empty()){
              output[0] = "";
              return 1;
          }

          string smallstring = input.substr(1);
          int ans = subsequence(smallstring,output);

          for (int i = 0; i < ans; i++)
{
    output[i+ans] = input[0]+output[i];
          }
          return 2*ans;
                }
int main(){
     string input;
     cin>>input;
     string *output = new string[10000];

     int count = subsequence(input,output);
     for (int i = 0; i < count; i++)
     {
        cout<<output[i]<<endl;
     }
     cout<<"size of subsequence : "<<count<<endl;
     string f = input.substr(1,2);
     cout<<f<<" "<<f.size();
      
     return 0; 
}