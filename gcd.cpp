#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int num1,num2,temp;
    cout<<"To find GCD of two numbers -> "<<endl;
    cout<<"\nEnter the first number ->"<<endl;
    cin>>num1;
    cout<<"\nEnter the second number ->"<<endl;
    cin>>num2;
    while(num2 != 0)
    {
        temp = num1%num2;
        num1 = num2;
        num2 = temp;
    }
    cout<<"GCD of two numbers is -> "<<num1;
    return 0;
}