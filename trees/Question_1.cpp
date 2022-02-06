#include<bits/stdc++.h>
using namespace std;
class Tree
{
    public:
    int data;
    Tree* left;
    Tree* right;
    Tree(int data){
       this->data=data;
       left=NULL;
       right=NULL; 
    }
};

bool IsIdentical(Tree * root1,Tree *root2)
{
    if (root1 == NULL && root2 == NULL){
        return true;
    }    
 
    if (root1 == NULL || root2 == NULL){
        return false;
    } 
    return (root1->data == root2->data &&
    IsIdentical(root1->left, root2->left) &&
    IsIdentical(root1->right, root2->right) );
}

bool isSubtree(Tree *T, Tree *S)
{
    if (S == NULL){
        return true;
    }

    if (T == NULL){
        return false;
    }

    if(IsIdentical(T, S)){
        return true;
    }
    return isSubtree(T->left, S) ||
        isSubtree(T->right, S);
}

Tree* takeinput(){
    int rootData;
    cout<<"Enter root Data: ";
    cin>>rootData;
    if(rootData==-1){
        return NULL;
    }
    Tree * root=new Tree(rootData);
    queue<Tree*>q;
    q.push(root);
    while(q.size()!=0){
    Tree* Front=q.front();
    q.pop();
    cout<<"Enter the left child of "<<Front->data<<": ";
    int lc;
    cin>>lc;
    if(lc!=-1){
    Tree* child= new Tree(lc);
    Front->left=child;
    q.push(child);
    }

    cout<<"Enter the right child of "<<Front->data<<": ";
    int rc;
    cin>>rc;
    if(rc!=-1){
    Tree* child= new Tree(rc);
    Front->right=child;
    q.push(child);
    }
    }
    return root;
}

int main(){
    cout<<"Take the input of tree 1"<<endl;
    Tree * T1=takeinput();
    cout<<"\nTake the input of tree 2\n"<<endl;
    Tree * T2=takeinput();
    if (isSubtree(T1,T2)){
        cout << "\nTree 2 is subtree of Tree 1";
    }else{
        cout << "\nTree 2 is not a subtree of Tree 1";
    }
    return 0;
return 0;
}