
#include <iostream>
using namespace std; 
class base1 
{ 
 public: 
 void display() 
 { 
 cout << "Class base1" << endl; 
 } 
}; 
class base2 
{ 
 public: 
 void display() 
 { 
 cout << "Class base2" << endl; 
 } 
}; 
class derived : public base1, public base2 
{ 
 void view() 
 { 
 display(); 
 } 
}; 
int main() 
{ 
 derived d; 
 d.display(); 
 return 0; 
} 
