#include<iostream>
#include<thread>
#include<chrono>
using namespace std;
void task1()
{
    for(int i=0;i<5;i++)
    {
        cout<<"hello from task1"<<endl;
    }
    this_thread::sleep_for(chrono::milliseconds(100)); 
    
}
void task2()
{
    for(int i=0;i<5;i++)
    {
        cout<<"hello from task2"<<endl;
    }
    this_thread::sleep_for(chrono::milliseconds(100));
}
int main()
{
   thread t1(task1);
    thread t2(task2);
    t1.detach();
    t2.detach();
    cout<<"main thread"<<endl;
    this_thread::sleep_for(chrono::seconds(2));

}