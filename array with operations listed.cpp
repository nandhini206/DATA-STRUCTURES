/*Given an integer array, find the contiguous subarray of k elements,
 which has the largest sum and return its sum.*/

#include <iostream>
using namespace std;
int maxSum(int arr[], int n, int k)
{
    if (n < k)
    {
       cout << "Invalid";
       return -1;
    }
    int res = 0;
    for (int i=0; i<k; i++)
       res += arr[i];
    int cur = res;
    for (int i=k; i<n; i++)
    {
       cur += arr[i] - arr[i-k];
       res = max(res, cur);
    }
    return res;
}
int main()
{
    int n,k;
    cout << "Enter size of array : ";
    cin >> n;
    int arr[n] ;
    cout << "Enter elements of array : ";
    for(int i = 0 ; i < n ; i++)
    {
     cin >> arr[i];
    }
    cout << "Enter value of K  : ";
    cin >> k;
    cout << maxSum(arr, n, k);
    return 0;
}
