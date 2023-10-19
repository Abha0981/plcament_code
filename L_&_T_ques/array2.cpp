// 02. Write a function that accepts an array of integers and return the array by re-arranging 
//the numbers such that the even numbers at the even places and the odd numbers at the odd places

// Input: arr[]={10,11,12,15}

// Output: {11,10,15,12}

#include<iostream>
using namespace std;

void input(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter odd and even values alternatly "<<endl;
        cin>>arr[i];
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
}

void odd_even_places(int arr[], int size)
{
    int i = 0;
    int j = 1;

    while (i<size && j<size)
    {
        if (arr[i]%2 == 0 && arr[j]%2 == 1) 
        {
            swap(arr[i], arr[j]);
            i+=2;
            j+=2;
        }
        else
        {
            if (arr[i]%2==1)
            {
                i+=2;
            }
            else
            {
                j+=2;
            }
        } 
    } 
}

int main()
{
    int size;
    int arr[100];
    cout<<"Enter size of array ";
    cin>>size;

    input(arr,size);
    cout<<"Print original Array "<<endl;
    printArray(arr, size);
    cout<<endl;

    odd_even_places(arr,size);
    cout<<"Print Updated Array"<<endl;
    printArray(arr,size);

    return 0;
}