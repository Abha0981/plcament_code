#include<iostream>
using namespace std;
// functions without argument and without return type

void function()
{
    cout<<"Enter two number: ";
    int a;int b;
    cin>>a>>b;
    cout<<"Addition of the number: "<<a+b;
}

int main()
{
    function();
    return 0;
}