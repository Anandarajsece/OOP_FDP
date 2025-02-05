#include<iostream>
#include<deque>
using namespace std;
int main()
{
    deque<int> dq;
    dq.push_front(10);
    dq.push_front(20);
    dq.push_front(30);
    dq.push_back(40);
    dq.push_back(50);
    dq.push_back(60);
    
for(int i:dq)
  {
    cout<<i<<" ";
  }
    cout<<"current position" <<dq.at(2)<<endl;
    cout<<"first"<<dq.front()<<endl;
    cout<<"last"<<dq.back()<<endl;
}
