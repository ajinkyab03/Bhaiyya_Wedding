#include<iostream>
#include<bits/stdc++.h>

using namespace std;

struct aju{
    double x;
    double y;
};

int main()
{
    struct aju a1,a2;
    cout<<"Enter co-ordinates of first point: "<<endl;
    cin>>a1.x>>a1.y;
    cout<<"Enter co-ordinates of second point: "<<endl;
    cin>>a2.x>>a2.y;
    cout<<"Co-ordinates of first point are: "<<endl;
    cout<<"x="<<a1.x<<" y="<<a1.y<<endl;
    cout<<"Co-ordinates of second point are: "<<endl;
    cout<<"x="<<a2.x<<" y="<<a2.y<<endl;
    double prs=a1.x-a2.x;
    double anj=a1.y-a2.y;
    double ans=prs*prs+anj*anj;
    double str=pow(ans,0.5);
    cout<<"The distance between the two points is: "<<str<<endl;
    return 0;
}