/*Implement a set data structure of movie details with a C++ program with two different
sets namely Comedy and Action movies. Find the Union, difference and intersection of
these sets with a C++ Program.*/

#include<iostream>
using namespace std;
class set
{
public:
void union_set(string u1[],string u2[],int s1,int s2){
cout<<"Union: ";
for(int i=0;i<s1;i++)
cout<<u1[i]<<" ";
for(int j=0;j<s2;j++)
 {
int a;
a=0;
for(int i=0;i<s1;i++)
{
if(u1[i]==u2[j])
{
a=1;
break;}
}
if(a!=1)
cout<<u2[j]<<" ";}
}
