//SINGLY LINKED LIST

#include<iostream>
#include<stdlib.h>
using namespace std;
class node
{
 public:
 int data;
 node* next;
};
void display(node* n)
{
 cout<<"\nList:\n";
 while(n!=NULL)
 {
 cout<<n->data<<"->";
 n=n->next;
 }
 cout<<"NULL\n"<<endl;
}
void search(node *h)
{
 int count=0,k=0,key;
 display(h);
 cout<<"\nEnter the data you want to search: ";
 cin>>key;
 while(h!=NULL)
 {
 count++;
 if(h->data==key)
 {
 k=1;
 cout<<"\nData found at position "<<count<<"\n\n";
 break;
 }
 h=h->next;
 }
 if(k==0)
 cout<<"\nData not found\n\n";
}
node* insFront(node* h)
{
 int new_data;
 display(h);
 cout<<"\nEnter the data you want to insert: ";
 cin>>new_data;
 node* newn = new node();
 newn->data = new_data;
 newn->next=h;
 h=newn;
 cout<<"\nNode inserted\n\n";
 cout<<"List after inserting:\n";
 display(h);
 return h;
}
node* insLast(node* h)
{
 node* n=h;
 int new_data;
 display(h);
 cout<<"\nEnter the data you want to insert: ";
 cin>>new_data;
 if(n==NULL)
 {
 node* newn = new node();
 newn->data = new_data;
 newn->next=h;
 h=newn;
 cout<<"\nNode inserted\n\n";
 cout<<"List after inserting:\n";
 display(h);
 return h;
 }
 while(n->next!=NULL)
 {
 n=n->next;
 }
 node* newn = new node();
 newn->data=new_data;
 newn->next=NULL;
 n->next=newn;
 cout<<"\nNode inserted\n\n";
 cout<<"List after inserting:\n";
 display(h);
 return h;
}
node* insAfter(node* h)
{
 node*n=h;
 int new_data,key;
 display(h);
 cout<<"\nEnter the data after which you want to insert: ";
 cin>>key;
 while(n!=NULL)
 {
 if(n->data==key)
 break;
 n=n->next;
 }
 if(n==NULL)
 {
 cout<<"\nKey not found\n\n";
 return h;
 }
 cout<<"\nEnter the data you want to insert: ";
 cin>>new_data;
 node* newn=new node();
 newn->data=new_data;
 newn->next=n->next;
 n->next=newn;
 cout<<"\nNode inserted\n\n";
 cout<<"List after inserting:\n";
 display(h);
 return h;
}
node* insBefore(node* h)
{
 node*n=h;
 int new_data,key;
 display(h);
 cout<<"\nEnter the data before which you want to insert: ";
 cin>>key;
 while(n!=NULL)
 {
 if(n->data==key)
 {
 node* newn=new node();
 newn->data=new_data;
 newn->next=n;
 n=newn;
 cout<<"\nNode inserted\n\n";
 cout<<"List after inserting:\n";
 display(n);
 return n;
 }
 if(n->next->data==key)
 break;
 n=n->next;
 }
 if(n==NULL)
 {
 cout<<"\nKey not found\n\n";
 return h;
 }
 cout<<"\nEnter the data you want to insert: ";
 cin>>new_data;
 node* newn=new node();
 newn->data=new_data;
 newn->next=n->next;
 n->next=newn;
 cout<<"\nNode inserted\n\n";
 cout<<"List after inserting:\n";
 display(h);
 return h;
}
node* insPos(node* h)
{
 node* n=h;
 int count=0,pos,new_data;
 display(h);
 cout<<"\nEnter the position you want to insert: ";
 cin>>pos;
 if(pos==1)
 {
 cout<<"\nEnter the data you want to insert: ";
 cin>>new_data;
 node* newn=new node();
 newn->data=new_data;
 newn->next=n;
 n=newn;
 cout<<"\nNode inserted\n\n";
 cout<<"List after inserting:\n";
 display(n);
 return n;
 }
 while(n!=NULL)
 {
 count++;
 if(count==pos-1)
 break;
 n=n->next;
 }
 if(n==NULL)
 {
 cout<<"\nPosition not found\n\n";
 return h;
 }
 cout<<"\nEnter the data you want to insert: ";
 cin>>new_data;
 node* newn=new node();
 newn->data=new_data;
 newn->next=n->next;
 n->next=newn;
 cout<<"\nNode inserted\n\n";
 cout<<"List after inserting:\n";
 display(h);
 return h;
}
node* delFront(node* h)
{
 node* n=h;
 display(h);
 if(n==NULL)
 {
 cout<<"\nNo element in list\n\n";
 return h;
 }
 h=n->next;
 delete(n);
 cout<<"\nNode deleted\n\n";
 cout<<"List after deleting:\n";
 display(h);
 return h;
}
node* delLast(node* h)
{
 node* n=h;
 display(h);
 if(n==NULL)
 {
 cout<<"\nNo element in list\n\n";
 return h;
 }
 if(n->next==NULL)
 {
 delete(n);
 cout<<"\nNode deleted\n\n";
 cout<<"List after deleting:\n";
 display(h);
 return NULL;
 }
 while(n->next->next!=NULL)
 {
 n=n->next;
 }
 delete(n->next);
 n->next=NULL;
 cout<<"\nNode deleted\n\n";
 cout<<"List after deleting:\n";
 display(h);
 return h;
}
node* delKey(node* h)
{
 node* n = h;
 int key;
 display(h);
 if(n==NULL)
 {
 cout<<"\nNo element in list\n\n";
 return h;
 }
 cout<<"\nEnter the data which you want to delete: ";
 cin>>key;
 if(n->data==key)
 {
 node* p=n;
 n=p->next;
 delete(p);
 cout<<"\nNode deleted\n\n";
 cout<<"List after deleting:\n";
 display(n);
 return n;
 }
 else
 {
 while(n->next!=NULL)
 {
 if(n->next->data==key)
 break;
 n=n->next;
 }
 if(n->next==NULL)
 {
 cout<<"\nKey not found\n\n";
 return h;
 }
 node* del = n->next;
 n->next=del->next;
 delete(del);
 cout<<"\nNode deleted\n\n";
 cout<<"List after deleting:\n";
 display(h);
 return h;
 }
}
node* delPos(node* h)
{
 int count=0,pos;
 node* cur=h;
 display(h);
 if(cur==NULL)
 {
 cout<<"\nNo element in list\n\n";
 return h;
 }
 cout<<"\nEnter the position which you want to delete: ";
 cin>>pos;
 if(pos==1)
 {
 node* del=cur;
 cur = del->next;
 delete(del);
 cout<<"List after deleting:\n";
 display(cur);
 return cur;
 }
 else
 {
 while(cur!=NULL)
 {
 count++;
 if(count==(pos-1))
 break;
 cur=cur->next;
 }
 if(cur==NULL || cur->next==NULL)
 {
 cout<<"\nPosition not found\n\n";
 return h;
 }
 node* del=cur->next;
 cur->next=cur->next->next;
 delete(del);
 cout<<"\nNode deleted\n\n";
 cout<<"List after deleting:\n";
 display(h);
 return h;
 }
}
int main()
{
 node* head = NULL;
 int choice=0,i,d;
 while(choice!=4)
 {
 cout<<"\n\n"<< " SINGLY LINKED LIST "<<"\n\n";
 cout<<"Enter the operation to be performed: "<<"\n";
 cout<<"1.Insertion\n2.Deletion\n3.Search data\n4.Exit\n\nYour choice: ";
 cin>>choice;
 switch(choice)
 {
 case 1:
 cout<<"\n\n1.Insert at the beginning\n";
 cout<<"2.Insert after given key\n";
 cout<<"3.Insert before given key\n";
 cout<<"4.Insert at a given position\n";
 cout<<"5.Insert at last\n\nYour choice: ";
 cin>>i;
 switch(i)
 {
 case 1:
 head = insFront(head);
 break;
 case 2:
 head = insAfter(head);
 break;
 case 3:
 head = insBefore(head);
 break;
 case 4:
 head = insPos(head);
 break;
 case 5:
 head = insLast(head);
 break;
 }
 break;
 case 2:
 cout<<"\n\n1.Delete at the beginning\n";
 cout<<"2.Delete via given key\n";
 cout<<"3.Delete via given position\n";
 cout<<"4.Delete at last\n\nYour choice: ";
 cin>>d;
 switch(d)
 {
 case 1:
 head = delFront(head);
 break;
 case 2:
 head = delKey(head);
 break;
 case 3:
 head = delPos(head);
 break;
 case 4:
 head = delLast(head);
 break;
 }
 break;
 case 3:
 search(head);
 break;
 case 4:
 exit(0);
 default:
 cout<<"Wrong input! Enter numbers from 1 to 5";
 }
 }
 return 0;
}
