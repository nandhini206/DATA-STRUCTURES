/*Rotating an array left and right by a given number k
and display the results and
 also find whether the string is an anagram.*/

#include<iostream>
#include<algorithm>
using namespace std;
void leftrotate(string &s, int k)
{
	reverse(s.begin(), s.begin()+k);
	reverse(s.begin()+k, s.end());
	reverse(s.begin(), s.end());
}
void rightrotate(string &s, int k)
{
leftrotate(s, s.length()-k);
}
bool areAnagram(string s1, string s2)
{

int n1 = s1.length();
int n2 = s2.length();

if (n1 != n2)
return false;
sort(s1.begin(), s1.end());
sort(s2.begin(), s2.end());
for (int i = 0; i < n1; i++)
if (s1[i] != s2[i])
{
return false;
}
return true;
}
int main()
{
	string s1 = "Data Structures";
	leftrotate(s1, 2);
	cout << s1 << endl;
	string s2 = "Data Structures";
	rightrotate(s2, 2);
	cout << s2 << endl;
  if (areAnagram(s1,s2))
     cout<<"Yes,they are anagram.";
  else
    cout <<"No,they are not";
return 0;
}
