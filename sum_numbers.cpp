#include<iostream>
#include<cmath>
using namespace std;
int sum_numbers(int num);

int sum_numbers(int num)
{
    int sum = 0;
    if(num == 1)
        return 1;
    else
    {
        sum = num + sum_numbers(num - 1);
        return sum;
    }
}

int main()
{
    int num = 0;
    int result;
    cout<<"Enter any integer greater than 0 -> "<<endl;
    cin>>num;
    result = sum_numbers(num);
    cout<<"The sum of integers is -> "<<result<<endl;
    cin.ignore();
    cin.get();
    return 0;
}

