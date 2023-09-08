// #include<iostream>
// using namespace std;

// void function(int a , int b)   // can't pass argument of one function into another function because it does not has the access of others local variable
// {
//     cout<<"a: "<<a<<endl;
//     cout<<"b :"<<b<<endl;
// }
// void dis_function(int a, int b)
// {
//     cout<<"Sum of a and b: "<<a+b<<endl;
// }

// int main()
// {
//     int a;
//     int b;
//     function(3,4);
//     dis_function(5,7);
//     return 0;
// }

#include<iostream>
using namespace std;

void function(int a , int b)   // can't pass argument of one function into      
                              // another function because it does not has the access of others local variable
{
    cout<<"a: "<<a<<endl;
    cout<<"b :"<<b<<endl;
    cout<<"Sum of a + b: "<<a+b<<endl;
}

int main()
{
    function(3,4);
    return 0;
}