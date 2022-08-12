//Insert into a linked list in sorted order.

#include<iostream>
using namespace std;
class node
{
    public:
    node*next;
    int data;
    node*prev;
};
node *insort(node*head,int data)
{
    node*nn=new node();
    nn->data=data;
    nn->next=NULL;
    nn->prev=NULL;
    if(head==NULL)
        return nn;
    else if(head->data>=data)
    {
        head->prev=nn;
        nn->next=head;
        head=nn;
        return head;
    }
    else if(head->data<data)
    {
        node*cur=head;
        node*p;
        while(cur!=NULL&&cur->data<nn->data)
        {
            p=cur;
            cur=cur->next;
        }
        nn->next=p->next;
        nn->prev=p;
        p->next=nn;
        if(cur!=NULL)
            cur->prev=nn;
        return head;
    }
}
void display(node*head)
{
    if(head==NULL)
        cout<<"LIST EMPTY";
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}
int main()
{
    int n,data;
    cout<<"ENTER NO OF NODE : ";
    cin>>n;
    node*head=NULL;
    for(int i=0;i<n;i++)
    {
        cout<<"ENTER ELEMENT : ";
        cin>>data;
        head=insort(head,data);
    }
    display(head);
    return 0;
}
