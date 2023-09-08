#include<iostream>
#include<string>
using namespace std;
void conversion(string str)
{
    //convert from upper to lower
    // a = 97 A = 65
    for (int i = 0; i < str.size(); i++)
    {
        if(str[i]>= 'A' && str[i]<= 'Z')
        {
            str[i] += 32;
        }
    }
     cout<<str;
    
}

int main()
{
    string str;
    cout<<"Enter any String "<<endl;
    getline(cin, str);
    cout<<"After Conversion "<<endl;
    conversion(str);
    return 0;
}