#include<iostream>
using namespace std;

// defining inline function explicitly
// inline function with int return type

class rect
{
    public:
    int rec(int l, int b);
};
inline int rect::rec(int l, int b)
{
    return l*b;
};
int main()
{
    rect r;
    cout<<"Area of rectangle with inline function: ";
    cout<<r.rec(5,6);
    return 0;
}