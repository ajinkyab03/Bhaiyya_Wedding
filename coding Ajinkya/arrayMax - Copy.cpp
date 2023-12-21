#include <bits/stdc++.h>
using namespace std;


int main() {
    int size;
    cout<<"Enter the size of array elements:\n";
    cin>>size;
    int ar[size];
    cout<<"Enter the elements of the array :\n";
    for(int i=0;i<size;i++)
     cin>>ar[i];
    int max=0;
    int secMax=0;
    for(int i=0;i<size;i++){
        if(ar[i]>max){
            secMax=max;
            max=ar[i];
        }
        else if(ar[i]>secMax && ar[i]!=max){
            secMax=ar[i];
        }
    }
    cout<<"Second largest element in array is :\n";
    cout<<secMax<<'\n';
  return 0;
}