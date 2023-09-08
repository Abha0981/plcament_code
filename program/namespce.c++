#include<iostream>
using namespace std;

// namespace questions

namespace first_name{
    int a=3;
    void func()
    {
        cout<<a*3;
    }
}

namespace second_name{
    int a = 2;
    int func()
    {
        return a*4;
    }
}

int main()
{
    cout<<first_name::a<<endl;//value of first_name namespace
    first_name::func(); cout<<endl;// value of the fucntion inside the first_namespace
    cout<<second_name::a<<endl; //returning int value
    cout<<second_name::func();// returning function value
    return 0;
}