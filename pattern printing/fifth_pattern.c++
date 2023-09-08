#include<iostream>
using namespace std;

int main()
{
    int n = 3;
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            char z = 65 + i+ j;
            cout<<z; 

        }
        cout<<endl;
    }
    
    return 0;
}