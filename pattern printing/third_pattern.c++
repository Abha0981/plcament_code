#include<iostream>
using namespace std;
int main()
{
    int n = 3;
    
    for (int i = 0; i < n; i++)
    {
        // char a = 65;
        for (int j = 0; j < n; j++)
        {
            char a = 65 + j;
            cout<<a;
            // a++;
        }
        cout<<endl;
    }
    
    return 0;
}