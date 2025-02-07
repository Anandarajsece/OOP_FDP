#include <iostream>
#include <thread>
using namespace std;
int main()
{
    thread t1(task1);
    thread t2(task2);
    t1.join();
    t2.join();
    cout<<"main thread"<<endl;
}
void task1()
{
    for(int i=0;i<5;i++)
    {
        cout<<"hello from task1"<<endl;
    }
}

void task2()
{
    for(int i=0;i<5;i++)
    {
        cout<<"hello from task2"<<endl;
    }
}
