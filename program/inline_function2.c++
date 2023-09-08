#include<iostream>
using namespace std;

// perform operation ADD, SUB, DIV, MUL
// using explicit inline function with void return type

class operation
{
    private:
    int a, b, add1, mul1, sub1, div1;
    public:
    void getvalue();
    void add();
    void sub();
    void div();
    void mul();
};
inline void operation::getvalue()
{
    cout<<"Enter value of a: ";
    cin>>a;
    cout<<"Enter value of b: ";
    cin>>b;
};
inline void operation::add()
{
    add1 = a + b;
    cout<<add1<<endl;
};
inline void operation::sub()
{
    sub1= a-b;
    cout<<sub1<<endl;
};
inline void operation::mul()
{
    mul1 = a*b;
    cout<<mul1<<endl;
};
inline void operation::div()
{
    div1 = a/b;
    cout<<div1<<endl;
};
int main()
{
    operation op;
    op.getvalue();
    op.add();
    op.sub();
    op.mul();
    op.div();
    return 0;
}