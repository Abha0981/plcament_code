#include <iostream>
using namespace std;
void divide(int a, int b)
{

    try
    {
        if (b == 0)
            
        {
            throw b;
        }

        if (a < b)
        {
            throw a;
        }

        int div = a / b;
        cout << div << endl;
        
    }
    catch(int e)
    {
        cout<<"Exception Occured "<<endl;
    }
}
int main()
{
    int a, b;
    cout<<"Enter two numbers a and b "<<endl;
    cin >> a >> b;
    divide(a, b);
    return 0;
}