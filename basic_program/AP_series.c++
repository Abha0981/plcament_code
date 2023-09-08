#include<iostream>
using namespace std;

int main()
{
    int first_term = 1;
    int sec_term = 5;
    int nth = 5;
    int cd = sec_term - first_term;
    int an = first_term + (nth-1)*cd;

    for (int i = 1; i <=an; i = i + cd)
    {
        
        cout<< i <<" ";
        /* code */
    }
     
    return 0;
}