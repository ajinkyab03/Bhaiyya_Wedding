#include<bits/stdc++.h>

using namespace std;

class Node
{
    public:
    int data;
    Node *next;

    Node(int d)
    {
        this->data=d;
        this->next=NULL;
    }
};

class Stack
{
  public:
  Node *top;

  Stack()
  {
    this->top=NULL;
  }


void push(Node *&head,int d)
{   
    Node * temp=new Node(d);
    temp->next=head;
    head=temp;
}

void pop(Node *&head)
{
    Node *aj=head;
    head=head->next;
    aj->next=NULL;
}

void display(Node *temp)
{
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
};

int main()
{
    Stack s;
    Node *abhi=new Node(5);
    cout<<"Enter elements for inserting in stack like 5 elements"<<endl;
    int arr[5];
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
        s.push(abhi,arr[i]);
    }
    s.display(abhi);


    int n;
    cout<<"how many elements you want to pop from stack,n must be less than array size"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        s.pop(abhi);
    }

    s.display(abhi);


    return 0;
}
