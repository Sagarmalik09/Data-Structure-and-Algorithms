# include<bits/stdc++.h>
using namespace std;
 int getFactorial(int n ){
     // base condition
    if (n<=1)
    return 1;

   return n* getFactorial(n-1);

 }
 int main(){
     int n;
     cout<<"please enter the input"<<endl;
     cin>>n;
     cout<<"value of"<<n<<"! is"<<getFactorial(n)<<endl;
 }