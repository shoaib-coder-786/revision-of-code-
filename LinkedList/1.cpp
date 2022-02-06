// basics of linkedlist
#include<bits/stdc++.h>
using namespace std;
      class Node{

public:
int data ;
Node *next;   // next is an pointer of next node 
Node(int data){
    this->data = data;  
   next = NULL;
}
      };
int main(){
    // statically represntation of linkedlist
      Node n1(1);
      Node *head = &n1;  // head store the address of 1st node 

      Node n2(2);
    n1.next = &n2; // first node conatin the adress of second
    Node n3(3);
    n2.next = &n3;
    Node n4(4);
    n3.next = &n4;
      cout<<n1.data<<" "<<n2.data<<" "<<n3.data<<" "<<n4.data<<endl;
    cout<<head->data<<" "<<head->next->data<<" "<<head->next->next->data<<" "<<head->next->next->next->data<<endl;

// dynamically representation of linked list
Node *n5 = new Node(10);
n4.next = n5;               
// Node *head1 = n5;
Node * n6 = new Node(20);
n5->next = n6;
 cout<<"dynamically "<<n5->data<<" "<<n6->data<<endl;
cout<<head->next->next->next->next->data<<" "<<head->next->next->next->next->next->data;

     return 0; 
}