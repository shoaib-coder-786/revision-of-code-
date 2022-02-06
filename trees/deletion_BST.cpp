#include <iostream>
#include <malloc.h>
using namespace std;
struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *createNode(int data)
{
    struct node *n;                                 //creating a node pointer
    n = (struct node *)malloc(sizeof(struct node)); // allocating memory in the heap
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}
// iterative way to search in BSt
struct node *search(struct node *root, int key)
{
    while (root != NULL)
    {
        if (key == root->data)
        {
            return root;
        }
        else if (key < root->data)
        {
            root = root->left;
        }
        else
        {
            root = root->right;
        }
    }
    return NULL;
}

void INOrder(struct node *root){
    if(root!=NULL){
        INOrder(root->left);
        cout<<root->data<<" ";
        INOrder(root->right);
    }
}



struct node* inorderpredecessor(struct node * root){
    root = root-> left;
    while(root -> right != NULL){
        root = root->right;
    }
    return root ;
}

struct node *deleteNode(struct node *root, int value)
{

struct node * ipre ;


if(root == NULL){
    return NULL;
}
if(root->left == NULL && root->right == NULL){
    free(root);
    return NULL;
}

    // sesarch for the node to be deleted
    if (value < root->data)
    {
       root->left = deleteNode(root->left, value);
    }
    else if (value > root->data)
    {
    root->right=  deleteNode(root->right, value);
    }
     // delete strategy when node is found 
else{
    ipre = inorderpredecessor(root);
    root->data = ipre-> data ;
    root-> left = deleteNode(root->left , ipre->data);
}

return root;
}

int main()
{
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

INOrder(p);
deleteNode(p, 5);
cout<<endl;
INOrder(p);
    return 0;
}