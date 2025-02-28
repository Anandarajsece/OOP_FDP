#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    string str;
    int i;

    cout<<"Enter a word ";
    getline(cin,str);

    for(i=0; i<str.size(); i++)
    {
        cout<<str.at(i)<<endl;
    }
    return 0;
}