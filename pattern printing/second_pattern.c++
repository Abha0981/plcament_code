#include<iostream>
using namespace std;

int main()
{
    int n = 3;
    // char z = 65;
    for (int i = 0; i<n; i++)
    {
        for (int j = 0; j <n; j++)
        {
            char z = 65 + i;
            cout<<z;
        }
        // z++;
        cout<<endl;
    }
    return 0;
}