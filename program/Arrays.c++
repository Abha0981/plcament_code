#include<iostream>
using namespace std;
void PrintArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
void ArrayInput(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout<<"enter elements "<<i<<endl;
        cin>>arr[i];
    }
    
}
int main()
{
    int size;
    int arr[100];

    cout<<"Enter size of Array"<<endl;
    cin>>size;

    cout<<"Arrays Input "<<endl;
    ArrayInput(arr, size);

    cout<<"Arrays Elements "<<endl;
    PrintArray(arr,size);

    return 0;
}