#include<bits/stdc++.h>
using namespace std;
void run()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif
}
 int main()
 { 
     run();
     int t;
     cin>>t;
     while (t--)
     {
         int n;
         cin>>n;
         int a[n];
         for(int i=0;i<n;i++) 
         {        //taking input array
         cin>>a[i];
         }
         int k;
         cin>>k;
         sort(a,a+n);
         cout<<a[k-1]<<endl;

     }
     

     return 0;
 }