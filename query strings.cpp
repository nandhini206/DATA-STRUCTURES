/*There is a collection of input strings and a collection of query strings.
For each query string, determine how many times it occurs in the list of input strings.
Return an array of the results.

Example
Strings = [‘ab’, ‘ab’, ‘abc’]
Queries = [‘ab’,’abc’,’bc’]

There are 2 instances of 'a,b’, 1  of ‘abc’ and 0  of 'bc'.
For each query, add an element to the return array,  results = [2,1,0].*/

#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char string[100][100],queries[100][100];
    int i,s,q,j,count=0;
    cout<<"ENTER NO OF INPUT STRINGS : ";
    cin>>s;
    cout<<"ENTER INPUT STRINGS : ";
    for(i=0;i<s;i++)
        cin>>string[i];
    cout<<"ENTER NO OF QUERY STRINGS : ";
    cin>>q;
    int c[q];
    cout<<"ENTER QUERY STRINGS : ";
    for(i=0;i<q;i++)
    cin>>queries[i];
    for(i=0;i<q;i++)
    {
        count=0;
        for(j=0;j<s;j++)
        {
            if(strcmp(queries[i],string[j])==0)
                count++;

        }
         c[i]=count;
    }
    cout<<"OCCURENCE OF QUERY STRINGS : [";
    for(i=0;i<q;i++)
    cout<<c[i]<<",";
    cout<<"]";
    return 0;
}



