#include<iostream>
using namespace std;
int main()
{
try
{
    int fage,sage;
    cin>>fage>>sage;
    if(sage>fage)
    {
        throw -1;//throw "hai"; // throw string("hai")
    }
}
catch(int x) // catch(const char* x) // or ellipsis catch(...)
{
    cout<<"son age is greater than father age"<<endl;
}

/*catch (const exception& e) {
        // print the exception
        cout << "Exception " << e.what() << endl;
    } */

cout<<"you cannot see me";

 

}