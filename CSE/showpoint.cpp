#include <iostream>     // std::cout, std::showpoint, std::noshowpoint

int main () 
{
  double a = 30;
  double b = 10000.0;
  double pi = 3.1416;
  std::cout.precision (5);
  std::cout <<   std::showpoint << a ;
  std::cout << std::noshowpoint << a ;
  return 0;
}