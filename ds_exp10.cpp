#include<iostream>
using namespace std;

struct Node{
int data;
Node* left;
Node* right;
};

Node* createNode(int x){
Node* temp=new Node();
temp->data=x;
temp->left=NULL;
temp->right=NULL;
return temp;
}

Node* insert(Node* root,int x){
if(root==NULL){
return createNode(x);
}
if(x<root->data){
root->left=insert(root->left,x);
}
else{
root->right=insert(root->right,x);
}
return root;
}

void inorder(Node* root){
if(root==NULL){
return;
}
inorder(root->left);
cout<<root->data<<" ";
inorder(root->right);
}

void preorder(Node* root){
if(root==NULL){
return;
}
cout<<root->data<<" ";
preorder(root->left);
preorder(root->right);
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
int ch,x;
while(1){
cout<<"\n1.Insert\n2.Inorder\n3.Preorder\n4.Postorder\n5.Exit\n";
cin>>ch;
switch(ch){
case 1:
cout<<"Enter value:";
cin>>x;
root=insert(root,x);
break;
case 2:
inorder(root);
cout<<endl;
break;
case 3:
preorder(root);
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