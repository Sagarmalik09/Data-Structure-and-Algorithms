# include<bits/stdc++.h>
using namespace std;
 int getFibonacci(int n ){
     // base condition
    if (n==0||n==1)
    return n;

   return getFibonacci(n-1) + getFibonacci(n-2);

 }
 int main(){
     int n;
     cout<<"please enter the input"<<endl;
     cin>>n;
    cout<<"value of "<<n <<"th fibonacci is "<<getFibonacci(n)<<endl ;
 }