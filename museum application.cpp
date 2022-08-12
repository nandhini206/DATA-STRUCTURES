/*Assume a museum that allows persons from 9:00 to 18:00 hours.
There are supervisors who handle the huge crowd.
 Each supervisor of the museum fixed number of duty hours to work.
There can be multiple or no crew members at work at any given hour of the day.
Any supervisor allows only persons within the age range of 10 to 70.  But if there are no supervisors during the visit, any one can enter.
 Given the schedule of work of the supervisors, you have to answer for the entry of M persons.
  For each person entering into the museum, the time of entry and age of person are entered.
   Develop a C++ application to answer if the person will be allowed to enter the museum or not.

Input:
No. of supervisors and no. of persons entering
Start and end time of each supervisor work in separate lines
Age and entering time for each person entering into the museum

Output:
Yes or No for the no. of persons entering

E.g.
2   4    ( two managers and 4 persons entering)
10  14   (start and end time of first manager)
15   18    (start and end time of secondmanager)
80   9    (Age and entering time of 1st person)
7   11    (Age and entering time of 2nd person)
14  15   (Age and entering time of 3rd person)
75   17  (Age and entering time of 4th person)

Output:
Yes
No
Yes
No*/

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class crew
{
   public:
   int start;
   int last;
};
class person
{
    public:
    int age;
    int entering_time;
};
int main()
{
int Manager,peoplevisiting;
cout<<"Enter the no.of supervisors and no.of persons entering:";
cin>>Manager>>peoplevisiting;
crew obj1[Manager];
for(int i=0;i<Manager;i++)
 {
  cout<<"enter the starting time:";
  cin>>obj1[i].start;
  cout<<"enter the last time:";
  cin>>obj1[i].last;
 }
person obj2[peoplevisiting];
int flag = 0;
for(int i=0;i<peoplevisiting;i++)
{
  cout<<"Enter the age of the person:";
  cin>>obj2[i].age;
  cout<<"Enter the entering time of the person:";
  cin>>obj2[i].entering_time;
  for(int j=0;j<Manager;j++)
    {
      if(obj1[j].start <= obj2[i].entering_time && obj2[i].entering_time <= obj1[j].last)
        {
          if(obj2[i].age<10||obj2[i].age>70)
          {
          cout<<"NO"<<endl;
          flag = 1;
          break;
          }
        }
    }
 if(flag == 0)
  {
    cout<<"YES"<<endl;
  }
 {
   flag = 0;
 }
}
}
