#include<stack>
#include<bits/stdc++.h>


using namespace std;

int main()
{
    stack<int>aj;
    cout<<"Enter 4 elements to add it in stack"<<endl;
    int ele;
    for(int i=0;i<4;i++)
    {
       cin>>ele;
       aj.push(ele);
    }
    cout<<"before delete top element"<<endl;
    cout<<aj.top()<<endl;

    aj.pop();
    cout<<"after delete top element"<<endl;
    cout<<aj.top()<<endl;aj.pop();

    cout<<"after deletint another top element"<<endl;
    cout<<aj.top()<<endl;

    cout<<"updated size of stack is:"<<endl;
    cout<<aj.size();


   return 0;


}