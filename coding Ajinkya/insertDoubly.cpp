#include<bits/stdc++.h>

using namespace std;

class Node
{
   public:
   int data;
   Node *prev;
   Node*next;

   Node(int data)
   {
    this->data=data;
    this->prev=NULL;
    this->next=NULL;
   }
};

void insertAtHead(Node*&head,int d)
{
    Node *aj=new Node(d);
    if(head==NULL)
    {
        head=aj;
        return;

    }
    aj->next=head;
    head->prev=aj;
    head=aj;
}

void insertAtPos(Node*&head,int pos,int val)
{
    Node *temp=new Node(val);
    Node *curr=head;
    if(pos==1)
    {
        insertAtHead(head,val);
        return;
    }
    else{
        int cnt=1;
        while(cnt<pos-1)
        {
            curr=curr->next;
            cnt++;
        }
        
        temp->next=curr->next;
        temp->next->prev=temp;
        curr->next=temp;
        temp->prev=curr;

    }
    
}

void print(Node*head)
{   
    Node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main()
{   int d;
    Node *ab=new Node(5);
    Node*head=ab;
    int ele=0;
    cout<<"Enter 5 elements to insert it in list"<<endl;
   for(int i=0;i<5;i++)
   {
    cin>>ele;
    insertAtHead(head,ele);
   }
   cout<<"After adding 5 elements at head the ll will be"<<endl;
   print(head);
   cout<<endl<<endl;
    
    

    insertAtPos(head,2,67);
    insertAtPos(head,4,89);
    cout<<"After inserting nodes at certain positions ll will be"<<endl;

    print(head);
    cout<<endl<<endl;
    return 0;
}