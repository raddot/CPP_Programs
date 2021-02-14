#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int num,logn;
    cout<<"Enter the number -> "<<endl;
    cin>>num;
    logn = log(num);
    if(num < 10 && logn < 10)
    {
        cout<<"Number and its log value are less than 10"<<endl;
    }
    else
    {
        cout<<"Number and its log value are greater than 10"<<endl;
    }
    return 0;
}