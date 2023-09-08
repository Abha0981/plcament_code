#include<iostream>
using namespace std;
int main()
{
    int n, result =0;
    cout<<"Enter any number ";
    cin>>n;
    while (n>0)
    {
        int rem = n%10;      
        result = 10*result+rem;
        n=n/10;        
    }
    cout<<result;
    return 0;
}