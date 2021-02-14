#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the number ->"<<endl;
    cin>>num;
    if(num < 100)
    {
        cout<<"Number is less than 100"<<endl;
    }
    else if(num > 100)
    {
        cout<<"Number is greater than 100"<<endl;
    }
    else
    {
        cout<<"Number is equal is 100"<<endl;
    }
    return 0;
}