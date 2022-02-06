// insert node at ith position
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
// taking input 
node * input(){
    int data;
    node * head = NULL;
    node * tail = NULL;
    cout<<"enter data in linkedlist ...-1 to exit"<<endl;
    cin>>data;

    while (data!= -1)
    {
        node *newnode = new node(data);
        if(head == NULL){
            head = newnode;
            tail = newnode;
        }else{
tail->next = newnode;
tail = tail->next;
        }
        cin>>data;
    }
  return head;
}

void print(node * head){
while (head != NULL)
{
    cout<<head->data<<" ";
    head = head->next;
}
cout<<endl;
}

// insert in ith position in linkedlist
node* insert(node * head , int i , int data){
    node * newnode = new node(data);
    int count = 0;
    node * temp = head;
    if(i==0){          // insert node at starting and return new address of head
        newnode->next = head;
        head = newnode;
        return head;
    }
while(temp!= NULL && count<i-1){
    temp = temp->next;
    count++;
}
if(temp != NULL){
/*
node *a = temp->next;
temp->next = newnode;
newnode->next = a;    // or  */

newnode->next = temp->next;
temp->next =newnode;
}
return head;
}
// delete node at ith position
node* deleteNode(node *head , int i){

    node * temp = head;
    int count =0;
  
    while(temp!= NULL && count <i-1){
temp = temp->next;
count++;
    }
      if(i==0){
         head = head->next;
  
         return head;
    }
    if(temp->next==NULL){
        return head;
    }
     if(temp!= NULL){
    node * a = temp->next;
    temp->next = a->next;
    delete a;
    
    }

    return head;
}

int main(){
      node * head;
      head = input();
      print(head);
      int i, data;
    cout<<"enter position and data to insert in linkedlist"<<endl;
cin>>i>>data;
head  = insert(head , i, data);
print(head);
int position;
cout<<"delete node /// enter positon to delete\n";
cin>>position;
node *x = deleteNode(head , position);
print(head);
     return 0; 
}