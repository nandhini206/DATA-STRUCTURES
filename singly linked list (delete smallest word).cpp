/*Write a C++ program to store words in a linear linked list and delete the node that
contains the word of smallest length.*/

#include<iostream>
using namespace std;
class node
{
public:
 node*next;
 string data;
 int len;
 int c1;
};
node* insert(node*head)
 {
 int c1=0;
 string data;
 node*temp=head;
 cout<<"\nEnter data:";
 cin>>data;
 node*nn=new node();
 nn->data=data;
 nn->len=data.length();
 if(head==NULL)
 {
 head=nn;
 return head;
 }
 else
 {
 while(temp->next!=NULL)
 {
 temp=temp->next;
 }
 temp->next=nn;
 return head;
 }
 }
node* display2(node*head)
{
 int min;
 node*t1=head;
 min=t1->len;
 while(t1!=NULL)
 { if(min>t1->len)
 min=t1->len;
 t1=t1->next;
 }
 node*temp1=head;
 node*d=temp1;
 while(temp1!=NULL)
 {
 if(temp1->len==min)
 {
 temp1=temp1->next;
 delete(d);
 }
 cout<<temp1->data<<" ";
 temp1=temp1->next;
 }
 return head;
}
void display(node*head)
{
 node*t=head;
 while(t!=NULL)
 {
 cout<<t->data<<" ";
 t=t->next;
 }
}
int main()
{
 node*head=NULL;
 node x;
 int c1,o;
 node*ins=NULL;
 int c,d,len;
 int n,pos,pos1;
 string data;
 cout<<"\n1.insert\n2.del";
 while(c!=0)
 {
 cout<<"\nEnter:";
 cin>>c;
 switch(c)
 {
 case 1:
 ins=insert(ins);
 display(ins);
 break;
 case 2:
 ins=display2(ins);
 break;
}
 }
}
