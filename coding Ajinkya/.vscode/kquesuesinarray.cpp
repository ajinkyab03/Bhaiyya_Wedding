#include<bits/stdc++.h>

using namespace std;

class KQueue
{
   public:
   int n;
   int k;
   int *next;
   int *arr;
   int freeSpot;
   int *front;
   int *rear;
   
   public:
   KQueue(int n,int k)
   {

    this->n=n;
    this->k=k;
    front=new int[k];
    rear=new int[k];
    for(int i=0;i<k;i++)
    {
        front[i]=-1;
        rear[i]=-1;
    }
    next=new int[n];
    arr=new int[n];
    for(int i=0;i<n;i++)
    {
        next[i]=i+1;
    }
    next[n-1]=-1;
    freeSpot=0;
   }

   void enqueue(int data,int qn)
   {
    //overflow
    if(freeSpot==-1)
    {
        cout<<"no empty space is available"<<endl;
    }
    //find first free index
    int index=freeSpot;
    
    //update freeSpot
    freeSpot=next[index];

    //check whether first element
    if(front[qn-1]==-1)
    {
        front[qn-1]=index;
    }
    else{
        //link new element to prev element
        next[rear[qn-1]]=index;
    }

    //update next
    next[index]=-1;
    
    //update rear
    rear[qn-1]=index;

    arr[index]=data;



   }

   int dequeue(int qn)
   {
    if(front[qn-1]==-1)
    {
        cout<<"queue underflow"<<endl;
        return -1;
    }
    //find index to pop
    int index=front[qn-1];

    //front ko age badhao
    front[qn-1]=next[index];

    //freeslots ko manage karo

    next[index]=freeSpot;

    freeSpot=index;
    
    return arr[index];
   }
};

int main()
{
    KQueue q(10,3);

    q.enqueue(10,1);
    q.enqueue(15,1);
    q.enqueue(22,2);
    q.enqueue(25,1);

    cout<<q.dequeue(1)<<endl;
    cout<<q.dequeue(2)<<endl;
    cout<<q.dequeue(1)<<endl;
    cout<<q.dequeue(1)<<endl;

    cout<<q.dequeue(1)<<endl;

    return 0;
}