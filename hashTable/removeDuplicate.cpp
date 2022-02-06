#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
      
vector<int> removeDupliate(int *arr, int size){

unordered_map<int,bool> seen;
vector<int>output;

for (int i = 0; i <size; i++)
{
    if(seen.count(arr[i])>0){
        continue;
    }
seen[arr[i]] = true;
output.push_back(arr[i]);

}


return output;
}


int main(){
      
int a[] = {1,2,3,2,1,2,3,4,5,67,8,9,9,1,2,3,4,54,6,7,8,3,3,5,5,};
int size = sizeof(a)/sizeof(int);

vector<int>recieve = removeDupliate(a,size);
for (int i = 0; i <recieve.size(); i++)
{
     cout<<recieve[i]<<" ";
}





     return 0; 
}