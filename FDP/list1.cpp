#include<iostream>
#include<list>
#include <iterator>
#include<algorithm>
using namespace std;
void showlist(list<int> g)
{
    list<int>::iterator it;
    for (it = g.begin(); it != g.end(); ++it)
        cout << '\t' << *it;
    cout << '\n';
}
int main()
{
    list<int> l1={10,20,30};    
     //showlist(l1);
  for(int i:l1)
  {
    cout<<i<<" ";
  }
}