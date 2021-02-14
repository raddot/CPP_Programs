#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int num,i;
    bool flag;
    cout<<"Enter the number ->"<<endl;
    cin>>num;
    for(i=2;i<num;i++)
    {
        if(num%i == 0)
        {
           flag = 1;
        }
    }
    if(flag == 1)
    {
        cout<<"Number is not a prime number"<<endl;
    }
    else
    {
        cout<<"Number is a prime number"<<endl;
    }
    return 0;
}