#include<iostream>
using namespace std;
int main(){
    int n;
    int even_count = 0;
    int odd_count = 0;
    cout<<"Enter any number ";
    cin>>n;
    int temp = n;
    while (temp>0)
    {
        int rem = temp%10;
    
        if(rem%2==1)
        {
            odd_count++;
        }

        if(rem%2==0)
        {
            even_count++;
        }
        /* code */
        temp = temp/10;
    }
    cout<<"even numbers in "<<n<<" is "<<even_count<<endl;
    cout<<"odd numbers in "<<n<<" is "<<odd_count;
    return 0;
}