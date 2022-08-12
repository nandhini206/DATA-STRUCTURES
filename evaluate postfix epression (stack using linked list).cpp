/* use a stack with linked lists to evaluate a postfix expression.
The postfix expression shall contain numbers of one digit, two digits and three digits*/

#include <iostream>
#include<stack>
#include<string>
using namespace std;
int main()
{
 stack <float> s;
 string postfix;
 int flag=0,digit,elem,result,s1,s2,value;
 char ch;
do
 {
 cout<<"\nEnter a postfix expression:";
 getline(cin,postfix);
 for(int i=0;i<postfix.length();i++)
 {
 if(postfix[i]>='0'&& postfix[i]<='9')
 {
 if(flag==0)
 {
 s.push(postfix[i]-'0');
 flag=1;
 }
 else if(flag==1)
 {
 digit=s.top();
 s.pop();
 elem=((digit*10)+(postfix[i]-'0'));
 s.push(elem);
 }
 }
 else if(postfix[i]==' ')
 {
 flag=0;
 }
 else
 {
 flag=0;
 s1=s.top();
 s.pop();
 s2=s.top();
 s.pop();
 switch(postfix[i])
 {
 case '+':
 result=s2+s1;
 s.push(result);
 break;
 case '-':
 result=s2-s1;
 s.push(result);
 break;
 case '*':
 result=s2*s1;
 s.push(result);
 break;
 case '/':
 result=s2/s1;
 s.push(result);
 break;
 }
 }
 }
 value=s.top();
 cout<<"Output:"<<value;
 s.pop();
 cout<<"\nDo u want to continue(y/n):";
 cin>>ch;
 cin.ignore();
 }while(ch=='y');
 return 0;
}
