// #include<iostream>
// using namespace std;
// int combination(int n, int r)
// {
//     int fact_n =1, fact_r = 1, fact_n_r = 1, result = n-r, final_result;
//     for(int i = 1; i<=n; i++)
//     {
//         fact_n = fact_n*i;
//     }
//     for(int i = 1; i<=r; i++)
//     {                                        NOT AN OPTIMIZED CODE BELOW CODE IS OPTIMIZED
//         fact_r = fact_r*i;
//     }
//     for(int i = 1; i<=result; i++)
//     {
//         fact_n_r = fact_n_r*i;
//     }
    
//     final_result = fact_n/(fact_r*fact_n_r);
//     return final_result;
// }
// int main()
// {
//     int n, r;
//     cout<<"Enter values of n and r to get the value of combination"<<endl;
//     cin>>n>>r;
//     cout<<combination(n, r);
//     return 0;
// }

#include<iostream>
using namespace std;
int factorial(int n)
{
    int fact = 1;
    for(int i = 1; i<=n; i++)
    {
        fact = fact*i;
    }
    return fact;
}
int nCr(int n, int r)
{
    int num = factorial(n);
    int deno = factorial(r) * factorial(n-r);
    int result = num/deno;
    return result;
}

int main()
{
    int n, r;
    cout<<"Enter values of n and r to get the value of combination"<<endl;
    cin>>n>>r;
    cout<<nCr(n,r);
    return 0;
}