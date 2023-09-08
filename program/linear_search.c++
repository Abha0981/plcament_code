#include<iostream>
using namespace std;
bool search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {   
        if(key == arr[i])
        {
            return true;
        }
    }
    return false;
    
}

int main()
{
    int arr[100],size,key;
    int array[10] ={2,3,5,6,3,5,-5,5,-65,-9};
    cout<<"Enter any key "<<endl;
    cin>>key;
    search(arr, size, key);

    bool found(int arr[], int size, int key);

    if(found)
    {
        cout<<"key is found";
    }
    else{
        cout<<"key is absent ";
    }

    return 0;
}