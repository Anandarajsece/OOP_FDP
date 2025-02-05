#include<iostream>
#include<fstream>
#include<cstdio>
using namespace std;
int main()
{
    if(remove("file.txt")==0)
    {
        cout<<"file.txt deleted"<<endl;
    }
    else{
        cout<<"file.txt not deleted"<<endl;
    }
    
}
