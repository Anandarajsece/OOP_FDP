//function template 
#include <iostream>
using namespace std;
template <typename T>
T max(T a, T b) {
    return (a > b) ? a : b;
}
int main() {
    cout << "Max of 3 and 7 is: " << max(3, 7) << endl; // Calls max<int>(int, int)
    cout << "Max of 3.5 and 2.1 is: " << max(3.5, 2.1) << endl; // Calls max<double>(double, double)
    //cout << "Max of 'g' and 'e' is: " << max('g', 'e') << endl; // Calls max<char>(char, char)
    return 0;
}
