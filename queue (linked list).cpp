//TO CREATE A QUEUE TO
//PERFORM OPERATIONS ( ENQUEUE,DEQUEUE,DISPLAY )
// USING LINKED LIST.

#include <iostream>
using namespace std;
class Node{
public:
int data;
Node* next;
};
void Display(Node* n){
if (n == NULL){
cout << "Queue is Empty";
return;
}
while (n != NULL){
cout << n->data << " ";
n = n->next;
}
cout << endl;
}
Node* EnQueue(Node*frontt, int new_data)
{
Node* new_node = new Node();
Node *rear = frontt;
new_node->data = new_data;
new_node->next = NULL;
if (frontt == NULL){
frontt = new_node;
cout<<"Element inserted.";
Display(frontt);
return frontt;
}
while (rear->next != NULL)
rear = rear->next;
rear->next = new_node;
cout<<"Element inserted.";
Display(frontt);
return frontt;
}
Node* DeQueue(Node* frontt)
{
Node* temp = frontt;
if (temp == NULL){
cout << "Queue is Empty";
return frontt;
}
frontt= temp->next;
delete temp;
cout<<"Element deleted";
Display(frontt);
return frontt;
}
int main()
{
cout<<" QUEUE USING LINKED LIST "<<endl;
Node *frontt = NULL;
int ch, a;
cout << "1.Insert \n";
cout << "2.Delete \n";
cout << "3.Display \n";
cout << "4.Exit\n";
do{
cout << "\nEnter your choice from 1 to 4 : ";
cin >> ch;
switch(ch){
case (1):
cout << "Enter the value to be insert to the Queue : ";
cin >> a;
frontt=EnQueue(frontt,a);
Display(frontt);
break;
case (2):
frontt=DeQueue(frontt);
Display(frontt);
break;
case (3):
Display(frontt);
break;
case (4):
break;
default:
cout << "Entered a wrong choice";
}
}while(ch != 4);
return 0;
}
