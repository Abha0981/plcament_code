#include<iostream>
using namespace std;

bool palindeome_check(string str)
{
    int s = 0;
    int e = str.length()-1;
    while(s<=e)
    {
        // if(str[s++] == str[e--])         // both code are correct
        // {
        //     return 1;
        // }

        if(str[s] == str[e])
        {
            s++;
            e--;
            return 1;
        }
    }
    return 0;
}

int main() 
{
    string str;
    cout<<"Enter any string "<<endl;
    getline(cin, str);
    cout<<palindeome_check(str);
    return 0;
}