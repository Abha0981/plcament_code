#include<iostream>
using namespace std;
int main()
{
    int n;
    int palin;
    cout<<"Enter any number to check it is a palindrome number or not ";
    cin>>n;
    int temp = n;
    while (temp>0)
    {
        int rem = temp%10;
        for(int i = rem; i<=rem; i++)
        {
            palin = rem +i;
        }
        temp = temp/10;
        /* code */
    }
    if(palin == n)
    {
        cout<<n<<" is a palindrome number";
    }
    else{
        cout<<n<<" is not a palindrome number";
    }
    
    return 0;
}