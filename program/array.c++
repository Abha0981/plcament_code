#include<iostream>
using namespace std;
void array(int arr[], int size)
{
    cout<<"Array elements "<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[] = {};
    int size = 10;
    array(arr, 10);
    cout<<endl;
    int fourth[10] = {0};
    int n = 10;
    array(fourth,10);
    cout<<endl;
    cout<<"fourth ka third element "<<fourth[3];
    return 0;
}