#include<iostream>
using namespace std;

class Node
{
public:
int data;
Node* next;
};

Node* head=NULL;

void insertBegin(int val)
{
Node* newNode=new Node();
newNode->data=val;
newNode->next=head;
head=newNode;
}

void insertEnd(int val)
{
Node* newNode=new Node();
newNode->data=val;
newNode->next=NULL;

if(head==NULL)
{
head=newNode;
return;
}

Node* temp=head;
while(temp->next!=NULL)
temp=temp->next;

temp->next=newNode;
}

void deleteBegin()
{
if(head==NULL)
{
cout<<"List Empty\n";
return;
}

Node* temp=head;
head=head->next;
delete temp;
}

void deleteEnd()
{
if(head==NULL)
{
cout<<"List Empty\n";
return;
}

if(head->next==NULL)
{
delete head;
head=NULL;
return;
}

Node* temp=head;
while(temp->next->next!=NULL)
temp=temp->next;

delete temp->next;
temp->next=NULL;
}

void display()
{
Node* temp=head;
while(temp!=NULL)
{
cout<<temp->data<<" -> ";
temp=temp->next;
}
cout<<"NULL\n";
}

int main()
{
int choice,val;

do
{
cout<<"\n1.Insert Begin";
cout<<"\n2.Insert End";
cout<<"\n3.Delete Begin";
cout<<"\n4.Delete End";
cout<<"\n5.Display";
cout<<"\n6.Exit";
cout<<"\nEnter Choice: ";
cin>>choice;

switch(choice)
{
case 1:
cout<<"Enter Value: ";
cin>>val;
insertBegin(val);
break;

case 2:
cout<<"Enter Value: ";
cin>>val;
insertEnd(val);
break;

case 3:
deleteBegin();
break;

case 4:
deleteEnd();
break;

case 5:
display();
break;

case 6:
break;

default:
cout<<"Invalid Choice";
}
}
while(choice!=6);

return 0;
}