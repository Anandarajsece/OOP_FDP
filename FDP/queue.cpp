#include<iostream>
#include<queue>
#include<stack>
using namespace std;
int main()
{
    queue<int> q1;
     cout<<"data available"<<q1.empty()<<endl;
    q1.push(10);
    q1.push(20);
    cout<<"first element "<<q1.front()<<endl;
    cout<<"last element "<<q1.back()<<endl;
    cout<<"size"<<q1.size()<<endl;
    cout<<"data available"<<q1.empty()<<endl;
    while(!q1.empty())
    {
        cout<<q1.front()<<" ";
        q1.pop();
    }
    cout<<"size"<<q1.size()<<endl;
    cout<<"data available"<<q1.empty()<<endl;
    cout<<"last element "<<q1.back()<<endl;
}