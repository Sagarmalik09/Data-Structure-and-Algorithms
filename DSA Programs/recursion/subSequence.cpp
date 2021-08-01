#include<bits/stdc++.h>
using namespace std;

void getSubsequence(string str, int strIndex, string output) {

//base condition
  if(strIndex == str.length()) {
    cout<<output<<endl;
    return;
  }
  
  //nahi lera 
  getSubsequence(str, strIndex+1, output);

  //lera hai
  output.push_back(str[strIndex]);
  getSubsequence(str, strIndex+1, output);

}

int main() {
  
  cout<<"Enter the String"<<endl;
  string str;
  cin>>str;

  cout<<"Printing all the Subsequences:"<<endl;
  string output="";
  getSubsequence(str,0, output);

}
