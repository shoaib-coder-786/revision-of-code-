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

void preOrder(struct node* root ){
    if(root!= NULL){
        cout<<root->data<<" ";
        preOrder(root->left);
        preOrder(root->right);
    }
}

void postOrder(struct node *root){
    if(root!=NULL){
        postOrder(root->left);
        postOrder(root->right);
        cout<<root->data<<" ";
    
}}
void INOrder(struct node *root){
    if(root!=NULL){
        INOrder(root->left);
        cout<<root->data<<" ";
        INOrder(root->right);
    }
}

int main(){
/*

    //constructing the root node 
     struct node *n;        //creating a node pointer
      n = (struct node *) malloc(sizeof(struct node));   // allocating memory in the heap
      n->data = 2;
      n->left =NULL;
      n->right =NULL;

    //constructing the first node 

      struct node *p1;
      p1 = (struct node *) malloc(sizeof(struct node));
      p1->data = 20;
      p1->left =NULL;
      p1->right =NULL;

    //constructing the second ssnode 
      struct node *p2;
      p2 = (struct node *) malloc(sizeof(struct node));
      p2->data = 10;
      p2->left =NULL;
      p2->right =NULL;
     
     //Linking the  root nodes to the left and right children 
     p->left = p1;
     p->right = p2;
    */

//constructing a root node with left and right children using function 
   struct node *p = createNode(2);
   struct node *p1 = createNode(5);
   struct node *p2 = createNode(11);
   struct node *p3 = createNode(12);
   struct node *p4 = createNode(13);
   struct node *p5 = createNode(14);

    //Linking the  root nodes to the left and right children 
     p->left = p1;
     p->right = p2;
     p1->left = p3;
     p1->right = p4;
     p2->left = p5;

     preOrder(p);
     cout<<endl;
     postOrder(p);
     cout<<endl;
     INOrder(p);
     return 0; 
}