#include<iostream>
using namespace std;
int main()
{
    int n = 4;
    
    for (int i = 1; i <= n; i++)
    {
        char a = 65 + n - i;
        for (int j = 1; j <=i; j++)
        {
            cout<<a;
            a++;
        }
        cout<<endl;
    }
    
    return 0;
}