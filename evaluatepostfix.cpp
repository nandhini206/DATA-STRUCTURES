 //TO EVALUATE A POSTFIX
//EXPRESSION

#include<bits/stdc++.h>
using namespace std;
float scan(char ch)
{
int value;
value = ch;
return float(value-'0');
}
int isOperator(char ch)
{
if(ch == '+'|| ch == '-'|| ch == '*'|| ch == '/' || ch == '^')
return 1;
else
return -1;
}
int isOperand(char ch){
if(ch >= '0' && ch <= '9')
return 1;
return -1;
}
float operation(int a, int b, char op)
{
if(op == '+')
return b+a;
else if(op == '-')
return b-a;
else if(op == '*')
return b*a;
else if(op == '/')
return b/a;
else if(op == '^')
return pow(b,a);
}
float postfix(string post)
{
int a, b;
stack<float> s;
int l=post.length();
for(int i=0;i<l;i++)
{
char ch=post.at(i);
if(isOperator(ch)!=-1)
{
a=s.top();
s.pop();
b=s.top();
s.pop();
s.push(operation(a,b,ch));
}else if(isOperand(ch)>0){
s.push(scan(ch));
}
}
return s.top();
}
int main()
{
string post;
cout<<"ENTER A POSTFIX EXPRESSION : ";
cin>>post;
cout <<"The Answer is "<<postfix(post);
}
