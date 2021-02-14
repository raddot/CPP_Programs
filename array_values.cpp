#include<iostream>
using namespace std;

int main()
{
    int i;
    int arr[5] = {34,29,50,11,96};
    int *ptr;
    ptr = arr;
    cout<<"The value of array by pointers is -> "<<endl;
    for(i=0;i<5;i++)
    {
        cout<<*(ptr+i)<<endl;
    }
    cout<<"The value of array by using array is -> "<<endl;
    for(i=0;i<5;i++)
    {
        cout<<*(arr+i)<<endl;
    }
    return 0;
}