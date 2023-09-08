#include<iostream>
using namespace std;
int main()
{
    int n;
    int isprime=1;
    cout<<"Enter any number to check that it is prime or not "<<endl;
    cin>>n;
    for(int num = 2; num<n; num++)
    {
       if(n%num ==0)
        {
            cout<<n<<" is not a prime number "<<endl;
            isprime = 0;
            break;
        }
    }
    
        if(isprime)
        {
            cout<<n<<" is a prime number "<<endl;
        }

    return 0;
}
