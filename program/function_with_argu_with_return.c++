#include<iostream>
using namespace std;

int func1(int a, int b)
{
    return(a+b);
}
int func2(int a, int b)
{
    return a-b;
}
int main()
{
    cout<<func1(3,4)<<endl;
    cout<<func2(54,3);
    return 0;
}