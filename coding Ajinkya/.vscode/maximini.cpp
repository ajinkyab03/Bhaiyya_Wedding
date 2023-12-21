#include<bits/stdc++.h>
using namespace std;

int solve(int *arr,int n,int k)
{
    deque<int>maxi(k);
    deque<int>mini(k);
    //addition of first k size window
    int ans=0;
    for(int i=0;i<k;i++)
    {
        
         ans=ans+arr[maxi.front()]+arr[mini.front()];

        while(!maxi.empty() && arr[maxi.back()]<=arr[i])
        {
            maxi.pop_back();
        }

        while(!mini.empty() && arr[maxi.back()]>=arr[i])
        {
            mini.pop_back();
        }

        maxi.push_back(i);
        mini.push_back(i);
    }

     
    
    for(int i=k;i<n;i++)
    {
       
        //next window

    //removal

    while(!maxi.empty() && i-maxi.front()>=k)
    {
          maxi.pop_front();
    }

    while(!mini.empty() && i-mini.front()>=k)
    {
          mini.pop_front();
    }

    //addition logic

     while(!maxi.empty() && arr[maxi.back()]<=arr[i])
        {
            maxi.pop_back();
        }

        while(!mini.empty() && arr[maxi.back()]>=arr[i])
        {
            mini.pop_back();
        }

        maxi.push_back(i);
        mini.push_back(i);


         ans=ans+arr[maxi.front()]+arr[mini.front()];

    }
      return ans;
}
    

    



int main()
{
   int arr[7]={2,-5,-1,7,-3,-1,2};

   int k=4;

   cout<<solve(arr,7,k)<<endl;
}