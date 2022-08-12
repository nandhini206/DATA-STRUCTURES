//Intersection of two linked list.

#include<iostream>
using namespace std;
class node
{
    public:
    node*next;
    int data;
};
void intersection(node*head,node*head2)
{
  node*temp=head;
  while(head!=NULL)
  {
      node*cur=head2;
      while(cur!=NULL)
      {
          if(cur->data==head->data)
            cout<<head->data;
          cur=cur->next;
      }
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
    second->data=4;
    second->next=third;
    third->data=5;
    third->next=four;
    four->data=6;
    four->next=NULL;
    node*head2=new node();
    node*second2=new node();
    node*third2=new node();
    node*four2=new node();
    head2->data=1;
    head2->next=second2;
    second2->data=8;
    second2->next=third2;
    third2->data=4;
    third2->next=four2;
    four2->data=10;
    four2->next=NULL;
    intersection(head,head2);
    return 0;
}
