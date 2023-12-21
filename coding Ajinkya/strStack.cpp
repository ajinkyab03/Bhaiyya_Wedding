#include<bits/stdc++.h>

using namespace std;

void solve(stack<int>&aju,int count,int size)
{
    if(count==size/2)
    {
        aju.pop();
        return;
    }
    int n=aju.top();
    aju.pop();

    solve(aju,count+1,size);

    aju.push(n);
}
void print(stack<int>aj,int n)
{
    for(int i=0;i<n-1;i++)
    {
        cout<<aj.top()<<" ";
        aj.pop();
    }
    cout<<endl;
}

int main()
{
   /*stack<char>aj;
    string ab;
    cout<<"enter string"<<endl;
    cin>>ab;
    int n=ab.length();
    int i=0;
    while(i<n)
    {
     aj.push(ab[i]); 
    }
    while(n--)
    {
        cout<<aj.top();
    }
    cout<<endl;
    */
 /*  stack<int>re;
   
   int n;
   cout<<"enter size"<<endl;
   cin>>n;
   int val;
   cout<<"enter ele"<<endl;
  int mid=n/2;
   for(int i=0;i<n;i++)
   {cin>>val;
    re.push(val);
   }
   /*
   for(int i=0;i<n;i++)
   {
    if(i!=mid)
    {
        aj.push(re.top());
        re.pop();
    }
   }
   for(int i=0;i<n-1;i++)
   {
    cout<<aj.top()<<" ";
    
   }
   cout<<endl;
  int count=0;
  solve(re,count,n);
  print(re,n);

    return 0;
}*/


//valid parenthesis
bool solve(string aj)
{   
    stack<char>s;
    for(int i=0;i<aj.length();i++)
    {
        char ch=aj[i];
        if(ch=='(' || ch=='{' || ch=='[')
        {
          s.push(ch);
        }
        else
        {
            if(!s.empty())
            {
                char top=s.top;
                if((top=='(' && ch==')') ||
                 (top=='{' || ch=='}' )|| 
                 (top=='[' && ch==']'))
                {
                    s.pop();
                }
                else{
                    return false;
                }
            }
            else
            {
                return false;
            }
        }
    }
    if(s.empty())
    {
        return true;
    }
    else{
        return false;
    }
}
int main()
{   string aj;
    cout<<enter string;
    solve(aj);
}

