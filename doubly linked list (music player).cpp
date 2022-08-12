/*doubly linked list to simulate the given operations of a
music player (Play next, Play previous, Play from beginning, Delete the current song,
Insert a song)*/

#include<iostream>
using namespace std;
class node
{
public:
 string mname;
 node* next;
 node* prev;
};
class mplayer
{
 public:
 node* head;
 node* current;
 mplayer()
 {
 head = NULL;
 current = NULL;
 }
 void inserttrack(string track)
 {
 node*nn=new node();
 nn->mname=track;
 nn->next=NULL;
 nn->prev=NULL;
 if(head==NULL)
 {
 head=nn;
 }
 else
 {
 node*t=head;
 while(t->next!=NULL)
 t=t->next;
 t->next=nn;
 nn->prev=t;
 }
 current=nn;
 }
 void play_next()
 {
 if (current==NULL)
 return;
 if(current->next!=NULL)
 current=current->next;
 else
 current=head;
 }
 void play_prev()
 {
 if (current==NULL)
 return;
 if(current->prev!=NULL)
 current=current->prev;
 else
 {
 while(current->next!=NULL)
 {
 current = current->next;
 }
 }
 }
 void play_last()
 {
 if (current==NULL)
 return;
 while(current->next!=NULL)
 {
 current = current->next;
 }
 }
 void play_first()
 {
 if (current==NULL)
 return;
 current = head;
 }
 void deletetrack()
 {
 if(head==NULL)
 {
 cout<<"No song to delete\n";
 return;
 }
 else if(head->next==NULL)
 {
 delete(current);
 current=NULL;
 head=NULL;
 cout<<"The only song in play list deleted\n";
 return;
 }
 else if(current->next==NULL)
 {
 current->prev->next=NULL;
 delete(current);
 cout<<"Last song in play list deleted\n";
 current=head;
 }
 else
 {
 node* x=current->next;
 node* y=current->prev;
 x->prev=y;
 if(y!=NULL) y->next=x;
 if(head==current)
 head=x;
 delete(current);
 current=x;
 cout<<"The song is deleted from play list\n";
 }
 }
 void display()
 {
 if(current==NULL)
 cout<<"Playlist Empty";
 else
 cout<<"Now playing: "<<current->mname;
 }
};
 int main()
 {
 int ch;
 mplayer ob;
 string track;
 while(ch!=7)
 {
 cout<<"\n\n1.Play from beginning";
 cout<<"\n2.Play last";
 cout<<"\n3.Play next";
 cout<<"\n4.Play previous";
 cout<<"\n5.Delete the current song";
 cout<<"\n6.Insert a song";
 cout<<"\n7.Exit\n\n";
 cout<<"Enter choice: ";
 cin>>ch;
 switch(ch)
 {
 case 1:
 ob.play_first();
 ob.display();
 break;
 case 2:
 ob.play_last();
 ob.display();
 break;
 case 3:
 ob.play_next();
 ob.display();
 break;
 case 4:
 ob.play_prev();
 ob.display();
 break;
 case 5:
 ob.deletetrack();
 ob.display();
 break;
 case 6:
 cout<<"Enter song name: ";
 cin>>track;
 ob.inserttrack(track);
 ob.display();
 break;
 case 7:
 cout<<"Exiting...";
 break;
 }
 }
 return 0;
 }
