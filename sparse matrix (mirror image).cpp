 /*to implement sparse matrix using array of row chains. Write C++
program to store the mirror image of a sparse matrix on another sparse matrix
0 1 0 0     0 0 1 0
0 0 0 3     3 0 0 0
2 4 0 0     0 0 4 2*/

#include<iostream>
using namespace std;
class node
{
public:
 int data;
 int col;
 node*next;
};
class sparse
{
public:
 int nrow;
 node*a[30];
 sparse(int n)
 {
 nrow=n;
 for(int i=0;i<n;i++)
 a[i]=NULL;
 }
 void insert(int,int,int);
 void display();
 void mirror(sparse,int);
};
void sparse::insert(int row,int col,int data)
{
 node*nn=new node();
 nn->data=data;
 nn->col=col;
 nn->next=NULL;
 if(a[row]==NULL)
 {
 a[row]=nn;
 return;
 }
 node*temp=a[row];
 while(temp->next!=NULL)
 temp=temp->next;
 temp->next=nn;
}
void sparse::display()
{
 for(int i=0;i<nrow;i++)
 {
 node*temp=a[i];
 while(temp!=NULL)
 {
 cout<<temp->data<<" ";
 temp=temp->next;
 }
 cout<<endl;
 }
}
void sparse::mirror(sparse s2,int ncol)
{
 int newcol;
 for(int i=0;i<nrow;i++)
 {
 node*temp=a[i];
 while(temp!=NULL)
 {
 newcol=(ncol-temp->col-1);
 cout<<"newcol : "<<newcol;
 s2.insert(i,newcol,temp->data);
 s2.display();
 temp=temp->next;
 }
 }
}
int main()
{
 int nrow,col,row,data,nz,ncol;
 cout<<"ENTER NO OF ROWS : ";
 cin>>nrow;
 cout<<"ENTER NO OF NON ZERO ELEMENTS : ";
 cin>>nz;
 cout<<"ENTER NO OF COLOUMNS : ";
 cin>>ncol;
 sparse s1(nrow);
 for(int i=0;i<nz;i++)
 {
 cout<<"ENTER ROW,COLOUMN,DATA : ";
 cin>>row>>col>>data;
 s1.insert(row,col,data);
 }
 s1.display();
 sparse s2(nrow);
 s1.mirror(s2,ncol);
 cout<<"\nMIRROR MATRIX : \n";
 s2.display();
}
