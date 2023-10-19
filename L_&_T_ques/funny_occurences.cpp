// Fanny is given a string along with the string which contains a single character x. 
//She has to remove the character x from the given string. Help her write a function to remove all 
//occurrences of the x character from the given string.

// Input Specification:
// input1: input string s 
// input2: String containing any character x
// Output Specification:
// String without the occurrence of character x

// input1: welcome to mettl 
// input2: l
// Output: wecome to mett

#include<iostream>
using namespace std;

string func(string str, char ch)
{
    for (int i = 0; i < str.length(); i++)
    {
        if(str[i] == ch)
        {
            str.erase(i,1);
        }
    }
    return str;    
}

int main()
{
    string str;
    cout<<"Enter any String"<<endl;
    getline(cin, str);
    cout<<"Enter any character to remove from string"<<endl;
    char ch;
    cin>>ch;
    cout<<func(str, ch);

    return 0;
}