#include<iostream>
using namespace std;

int function()
{
    int a; int b;
    cout<<"Enter any two numbers: ";
    cin>>a>>b;
    return a+b;
}
int main()
{
    cout<<function();
    return 0;
}