#include<iostream>
using namespace std;

struct Node{
int data;
Node* next;
};

Node* top=NULL;

void push(int x){
Node* temp=new Node();
temp->data=x;
temp->next=top;
top=temp;
}

void pop(){
if(top==NULL){
cout<<"Stack is empty\n";
return;
}
Node* temp=top;
cout<<"Deleted:"<<top->data<<endl;
top=top->next;
delete temp;
}

void display(){
Node* temp=top;
if(temp==NULL){
cout<<"Stack is empty\n";
return;
}
while(temp!=NULL){
cout<<temp->data<<" ";
temp=temp->next;
}
cout<<endl;
}

int main(){
int ch,x;
while(1){
cout<<"\n1.Push\n2.Pop\n3.Display\n4.Exit\n";
cin>>ch;
switch(ch){
case 1:
cout<<"Enter value:";
cin>>x;
push(x);
break;
case 2:
pop();
break;
case 3:
display();
break;
case 4:
return 0;
default:
cout<<"Invalid choice\n";
}
}
}