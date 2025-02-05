#include<iostream>
#include<thread>
#include<atomic>
using namespace std;
atomic<int> counter(0);
void increment()
{
    for(int i=0;i<10;i++)
    {
        counter++;
        cout<<"counter: "<<counter<<" ";
    }
}
int main()
{
    thread t1(increment);
    thread t2(increment);
    t1.join();
    t2.join();
    cout<<"main thread"<<endl;
    cout<<"counter: "<<counter<<endl;
}