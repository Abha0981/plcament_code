#include<iostream>
#include<cmath>
using namespace std;

int power(int n)
{
    if(n == 0)
    {
        return 1;
    }
    
    // int power_of_2 = power(n-1);
    // int result = 2* power_of_2;
    return 2 * power(n-1);
}
int main()
{
    int n;
    cin>> n;
    int ans = n;
    cout<< power(n);
    return 0;
}