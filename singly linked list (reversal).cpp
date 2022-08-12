//Reverse a linked list.

#include<iostream>
using namespace std;
class node
{
    public:
    node*next;
    int data;
    node*prev;
};
node* reverse(node*head)
{
    node*cur=head;
   while(cur->next!=NULL)
   {
       cur=cur->next;
   }
   node*t=cur;
   while(t!=NULL)
   {
      node*x=t->prev;
      node*y=t->next;
      t->prev=y;
      t->next=x;
      t=t->next;
   }
   return cur;
}
void display(node*head)
{
   if(head==NULL)
        cout<<"THE LIST IS EMPTY";
   while(head!=NULL)
   {
       cout<<head->data<<" ";
       head=head->next;
   }
}
int main()
{
    node *head=NULL;
    node *second = NULL;
    node *third=NULL;
    node *four=NULL;
    head=new node();
    second=new node();
    third=new node();
    four=new node();
    head->data=3;
    head->next=second;
    head->prev=NULL;
    second->data=4;
    second->next=third;
    second->prev=head;
    third->data=5;
    third->next=four;
    third->prev=second;
    four->data=6;
    four->next=NULL;
    four->prev=third;
    head=reverse(head);
    display(head);
    return 0;
}
