#include<iostream>
#include<set>

using namespace std;
int main()
{
    set<int> s={2,3,1,6,4,5,3};
    s.insert(20);
    for(int i:s)
    {
        cout<<i<<" ";
    }
    cout <<"max size "<<s.max_size();
    cout<<endl;
    multiset<int> ms={2,3,1,6,4,5,3};
    
    for(int i:ms)
    {
        cout<<i<<" ";
    }
    cout <<"max size "<< ms.max_size();
}