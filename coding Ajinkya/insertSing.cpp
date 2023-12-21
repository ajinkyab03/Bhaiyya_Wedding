#include<iostream>
using namespace std;

class Node
{
  public:
  int d;
  Node * next;


  Node(int d)
  {
    this->d=d;
    this->next=NULL;
  }
};

void insertAtHead(Node * &head,int val)
{
    Node * temp=new Node(val);
    temp->next=head;
    head=temp;
}



void insertAtPosition(Node * &head,int val,int pos)
{
   Node * temp=new Node(val);
   Node *curr=head;
   int cnt=1;
   if(pos==1)
   {
    temp->next=curr;
    head=temp;
    return;
   }
   while(cnt<pos-1)
   {
      curr=curr->next;
      cnt++;
   }
   
   temp->next=curr->next;
   curr->next=temp;

}

void print(Node *&head)
{   Node * temp=head;
    while(temp!=NULL)
    {
        cout<<temp->d<<" ";
        temp=temp->next;
    }
}
    







int main(){
    int n;
    cout<<"Enter data for creating a node in ll"<<endl;
    cin>>n;
    Node *mai=new Node(n);
    //cout<<mai->d<<endl;
   // cout<<mai->next<<endl;
    Node *head=mai;
    
    cout<<"Enter 5 elements for inserting it into singly ll"<<endl;
    for(int i=0;i<5;i++)
    {
      cin>>n;
      insertAtHead(head,n);
    }
    cout<<"After inserting ll will be"<<endl;
    print(head);
    cout<<endl<<endl;

    int s;
    cout<<"Enter data and position(0 base indexing) for creating a node in ll"<<endl;
    cin>>n>>s;
  
    
    insertAtPosition(head,n,s);
    cout<<"after inserting at specified pos ll will be"<<endl;
    

    print(head);
    cout<<endl<<endl;
    return 0;
    }
  

    

    
