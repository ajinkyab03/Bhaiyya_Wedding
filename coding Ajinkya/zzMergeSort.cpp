#include<bits/stdc++.h>

using namespace std;

void merge(int *arr,int s,int e)
{
    int mid=(s+e)/2;
    int len1=mid-s+1;
    int len2=e-mid;

    int *first=new int[len1];
    int *second=new int[len2];

    int original=s;
    for(int i=0;i<len1;i++)
    {
        first[i]=arr[original];
        original++;
    }
    original=mid+1;
    for(int i=0;i<len2;i++)
    {
        second[i]=arr[original];
        original++;
    }

    //merging two sorted arrays
    int i1=0,i2=0;
    int i=s;
    while(i1<len1 && i2<len2)
    {
        if(first[i1]<=second[i2])
        {
            arr[i]=first[i1];
            i++;
            i1++;
        }
        else{
            arr[i]=second[i2];
            i++;
            i2++;
        }
    }
    
        while(i1<len1)
        {
            arr[i]=first[i1];
            i++;
            i1++;
        }
    
        while(i2<len2)
        {
            arr[i]=second[i2];
            i++;
            i2++;
        }
        
        delete[]first;
        delete[]second;
    }


void mergeSort(int *arr,int s,int e)
{
    //base
    if(s>=e)
    {
        return;
    }
    int mid=(s+e)/2;
    //break left parts
    mergeSort(arr,0,mid);

    //break right parts
    mergeSort(arr,mid+1,e);

    //merge sorted arrays
    merge(arr,s,e);

}

int main()
{
    int arr[5];
    cout<<"enter 5 array elements: "<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    mergeSort(arr,0,4);
    cout<<"sorted array is:"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}