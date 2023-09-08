#include<iostream>
using namespace std;
int main()
{
    int n = 3;
    // char a = 65;
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++) // jb comment hatana toh j<=i ko j<i mein convert kr dena
        {
            char a = 65 + i ;
            cout<<a;
        }
        // cout<<a++;
        cout<<endl;
    }
    
    return 0;
}