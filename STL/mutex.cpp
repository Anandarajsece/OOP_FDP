#include<iostream>
#include<thread>
#include<mutex>
using namespace std;
mutex m;
void task1(string msg)
{
    m.lock();// lock_guard<mutex> lock(m);
 for(int i=0;i<5;i++)
 {
     cout<<msg<<endl;
 }
 m.unlock();
}
int main()
{
    thread t1(task1,"hello from task1");
    thread t2(task1,"hello from task2");
    t1.join();
    t2.join();
    cout<<"main thread"<<endl;
}
