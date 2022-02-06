#include<iostream>
#include<vector>
#include<queue>
using namespace std;
  template<typename T>    
class TreeNode{
public:
int data;
vector<TreeNode<T> * > children;

TreeNode(int data){
    this->data = data;
}
};
void printatKlevel(TreeNode<int>*root ,int k){
if(root==NULL){
  return;
}
if(k==0){
  cout<<root->data<<" ";
}
for (int i = 0; i <root->children.size(); i++)
{
  printatKlevel(root->children[i] , k-1);
}

}
void print(TreeNode<int> * root){
if(root==NULL){
  return;
}
cout<<root->data<<" : ";
for (int i = 0; i <root->children.size(); i++)
{
  cout<<root->children[i]->data<<" , ";
}
cout<<endl;
for (int i = 0; i <root->children.size(); i++)
{
  print(root->children[i]);
}
}
TreeNode<int>* takeInputLevel(){
int rootdata;
cout<<"Enter root data "<<endl;
cin>>rootdata;
TreeNode<int>*root = new TreeNode<int>(rootdata);
queue<TreeNode<int>*> q;
q.push(root);
while (q.size()!=0)
{
   TreeNode<int>*front = q.front();
   q.pop();
   int numchild;
      cout<<"Enter number of children  "<<front->data<<endl;
      cin>>numchild;
      for (int i = 0; i <numchild; i++)
      { 
         cout<<"Enter "<<i<<"th child of "<<front->data<<endl;
         int childata;
         cin>>childata;
         TreeNode<int>* child = new TreeNode<int>(childata);
         front->children.push_back(child);
         q.push(child);
      }
      
    
}
return root;
}
/*
TreeNode<int>*takeInput(){
int rootdata;
cout<<"ENter data "<<endl;
cin>>rootdata;
TreeNode<int> * root = new TreeNode<int>(rootdata);
int data;
cout<<"Enter number of children of root "<<rootdata<<endl;
cin>>data;
for (int i = 0; i <data; i++)
{
  TreeNode<int>*child = takeInput();
  root->children.push_back(child);
}

return root;
}
*/

int main(){
/*TreeNode<int>*root = new TreeNode<int>(1);
TreeNode<int> *node1 = new TreeNode<int>(2);
TreeNode<int>*node2 = new TreeNode<int>(3);
//link all
root->children.push_back(node1);
root->children.push_back(node2);
print(root);
*/
  /*    (1)root
        / \
      (2) (3)
    node1  node2
*/

// TreeNode<int>* newroot = takeInput();
TreeNode<int>*root = takeInputLevel();
cout<<endl;
// print(root);
printatKlevel(root, 2);


     return 0; 
}