#include<bits/stdc++.h>

using namespace std;

int main()
{
    int arr[5];
    cout<<"enter array elements: "<<endl;
    for(int i=0;i<5;i++)
    cin>>arr[i];
    for(int i=1;i<5;i++)
    {
        int temp=arr[i];
        int j=i-1;
        for(;j>=0;j--)
        {
            if(arr[j]>temp)
            {
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;
    }
    for(int i=0;i<5;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}

