#include<iostream>
#include <climits>
using namespace std;

int min(int arr[], int size)
{
    int min = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if(arr[i]<min)
        {
            min = arr[i];
        }
        /* code */
    }
    return min;
}

int max(int arr[], int size)
{
    int max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
        /* code */
    }
    return max;
}

int main()
{
    int arr[100];
    cout<<"Enter size of the Array "<<endl;
    int size;
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        /* code */cin>>arr[i];
    }
    
    cout<<min(arr,size)<<" "<<max(arr, size)<<endl;
    return 0;
}