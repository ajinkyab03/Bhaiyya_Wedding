#include<bits/stdc++.h>

using namespace std;

class Stack
{
   public:
   int top;
   int *arr;
   int size;

   Stack(int size)
   {
    top=-1;
    this->size=size;
    arr=new int[size];
   }


void push(int d)
{
    if(top<size-1)
    {
        top++;
        arr[top]=d;
        
    }
    else{
        cout<<"stack overflow"<<endl;
    }
}

void pop()
{
    if(top==-1)
    {
      cout<<"stack underflow"<<endl;
    }
    else{
        top--;
    }
}

int peak()
{
    if(top>=0)
    {
        return arr[top];
    }
    else{
        return -1;
    }
}


};
int main()
{
    Stack aj(5);
    int ele;
    cout<<"enter 5 elements for pushing it into stack"<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>ele;
        aj.push(ele);
    }
    cout<<"before popping elements peak element is:"<<endl;
    cout<<aj.peak()<<endl;
    cout<<endl;

    aj.pop();
    aj.pop();

    cout<<"after popping elements peak element is:"<<endl;
    cout<<aj.peak()<<endl;
   


   return 0;


}