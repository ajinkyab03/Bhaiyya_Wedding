#include<bits/stdc++.h>

using namespace std;

class Node
{
   public:
   int data;
   Node *prev;
   Node*next;

   Node(int d)
   {
    this->data=d;
    this->prev=NULL;
    this->next=NULL;
   }
};

void print(Node *head)
{
    Node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void insertAtHead(Node *&head,int val)
{
    Node *temp=new Node(val);
    temp->next=head;
    head->prev=temp;
    head=temp;
    return;
}

void deleteAtPos(Node *&head,int pos)
{   
    
    Node *curr=head;
    Node *prev=NULL;
    if(pos==1)
    {  
       curr=curr->next;
       head->next=NULL;
       curr->prev=NULL;
       
       return;

    }
    int cnt=1;
    while(cnt<pos)
    {   prev=curr;
        curr=curr->next;
        cnt++;
    }
    curr->prev=NULL;
    prev->next=curr->next;
    curr->next=NULL;
}

int main()
{  
   int ele=0;
   Node *aj=new Node(5);
   Node *temp=aj;
   cout<<"Enter 5 elements to insert it in list"<<endl;
   for(int i=0;i<5;i++)
   {
    cin>>ele;
    insertAtHead(temp,ele);
   }
   cout<<"before deleting nodes the list was"<<endl;
   print(temp);
   cout<<endl<<endl;

   int m,n;

   cout<<"Enter two node positions for deleting 1 base index"<<endl;
   cin>>m>>n;

   deleteAtPos(temp,m);
   deleteAtPos(temp,n);
   cout<<"After deleting nodes the ll will be"<<endl;

   print(temp);





   return 0;
    
}