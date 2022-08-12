/*maintain two linear linked lists of strings and remove the
common words from both of the linked lists.*/

#include<iostream>
#include<string.h>
using namespace std;
class node
{
public:
 string data;
 node*next;
};
class list
{
public:
 node*head;
 list()
 {
 head=NULL;
 }
 node* insert(string);
 void display();
};
node* list::insert(string elem)
{
 node*nn=new node();
 nn->data=elem;
 nn->next=NULL;
 if(head==NULL)
 {
 head=nn;
 return head;
 }
 else
 {
 node*temp=head;
 while(temp->next!=NULL)
 temp=temp->next;
 temp->next=nn;
 return head;
 }
}
void list::display()
{
 node*temp=head;
 while(temp!=NULL)
 {
 cout<<temp->data<<" ";
 temp=temp->next;
 }
}
node* del(list l,string data)
{
 node*temp=l.head;
 if(temp->data==data)
 {
 node*cur=temp;
 temp=temp->next;
 delete cur;
 return temp;
 }
 while(temp!=NULL)
 {
 if(temp->next->data==data)
 {
 node*cur=temp->next;
 temp->next=cur->next;
 delete cur;
 return l.head;
 }
 temp=temp->next;
 }
}
void result(list l1,list l2)
{
 node*temp1=l1.head;
 node*temp2=l2.head;
 node*cur1=l1.head;
 node*cur2=l2.head;
 string common[10];
 int i=0;
 while(temp1!=NULL)
 {
 temp2=l2.head;
 while(temp2!=NULL)
 {
 if(temp1->data==temp2->data)
 {
 common[i]=temp2->data;
 i++;
 break;
 }
 temp2=temp2->next;
 }
 temp1=temp1->next;
 }
 for(int j=0;j<i;j++)
 {
 l1.head=del(l1,common[j]);
 l2.head=del(l2,common[j]);
 }
 cout<<"AFTER DELETING : ";
 cout<<"ELEMENTS OF LIST 1 : ";
 l1.display();
 cout<<"ELEMENTS OF LIST 2 : ";
 l2.display();
}
int main()
{
 list l1,l2;
 int sl1,sl2;
 string elem,common;
 cout<<"ENTER NO OF ELEMENTS IN LIST 1: ";
 cin>>sl1;
 for(int i=0;i<sl1;i++)
 {
 cout<<"ENTER ELEMENT OF LIST 1 : ";
 cin>>elem;
 l1.head=l1.insert(elem);
 }
 cout<<"ELEMENTS OF LIST 1 : ";
 l1.display();
 cout<<"ENTER NO OF ELEMENTS IN LIST 2: ";
 cin>>sl2;
 for(int i=0;i<sl2;i++)
 {
 cout<<"ENTER ELEMENT OF LIST 2 : ";
 cin>>elem;
 l2.head=l2.insert(elem);
 }
 cout<<"ELEMENTS OF LIST 2 : ";
 l2.display();
 result(l1,l2);
}
