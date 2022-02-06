#include<iostream>
#include<string.h>
using namespace std;
class student{ 
int age;
char *name;
public:
student(int age , char * name){
    this->age = age;
  //  this->name = name;    // shallow copy > which copy the address of first element of addresss

  // deep copy> it makes the new copy of array
  this-> name = new char[strlen(name)+1];
  strcpy(this->name, name);

}
void display(){
    cout<<this->name<<" and age is "<<this->age<<endl;
}

};


int main(){
char name[] = "shoaib";
student s(18,name);
s.display();

name[5] = 'e';
student s1(20,name);
s1.display();

s.display();

    return 0;
}