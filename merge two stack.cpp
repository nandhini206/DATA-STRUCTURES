//MERGE TO STACK

#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int num;
    node* next;
};

class newstack
{
public:
    node* head;
    node* tail;

    newstack()
    {
        head=NULL;
        tail=NULL;
    }
};

newstack* create()
{
    newstack* stk=new newstack();
    return stk;
}

void push(int num,newstack* stk)
{
    node* temp=new node();
    temp->num=num;
    temp->next=stk->head;

    if (stk->head==NULL)
    {
    stk->tail=temp;
    }

    stk->head=temp;
}

int pop(newstack* ms)
{
    if (ms->head==NULL)
    {
        cout<<"stack underflow"<<endl;
        return 0;
    }
    else
    {
        node* temp=ms->head;
        ms->head=ms->head->next;
        int popped=temp->num;
        delete temp;
        return popped;
    }
}

void merge(newstack* ms1,newstack* ms2)
{
   if(ms1->head==NULL)
   {
       ms1->head=ms2->head;
       ms1->tail=ms2->tail;
       return;
   }

   ms1->tail->next=ms2->head;
   ms1->tail=ms2->tail;
}

void print(newstack* ms)
{
    node* temp=ms->head;
    while (temp!=NULL)
    {
        cout<<temp->num<<" ";
        temp=temp->next;
    }
}

int main()
{
    newstack* stack1=create();
    newstack* stack2=create();

    int n1,n2,temp;
    cout<<"enter sizes of both the stacks"<<endl;
    cin>>n1>>n2;
    cout<<"enter elements of 1st stack:"<<endl;
    for(int i=1;i<=n1;i++)
    {
      cin>>temp;
      push(temp,stack1);
    }
    cout<<"enter elements of 2nd stack:"<<endl;
    for(int i=1;i<=n2;i++)
    {
      cin>>temp;
      push(temp,stack2);
    }

    merge(stack1,stack2);
    cout<<"The result after merging both stacks:"<<endl;
    print(stack1);
}


