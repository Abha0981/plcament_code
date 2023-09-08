#include<iostream>
using namespace std;
void sum_of_array(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    cout<<"Sum of the Arrays "<<sum;
}
int main ()
{
    int size;
    int arr[100];
    // cout<<"Enter the size of an Array "<<endl;
    // cin>>size;
    // cout<<"Enter the elements of the Array"<<endl;
    // for (int i = 0; i < size; i++)
    // {
    //     cin>>arr[i];
    // }
    int array[5] = {3,4,5,-6,-6};
    sum_of_array(array, 5);
    return 0;
}