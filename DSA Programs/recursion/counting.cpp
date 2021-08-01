# include<bits/stdc++.h>
using namespace std;
 void getCounting(int n){
     // base condition
     if(n<=0)
     return;
     //for decending 
     cout << n <<endl;
     getCounting(n-1);
     //for ascending 
     /* getCounting(n-1); 
     cout << n <<endl;
     */
 }
 int main(){
     int n;
     cout<<"please enter the input"<<endl;
     cin>>n;
     cout<<"Counting : "<<endl;
     getCounting(n);
 }