#include<iostream>
using namespace std;

int count_bits(int a)
{
    int count = 0;
    while (a!=0)
    {
        if(a&1)
        {
            count++;
        }
        /* code */
        a>>=1;
    }
    return count;
}
int set_bits(int a, int b)
{
    int count_final;
    count_final = count_bits(a)+count_bits(b);
    return count_final;
}

int main()
{
    int a, b;
    cout<<"Enter any value of a and b "<<endl;
    cin>>a>>b;
    cout<<set_bits(a,b);
    return 0;
}