#include<bits/stdc++.h>
using namespace std;

class tree
{
    public:
    int data;
    tree* left;
    tree* right;
    
    tree(int n)
    {
        data=n;
        left=NULL;
        right=NULL;
    }
};

int idx=0;

void level(tree* root)
{
    tree* node;
    queue<tree*> q;
    q.push(root);
    while(!q.empty())
    {
        int size=q.size();
        for(int i=0;i<size;i++)
        {
            node=q.front();
            if(node->left!=NULL)
                q.push(node->left);
            if(node->right!=NULL)
                q.push(node->right);

            cout<<node->data<<" ";
            q.pop();
        }
        cout<<endl;
    }
}

tree* preorder(vector<int> arr,int lr, int rr)
{
    if(idx>=arr.size() || arr[idx]<lr || arr[idx]>rr)
        return NULL;

    tree* temp = new tree(arr[idx]);
    idx++;
    temp->left= preorder(arr,lr,temp->data);
    temp->right= preorder(arr,temp->data,rr);

    return temp;
}

int main()
{
    int n,temp;
    cout<<"Enter the number of nodes: ";
    cin>>n;
    vector<int> arr;
    cout<<"Enter the preorder traversal of BST\n";
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        arr.push_back(temp);
    }
    tree* node=preorder(arr,INT_MIN,INT_MAX);
    cout<<"\nLEVEL ORDER \n";
    level(node);
    return 0; 
}