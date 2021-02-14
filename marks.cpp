#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int marks1, marks2, marks3;
    cout<<"Enter marks1 value -> "<<endl;
    cin>>marks1;
    cout<<"Enter marks2 value -> "<<endl;
    cin>>marks2;
    cout<<"Enter marks3 value -> "<<endl;
    cin>>marks3;
    cout<<"Marks are -> "<<marks1<<", "<<marks2<<", "<<marks3;
    cout<<"\nTotal is -> "<<marks1+marks2+marks3;
    cout<<"\nPercentage is -> "<<(marks1+marks2+marks3)/3;
    return 0;
}