#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v={4,6,3,4,5};
    vector<int> v2(5);
    int n=v.size();
    copy(v.begin(),v.end(),v2.begin());
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<v2[i]<<" ";
    }
   cout<<endl;
    return 0;

}