#include<iostream>
using namespace std;
int main()
{
    int n; int fac = 1;
    cout<<"Enter any number"<<endl;
    cin>>n;

    for(int num = 1; num<=n; num++)
    {
        fac = fac * num;
    }
    cout<<"Factorial of "<<n<<" = "<<fac;
    return 0;
}