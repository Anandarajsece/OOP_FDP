#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<string> v={"Hello","World","How","are","you"};
    vector<string> v2={};
    int n=v.size();
    move(v.begin(),v.end(),v2.begin());
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<v2[i]<<" ";
    }
    cout


}