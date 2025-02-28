#include <iostream>
using namespace std;
class Solution
{
    public:
    int removeDuplicate( int arr[])
    {
        int n=sizeof(arr)/sizeof(arr[0]);
        if(n==0)
        {
            return 0;
        }
        int j=0;
        for (int i=0;i<n;i++)
        {
            if(arr[i]!=arr[i+1])
            {
                arr[j++]=arr[i];
            }
        }
        arr[j++]=arr[n-1];
    }
}