#include<iostream>
using namespace std;

class Car
{
    int noOfGear;
    string color;
    public:
    Car(int gear, string colr)
    {
        noOfGear = gear;
        color = colr;
    }
};

class RaceCar: public Car
{
    int maxSpeed;
    public:
    RaceCar(int mxs)
    {
        maxSpeed = mxs;
    }
    void printRaceCarInfo()
    {
        
        // cout<<"noOfGear: "<<noOfGear<<endl;
        // cout<<"color: "<<color<<endl;
        // cout<<"mazSpeed: "<<maxSpeed<<endl;
    }

};
int main()
{
    RaceCar obj;
    cin>>obj.noOfGear;
    getline(cin,obj.color);
    cin>>obj.maxSpeed;
    obj.printRaceCarInfo();
    return 0;
}
