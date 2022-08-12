//List all the words that contains any of the vowels.

#include<iostream>
#include<string.h>
using namespace std;
int main()
{
 string st,str="";
 int i,l,length=0,k;
 cout<<"Enter a sentence : ";
 getline(cin,st);
 st=st+" ";
 l=st.length();
 for(i=0;i<l;i++)
 {
 char ch=st.at(i);
 if(ch!=' ' )
 {
 str=str+ch;
 length++;
 }
 else
 {
 for(k=0;k<length;k++)
 {
 char c=str.at(k);
 if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
 {
 cout<<str<<endl;
 break;
 }
 }
 str="";
 length=0;
 }
 }
}
