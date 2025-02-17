// An example C++ program to demonstrate use of wchar_t
#include <iostream>
using namespace std;

int main()
{
	wchar_t w = L'A';
	cout << "Wide character value:: " << w << endl ;
	cout << "Size of the wide char is:: " << sizeof(w);
	return 0;
}
// Output: Wide character value:: A