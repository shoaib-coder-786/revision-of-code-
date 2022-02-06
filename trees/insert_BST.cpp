#include<iostream>
#include<malloc.h>
using namespace std;
      struct node{
int data;
struct node *left;
struct node*right;
      };

      struct node* createNode(int data){
 struct node *n;        //creating a node pointer
      n = (struct node *) malloc(sizeof(struct node));   // allocating memory in the heap
      n->data = data;
      n->left =NULL;
      n->right =NULL;
      return n;
      }
    // recursive way to search in BST
// struct node* Search_bst(struct node * root , int key){
// if(root == NULL)
// return NULL;
// if(root->data==key)
// return root;
// else if(root->data > key)
// return Search_bst(root->left,key);
// else {
//     return Search_bst(root->right , key);
// }
// }

        // iterative way to search in BSt
        struct node * search(struct node* root , int key){
        while(root != NULL){ 
if(key== root->data){

    return root ;
}
else if(key < root->data){
    root = root->left;
}else{
    root = root-> right;
}
        }
        return NULL;
        }


void insert(struct node* root , int key){
    struct node * previous = NULL;
    while(root != NULL){
  previous = root;
  if(key == root->data)
  {cout<<"Cannot insert node, already in bst  ";
      return ;}
  else if(key<root ->data){
      root = root->left;
  }else{
       root = root->right;
  }
   
   }

struct node* new_data = createNode(key);
if(key < previous->data){
 previous->left= new_data;
 cout<<"key inserted successfully \n ";

}else{
    previous->right = new_data;
 cout<<"key inserted successfully \n ";

}

}

      int main(){
          //constructing a root node with left and right children using function 
   struct node *p = createNode(5);
   struct node *p1 = createNode(3);
   struct node *p2 = createNode(6);
   struct node *p3 = createNode(1);
   struct node *p4 = createNode(4);

    //Linking the  root nodes to the left and right children 
     p->left = p1;
     p->right = p2;
     p1->left = p3;
     p1->right = p4;
   
insert(p , 7);
cout<<p->right->right->data;

    
     return 0; 
}