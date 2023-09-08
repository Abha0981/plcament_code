#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n, sum =0, count = 0, digit_count;
    cout<<"Enter any Number ";
    cin>>n;
    int temp = n;
    int flag = temp;
    while (flag>0)
    {
        int rem = flag%10;
        count++;
        flag = flag/10;
    }
    while (temp>0)
    {
        int rem = temp%10;
        int power = pow(rem, count);
        sum = power + sum;
        temp = temp/10;
        /* code */
    }
    
    // cout<<count<<endl;
    // cout<<sum;
    if(sum==n){
        cout<<n<<" is an Armstrong Number";
    }
    else{
        cout<<n<<" is not an Armstrong Number";
    }
    return 0;
}