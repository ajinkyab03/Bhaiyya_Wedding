#include<iostream>
using namespace std;


int ackerMan(int m,int n){
   if(m==0){
   return n+1;
    }
    
   else if (m!=0 && n!=0){
   return ackerMan(m-1,ackerMan(m,n-1));
    }

    else if(m!=0 && n==0){ 
   return ackerMan(m-1,1);
   }
}
int main(){
int m,n;
cout<<"Enter the parameters of Ackermann function m,n respectively ";
cin>>m>>n;
cout<<"The value of Ackermann function (m,n) is :"<<ackerMan(m,n);
return 0;
}