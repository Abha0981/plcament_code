#include<iostream>
using namespace std;

int main (){
    int n, sum = 0;
    cout<<"enter any number "<<endl;
    cin>>n;
    for(int i = 1; i<=n; i++ )
    {
        sum = sum+i;
    }
    cout<<"sum of "<<n<<" numbers "<<"is "<<sum;
    return 0;
}