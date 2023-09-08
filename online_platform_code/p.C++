#include <bits/stdc++.h> 
#include<iostream>

using namespace std;

class GrandFather
{
    string GrandFatherName; 
    public:
    GrandFather(string gfn)
    {
        GrandFatherName = gfn;
    }
};
class Father : public GrandFather
{
    string FatherName;
    public:
    Father(string fn)
    {
        FatherName = fn;
    }
};
class Son : public Father
{
    string SonName;
    public:
    Son(string sn)
    {
        SonName = sn;
    }
    void printName()
    {
        cout<<"sonname: "<<SonName<<endl;
        cout<<"fathername: "<<FatherName<<endl;
        cout<<"grandfathername: "<<GrandFatherName<<endl;
    }
};
// Create the classes here

int main() {

    //Write your code here
    Son snj("Saurabh","Ramesh","Suresh");
    snj.printName();

    return 0;
}