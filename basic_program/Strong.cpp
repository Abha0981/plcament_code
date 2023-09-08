#include<iostream>
using namespace std;

int main(){
    int n, rem;
    int sum = 0;
    cout<<"Enter any Number ";
    cin>>n;
    int temp = n;

    while (temp>0)
    {
        rem = temp%10;
        int fact = 1;
        for(int i= 1; i<= rem; i++)
        {
            fact = fact*i;
        }
        sum = sum + fact;
        temp = temp/10;
        /* code */
    }
    if(sum == n){
        cout<<n<<" is a Strong number";
    }
    else{
        cout<<n<<" is not a Strong number";
    }
    // cout<<sum;
     
    return 0;
}