// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>

using namespace std;

struct student{
    string name;
    int roll_No;
    float cgpa;
};

int main() {
    // Write C++ code here
int n;
cout<<"Enter no.of students:"<<endl;
cin>>n;

struct student s[100];
float aju[100]={0};
for(int i=0;i<n;i++)
{   cout<<"Enter name,roll number and cgpa respectively: "<<endl;
    cin>>s[i].name>>s[i].roll_No>>s[i].cgpa;
    aju[i]=s[i].cgpa;
}
for(int i=0;i<n;i++)
{
    cout<<"The name of student "<<i+1<<" is: "<<s[i].name<<endl;
    cout<<"The roll number of student"<<i+1<<" is: "<<s[i].roll_No;
    cout<<"The cgpa of student"<<i+1<<" is: "<<s[i].cgpa<<endl;
}
sort(aju,aju+n);
cout<<"The highest cgpa among students is: "<<aju[n-1]<<endl;
cout<<"The lowest cgpa among students is: "<<aju[0]<<endl;

return 0;
}