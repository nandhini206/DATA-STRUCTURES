/*Write a C++ program to read n records of book details stored in a library and do the given operations. ( A book can have multiple authors)
1) Read a name and find the number of books which has the name as substring in any of the authors’ name
2) Find all the books starting with a given string
3) List all the books that have more than one author */

#include <iostream>
#include<process.h>
using namespace std;

class books
{

 public:
 string bookname;
 float price;
 void loadbooks();
 void display();
int na;
string author[];
 //books(int n)
  //  {
    //    na = n;
   //    string author[na];
   // }
};

void books::loadbooks()
{
 cout<<"\nEnter Book Name:";
 cin>>bookname;
 cout<<"\nEnter No of Author:";
 cin>>na;
 for(int i = 0; i < na ; i++)
 {
  cout<<"\nEnter Author"<<i+1<<":";
 cin>>author[i];
 }
 cout<<"\nEnter Price:";
 cin>>price;
 cout<<"\n-------------\n";
}

void books::display()
{
 cout<<"\nName of the Book:"<<bookname;
 for(int i = 0; i < na ; i++)
 {
  cout<<"Author"<<i+1<<":"<<author[i]<<endl;
 }
 cout<<"\nPrice of the Book:"<<price;
 cout<<"\n-------------\n";
}

int main() {
 books ob[10];
 int ch, n;

 do{
  cout<<"\n**\n";
  cout<<"\n1.Load Books\n2.Display\n3.Display Books With more than 1 author\n4.Search for substring of author\n5.Search for books starting with substring\n6.exit";
  cout<<"\n\nEnter your Choice:";
  cin>>ch;
  switch(ch)
  {
  case 1: cout<<"Enter Number of Books:";
   cin>>n;
   for(int i=0;i<n;i++)
   ob[i].loadbooks();
   break;
  case 2:
   for(int i=0;i<n;i++)
   ob[i].display();
   break;
  case 3:

   string bname,aname;
   cout<<"Enter name of the Book:";
   cin>>bname;
   cout<<"Enter name of the Author:";
   cin>>aname;
   for(int i=0;i<n;i++)
   {if(ob[i].na > 1)
    if((bname).compare(ob[i].bookname) == 0 && (aname).compare(ob[i].author)== 0)
    {
     cout<<"\nBook Present\n\n";
     cout<<"\nName of the Book:"<<ob[i].bookname;
     for(int j = 0; j < na ; j++)
 {
  cout<<"Author"<<i+1<<":"<<author[i]<<endl;
 }
     cout<<"\nPrice of the Book:"<<ob[i].price;
     cout<<"\n-------------\n";
     break;
    }
    else
    {
     cout<<"Not Present!!";
     break;
    }
   }
   break;
   default: cout<<"Enter a valid choice!!";
  case 4:

   string aname;
   cout<<"Enter Substring to check:";
   cin>>aname;
   for(int i=0;i<n;i++)
   {
    if(strstr(ob[i].author.c_str(),aname.c_str()))
    {
     cout<<"\nBook Present\n\n";
     cout<<"\nName of the Book:"<<ob[i].bookname;
     for(int j = 0; j < na ; j++)
 {
  cout<<"Author"<<i+1<<":"<<author[i]<<endl;
 }
     cout<<"\nPrice of the Book:"<<ob[i].price;
     cout<<"\n-------------\n";
     break;
    }
    else
    {
     cout<<"Not Present!!";
     break;
    }
   }

  case 5:
    string aname;
   cout<<"Enter Substring to check:";
   cin>>aname;
   for(int i=0;i<n;i++)
   {
    if(strstr(ob[i].bookname.c_str(),aname.c_str()))
    {
     cout<<"\nBook Present\n\n";
     cout<<"\nName of the Book:"<<ob[i].bookname;
     for(int j = 0; j < na ; j++)
 {
  cout<<"Author"<<i+1<<":"<<author[i]<<endl;
 }
     cout<<"\nPrice of the Book:"<<ob[i].price;
     cout<<"\n-------------\n";
     break;
    }
  case 6:
    exit(1);
  }
 }while(1);
}
