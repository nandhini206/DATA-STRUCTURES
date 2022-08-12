//to read a paragraph and find the count of words
//present in the paragraph.

#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
void countt()
{
 char a[1000];
 int count=0;
 cout<<"\nEnter a paragraph: ";
 gets(a);
 for(int i=0;i<strlen(a);i++)
 {
 if(a[i]==' '||a[i]=='. '||a[i]==', ')
 {
 count++;
 }
 }
 cout<<"\nCount= "<<count;
}
int main()
{
 countt();
}
