#include<iostream>
using namespace std;

struct Node{
int data;
Node* left;
Node* right;
};

Node* create(){
int x;
cout<<"Enter value(-1 for no node):";
cin>>x;
if(x==-1){
return NULL;
}
Node* temp=new Node();
temp->data=x;
temp->left=create();
temp->right=create();
return temp;
}

void preorder(Node* root){
if(root==NULL){
return;
}
cout<<root->data<<" ";
preorder(root->left);
preorder(root->right);
}

void inorder(Node* root){
if(root==NULL){
return;
}
inorder(root->left);
cout<<root->data<<" ";
inorder(root->right);
}

void postorder(Node* root){
if(root==NULL){
return;
}
postorder(root->left);
postorder(root->right);
cout<<root->data<<" ";
}

int main(){
Node* root=NULL;
int ch;
while(1){
cout<<"\n1.Create Tree\n2.Preorder\n3.Inorder\n4.Postorder\n5.Exit\n";
cin>>ch;
switch(ch){
case 1:
root=create();
break;
case 2:
preorder(root);
cout<<endl;
break;
case 3:
inorder(root);
cout<<endl;
break;
case 4:
postorder(root);
cout<<endl;
break;
case 5:
return 0;
default:
cout<<"Invalid choice\n";
}
}
}