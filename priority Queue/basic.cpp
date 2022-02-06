#include<iostream>
#include<vector>
using namespace std;
      class priorityQueue{
vector<int> v;
public:
priorityQueue(){

}
bool isEmpty(){
    return v.size()==0;
}

int getsize(){
    return v.size();
}
int getmin(){

    if(isEmpty()){
        return 0;
    }

    return v[0];
}
int next_index=0;

void insert(int data){
    v.push_back(data);
    
    int childindex = v.size()-1;
    while(childindex>0){
int parentindex = (childindex-1)/2;
if(v[childindex]<v[parentindex]){
    int temp = v[childindex];
    v[childindex] = v[parentindex];
    v[parentindex] = temp;
}else{
    break;
}
childindex = parentindex;
    }


}

/*
void removeMin(){
    int temp = v[0];
    v[0] = v[next_index-1];
    v[next_index-1] = temp;

v[next_index-1] = NULL;
next_index--;

}*/

void print(){
    for (int i = 0; i <v.size(); i++)
    {
       cout<<v.at(i)<<endl;
    }
    
}

      };
int main(){
      priorityQueue p;
      p.insert(10);
      p.insert(8);
      p.insert(9);
      p.insert(5);
      p.insert(7);
      p.insert(2);
      p.insert(0);
      p.insert(11);
      p.insert(12);
      p.insert(13);

cout<<"size of priorty queue  "<<p.getsize()<<endl;
cout<<"min element of priorty queue  "<<p.getmin()<<endl;
p.print();

     return 0; 
}