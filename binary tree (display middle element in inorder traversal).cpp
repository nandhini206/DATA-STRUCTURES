/*construct a Binary Tree and displays exactly the middle
element in an inorder traversal of the tree.*/

#include <iostream>
using namespace std;
class node {
public:
int data;
node* left;
node* right;
node(int val)
{
 data=val;
 left=NULL;
 right=NULL;
}
};
int countNodes(node* root)
{
 if(root==NULL)
 return 0;
 else
 return countNodes(root->left) + countNodes(root->right) + 1;
}
void inorder(node* root)
{
 if(root!=NULL)
 {
 inorder(root->left);
 cout<<root->data<<" ";
 inorder(root->right);
 }
}
//to print nth node
void NthInorder(node* root, int n)
{
 static int count = 0;
 if (root == NULL)
 return;
 if (count <= n) {
 NthInorder(root->left, n);
 count++;
 if (count == n)
 cout<<root->data;
 NthInorder(root->right, n);
 }
}
int main()
{
int d;
node* root = new node(1);
root->left = new node(2);
root->right = new node(3);
root->left->left = new node(4);
root->left->right = new node(5);
root->right->left = new node(9);
root->right->right = new node(8);
root->left->left->left = new node(6);
root->left->left->right = new node(7);
cout<<"Inorder traversal: ";
inorder(root);
int count = countNodes(root);
cout<<"\nMiddle element is: ";
if(count%2==1)
 NthInorder(root,(count/2)+1);
else
 NthInorder(root,(count/2));
cout<<endl;
return 0;
}
