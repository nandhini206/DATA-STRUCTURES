//Linear probing
#include<iostream>
#include<stdlib.h>
#define n 5

using namespace std;
class hashtable
{
public:
     int a[n];
    hashtable()
    {
     for(int i=0;i<n;i++)
     a[i]=0;
    }
    void insertion(int data)
    {
      int index;
      if(a[data%n]==0)
        a[data%n]=data;
      else
      {
          index=data%n;
          int p=index;
          while(true)
          {
              if(a[index]==0) //0th pos found
              {
                  a[index]=data; //0 la enna elem
                  break;
              }
              else if(index==n-1) // thiryppi index 0 ku
              {
                  index=0;
              }
              else if(index==p-1) //data is printed then index full
              {
                  cout<<"Hashtable Full!!Couldn't insert "<<data<<endl;
                  return;
              }
              else
                index++;

          }
      }
    }
     void searchhash(int data)
    {
        int p=data%n; //in insert index=data%n; int p=index;
       for(int i=p;i<n;i++)
       {
        if(a[i]==data)
        {
            cout<<data<<" found in position "<<i;
            return;
        }
        if(i==n-1)
            i=0; //index=0
         if(i==p-1)
         {
            cout<<data<<" not found!!";
            return;
         }
         }
         }
    void display()
    {
        for(int i=0;i<n;i++) //print n scan in array
        cout<<a[i]<<" ";
    }
};
int main()
{
    int data,ch;
    hashtable ob;
    while(true)
    {
        cout<<"\n1-Insert data \n2-Search data in \n3-display data \n4-Exit \nEnter your choice:";
        cin>>ch;
        switch(ch)
        {
        case 1:
            cout<<"Enter an element : ";
            cin>>data;
             ob.insertion(data);
             break;
        case 2:
            cout<<"Enter an element to search : ";
            cin>>data;
            ob.searchhash(data);
            break;
        case 3:
            cout<<"Elements in hashtable:\n";
            ob.display();
            break;
        case 4:
            cout<<"Program ends!!";
            exit(0);
        }
    }
}
