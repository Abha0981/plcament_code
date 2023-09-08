#include<iostream>
using namespace std;

int main(){
    int n, rem;
    cout<<"Enter any digits ";
    cin>>n;
    int multi = 1;
    while (n>0)
    {
        rem = n%10;
        multi = multi * rem;
        n= n/10;
        /* code */
    } 
    cout<<"multiplication of digits "<<multi;

    return 0;
}