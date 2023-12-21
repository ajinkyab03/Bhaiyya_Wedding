#include<bits/stdc++.h>

using namespace std;

int main()
{
   /* queue<int>q;
    q.push(7);
    q.push(2);
    q.push(8);
    cout<<q.size()<<endl;
    q.pop();
    cout<<q.size()<<endl;
    cout<<q.empty()<<endl;
    cout<<q.front()<<endl;
    return 0;*/
    deque<int>d;
    d.push_front(12);
    d.push_back(14);
    cout<<d.front()<<endl;
    cout<<d.back()<<endl;
    d.pop_front();
    cout<<d.front()<<endl;
    cout<<d.back()<<endl;
    d.pop_front();
    if(d.empty())
    {
        cout<<"queue is empty"<<endl;
    }
    else{
        cout<<"queue is not empty"<<endl;
    }

    return 0;

}