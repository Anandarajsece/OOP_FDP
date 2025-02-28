// find frequency of the elements in array
#include<iostream>
using namespace std;
int main()
{
    int arr[10];
    cout<<"Enter 10 elements: ";
    for(int i=0;i<10;i++)
    {
        std::cin>>arr[i];
    }
    for(int i=0;i<10;i++)
    {
        std::cout<<arr[i]<<" ";
    }
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
            std::cout<<"Frequency of "<<i<<" is "<<freq[i]<<std::endl;
        }
    }
    return 0;
}
