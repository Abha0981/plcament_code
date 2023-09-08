#include<iostream>
using namespace std;
void Reverse(int arr[], int size)
{
    int start=0;
    int end = size -1;
    while (start<=end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    
}
void Array(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
int main()
{
    int size;
    int arr[10] = {2,3,-4,63,45,-665,45,-45,0,-34};
    int brr[7] = {2,3,-4,63,-45,0,-34};
        
    Reverse(arr,10);  cout<<endl;  
    Reverse(brr,7);cout<<endl;  

    Array(arr, 10);cout<<endl;  
    Array(brr,7);
    return 0;
}