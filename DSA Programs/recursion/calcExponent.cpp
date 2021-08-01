#include <bits/stdc++.h>
using namespace std;

//fast exponent 
 int  exp(int n)
{
    // base condition
    if (n == 0)
        return 1;
//odd
    int answer = exp(n/2);
    if(n&1){
        return 2*answer*answer;
    }
    else{
        //even
        return answer*answer;
    }
}
 // 
 int expTwo(int n){
     if(n==0)
     return 1;
     int ans = 2*expTwo(n-1);
     cout<< "for n "<<n<<"ans"<<ans<<endl;
     return ans;
 }

 int main(){
     int a,b;
     cout<<"2 to the power 6 is"<<exp(6)<<endl;  

 }