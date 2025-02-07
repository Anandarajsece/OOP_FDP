//functors are objects that can be treated as though they are a function or function pointer.
#include<iostream>
#include<algorithm>
using namespace std;
class greet
{
    public:
    void operator()() // functor class
    {
        cout<<"Hello"<<endl;
    }
};
int main()
{
 greet obj;
    obj();
    //iterator
    //vector<int>::iterator it;->
    //vector<int>::iterator it=vec.begin();
    //vector<int>::iterator it=vec.end();
    //vector<int>::iterator it=vec.rbegin();
    //vector<int>::iterator it=vec.rend();
    //vector<int>::iterator it=vec.cbegin();
    //vector<int>::iterator it=vec.cend();
    
}