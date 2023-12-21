#include<bits/stdc++.h>

 using namespace std;

// class Node
// {
//    public:


//    int data;
//    Node *next=NULL;

  

//    Node(int val)
//    {
//     data=val;
//     next=NULL;
//    }

// };

// class Queue
// {
//     public:

//     Node *front;
//     Node*rear;

//     Queue()
//     {
//         front=NULL;
//         rear=NULL;
//     }
    

//     void insert(Node *&rear,int d)
//     {
//         Node *temp=new Node(d);
//         if(front==NULL)
//         {
//             rear=temp;
//             front=rear;
//             return;
//         }

//         rear->next=temp;
//         rear=temp;
//         temp->next=NULL;


//     }

//     void deletion(Node *&rear)
//     {
//        Node *temp=rear;
//        rear=rear->next;
//        temp->next=NULL; 
//     }

//     void print(Node *head)
//     {
//         Node *curr=head;
//         while(curr!=NULL)
//         {
//             cout<<curr->data<<" ";
//             curr=curr->next;
//         }
//         cout<<endl;
//     }

// };


// int main()
// {

//     Queue q;
//     Node *aju=new Node(5);
    
//     q.insert(aju,12);
//     q.insert(aju,67);
//     q.insert(aju,78);
//     q.print(aju);

//     return 0;

// }

class Node{
    public:
    int data;
    Node *next=NULL;

    Node(int val)
    {
      this->data=val;
      this->next=NULL;
    }
};

class Queue{
    public:
    Node *front;
    Node *rear;

    Queue()
    {
        front=NULL;
        rear=NULL;
    }

    void insert(Node *rear,int d)
    {
        Node *temp=new Node(d);
        if(rear==NULL)
        {
            rear=temp;
            front=rear;
            return;

        }
        rear->next=temp;
        rear=temp;
        temp->next=NULL;
    }

    void deletion(Node *&rear)
    {
        Node *temp=rear;
        rear=rear->next;
        temp->next=NULL;

    }
    void print(Node *head)
    {
        Node *curr=head;
        while(curr!=NULL)
        {
            cout<<curr->data<<" ";
            curr=curr->next;
        }
        cout<<endl;
    }
};

int main()
{
    Queue q;
    Node *aj=new Node(15);
    q.insert(aj,23);
    q.insert(aj,76);
    q.print(aj);

}