#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int maxItr(int arr[],int n)
{
    int aju=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>=aju)
        {
            aju=arr[i];
        }
    }
    return aju;
}

int maxRec(int arr[],int n,int i)
{  
    if(i==n-1)
    return arr[i];
    int abhi=maxRec(arr,n,i+1);
    if(arr[i]>abhi)
    return arr[i];
    else
    return abhi;
}

int main()
{   int n;
    cout<<"Enter size of array: "<<endl;
    cin>>n;
    cout<<"Enter array elements: "<<endl;
    int arr[10000];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<"The maximum element present in array by iterative method is: "<<maxItr(arr,n)<<endl;
    cout<<"The maximum element present in array by recursive method is: "<<maxRec(arr,n,0)<<endl;
    
    return 0;
    
    
}