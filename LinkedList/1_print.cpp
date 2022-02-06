// print linkedlist in various forms
#include<iostream>
using namespace std;
      class node{
public:
int data;
node *next;
node(int data){
    this->data = data;
    next = NULL;
}
      };

/*void print(node *head){
while(head!= NULL){
    cout<<head->data<<" ";
    head = head->next;
}
cout<<endl;
}*/

void print(node *head){
    node * temp = head;
while(temp!= NULL){
    cout<<temp->data<<" ";
    temp = temp->next;
}
cout<<endl;

// while(head!= NULL){
//     cout<<head->data<<" ";
//     head = head->next;
// }
// cout<<endl;
}
/*
void display(node *head ){
    
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}*/
void increment(node *head){
    node * temp = head ;
    while(temp!= NULL){
        temp->data++;
       temp =  temp->next;
    }
}

int main(){
    // statically 
 /* node n1(10);
  node *head = &n1;    
  node n2(20);
  node n3(30);
  node n4(40);
  node n5(50);
  node n6(60);
  n1.next = &n2;
  n2.next = &n3;
  n3.next = &n4;
  n4.next = &n5;
  n5.next = &n6;
*/
// dynamically linkedlist
node * n7 = new node(70);
// node * head = n7;
node * n8 = new node(80);
node * n9 = new node(90);
node * n10 = new node(100);
node * n11= new node(110);
node * n12 = new node(120);
node * head = n7;
n7->next = n8;
n8->next = n9;
n9->next = n10;
n10->next = n11;
n11->next = n12;

// cout<<head->next->next->data<<endl;
// print(head);
cout<<"dynamically printing "<<endl;
increment(head);
print(head);
// display(head);
     return 0; 
}