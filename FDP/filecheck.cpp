#include<iostream>
#include<fstream>

using namespace std;
int main()
{
    ifstream file("example.txt");
    if(file)
    {
        cout<<"file exist";
       // cout<<file; what is the value of file here?
    }
    else
    {
        cout<<"file not exist";
    }
}