/*construct a Binary Tree of employee details and print all
the employee’s name drawing the highest salary.*/

#include <iostream>
using namespace std;
class node {
public:
string name;
float sal;
node* left;
node* right;
node(string emp_name,float salary)
{
 name=emp_name;
 sal=salary;
 left=NULL;
 right=NULL;
}
};
void inorder(node* root)
{
 if(root!=NULL)
 {
 inorder(root->left);
 cout<<root->name<<"\t\t"<<root->sal<<endl;
 inorder(root->right);
 }
}
float searchMaxSalary(node* root)
{
if(root==NULL)
 return 0;
float max_sal = root->sal;
if(root->sal>max_sal)
 max_sal = root->sal;
float L = searchMaxSalary(root->left);
float R = searchMaxSalary(root->right);
if (L > max_sal)
 max_sal = L;
if (R > max_sal)
 max_sal = R;
return max_sal;
}
void PrintEmp(node* root,float max_sal)
{
if(root!=NULL)
 {
 if(root->sal==max_sal)
 cout<<root->name<<endl;
 PrintEmp(root->left,max_sal);
 PrintEmp(root->right,max_sal);
 }
}
int main()
{
node* root = new node("Neeraj",9000);
root->left = new node("Chopra",8000);
root->right = new node("Sindhu",6000);
root->left->left = new node("Saina",9000);
root->left->right = new node("Mukesh",5000);
cout<<"EMP NAME\tSALARY\n";
inorder(root);
float MaxSal = searchMaxSalary(root);
cout<<"\nMaximum Salary = "<<MaxSal<<endl;
cout<<"\nEmployees with maximum salary "<<MaxSal<<" are: \n";
PrintEmp(root,MaxSal);
return 0;
}
Wri
