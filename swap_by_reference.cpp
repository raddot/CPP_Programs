#include<iostream>
using namespace std;
void swap(int &num1, int &num2);
int main()
{
    int num1=10,num2=20;
    cout<<"Value of num1 before swapping -> "<<num1<<endl;
    cout<<"Value of num2 before swapping -> "<<num2<<endl;
    swap(num1,num2);
    cout<<"-------------------------------------------------\n";
    cout<<"Value of num1 after swapping -> "<<num1<<endl;
    cout<<"Value of num1 after swapping -> "<<num2<<endl;
    return 0;
}

void swap(int &num1, int &num2)
{
    int temp;
    temp=num1;
    num1=num2;
    num2=temp;
    return;
}