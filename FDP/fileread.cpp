#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream file("example.txt",ios::app);
    if(file.is_open())
    {
     file<<"append text";
     file.close();
     cout<<"file is opened and text is appended";
    }
    else{
        cout<<"file is not opened";
    }
}
    