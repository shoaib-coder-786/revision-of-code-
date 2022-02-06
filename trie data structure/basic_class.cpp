#include<iostream>
#include<string>
using namespace std;
      class triNode{
          public :
          char data;
triNode ** children;
bool isEnd ;
 triNode(char data){
     this->data = data;
     children = new triNode*[26];
     // initially children array are null 
     for (int i = 0; i <26; i++)
     {
         children[i] = NULL;
     }
     isEnd = false;
 }
    };

class trie{
triNode* root;
public:
trie(){
    root = new triNode('\0');
}
void insertNode(triNode* root , string word){
    // base case
    if(word.size()==0){
        root->isEnd = true;
        return;
    }

    // small calculation
    int index =word[0]-'a';
    triNode * child ;
    if(root->children[index] != NULL){
        child = root->children[index];

    }else{
child = new triNode(word[0]);
root->children[index] = child;
    }

    // recursive call
    insertNode(child , word.substr(1));
}

void insertNode(string word){
    insertNode(root, word);
}

bool search(triNode*root,string word ){
if(word.size()==0){
    if(root->isEnd==true){
        return true;
    }else
    return false;
}

int index = word[0] - 'a';
triNode * child;
if(root->children[index]==NULL){
    return false;
}else{
    child = root->children[index];
}

return search(child, word.substr(1));
}

bool search(string word){
    return search(root,word);
}

void removeWord(triNode * root , string word)
{
if(word.size()==0){
    root->isEnd = false;
    return;
}
// small calculation
triNode * child;
int index = word[0] - 'a';

if(root->children[index]!=NULL){
    child = root->children[index];
}else{ // word not found
    return;
}

removeWord(child , word.substr(1));

// remove child node  if it is useless 
if(child->isEnd == false){
    for (int i = 0; i <26; i++)
    {
if(child->children[i]!=NULL){
    return;
}
    }
    delete child;
    root->children[index] = NULL;
}

}
void remove(string word){
    removeWord(root,word);
}


};

int main(){
      trie t;
      t.insertNode("and");
      t.insertNode("or");
      t.insertNode("shoaib");
    cout<< "befrore deletion "<<t.search("and")<<endl;

      t.remove("and");
     cout<<"after deletion "<<t.search("and")<<endl;
     cout<<"name "<<t.search("shoaib")<<endl;
     return 0; 
}