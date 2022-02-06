// take input in linkedlist with complexity O(n)
#include<iostream>
using namespace std;
      class node{
public:
int data;
node * next;
node(int data){
    this->data = data;
    this->next = NULL;
}
      };

  node* take_input(){
      int data;
      node*head =NULL;
      node * tail = NULL;
      cout<<"enter -1 to exit inputs\n";
      cin>>data;
while (data != -1)
{
    node *newnode = new node(data);
    if(head == NULL){
        head = newnode;
        tail = newnode;
    }else{
        tail->next = newnode;
        tail =  tail->next;
        // or 
        // tail = newnode   // tail store the address of current newnode directly
    }
    cin>>data;
}
return head;
  }

 void print(node *head){
     while (head != NULL)
     {
     cout<<head->data<<" ";

     head = head->next;

     }
     
 }     
int main(){
      node *head = take_input();
      print(head);
     return 0; 
}