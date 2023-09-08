#include<iostream>
using namespace std;
int quotient(int divi, int dis)
{
    int count = 0;
    while (divi>dis)
    {
        if(divi>0 and dis>0)        
        {
            divi = divi - dis;
            count++;
        }
        if (divi> 0 and dis<0)
        {
            divi = divi + dis;
            count++;
        }
        
    }
    return count;
    
}
int main()
{
    int divi, dis;
    // cout<<"Enter dividend and dividior "<<endl;
    // cin>>divi>>dis;
    cout<<"7, 3"<<endl<<quotient(7,3)<<endl;
    cout<<"9, -3"<<endl<<quotient(9,-3)<<endl;
    return 0;
}