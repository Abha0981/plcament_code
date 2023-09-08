#include <iostream>
using namespace std;

void PrintArray(int arr[][100], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "elements of 2D matrix [" << i << "] [" << j << "] " << arr[i][j] << endl;
        }
    }
}


int main()
{
    int n = 4, m = 4;  // Dimensions of the array
    int arr[100][100] = {{3, 45, 5542, 2},
                         {44, 5, 3, 4},
                         {53, 524, 43, 45},
                         {4, 7, 8, 9}};

    PrintArray(arr, n, m);

    return 0;
}
