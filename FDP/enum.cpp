#include<iostream>
using namespace std;
enum day
{
    low=1,medium,high
};
int main()
{
    enum day d=high;
    switch(d)
    {
        case 1:
        cout<<"low"<<endl;
        break;
        case 2:
        cout<<"medium"<<endl;
        break;
        case 3:
        cout<<"high"<<endl;
        break;
    }
}