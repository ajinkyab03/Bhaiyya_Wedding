#include<bits/stdc++.h>

using namespace std;

int main()
{
    string aj;
    cout<<"Enter string for reversing: "<<endl;
    cin>>aj;
    int s=0;
    int e=aj.length()-1;
    while(s<=e)
    {
        swap(aj[s],aj[e]);
        s++;
        e--;
    }
    cout<<"Reverse string is: "<<endl;
    cout<<aj<<endl;
    return 0;
}