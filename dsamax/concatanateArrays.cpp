#include <iostream>
using namespace std;

class Solution 
{
public:
    int concatenateArray(int arr1[],int n1,int arr2[],int n2,int arr3[],int maxSize) 
    {
        if(n1 + n2 > maxSize) 
        {
            return -1;
        }
        for (int i=0;i<n1;i++)
        {
            arr3[i]=arr1[i];
        }
        for(int i=0;i<n2;i++) {
            arr3[n1+i]=arr2[i];
        }
        return n1+n2;
    }
};
int main() 
{
    Solution s;
    int arr1[]={1,2,3};
    int arr2[]={4,5,6,7};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    int maxSize=n1+n2;
    int arr3[maxSize];
    int newSize=s.concatenateArray(arr1, n1, arr2, n2, arr3, maxSize);
    if(newSize!=-1) {
        cout<<"Concatenated array: "<<endl;
        for (int i=0;i<newSize;i++) 
        {
            cout<<arr3[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}