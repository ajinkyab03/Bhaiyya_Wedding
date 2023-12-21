#include<bits/stdc++.h>
using namespace std;


vector<string> give(string a,string b,string c)
{
    vector<string>ans;
    ans.push_back(a);
    ans.push_back(b);
    ans.push_back(c);
    return ans;
}
int sub(int a,int b)
{
    return a-b;
}
void sum(int a,int b)
{
    cout<<a+b<<endl;
    cout<<sub(a,b)<<endl;

}
int main()
{
    vector<string>aj;
    aj=give("aj","bh","ch");
    for(int i=0;i<3;i++)
    {
       cout<<aj[i]<<" ";
    }
    cout<<endl;
    sum(3,5);
    return 0;
    
}