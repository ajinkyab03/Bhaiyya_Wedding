#include<bits/stdc++.h>

using namespace std;

class node
{
  public:
  int data;
  node* left;
  node* right;


  node(int data)
  {
    this->data=data;
    this->left=NULL;
    this->right=NULL;
  }
};

node *buildTree(node * root)
{
    cout<<"enter data "<<endl;
    int data;
    cin>>data;
    root=new node(data);

    if(data==-1)
    {
        return NULL;
    }
    
    cout<<"Enter data for inserting in left of"<<data<<endl;
    root->left=buildTree(root->left);

    cout<<"Enter data for inserting in right of"<<data<<endl;
    root->right=buildTree(root->right);

    return root;

}

void levelOrderTraversal(node * root)
{
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {
        node *temp=q.front();
        
        q.pop();

        if(temp==NULL)
        {
            //purana level complete traverse ho chuka hai
            cout<<endl;
            if(!q.empty())
            {
                //q still has some child nodes
                q.push(NULL);
            }

        }
        else
    {
        cout<<temp->data<<" ";
        if(temp->left)
        {
            q.push(temp->left);
        }
        if(temp->right)
        {
            q.push(temp->right);
        }
    }
   // cout<<endl;
}
}

void inorder(node * root)
{
    //base case
    if(root==NULL)
    {
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void preorder(node * root)
{
    //base case
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(node * root)
{
    //base case
    if(root==NULL)
    {
        return;
    }
    
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

void buildfromlevel(node* &root)
{
    queue<node*>q;
    cout<<"enter data for root node"<<endl;
    int data;
    cin>>data;
    root=new node(data);
    q.push(root);
    while(!q.empty())
    {
        node *temp=q.front();
        q.pop();
        cout<<"enter left node for:"<<temp->data<<endl;
        int leftData;
        cin>>leftData;
        if(leftData!=-1)
        {
            temp->left=new node(leftData);
            q.push(temp->left);

        }
 
        cout<<"enter right node for:"<<temp->data<<endl;
        int rightData;
        cin>>rightData;
        if(rightData!=-1)
        {
            temp->right=new node(rightData);
            q.push(temp->right);
            
        }


        
    }
}


int main()
{
    node *root=NULL;
 //   buildfromlevel(root);
   // levelOrderTraversal(root);
    //1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1
    //creating a tree
         root=buildTree(root);

//     //level order traversal

//    //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

//     cout<<"printing the levelwise traversal output"<<endl;
//     levelOrderTraversal(root);
    
//     cout<<endl;
//     cout<<"inorder traversal is: " <<endl;
//     inorder(root);
    
//     cout<<endl;
//     cout<<"preorder traversal is: "<<endl;
//     preorder(root);

//     cout<<endl;
//     cout<<"postorder traversal is: "<<endl;
//     postorder(root);


    return 0;
}


void levelordertraversal(node *root)
{
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {
        node *temp=q.front();
        q.pop();
        if(temp==NULL)
        {
            cout<<endl;
            if(!q.empty())
            {
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left)
            {
                q.push(temp->left);
            }
            if(temp->right)
            {
                q.push(temp->right);
            }
        }
    }

}