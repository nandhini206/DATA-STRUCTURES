/*to store your friends� details in a queue. Delete the queue based
on their date of birth so that the data gets deleted in the order of the date.*/

#include<iostream>
using namespace std;
class node
{
public:
 string name;
 int date,month,year;
 node*next;
};
class queue
{
 public:
 node* f;
 queue()
 {
 f=NULL;
 }
void insertq()
{
 node*nn=new node();
 cout<<"Enter name of your frnd : ";
 cin>>nn->name;
 cout<<"Enter "<<nn->name<<"'s Date of Birth : ";
 cin>>nn->date>>nn->month>>nn->year;
 if((f==NULL)|| f->date > nn->date)
 {
 nn->next=f;
 f=nn;
 }
 else
 {
 node*curr=f;
 while(curr!=NULL)
 {
 if(curr->date < nn->date)
 break;
 else
 curr=curr->next;
 }
 node*p=curr->next;
 curr->next=nn;
 nn->next=p;
 }
}
void deletee()
{
 node*temp=f->next;
 delete(f);
 f=temp;
}
void display()
{
 if(f==NULL)
 cout<<"QUEUE EMPTY";
 while(f!=NULL)
 {
 cout<<f->name<<" "<<f->date<<"."<<f->month<<"."<<f->year<<endl;
 node*curr=f;
 f=f->next;
 }
}
};
int main()
{
 queue n;
 cout<<"****"<<endl;;
 cout<<"DATE OF BIRTH DELETION"<<endl;
 cout<<"****"<<endl;
 cout<<endl<<endl<<"1-ADD FRND DETAILS \n2-Delete\n3-DISPLAY DETAILS\n";
 int ch;
 while(ch)
 {
 cout<<"ENTER YOUR CHOICE : ";
 cin>>ch;
 switch(ch)
 {
 case 1:
 n.insertq();
 break;
 case 2:
 n.deletee();
 break;
 case 3:
 n.display();
 break;
 }
 }
 return 0;
}
