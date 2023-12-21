#include<iostream>

using namespace std;

class Node
{
  public:
  int d;
  Node *next=NULL;

  Node(int d)
  {
    this->d=d;
    this->next=NULL;
  }

};

void insertAtHead(Node *&head,int d)
{
   Node *temp=new Node(d);
   temp->next=head;
   head=temp;
}

void deleteAtPos(Node *head,int pos)
{
    Node *curr=head;
    Node *prev=NULL;
    int cnt=1;
    if(pos==1)
    {
        Node *temp=head;
        head=head->next;
        temp->next=NULL;
    }
    else{
    while(cnt<pos)
    {
        prev=curr;
        curr=curr->next;
        cnt++;
    }
    }
    prev->next=curr->next;
    curr->next=NULL;
}

void print(Node * head)
{
    while(head!=NULL)
    {
        cout<<head->d<<" ";
        head=head->next;
    }
    cout<<endl;
}

int main()
{
    int val;
    cout<<"Enter value for creation of node"<<endl;
    cin>>val;
    Node * aju=new Node(val);
    Node *head=aju;
    cout<<"Enter 5 elements to add in ll"<<endl;
    for(int i=0;i<5;i++)
    {
      cin>>val;
      insertAtHead(head,val);
    }
   
    cout<<"before deletion ll was"<<endl;
    print(head);
    cout<<endl<<endl;

    cout<<"after deletion"<<endl;
    deleteAtPos(head,3);


    
    print(head);
    cout<<endl<<endl;

    return 0;

}
