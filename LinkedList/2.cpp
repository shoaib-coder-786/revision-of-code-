// taking input in linkedlist with complexity O(n*n)
#include<iostream>
using namespace std;
 class node
{
    public :
    int data;
    node *next;
    node(int data){
        this->data = data;
        next = NULL;
    }
    };

void print(node *head){
        while(head != NULL){
            cout<<head->data<<" ";
            head = head->next;
        }
    }

   node * take_input(){
    int data;
    node *head = NULL;
    cout<<"enter -1 to exit inputs"<<endl;

    cin>>data;
    while(data != -1){
        node *newnode = new node(data);
        if(head == NULL){
            head = newnode;
        }else{
         node * temp  = head;
while (temp->next != NULL)
{
   temp = temp->next;
}
 temp->next = newnode;
        }
        cin>>data;
    }
    return head;
}

    int main(){
      node *head = take_input() ;
      print(head);
      
      

     return 0; 
}