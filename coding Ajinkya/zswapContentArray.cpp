#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void change(int *arr1,int *arr2,int n)
{
    for(int i=0;i<n;i++)
    {    int temp=0;
         temp=*(arr1+i);
        *(arr1+i)=*(arr2+i);
        *(arr2+i)=temp;
        
    }
}

int main()
{
    int n;
    cout<<"Enter the size of array: "<<endl;
    cin>>n;
    cout<<"Enter first array elements: "<<endl;
    int arr1[10000];
    int arr2[10000];
    for(int i=0;i<n;i++)
    cin>>arr1[i];
    cout<<"Enter second array elements: "<<endl;
    for(int i=0;i<n;i++)
    cin>>arr2[i];
    change(arr1,arr2,n);
    cout<<"First array elements after swapping are: "<<endl;
    for(int i=0;i<n;i++)
    cout<<arr1[i]<<" ";
    cout<<endl;
    cout<<"Second array elements after swapping are: "<<endl;
    for(int i=0;i<n;i++)
    cout<<arr2[i]<<" ";
    cout<<endl;
    return 0;
}