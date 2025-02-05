#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int, string> m={{1,"Arun"},{2,"Banu"}};
    m[3]="raja";m[4]="raja";
    m.insert(make_pair(5,"ddd"));
    m.insert(make_pair(5,"eee"));
    for(int i=1;i<=m.size();i++)
    {
        cout<<i<<"-"<<m[i]<<endl;
    }
    int key=3;
    auto it=m.find(key);
    if(it!=m.end())
    {
        cout<<"key"<<it->first;
        cout<<"value"<<it->second;
    }
    else
    {
        cout<<"key not found";
    }
}