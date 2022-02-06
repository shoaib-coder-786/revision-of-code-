#include<iostream>
#include<queue>
#include<math.h>
using namespace std;
template<typename T>
    class BinarytreeNode{
public:
T data;
BinarytreeNode *Left;
BinarytreeNode*Right;
BinarytreeNode(T data){
    this->data = data;
    Left = NULL;
    Right = NULL;
}

~BinarytreeNode(){
delete Left;
delete Right;
}
    };

BinarytreeNode<int>*takeinputlevelwise(){
    int rootdata;
    cout<<"Enter root data "<<endl;
    cin>>rootdata;
    if(rootdata==-1){
        return NULL;
    }
    BinarytreeNode<int>*root = new BinarytreeNode<int>(rootdata);
    queue<BinarytreeNode<int>*> q;
    q.push(root);

    while (q.size()!= 0)
    {BinarytreeNode<int>*front = q.front();
        q.pop();
       cout<<"Enter Left child data of "<<front->data<<endl;
    int leftchilddata;
    cin>>leftchilddata;
    if(leftchilddata!= -1){
      BinarytreeNode<int>*leftchild = new BinarytreeNode<int>(leftchilddata);
front->Left = leftchild;
q.push(leftchild);
    } 
       cout<<"Enter right child data of "<<front->data<<endl;
    int rightchilddata;
    cin>>rightchilddata;
    if(rightchilddata!= -1){
      BinarytreeNode<int>*rightchild = new BinarytreeNode<int>(rightchilddata);
front->Right = rightchild;
q.push(rightchild);
    } 



    }
    return root;
    
}

    BinarytreeNode<int>*takeinput(){
        int rootdata;
        cout<<"Enter data : ";
        cin>>rootdata;
        if(rootdata==-1){
            return NULL;
        }
        BinarytreeNode<int>*root = new BinarytreeNode<int>(rootdata);
     BinarytreeNode<int>*leftchild = takeinput();
     BinarytreeNode<int>*rightchild = takeinput();
        root->Left= leftchild;
        root->Right = rightchild;
return root;
    }

    void print(BinarytreeNode<int>*root){
        if(root==NULL){
            return;
        }
        cout<<root->data<<": ";
        if(root->Left!=NULL){
            cout<<"L"<<root->Left->data<<" ";
        }
        if(root->Right!=NULL){
            cout<<"R"<<root->Right->data<<" ";
        }
        cout<<endl;
        print(root->Left);
        print(root->Right);
    } 

int height(BinarytreeNode<int>*root){
    if(root==NULL){
        return 0;
    }

    return 1+ max(height(root->Left), height(root->Right));
}

int diameterofTree(BinarytreeNode<int>*root){
    if(root==NULL){
        return 0;
    }
int option1 = height(root->Left)+height(root->Right);
int oprtion2 = diameterofTree(root->Left);
int oprtion3 = diameterofTree(root->Right);

return max(option1,max(oprtion2,oprtion3));

}

pair<int,int> heightDiameter(BinarytreeNode<int>*root){

if(root==NULL){
    pair<int,int>p;
    p.first = 0;
    p.second = 0;
    return p;
}

pair<int,int> leftans = heightDiameter(root->Left);
pair<int,int> rightans = heightDiameter(root->Right);

pair<int,int>p;
int ld = leftans.second;
int lh = leftans.first;
int rd = rightans.second;
int rh = rightans.first;

int height = 1 + max(lh,rh);
int diameter = max(lh+rh, max(ld,rd));

pair<int,int>p1;
p1.first = height;
p1.second = diameter;

return p1;
}



int main(){
    /*  BinarytreeNode<int>*root = new BinarytreeNode<int>(1);
      BinarytreeNode<int>*n1 = new BinarytreeNode<int>(2);
      BinarytreeNode<int>*n2 = new BinarytreeNode<int>(3);
      BinarytreeNode<int>*n4 = new BinarytreeNode<int>(4);
      BinarytreeNode<int>*n5 = new BinarytreeNode<int>(5);
     root->Left = n1;
     root->Right = n2;
     root->Left->Left=n4;
     root->Right->Right=n5;*/

   /*  cout<<root->data<<endl;
     cout<<root->Left->data<<endl;
     cout<<root->Right->data<<endl;*/

// 1 2 -1 -1 3 -1 -1
     BinarytreeNode<int>*root = takeinputlevelwise();
     pair<int,int>p = heightDiameter(root);
     print(root);

     cout<<"height of tree is : "<<p.first<<endl;
     cout<<"diameter of tree is : "<<p.second<<endl;

delete root;

     return 0; 
}