#include<iostream>
using namespace std;
void swap(int arr[], int size)
{
    for (int i = 0; i < size-2; i+=2)
    {
        if(i+1<size)
        {
            //swap(arr[i], arr[i+1]);
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;

        }
    }
    
}
void array(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
int main ()
{
    int arr[100], size;
    int arrayswap[10] = {23,445,67,23,456,56,4,345,-5,-67};
    int arrayswap2[5] ={-34,45,-3466,676,-8};
    swap(arrayswap,10);
    array(arrayswap,10);
    cout<<endl;
    swap(arrayswap2,5);
    array(arrayswap2,5);
    return 0;
}