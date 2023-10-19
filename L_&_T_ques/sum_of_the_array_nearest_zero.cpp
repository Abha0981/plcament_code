/*01. In an integer array, you need to find out and return 
the sum of two elements such that their absolute sum is closest to zero

Input : arr[]={3,-1,5,-2,4}

Output: 3-2=1, abs(1)=1, which is closest to zero*/

#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;

void input(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
}

void PrintArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

bool absolute_value(int x, int y)
{
    return abs(x)< abs(y);
}

int nearest_to_zero(int arr[], int size)
{
    sort(arr, arr+size, absolute_value);

    int min = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if(abs(arr[i] + arr[i-1])<= min)
        {
            min = abs(arr[i] + arr[i-1]);
        }
    }
    return min;
    
}

int main()
{
    int arr[100];
    int size;

    cout<<"Enter size of an array ";
    cin>>size;

    cout<<"Enter the values of arrays "<<endl;
    input(arr,size);

    cout<<"Original Array "<<endl;
    PrintArray(arr, size);
    cout<<endl;

    cout<<"Absolute Sum of the elements that is nearest to zero "<<endl;
    cout<<nearest_to_zero(arr, size);

    return 0; 
}