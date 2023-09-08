#include<iostream>
using namespace std;
int main()
{   
    int n;
    int count = 0;
    cout<<"Enter any Digits ";
    cin>>n;
    int temp =n; 
    while(temp>0)
    {
        int rem = temp%10;
        count++;
        temp=temp/10;
        /* code */
    }
    cout<<"Number of digits in "<<n<<" is "<<count;
    return 0;
}