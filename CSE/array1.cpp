#include<iostream>
using namespace std;
int main()
{
    int arr[10];
    for(int i=0;i<10;i++)
    {
       cin>>arr[i];
    }
    for(int i=0;i<10;i++)
    {
       cout<<arr[i]<<" ";
    }

    //sum of all elements
    int sum=0;
    for(int i=0;i<10;i++)
    {
       sum+=arr[i];
    }
    cout<<"Sum of all elements: "<<sum<<endl;
    //duplicate elements and frequency of the elements
    int freq[10]={0};
    for(int i=0;i<10;i++)
    {
        freq[arr[i]]++;
        }
    for(int i=0;i<10;i++)
    {
        if(freq[i]!=0)
        {
            cout<<"Frequency of "<<i<<" is "<<freq[i]<<endl;
        }
    }
    return 0;
}