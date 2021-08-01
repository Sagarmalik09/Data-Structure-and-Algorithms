#include<bits/stdc++.h>
using namespace std;

map<pair<int,int> ,bool> visited;

//point should be a new point and it should be inside the matrix boundary
bool safeToGo(int a, int b, int m, int n) {
  if(a>=0 && a<m && b>=0 && b<n && visited[make_pair(a,b)]==false) {
      return true;
  }

  return false;
}

void printWays(int m, int n, int src_x, int src_y, int dest_x, int dest_y, string output) {

  visited[make_pair(src_x,src_y)]=true;

  //base Condition
  if(src_x==dest_x && src_y==dest_y) {
    cout<<"ANSWER -> " <<output<<endl;
    visited[make_pair(src_x,src_y)]=false;
    return;
  }

  //RIGHT
  if(safeToGo(src_x +1, src_y, m,n)) {
    output.push_back('R');
    printWays(m,n, src_x+1, src_y, dest_x, dest_y, output);
    output.pop_back();
  }

    //UP
  if(safeToGo(src_x , src_y + 1, m,n)) {
    output.push_back('U');
    printWays(m,n,src_x, src_y+1 , dest_x, dest_y, output);
    output.pop_back();
  }
//if we add this line, we get overlapping paths and if we dont add this, we get independent paths
  visited[make_pair(src_x,src_y)]=false;
}

int main() {
  
  cout<<"Enter the value of m & n for m*n matrix"<<endl;
  int m,n;
  cin>>m>>n;

  cout<<"Enter the Origin Co-ordinates"<<endl;
  int src_x, src_y;
  cin>>src_x>>src_y;

  cout<<"Enter the Destination Co-ordinates"<<endl;
  int dest_x,dest_y;
  cin>>dest_x>>dest_y;

  string output="";
  cout<<"Ways to reach from Origin to Destination are as follows:"<<endl;
  printWays(m, n, src_x, src_y, dest_x, dest_y, output);

}
