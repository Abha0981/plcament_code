#include <iostream>
using namespace std;

namespace first_name
{                               // here the class is defined and declared inside the namespace
    class shape
    {
    public:
        void display()
        {
            cout << "This SHAPE is from first_name namespace" << endl;
        }
    };
}

namespace second_name                       //the class must be defined inside the namespace but it can 
{                                           // declare outside the namespace
    class animal;
}

class second_name::animal
{
public:
    void display()
    {
        cout << "This ANIMAL is from second_name namespace" << endl;
    }
};

int main()
{
    first_name::shape obj;
    obj.display();
    second_name::animal obj1;
    obj1.display();
    return 0;
}