#include<iostream>
using namespace std;

int main(){
    int n; 
    cout<<"Enter any digit ";
    cin>>n;
    int sum = 0;
    while (n>0)
    {
        int rem = n%10;
        sum = sum + rem;
        n=n/10;
        /* code */
    }
    cout<<"sum of the digits = "<<sum;
    
}