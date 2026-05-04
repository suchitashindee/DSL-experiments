#include<iostream>
using namespace std;

struct Node{
int data;
Node* next;
};

Node* front=NULL;
Node* rear=NULL;

void enqueue(int x){
Node* temp=new Node();
temp->data=x;
temp->next=NULL;
if(rear==NULL){
front=rear=temp;
}
else{
rear->next=temp;
rear=temp;
}
}

void dequeue(){
if(front==NULL){
cout<<"Queue is empty\n";
return;
}
Node* temp=front;
cout<<"Deleted:"<<front->data<<endl;
front=front->next;
delete temp;
if(front==NULL){
rear=NULL;
}
}

void display(){
Node* temp=front;
if(temp==NULL){
cout<<"Queue is empty\n";
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
cout<<"\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n";
cin>>ch;
switch(ch){
case 1:
cout<<"Enter value:";
cin>>x;
enqueue(x);
break;
case 2:
dequeue();
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