#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream file("file.txt");
    if(file.is_open())
    {
    file << "Hello, world!" << endl;
    file.close();
    cout<<"file data written";
    }
    else{
        cout<<"Unable to open file";
    }
    ifstream file1("file.txt");
    if(file1.is_open())
    {
        string line;
        while(getline(file1,line))
        {
            cout<<line<<endl;
        }
        file1.close();
    }
       
}