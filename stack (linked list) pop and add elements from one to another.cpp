 /* maintain two stacks using linked list. Until the end of any of the
two stacks, pop one element from both the stacks, add them and insert the result to an
array.*/

#include<iostream>
using namespace std;
class node
{
 public:
 int data;
 node*next;
};
class stack
{
public:
 node*head;
 stack()
 {
 head=NULL;
 }
 void push(int);
 int pop();
 int isempty();
 void display();
};
void stack::push(int elem)
{
 node*nn=new node();
 nn->data=elem;
 nn->next=head;
 head=nn;
}
int stack::pop()
{
 int a;
 node*temp=head;
 a=temp->data;
 head=head->next;
 delete temp;
 return a;
}
int stack::isempty()
{
 if(head==NULL)
 return 1;
 else
 return -1;
}
void stack::display()
{
 node*temp=head;
 while(temp!=NULL)
 {
 cout<<temp->data<<" ";
 temp=temp->next;
 }
}
void result(stack s1,stack s2,int ss1,int ss2)
{
 int min,a,b,c;
 cout<<ss1;
 cout<<"\n"<<ss2;
 if(ss1>ss2)
 min=ss2;
 else
 min=ss1;
 int result[min];
 for(int i=0;i<min;i++)
 {
 a=s1.pop();
 b=s2.pop();
 c=a+b;
 result[i]=c;
 }
 cout<<"\nTHE ELEMENTS OF ARRAY ARE : ";
 for(int i=0;i<min;i++)
 cout<<result[i]<<" ";
}
int main()
{
 stack s1,s2;
 int ss1,ss2,elem;
 cout<<"ENTER STACK 1 SIZE : ";
 cin>>ss1;
 for(int i=0;i<ss1;i++)
 {
 cout<<"ENTER ELEMENTS OF STACK 1 : ";
 cin>>elem;
 s1.push(elem);
 }
 cout<<"\nELEMENTS OF STACK 1 : ";
 s1.display();
 cout<<"ENTER STACK 2 SIZE : ";
 cin>>ss2;
 for(int i=0;i<ss2;i++)
 {
 cout<<"ENTER ELEMENTS OF STACK 2 : ";
 cin>>elem;
 s2.push(elem);
 }
 cout<<"\nELEMENTS OF STACK 2 : ";
 s2.display();
 result(s1,s2,ss1,ss2);
}
