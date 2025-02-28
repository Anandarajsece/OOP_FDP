#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    cout<<"Enter 5 elements of array: ";
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    cout<<"Elements of array are: ";
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    int sum=0;
    for(int i=0;i<5;i++)
    {
        sum+=arr[i];
    }
    //find max and minimum elements 
    int max=arr[0],min=arr[0];
    for(int i=1;i<5;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
        if(arr[i]<min)
        {
            min=arr[i];
        }
        cout<<max<<" "<<min;
    }
    //search an element in array
    int ele;
    cout<<"Enter element to search: ";
    cin>>ele;
    int flag=0;
    for(int i=0;i<5;i++)
    {
        if(arr[i]==ele)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        cout<<"Element found";
    }
    else
    {
        cout<<"Element not found";
    }
    // find the second largest element
    int largest=arr[0],second_largest=arr[0];
    for(int i=1;i<5;i++)
    {
        if(arr[i]>largest)
        {
            second_largest=largest;
            largest=arr[i];
        }
        else if(arr[i]>second_largest)
        {
            second_largest=arr[i];
        }
    }
    cout<<"Second largest element is "<<second_largest;

    //find second minimum element
    int smallest=arr[0],second_smallest=arr[0];
    for(int i=1;i<5;i++)
    {
        if(arr[i]<smallest)
        {
            second_smallest=smallest;
            smallest=arr[i];
        }
        else if(arr[i]<second_smallest)
        {
            second_smallest=arr[i];
        }
    }
    cout<<"Second smallest element is "<<second_smallest;

    //sorting the array using bubble sort
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    return 0;
}