#include<iostream>
using namespace std;
int AP(int n, int cd, int a)
{
    int an;
    for (int i = 0; i < n; i++)
    {
        /* code */
        an = a + (n-1)*cd;
    }
    return an;    
}

int main()
{
    int n, cd, a;
    // cout<<"Enter the nth term, common difference and first term "<<endl;
    // cin>>n>>cd;
    cout<<AP(3,2,1);
    return 0;
}