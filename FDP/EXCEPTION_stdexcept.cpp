#include<iostream>
#include<stdexcept> //std::exception
using namespace std;
int main()
{
    try
    {
        throw runtime_error("something wrong");
    }
    
    

catch(const exception& e)
{
    cout<<"exception caught"<<e.what()<<endl;
}
return 0; // important here 
}