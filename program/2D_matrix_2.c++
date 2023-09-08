#include<iostream>
using namespace std;

void PrintArray(int arr[][100], int size_n, int size_m)
{
    for (int i = 0; i < size_n; i++)
    {
        for (int j = 0; j < size_m; j++)
        {
            cout << "elements of 2D matrix [" << i << "] [" << j << "] " << arr[i][j] << endl;
        }
    }
    
}

void Input(int arr[][100], int size_n, int size_m)
{
    for (int i = 0; i < size_n; i++)
    {
        for (int j = 0; j < size_m; j++)
        {
            cout << "elements of 2D matrix [" << i << "] [" << j << "] " <<endl;
            cin>>arr[i][j];
        }
    }
}

int main()
{
    int arr[100][100];
    int size_n;
    int size_m;
    cout<<"Enter size_n "<<endl;
    cin>>size_m;
    cout<<"Enter size_m "<<endl;
    cin>>size_n;
    Input(arr, size_n,size_m);
    PrintArray(arr, size_n, size_m);
    return 0;
}