#include<iostream>
using namespace std;
template<typename T,typename v>
 class pairxy{
T x;
v y;
public :
void setx(T x){
    this->x = x;
}
T getx(){
    return x;
}

void sety(v y){
    this->y = y;
}

v gety(){
    return y;
}
     } ;
int main(){      
/*
pairxy <pairxy <int , int> , int> p2; //nesting of template
p2.sety(10);

pairxy <int ,int > p3;
p3.setx(15);
p3.sety(20);

p2.setx(p3);
cout<<p2.getx().getx()<<" "<<p2.getx().gety()<<" "<<p2.gety()<<endl;*/


pairxy < int ,pairxy <double, char> > p2; //nesting of template
p2.setx(10);

pairxy <double,char > p3;
p3.setx(15.10089);
p3.sety('A');

p2.sety(p3);

cout<<p2.getx()<<" "<<p2.gety().getx()<<" "<<p2.gety().gety()<<endl;



/*pairxy <double, int>p;
p.setx(100.123);
p.sety(200.123);
 cout<<p.getx()<<" "<<p.gety()<<endl;*/


    /*  pairxy <int>p;
      p.setx(10.120);
      p.sety(20.21);
      cout<<p.getx()<<" "<<p.gety()<<endl;

      pairxy <double>p1;
      p1.setx(10.120);
      p1.sety(20.21);
      cout<<p1.getx()<<" "<<p1.gety()<<endl;*/


     return 0; 
}