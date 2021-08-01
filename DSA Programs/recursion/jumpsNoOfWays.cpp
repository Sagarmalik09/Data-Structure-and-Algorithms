
#include<bits/stdc++.h>
using namespace std;

//Problem: https://www.includehelp.com/icp/find-total-ways-to-reach-nth-stair-from-bottom.aspx

int numberOfJumps(int n) {
  if(n<0)
  return 0;

  if(n==0)
  return 1;

  return numberOfJumps(n-1) + numberOfJumps(n-2) +numberOfJumps(n-3);

}

int main() {
  
  cout<<"Enter the value of n"<<endl;
  int n;
  cin>>n;

  cout<<"NUMBER OF JUMPS -> "<<numberOfJumps(n)<<endl;
}

