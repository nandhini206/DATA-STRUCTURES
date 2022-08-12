//TO CREATE A QUEUE AND
//PERFORM OPERATIONS ( ENQUEUE,DEQUEUE,DISPLAY )
 //USING ARRAYS

#include <iostream>
using namespace std;
#define SIZE 5
class QUEUE
{
public:
int q[SIZE];
int front;
int rear;
void insertQ(int);
void deleteQ();
void displayQ();
QUEUE()
{
front=-1;
rear=-1;
}
};
void QUEUE :: insertQ(int elem){
if ((front == 0 && rear==SIZE-1)||(front==rear+1))
{
cout << "FULL QUEUE\n";
return;
}
if (rear == -1)
front = 0;
if(rear==SIZE-1)
rear=0;
else
rear = rear + 1;
q[rear] = elem;
}
void QUEUE::deleteQ()
{
if (front == rear)
{
front = -1;
rear = -1;
}
else if(front==SIZE-1)
front=0;
else
front = front + 1;
}
void QUEUE :: displayQ(){
int f = front;
int r = rear;
if(f==-1)
{
cout<<"EMPTY QUEUE!";
return;
}
if(f <= r){
while(f <= r){
cout << q[f] << " ";
f++;
}
}
else{
while(f <= (SIZE - 1)){
cout << q[f] << " ";
f++;
}
f = 0;
while(f <= r){
cout << q[f] << " ";
f++;
}
}
cout << endl;
}
int main()
{
cout<<" QUEUE OPERATIONS "<<endl;
int choice, elem;
QUEUE q;
cout << "1.Enqueue\n";
cout << "2.Dequeue\n";
cout << "3.Display\n";
cout << "4.Exit\n";
do{
cout << "\nEnter your choice : ";
cin >> choice;
switch(choice){
case 1:
cout << "Enter element:";
cin >> elem;
q.insertQ(elem);
q.displayQ();
break;
case 2:
q.deleteQ();
q.displayQ();
break;
case 3:
q.displayQ();
break;
}
}while(choice != 4);
return 0;
}
