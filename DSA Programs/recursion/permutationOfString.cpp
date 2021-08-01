#include<bits/stdc++.h>
using namespace std;

void getPerm(string str, int index) {

//base condition
  if(index>=str.length()){
    cout<<str<<endl;
    return;
  }

  for(int i=index;i<str.length();i++) {

    swap(str[index],str[i]);
    getPerm(str,index+1);
    //backtrack
    swap(str[index],str[i]);
  }

}

int main() {
  
  cout<<"Enter the String"<<endl;
  string str;
  cin>>str;

  cout<<"Printing all the permutations:"<<endl;
  getPerm(str,0);

}
