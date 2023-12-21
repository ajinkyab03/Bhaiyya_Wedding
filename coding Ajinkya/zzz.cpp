#include<bits/stdc++.h>

using namespace std;

class Node
{
    public:
    int d;
    Node *prev;
    Node *next;

    Node(int val)
    {
        d=val;
        prev=NULL;
        next=NULL;
    }
};

void insertAtHead(Node *&head,int val)
{
    Node *aju=new Node (val);
    aju->next=head;
    head->prev=aju;
    head=aju;
}

void insertAtPos(Node *&head,int val,int pos)
{
    Node *temp=new Node(val);
    Node *curr=head;
    
    if(pos==1)
    {
        insertAtHead(curr,val);
        return;
    }
    int cnt=1;
    while(cnt<pos-1)
    {
        cnt++;
        curr=curr->next;
    }
    Node *abhi=curr->next;
    curr->next=temp;
    temp->next=abhi;
    abhi->prev=temp;
    temp->prev=curr;
}

void print(Node *head)
{
    Node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->d<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main()
{
    int val;
    cin>>val;
    Node *temp=new Node(val);
    Node *head=temp;
    insertAtHead(head,5);
    insertAtHead(head,89);
    insertAtHead(head,67);
     insertAtHead(head,81);
    insertAtPos(head,67,3);
    print(head);
    return 0;

}