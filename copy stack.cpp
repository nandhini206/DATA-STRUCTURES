//IMPLEMENT STACK USING ARRAY. COPY ONE STACK TO ANOTHER:

#include<iostream>
using namespace std;
#define max 50
int stack1[max],top1=-1;
int stack2[max],top2=-1;
int temp[max],t=-1;
void create()
{
char ch;
do
{
top1++;
cout<<"Enter element of stack 1: ";
cin>>stack1[top1];
cout<<"\nContinue(y to copy to stack 2 / n simply exit) \n";
cin>>ch;
}while(ch=='y' || ch=='Y');
}

void traverse1()
{
int i;
cout<<"First Stack is :\n";
for(i=top1;i>=0;i--){
cout<<stack1[i]<<" ";
}
}
void traverse2()
{
int i;
cout<<"\nSecond Stack is :\n";
for(i=top2;i>=0;i--)
{
cout<<stack2[i]<<" ";
}
}

void copys() {
int i;
for(i=top1;i>=0;i--) {
t++;
temp[t]=stack1[i];
}
for(i=t;i>=0;i--) {
top2++;
stack2[top2]=temp[i];
}
}
int main() {
create();
traverse1();
copys();
traverse2();
}
