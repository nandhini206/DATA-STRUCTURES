//Remove the duplicate characters from the third string.

#include<stdio.h>
#include<string.h>
int main()
{
 int i, n = 1,x =0,j,l,k;
 char A[25],B[25];
 char C[50] = " ";
 printf("Enter String A: ");
 scanf("%s",A);
 printf("Enter String B: ");
 scanf("%s",B);
 if(strlen(A)>strlen(B))
 {
 x = strlen(B);
 }
 else
 {
 x = strlen(A);
 }
 for ( i = 0; i < x; i++)
 {
 C [n]= A[i];
 n++;
 C [n]+= B[i];
 n++;
 }
 if(strlen(A)>strlen(B))
 {
 while (i < strlen(A))
 {
 C[n] = A[i];
 i++;
 n++;
 }
 }
 else
 {
 while (i < strlen(B))
 {
 C[n] = B[i];
 i++;
 n++;
 }
 }
 for(l=0;l<strlen(C);l++)
 {
 for(j=l+1;C[j]!='\0';j++)
 {
 if(C[j]==C[l])
 {
 for(k=j;C[k]!='\0';k++)
 {
 C[k]=C[k+1];
 }
 }
 }
 }
 printf("The Concatenation of Strings A and B is: %s\n",C);
 return 0;
}
