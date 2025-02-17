// An example C++ program to demonstrate use
// of wchar_t in array
#include <iostream>
using namespace std;

int main()
{
	// char type array string
	char caname[] = "cybersecurity" ;
	cout << caname << endl ;

	// wide-char type array string
	wchar_t waname[] = L"cybersecurity" ;
	wcout << waname << endl;

	return 0;
}
