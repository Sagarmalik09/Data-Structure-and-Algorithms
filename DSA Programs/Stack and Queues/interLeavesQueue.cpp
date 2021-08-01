#include <bits/stdc++.h>
using namespace std;

void interLeaveQueue(queue<int>&q)
{
    if(q.size()%2!=0)
    cout<<"input even number of integer."<<endl;

    // empty stack

    stack<int>s ;
    int halfsize=q.size()/2;
// push the 1st half into stack
    for(int i =0;i<halfsize;i++){
        s.push(q.front());
        q.pop();

    }
    /// enqueu bcka the stack elements 

    while (!s.empty())
    {
        q.push(s.top());
        s.pop();
    }
    // dequeue the first half elements of queue
    //enque them back
    for(int i =0; i<halfsize;i++){
      q.push(q.front());
      q.pop();
    }
    // Again push the first half elements into the stack
    // queue: 16 17 18 19 20, stack: 11(T) 12 13 14 15
    for (int i = 0; i < halfsize; i++) {
        s.push(q.front());
        q.pop();
    }

    while ((!s.empty()))
    {
        q.push(s.top());
        s.pop();
        q.push(q.front());
        q.pop();
    }
    
    
}

int main(){
    queue<int>q;
    q.push(11);
    q.push(12);
    q.push(13);
    q.push(14);
    q.push(15);
    q.push(16);
    q.push(17);
    q.push(18);
    q.push(19);
    q.push(20);
    interLeaveQueue(q);
    int length= q.size();
    for(int i =0;i<length;i++)
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
}
  