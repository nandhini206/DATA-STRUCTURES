/*Write a C++ program to delete every nth node of a circular linked list getting n from
the user every time.*/

#include<iostream>
using namespace std;
class node
{
 public:
 int data;
 node* next;
 node* prev;
};
void display(node* head)
{
 cout<<"LIST: ";
 if(head==NULL)
 {
 cout<<"Empty";
 return;
 }
 node* h = head;
 do
