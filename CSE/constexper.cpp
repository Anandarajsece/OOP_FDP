#include <iostream>
using namespace std;

int main() {
  
    // Defining constant
    int constexpr hoursIn_day = 24;
  hoursIn_day = 12;
    // Printing value
    cout << hoursIn_day;
  	return 0;
}

/*
Using constexpr Keyword
The constexpr keyword is similar to const keyword and is 
also used to declare constants in C++. 
But the major difference is that the constexpr constants are initialized 
at compiler time, which is why their value must be known at the compile time. 
On the other hand, const keyword constants can be initialized 
at runtime and compile time.*/